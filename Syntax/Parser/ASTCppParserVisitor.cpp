﻿module SoupSyntax;
using namespace Soup::Syntax;

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

ASTCppParserVisitor::ASTCppParserVisitor(antlr4::BufferedTokenStream* tokenStream) :
    m_tokenStream(tokenStream)
{
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
        std::make_shared<const SyntaxList<Declaration>>(
            std::move(declarationSequence)),
        CreateToken(SyntaxTokenType::EndOfFile, context->EOF()));
}

antlrcpp::Any ASTCppParserVisitor::visitPrimaryExpression(CppParser::PrimaryExpressionContext* context)
{
    Trace("VisitPrimaryExpression");
    if (context->This() != nullptr)
    {
        auto thisToken = CreateToken(
            SyntaxTokenType::This,
            context->This());
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
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext* context)
{
    Trace("VisitUnqualifiedIdentifier");
    if (context->Identifier() != nullptr)
    {
        auto identifier = CreateToken(
            SyntaxTokenType::Identifier,
            context->Identifier());
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateSimpleIdentifierExpression(std::move(identifier)));
    }
    else if (context->className() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateDestructorIdentifierExpression(
                CreateToken(SyntaxTokenType::Tilde, context->Tilde()),
                CreateToken(SyntaxTokenType::Identifier, context->className()->Identifier())));
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
    auto qualifiedName = std::dynamic_pointer_cast<const QualifiedIdentifierExpression>(
        visit(context->nestedNameSpecifier())
            .as<std::shared_ptr<const SyntaxNode>>());
    auto simpleName = std::dynamic_pointer_cast<const UnqualifiedIdentifierExpression>(
        visit(context->unqualifiedIdentifier())
            .as<std::shared_ptr<const SyntaxNode>>());

    if (context->Template() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }

    // Replace the right name with the current unqlaified name
    return std::static_pointer_cast<const SyntaxNode>(
        qualifiedName->WithRight(std::move(simpleName)));
}

antlrcpp::Any ASTCppParserVisitor::visitNestedNameSpecifier(CppParser::NestedNameSpecifierContext* context)
{
    Trace("VisitNestedNameSpecifier");

    auto doubleColonToken = CreateToken(
                SyntaxTokenType::DoubleColon,
                context->DoubleColon());

    // Jump through hoops to convert antlr right recursion into the tree left recursion
    std::shared_ptr<const SimpleIdentifierExpression> rightName = nullptr;
    if (context->nestedNameSpecifierSequence() != nullptr)
    {
        rightName = GetNextSimpleName(context->nestedNameSpecifierSequence());
    }

    // Build the actual qualified expression
    std::shared_ptr<const QualifiedIdentifierExpression> qualifiedName = nullptr;
    if (context->Identifier() != nullptr)
    {
        // Simple name qualified expression
        auto leftName = SyntaxFactory::CreateSimpleIdentifierExpression(
            CreateToken(
                SyntaxTokenType::Identifier,
                context->Identifier()));
        qualifiedName = SyntaxFactory::CreateQualifiedIdentifierExpression(
            std::move(leftName),
            std::move(doubleColonToken),
            std::move(rightName));
    }
    else if (context->declarationTypeSpecifier() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        // Global qualified expression
        qualifiedName = SyntaxFactory::CreateQualifiedIdentifierExpression(
            nullptr,
            std::move(doubleColonToken),
            std::move(rightName));
    }

    // If the recursive right element exists then this must be parented to it
    // More oddity from right recursion mixing with left recursion
    if (context->nestedNameSpecifierSequence() != nullptr)
    {
        return visitNextRightQualifiedNestedNames(
            std::move(qualifiedName),
            context->nestedNameSpecifierSequence());
    }
    else
    {
        // Otherwise just return this element
        return std::static_pointer_cast<const SyntaxNode>(qualifiedName);
    }
}

antlrcpp::Any ASTCppParserVisitor::visitNestedNameSpecifierSequence(CppParser::NestedNameSpecifierSequenceContext *context)
{
    throw std::logic_error("NestedNameSpecifierSequence is handled manually.");
}

antlrcpp::Any ASTCppParserVisitor::visitLambdaExpression(CppParser::LambdaExpressionContext* context)
{
    Trace("VisitLambdaExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLambdaIntroducer(CppParser::LambdaIntroducerContext* context)
{
    Trace("VisitLambdaIntroducer");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLambdaDeclarator(CppParser::LambdaDeclaratorContext* context)
{
    Trace("VisitLambdaDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
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
        auto recursiveExpression = std::dynamic_pointer_cast<const Expression>(
            visit(context->postfixExpression())
                .as<std::shared_ptr<const SyntaxNode>>());

        if (context->OpenBracket() != nullptr)
        {
            // Subscript operator expression
            // postfixExpression OpenBracket expressionOrBracedInitializerList CloseBracket
            auto openBracketToken = CreateToken(
                SyntaxTokenType::OpenBracket,
                context->OpenBracket());
            auto initializerList = std::dynamic_pointer_cast<const Expression>(
                visit(context->expressionOrBracedInitializerList())
                    .as<std::shared_ptr<const SyntaxNode>>());
            auto closeBracketToken = CreateToken(
                SyntaxTokenType::CloseBracket,
                context->CloseBracket());
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
        }
        else if (context->memberAccessOperator() != nullptr)
        {
            // postfixExpression memberAccessOperator Template? identifierExpression
            // postfixExpression memberAccessOperator pseudoDestructorName
            std::shared_ptr<const Expression> rightExpression = nullptr;
            if (context->identifierExpression() != nullptr)
            {
                rightExpression = std::dynamic_pointer_cast<const Expression>(
                    visit(context->identifierExpression())
                        .as<std::shared_ptr<const SyntaxNode>>());
            }
            else
            {
                throw std::logic_error(std::string(__func__) + " NotImplemented");
            }
            
            auto memberAccessOperator = context->memberAccessOperator();
            if (memberAccessOperator->Arrow() != nullptr)
            {
                return std::static_pointer_cast<const SyntaxNode>(
                    SyntaxFactory::CreateBinaryExpression(
                        BinaryOperator::MemberOfPointer,
                        std::move(recursiveExpression),
                        CreateToken(SyntaxTokenType::Arrow, memberAccessOperator->Arrow()),
                        std::move(rightExpression)));
            }
            else if (memberAccessOperator->Period() != nullptr)
            {
                return std::static_pointer_cast<const SyntaxNode>(
                    SyntaxFactory::CreateBinaryExpression(
                        BinaryOperator::MemberOfObject,
                        std::move(recursiveExpression),
                        CreateToken(SyntaxTokenType::Period, memberAccessOperator->Period()),
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
                operatorToken = CreateToken(
                    SyntaxTokenType::DoublePlus,
                    operatorContext->DoublePlus());
            }
            else if (operatorContext->DoubleMinus() != nullptr)
            {
                unaryOperator = UnaryOperator::PostDecrement;
                operatorToken = CreateToken(
                    SyntaxTokenType::DoubleMinus,
                    operatorContext->DoubleMinus());
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
        }
        else if (context->simpleTypeSpecifier() != nullptr)
        {
            // simpleTypeSpecifier bracedInitializerList
        }
        else if (context->typenameSpecifier() != nullptr)
        {
            // typenameSpecifier bracedInitializerList
        }
        else if (context->namedCastExpression() != nullptr)
        {
            // namedCastExpression
        }
        else if (context->typeIdentificationExpression() != nullptr)
        {
            // typeIdentificationExpression
        }
    }

    throw std::logic_error(std::string(__func__) + " NotImplemented");
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
        auto subExpression = std::dynamic_pointer_cast<const Expression>(
            visit(context->castExpression())
                .as<std::shared_ptr<const SyntaxNode>>());

        UnaryOperator unaryOperator;
        std::shared_ptr<const SyntaxToken> operatorToken;
        if (context->DoublePlus() != nullptr)
        {
            unaryOperator = UnaryOperator::PreIncrement;
            operatorToken = CreateToken(
                SyntaxTokenType::DoublePlus,
                context->DoublePlus());
        }
        else if (context->DoubleMinus() != nullptr)
        {
            unaryOperator = UnaryOperator::PreDecrement;
            operatorToken = CreateToken(
                SyntaxTokenType::DoubleMinus,
                context->DoubleMinus());
        }
        else if (context->unaryOperator() != nullptr)
        {
            auto operatorContext = context->unaryOperator();
            if (operatorContext->Asterisk() != nullptr)
            {
                unaryOperator = UnaryOperator::Indirection;
                operatorToken = CreateToken(
                    SyntaxTokenType::Asterisk,
                    operatorContext->Asterisk());
            }
            else if (operatorContext->Ampersand() != nullptr)
            {
                unaryOperator = UnaryOperator::AddressOf;
                operatorToken = CreateToken(
                    SyntaxTokenType::Ampersand,
                    operatorContext->Ampersand());
            }
            else if (operatorContext->Plus() != nullptr)
            {
                unaryOperator = UnaryOperator::Plus;
                operatorToken = CreateToken(
                    SyntaxTokenType::Plus,
                    operatorContext->Plus());
            }
            else if (operatorContext->Minus() != nullptr)
            {
                unaryOperator = UnaryOperator::Minus;
                operatorToken = CreateToken(
                    SyntaxTokenType::Minus,
                    operatorContext->Minus());
            }
            else if (operatorContext->ExclamationMark() != nullptr)
            {
                unaryOperator = UnaryOperator::LogicalNot;
                operatorToken = CreateToken(
                    SyntaxTokenType::ExclamationMark,
                    operatorContext->ExclamationMark());
            }
            else if (operatorContext->Tilde() != nullptr)
            {
                unaryOperator = UnaryOperator::BitwiseNot;
                operatorToken = CreateToken(
                    SyntaxTokenType::Tilde,
                    operatorContext->Tilde());
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
    throw std::logic_error(std::string(__func__) + " NotImplemented");
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

antlrcpp::Any ASTCppParserVisitor::visitPointerManipulationExpression(CppParser::PointerManipulationExpressionContext* context)
{
    Trace("VisitPointerManipulationExpression");
    if (context->PeriodAsterisk() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::PointerToMemberOfObject,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->pointerManipulationExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::PeriodAsterisk, context->PeriodAsterisk()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->castExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else if (context->ArrowAsterisk() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::PointerToMemberOfPointer,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->pointerManipulationExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::ArrowAsterisk, context->ArrowAsterisk()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->castExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else
    {
        return visit(context->castExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitMultiplicativeExpression(CppParser::MultiplicativeExpressionContext* context)
{
    Trace("VisitMultiplicativeExpression");
    if (context->Asterisk() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Multiplication,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->multiplicativeExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::Asterisk, context->Asterisk()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->pointerManipulationExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else if (context->ForwardSlash() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Division,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->multiplicativeExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::ForwardSlash, context->ForwardSlash()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->pointerManipulationExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else if (context->Percent() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Modulo,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->multiplicativeExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::Percent, context->Percent()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->pointerManipulationExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else
    {
        return visit(context->pointerManipulationExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitAdditiveExpression(CppParser::AdditiveExpressionContext* context)
{
    Trace("VisitAdditiveExpression");
    if (context->Plus() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Addition,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->additiveExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::Plus, context->Plus()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->multiplicativeExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else if (context->Minus() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Subtraction,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->additiveExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::Minus, context->Minus()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->multiplicativeExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else
    {
        return visit(context->multiplicativeExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitShiftExpression(CppParser::ShiftExpressionContext* context)
{
    Trace("VisitShiftExpression");
    if (context->DoubleLessThan() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseLeftShift,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->shiftExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::DoubleLessThan, context->DoubleLessThan()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->additiveExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else if (context->DoubleGreaterThan() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseRightShift,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->shiftExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::DoubleGreaterThan, context->DoubleGreaterThan()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->additiveExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else
    {
        return visit(context->additiveExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitRelationalExpression(CppParser::RelationalExpressionContext* context)
{
    Trace("VisitRelationalExpression");
    if (context->LessThan() != nullptr)
    {
        Trace("LessThan");
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LessThan,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->relationalExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::LessThan, context->LessThan()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->shiftExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else if (context->GreaterThan() != nullptr)
    {
        Trace("GreaterThan");
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::GreaterThan,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->relationalExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::GreaterThan, context->GreaterThan()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->shiftExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else if (context->LessThanEqual() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LessThanOrEqual,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->relationalExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::LessThanEqual, context->LessThanEqual()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->shiftExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else if (context->GreaterThanEqual() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::GreaterThanOrEqual,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->relationalExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::GreaterThanEqual, context->GreaterThanEqual()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->shiftExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else
    {
        return visit(context->shiftExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitEqualityExpression(CppParser::EqualityExpressionContext* context)
{
    Trace("VisitEqualityExpression");
    if (context->DoubleEqual() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::Equals,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->equalityExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::DoubleEqual, context->DoubleEqual()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->relationalExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else if (context->ExclamationMarkEqual() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::NotEquals,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->equalityExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::ExclamationMarkEqual, context->ExclamationMarkEqual()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->relationalExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else
    {
        return visit(context->relationalExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitAndExpression(CppParser::AndExpressionContext* context)
{
    Trace("VisitAndExpression");
    if (context->Ampersand() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseAnd,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->andExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::Ampersand, context->Ampersand()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->equalityExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else
    {
        return visit(context->equalityExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitExclusiveOrExpression(CppParser::ExclusiveOrExpressionContext* context)
{
    Trace("VisitExclusiveOrExpression");
    if (context->Caret() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseExclusiveOr,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->exclusiveOrExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::Caret, context->Caret()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->andExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else
    {
        return visit(context->andExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitInclusiveOrExpression(CppParser::InclusiveOrExpressionContext* context)
{
    Trace("VisitInclusiveOrExpression");
    if (context->VerticalBar() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::BitwiseOr,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->inclusiveOrExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::VerticalBar, context->VerticalBar()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->exclusiveOrExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else
    {
        return visit(context->exclusiveOrExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitLogicalAndExpression(CppParser::LogicalAndExpressionContext* context)
{
    Trace("VisitLogicalAndExpression");
    if (context->DoubleAmpersand() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LogicalAnd,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->logicalAndExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::DoubleAmpersand, context->DoubleAmpersand()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->inclusiveOrExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else
    {
        return visit(context->inclusiveOrExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitLogicalOrExpression(CppParser::LogicalOrExpressionContext* context)
{
    Trace("VisitLogicalOrExpression");
    if (context->DoubleVerticalBar() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateBinaryExpression(
                BinaryOperator::LogicalOr,
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->logicalOrExpression())
                        .as<std::shared_ptr<const SyntaxNode>>()),
                CreateToken(SyntaxTokenType::DoubleVerticalBar, context->DoubleVerticalBar()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->logicalAndExpression())
                        .as<std::shared_ptr<const SyntaxNode>>())));
    }
    else
    {
        return visit(context->logicalAndExpression());
    }
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
        return visit(context->logicalOrExpression());
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
        auto leftExpression = std::dynamic_pointer_cast<const Expression>(
                    visit(context->logicalOrExpression())
                        .as<std::shared_ptr<const SyntaxNode>>());
        auto rightExpression = std::dynamic_pointer_cast<const Expression>(
                    visit(context->initializerClause())
                        .as<std::shared_ptr<const SyntaxNode>>());

        auto operatorContext = context->assignmentOperator();
        if (operatorContext->Equal() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::SimpleAssignment,
                    std::move(leftExpression),
                    CreateToken(SyntaxTokenType::Equal, operatorContext->Equal()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->AsteriskEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::MultiplicationAssignment,
                    std::move(leftExpression),
                    CreateToken(SyntaxTokenType::AsteriskEqual, operatorContext->AsteriskEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->ForwardSlashEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::DivisionAssignment,
                    std::move(leftExpression),
                    CreateToken(SyntaxTokenType::ForwardSlashEqual, operatorContext->ForwardSlashEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->PercentEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::ModuloAssignment,
                    std::move(leftExpression),
                    CreateToken(SyntaxTokenType::PercentEqual, operatorContext->PercentEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->PlusEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::AdditionAssignment,
                    std::move(leftExpression),
                    CreateToken(SyntaxTokenType::PlusEqual, operatorContext->PlusEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->MinusEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::SubtractionAssignment,
                    std::move(leftExpression),
                    CreateToken(SyntaxTokenType::MinusEqual, operatorContext->MinusEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->DoubleGreaterThanEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::BitwiseRightShiftAssignment,
                    std::move(leftExpression),
                    CreateToken(SyntaxTokenType::DoubleGreaterThanEqual, operatorContext->DoubleGreaterThanEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->DoubleLessThanEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::BitwiseLeftShiftAssignment,
                    std::move(leftExpression),
                    CreateToken(SyntaxTokenType::DoubleLessThanEqual, operatorContext->DoubleLessThanEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->AmpersandEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::BitwiseAndAssignment,
                    std::move(leftExpression),
                    CreateToken(SyntaxTokenType::AmpersandEqual, operatorContext->AmpersandEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->CaretEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::BitwiseExclusiveOrAssignment,
                    std::move(leftExpression),
                    CreateToken(SyntaxTokenType::CaretEqual, operatorContext->CaretEqual()),
                    std::move(rightExpression)));
        }
        else if (operatorContext->VerticalBarEqual() != nullptr)
        {
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateBinaryExpression(
                    BinaryOperator::BitwiseOrAssignment,
                    std::move(leftExpression),
                    CreateToken(SyntaxTokenType::VerticalBarEqual, operatorContext->VerticalBarEqual()),
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
        auto expression = std::dynamic_pointer_cast<const Expression>(
            visit(context->expression())
                .as<std::shared_ptr<const SyntaxNode>>());

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateExpressionStatement(
                std::move(expression),
                CreateToken(SyntaxTokenType::Semicolon, context->Semicolon())));
    }
    else
    {
        // The degenerate expression statement with no expression has a special type
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateEmptyStatement(
                CreateToken(SyntaxTokenType::Semicolon, context->Semicolon())));
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
            CreateToken(SyntaxTokenType::OpenBrace, context->OpenBrace()),
            std::move(statements),
            CreateToken(SyntaxTokenType::CloseBrace, context->CloseBrace())));
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
    auto statement = std::dynamic_pointer_cast<const Statement>(
        visit(context->statement())
            .as<std::shared_ptr<const SyntaxNode>>());
    statements.push_back(std::move(statement));

    return statements;
}

antlrcpp::Any ASTCppParserVisitor::visitSelectionStatement(CppParser::SelectionStatementContext* context)
{
    Trace("VisitSelectionStatement");
    if (context->If() != nullptr)
    {
        // Visit the condition expression
        auto condition = std::dynamic_pointer_cast<const Expression>(
            visit(context->condition())
                .as<std::shared_ptr<const SyntaxNode>>());

        // Visit the true statement
        auto trueStatement = std::dynamic_pointer_cast<const Statement>(
            visit(context->statement().at(0))
                .as<std::shared_ptr<const SyntaxNode>>());

        // Check for optional else clause
        std::shared_ptr<const ElseClause> elseClause = nullptr;
        if (context->Else() != nullptr)
        {
            // Visit the false statement
            auto falseStatement = std::dynamic_pointer_cast<const Statement>(
                visit(context->statement().at(1))
                    .as<std::shared_ptr<const SyntaxNode>>());

            elseClause = SyntaxFactory::CreateElseClause(
                CreateToken(SyntaxTokenType::Else, context->Else()),
                std::move(falseStatement));
        }

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateIfStatement(
                CreateToken(SyntaxTokenType::If, context->If()),
                CreateToken(SyntaxTokenType::OpenParenthesis, context->OpenParenthesis()),
                std::move(condition),
                CreateToken(SyntaxTokenType::CloseParenthesis, context->CloseParenthesis()),
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
            expression = std::dynamic_pointer_cast<const Expression>(
                visit(context->expressionOrBracedInitializerList())
                    .as<std::shared_ptr<const SyntaxNode>>());
        }

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateReturnStatement(
                CreateToken(SyntaxTokenType::Return, context->Return()),
                std::move(expression),
                CreateToken(SyntaxTokenType::Semicolon, context->Semicolon())));
    }
    else
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationStatement(CppParser::DeclarationStatementContext* context)
{
    Trace("VisitDeclarationStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
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
    auto declaration = std::dynamic_pointer_cast<const Declaration>(
        visit(context->declaration())
            .as<std::shared_ptr<const SyntaxNode>>());
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

    auto declarationSpecifier = visit(context->declarationSpecifierSequence())
        .as<std::shared_ptr<const DeclarationSpecifier>>();

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
            std::move(declarationSpecifier),
            SyntaxFactory::CreateInitializerDeclaratorList(
                std::make_shared<const SyntaxSeparatorList<InitializerDeclarator>>(
                    std::move(initializerDeclaratorList.Items),
                    std::move(initializerDeclaratorList.Separators))),
            CreateToken(SyntaxTokenType::Semicolon, context->Semicolon())));
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
            CreateToken(SyntaxTokenType::Semicolon, context->Semicolon())));
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeDeclaration(CppParser::AttributeDeclarationContext* context)
{
    Trace("VisitAttributeDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationModifier(CppParser::DeclarationModifierContext* context)
{
    Trace("visitDeclarationModifier");
    if (context->storageClassSpecifier() != nullptr)
    {
        return visit(context->storageClassSpecifier());
    }
    else if (context->functionSpecifier() != nullptr)
    {
        return visit(context->functionSpecifier());
    }
    else if (context->Friend() != nullptr)
    {
        return CreateToken(SyntaxTokenType::Friend, context->Friend());
    }
    else if (context->TypeDef() != nullptr)
    {
        return CreateToken(SyntaxTokenType::TypeDef, context->TypeDef());
    }
    else if (context->ConstExpr() != nullptr)
    {
        return CreateToken(SyntaxTokenType::ConstExpr, context->ConstExpr());
    }
    else if (context->Inline() != nullptr)
    {
        return CreateToken(SyntaxTokenType::Inline, context->Inline());
    }
    else
    {
        throw std::logic_error("Unexpected declaration specifier");
    }
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

    auto typeSpecifier = visit(context->definingTypeSpecifier())
        .as<std::shared_ptr<const SyntaxNode>>();

    // Check for the optional trailing modifiers
    std::vector<std::shared_ptr<const SyntaxToken>> trailingModifiers;
    if (context->trailingDeclarationModifierSequence() != nullptr)
    {
        trailingModifiers = visit(context->trailingDeclarationModifierSequence())
            .as<std::vector<std::shared_ptr<const SyntaxToken>>>();
    }

    return SyntaxFactory::CreateDeclarationSpecifier(
        std::move(leadingModifiers),
        std::move(typeSpecifier),
        std::move(trailingModifiers));;
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
    if (context->Static() != nullptr)
    {
        return CreateToken(SyntaxTokenType::Static, context->Static());
    }
    else if (context->ThreadLocal() != nullptr)
    {
        return CreateToken(SyntaxTokenType::ThreadLocal, context->ThreadLocal());
    }
    else if (context->Extern() != nullptr)
    {
        return CreateToken(SyntaxTokenType::Extern, context->Extern());
    }
    else if (context->Mutable() != nullptr)
    {
        return CreateToken(SyntaxTokenType::Mutable, context->Mutable());
    }
    else
    {
        throw std::logic_error("Unexpected storage class specifier");
    }
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
    throw std::logic_error(std::string(__func__) + " NotImplemented");
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
        // Check for the optional nested name specifier
        if (context->nestedNameSpecifier() != nullptr)
        {
            auto qualifiedName = std::dynamic_pointer_cast<const QualifiedIdentifierExpression>(
                visit(context->nestedNameSpecifier())
                    .as<std::shared_ptr<const SyntaxNode>>());

            auto simpleName = std::dynamic_pointer_cast<const UnqualifiedIdentifierExpression>(
                visit(context->typeName())
                    .as<std::shared_ptr<const SyntaxNode>>());

            // Replace the right name with the current unqlaified name
            return std::static_pointer_cast<const SyntaxNode>(
                qualifiedName->WithRight(std::move(simpleName)));
        }
        else
        {
            return visit(context->typeName());
        }
    }
    else if (context->Char() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Char,
                CreateToken(SyntaxTokenType::Char, context->Char())));
    }
    else if (context->Char16() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Char16,
                CreateToken(SyntaxTokenType::Char16, context->Char16())));
    }
    else if (context->Char32() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Char32,
                CreateToken(SyntaxTokenType::Char32, context->Char32())));
    }
    else if (context->WChar() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::WChar,
                CreateToken(SyntaxTokenType::WChar, context->WChar())));
    }
    else if (context->Bool() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Bool,
                CreateToken(SyntaxTokenType::Bool, context->Bool())));
    }
    else if (context->Short() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Short,
                CreateToken(SyntaxTokenType::Short, context->Short())));
    }
    else if (context->Int() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Int,
                CreateToken(SyntaxTokenType::Int, context->Int())));
    }
    else if (context->Long() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Long,
                CreateToken(SyntaxTokenType::Long, context->Long())));
    }
    else if (context->Signed() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Signed,
                CreateToken(SyntaxTokenType::Signed, context->Signed())));
    }
    else if (context->Unsigned() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Unsigned,
                CreateToken(SyntaxTokenType::Unsigned, context->Unsigned())));
    }
    else if (context->Float() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Float,
                CreateToken(SyntaxTokenType::Float, context->Float())));
    }
    else if (context->Double() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Double,
                CreateToken(SyntaxTokenType::Double, context->Double())));
    }
    else if (context->Void() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Void,
                CreateToken(SyntaxTokenType::Void, context->Void())));
    }
    else if (context->Auto() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Auto,
                CreateToken(SyntaxTokenType::Auto, context->Auto())));
    }

    throw std::logic_error("Unexpected simple type.");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeName(CppParser::TypeNameContext* context)
{
    Trace("VisitTypeName");
    if (context->Identifier() != nullptr)
    {
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateSimpleIdentifierExpression(
                CreateToken(SyntaxTokenType::Identifier, context->Identifier())));
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
        classToken = CreateToken(SyntaxTokenType::Class, enumKeyContext->Class());
    }
    else if (enumKeyContext->Struct() != nullptr)
    {
        classToken = CreateToken(SyntaxTokenType::Struct, enumKeyContext->Struct());
    }

    // Check for the optional enum head name
    std::shared_ptr<const SyntaxToken> identifierToken = nullptr;
    if (enumHeadContext->enumHeadName() != nullptr)
    {
        auto enumHeadNameContext = enumHeadContext->enumHeadName();
        identifierToken = CreateToken(SyntaxTokenType::Identifier, enumHeadNameContext->Identifier());
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
        SyntaxFactory::CreateEnumDeclaration(
            CreateToken(SyntaxTokenType::Enum, enumKeyContext->Enum()),
            std::move(classToken),
            std::move(identifierToken),
            CreateToken(SyntaxTokenType::OpenBrace, context->OpenBrace()),
            std::make_shared<const SyntaxSeparatorList<EnumeratorDefinition>>(
                std::move(enumeratorList.Items),
                std::move(enumeratorList.Separators)),
            CreateToken(SyntaxTokenType::CloseBrace, context->CloseBrace())));
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

antlrcpp::Any ASTCppParserVisitor::visitOpaqueEnumDeclaration(CppParser::OpaqueEnumDeclarationContext* context)
{
    Trace("VisitOpaqueEnumDeclaration");
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
            CreateToken(SyntaxTokenType::Comma, context->Comma()));
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
        CreateToken(SyntaxTokenType::Identifier, enumeratorContext->Identifier()));
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

    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateNamespaceDefinition(
            CreateToken(SyntaxTokenType::Namespace, context->Namespace()),
            CreateToken(SyntaxTokenType::Identifier, context->Identifier()),
            CreateToken(SyntaxTokenType::OpenBrace, context->OpenBrace()),
            std::move(namespaceBody),
            CreateToken(SyntaxTokenType::CloseBrace, context->CloseBrace())));
}

antlrcpp::Any ASTCppParserVisitor::visitUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext* context)
{
    Trace("VisitUnnamedNamespaceDefinition");

    // Inline? Namespace attributeSpecifierSequence? OpenBrace namespaceBody CloseBrace;
    auto namespaceBody = visit(context->namespaceBody())
        .as<std::shared_ptr<const SyntaxList<Declaration>>>();

    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateNamespaceDefinition(
            CreateToken(SyntaxTokenType::Namespace, context->Namespace()),
            nullptr,
            CreateToken(SyntaxTokenType::OpenBrace, context->OpenBrace()),
            std::move(namespaceBody),
            CreateToken(SyntaxTokenType::CloseBrace, context->CloseBrace())));
}

antlrcpp::Any ASTCppParserVisitor::visitNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext* context)
{
    Trace("VisitNestedNamespaceDefinition");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext* context)
{
    Trace("VisitEnclosingNamespaceSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
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

    return std::make_shared<const SyntaxList<Declaration>>(
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
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeSpecifier(CppParser::AttributeSpecifierContext* context)
{
    Trace("VisitAttributeSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
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
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttribute(CppParser::AttributeContext* context)
{
    Trace("VisitAttribute");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
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
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitBalancedTokenSequence(CppParser::BalancedTokenSequenceContext* context)
{
    Trace("VisitBalancedTokenSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitBalancedToken(CppParser::BalancedTokenContext* context)
{
    Trace("VisitBalancedToken");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
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
        initializerDeclaratorList.Separators.push_back(
            CreateToken(SyntaxTokenType::Comma, context->Comma()));
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
        initializer = visit(context->initializer())
            .as<std::shared_ptr<const SyntaxNode>>();
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
    throw std::logic_error(std::string(__func__) + " NotImplemented");
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
            CreateToken(SyntaxTokenType::OpenParenthesis, context->OpenParenthesis()),
            std::move(parameterList),
            CreateToken(SyntaxTokenType::CloseParenthesis, context->CloseParenthesis())));
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
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext* context)
{
    Trace("VisitConstVolatileQualifierSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConstVolatileQualifier(CppParser::ConstVolatileQualifierContext* context)
{
    Trace("VisitConstVolatileQualifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitReferenceQualifier(CppParser::ReferenceQualifierContext* context)
{
    Trace("VisitReferenceQualifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeIdentifier(CppParser::TypeIdentifierContext* context)
{
    Trace("VisitTypeIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
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
        return std::make_shared<const SyntaxSeparatorList<Parameter>>(
            std::move(parameterListResult.Items),
            std::move(parameterListResult.Separators));
    }
    else
    {
        return std::make_shared<const SyntaxSeparatorList<Parameter>>(
            std::vector<std::shared_ptr<const Parameter>>(),
            std::vector<std::shared_ptr<const SyntaxToken>>());
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
        parameterDeclarationList.Separators.push_back(
            CreateToken(SyntaxTokenType::Comma, context->Comma()));
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
    auto declarationSpecifier = visit(context->declarationSpecifierSequence())
        .as<std::shared_ptr<const DeclarationSpecifier>>();
    if (context->declarator() != nullptr)
    {
        auto declarator = visit(context->declarator())
            .as<std::shared_ptr<const SyntaxNode>>();

        // TODO: initializerClause
        return SyntaxFactory::CreateParameter(
            std::move(declarationSpecifier),
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

    // Analyze the declarator
    auto declaratorContext = context->functionDeclarator();
    auto identifier = std::dynamic_pointer_cast<const IdentifierExpression>(
        visit(declaratorContext->identifierExpression())
            .as<std::shared_ptr<const SyntaxNode>>());
    auto parameterList = std::dynamic_pointer_cast<const ParameterList>(
        visit(declaratorContext->functionParameters())
            .as<std::shared_ptr<const SyntaxNode>>());
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
            .as<std::shared_ptr<const DeclarationSpecifier>>();

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateFunctionDefinition(
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
    auto compoundStatment = std::dynamic_pointer_cast<const CompoundStatement>(
        visit(context->compoundStatement())
            .as<std::shared_ptr<const SyntaxNode>>());
    return std::static_pointer_cast<const SyntaxNode>(
        std::make_shared<const RegularFunctionBody>(
            std::move(compoundStatment)));
}

antlrcpp::Any ASTCppParserVisitor::visitExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext* context)
{
    Trace("VisitExplicitlyDefaultedFunction");
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateDefaultFunctionBody(
            CreateToken(SyntaxTokenType::Equal, context->Equal()),
            CreateToken(SyntaxTokenType::Default, context->Default()),
            CreateToken(SyntaxTokenType::Semicolon, context->Semicolon())));
}

antlrcpp::Any ASTCppParserVisitor::visitDeletedFunction(CppParser::DeletedFunctionContext* context)
{
    Trace("VisitDeletedFunction");
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateDeleteFunctionBody(
            CreateToken(SyntaxTokenType::Equal, context->Equal()),
            CreateToken(SyntaxTokenType::Delete, context->Delete()),
            CreateToken(SyntaxTokenType::Semicolon, context->Semicolon())));
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
                CreateToken(SyntaxTokenType::Equal, context->Equal()),
                std::dynamic_pointer_cast<const Expression>(
                    visit(context->initializerClause())
                        .as<std::shared_ptr<const SyntaxNode>>())));
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
    SeparatorListResult<Expression> initializerList = {};
    if (context->initializerList() != nullptr)
    {
        initializerList = visit(context->initializerList())
            .as<SeparatorListResult<Expression>>();
        initializerList.Separators.push_back(
            CreateToken(SyntaxTokenType::Comma, context->Comma()));
    }

    // Handle the next item
    auto initializer = std::dynamic_pointer_cast<const Expression>(
        visit(context->initializerClause())
            .as<std::shared_ptr<const SyntaxNode>>());
    initializerList.Items.push_back(std::move(initializer));

    return initializerList;
}

antlrcpp::Any ASTCppParserVisitor::visitBracedInitializerList(CppParser::BracedInitializerListContext* context)
{
    Trace("VisitBracedInitializerList");

    // Check for the optional expressions
    SeparatorListResult<Expression> result = {};
    if (context->initializerList() != nullptr)
    {
        result = visit(context->initializerList())
            .as<const SeparatorListResult<Expression>>();

        // Check for the optional trailing comma
        if (context->Comma() != nullptr)
        {
            result.Separators.push_back(
                CreateToken(SyntaxTokenType::Comma, context->Comma()));
        }
    }

    auto values = std::make_shared<const SyntaxSeparatorList<Expression>>(
        std::move(result.Items),
        std::move(result.Separators));

    return SyntaxFactory::CreateInitializerList(
        CreateToken(SyntaxTokenType::OpenBrace, context->OpenBrace()),
        std::move(values),
        CreateToken(SyntaxTokenType::CloseBrace, context->CloseBrace()));
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
        classToken = CreateToken(SyntaxTokenType::Class, classKeyContext->Class());
    }
    else if (classKeyContext->Struct() != nullptr)
    {
        classToken = CreateToken(SyntaxTokenType::Struct, classKeyContext->Struct());
    }
    else if (classKeyContext->Union() != nullptr)
    {
        classToken = CreateToken(SyntaxTokenType::Union, classKeyContext->Union());
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
    }

    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateClassDeclaration(
            std::move(classToken),
            std::move(identifierToken),
            CreateToken(SyntaxTokenType::OpenBrace, context->OpenBrace()),
            std::make_shared<const SyntaxList<Declaration>>(
                std::move(memberSpecifiers)),
            CreateToken(SyntaxTokenType::CloseBrace, context->CloseBrace())));
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
            CreateToken(SyntaxTokenType::Colon, context->Colon()));
        memberSpecifiers.push_back(std::move(member));
    }
    else if (context->memberDeclaration() != nullptr)
    {
        auto member = std::dynamic_pointer_cast<const Declaration>(
            visit(context->memberDeclaration())
                .as<std::shared_ptr<const SyntaxNode>>());
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
        auto declarationSpecifier = visit(context->declarationSpecifierSequence())
            .as<std::shared_ptr<const DeclarationSpecifier>>();
        auto memberDeclaratorList = visit(context->memberDeclaratorList())
            .as<SeparatorListResult<MemberDeclarator>>();

        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateMemberDeclaration(
                std::move(declarationSpecifier),
                SyntaxFactory::CreateMemberDeclaratorList(
                    std::make_shared<const SyntaxSeparatorList<MemberDeclarator>>(
                        std::move(memberDeclaratorList.Items),
                        std::move(memberDeclaratorList.Separators))),
                CreateToken(SyntaxTokenType::Semicolon, context->Semicolon())));
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
        memberDeclaratorList.Separators.push_back(
            CreateToken(SyntaxTokenType::Comma, context->Comma()));
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
        return CreateToken(SyntaxTokenType::Private, context->Private());
    }
    else if (context->Protected() != nullptr)
    {
        return CreateToken(SyntaxTokenType::Protected, context->Protected());
    }
    else if (context->Public() != nullptr)
    {
        return CreateToken(SyntaxTokenType::Public, context->Public());
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
        CreateToken(SyntaxTokenType::Colon, context->Colon()),
        std::make_shared<const SyntaxSeparatorList<MemberInitializer>>(
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
        memberInitializerList.Separators.push_back(
            CreateToken(SyntaxTokenType::Comma, context->Comma()));
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
        SeparatorListResult<Expression> result = {};
        if (context->expressionList() != nullptr)
        {
            result = visit(context->expressionList())
                .as<const SeparatorListResult<Expression>>();
        }

        auto values = std::make_shared<const SyntaxSeparatorList<Expression>>(
            std::move(result.Items),
            std::move(result.Separators));

        initializerList = SyntaxFactory::CreateInitializerList(
            CreateToken(SyntaxTokenType::OpenParenthesis, context->OpenParenthesis()),
            std::move(values),
            CreateToken(SyntaxTokenType::CloseParenthesis, context->CloseParenthesis()));
    }
    else if (context->bracedInitializerList() != nullptr)
    {
        initializerList = visit(context->bracedInitializerList())
            .as<std::shared_ptr<const InitializerList>>();
    }
    else
    {
        throw std::logic_error("Unknown Member Initializer");
    }

    return SyntaxFactory::CreateMemberInitializer(
        CreateToken(SyntaxTokenType::Identifier, context->memberInitializerIdentifier()->Identifier()),
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
    SeparatorListResult<Expression> argumentList = {};
    if (context->templateArgumentList() != nullptr)
    {
        argumentList = visit(context->templateArgumentList())
            .as<SeparatorListResult<Expression>>();
    }

    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateSimpleTemplateIdentifierExpression(
            CreateToken(SyntaxTokenType::Identifier, context->templateName()->Identifier()),
            CreateToken(SyntaxTokenType::LessThan, context->LessThan()),
            std::make_shared<const SyntaxSeparatorList<Expression>>(
                std::move(argumentList.Items),
                std::move(argumentList.Separators)),
            CreateToken(SyntaxTokenType::GreaterThan, context->GreaterThan())));
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
    SeparatorListResult<Expression> templateArgumentList = {};
    if (context->templateArgumentList() != nullptr)
    {
        templateArgumentList = visit(context->templateArgumentList())
            .as<SeparatorListResult<Expression>>();
        templateArgumentList.Separators.push_back(
            CreateToken(SyntaxTokenType::Comma, context->Comma()));
    }

    // Handle the next item
    auto templateArgument = std::dynamic_pointer_cast<const Expression>(
        visit(context->templateArgument())
            .as<std::shared_ptr<const SyntaxNode>>());
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
    Trace("VisitLitera");
    if (context->FloatingPointLiteral() != nullptr)
    {
        auto literal = CreateToken(
            SyntaxTokenType::FloatingPointLiteral,
            context->FloatingPointLiteral());
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateLiteralExpression(
                LiteralType::Floating,
                std::move(literal)));
    }
    else if (context->CharacterLiteral() != nullptr)
    {
        auto literal = CreateToken(
            SyntaxTokenType::CharacterLiteral,
            context->CharacterLiteral());
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateLiteralExpression(
                LiteralType::Character,
                std::move(literal)));
    }
    else if (context->StringLiteral() != nullptr)
    {
        auto literal = CreateToken(
            SyntaxTokenType::StringLiteral,
            context->StringLiteral());
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
    Trace("VisitIntegerLitera");
    std::shared_ptr<const SyntaxToken> literal = nullptr;
    if (context->Zero())
    {
        literal = CreateToken(
            SyntaxTokenType::IntegerLiteral,
            context->Zero());
    }
    else if (context->IntegerLiteral())
    {
        literal = CreateToken(
            SyntaxTokenType::IntegerLiteral,
            context->IntegerLiteral());
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
        literal = CreateToken(
            SyntaxTokenType::True,
            context->True());
    }
    else if (context->False() != nullptr)
    {
        literal = CreateToken(
            SyntaxTokenType::False,
            context->False());
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
    auto literal = CreateToken(
        SyntaxTokenType::Nullptr,
        context->Nullptr());
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateLiteralExpression(
            LiteralType::Pointer,
            std::move(literal)));
}

antlrcpp::Any ASTCppParserVisitor::visitUserDefinedLiteral(CppParser::UserDefinedLiteralContext* context)
{
    Trace("VisitUserDefinedLitera");
    std::shared_ptr<const SyntaxToken> literal = nullptr;
    if (context->UserDefinedIntegerLiteral() != nullptr)
    {
        literal = CreateToken(
            SyntaxTokenType::UserDefinedLiteral,
            context->UserDefinedIntegerLiteral());
    }
    else if (context->UserDefinedFloatingPointLiteral() != nullptr)
    {
        literal = CreateToken(
            SyntaxTokenType::UserDefinedLiteral,
            context->UserDefinedFloatingPointLiteral());
    }
    else if (context->UserDefinedCharacterLiteral() != nullptr)
    {
        literal = CreateToken(
            SyntaxTokenType::UserDefinedLiteral,
            context->UserDefinedCharacterLiteral());
    }
    else if (context->UserDefinedStringLiteral() != nullptr)
    {
        literal = CreateToken(
            SyntaxTokenType::UserDefinedLiteral,
            context->UserDefinedStringLiteral());
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

    // Skip over tokens past the first newline
    // If no newline all tokens are leading trivia
    size_t firstToken = GetFirstNewlinePosition(leftTriviaTokens);
    if (firstToken == std::numeric_limits<size_t>::max())
    {
        firstToken = 0;
    }

    // Convert all the applicable tokens to leading trivia
    std::vector<SyntaxTrivia> leadingTrivia;
    for (size_t i = firstToken; i < leftTriviaTokens.size(); i++)
    {
        auto& triviaToken = leftTriviaTokens[i];

        std::string triviaText = triviaToken->getText();
        TextSpan triviaSpan = TextSpan(0, 0);
        leadingTrivia.push_back(
            SyntaxFactory::CreateTrivia(std::move(triviaText), triviaSpan));
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
            TextSpan triviaSpan = TextSpan(0, 0);
            trailingTrivia.push_back(
                SyntaxFactory::CreateTrivia(std::move(triviaText), triviaSpan));
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

std::shared_ptr<const SimpleIdentifierExpression> ASTCppParserVisitor::GetNextSimpleName(
    CppParser::NestedNameSpecifierSequenceContext* context)
{
    Trace("GetNextSimpleName");

    if (context->Identifier() != nullptr)
    {
        // Simple name qualified expression
        return SyntaxFactory::CreateSimpleIdentifierExpression(
            CreateToken(SyntaxTokenType::Identifier, context->Identifier()));
    }
    else if (context->simpleTemplateIdentifier() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        throw std::logic_error(std::string(__func__) + " Unknown type.");
    }
}

std::shared_ptr<const QualifiedIdentifierExpression> ASTCppParserVisitor::visitNextRightQualifiedNestedNames(
    std::shared_ptr<const QualifiedIdentifierExpression> leftQualifiedName,
    CppParser::NestedNameSpecifierSequenceContext* context)
{
    Trace("VisitNextRightQualifiedNestedNames");

    // Jump through hoops to convert antlr right recursion into the tree left recursion
    std::shared_ptr<const SimpleIdentifierExpression> rightName = nullptr;
    if (context->nestedNameSpecifierSequence() != nullptr)
    {
        rightName = GetNextSimpleName(context->nestedNameSpecifierSequence());
    }

    // Build the actual qualified expression
    auto doubleColonToken = CreateToken(
                SyntaxTokenType::DoubleColon,
                context->DoubleColon());
    auto qualifiedName = 
        SyntaxFactory::CreateQualifiedIdentifierExpression(
            std::move(leftQualifiedName),
            std::move(doubleColonToken),
            std::move(rightName));

    // If the recursive right element exists then this must be parented to it
    // More oddity from right recursion mixing with left recursion
    if (context->nestedNameSpecifierSequence() != nullptr)
    {
        return visitNextRightQualifiedNestedNames(
            std::move(qualifiedName),
            context->nestedNameSpecifierSequence());
    }
    else
    {
        // Otherwise just return this element
        return qualifiedName;
    }
}
