﻿module SoupSyntax;
using namespace Soup::Syntax;

void Trace(const wchar_t* message)
{
    // std::wcout << message << std::endl;
}

ASTCppParserVisitor::ASTCppParserVisitor(antlr4::BufferedTokenStream* tokenStream) :
    m_tokenStream(tokenStream)
{
}

antlrcpp::Any ASTCppParserVisitor::visitTypedefName(CppParser::TypedefNameContext* context)
{
    Trace(L"VisitTypedefName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNamespaceName(CppParser::NamespaceNameContext* context)
{
    Trace(L"VisitNamespaceName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNamespaceAlias(CppParser::NamespaceAliasContext* context)
{
    Trace(L"VisitNamespaceAlias");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitClassName(CppParser::ClassNameContext* context)
{
    Trace(L"VisitClassName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumName(CppParser::EnumNameContext* context)
{
    Trace(L"VisitEnumName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateName(CppParser::TemplateNameContext* context)
{
    Trace(L"VisitTemplateName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTranslationUnit(CppParser::TranslationUnitContext* context)
{
    Trace(L"VisitTranslationUnit");

    // Check for the optional declaration sequences
    std::shared_ptr<const DeclarationSequence> declarationSequence = nullptr;
    if (context->declarationSequence() != nullptr)
    {
        declarationSequence = visit(context->declarationSequence())
            .as<std::shared_ptr<const DeclarationSequence>>();
    }

    return std::make_shared<const TranslationUnit>(std::move(declarationSequence));
}

antlrcpp::Any ASTCppParserVisitor::visitPrimaryExpression(CppParser::PrimaryExpressionContext* context)
{
    Trace(L"VisitPrimaryExpression");
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
    Trace(L"VisitIdentifierExpression");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext* context)
{
    Trace(L"VisitUnqualifiedIdentifier");
    if (context->Identifier() != nullptr)
    {
        auto identifier = CreateToken(
            SyntaxTokenType::Identifier,
            context->Identifier());
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreateSimpleNameExpression(std::move(identifier)));
    }
    else
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitQualifiedIdentifier(
    CppParser::QualifiedIdentifierContext* context)
{
    Trace(L"VisitQualifiedIdentifier");
    auto qualifiedName = std::dynamic_pointer_cast<const QualifiedNameExpression>(
        visit(context->nestedNameSpecifier())
            .as<std::shared_ptr<const SyntaxNode>>());
    auto simpleName = std::dynamic_pointer_cast<const SimpleNameExpression>(
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
    Trace(L"VisitNestedNameSpecifier");

    auto doubleColonToken = CreateToken(
                SyntaxTokenType::DoubleColon,
                context->DoubleColon());

    // Jump through hoops to convert antlr right recursion into the tree left recursion
    std::shared_ptr<const SimpleNameExpression> rightName = nullptr;
    if (context->nestedNameSpecifierSequence() != nullptr)
    {
        rightName = GetNextSimpleName(context->nestedNameSpecifierSequence());
    }

    // Build the actual qualified expression
    std::shared_ptr<const QualifiedNameExpression> qualifiedName = nullptr;
    if (context->Identifier() != nullptr)
    {
        // Simple name qualified expression
        auto leftName = SyntaxFactory::CreateSimpleNameExpression(
            CreateToken(
                SyntaxTokenType::Identifier,
                context->Identifier()));
        qualifiedName = SyntaxFactory::CreateQualifiedNameExpression(
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
        qualifiedName = SyntaxFactory::CreateQualifiedNameExpression(
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
    Trace(L"VisitLambdaExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLambdaIntroducer(CppParser::LambdaIntroducerContext* context)
{
    Trace(L"VisitLambdaIntroducer");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLambdaDeclarator(CppParser::LambdaDeclaratorContext* context)
{
    Trace(L"VisitLambdaDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLambdaCapture(CppParser::LambdaCaptureContext* context)
{
    Trace(L"VisitLambdaCapture");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitCaptureDefault(CppParser::CaptureDefaultContext* context)
{
    Trace(L"VisitCaptureDefault");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitCaptureList(CppParser::CaptureListContext* context)
{
    Trace(L"VisitCaptureList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitCapture(CppParser::CaptureContext* context)
{
    Trace(L"VisitCapture");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitSimpleCapture(CppParser::SimpleCaptureContext* context)
{
    Trace(L"VisitSimpleCapture");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerCapture(CppParser::InitializerCaptureContext* context)
{
    Trace(L"VisitInitializerCapture");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFoldExpression(CppParser::FoldExpressionContext* context)
{
    Trace(L"VisitFoldExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFoldOperator(CppParser::FoldOperatorContext* context)
{
    Trace(L"VisitFoldOperator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExplicitTypeCoversionOperatorExpression(
    CppParser::ExplicitTypeCoversionOperatorExpressionContext *context)
{
    Trace(L"VisitExplicitTypeCoversionOperatorExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitPostfixOperator(CppParser::PostfixOperatorContext *context)
{
    Trace(L"VisitPostfixOperator");
    throw std::logic_error(std::string(__func__) + " NOT USED!");
}

antlrcpp::Any ASTCppParserVisitor::visitNamedCastExpression(CppParser::NamedCastExpressionContext *context)
{
    Trace(L"VisitNamedCastExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitMemberAccessOperator(CppParser::MemberAccessOperatorContext *context)
{
    Trace(L"VisitMemberAccessOperator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNamedCastType(CppParser::NamedCastTypeContext *context)
{
    Trace(L"VisitNamedCastType");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeIdentificationExpression(
    CppParser::TypeIdentificationExpressionContext *context)
{
    Trace(L"VisitTypeIdentificationExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitPostfixExpression(CppParser::PostfixExpressionContext* context)
{
    Trace(L"VisitPostfixExpression");
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

        if (context->LeftBracket() != nullptr)
        {
            // Subscript operator expression
            // postfixExpression LeftBracket expressionOrBracedInitializerList RightBracket
            auto leftBracketToken = CreateToken(
                SyntaxTokenType::LeftBracket,
                context->LeftBracket());
            auto initializerList = std::dynamic_pointer_cast<const Expression>(
                visit(context->expressionOrBracedInitializerList())
                    .as<std::shared_ptr<const SyntaxNode>>());
            auto rightBracketToken = CreateToken(
                SyntaxTokenType::RightBracket,
                context->RightBracket());
            return std::static_pointer_cast<const SyntaxNode>(
                SyntaxFactory::CreateSubscriptExpression(
                    std::move(recursiveExpression),
                    std::move(leftBracketToken),
                    std::move(initializerList),
                    std::move(rightBracketToken)));
        }
        else if (context->LeftParenthesis() != nullptr)
        {
            // postfixExpression LeftParenthesis expressionList? RightParenthesis
        }
        else if (context->memberAccessOperator() != nullptr)
        {
            // postfixExpression memberAccessOperator Template? identifierExpression
            // postfixExpression memberAccessOperator pseudoDestructorName
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
    Trace(L"VisitExpressionList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitPseudoDestructorName(CppParser::PseudoDestructorNameContext* context)
{
    Trace(L"VisitPseudoDestructorName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitUnaryExpression(CppParser::UnaryExpressionContext* context)
{
    Trace(L"VisitUnaryExpression");

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
    Trace(L"VisitUnaryOperator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNewExpression(CppParser::NewExpressionContext* context)
{
    Trace(L"VisitNewExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNewPlacement(CppParser::NewPlacementContext* context)
{
    Trace(L"VisitNewPlacement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNewTypeIdentifier(CppParser::NewTypeIdentifierContext* context)
{
    Trace(L"VisitNewTypeIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNewDeclarator(CppParser::NewDeclaratorContext* context)
{
    Trace(L"VisitNewDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext* context)
{
    Trace(L"VisitNoPointerNewDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNewInitializer(CppParser::NewInitializerContext* context)
{
    Trace(L"VisitNewInitializer");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDeleteExpression(CppParser::DeleteExpressionContext* context)
{
    Trace(L"VisitDeleteExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNoExceptionExpression(CppParser::NoExceptionExpressionContext* context)
{
    Trace(L"VisitNoExceptionExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitCastExpression(CppParser::CastExpressionContext* context)
{
    Trace(L"VisitCastExpression");
    if (context->LeftParenthesis() != nullptr)
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
    Trace(L"VisitPointerManipulationExpression");
    if (context->PeriodAsterisk() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else if (context->ArrowAsterisk() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->castExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitMultiplicativeExpression(CppParser::MultiplicativeExpressionContext* context)
{
    Trace(L"VisitMultiplicativeExpression");
    if (context->Asterisk() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else if (context->ForwardSlash() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else if (context->Percent() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->pointerManipulationExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitAdditiveExpression(CppParser::AdditiveExpressionContext* context)
{
    Trace(L"VisitAdditiveExpression");
    if (context->Plus() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else if (context->Minus() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->multiplicativeExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitShiftExpression(CppParser::ShiftExpressionContext* context)
{
    Trace(L"VisitShiftExpression");
    if (context->DoubleLessThan() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else if (context->DoubleGreaterThan() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->additiveExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitRelationalExpression(CppParser::RelationalExpressionContext* context)
{
    Trace(L"VisitRelationalExpression");
    if (context->LessThan() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else if (context->GreaterThan() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else if (context->LessThanEqual() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else if (context->GreaterThanEqual() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->shiftExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitEqualityExpression(CppParser::EqualityExpressionContext* context)
{
    Trace(L"VisitEqualityExpression");
    if (context->DoubleEqual() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else if (context->ExclamationMarkEqual() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->relationalExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitAndExpression(CppParser::AndExpressionContext* context)
{
    Trace(L"VisitAndExpression");
    if (context->Ampersand() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->equalityExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitExclusiveOrExpression(CppParser::ExclusiveOrExpressionContext* context)
{
    Trace(L"VisitExclusiveOrExpression");
    if (context->Caret() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->andExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitInclusiveOrExpression(CppParser::InclusiveOrExpressionContext* context)
{
    Trace(L"VisitInclusiveOrExpression");
    if (context->VerticalBar() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->exclusiveOrExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitLogicalAndExpression(CppParser::LogicalAndExpressionContext* context)
{
    Trace(L"VisitLogicalAndExpression");
    if (context->DoubleAmpersand() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->inclusiveOrExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitLogicalOrExpression(CppParser::LogicalOrExpressionContext* context)
{
    Trace(L"VisitLogicalOrExpression");
    if (context->DoubleVerticalBar() != nullptr)
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
    else
    {
        return visit(context->logicalAndExpression());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitConditionalExpression(CppParser::ConditionalExpressionContext* context)
{
    Trace(L"VisitConditionalExpression");
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
    Trace(L"VisitThrowExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAssignmentExpression(CppParser::AssignmentExpressionContext* context)
{
    Trace(L"VisitAssignmentExpression");
    if (context->conditionalExpression() != nullptr)
    {
        return visit(context->conditionalExpression());
    }
    else
    {
        throw std::logic_error(std::string(__func__) + " NotImplemented");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitAssignmentOperator(CppParser::AssignmentOperatorContext* context)
{
    Trace(L"VisitAssignmentOperator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExpression(CppParser::ExpressionContext* context)
{
    Trace(L"VisitExpression");
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
    Trace(L"VisitConstantExpression");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitStatement(CppParser::StatementContext *context)
{
    Trace(L"VisitStatement");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerStatement(CppParser::InitializerStatementContext* context)
{
    Trace(L"VisitInitializerStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitCondition(CppParser::ConditionContext* context)
{
    Trace(L"VisitCondition");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLabeledStatement(CppParser::LabeledStatementContext* context)
{
    Trace(L"VisitLabeledStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExpressionStatement(CppParser::ExpressionStatementContext* context)
{
    Trace(L"VisitExpressionStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitCompoundStatement(CppParser::CompoundStatementContext* context)
{
    Trace(L"VisitCompoundStatement");

    // Check for optional sequence
    std::shared_ptr<const CompoundStatement> result = nullptr;
    if (context->statementSequence() != nullptr)
    {
        result = std::dynamic_pointer_cast<const CompoundStatement>(
            visit(context->statementSequence())
                .as<std::shared_ptr<const SyntaxNode>>());
    }
    else
    {
        std::vector<std::shared_ptr<const Statement>> statements;
        result = std::make_shared<const CompoundStatement>(
            std::move(statements));
    }

    // TODO: Reference the source braces
    return std::static_pointer_cast<const SyntaxNode>(result);
}

antlrcpp::Any ASTCppParserVisitor::visitStatementSequence(CppParser::StatementSequenceContext* context)
{
    Trace(L"VisitStatementSequence");

    // Handle the recursive rule
    std::shared_ptr<const CompoundStatement> sequence;
    auto childSequence = context->statementSequence();
    if (childSequence != nullptr)
    {
        sequence = visit(childSequence)
            .as<std::shared_ptr<const CompoundStatement>>();
    }
    else
    {
        std::vector<std::shared_ptr<const Statement>> statements;
        sequence = std::make_shared<const CompoundStatement>(
            std::move(statements));
    }

    // Handle the new item
    auto statement = visit(context->statement())
        .as<std::shared_ptr<const Statement>>();
    std::vector<std::shared_ptr<const Statement>> statements = sequence->GetStatements();
    statements.push_back(std::move(statement));
    sequence = std::make_shared<const CompoundStatement>(
        std::move(statements));

    return sequence;
}

antlrcpp::Any ASTCppParserVisitor::visitSelectionStatement(CppParser::SelectionStatementContext* context)
{
    Trace(L"VisitSelectionStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitIterationStatement(CppParser::IterationStatementContext* context)
{
    Trace(L"VisitIterationStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitForInitializerStatement(CppParser::ForInitializerStatementContext* context)
{
    Trace(L"VisitForInitializerStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitForRangeDeclaration(CppParser::ForRangeDeclarationContext* context)
{
    Trace(L"VisitForRangeDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitForRangeInitializer(CppParser::ForRangeInitializerContext* context)
{
    Trace(L"VisitForRangeInitializer");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitJumpStatement(CppParser::JumpStatementContext* context)
{
    Trace(L"VisitJumpStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationStatement(CppParser::DeclarationStatementContext* context)
{
    Trace(L"VisitDeclarationStatement");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationSequence(CppParser::DeclarationSequenceContext* context)
{
    Trace(L"VisitDeclarationSequence");

    // Handle the recursive rule
    std::shared_ptr<const DeclarationSequence> sequence;
    auto childSequence = context->declarationSequence();
    if (childSequence != nullptr)
    {
        sequence = visit(childSequence)
            .as<std::shared_ptr<const DeclarationSequence>>();
    }
    else
    {
        std::vector<std::shared_ptr<const Declaration>> declarations;
        sequence = std::make_shared<const DeclarationSequence>(
            std::move(declarations));
    }

    // Handle the new item
    auto declaration = context->declaration();
    auto declarationNode = visit(declaration)
        .as<std::shared_ptr<const SyntaxNode>>();
    auto declarations = sequence->GetDeclarations();
    declarations.push_back(
        std::static_pointer_cast<const Declaration>(declarationNode));

    return std::make_shared<const DeclarationSequence>(
        std::move(declarations));
}

antlrcpp::Any ASTCppParserVisitor::visitDeclaration(CppParser::DeclarationContext *context)
{
    Trace(L"VisitDeclaration");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitBlockDeclaration(CppParser::BlockDeclarationContext *context)
{
    Trace(L"VisitBlockDeclaration");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext* context)
{
    Trace(L"VisitNoDeclarationSpecifierFunctionDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAliasDeclaration(CppParser::AliasDeclarationContext* context)
{
    Trace(L"VisitAliasDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitSimpleDeclaration(CppParser::SimpleDeclarationContext* context)
{
    Trace(L"VisitSimpleDeclaration");

    auto declarationSpecifierSequence = std::dynamic_pointer_cast<const DeclarationSpecifierSequence>(
        visit(context->declarationSpecifierSequence())
            .as<std::shared_ptr<const SyntaxNode>>());
    auto initializerDeclaratorList = visit(context->initializerDeclaratorList())
        .as<std::shared_ptr<const InitializerDeclaratorList>>();

    // TODO
    return std::static_pointer_cast<const SyntaxNode>(
        std::make_shared<const SimpleDefinition>(
            std::move(declarationSpecifierSequence),
            std::move(initializerDeclaratorList)));
}

antlrcpp::Any ASTCppParserVisitor::visitStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext* context)
{
    Trace(L"VisitStaticAssertDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEmptyDeclaration(CppParser::EmptyDeclarationContext* context)
{
    Trace(L"VisitEmptyDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeDeclaration(CppParser::AttributeDeclarationContext* context)
{
    Trace(L"VisitAttributeDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationSpecifier(CppParser::DeclarationSpecifierContext* context)
{
    Trace(L"VisitDeclarationSpecifier");
    if (context->definingTypeSpecifier() != nullptr)
    {
        return visit(context->definingTypeSpecifier());
    }
    else
    {
        throw std::logic_error("Unexpected declaration specifier");
    }
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationSpecifierSequence(CppParser::DeclarationSpecifierSequenceContext* context)
{
    Trace(L"VisitDeclarationSpecifierSequence");
    
    // Handle the recursive rule
    std::shared_ptr<const DeclarationSpecifierSequence> sequence;
    auto childSequence = context->declarationSpecifierSequence();
    if (childSequence != nullptr)
    {
        sequence = visit(childSequence)
            .as<std::shared_ptr<const DeclarationSpecifierSequence>>();
    }
    else
    {
        std::vector<std::shared_ptr<const SyntaxNode>> declarationSpecifiers;
        sequence = std::make_shared<const DeclarationSpecifierSequence>(
            std::move(declarationSpecifiers));
    }

    // Handle the new item
    auto specifier = context->declarationSpecifier();
    auto specifiers = sequence->GetSpecifiers();
    specifiers.push_back(
        visit(specifier));
    sequence = std::make_shared<const DeclarationSpecifierSequence>(
        std::move(specifiers));

    return std::static_pointer_cast<const SyntaxNode>(sequence);
}

antlrcpp::Any ASTCppParserVisitor::visitStorageClassSpecifier(CppParser::StorageClassSpecifierContext* context)
{
    Trace(L"VisitStorageClassSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionSpecifier(CppParser::FunctionSpecifierContext* context)
{
    Trace(L"VisitFunctionSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeSpecifier(CppParser::TypeSpecifierContext *context)
{
    Trace(L"VisitTypeSpecifier");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext* context)
{
    Trace(L"VisitTypeSpecifierSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDefiningTypeSpecifier(CppParser::DefiningTypeSpecifierContext *context)
{
    Trace(L"VisitDefiningTypeSpecifier");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext* context)
{
    Trace(L"VisitDefiningTypeSpecifierSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext* context)
{
    Trace(L"VisitSimpleTypeSpecifier");
    if (context->Char() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Char,
                CreateToken(SyntaxTokenType::Char, context->Char())));
    else if (context->Char16() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Char16,
                CreateToken(SyntaxTokenType::Char16, context->Char16())));
    else if (context->Char32() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Char32,
                CreateToken(SyntaxTokenType::Char32, context->Char32())));
    else if (context->WChar() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::WChar,
                CreateToken(SyntaxTokenType::WChar, context->WChar())));
    else if (context->Bool() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Bool,
                CreateToken(SyntaxTokenType::Bool, context->Bool())));
    else if (context->Short() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Short,
                CreateToken(SyntaxTokenType::Short, context->Short())));
    else if (context->Int() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Int,
                CreateToken(SyntaxTokenType::Int, context->Int())));
    else if (context->Long() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Long,
                CreateToken(SyntaxTokenType::Long, context->Long())));
    else if (context->Signed() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Signed,
                CreateToken(SyntaxTokenType::Signed, context->Signed())));
    else if (context->Unsigned() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Unsigned,
                CreateToken(SyntaxTokenType::Unsigned, context->Unsigned())));
    else if (context->Float() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Float,
                CreateToken(SyntaxTokenType::Float, context->Float())));
    else if (context->Double() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Double,
                CreateToken(SyntaxTokenType::Double, context->Double())));
    else if (context->Void() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Void,
                CreateToken(SyntaxTokenType::Void, context->Void())));
    else if (context->Auto() != nullptr)
        return std::static_pointer_cast<const SyntaxNode>(
            SyntaxFactory::CreatePrimitiveDataTypeDeclaration(
                PrimitiveDataType::Auto,
                CreateToken(SyntaxTokenType::Auto, context->Auto())));

    throw std::logic_error("Unexpected simple type.");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeName(CppParser::TypeNameContext* context)
{
    Trace(L"VisitTypeName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext* context)
{
    Trace(L"VisitDeclarationTypeSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext* context)
{
    Trace(L"VisitElaboratedTypeSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumSpecifier(CppParser::EnumSpecifierContext* context)
{
    Trace(L"VisitEnumSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumHead(CppParser::EnumHeadContext* context)
{
    Trace(L"VisitEnumHead");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumHeadName(CppParser::EnumHeadNameContext* context)
{
    Trace(L"VisitEnumHeadName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitOpaqueEnumDeclaration(CppParser::OpaqueEnumDeclarationContext* context)
{
    Trace(L"VisitOpaqueEnumDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumKey(CppParser::EnumKeyContext* context)
{
    Trace(L"VisitEnumKey");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumBase(CppParser::EnumBaseContext* context)
{
    Trace(L"VisitEnumBase");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumeratorList(CppParser::EnumeratorListContext* context)
{
    Trace(L"VisitEnumeratorList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumeratorDefinition(CppParser::EnumeratorDefinitionContext* context)
{
    Trace(L"VisitEnumeratorDefinition");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnumerator(CppParser::EnumeratorContext* context)
{
    Trace(L"VisitEnumerator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNamespaceDefinition(CppParser::NamespaceDefinitionContext* context)
{
    Trace(L"VisitNamespaceDefinition");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext* context)
{
    Trace(L"VisitNamedNamespaceDefinition");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext* context)
{
    Trace(L"VisitUnnamedNamespaceDefinition");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext* context)
{
    Trace(L"VisitNestedNamespaceDefinition");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext* context)
{
    Trace(L"VisitEnclosingNamespaceSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNamespaceBody(CppParser::NamespaceBodyContext* context)
{
    Trace(L"VisitNamespaceBody");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext* context)
{
    Trace(L"VisitNamespaceAliasDefinition");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext* context)
{
    Trace(L"VisitQualifiedNamespaceSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitUsingDeclaration(CppParser::UsingDeclarationContext* context)
{
    Trace(L"VisitUsingDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitUsingDeclaratorList(CppParser::UsingDeclaratorListContext* context)
{
    Trace(L"VisitUsingDeclaratorList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitUsingDeclarator(CppParser::UsingDeclaratorContext* context)
{
    Trace(L"VisitUsingDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitUsingDirective(CppParser::UsingDirectiveContext* context)
{
    Trace(L"VisitUsingDirective");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAsmDefinition(CppParser::AsmDefinitionContext* context)
{
    Trace(L"VisitAsmDefinition");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLinkageSpecification(CppParser::LinkageSpecificationContext* context)
{
    Trace(L"VisitLinkageSpecification");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext* context)
{
    Trace(L"VisitAttributeSpecifierSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeSpecifier(CppParser::AttributeSpecifierContext* context)
{
    Trace(L"VisitAttributeSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAlignmentSpecifier(CppParser::AlignmentSpecifierContext* context)
{
    Trace(L"VisitAlignmentSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext* context)
{
    Trace(L"VisitAttributeUsingPrefix");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeList(CppParser::AttributeListContext* context)
{
    Trace(L"VisitAttributeList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttribute(CppParser::AttributeContext* context)
{
    Trace(L"VisitAttribute");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeToken(CppParser::AttributeTokenContext* context)
{
    Trace(L"VisitAttributeToken");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeScopedToken(CppParser::AttributeScopedTokenContext* context)
{
    Trace(L"VisitAttributeScopedToken");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeNamespace(CppParser::AttributeNamespaceContext* context)
{
    Trace(L"VisitAttributeNamespace");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAttributeArgumentClause(CppParser::AttributeArgumentClauseContext* context)
{
    Trace(L"VisitAttributeArgumentClause");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitBalancedTokenSequence(CppParser::BalancedTokenSequenceContext* context)
{
    Trace(L"VisitBalancedTokenSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitBalancedToken(CppParser::BalancedTokenContext* context)
{
    Trace(L"VisitBalancedToken");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext* context)
{
    Trace(L"VisitInitializerDeclaratorList");

    // Handle the recursive rule
    std::shared_ptr<const InitializerDeclaratorList> list;
    auto childList = context->initializerDeclaratorList();
    if (childList != nullptr)
    {
        list = visit(childList)
            .as<std::shared_ptr<const InitializerDeclaratorList>>();
    }
    else
    {
        std::vector<std::shared_ptr<const InitializerDeclarator>> initializerDeclarators;
        list = std::make_shared<const InitializerDeclaratorList>(
            std::move(initializerDeclarators));
    }

    // Handle the new item
    auto item = visit(context->initializerDeclarator())
        .as<std::shared_ptr<const InitializerDeclarator>>();
    auto items = list->GetItems();
    items.push_back(item);
    list = std::make_shared<const InitializerDeclaratorList>(
        std::move(items));

    return list;
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerDeclarator(CppParser::InitializerDeclaratorContext* context)
{
    Trace(L"VisitInitializerDeclarator");

    auto declarator = visit(context->declarator())
        .as<std::shared_ptr<const SyntaxNode>>();

    // Check for optional initializer
    std::shared_ptr<const SyntaxNode> initializer = nullptr;
    if (context->initializer() != nullptr)
    {
        initializer = visit(context->initializer())
            .as<std::shared_ptr<const SyntaxNode>>();
    }

    return std::make_shared<const InitializerDeclarator>(
        std::move(declarator),
        std::move(initializer));
}

antlrcpp::Any ASTCppParserVisitor::visitDeclarator(CppParser::DeclaratorContext *context)
{
    Trace(L"VisitDeclarator");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitPointerDeclarator(CppParser::PointerDeclaratorContext* context)
{
    Trace(L"VisitPointerDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNoPointerDeclarator(CppParser::NoPointerDeclaratorContext* context)
{
    Trace(L"VisitNoPointerDeclarator");

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
    Trace(L"VisitParametersAndQualifiers");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionParameters(CppParser::FunctionParametersContext *context)
{
    Trace(L"VisitFunctionParameters");

    auto parameterList = visit(context->parameterDeclarationClause())
        .as<std::shared_ptr<const SyntaxList<Parameter>>>();

    Trace(L"VisitFunctionParameters2");
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateParameterList(
            CreateToken(SyntaxTokenType::LeftParenthesis, context->LeftParenthesis()),
            std::move(parameterList),
            CreateToken(SyntaxTokenType::RightParenthesis, context->RightParenthesis())));
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionQualifiers(CppParser::FunctionQualifiersContext *context)
{
    Trace(L"VisitFunctionQualifiers");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTrailingReturnType(CppParser::TrailingReturnTypeContext* context)
{
    Trace(L"VisitTrailingReturnType");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitPointerOperator(CppParser::PointerOperatorContext* context)
{
    Trace(L"VisitPointerOperator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext* context)
{
    Trace(L"VisitConstVolatileQualifierSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConstVolatileQualifier(CppParser::ConstVolatileQualifierContext* context)
{
    Trace(L"VisitConstVolatileQualifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitReferenceQualifier(CppParser::ReferenceQualifierContext* context)
{
    Trace(L"VisitReferenceQualifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeIdentifier(CppParser::TypeIdentifierContext* context)
{
    Trace(L"VisitTypeIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext* context)
{
    Trace(L"VisitDefiningTypeIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAbstractDeclarator(CppParser::AbstractDeclaratorContext* context)
{
    Trace(L"VisitAbstractDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext* context)
{
    Trace(L"VisitPointerAbstractDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext* context)
{
    Trace(L"VisitNoPointerAbstractDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext* context)
{
    Trace(L"VisitAbstractPackDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext* context)
{
    Trace(L"VisitNoPointerAbstractPackDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext* context)
{
    Trace(L"VisitParameterDeclarationClause");

    // TODO Ellipsis
    if (context->parameterDeclarationList() != nullptr)
    {
        return visit(context->parameterDeclarationList());
    }
    else
    {
        return std::make_shared<const SyntaxList<Parameter>>(
            std::vector<std::shared_ptr<const Parameter>>(),
            std::vector<std::shared_ptr<const SyntaxToken>>());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitParameterDeclarationList(CppParser::ParameterDeclarationListContext* context)
{
    Trace(L"VisitParameterDeclarationList");

    return std::make_shared<const SyntaxList<Parameter>>(
        std::vector<std::shared_ptr<const Parameter>>(),
        std::vector<std::shared_ptr<const SyntaxToken>>());
}

antlrcpp::Any ASTCppParserVisitor::visitParameterDeclaration(CppParser::ParameterDeclarationContext* context)
{
    Trace(L"VisitParameterDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionDefinition(CppParser::FunctionDefinitionContext* context)
{
    Trace(L"VisitFunctionDefinition");

    // Check for optional return type
    std::shared_ptr<const DeclarationSpecifierSequence> returnType = nullptr;
    if (context->declarationSpecifierSequence() != nullptr)
    {
        returnType = std::dynamic_pointer_cast<const DeclarationSpecifierSequence>(
            visit(context->declarationSpecifierSequence())
                .as<std::shared_ptr<const SyntaxNode>>());
    }

    // Analyze the declarator
    auto declaratorContext = context->functionDeclarator();
    auto identifier = std::dynamic_pointer_cast<const NameExpression>(
        visit(declaratorContext->identifierExpression())
            .as<std::shared_ptr<const SyntaxNode>>());
    auto parameterList = std::dynamic_pointer_cast<const ParameterList>(
        visit(declaratorContext->functionParameters())
            .as<std::shared_ptr<const SyntaxNode>>());
    // TODO Qualifiers
    // TODO Trailiing return type

    auto body = visit(context->functionBody())
        .as<std::shared_ptr<const SyntaxNode>>();

    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateFunctionDefinition(
            std::move(returnType),
            std::move(identifier),
            std::move(parameterList),
            std::move(body)));
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionDeclarator(CppParser::FunctionDeclaratorContext *context)
{
    Trace(L"VisitFunctionDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionBody(CppParser::FunctionBodyContext *context)
{
    Trace(L"VisitFunctionBody");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitRegularFunctionBody(CppParser::RegularFunctionBodyContext* context)
{
    Trace(L"VisitRegularFunctionBody");
    auto compoundStatment = std::dynamic_pointer_cast<const CompoundStatement>(
        visit(context->compoundStatement())
            .as<std::shared_ptr<const SyntaxNode>>());
    return std::static_pointer_cast<const SyntaxNode>(
        std::make_shared<const RegularFunctionBody>(
            std::move(compoundStatment)));
}

antlrcpp::Any ASTCppParserVisitor::visitExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext* context)
{
    Trace(L"VisitExplicitlyDefaultedFunction");
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateDefaultFunctionBody(
            CreateToken(SyntaxTokenType::Equal, context->Equal()),
            CreateToken(SyntaxTokenType::Default, context->Default()),
            CreateToken(SyntaxTokenType::Semicolon, context->Semicolon())));
}

antlrcpp::Any ASTCppParserVisitor::visitDeletedFunction(CppParser::DeletedFunctionContext* context)
{
    Trace(L"VisitDeletedFunction");
    return std::static_pointer_cast<const SyntaxNode>(
        SyntaxFactory::CreateDeleteFunctionBody(
            CreateToken(SyntaxTokenType::Equal, context->Equal()),
            CreateToken(SyntaxTokenType::Delete, context->Delete()),
            CreateToken(SyntaxTokenType::Semicolon, context->Semicolon())));
}

antlrcpp::Any ASTCppParserVisitor::visitInitializer(CppParser::InitializerContext *context)
{
    Trace(L"VisitInitializer");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext* context)
{
    Trace(L"VisitBraceOrEqualInitializer");
    if (context->Equal() != nullptr)
    {
        return visit(context->initializerClause());
    }
    else
    {
        return visit(context->bracedInitializerList());
    }
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerClause(CppParser::InitializerClauseContext *context)
{
    Trace(L"VisitInitializerClause");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitInitializerList(CppParser::InitializerListContext* context)
{
    Trace(L"VisitInitializerList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitBracedInitializerList(CppParser::BracedInitializerListContext* context)
{
    Trace(L"VisitBracedInitializerList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext* context)
{
    Trace(L"VisitExpressionOrBracedInitializerList");
    return visitChildren(context);
}

antlrcpp::Any ASTCppParserVisitor::visitClassSpecifier(CppParser::ClassSpecifierContext* context)
{
    Trace(L"VisitClassSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitClassHead(CppParser::ClassHeadContext* context)
{
    Trace(L"VisitClassHead");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitClassHeadName(CppParser::ClassHeadNameContext* context)
{
    Trace(L"VisitClassHeadName");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext* context)
{
    Trace(L"VisitClassVirtualSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitClassKey(CppParser::ClassKeyContext* context)
{
    Trace(L"VisitClassKey");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitMemberSpecification(CppParser::MemberSpecificationContext* context)
{
    Trace(L"VisitMemberSpecification");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitMemberDeclaration(CppParser::MemberDeclarationContext* context)
{
    Trace(L"VisitMemberDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitMemberDeclaratorList(CppParser::MemberDeclaratorListContext* context)
{
    Trace(L"VisitMemberDeclaratorList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitMemberDeclarator(CppParser::MemberDeclaratorContext* context)
{
    Trace(L"VisitMemberDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext* context)
{
    Trace(L"VisitVirtualSpecifierSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitVirtualSpecifier(CppParser::VirtualSpecifierContext* context)
{
    Trace(L"VisitVirtualSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitPureSpecifier(CppParser::PureSpecifierContext* context)
{
    Trace(L"VisitPureSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitBaseClause(CppParser::BaseClauseContext* context)
{
    Trace(L"VisitBaseClause");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitBaseSpecifierList(CppParser::BaseSpecifierListContext* context)
{
    Trace(L"VisitBaseSpecifierList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitBaseSpecifier(CppParser::BaseSpecifierContext* context)
{
    Trace(L"VisitBaseSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitClassOrDecltype(CppParser::ClassOrDecltypeContext* context)
{
    Trace(L"VisitClassOrDecltype");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAccessSpecifier(CppParser::AccessSpecifierContext* context)
{
    Trace(L"VisitAccessSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext* context)
{
    Trace(L"VisitConversionFunctionIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext* context)
{
    Trace(L"VisitConversionTypeIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConversionDeclarator(CppParser::ConversionDeclaratorContext* context)
{
    Trace(L"VisitConversionDeclarator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitConstructorInitializer(CppParser::ConstructorInitializerContext* context)
{
    Trace(L"VisitConstructorInitializer");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitMemberInitializerList(CppParser::MemberInitializerListContext* context)
{
    Trace(L"VisitMemberInitializerList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitMemberInitializer(CppParser::MemberInitializerContext* context)
{
    Trace(L"VisitMemberInitializer");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext* context)
{
    Trace(L"VisitMemberInitializerIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext* context)
{
    Trace(L"VisitOperatorFunctionIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitAnyOperator(CppParser::AnyOperatorContext* context)
{
    Trace(L"VisitAnyOperator");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext* context)
{
    Trace(L"VisitLiteralOperatorIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateDeclaration(CppParser::TemplateDeclarationContext* context)
{
    Trace(L"VisitTemplateDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateParameterList(CppParser::TemplateParameterListContext* context)
{
    Trace(L"VisitTemplateParameterList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateParameter(CppParser::TemplateParameterContext* context)
{
    Trace(L"VisitTemplateParameter");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeParameter(CppParser::TypeParameterContext* context)
{
    Trace(L"VisitTypeParameter");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypeParameterKey(CppParser::TypeParameterKeyContext* context)
{
    Trace(L"VisitTypeParameterKey");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext* context)
{
    Trace(L"VisitSimpleTemplateIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateIdentifier(CppParser::TemplateIdentifierContext* context)
{
    Trace(L"VisitTemplateIdentifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateArgumentList(CppParser::TemplateArgumentListContext* context)
{
    Trace(L"VisitTemplateArgumentList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTemplateArgument(CppParser::TemplateArgumentContext* context)
{
    Trace(L"VisitTemplateArgument");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTypenameSpecifier(CppParser::TypenameSpecifierContext* context)
{
    Trace(L"VisitTypenameSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExplicitInstantiation(CppParser::ExplicitInstantiationContext* context)
{
    Trace(L"VisitExplicitInstantiation");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExplicitSpecialization(CppParser::ExplicitSpecializationContext* context)
{
    Trace(L"VisitExplicitSpecialization");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitDeductionGuide(CppParser::DeductionGuideContext* context)
{
    Trace(L"VisitDeductionGuide");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitTryBlock(CppParser::TryBlockContext* context)
{
    Trace(L"VisitTryBlock");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitFunctionTryBlock(CppParser::FunctionTryBlockContext* context)
{
    Trace(L"VisitFunctionTryBlock");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitHandlerSequence(CppParser::HandlerSequenceContext* context)
{
    Trace(L"VisitHandlerSequence");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitHandler(CppParser::HandlerContext* context)
{
    Trace(L"VisitHandler");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitExceptionDeclaration(CppParser::ExceptionDeclarationContext* context)
{
    Trace(L"VisitExceptionDeclaration");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext* context)
{
    Trace(L"VisitNoExceptionSpecifier");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitIdentifierList(CppParser::IdentifierListContext* context)
{
    Trace(L"VisitIdentifierList");
    throw std::logic_error(std::string(__func__) + " NotImplemented");
}

antlrcpp::Any ASTCppParserVisitor::visitLiteral(CppParser::LiteralContext* context)
{
    Trace(L"VisitLiteral");
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
    Trace(L"VisitIntegerLiteral");
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
    Trace(L"VisitBooleanLiteral");
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
    Trace(L"VisitPointerLiteral");
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
    Trace(L"VisitUserDefinedLiteral");
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

    // Convert the token text to wide characters
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;

    // Convert all the applicable tokens to leading trivia
    std::vector<SyntaxTrivia> leadingTrivia;
    for (size_t i = firstToken; i < leftTriviaTokens.size(); i++)
    {
        auto& triviaToken = leftTriviaTokens[i];

        std::wstring triviaText =
            converter.from_bytes(triviaToken->getText());
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
        // Convert the token text to wide characters
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;

        for (size_t i = 0; i < lastToken; i++)
        {
            auto& triviaToken = rightTriviaTokens[i];

            std::wstring triviaText = 
                converter.from_bytes(triviaToken->getText());
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

    // Convert the token text to wide characters
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring tokenText = converter.from_bytes(token->getText());

    // Load the leading and trailing trivia stoping at the newline token
    auto leadingTrivia = GetLeadingTrivia(index);
    auto trailingTrivia = GetTrailingTrivia(index);

    return SyntaxFactory::CreateToken(
        type,
        std::move(tokenText),
        std::move(leadingTrivia),
        std::move(trailingTrivia));
}

std::shared_ptr<const SimpleNameExpression> ASTCppParserVisitor::GetNextSimpleName(
    CppParser::NestedNameSpecifierSequenceContext* context)
{
    Trace(L"GetNextSimpleName");

    if (context->Identifier() != nullptr)
    {
        // Simple name qualified expression
        return SyntaxFactory::CreateSimpleNameExpression(
            CreateToken(
                SyntaxTokenType::Identifier,
                context->Identifier()));
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

std::shared_ptr<const QualifiedNameExpression> ASTCppParserVisitor::visitNextRightQualifiedNestedNames(
    std::shared_ptr<const QualifiedNameExpression> leftQualifiedName,
    CppParser::NestedNameSpecifierSequenceContext* context)
{
    Trace(L"VisitNextRightQualifiedNestedNames");

    // Jump through hoops to convert antlr right recursion into the tree left recursion
    std::shared_ptr<const SimpleNameExpression> rightName = nullptr;
    if (context->nestedNameSpecifierSequence() != nullptr)
    {
        rightName = GetNextSimpleName(context->nestedNameSpecifierSequence());
    }

    // Build the actual qualified expression
    auto doubleColonToken = CreateToken(
                SyntaxTokenType::DoubleColon,
                context->DoubleColon());
    auto qualifiedName = 
        SyntaxFactory::CreateQualifiedNameExpression(
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
