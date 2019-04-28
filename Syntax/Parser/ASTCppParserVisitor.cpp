module SoupSyntax;
using namespace Soup::Syntax;
using namespace Soup::Syntax::InnerTree;

template<class T>
struct SeparatorListResult
{
    std::vector<std::shared_ptr<const T>> Items;
    std::vector<std::shared_ptr<const SyntaxToken>> Separators;
};

void Trace(const char* message)
{
    // std::cout << message << std::endl;
}

template<class TOut, class TIn>
std::shared_ptr<TOut> SafeDynamicCast(const std::shared_ptr<TIn>& value, int line)
{
    auto result = std::dynamic_pointer_cast<TOut>(value);
    if (result == nullptr)
        throw std::runtime_error("Failed dynamic cast: " + std::to_string(line));
    return result;
}

ASTCppParserVisitor::ASTCppParserVisitor(antlr4::BufferedTokenStream* tokenStream) :
    m_tokenStream(tokenStream)
{
}

antlrcpp::Any ASTCppParserVisitor::visitDoubleGreaterThan(CppParser::DoubleGreaterThanContext *context)
{
    Trace("VisitDoubleGreaterThan");

    // Custom Create Token implementation that combines the two GreaterThan tokens into one

    // Load the leading trivia from the first token
    auto firstToken = context->GreaterThan().at(0)->getSymbol();
    auto firstTokenIndex = firstToken->getTokenIndex();
    auto leadingTrivia = GetLeadingTrivia(firstTokenIndex);
    if (!GetTrailingTrivia(firstTokenIndex).empty())
        throw std::runtime_error("Cannot have trivia after first GreaterThan token.");

    // Load the trailing trivia from the first token
    auto secondToken = context->GreaterThan().at(1)->getSymbol();
    auto secondTokenIndex = secondToken->getTokenIndex();
    auto trailingTrivia = GetTrailingTrivia(secondTokenIndex);
    if (!GetLeadingTrivia(secondTokenIndex).empty())
        throw std::runtime_error("Cannot have trivia before second GreaterThan token.");

    // If a keyword then create the shared token
    // Otherwise create a unique token
    return SyntaxFactory::CreateKeywordToken(
        SyntaxTokenType::DoubleGreaterThan,
        std::move(leadingTrivia),
        std::move(trailingTrivia));
}

antlrcpp::Any ASTCppParserVisitor::visitNamespaceName(CppParser::NamespaceNameContext* context)
{
    Trace("VisitNamespaceName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNamespaceAlias(CppParser::NamespaceAliasContext* context)
{
    Trace("VisitNamespaceAlias");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitClassName(CppParser::ClassNameContext* context)
{
    Trace("VisitClassName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateName(CppParser::TemplateNameContext* context)
{
    Trace("VisitTemplateName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTranslationUnit(CppParser::TranslationUnitContext* context)
{
    Trace("VisitTranslationUnit");

    // Check for the optional declaration sequences
    std::vector<std::shared_ptr<const Declaration>> declarationSequence = {};
    if (context->declarationSequence() != nullptr)
    {
        declarationSequence = visit(context->declarationSequence())
            .as<std::vector<std::shared_ptr<const Declaration>>>();
    }

    return SyntaxFactory::CreateTranslationUnit(
        SyntaxFactory::CreateSyntaxList<Declaration>(
            std::move(declarationSequence)),
        CreateToken(SyntaxTokenType::EndOfFile, context->EOF()));
}

antlrcpp::Any ASTCppParserVisitor::visitPrimaryExpression(CppParser::PrimaryExpressionContext* context)
{
    Trace("VisitPrimaryExpression");
    if (context->This() != nullptr)
    {
        auto thisToken = visit(context->This());
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateThisExpression(
                std::move(thisToken)));
    }
    else
    {
        return visitChildren(context);
    }
}

antlrcpp::Any ASTCppParserVisitor::visitIdentifierExpression(CppParser::IdentifierExpressionContext *context)
{
    Trace("VisitIdentifierExpression");

    // Check if direct child is unqualified
    if (context->unqualifiedIdentifier() != nullptr)
    {
        // Wrap the identifier in an expression
        auto identifier = SafeDynamicCast<const UnqualifiedIdentifier>(
            visit(context->unqualifiedIdentifier())
                .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateIdentifierExpression(
                nullptr,
                std::move(identifier)));
    }
    else
    {
        return visitChildren(context);
    }
}

antlrcpp::Any ASTCppParserVisitor::visitUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext* context)
{
    Trace("VisitUnqualifiedIdentifier");
    if (context->Identifier() != nullptr)
    {
        auto identifier = visit(context->Identifier());
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateSimpleIdentifier(std::move(identifier)));
    }
    else if (context->className() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateDestructorIdentifier(
                visit(context->Tilde()),
                visit(context->className()->Identifier())));
    }
    else if (context->declarationTypeSpecifier() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visitChildren(context);
    }
}

antlrcpp::Any ASTCppParserVisitor::visitQualifiedIdentifier(
    CppParser::QualifiedIdentifierContext* context)
{
    Trace("VisitQualifiedIdentifier");
    auto qualifier = visit(context->nestedNameSpecifier())
        .as<std::shared_ptr<const NestedNameSpecifier>>();
    auto identifier = SafeDynamicCast<const UnqualifiedIdentifier>(
        visit(context->unqualifiedIdentifier())
            .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);

    if (context->Template() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }

    // Replace the right name with the current unqlaified name
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateIdentifierExpression(
            std::move(qualifier),
            std::move(identifier)));
}

antlrcpp::Any ASTCppParserVisitor::visitNestedNameSpecifier(CppParser::NestedNameSpecifierContext* context)
{
    Trace("VisitNestedNameSpecifier");

    // Check for the optional specifier sequence
    SeparatorListResult<SyntaxNode> specifierList = {};
    if (context->nestedNameSpecifierSequence() != nullptr)
    {
        specifierList = visit(context->nestedNameSpecifierSequence())
            .as<SeparatorListResult<SyntaxNode>>();
    }

    // Add the final colon separator to front of list
    std::shared_ptr<const SyntaxToken> doubleColonToken = visit(context->DoubleColon());
    specifierList.Separators.insert(
        specifierList.Separators.begin(),
        std::move(doubleColonToken));

    // Check for final root qualifiers
    if (context->Identifier() != nullptr)
    {
        // Simple name qualified
        auto rootQualifier = SyntaxFactory::CreateSimpleIdentifier(
            visit(context->Identifier()));
        specifierList.Items.insert(
            specifierList.Items.begin(),
            std::move(rootQualifier));
    }
    else if (context->declarationTypeSpecifier() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }

    return SyntaxFactory::CreateNestedNameSpecifier(
        SyntaxFactory::CreateSyntaxSeparatorList(
            std::move(specifierList.Items),
            std::move(specifierList.Separators)));
}

antlrcpp::Any ASTCppParserVisitor::visitNestedNameSpecifierSequence(CppParser::NestedNameSpecifierSequenceContext *context)
{
    Trace("VisitNestedNameSpecifierSequence");

    // Check for the optional specifier sequence
    SeparatorListResult<SyntaxNode> specifierList = {};
    if (context->nestedNameSpecifierSequence() != nullptr)
    {
        specifierList = visit(context->nestedNameSpecifierSequence())
            .as<SeparatorListResult<SyntaxNode>>();
    }

    if (context->Identifier() != nullptr)
    {
        auto simpleIdentifier = SyntaxFactory::CreateSimpleIdentifier(
            visit(context->Identifier()));
        specifierList.Items.insert(
            specifierList.Items.begin(),
            std::move(simpleIdentifier));
    }
    else if (context->simpleTemplateIdentifier() != nullptr)
    {
        // Check for the optional template
        if (context->Template() != nullptr)
        {
            throw std::logic_error(std::string(__func__) + " NotImplemented Template");
        }

        std::shared_ptr<const SyntaxNode> simpleTemplateIdentifier =
            visit(context->simpleTemplateIdentifier());
        specifierList.Items.insert(
            specifierList.Items.begin(),
            std::move(simpleTemplateIdentifier));
    }
    else 
    {
        throw std::logic_error("Unknown NestedNameSpecifierSequence type.");
    }

    // Add the double colon token to the front
    std::shared_ptr<const SyntaxToken> doubleColonToken = visit(context->DoubleColon());
    specifierList.Separators.insert(
        specifierList.Separators.begin(),
        doubleColonToken);

    return specifierList;
}

antlrcpp::Any ASTCppParserVisitor::visitLambdaExpression(CppParser::LambdaExpressionContext* context)
{
    Trace("VisitLambdaExpression");

    // Check for optional capture
    auto lambdaIntroducerContext = context->lambdaIntroducer();
    if (lambdaIntroducerContext->lambdaCapture() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented capture");
    }

    // Check for optional declarator
    std::shared_ptr<const ParameterList> parameterList = nullptr;
    if (context->lambdaDeclarator() != nullptr)
    {
        parameterList = visit(context->lambdaDeclarator());
    }

    std::shared_ptr<const SyntaxNode> body = visit(context->compoundStatement());
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateLambdaExpression(
            visit(lambdaIntroducerContext->OpenBracket()),
            visit(lambdaIntroducerContext->CloseBracket()),
            std::move(parameterList),
            SafeDynamicCast<const CompoundStatement>(body, __LINE__)));
}

antlrcpp::Any ASTCppParserVisitor::visitLambdaIntroducer(CppParser::LambdaIntroducerContext* context)
{
    Trace("VisitLambdaIntroducer");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLambdaDeclarator(CppParser::LambdaDeclaratorContext* context)
{
    Trace("VisitLambdaDeclarator");

    // Check for optional declarationSpecifierSequence
    if (context->declarationSpecifierSequence() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented declarationSpecifierSequence");
    }

    // Check for optional noExceptionSpecifier
    if (context->noExceptionSpecifier() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented noExceptionSpecifier");
    }

    // Check for optional attributeSpecifierSequence
    if (context->attributeSpecifierSequence() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented attributeSpecifierSequence");
    }
    
    // Check for optional trailingReturnType
    if (context->trailingReturnType() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented trailingReturnType");
    }

    return SyntaxFactory::CreateParameterList(
        visit(context->OpenParenthesis()),
        visit(context->parameterDeclarationClause()),
        visit(context->CloseParenthesis()));
}

antlrcpp::Any ASTCppParserVisitor::visitLambdaCapture(CppParser::LambdaCaptureContext* context)
{
    Trace("VisitLambdaCapture");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitCaptureDefault(CppParser::CaptureDefaultContext* context)
{
    Trace("VisitCaptureDefault");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitCaptureList(CppParser::CaptureListContext* context)
{
    Trace("VisitCaptureList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitCapture(CppParser::CaptureContext* context)
{
    Trace("VisitCapture");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitSimpleCapture(CppParser::SimpleCaptureContext* context)
{
    Trace("VisitSimpleCapture");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerCapture(CppParser::InitializerCaptureContext* context)
{
    Trace("VisitInitializerCapture");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFoldExpression(CppParser::FoldExpressionContext* context)
{
    Trace("VisitFoldExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFoldOperator(CppParser::FoldOperatorContext* context)
{
    Trace("VisitFoldOperator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExplicitTypeCoversionOperatorExpression(
    CppParser::ExplicitTypeCoversionOperatorExpressionContext *context)
{
    Trace("VisitExplicitTypeCoversionOperatorExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitPostfixOperator(CppParser::PostfixOperatorContext *context)
{
    Trace("VisitPostfixOperator");
    throw std::logic_error(std::string(__func__) + " NOT USED!");
}

antlrcpp::Any ASTCppParserVisitor::visitNamedCastExpression(CppParser::NamedCastExpressionContext *context)
{
    Trace("VisitNamedCastExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitMemberAccessOperator(CppParser::MemberAccessOperatorContext *context)
{
    Trace("VisitMemberAccessOperator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNamedCastType(CppParser::NamedCastTypeContext *context)
{
    Trace("VisitNamedCastType");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeIdentificationExpression(
    CppParser::TypeIdentificationExpressionContext *context)
{
    Trace("VisitTypeIdentificationExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitPostfixExpression(CppParser::PostfixExpressionContext* context)
{
    Trace("VisitPostfixExpression");
    if (context->primaryExpression() != nullptr)
    {
        return visit(context->primaryExpression());
    }
    else if(context->postfixExpression() != nullptr)
    {
        // Handle all recursive expressions
        auto recursiveExpression = SafeDynamicCast<const Expression>(
            visit(context->postfixExpression())
                .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);

        if (context->OpenBracket() != nullptr)
        {
            // Subscript operator expression
            // postfixExpression OpenBracket expressionOrBracedInitializerList CloseBracket
            auto openBracketToken = visit(context->OpenBracket());
            auto initializerList = SafeDynamicCast<const Expression>(
                visit(context->expressionOrBracedInitializerList())
                    .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
            if (initializerList == nullptr)
                throw std::runtime_error("TODO: Braced initializer postfix?");
            auto closeBracketToken = visit(context->CloseBracket());
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateSubscriptExpression(
                    std::move(recursiveExpression),
                    std::move(openBracketToken),
                    std::move(initializerList),
                    std::move(closeBracketToken)));
        }
        else if (context->OpenParenthesis() != nullptr)
        {
            // postfixExpression OpenParenthesis expressionList? CloseParenthesis
            auto openParenthesisToken = visit(context->OpenParenthesis());

            // Check for the optional expression list
            SeparatorListResult<SyntaxNode> expressionList = {};
            if (context->expressionList() != nullptr)
            {
                expressionList = visit(context->expressionList())
                    .as<const SeparatorListResult<SyntaxNode>>();
            }

            auto parameters = SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                std::move(expressionList.Items),
                std::move(expressionList.Separators));

            auto closeParenthesisToken = visit(context->CloseParenthesis());

            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateInvocationExpression(
                    std::move(recursiveExpression),
                    std::move(openParenthesisToken),
                    std::move(parameters),
                    std::move(closeParenthesisToken)));
        }
        else if (context->memberAccessOperator() != nullptr)
        {
            // postfixExpression memberAccessOperator Template? identifierExpression
            // postfixExpression memberAccessOperator pseudoDestructorName
            std::shared_ptr<const Expression> rightExpression = nullptr;
            if (context->identifierExpression() != nullptr)
            {
                rightExpression = SafeDynamicCast<const Expression>(
                    visit(context->identifierExpression())
                        .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
            }
            else
            {
                throw std::logic_error(std::string(__func__) + "memberAccessOperator NotImplemented");
            }
            
            auto memberAccessOperator = context->memberAccessOperator();
            if (memberAccessOperator->Arrow() != nullptr)
            {
                return std::static_pointer_cast<const SyntaxNode>(
                    SyntaxFactory::CreateBinaryExpression(
                        BinaryOperator::MemberOfPointer,
                        std::move(recursiveExpression),
                        visit(memberAccessOperator->Arrow()),
                        std::move(rightExpression)));
            }
            else if (memberAccessOperator->Period() != nullptr)
            {
                return std::static_pointer_cast<const SyntaxNode>(
                    SyntaxFactory::CreateBinaryExpression(
                        BinaryOperator::MemberOfObject,
                        std::move(recursiveExpression),
                        visit(memberAccessOperator->Period()),
                        std::move(rightExpression)));
            }
            else
            {
                throw std::runtime_error("Unknown member access operator.");
            }
        }
        else if (context->postfixOperator() != nullptr)
        {
            // Unary expression
            // postfixExpression postfixOperator
            auto operatorContext = context->postfixOperator();
            UnaryOperator unaryOperator;
            std::shared_ptr<const SyntaxToken> operatorToken;
            if (operatorContext->DoublePlus() != nullptr)
            {
                unaryOperator = UnaryOperator::PostIncrement;
                operatorToken = visit(operatorContext->DoublePlus());
            }
            else if (operatorContext->DoubleMinus() != nullptr)
            {
                unaryOperator = UnaryOperator::PostDecrement;
                operatorToken = visit(operatorContext->DoubleMinus());
            }
            else
            {
                throw std::runtime_error("Unknown postfix operator.");
            }
            
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateUnaryExpression(
                    unaryOperator,
                    std::move(operatorToken),
                    std::move(recursiveExpression)));
        }
    }
    else
    {
        if (context->explicitTypeCoversionOperatorExpression() != nullptr)
        {
            // explicitTypeCoversionOperatorExpression
            throw std::logic_error(std::string(__func__) + "explicitTypeCoversionOperatorExpression NotImplemented");
        }
        else if (context->simpleTypeSpecifier() != nullptr)
        {
            // simpleTypeSpecifier bracedInitializerList
            throw std::logic_error(std::string(__func__) + "simpleTypeSpecifier NotImplemented");
        }
        else if (context->typenameSpecifier() != nullptr)
        {
            // typenameSpecifier bracedInitializerList
            throw std::logic_error(std::string(__func__) + "typenameSpecifier NotImplemented");
        }
        else if (context->namedCastExpression() != nullptr)
        {
            // namedCastExpression
            throw std::logic_error(std::string(__func__) + "namedCastExpression NotImplemented");
        }
        else if (context->typeIdentificationExpression() != nullptr)
        {
            // typeIdentificationExpression
            throw std::logic_error(std::string(__func__) + "typeIdentificationExpression NotImplemented");
        }
    }

    throw std::logic_error(std::string(__func__) + "Fallthrough NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExpressionList(CppParser::ExpressionListContext* context)
{
    Trace("VisitExpressionList");
    return visit(context->initializerList());
}

antlrcpp::Any ASTCppParserVisitor::visitPseudoDestructorName(CppParser::PseudoDestructorNameContext* context)
{
    Trace("VisitPseudoDestructorName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitUnaryExpression(CppParser::UnaryExpressionContext* context)
{
    Trace("VisitUnaryExpression");

    if (context->postfixExpression() != nullptr)
    {
        return visit(context->postfixExpression());
    }
    else if (context->castExpression() != nullptr)
    {
        // Parse the prefix unary operator
        auto subExpression = SafeDynamicCast<const Expression>(
            visit(context->castExpression())
                .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);

        UnaryOperator unaryOperator;
        std::shared_ptr<const SyntaxToken> operatorToken;
        if (context->DoublePlus() != nullptr)
        {
            unaryOperator = UnaryOperator::PreIncrement;
            operatorToken = visit(context->DoublePlus());
        }
        else if (context->DoubleMinus() != nullptr)
        {
            unaryOperator = UnaryOperator::PreDecrement;
            operatorToken = visit(context->DoubleMinus());
        }
        else if (context->unaryOperator() != nullptr)
        {
            auto operatorContext = context->unaryOperator();
            if (operatorContext->Asterisk() != nullptr)
            {
                unaryOperator = UnaryOperator::Indirection;
                operatorToken = visit(operatorContext->Asterisk());
            }
            else if (operatorContext->Ampersand() != nullptr)
            {
                unaryOperator = UnaryOperator::AddressOf;
                operatorToken = visit(operatorContext->Ampersand());
            }
            else if (operatorContext->Plus() != nullptr)
            {
                unaryOperator = UnaryOperator::Plus;
                operatorToken = visit(operatorContext->Plus());
            }
            else if (operatorContext->Minus() != nullptr)
            {
                unaryOperator = UnaryOperator::Minus;
                operatorToken = visit(operatorContext->Minus());
            }
            else if (operatorContext->ExclamationMark() != nullptr)
            {
                unaryOperator = UnaryOperator::LogicalNot;
                operatorToken = visit(operatorContext->ExclamationMark());
            }
            else if (operatorContext->Tilde() != nullptr)
            {
                unaryOperator = UnaryOperator::BitwiseNot;
                operatorToken = visit(operatorContext->Tilde());
            }
            else
            {
                throw std::runtime_error("Unknown unary operator.");
            }
        }
        else
        {
            throw std::runtime_error("Unknown prefix unary operator.");
        }

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateUnaryExpression(
                unaryOperator,
                std::move(operatorToken),
                std::move(subExpression)));
    }
    else
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitUnaryOperator(CppParser::UnaryOperatorContext* context)
{
    Trace("VisitUnaryOperator");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitNewExpression(CppParser::NewExpressionContext* context)
{
    Trace("VisitNewExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNewPlacement(CppParser::NewPlacementContext* context)
{
    Trace("VisitNewPlacement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNewTypeIdentifier(CppParser::NewTypeIdentifierContext* context)
{
    Trace("VisitNewTypeIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNewDeclarator(CppParser::NewDeclaratorContext* context)
{
    Trace("VisitNewDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext* context)
{
    Trace("VisitNoPointerNewDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNewInitializer(CppParser::NewInitializerContext* context)
{
    Trace("VisitNewInitializer");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDeleteExpression(CppParser::DeleteExpressionContext* context)
{
    Trace("VisitDeleteExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNoExceptionExpression(CppParser::NoExceptionExpressionContext* context)
{
    Trace("VisitNoExceptionExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitCastExpression(CppParser::CastExpressionContext* context)
{
    Trace("VisitCastExpression");
    if (context->OpenParenthesis() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->unaryExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitBinaryExpression(CppParser::BinaryExpressionContext* context)
{
    Trace("VisitBinaryExpression");
    if (context->binaryOperator() != nullptr)
    {
        std::shared_ptr<const SyntaxToken> binaryOperatorToken = visit(context->binaryOperator());

        // Get the binary operator from the token type
        BinaryOperator binaryOperator;
        switch (binaryOperatorToken->GetType())
        {
            case SyntaxTokenType::PeriodAsterisk:
                binaryOperator = BinaryOperator::PointerToMemberOfObject;
                break;
            case SyntaxTokenType::ArrowAsterisk:
                binaryOperator = BinaryOperator::PointerToMemberOfPointer;
                break;
            case SyntaxTokenType::Asterisk:
                binaryOperator = BinaryOperator::Multiplication;
                break;
            case SyntaxTokenType::ForwardSlash:
                binaryOperator = BinaryOperator::Division;
                break;
            case SyntaxTokenType::Percent:
                binaryOperator = BinaryOperator::Modulo;
                break;
            case SyntaxTokenType::Plus:
                binaryOperator = BinaryOperator::Addition;
                break;
            case SyntaxTokenType::Minus:
                binaryOperator = BinaryOperator::Subtraction;
                break;
            case SyntaxTokenType::DoubleLessThan:
                binaryOperator = BinaryOperator::BitwiseLeftShift;
                break;
            case SyntaxTokenType::DoubleGreaterThan:
                binaryOperator = BinaryOperator::BitwiseRightShift;
                break;
            case SyntaxTokenType::LessThan:
                binaryOperator = BinaryOperator::LessThan;
                break;
            case SyntaxTokenType::GreaterThan:
                binaryOperator = BinaryOperator::GreaterThan;
                break;
            case SyntaxTokenType::LessThanEqual:
                binaryOperator = BinaryOperator::LessThanOrEqual;
                break;
            case SyntaxTokenType::GreaterThanEqual:
                binaryOperator = BinaryOperator::GreaterThanOrEqual;
                break;
            case SyntaxTokenType::DoubleEqual:
                binaryOperator = BinaryOperator::Equals;
                break;
            case SyntaxTokenType::ExclamationMarkEqual:
                binaryOperator = BinaryOperator::NotEquals;
                break;
            case SyntaxTokenType::Ampersand:
                binaryOperator = BinaryOperator::BitwiseAnd;
                break;
            case SyntaxTokenType::Caret:
                binaryOperator = BinaryOperator::BitwiseExclusiveOr;
                break;
            case SyntaxTokenType::VerticalBar:
                binaryOperator = BinaryOperator::BitwiseOr;
                break;
            case SyntaxTokenType::DoubleAmpersand:
                binaryOperator = BinaryOperator::LogicalAnd;
                break;
            case SyntaxTokenType::DoubleVerticalBar:
                binaryOperator = BinaryOperator::LogicalOr;
                break;
        default:
            throw std::runtime_error("Unknown binary operator token.");
        }

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                binaryOperator,
                SafeDynamicCast<const Expression>(
                    visit(context->binaryExpression())
                        .as<std::shared_ptr<const SyntaxNode>>(), __LINE__),
                std::move(binaryOperatorToken),
                SafeDynamicCast<const Expression>(
                    visit(context->castExpression())
                        .as<std::shared_ptr<const SyntaxNode>>(), __LINE__)));
    }
    else
    {
        return visit(context->castExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitBinaryOperator(CppParser::BinaryOperatorContext* context)
{
    Trace("VisitBinaryOperator");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitConditionalExpression(CppParser::ConditionalExpressionContext* context)
{
    Trace("VisitConditionalExpression");
    if (context->QuestionMark() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->binaryExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitThrowExpression(CppParser::ThrowExpressionContext* context)
{
    Trace("VisitThrowExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAssignmentExpression(CppParser::AssignmentExpressionContext* context)
{
    Trace("VisitAssignmentExpression");
    if (context->conditionalExpression() != nullptr)
    {
        return visit(context->conditionalExpression());
    }
    else if (context->assignmentOperator() != nullptr)
    {
        auto leftExpression = SafeDynamicCast<const Expression>(
                    visit(context->binaryExpression())
                        .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
        auto rightExpression = SafeDynamicCast<const Expression>(
                    visit(context->initializerClause())
                        .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);

        auto operatorContext = context->assignmentOperator();
        if (operatorContext->Equal() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::SimpleAssignment,
                    std::move(leftExpression),
                    visit(operatorContext->Equal()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->AsteriskEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::MultiplicationAssignment,
                    std::move(leftExpression),
                    visit(operatorContext->AsteriskEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->ForwardSlashEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::DivisionAssignment,
                    std::move(leftExpression),
                    visit(operatorContext->ForwardSlashEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->PercentEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::ModuloAssignment,
                    std::move(leftExpression),
                    visit(operatorContext->PercentEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->PlusEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::AdditionAssignment,
                    std::move(leftExpression),
                    visit(operatorContext->PlusEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->MinusEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::SubtractionAssignment,
                    std::move(leftExpression),
                    visit(operatorContext->MinusEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->DoubleGreaterThanEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::BitwiseRightShiftAssignment,
                    std::move(leftExpression),
                    visit(operatorContext->DoubleGreaterThanEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->DoubleLessThanEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::BitwiseLeftShiftAssignment,
                    std::move(leftExpression),
                    visit(operatorContext->DoubleLessThanEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->AmpersandEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::BitwiseAndAssignment,
                    std::move(leftExpression),
                    visit(operatorContext->AmpersandEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->CaretEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::BitwiseExclusiveOrAssignment,
                    std::move(leftExpression),
                    visit(operatorContext->CaretEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->VerticalBarEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::BitwiseOrAssignment,
                    std::move(leftExpression),
                    visit(operatorContext->VerticalBarEqual()),
                    std::move(rightExpression)));
        }
        else
        {
            throw std::runtime_error("Unknown member access operator.");
        }
    }
    else
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitAssignmentOperator(CppParser::AssignmentOperatorContext* context)
{
    Trace("VisitAssignmentOperator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExpression(CppParser::ExpressionContext* context)
{
    Trace("VisitExpression");
    auto assignmentExpression = visit(context->assignmentExpression());

    // Handle recursive
    if (context->expression() != nullptr)
    {
        // expression Comma assignmentExpression
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return assignmentExpression;
    }
}

antlrcpp::Any ASTCppParserVisitor::visitConstantExpression(CppParser::ConstantExpressionContext* context)
{
    Trace("VisitConstantExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitStatement(CppParser::StatementContext *context)
{
    Trace("VisitStatement");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerStatement(CppParser::InitializerStatementContext* context)
{
    Trace("VisitInitializerStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitCondition(CppParser::ConditionContext* context)
{
    Trace("VisitCondition");
    if (context->expression() != nullptr)
    {
        return visit(context->expression());
    }
    else
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitLabeledStatement(CppParser::LabeledStatementContext* context)
{
    Trace("VisitLabeledStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExpressionStatement(CppParser::ExpressionStatementContext* context)
{
    Trace("VisitExpressionStatement");
    if (context->expression() != nullptr)
    {
        auto expression = SafeDynamicCast<const Expression>(
            visit(context->expression())
                .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateExpressionStatement(
                std::move(expression),
                visit(context->Semicolon())));
    }
    else
    {
        // The degenerate expression statement with no expression has a special type
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateEmptyStatement(
                visit(context->Semicolon())));
    }
}

antlrcpp::Any ASTCppParserVisitor::visitCompoundStatement(CppParser::CompoundStatementContext* context)
{
    Trace("VisitCompoundStatement");

    // Check for optional sequence
    std::vector<std::shared_ptr<const Statement>> statements;
    if (context->statementSequence() != nullptr)
    {
        statements = visit(context->statementSequence())
            .as<std::vector<std::shared_ptr<const Statement>>>();
    }

    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateCompoundStatement(
            visit(context->OpenBrace()),
            SyntaxFactory::CreateSyntaxList<Statement>(std::move(statements)),
            visit(context->CloseBrace())));
}

antlrcpp::Any ASTCppParserVisitor::visitStatementSequence(CppParser::StatementSequenceContext* context)
{
    Trace("VisitStatementSequence");

    // Handle the recursive rule
    std::vector<std::shared_ptr<const Statement>> statements;
    if (context->statementSequence() != nullptr)
    {
        statements = visit(context->statementSequence())
            .as<std::vector<std::shared_ptr<const Statement>>>();
    }

    // Handle the next statement
    auto statement = SafeDynamicCast<const Statement>(
        visit(context->statement())
            .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
    statements.push_back(std::move(statement));

    return statements;
}

antlrcpp::Any ASTCppParserVisitor::visitSelectionStatement(CppParser::SelectionStatementContext* context)
{
    Trace("VisitSelectionStatement");
    if (context->If() != nullptr)
    {
        // Visit the condition expression
        auto condition = SafeDynamicCast<const Expression>(
            visit(context->condition())
                .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);

        // Visit the true statement
        auto trueStatement = SafeDynamicCast<const Statement>(
            visit(context->statement().at(0))
                .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);

        // Check for optional else clause
        std::shared_ptr<const ElseClause> elseClause = nullptr;
        if (context->Else() != nullptr)
        {
            // Visit the false statement
            auto falseStatement = SafeDynamicCast<const Statement>(
                visit(context->statement().at(1))
                    .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);

            elseClause = SyntaxFactory::CreateElseClause(
                visit(context->Else()),
                std::move(falseStatement));
        }

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateIfStatement(
                visit(context->If()),
                visit(context->OpenParenthesis()),
                std::move(condition),
                visit(context->CloseParenthesis()),
                std::move(trueStatement),
                std::move(elseClause)));
    }
    else
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitIterationStatement(CppParser::IterationStatementContext* context)
{
    Trace("VisitIterationStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitForInitializerStatement(CppParser::ForInitializerStatementContext* context)
{
    Trace("VisitForInitializerStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitForRangeDeclaration(CppParser::ForRangeDeclarationContext* context)
{
    Trace("VisitForRangeDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitForRangeInitializer(CppParser::ForRangeInitializerContext* context)
{
    Trace("VisitForRangeInitializer");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitJumpStatement(CppParser::JumpStatementContext* context)
{
    Trace("VisitJumpStatement");
    if (context->Return() != nullptr)
    {
        // Check for optional expression
        std::shared_ptr<const Expression> expression = nullptr;
        if (context->expressionOrBracedInitializerList() != nullptr)
        {
            expression = SafeDynamicCast<const Expression>(
                visit(context->expressionOrBracedInitializerList())
                    .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
            if (expression == nullptr)
                throw std::runtime_error("TODO: Braced initializer jump?");
        }

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateReturnStatement(
                visit(context->Return()),
                std::move(expression),
                visit(context->Semicolon())));
    }
    else
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationStatement(CppParser::DeclarationStatementContext* context)
{
    Trace("VisitDeclarationStatement");

    auto declaration = SafeDynamicCast<const Declaration>(
        visit(context->blockDeclaration())
            .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
    
    // Create the wrapper statement for the declaration
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateDeclarationStatement(std::move(declaration)));
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationSequence(CppParser::DeclarationSequenceContext* context)
{
    Trace("VisitDeclarationSequence");

    // Handle the recursive rule
    std::vector<std::shared_ptr<const Declaration>> declarations = {};
    auto childSequence = context->declarationSequence();
    if (childSequence != nullptr)
    {
        declarations = visit(childSequence)
            .as<std::vector<std::shared_ptr<const Declaration>>>();
    }

    // Handle the new item
    auto declaration = SafeDynamicCast<const Declaration>(
        visit(context->declaration())
            .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
    if (declaration == nullptr)
    {
        throw std::runtime_error("Syntax node was not a declaration.");
    }

    declarations.push_back(declaration);

    return declarations;
}

antlrcpp::Any ASTCppParserVisitor::visitDeclaration(CppParser::DeclarationContext *context)
{
    Trace("VisitDeclaration");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitBlockDeclaration(CppParser::BlockDeclarationContext *context)
{
    Trace("VisitBlockDeclaration");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext* context)
{
    Trace("VisitNoDeclarationSpecifierFunctionDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAliasDeclaration(CppParser::AliasDeclarationContext* context)
{
    Trace("VisitAliasDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitSimpleDeclaration(CppParser::SimpleDeclarationContext* context)
{
    Trace("VisitSimpleDeclaration");

    auto declarationSpecifierSequence = visit(context->declarationSpecifierSequence())
        .as<std::shared_ptr<const DeclarationSpecifierSequence>>();

    // Check for optional initializer declarator list
    SeparatorListResult<InitializerDeclarator> initializerDeclaratorList;
    if (context->initializerDeclaratorList() != nullptr)
    {
        initializerDeclaratorList = visit(context->initializerDeclaratorList())
            .as<SeparatorListResult<InitializerDeclarator>>();
    }

    // TODO
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateSimpleDeclaration(
            std::move(declarationSpecifierSequence),
            SyntaxFactory::CreateInitializerDeclaratorList(
                SyntaxFactory::CreateSyntaxSeparatorList<InitializerDeclarator>(
                    std::move(initializerDeclaratorList.Items),
                    std::move(initializerDeclaratorList.Separators))),
            visit(context->Semicolon())));
}

antlrcpp::Any ASTCppParserVisitor::visitStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext* context)
{
    Trace("VisitStaticAssertDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEmptyDeclaration(CppParser::EmptyDeclarationContext* context)
{
    Trace("VisitEmptyDeclaration");
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateEmptyDeclaration(
            visit(context->Semicolon())));
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeDeclaration(CppParser::AttributeDeclarationContext* context)
{
    Trace("VisitAttributeDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationModifier(CppParser::DeclarationModifierContext* context)
{
    Trace("visitDeclarationModifier");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationSpecifierSequence(CppParser::DeclarationSpecifierSequenceContext* context)
{
    // A declaration specifier sequence contains a single type specifier node along with any number
    // of token modifiers in any order. To support this we parse the list as the shared any
    // type and do the conversion once the list is completely built up
    Trace("VisitDeclarationSpecifierSequence");

    // Check for the optional leading modifiers
    std::vector<std::shared_ptr<const SyntaxToken>> leadingModifiers;
    if (context->leadingDeclarationModifierSequence() != nullptr)
    {
        leadingModifiers = visit(context->leadingDeclarationModifierSequence())
            .as<std::vector<std::shared_ptr<const SyntaxToken>>>();
    }

    auto typeSpecifier = SafeDynamicCast<const TypeSpecifier>(
        visit(context->definingTypeSpecifier())
            .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);

    // Check for the optional trailing modifiers
    std::vector<std::shared_ptr<const SyntaxToken>> trailingModifiers;
    if (context->trailingDeclarationModifierSequence() != nullptr)
    {
        trailingModifiers = visit(context->trailingDeclarationModifierSequence())
            .as<std::vector<std::shared_ptr<const SyntaxToken>>>();
    }

    return SyntaxFactory::CreateDeclarationSpecifierSequence(
        SyntaxFactory::CreateSyntaxList<SyntaxToken>(std::move(leadingModifiers)),
        std::move(typeSpecifier),
        SyntaxFactory::CreateSyntaxList<SyntaxToken>(std::move(trailingModifiers)));
}

antlrcpp::Any ASTCppParserVisitor::visitLeadingDeclarationModifierSequence(CppParser::LeadingDeclarationModifierSequenceContext *context)
{
    Trace("visitLeadingDeclarationModifierSequence");
    return visit(context->declarationModifierSequence());
}

antlrcpp::Any ASTCppParserVisitor::visitTrailingDeclarationModifierSequence(CppParser::TrailingDeclarationModifierSequenceContext *context)
{
    Trace("visitTrailingDeclarationModifierSequence");
    return visit(context->declarationModifierSequence());
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationModifierSequence(CppParser::DeclarationModifierSequenceContext *context)
{
    Trace("visitDeclarationModifierSequence");

    // Handle the recursive rule
    std::vector<std::shared_ptr<const SyntaxToken>> modifiers;
    if (context->declarationModifierSequence() != nullptr)
    {
        modifiers = visit(context->declarationModifierSequence())
            .as<std::vector<std::shared_ptr<const SyntaxToken>>>();
    }

    // Handle the new item
    auto modifier = visit(context->declarationModifier())
        .as<std::shared_ptr<const SyntaxToken>>();
    modifiers.push_back(std::move(modifier));

    return modifiers;
}

antlrcpp::Any ASTCppParserVisitor::visitStorageClassSpecifier(CppParser::StorageClassSpecifierContext* context)
{
    Trace("VisitStorageClassSpecifier");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionSpecifier(CppParser::FunctionSpecifierContext* context)
{
    Trace("VisitFunctionSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeSpecifier(CppParser::TypeSpecifierContext *context)
{
    Trace("VisitTypeSpecifier");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext* context)
{
    Trace("VisitTypeSpecifierSequence");

    // Check for optional leading modifiers
    std::vector<std::shared_ptr<const SyntaxToken>> leadingModifiers = {};
    if (context->constVolatileQualifier() != nullptr)
    {
        leadingModifiers.push_back(
            visit(context->constVolatileQualifier())
                .as<std::shared_ptr<const SyntaxToken>>());
    }

    auto typeSpecifier = SafeDynamicCast<const TypeSpecifier>(
        visit(context->typeSpecifier())
            .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);

    // TODO: Check for optional trailing modifiers
    std::vector<std::shared_ptr<const SyntaxToken>> trailingModifiers = {};

    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateTypeSpecifierSequence(
            SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                std::move(leadingModifiers)),
            std::move(typeSpecifier),
            SyntaxFactory::CreateSyntaxList<SyntaxToken>(
                std::move(trailingModifiers))));
}

antlrcpp::Any ASTCppParserVisitor::visitDefiningTypeSpecifier(CppParser::DefiningTypeSpecifierContext *context)
{
    Trace("VisitDefiningTypeSpecifier");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext* context)
{
    Trace("VisitDefiningTypeSpecifierSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext* context)
{
    Trace("VisitSimpleTypeSpecifier");
    if (context->typeName() != nullptr)
    {
        auto identifier = SafeDynamicCast<const UnqualifiedIdentifier>(
            visit(context->typeName())
                .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);

        // Check for the optional nested name specifier
        std::shared_ptr<const NestedNameSpecifier> qualifier = nullptr;
        if (context->nestedNameSpecifier() != nullptr)
        {
            qualifier = visit(context->nestedNameSpecifier())
                .as<std::shared_ptr<const NestedNameSpecifier>>();
        }

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateIdentifierType(
                std::move(qualifier),
                std::move(identifier)));
    }
    else if (context->Char() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Char,
                visit(context->Char())));
    }
    else if (context->Char8() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Char8,
                visit(context->Char8())));
    }
    else if (context->Char16() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Char16,
                visit(context->Char16())));
    }
    else if (context->Char32() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Char32,
                visit(context->Char32())));
    }
    else if (context->WChar() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::WChar,
                visit(context->WChar())));
    }
    else if (context->Bool() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Bool,
                visit(context->Bool())));
    }
    else if (context->Short() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Short,
                visit(context->Short())));
    }
    else if (context->Int() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Int,
                visit(context->Int())));
    }
    else if (context->Long() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Long,
                visit(context->Long())));
    }
    else if (context->Signed() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Signed,
                visit(context->Signed())));
    }
    else if (context->Unsigned() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Unsigned,
                visit(context->Unsigned())));
    }
    else if (context->Float() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Float,
                visit(context->Float())));
    }
    else if (context->Double() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Double,
                visit(context->Double())));
    }
    else if (context->Void() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Void,
                visit(context->Void())));
    }
    else if (context->Auto() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeSpecifier(
                PrimitiveDataType::Auto,
                visit(context->Auto())));
    }

    throw std::logic_error("Unexpected simple type.");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeName(CppParser::TypeNameContext* context)
{
    Trace("VisitTypeName");
    if (context->Identifier() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateSimpleIdentifier(
                visit(context->Identifier())));
    }
    else
    {
        return visit(context->simpleTemplateIdentifier());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext* context)
{
    Trace("VisitDeclarationTypeSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext* context)
{
    Trace("VisitElaboratedTypeSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumSpecifier(CppParser::EnumSpecifierContext* context)
{
    Trace("VisitEnumSpecifier");
    auto enumHeadContext = context->enumHead();
    auto enumKeyContext = enumHeadContext->enumKey();

    // Check for the optional enum class
    std::shared_ptr<const SyntaxToken> classToken = nullptr;
    if (enumKeyContext->Class() != nullptr)
    {
        classToken = visit(enumKeyContext->Class());
    }
    else if (enumKeyContext->Struct() != nullptr)
    {
        classToken = visit(enumKeyContext->Struct());
    }

    // Check for the optional enum head name
    std::shared_ptr<const SyntaxToken> identifierToken = nullptr;
    if (enumHeadContext->enumHeadName() != nullptr)
    {
        auto enumHeadNameContext = enumHeadContext->enumHeadName();
        identifierToken = visit(enumHeadNameContext->Identifier());
    }

    // Check for the optional enumerator list
    SeparatorListResult<EnumeratorDefinition> enumeratorList = {};
    if (context->enumeratorList() != nullptr)
    {
        // TODO: Extra trailing comma
        auto enumeratorListContext = context->enumeratorList();
        enumeratorList = visit(context->enumeratorList())
            .as<SeparatorListResult<EnumeratorDefinition>>();
    }

    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateEnumSpecifier(
            visit(enumKeyContext->Enum()),
            std::move(classToken),
            std::move(identifierToken),
            visit(context->OpenBrace()),
            SyntaxFactory::CreateSyntaxSeparatorList<EnumeratorDefinition>(
                std::move(enumeratorList.Items),
                std::move(enumeratorList.Separators)),
            visit(context->CloseBrace())));
}

antlrcpp::Any ASTCppParserVisitor::visitEnumHead(CppParser::EnumHeadContext* context)
{
    Trace("VisitEnumHead");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumHeadName(CppParser::EnumHeadNameContext* context)
{
    Trace("VisitEnumHeadName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitOpaqueEnumSpecifier(CppParser::OpaqueEnumSpecifierContext* context)
{
    Trace("VisitOpaqueEnumSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumKey(CppParser::EnumKeyContext* context)
{
    Trace("VisitEnumKey");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumBase(CppParser::EnumBaseContext* context)
{
    Trace("VisitEnumBase");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumeratorList(CppParser::EnumeratorListContext* context)
{
    Trace("VisitEnumeratorList");

    // Handle the recursive rule
    SeparatorListResult<EnumeratorDefinition> enumeratorList = {};
    if (context->enumeratorList() != nullptr)
    {
        enumeratorList = visit(context->enumeratorList())
            .as<SeparatorListResult<EnumeratorDefinition>>();
        enumeratorList.Separators.push_back(
            visit(context->Comma()));
    }

    // Handle the next item
    auto enumeratorDefinition = visit(context->enumeratorDefinition())
            .as<std::shared_ptr<const EnumeratorDefinition>>();
    enumeratorList.Items.push_back(std::move(enumeratorDefinition));

    return enumeratorList;
}

antlrcpp::Any ASTCppParserVisitor::visitEnumeratorDefinition(CppParser::EnumeratorDefinitionContext* context)
{
    Trace("VisitEnumeratorDefinition");
    auto enumeratorContext = context->enumerator();
    return SyntaxFactory::CreateEnumeratorDefinition(
        visit(enumeratorContext->Identifier()));
}

antlrcpp::Any ASTCppParserVisitor::visitEnumerator(CppParser::EnumeratorContext* context)
{
    Trace("VisitEnumerator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNamespaceDefinition(CppParser::NamespaceDefinitionContext* context)
{
    Trace("VisitNamespaceDefinition");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext* context)
{
    Trace("VisitNamedNamespaceDefinition");

    // Inline? Namespace attributeSpecifierSequence? Identifier OpenBrace namespaceBody CloseBrace;
    auto namespaceBody = visit(context->namespaceBody())
        .as<std::shared_ptr<const SyntaxList<Declaration>>>();

    // Create a namespace with a single identifier
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateNamespaceDefinition(
            visit(context->Namespace()),
            SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                std::vector<std::shared_ptr<const SyntaxToken>>({
                    visit(context->Identifier()),
                }),
                {}),
            visit(context->OpenBrace()),
            std::move(namespaceBody),
            visit(context->CloseBrace())));
}

antlrcpp::Any ASTCppParserVisitor::visitUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext* context)
{
    Trace("VisitUnnamedNamespaceDefinition");

    // Inline? Namespace attributeSpecifierSequence? OpenBrace namespaceBody CloseBrace;
    auto namespaceBody = visit(context->namespaceBody())
        .as<std::shared_ptr<const SyntaxList<Declaration>>>();

    // Create a namespace with no name identifiers
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateNamespaceDefinition(
            visit(context->Namespace()),
            SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>({}, {}),
            visit(context->OpenBrace()),
            std::move(namespaceBody),
            visit(context->CloseBrace())));
}

antlrcpp::Any ASTCppParserVisitor::visitNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext* context)
{
    Trace("VisitNestedNamespaceDefinition");

    // Namespace enclosingNamespaceSpecifier DoubleColon Identifier OpenBrace namespaceBody CloseBrace;
    auto enclosingNamespaceSpecifier = visit(context->enclosingNamespaceSpecifier())
        .as<SeparatorListResult<SyntaxToken>>();

    // Add the final identifier
    enclosingNamespaceSpecifier.Separators.push_back(
        visit(context->DoubleColon()));
    auto identifierToken = visit(context->Identifier());
    enclosingNamespaceSpecifier.Items.push_back(identifierToken);

    auto namespaceBody = visit(context->namespaceBody())
        .as<std::shared_ptr<const SyntaxList<Declaration>>>();

    // Create a namespace with nested identifiers
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateNamespaceDefinition(
            visit(context->Namespace()),
            SyntaxFactory::CreateSyntaxSeparatorList<SyntaxToken>(
                std::move(enclosingNamespaceSpecifier.Items),
                std::move(enclosingNamespaceSpecifier.Separators)),
            visit(context->OpenBrace()),
            std::move(namespaceBody),
            visit(context->CloseBrace())));
}

antlrcpp::Any ASTCppParserVisitor::visitEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext* context)
{
    Trace("VisitEnclosingNamespaceSpecifier");

    // Handle the recursive rule
    SeparatorListResult<SyntaxToken> enclosingNamespaceSpecifier;
    if (context->enclosingNamespaceSpecifier() != nullptr)
    {
        enclosingNamespaceSpecifier = visit(context->enclosingNamespaceSpecifier())
            .as<SeparatorListResult<SyntaxToken>>();
        enclosingNamespaceSpecifier.Separators.push_back(
            visit(context->DoubleColon()));
    }

    // Handle the new identifier
    auto identifierToken = visit(context->Identifier());
    enclosingNamespaceSpecifier.Items.push_back(identifierToken);

    return enclosingNamespaceSpecifier;
}

antlrcpp::Any ASTCppParserVisitor::visitNamespaceBody(CppParser::NamespaceBodyContext* context)
{
    Trace("VisitNamespaceBody");

    // Check for the optional declaration sequences
    std::vector<std::shared_ptr<const Declaration>> declarationSequence = {};
    if (context->declarationSequence() != nullptr)
    {
        declarationSequence = visit(context->declarationSequence())
            .as<std::vector<std::shared_ptr<const Declaration>>>();
    }

    return SyntaxFactory::CreateSyntaxList<Declaration>(
            std::move(declarationSequence));
}

antlrcpp::Any ASTCppParserVisitor::visitNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext* context)
{
    Trace("VisitNamespaceAliasDefinition");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext* context)
{
    Trace("VisitQualifiedNamespaceSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitUsingDeclaration(CppParser::UsingDeclarationContext* context)
{
    Trace("VisitUsingDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitUsingDeclaratorList(CppParser::UsingDeclaratorListContext* context)
{
    Trace("VisitUsingDeclaratorList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitUsingDeclarator(CppParser::UsingDeclaratorContext* context)
{
    Trace("VisitUsingDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitUsingDirective(CppParser::UsingDirectiveContext* context)
{
    Trace("VisitUsingDirective");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAsmDefinition(CppParser::AsmDefinitionContext* context)
{
    Trace("VisitAsmDefinition");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLinkageSpecification(CppParser::LinkageSpecificationContext* context)
{
    Trace("VisitLinkageSpecification");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext* context)
{
    Trace("VisitAttributeSpecifierSequence");

    // Check for the recursive rule
    std::vector<std::shared_ptr<const AttributeSpecifier>> attributeSpecifierSequence;
    if (context->attributeSpecifierSequence() != nullptr)
    {
        attributeSpecifierSequence = visit(context->attributeSpecifierSequence())
            .as<std::vector<std::shared_ptr<const AttributeSpecifier>>>();
    }

    // Handle the new attribute specifier
    auto attributeSpecifier = visit(context->attributeSpecifier())
        .as<std::shared_ptr<const AttributeSpecifier>>();
    attributeSpecifierSequence.push_back(attributeSpecifier);

    return attributeSpecifierSequence;
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeSpecifier(CppParser::AttributeSpecifierContext* context)
{
    Trace("VisitAttributeSpecifier");
    if (context->alignmentSpecifier() != nullptr)
    {
        return visit(context->alignmentSpecifier());
    }
    else
    {
        // OpenBracket OpenBracket attributeUsingPrefix? attributeList CloseBracket CloseBracket
        auto attributeList = visit(context->attributeList())
            .as<SeparatorListResult<Attribute>>();

        return SyntaxFactory::CreateAttributeSpecifier(
            visit(context->OpenBracket().at(0)),
            visit(context->OpenBracket().at(1)),
            SyntaxFactory::CreateSyntaxSeparatorList<Attribute>(
                std::move(attributeList.Items),
                std::move(attributeList.Separators)),
            visit(context->CloseBracket().at(0)),
            visit(context->CloseBracket().at(1)));
    }
}

antlrcpp::Any ASTCppParserVisitor::visitAlignmentSpecifier(CppParser::AlignmentSpecifierContext* context)
{
    Trace("VisitAlignmentSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext* context)
{
    Trace("VisitAttributeUsingPrefix");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeList(CppParser::AttributeListContext* context)
{
    Trace("VisitAttributeList");

    // Handle the recursive rule
    SeparatorListResult<Attribute> attributeList;
    if (context->attributeList() != nullptr)
    {
        attributeList = visit(context->attributeList())
            .as<SeparatorListResult<Attribute>>();
        attributeList.Separators.push_back(
            visit(context->Comma()));
    }

    // Handle the optional new attribute
    if (context->attribute() != nullptr)
    {
        auto attribute = visit(context->attribute())
            .as<std::shared_ptr<const Attribute>>();
        attributeList.Items.push_back(attribute);
    }

    if (context->Ellipsis() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }

    return attributeList;
}

antlrcpp::Any ASTCppParserVisitor::visitAttribute(CppParser::AttributeContext* context)
{
    Trace("VisitAttribute");

    // Check for optional arguments
    std::shared_ptr<const AttributeArgumentClause> argumentClause = nullptr;
    if (context->attributeArgumentClause() != nullptr)
    {
        argumentClause = visit(context->attributeArgumentClause())
            .as<std::shared_ptr<const AttributeArgumentClause>>();
    }

    // Check for optional scoped token
    if (context->attributeToken()->attributeScopedToken() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented attributeScopedToken");
    }
    else
    {
        return SyntaxFactory::CreateAttribute(
            visit(context->attributeToken()->Identifier()),
            std::move(argumentClause));
    }
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeToken(CppParser::AttributeTokenContext* context)
{
    Trace("VisitAttributeToken");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeScopedToken(CppParser::AttributeScopedTokenContext* context)
{
    Trace("VisitAttributeScopedToken");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeNamespace(CppParser::AttributeNamespaceContext* context)
{
    Trace("VisitAttributeNamespace");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeArgumentClause(CppParser::AttributeArgumentClauseContext* context)
{
    Trace("VisitAttributeArgumentClause");

    // Check for optional arguments
    std::vector<std::shared_ptr<const SyntaxToken>> balancedTokenSequence = {};
    if (context->balancedTokenSequence() != nullptr)
    {
        balancedTokenSequence = visit(context->balancedTokenSequence())
            .as<std::vector<std::shared_ptr<const SyntaxToken>>>();
    }

    return SyntaxFactory::CreateAttributeArgumentClause(
        visit(context->OpenParenthesis()),
        SyntaxFactory::CreateSyntaxList<SyntaxToken>(std::move(balancedTokenSequence)),
        visit(context->CloseParenthesis()));
}

antlrcpp::Any ASTCppParserVisitor::visitBalancedTokenSequence(CppParser::BalancedTokenSequenceContext* context)
{
    Trace("VisitBalancedTokenSequence");

    std::vector<std::shared_ptr<const SyntaxToken>> balancedTokenSequence = {};
    if (context->balancedTokenSequence() != nullptr)
    {
        balancedTokenSequence = visit(context->balancedTokenSequence())
            .as<std::vector<std::shared_ptr<const SyntaxToken>>>();
    }

    // Add the new token
    auto balancedToken = visit(context->balancedToken())
        .as<std::vector<std::shared_ptr<const SyntaxToken>>>();
    balancedTokenSequence.insert(balancedTokenSequence.end(), balancedToken.begin(), balancedToken.end());

    return balancedTokenSequence;
}

antlrcpp::Any ASTCppParserVisitor::visitBalancedToken(CppParser::BalancedTokenContext* context)
{
    Trace("VisitBalancedToken");

    std::vector<std::shared_ptr<const SyntaxToken>> balancedToken = {};
    if (context->OpenParenthesis() != nullptr)
    {
        balancedToken.push_back(visit(context->OpenParenthesis()));
        if (context->balancedTokenSequence() != nullptr)
        {
            auto balancedTokenSequence = visit(context->balancedTokenSequence())
                .as<std::vector<std::shared_ptr<const SyntaxToken>>>();
            balancedToken.insert(balancedToken.end(), balancedTokenSequence.begin(), balancedTokenSequence.end());
        }

        balancedToken.push_back(visit(context->CloseParenthesis()));
    }
    else if (context->OpenBracket() != nullptr)
    {
        balancedToken.push_back(visit(context->OpenBracket()));
        if (context->balancedTokenSequence() != nullptr)
        {
            auto balancedTokenSequence = visit(context->balancedTokenSequence())
                .as<std::vector<std::shared_ptr<const SyntaxToken>>>();
            balancedToken.insert(balancedToken.end(), balancedTokenSequence.begin(), balancedTokenSequence.end());
        }

        balancedToken.push_back(visit(context->CloseBracket()));
    }
    else if (context->OpenBrace() != nullptr)
    {
        balancedToken.push_back(visit(context->OpenBrace()));
        if (context->balancedTokenSequence() != nullptr)
        {
            auto balancedTokenSequence = visit(context->balancedTokenSequence())
                .as<std::vector<std::shared_ptr<const SyntaxToken>>>();
            balancedToken.insert(balancedToken.end(), balancedTokenSequence.begin(), balancedTokenSequence.end());
        }

        balancedToken.push_back(visit(context->CloseBrace()));
    }
    else if (context->nonBalancedToken() != nullptr)
    {
        balancedToken.push_back(visit(context->nonBalancedToken()));
    }
    else
    {
        throw std::runtime_error("Unknown balanced token.");
    }

    return balancedToken;
}

antlrcpp::Any ASTCppParserVisitor::visitNonBalancedToken(CppParser::NonBalancedTokenContext *context)
{
    Trace("VisitNonBalancedToken");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext* context)
{
    Trace("VisitInitializerDeclaratorList");

    // Handle the recursive rule
    SeparatorListResult<InitializerDeclarator> initializerDeclaratorList;
    if (context->initializerDeclaratorList() != nullptr)
    {
        initializerDeclaratorList = visit(context->initializerDeclaratorList())
            .as<SeparatorListResult<InitializerDeclarator>>();
        initializerDeclaratorList.Separators.push_back(visit(context->Comma()));
    }

    // Handle the new initializer declarator
    auto initializerDeclarator = visit(context->initializerDeclarator())
        .as<std::shared_ptr<const InitializerDeclarator>>();
    initializerDeclaratorList.Items.push_back(initializerDeclarator);

    return initializerDeclaratorList;
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerDeclarator(CppParser::InitializerDeclaratorContext* context)
{
    Trace("VisitInitializerDeclarator");

    auto declarator = visit(context->declarator())
        .as<std::shared_ptr<const SyntaxNode>>();

    // Check for optional initializer
    std::shared_ptr<const SyntaxNode> initializer = nullptr;
    if (context->initializer() != nullptr)
    {
        initializer = visit(context->initializer());
    }

    return SyntaxFactory::CreateInitializerDeclarator(
        std::move(declarator),
        std::move(initializer));
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarator(CppParser::DeclaratorContext *context)
{
    Trace("VisitDeclarator");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitPointerDeclarator(CppParser::PointerDeclaratorContext* context)
{
    Trace("VisitPointerDeclarator");
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreatePointerDeclarator(
            visit(context->pointerOperator())
                .as<std::shared_ptr<const PointerOperator>>(),
            visit(context->declarator())
                .as<std::shared_ptr<const SyntaxNode>>()));
}

antlrcpp::Any ASTCppParserVisitor::visitNoPointerDeclarator(CppParser::NoPointerDeclaratorContext* context)
{
    Trace("VisitNoPointerDeclarator");

    // Check if it was an identifier declarator
    auto identifierExpression = context->identifierExpression();
    if (identifierExpression != nullptr)
    {
        return visit(identifierExpression);
    }

    throw std::logic_error("Unknown sub type.");
}

antlrcpp::Any ASTCppParserVisitor::visitParametersAndQualifiers(CppParser::ParametersAndQualifiersContext* context)
{
    Trace("VisitParametersAndQualifiers");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionParameters(CppParser::FunctionParametersContext *context)
{
    Trace("VisitFunctionParameters");

    auto parameterList = visit(context->parameterDeclarationClause())
        .as<std::shared_ptr<const SyntaxSeparatorList<Parameter>>>();

    Trace("VisitFunctionParameters2");
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateParameterList(
            visit(context->OpenParenthesis()),
            std::move(parameterList),
            visit(context->CloseParenthesis())));
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionQualifiers(CppParser::FunctionQualifiersContext *context)
{
    Trace("VisitFunctionQualifiers");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTrailingReturnType(CppParser::TrailingReturnTypeContext* context)
{
    Trace("VisitTrailingReturnType");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitPointerOperator(CppParser::PointerOperatorContext* context)
{
    Trace("VisitPointerOperator");
    // Asterisk attributeSpecifierSequence? constVolatileQualifierSequence? |
    // Ampersand attributeSpecifierSequence? |
    // DoubleAmpersand attributeSpecifierSequence? | // C++ 11
    // nestedNameSpecifier Asterisk attributeSpecifierSequence? constVolatileQualifierSequence?;
    if (context->attributeSpecifierSequence() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }

    if (context->constVolatileQualifierSequence() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }

    if (context->Asterisk() != nullptr)
    {
        if (context->nestedNameSpecifier() != nullptr)
        {
            throw std::logic_error(std::string(__func__) + " NotImplemented");
        }

        return SyntaxFactory::CreatePointerOperator(
            visit(context->Asterisk()));
    }
    else if (context->Ampersand() != nullptr)
    {
        return SyntaxFactory::CreatePointerOperator(
            visit(context->Ampersand()));
    }
    else if (context->DoubleAmpersand() != nullptr)
    {
        return SyntaxFactory::CreatePointerOperator(
            visit(context->DoubleAmpersand()));
    }
    else
    {
        throw std::runtime_error("Unknown pointer operator.");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext* context)
{
    Trace("VisitConstVolatileQualifierSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConstVolatileQualifier(CppParser::ConstVolatileQualifierContext* context)
{
    Trace("VisitConstVolatileQualifier");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitReferenceQualifier(CppParser::ReferenceQualifierContext* context)
{
    Trace("VisitReferenceQualifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeIdentifier(CppParser::TypeIdentifierContext* context)
{
    Trace("VisitTypeIdentifier");

    // Check for optional thingy
    if (context->abstractDeclarator() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }

    return visit(context->typeSpecifierSequence());
}

antlrcpp::Any ASTCppParserVisitor::visitDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext* context)
{
    Trace("VisitDefiningTypeIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAbstractDeclarator(CppParser::AbstractDeclaratorContext* context)
{
    Trace("VisitAbstractDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext* context)
{
    Trace("VisitPointerAbstractDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext* context)
{
    Trace("VisitNoPointerAbstractDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext* context)
{
    Trace("VisitAbstractPackDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext* context)
{
    Trace("VisitNoPointerAbstractPackDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext* context)
{
    Trace("VisitParameterDeclarationClause");

    // TODO Ellipsis
    if (context->parameterDeclarationList() != nullptr)
    {
        auto parameterListResult = visit(context->parameterDeclarationList())
            .as<SeparatorListResult<Parameter>>();
        return SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
            std::move(parameterListResult.Items),
            std::move(parameterListResult.Separators));
    }
    else
    {
        return SyntaxFactory::CreateSyntaxSeparatorList<Parameter>(
            std::vector<std::shared_ptr<const Parameter>>(),
            {});
    }
}

antlrcpp::Any ASTCppParserVisitor::visitParameterDeclarationList(CppParser::ParameterDeclarationListContext* context)
{
    Trace("VisitParameterDeclarationList");

    // Handle the recursive rule
    SeparatorListResult<Parameter> parameterDeclarationList = {};
    if (context->parameterDeclarationList() != nullptr)
    {
        parameterDeclarationList = visit(context->parameterDeclarationList())
            .as<SeparatorListResult<Parameter>>();
        parameterDeclarationList.Separators.push_back(visit(context->Comma()));
    }

    // Handle the next item
    auto parameterDeclaration = visit(context->parameterDeclaration())
            .as<std::shared_ptr<const Parameter>>();
    parameterDeclarationList.Items.push_back(std::move(parameterDeclaration));

    return parameterDeclarationList;
}

antlrcpp::Any ASTCppParserVisitor::visitParameterDeclaration(CppParser::ParameterDeclarationContext* context)
{
    Trace("VisitParameterDeclaration");

    // attributeSpecifierSequence? declarationSpecifierSequence declarator |
    // attributeSpecifierSequence? declarationSpecifierSequence declarator Equal initializerClause |
    // attributeSpecifierSequence? declarationSpecifierSequence abstractDeclarator? |
    // attributeSpecifierSequence? declarationSpecifierSequence abstractDeclarator? Equal initializerClause;
    auto declarationSpecifierSequence = visit(context->declarationSpecifierSequence())
        .as<std::shared_ptr<const DeclarationSpecifierSequence>>();
    if (context->declarator() != nullptr)
    {
        auto declarator = visit(context->declarator())
            .as<std::shared_ptr<const SyntaxNode>>();

        // TODO: initializerClause
        return SyntaxFactory::CreateParameter(
            std::move(declarationSpecifierSequence),
            std::move(declarator));
    }
    else
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionDefinition(CppParser::FunctionDefinitionContext* context)
{
    Trace("VisitFunctionDefinition");

    // Check for the optional attribute specifiers
    std::vector<std::shared_ptr<const AttributeSpecifier>> attributeSpecifierSequence;
    if (context->attributeSpecifierSequence() != nullptr)
    {
        attributeSpecifierSequence = visit(context->attributeSpecifierSequence())
            .as<std::vector<std::shared_ptr<const AttributeSpecifier>>>();
    }

    // Analyze the declarator
    auto declaratorContext = context->functionDeclarator();
    auto identifier = SafeDynamicCast<const IdentifierExpression>(
        visit(declaratorContext->identifierExpression())
            .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
    auto parameterList = SafeDynamicCast<const ParameterList>(
        visit(declaratorContext->functionParameters())
            .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
    // TODO Qualifiers
    // TODO Trailiing return type

    auto body = visit(context->functionBody())
        .as<std::shared_ptr<const SyntaxNode>>();

    // Check is a constructor or a regular function
    // TODO: May want to specialize the parser for this to have unique paths
    bool hasConstructorInitializer = 
        context->functionBody()->regularFunctionBody() != nullptr &&
        context->functionBody()->regularFunctionBody()->constructorInitializer() != nullptr;
    if (context->declarationSpecifierSequence() != nullptr)
    {
        if (hasConstructorInitializer)
        {
            throw std::runtime_error("A regular function cannot have a constructor initializer.");
        }

        auto returnType = visit(context->declarationSpecifierSequence())
            .as<std::shared_ptr<const DeclarationSpecifierSequence>>();

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateFunctionDefinition(
                SyntaxFactory::CreateSyntaxList<AttributeSpecifier>(
                    std::move(attributeSpecifierSequence)),
                std::move(returnType),
                std::move(identifier),
                std::move(parameterList),
                std::move(body)));
    }
    else
    {
        // Load the optional initializer
        std::shared_ptr<const ConstructorInitializer> initializer = nullptr;
        if (hasConstructorInitializer)
        {
            initializer = visit(
                context->functionBody()->regularFunctionBody()->constructorInitializer())
                    .as<std::shared_ptr<const ConstructorInitializer>>();
        }

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateConstructorDefinition(
                std::move(identifier),
                std::move(parameterList),
                std::move(initializer),
                std::move(body)));
    }
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionDeclarator(CppParser::FunctionDeclaratorContext *context)
{
    Trace("VisitFunctionDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionBody(CppParser::FunctionBodyContext *context)
{
    Trace("VisitFunctionBody");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitRegularFunctionBody(CppParser::RegularFunctionBodyContext* context)
{
    Trace("VisitRegularFunctionBody");
    auto compoundStatment = SafeDynamicCast<const CompoundStatement>(
        visit(context->compoundStatement())
            .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateRegularFunctionBody(
            std::move(compoundStatment)));
}

antlrcpp::Any ASTCppParserVisitor::visitExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext* context)
{
    Trace("VisitExplicitlyDefaultedFunction");
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateDefaultFunctionBody(
            visit(context->Equal()),
            visit(context->Default()),
            visit(context->Semicolon())));
}

antlrcpp::Any ASTCppParserVisitor::visitDeletedFunction(CppParser::DeletedFunctionContext* context)
{
    Trace("VisitDeletedFunction");
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateDeleteFunctionBody(
            visit(context->Equal()),
            visit(context->Delete()),
            visit(context->Semicolon())));
}

antlrcpp::Any ASTCppParserVisitor::visitInitializer(CppParser::InitializerContext *context)
{
    Trace("VisitInitializer");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext* context)
{
    Trace("VisitBraceOrEqualInitializer");
    if (context->Equal() != nullptr)
    {
        // TODO : Could not be an expression
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateValueEqualInitializer(
                visit(context->Equal()),
                visit(context->initializerClause())
                    .as<std::shared_ptr<const SyntaxNode>>()));
    }
    else
    {
        return visit(context->bracedInitializerList());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerClause(CppParser::InitializerClauseContext *context)
{
    Trace("VisitInitializerClause");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerList(CppParser::InitializerListContext* context)
{
    Trace("VisitInitializerList");

    // Handle the recursive rule
    SeparatorListResult<SyntaxNode> initializerList = {};
    if (context->initializerList() != nullptr)
    {
        initializerList = visit(context->initializerList())
            .as<SeparatorListResult<SyntaxNode>>();
        initializerList.Separators.push_back(visit(context->Comma()));
    }

    // Handle the next item
    auto initializer = visit(context->initializerClause())
        .as<std::shared_ptr<const SyntaxNode>>();
    initializerList.Items.push_back(std::move(initializer));

    return initializerList;
}

antlrcpp::Any ASTCppParserVisitor::visitBracedInitializerList(CppParser::BracedInitializerListContext* context)
{
    Trace("VisitBracedInitializerList");

    // Check for the optional expressions
    SeparatorListResult<SyntaxNode> result = {};
    if (context->initializerList() != nullptr)
    {
        result = visit(context->initializerList())
            .as<const SeparatorListResult<SyntaxNode>>();

        // Check for the optional trailing comma
        if (context->Comma() != nullptr)
        {
            result.Separators.push_back(visit(context->Comma()));
        }
    }

    auto values = SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
        std::move(result.Items),
        std::move(result.Separators));

    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateInitializerList(
            visit(context->OpenBrace()),
            std::move(values),
            visit(context->CloseBrace())));
}

antlrcpp::Any ASTCppParserVisitor::visitExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext* context)
{
    Trace("VisitExpressionOrBracedInitializerList");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitClassSpecifier(CppParser::ClassSpecifierContext* context)
{
    Trace("VisitClassSpecifier");
    auto classHeadContext = context->classHead();
    auto classKeyContext = classHeadContext->classKey();

    // Check for the optional enum class
    std::shared_ptr<const SyntaxToken> classToken = nullptr;
    if (classKeyContext->Class() != nullptr)
    {
        classToken = visit(classKeyContext->Class());
    }
    else if (classKeyContext->Struct() != nullptr)
    {
        classToken = visit(classKeyContext->Struct());
    }
    else if (classKeyContext->Union() != nullptr)
    {
        classToken = visit(classKeyContext->Union());
    }

    // Check for the optional class head name
    std::shared_ptr<const SyntaxToken> identifierToken = nullptr;
    if (classHeadContext->classHeadName() != nullptr)
    {
        // TODO: Template and nexted name
        auto classHeadNameContext = classHeadContext->classHeadName();
        identifierToken = CreateToken(
            SyntaxTokenType::Identifier,
            classHeadNameContext->className()->Identifier());
    }

    // Check for the optional member specification
    std::vector<std::shared_ptr<const Declaration>> memberSpecifiers = {};
    if (context->memberSpecification() != nullptr)
    {
        // TODO: Extra trailing comma
        memberSpecifiers = visit(context->memberSpecification())
            .as<std::vector<std::shared_ptr<const Declaration>>>();

        // The member specifiers are parsed in reverse order
        std::reverse(memberSpecifiers.begin(), memberSpecifiers.end());
    }

    auto memberSpecifiersList = SyntaxFactory::CreateSyntaxList<Declaration>(
                std::move(memberSpecifiers));

    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateClassSpecifier(
            std::move(classToken),
            std::move(identifierToken),
            visit(context->OpenBrace()),
            std::move(memberSpecifiersList),
            visit(context->CloseBrace())));
}

antlrcpp::Any ASTCppParserVisitor::visitClassHead(CppParser::ClassHeadContext* context)
{
    Trace("VisitClassHead");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitClassHeadName(CppParser::ClassHeadNameContext* context)
{
    Trace("VisitClassHeadName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext* context)
{
    Trace("VisitClassVirtualSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitClassKey(CppParser::ClassKeyContext* context)
{
    Trace("VisitClassKey");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitMemberSpecification(CppParser::MemberSpecificationContext* context)
{
    Trace("VisitMemberSpecification");

    // Handle the recursive rule
    std::vector<std::shared_ptr<const Declaration>> memberSpecifiers = {};
    if (context->memberSpecification() != nullptr)
    {
        memberSpecifiers = visit(context->memberSpecification())
            .as<std::vector<std::shared_ptr<const Declaration>>>();
    }

    // Handle the next item
    if (context->accessSpecifier() != nullptr)
    {
        auto accessorToken = visit(context->accessSpecifier())
            .as<std::shared_ptr<const SyntaxToken>>();
        auto member = SyntaxFactory::CreateAccessorSpecifier(
            std::move(accessorToken),
            visit(context->Colon()));
        memberSpecifiers.push_back(std::move(member));
    }
    else if (context->memberDeclaration() != nullptr)
    {
        auto member = SafeDynamicCast<const Declaration>(
            visit(context->memberDeclaration())
                .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
        memberSpecifiers.push_back(std::move(member));
    }
    else
    {
        throw std::runtime_error("Unknown member specification.");
    }

    return memberSpecifiers;
}

antlrcpp::Any ASTCppParserVisitor::visitMemberDeclaration(CppParser::MemberDeclarationContext* context)
{
    Trace("VisitMemberDeclaration");
    if (context->Semicolon() != nullptr)
    {
        // attributeSpecifierSequence? declarationSpecifierSequence memberDeclaratorList Semicolon
        auto declarationSpecifierSequence = visit(context->declarationSpecifierSequence())
            .as<std::shared_ptr<const DeclarationSpecifierSequence>>();
        auto memberDeclaratorList = visit(context->memberDeclaratorList())
            .as<SeparatorListResult<MemberDeclarator>>();

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateMemberDeclaration(
                std::move(declarationSpecifierSequence),
                SyntaxFactory::CreateMemberDeclaratorList(
                    SyntaxFactory::CreateSyntaxSeparatorList<MemberDeclarator>(
                        std::move(memberDeclaratorList.Items),
                        std::move(memberDeclaratorList.Separators))),
                visit(context->Semicolon())));
    }
    else
    {
        // All the remaining items are uni
        return visitChildren(context);
    }
}

antlrcpp::Any ASTCppParserVisitor::visitMemberDeclaratorList(CppParser::MemberDeclaratorListContext* context)
{
    Trace("VisitMemberDeclaratorList");

    // Handle the recursive rule
    SeparatorListResult<MemberDeclarator> memberDeclaratorList;
    if (context->memberDeclaratorList() != nullptr)
    {
        memberDeclaratorList = visit(context->memberDeclaratorList())
            .as<SeparatorListResult<MemberDeclarator>>();
        memberDeclaratorList.Separators.push_back(visit(context->Comma()));
    }

    // Handle the new member declarator
    auto memberDeclarator = visit(context->memberDeclarator())
        .as<std::shared_ptr<const MemberDeclarator>>();
    memberDeclaratorList.Items.push_back(memberDeclarator);

    return memberDeclaratorList;
}

antlrcpp::Any ASTCppParserVisitor::visitMemberDeclarator(CppParser::MemberDeclaratorContext* context)
{
    // declarator virtualSpecifierSequence? pureSpecifier?
    // declarator braceOrEqualInitializer
    // Identifier? attributeSpecifierSequence? Colon constantExpression
    Trace("VisitMemberDeclarator");

    if (context->declarator() != nullptr)
    {
        auto declarator = visit(context->declarator())
            .as<std::shared_ptr<const SyntaxNode>>();

        // Check for optional initializer
        std::shared_ptr<const SyntaxNode> initializer = nullptr;
        if (context->braceOrEqualInitializer() != nullptr)
        {
            initializer = visit(context->braceOrEqualInitializer())
                .as<std::shared_ptr<const SyntaxNode>>();
        }

        return SyntaxFactory::CreateMemberDeclarator(
            std::move(declarator),
            std::move(initializer));
    }
    else
    {
    throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext* context)
{
    Trace("VisitVirtualSpecifierSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitVirtualSpecifier(CppParser::VirtualSpecifierContext* context)
{
    Trace("VisitVirtualSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitPureSpecifier(CppParser::PureSpecifierContext* context)
{
    Trace("VisitPureSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitBaseClause(CppParser::BaseClauseContext* context)
{
    Trace("VisitBaseClause");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitBaseSpecifierList(CppParser::BaseSpecifierListContext* context)
{
    Trace("VisitBaseSpecifierList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitBaseSpecifier(CppParser::BaseSpecifierContext* context)
{
    Trace("VisitBaseSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitClassOrDecltype(CppParser::ClassOrDecltypeContext* context)
{
    Trace("VisitClassOrDecltype");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAccessSpecifier(CppParser::AccessSpecifierContext* context)
{
    Trace("VisitAccessSpecifier");
    if (context->Private() != nullptr)
    {
        return visit(context->Private());
    }
    else if (context->Protected() != nullptr)
    {
        return visit(context->Protected());
    }
    else if (context->Public() != nullptr)
    {
        return visit(context->Public());
    }
    else
    {
        throw std::logic_error("Unknown Accessor Specifier.");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext* context)
{
    Trace("VisitConversionFunctionIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext* context)
{
    Trace("VisitConversionTypeIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConversionDeclarator(CppParser::ConversionDeclaratorContext* context)
{
    Trace("VisitConversionDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConstructorInitializer(CppParser::ConstructorInitializerContext* context)
{
    Trace("VisitConstructorInitializer");

    auto initializerList = visit(context->memberInitializerList())
        .as<SeparatorListResult<MemberInitializer>>();

    return SyntaxFactory::CreateConstructorInitializer(
        visit(context->Colon()),
        SyntaxFactory::CreateSyntaxSeparatorList<MemberInitializer>(
            std::move(initializerList.Items),
            std::move(initializerList.Separators)));
}

antlrcpp::Any ASTCppParserVisitor::visitMemberInitializerList(CppParser::MemberInitializerListContext* context)
{
    Trace("VisitMemberInitializerList");

    // Handle the recursive rule
    SeparatorListResult<MemberInitializer> memberInitializerList = {};
    if (context->memberInitializerList() != nullptr)
    {
        memberInitializerList = visit(context->memberInitializerList())
            .as<SeparatorListResult<MemberInitializer>>();
        memberInitializerList.Separators.push_back(visit(context->Comma()));
    }

    // Handle the next item
    auto memberInitializer = visit(context->memberInitializer())
            .as<std::shared_ptr<const MemberInitializer>>();
    memberInitializerList.Items.push_back(std::move(memberInitializer));

    return memberInitializerList;
}

antlrcpp::Any ASTCppParserVisitor::visitMemberInitializer(CppParser::MemberInitializerContext* context)
{
    Trace("VisitMemberInitializer");

    // Handle the mutiple forms of initializers
    std::shared_ptr<const InitializerList> initializerList = nullptr;
    if (context->OpenParenthesis() != nullptr)
    {
        // Check for the optional expressions
        SeparatorListResult<SyntaxNode> result = {};
        if (context->expressionList() != nullptr)
        {
            result = visit(context->expressionList())
                .as<const SeparatorListResult<SyntaxNode>>();
        }

        auto values = SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
            std::move(result.Items),
            std::move(result.Separators));

        initializerList = SyntaxFactory::CreateInitializerList(
            visit(context->OpenParenthesis()),
            std::move(values),
            visit(context->CloseParenthesis()));
    }
    else if (context->bracedInitializerList() != nullptr)
    {
        initializerList = SafeDynamicCast<const InitializerList>(
            visit(context->bracedInitializerList())
                .as<std::shared_ptr<const SyntaxNode>>(), __LINE__);
    }
    else
    {
        throw std::logic_error("Unknown Member Initializer");
    }

    return SyntaxFactory::CreateMemberInitializer(
        visit(context->memberInitializerIdentifier()->Identifier()),
        std::move(initializerList));
}

antlrcpp::Any ASTCppParserVisitor::visitMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext* context)
{
    Trace("VisitMemberInitializerIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext* context)
{
    Trace("VisitOperatorFunctionIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAnyOperator(CppParser::AnyOperatorContext* context)
{
    Trace("VisitAnyOperator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext* context)
{
    Trace("VisitLiteralOperatorIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateDeclaration(CppParser::TemplateDeclarationContext* context)
{
    Trace("VisitTemplateDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateParameterList(CppParser::TemplateParameterListContext* context)
{
    Trace("VisitTemplateParameterList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateParameter(CppParser::TemplateParameterContext* context)
{
    Trace("VisitTemplateParameter");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeParameter(CppParser::TypeParameterContext* context)
{
    Trace("VisitTypeParameter");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeParameterKey(CppParser::TypeParameterKeyContext* context)
{
    Trace("VisitTypeParameterKey");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext* context)
{
    // templateName LessThan templateArgumentList? GreaterThan
    Trace("VisitSimpleTemplateIdentifier");

    // Check for the optional template argument list
    SeparatorListResult<SyntaxNode> argumentList = {};
    if (context->templateArgumentList() != nullptr)
    {
        argumentList = visit(context->templateArgumentList())
            .as<SeparatorListResult<SyntaxNode>>();
    }

    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateSimpleTemplateIdentifier(
            visit(context->templateName()->Identifier()),
            visit(context->LessThan()),
            SyntaxFactory::CreateSyntaxSeparatorList<SyntaxNode>(
                std::move(argumentList.Items),
                std::move(argumentList.Separators)),
            visit(context->GreaterThan())));
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateIdentifier(CppParser::TemplateIdentifierContext* context)
{
    Trace("VisitTemplateIdentifier");
    if (context->simpleTemplateIdentifier() != nullptr)
    {
        return visit(context->simpleTemplateIdentifier());
    }
    else
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateArgumentList(CppParser::TemplateArgumentListContext* context)
{
    Trace("VisitTemplateArgumentList");

    // Handle the recursive rule
    SeparatorListResult<SyntaxNode> templateArgumentList = {};
    if (context->templateArgumentList() != nullptr)
    {
        templateArgumentList = visit(context->templateArgumentList())
            .as<SeparatorListResult<SyntaxNode>>();
        templateArgumentList.Separators.push_back(visit(context->Comma()));
    }

    // Handle the next item
    auto templateArgument = visit(context->templateArgument())
        .as<std::shared_ptr<const SyntaxNode>>();
    templateArgumentList.Items.push_back(std::move(templateArgument));

    return templateArgumentList;
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateArgument(CppParser::TemplateArgumentContext* context)
{
    Trace("VisitTemplateArgument");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitTypenameSpecifier(CppParser::TypenameSpecifierContext* context)
{
    Trace("VisitTypenameSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExplicitInstantiation(CppParser::ExplicitInstantiationContext* context)
{
    Trace("VisitExplicitInstantiation");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExplicitSpecialization(CppParser::ExplicitSpecializationContext* context)
{
    Trace("VisitExplicitSpecialization");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDeductionGuide(CppParser::DeductionGuideContext* context)
{
    Trace("VisitDeductionGuide");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTryBlock(CppParser::TryBlockContext* context)
{
    Trace("VisitTryBlock");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionTryBlock(CppParser::FunctionTryBlockContext* context)
{
    Trace("VisitFunctionTryBlock");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitHandlerSequence(CppParser::HandlerSequenceContext* context)
{
    Trace("VisitHandlerSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitHandler(CppParser::HandlerContext* context)
{
    Trace("VisitHandler");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExceptionDeclaration(CppParser::ExceptionDeclarationContext* context)
{
    Trace("VisitExceptionDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext* context)
{
    Trace("VisitNoExceptionSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitIdentifierList(CppParser::IdentifierListContext* context)
{
    Trace("VisitIdentifierList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLiteral(CppParser::LiteralContext* context)
{
    Trace("VisitLiteral");
    if (context->FloatingPointLiteral() != nullptr)
    {
        auto literal = visit(context->FloatingPointLiteral());
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateLiteralExpression(
                LiteralType::Floating,
                std::move(literal)));
    }
    else if (context->CharacterLiteral() != nullptr)
    {
        auto literal = visit(context->CharacterLiteral());
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateLiteralExpression(
                LiteralType::Character,
                std::move(literal)));
    }
    else if (context->StringLiteral() != nullptr)
    {
        auto literal = visit(context->StringLiteral());
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateLiteralExpression(
                LiteralType::String,
                std::move(literal)));
    }
    else
    {
        return visitChildren(context);
    }
}

antlrcpp::Any ASTCppParserVisitor::visitIntegerLiteral(CppParser::IntegerLiteralContext* context)
{
    Trace("VisitIntegerLiteral");
    std::shared_ptr<const SyntaxToken> literal = nullptr;
    if (context->Zero())
    {
        literal = CreateToken(
            SyntaxTokenType::IntegerLiteral,
            context->Zero());
    }
    else if (context->IntegerLiteral())
    {
        literal = visit(context->IntegerLiteral());
    }
    else
    {
        throw std::logic_error("Unexpected integer literal.");
    }
    
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateLiteralExpression(
            LiteralType::Integer,
            std::move(literal)));
}

antlrcpp::Any ASTCppParserVisitor::visitBooleanLiteral(CppParser::BooleanLiteralContext* context)
{
    Trace("VisitBooleanLitera");
    std::shared_ptr<const SyntaxToken> literal = nullptr;
    if (context->True() != nullptr)
    {
        literal = visit(context->True());
    }
    else if (context->False() != nullptr)
    {
        literal = visit(context->False());
    }
    else
    {
        throw std::runtime_error("Unknown boolean literal.");
    }
    
        
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateLiteralExpression(
            LiteralType::Boolean,
            std::move(literal)));
}

antlrcpp::Any ASTCppParserVisitor::visitPointerLiteral(CppParser::PointerLiteralContext* context)
{
    Trace("VisitPointerLitera");
    auto literal = visit(context->Nullptr());
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateLiteralExpression(
            LiteralType::Pointer,
            std::move(literal)));
}

antlrcpp::Any ASTCppParserVisitor::visitUserDefinedLiteral(CppParser::UserDefinedLiteralContext* context)
{
    Trace("VisitUserDefinedLiteral");
    std::shared_ptr<const SyntaxToken> literal = nullptr;
    if (context->UserDefinedIntegerLiteral() != nullptr)
    {
        literal = visit(context->UserDefinedIntegerLiteral());
    }
    else if (context->UserDefinedFloatingPointLiteral() != nullptr)
    {
        literal = visit(context->UserDefinedFloatingPointLiteral());
    }
    else if (context->UserDefinedCharacterLiteral() != nullptr)
    {
        literal = visit(context->UserDefinedCharacterLiteral());
    }
    else if (context->UserDefinedStringLiteral() != nullptr)
    {
        literal = visit(context->UserDefinedStringLiteral());
    }
    else
    {
        throw std::runtime_error("Unknown user defined literal.");
    }
    
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateLiteralExpression(
            LiteralType::UserDefined,
            std::move(literal)));
}

antlrcpp::Any ASTCppParserVisitor::visitTerminal(antlr4::tree::TerminalNode* node)
{
    auto token = node->getSymbol();
    SyntaxTokenType tokenType = GetTokenType(*token);
    return CreateToken(tokenType, node);
}

SyntaxTokenType ASTCppParserVisitor::GetTokenType(antlr4::Token& token)
{
    switch (token.getType())
    {
        case CppLexer::BlockComment:
        case CppLexer::LineComment:
        case CppLexer::Whitespace:
        case CppLexer::Preprocessor:
        case CppLexer::Newline:
            throw std::runtime_error("Cannot create token for trivia.");
        case CppLexer::AlignAs:
            return SyntaxTokenType::AlignAs;
        case CppLexer::AlignOf:
            return SyntaxTokenType::AlignOf;
        case CppLexer::Asm:
            return SyntaxTokenType::Asm;
        case CppLexer::Auto:
            return SyntaxTokenType::Auto;
        case CppLexer::Bool:
            return SyntaxTokenType::Bool;
        case CppLexer::Break:
            return SyntaxTokenType::Break;
        case CppLexer::Case:
            return SyntaxTokenType::Case;
        case CppLexer::Catch:
            return SyntaxTokenType::Catch;
        case CppLexer::Char:
            return SyntaxTokenType::Char;
        case CppLexer::Char8:
            return SyntaxTokenType::Char8;
        case CppLexer::Char16:
            return SyntaxTokenType::Char16;
        case CppLexer::Char32:
            return SyntaxTokenType::Char32;
        case CppLexer::Class:
            return SyntaxTokenType::Class;
        case CppLexer::Const:
            return SyntaxTokenType::Const;
        case CppLexer::ConstExpr:
            return SyntaxTokenType::ConstExpr;
        case CppLexer::ConstCast:
            return SyntaxTokenType::ConstCast;
        case CppLexer::Continue:
            return SyntaxTokenType::Continue;
        case CppLexer::DeclType:
            return SyntaxTokenType::DeclType;
        case CppLexer::Default:
            return SyntaxTokenType::Default;
        case CppLexer::Delete:
            return SyntaxTokenType::Delete;
        case CppLexer::Do:
            return SyntaxTokenType::Do;
        case CppLexer::Double:
            return SyntaxTokenType::Double;
        case CppLexer::DynamicCast:
            return SyntaxTokenType::DynamicCast;
        case CppLexer::Else:
            return SyntaxTokenType::Else;
        case CppLexer::Enum:
            return SyntaxTokenType::Enum;
        case CppLexer::Explicit:
            return SyntaxTokenType::Explicit;
        case CppLexer::Export:
            return SyntaxTokenType::Export;
        case CppLexer::Extern:
            return SyntaxTokenType::Extern;
        case CppLexer::False:
            return SyntaxTokenType::False;
        case CppLexer::Float:
            return SyntaxTokenType::Float;
        case CppLexer::For:
            return SyntaxTokenType::For;
        case CppLexer::Friend:
            return SyntaxTokenType::Friend;
        case CppLexer::GoTo:
            return SyntaxTokenType::GoTo;
        case CppLexer::If:
            return SyntaxTokenType::If;
        case CppLexer::Inline:
            return SyntaxTokenType::Inline;
        case CppLexer::Int:
            return SyntaxTokenType::Int;
        case CppLexer::Long:
            return SyntaxTokenType::Long;
        case CppLexer::Mutable:
            return SyntaxTokenType::Mutable;
        case CppLexer::Namespace:
            return SyntaxTokenType::Namespace;
        case CppLexer::New:
            return SyntaxTokenType::New;
        case CppLexer::NoExcept:
            return SyntaxTokenType::NoExcept;
        case CppLexer::Nullptr:
            return SyntaxTokenType::Nullptr;
        case CppLexer::Operator:
            return SyntaxTokenType::Operator;
        case CppLexer::Private:
            return SyntaxTokenType::Private;
        case CppLexer::Protected:
            return SyntaxTokenType::Protected;
        case CppLexer::Public:
            return SyntaxTokenType::Public;
        case CppLexer::Register:
            return SyntaxTokenType::Register;
        case CppLexer::ReinterpretCast:
            return SyntaxTokenType::ReinterpretCast;
        case CppLexer::Return:
            return SyntaxTokenType::Return;
        case CppLexer::Short:
            return SyntaxTokenType::Short;
        case CppLexer::Signed:
            return SyntaxTokenType::Signed;
        case CppLexer::SizeOf:
            return SyntaxTokenType::SizeOf;
        case CppLexer::Static:
            return SyntaxTokenType::Static;
        case CppLexer::StaticAssert:
            return SyntaxTokenType::StaticAssert;
        case CppLexer::StaticCast:
            return SyntaxTokenType::StaticCast;
        case CppLexer::Struct:
            return SyntaxTokenType::Struct;
        case CppLexer::Switch:
            return SyntaxTokenType::Switch;
        case CppLexer::Template:
            return SyntaxTokenType::Template;
        case CppLexer::This:
            return SyntaxTokenType::This;
        case CppLexer::ThreadLocal:
            return SyntaxTokenType::ThreadLocal;
        case CppLexer::Throw:
            return SyntaxTokenType::Throw;
        case CppLexer::True:
            return SyntaxTokenType::True;
        case CppLexer::Try:
            return SyntaxTokenType::Try;
        case CppLexer::TypeDef:
            return SyntaxTokenType::TypeDef;
        case CppLexer::TypeId:
            return SyntaxTokenType::TypeId;
        case CppLexer::TypeName:
            return SyntaxTokenType::TypeName;
        case CppLexer::Union:
            return SyntaxTokenType::Union;
        case CppLexer::Unsigned:
            return SyntaxTokenType::Unsigned;
        case CppLexer::Using:
            return SyntaxTokenType::Using;
        case CppLexer::Virtual:
            return SyntaxTokenType::Virtual;
        case CppLexer::Void:
            return SyntaxTokenType::Void;
        case CppLexer::Volatile:
            return SyntaxTokenType::Volatile;
        case CppLexer::WChar:
            return SyntaxTokenType::WChar;
        case CppLexer::While:
            return SyntaxTokenType::While;
        case CppLexer::Override:
            return SyntaxTokenType::Override;
        case CppLexer::Final:
            return SyntaxTokenType::Final;
        case CppLexer::OpenBrace:
            return SyntaxTokenType::OpenBrace;
        case CppLexer::CloseBrace:
            return SyntaxTokenType::CloseBrace;
        case CppLexer::OpenBracket:
            return SyntaxTokenType::OpenBracket;
        case CppLexer::CloseBracket:
            return SyntaxTokenType::CloseBracket;
        case CppLexer::OpenParenthesis:
            return SyntaxTokenType::OpenParenthesis;
        case CppLexer::CloseParenthesis:
            return SyntaxTokenType::CloseParenthesis;
        case CppLexer::Semicolon:
            return SyntaxTokenType::Semicolon;
        case CppLexer::Colon:
            return SyntaxTokenType::Colon;
        case CppLexer::Ellipsis:
            return SyntaxTokenType::Ellipsis;
        case CppLexer::QuestionMark:
            return SyntaxTokenType::QuestionMark;
        case CppLexer::DoubleColon:
            return SyntaxTokenType::DoubleColon;
        case CppLexer::Period:
            return SyntaxTokenType::Period;
        case CppLexer::PeriodAsterisk:
            return SyntaxTokenType::PeriodAsterisk;
        case CppLexer::Plus:
            return SyntaxTokenType::Plus;
        case CppLexer::Minus:
            return SyntaxTokenType::Minus;
        case CppLexer::Asterisk:
            return SyntaxTokenType::Asterisk;
        case CppLexer::ForwardSlash:
            return SyntaxTokenType::ForwardSlash;
        case CppLexer::Percent:
            return SyntaxTokenType::Percent;
        case CppLexer::Caret:
            return SyntaxTokenType::Caret;
        case CppLexer::Ampersand:
            return SyntaxTokenType::Ampersand;
        case CppLexer::VerticalBar:
            return SyntaxTokenType::VerticalBar;
        case CppLexer::Tilde:
            return SyntaxTokenType::Tilde;
        case CppLexer::ExclamationMark:
            return SyntaxTokenType::ExclamationMark;
        case CppLexer::Equal:
            return SyntaxTokenType::Equal;
        case CppLexer::LessThan:
            return SyntaxTokenType::LessThan;
        case CppLexer::GreaterThan:
            return SyntaxTokenType::GreaterThan;
        case CppLexer::PlusEqual:
            return SyntaxTokenType::PlusEqual;
        case CppLexer::MinusEqual:
            return SyntaxTokenType::MinusEqual;
        case CppLexer::AsteriskEqual:
            return SyntaxTokenType::AsteriskEqual;
        case CppLexer::ForwardSlashEqual:
            return SyntaxTokenType::ForwardSlashEqual;
        case CppLexer::PercentEqual:
            return SyntaxTokenType::PercentEqual;
        case CppLexer::CaretEqual:
            return SyntaxTokenType::CaretEqual;
        case CppLexer::AmpersandEqual:
            return SyntaxTokenType::AmpersandEqual;
        case CppLexer::VerticalBarEqual:
            return SyntaxTokenType::VerticalBarEqual;
        case CppLexer::DoubleLessThan:
            return SyntaxTokenType::DoubleLessThan;
        case CppLexer::DoubleLessThanEqual:
            return SyntaxTokenType::DoubleLessThanEqual;
        case CppLexer::DoubleGreaterThanEqual:
            return SyntaxTokenType::DoubleGreaterThanEqual;
        case CppLexer::DoubleEqual:
            return SyntaxTokenType::DoubleEqual;
        case CppLexer::ExclamationMarkEqual:
            return SyntaxTokenType::ExclamationMarkEqual;
        case CppLexer::LessThanEqual:
            return SyntaxTokenType::LessThanEqual;
        case CppLexer::GreaterThanEqual:
            return SyntaxTokenType::GreaterThanEqual;
        case CppLexer::DoubleAmpersand:
            return SyntaxTokenType::DoubleAmpersand;
        case CppLexer::DoubleVerticalBar:
            return SyntaxTokenType::DoubleVerticalBar;
        case CppLexer::DoublePlus:
            return SyntaxTokenType::DoublePlus;
        case CppLexer::DoubleMinus:
            return SyntaxTokenType::DoubleMinus;
        case CppLexer::Comma:
            return SyntaxTokenType::Comma;
        case CppLexer::ArrowAsterisk:
            return SyntaxTokenType::ArrowAsterisk;
        case CppLexer::Arrow:
            return SyntaxTokenType::Arrow;
        case CppLexer::Zero:
            return SyntaxTokenType::Zero;
        case CppLexer::IntegerLiteral:
            return SyntaxTokenType::IntegerLiteral;
        case CppLexer::FloatingPointLiteral:
            return SyntaxTokenType::FloatingPointLiteral;
        case CppLexer::CharacterLiteral:
            return SyntaxTokenType::CharacterLiteral;
        case CppLexer::StringLiteral:
            return SyntaxTokenType::StringLiteral;
        case CppLexer::UserDefinedIntegerLiteral:
        case CppLexer::UserDefinedFloatingPointLiteral:
        case CppLexer::UserDefinedCharacterLiteral:
        case CppLexer::UserDefinedStringLiteral:
            return SyntaxTokenType::UserDefinedLiteral;
        case CppLexer::Identifier:
            return SyntaxTokenType::Identifier;
        default:
            throw std::logic_error("Unknown token type.");
    }
}

size_t ASTCppParserVisitor::GetFirstNewlinePosition(
    const std::vector<antlr4::Token*>& tokens)
{
    // Find the location of the first newline
    size_t firstNewline = std::numeric_limits<size_t>::max();
    for (size_t i = 0u; i < tokens.size(); i++)
    {
        if (tokens[i]->getType() == CppLexer::Newline)
        {
            firstNewline = i;
            break;
        }
    }

    return firstNewline;
}

// Get all of the hidden trivia to the left after the first newline
// Those trivia will be attached as trailing to the previous token
std::vector<SyntaxTrivia> ASTCppParserVisitor::GetLeadingTrivia(size_t index)
{
    // Get the trivia tokens to the left
    auto leftTriviaTokens = m_tokenStream->getHiddenTokensToLeft(index, CppLexer::TRIVIA);

    // If there is another token in front of this token
    // then Skip over tokens up to the first newline
    // If no newline all tokens are leading trivia
    size_t firstToken = 0;
    if (index != leftTriviaTokens.size())
    {
        firstToken = GetFirstNewlinePosition(leftTriviaTokens);
        if (firstToken == std::numeric_limits<size_t>::max())
        {
            firstToken = 0;
        }
    }

    // Convert all the applicable tokens to leading trivia
    std::vector<SyntaxTrivia> leadingTrivia;
    for (size_t i = firstToken; i < leftTriviaTokens.size(); i++)
    {
        auto& triviaToken = leftTriviaTokens[i];

        std::string triviaText = triviaToken->getText();
        leadingTrivia.push_back(
            SyntaxFactory::CreateTrivia(std::move(triviaText)));
    }

    return leadingTrivia;
}

// Get all of the hidden trivia to the right before the first newline
// All tokens after the first newline will be attached as leading trivia
// If there is no newline then ALL trivia will be leading
std::vector<SyntaxTrivia> ASTCppParserVisitor::GetTrailingTrivia(size_t index)
{
    // Get the trivia tokens to the right
    auto rightTriviaTokens = m_tokenStream->getHiddenTokensToRight(index, CppLexer::TRIVIA);

    // All tokens up to the first newline are used
    size_t lastToken = GetFirstNewlinePosition(rightTriviaTokens);

    // If no newline none of the tokens are trailing trivia
    std::vector<SyntaxTrivia> trailingTrivia;
    if (lastToken != std::numeric_limits<size_t>::max())
    {
        for (size_t i = 0; i < lastToken; i++)
        {
            auto& triviaToken = rightTriviaTokens[i];

            std::string triviaText = triviaToken->getText();
            trailingTrivia.push_back(
                SyntaxFactory::CreateTrivia(std::move(triviaText)));
        }
    }

    return trailingTrivia;
}

std::shared_ptr<const SyntaxToken> ASTCppParserVisitor::CreateToken(
    SyntaxTokenType type,
    antlr4::tree::TerminalNode* terminalNode)
{
    auto token = terminalNode->getSymbol();
    auto index = token->getTokenIndex();
    std::string tokenText = token->getText();

    Trace(tokenText.c_str());

    // Load the leading and trailing trivia stoping at the newline token
    auto leadingTrivia = GetLeadingTrivia(index);
    auto trailingTrivia = GetTrailingTrivia(index);

    // If a keyword then create the shared token
    // Otherwise create a unique token
    switch (type)
    {
        case SyntaxTokenType::IntegerLiteral:
        case SyntaxTokenType::FloatingPointLiteral:
        case SyntaxTokenType::CharacterLiteral:
        case SyntaxTokenType::StringLiteral:
        case SyntaxTokenType::UserDefinedLiteral:
        case SyntaxTokenType::Identifier:
            return SyntaxFactory::CreateUniqueToken(
                type,
                std::move(tokenText),
                std::move(leadingTrivia),
                std::move(trailingTrivia));
        default:
            return SyntaxFactory::CreateKeywordToken(
                type,
                std::move(leadingTrivia),
                std::move(trailingTrivia));
    }
}
