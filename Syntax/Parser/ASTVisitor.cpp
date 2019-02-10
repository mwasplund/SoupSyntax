module SoupSyntax;
using namespace Soup::Syntax;

void Trace(const wchar_t* message)
{
    // std::wcout << message << std::endl;
}

antlrcpp::Any ASTVisitor::visitTypedefName(CppParser::TypedefNameContext* context)
{
    Trace(L"VisitTypedefName");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNamespaceName(CppParser::NamespaceNameContext* context)
{
    Trace(L"VisitNamespaceName");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNamespaceAlias(CppParser::NamespaceAliasContext* context)
{
    Trace(L"VisitNamespaceAlias");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassName(CppParser::ClassNameContext* context)
{
    Trace(L"VisitClassName");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumName(CppParser::EnumNameContext* context)
{
    Trace(L"VisitEnumName");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateName(CppParser::TemplateNameContext* context)
{
    Trace(L"VisitTemplateName");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTranslationUnit(CppParser::TranslationUnitContext* context)
{
    Trace(L"VisitTranslationUnit");

    // Check for the optional declaration sequences
    std::shared_ptr<DeclarationSequence> declarationSequence = nullptr;
    if (context->declarationSequence() != nullptr)
    {
        declarationSequence = visit(context->declarationSequence())
            .as<std::shared_ptr<DeclarationSequence>>();
    }

    return std::make_shared<TranslationUnit>(std::move(declarationSequence));
}

antlrcpp::Any ASTVisitor::visitPrimaryExpression(CppParser::PrimaryExpressionContext* context)
{
    Trace(L"VisitPrimaryExpression");
    if (context->literal() != nullptr)
    {
        return visit(context->literal());
    }
    else if (context->This() != nullptr)
    {
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<ThisExpression>());
    }
    else
    {
        throw std::logic_error("NotImplemented");
    }
}

antlrcpp::Any ASTVisitor::visitIdentifierExpression(CppParser::IdentifierExpressionContext *context)
{
    Trace(L"VisitIdentifierExpression");
    return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext* context)
{
    Trace(L"VisitUnqualifiedIdentifier");
    auto identifier = context->Identifier();
    return std::static_pointer_cast<SyntaxNode>(
        std::make_shared<Identifier>(identifier->getText()));
}

antlrcpp::Any ASTVisitor::visitQualifiedIdentifier(CppParser::QualifiedIdentifierContext* context)
{
    Trace(L"VisitQualifiedIdentifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNestedNameSpecifier(CppParser::NestedNameSpecifierContext* context)
{
    Trace(L"VisitNestedNameSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNestedNameSpecifierList(CppParser::NestedNameSpecifierListContext *context)
{
    Trace(L"VisitNestedNameSpecifierList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLambdaExpression(CppParser::LambdaExpressionContext* context)
{
    Trace(L"VisitLambdaExpression");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLambdaIntroducer(CppParser::LambdaIntroducerContext* context)
{
    Trace(L"VisitLambdaIntroducer");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLambdaDeclarator(CppParser::LambdaDeclaratorContext* context)
{
    Trace(L"VisitLambdaDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLambdaCapture(CppParser::LambdaCaptureContext* context)
{
    Trace(L"VisitLambdaCapture");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCaptureDefault(CppParser::CaptureDefaultContext* context)
{
    Trace(L"VisitCaptureDefault");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCaptureList(CppParser::CaptureListContext* context)
{
    Trace(L"VisitCaptureList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCapture(CppParser::CaptureContext* context)
{
    Trace(L"VisitCapture");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitSimpleCapture(CppParser::SimpleCaptureContext* context)
{
    Trace(L"VisitSimpleCapture");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitInitializerCapture(CppParser::InitializerCaptureContext* context)
{
    Trace(L"VisitInitializerCapture");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFoldExpression(CppParser::FoldExpressionContext* context)
{
    Trace(L"VisitFoldExpression");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFoldOperator(CppParser::FoldOperatorContext* context)
{
    Trace(L"VisitFoldOperator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitPostfixExpression(CppParser::PostfixExpressionContext* context)
{
    Trace(L"VisitPostfixExpression");
    if (context->primaryExpression() != nullptr)
    {
        return visit(context->primaryExpression());
    }
    else
    {
        throw std::logic_error("NotImplemented");
    }
}

antlrcpp::Any ASTVisitor::visitExpressionList(CppParser::ExpressionListContext* context)
{
    Trace(L"VisitExpressionList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitPseudoDestructorName(CppParser::PseudoDestructorNameContext* context)
{
    Trace(L"VisitPseudoDestructorName");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUnaryExpression(CppParser::UnaryExpressionContext* context)
{
    Trace(L"VisitUnaryExpression");
    if (context->postfixExpression() != nullptr)
    {
        return visit(context->postfixExpression());
    }
    else
    {
        throw std::logic_error("NotImplemented");
    }
}

antlrcpp::Any ASTVisitor::visitUnaryOperator(CppParser::UnaryOperatorContext* context)
{
    Trace(L"VisitUnaryOperator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNewExpression(CppParser::NewExpressionContext* context)
{
    Trace(L"VisitNewExpression");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNewPlacement(CppParser::NewPlacementContext* context)
{
    Trace(L"VisitNewPlacement");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNewTypeIdentifier(CppParser::NewTypeIdentifierContext* context)
{
    Trace(L"VisitNewTypeIdentifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNewDeclarator(CppParser::NewDeclaratorContext* context)
{
    Trace(L"VisitNewDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext* context)
{
    Trace(L"VisitNoPointerNewDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNewInitializer(CppParser::NewInitializerContext* context)
{
    Trace(L"VisitNewInitializer");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeleteExpression(CppParser::DeleteExpressionContext* context)
{
    Trace(L"VisitDeleteExpression");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoExceptionExpression(CppParser::NoExceptionExpressionContext* context)
{
    Trace(L"VisitNoExceptionExpression");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCastExpression(CppParser::CastExpressionContext* context)
{
    Trace(L"VisitCastExpression");
    if (context->LeftParenthesis() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->unaryExpression());
    }
}

antlrcpp::Any ASTVisitor::visitPointerManipulationExpression(CppParser::PointerManipulationExpressionContext* context)
{
    Trace(L"VisitPointerManipulationExpression");
    if (context->PeriodAsterisk() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else if (context->ArrowAsterisk() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->castExpression());
    }
}

antlrcpp::Any ASTVisitor::visitMultiplicativeExpression(CppParser::MultiplicativeExpressionContext* context)
{
    Trace(L"VisitMultiplicativeExpression");
    if (context->Asterisk() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else if (context->ForwardSlash() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else if (context->Percent() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->pointerManipulationExpression());
    }
}

antlrcpp::Any ASTVisitor::visitAdditiveExpression(CppParser::AdditiveExpressionContext* context)
{
    Trace(L"VisitAdditiveExpression");
    if (context->Plus() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else if (context->Minus() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->multiplicativeExpression());
    }
}

antlrcpp::Any ASTVisitor::visitShiftExpression(CppParser::ShiftExpressionContext* context)
{
    Trace(L"VisitShiftExpression");
    if (context->DoubleLessThan() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else if (context->DoubleGreaterThan() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->additiveExpression());
    }
}

antlrcpp::Any ASTVisitor::visitRelationalExpression(CppParser::RelationalExpressionContext* context)
{
    Trace(L"VisitRelationalExpression");
    if (context->LessThan() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else if (context->GreaterThan() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else if (context->LessThanEqual() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else if (context->GreaterThanEqual() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->shiftExpression());
    }
}

antlrcpp::Any ASTVisitor::visitEqualityExpression(CppParser::EqualityExpressionContext* context)
{
    Trace(L"VisitEqualityExpression");
    if (context->DoubleEqual() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else if (context->ExclamationMarkEqual() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->relationalExpression());
    }
}

antlrcpp::Any ASTVisitor::visitAndExpression(CppParser::AndExpressionContext* context)
{
    Trace(L"VisitAndExpression");
    if (context->Ampersand() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->equalityExpression());
    }
}

antlrcpp::Any ASTVisitor::visitExclusiveOrExpression(CppParser::ExclusiveOrExpressionContext* context)
{
    Trace(L"VisitExclusiveOrExpression");
    if (context->Caret() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->andExpression());
    }
}

antlrcpp::Any ASTVisitor::visitInclusiveOrExpression(CppParser::InclusiveOrExpressionContext* context)
{
    Trace(L"VisitInclusiveOrExpression");
    if (context->VerticalBar() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->exclusiveOrExpression());
    }
}

antlrcpp::Any ASTVisitor::visitLogicalAndExpression(CppParser::LogicalAndExpressionContext* context)
{
    Trace(L"VisitLogicalAndExpression");
    if (context->DoubleAmpersand() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->inclusiveOrExpression());
    }
}

antlrcpp::Any ASTVisitor::visitLogicalOrExpression(CppParser::LogicalOrExpressionContext* context)
{
    Trace(L"VisitLogicalOrExpression");
    if (context->DoubleVerticalBar() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->logicalAndExpression());
    }
}

antlrcpp::Any ASTVisitor::visitConditionalExpression(CppParser::ConditionalExpressionContext* context)
{
    Trace(L"VisitConditionalExpression");
    if (context->QuestionMark() != nullptr)
    {
        throw std::logic_error("NotImplemented");
    }
    else
    {
        return visit(context->logicalOrExpression());
    }
}

antlrcpp::Any ASTVisitor::visitThrowExpression(CppParser::ThrowExpressionContext* context)
{
    Trace(L"VisitThrowExpression");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAssignmentExpression(CppParser::AssignmentExpressionContext* context)
{
    Trace(L"VisitAssignmentExpression");
    if (context->conditionalExpression() != nullptr)
    {
        return visit(context->conditionalExpression());
    }
    else
    {
        throw std::logic_error("NotImplemented");
    }
}

antlrcpp::Any ASTVisitor::visitAssignmentOperator(CppParser::AssignmentOperatorContext* context)
{
    Trace(L"VisitAssignmentOperator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExpression(CppParser::ExpressionContext* context)
{
    Trace(L"VisitExpression");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConstantExpression(CppParser::ConstantExpressionContext* context)
{
    Trace(L"VisitConstantExpression");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitStatement(CppParser::StatementContext *context)
{
    Trace(L"VisitStatement");
    return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitInitializerStatement(CppParser::InitializerStatementContext* context)
{
    Trace(L"VisitInitializerStatement");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCondition(CppParser::ConditionContext* context)
{
    Trace(L"VisitCondition");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLabeledStatement(CppParser::LabeledStatementContext* context)
{
    Trace(L"VisitLabeledStatement");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExpressionStatement(CppParser::ExpressionStatementContext* context)
{
    Trace(L"VisitExpressionStatement");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCompoundStatement(CppParser::CompoundStatementContext* context)
{
    Trace(L"VisitCompoundStatement");

    // Check for optional sequence
    std::shared_ptr<CompoundStatement> result = nullptr;
    auto sequence = context->statementSequence();
    if (sequence != nullptr)
    {
        result = visit(sequence).as<std::shared_ptr<CompoundStatement>>();
    }
    else
    {
        result = std::make_shared<CompoundStatement>();
    }

    // TODO: Reference the source braces
    return result;
}

antlrcpp::Any ASTVisitor::visitStatementSequence(CppParser::StatementSequenceContext* context)
{
    Trace(L"VisitStatementSequence");

    // Handle the recursive rule
    std::shared_ptr<CompoundStatement> sequence;
    auto childSequence = context->statementSequence();
    if (childSequence != nullptr)
    {
        sequence = visit(childSequence).as<std::shared_ptr<CompoundStatement>>();
    }
    else
    {
        sequence = std::make_shared<CompoundStatement>();
    }

    // Handle the new item
    auto statement = visit(context->statement()).as<std::shared_ptr<Statement>>();
    sequence->GetStatements().push_back(std::move(statement));

    return sequence;
}

antlrcpp::Any ASTVisitor::visitSelectionStatement(CppParser::SelectionStatementContext* context)
{
    Trace(L"VisitSelectionStatement");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitIterationStatement(CppParser::IterationStatementContext* context)
{
    Trace(L"VisitIterationStatement");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitForInitializerStatement(CppParser::ForInitializerStatementContext* context)
{
    Trace(L"VisitForInitializerStatement");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitForRangeDeclaration(CppParser::ForRangeDeclarationContext* context)
{
    Trace(L"VisitForRangeDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitForRangeInitializer(CppParser::ForRangeInitializerContext* context)
{
    Trace(L"VisitForRangeInitializer");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitJumpStatement(CppParser::JumpStatementContext* context)
{
    Trace(L"VisitJumpStatement");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeclarationStatement(CppParser::DeclarationStatementContext* context)
{
    Trace(L"VisitDeclarationStatement");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeclarationSequence(CppParser::DeclarationSequenceContext* context)
{
    Trace(L"VisitDeclarationSequence");

    // Handle the recursive rule
    std::shared_ptr<DeclarationSequence> sequence;
    auto childSequence = context->declarationSequence();
    if (childSequence != nullptr)
    {
        sequence = visit(childSequence).as<std::shared_ptr<DeclarationSequence>>();
    }
    else
    {
        sequence = std::make_shared<DeclarationSequence>();
    }

    // Handle the new item
    auto declaration = context->declaration();
    auto declarationNode = visit(declaration).as<std::shared_ptr<SyntaxNode>>();
    sequence->GetDeclarations().push_back(
        std::static_pointer_cast<Declaration>(declarationNode));

    return sequence;
}

antlrcpp::Any ASTVisitor::visitDeclaration(CppParser::DeclarationContext *context)
{
    Trace(L"VisitDeclaration");
    return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitBlockDeclaration(CppParser::BlockDeclarationContext *context)
{
    Trace(L"VisitBlockDeclaration");
    return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext* context)
{
    Trace(L"VisitNoDeclarationSpecifierFunctionDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAliasDeclaration(CppParser::AliasDeclarationContext* context)
{
    Trace(L"VisitAliasDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitSimpleDeclaration(CppParser::SimpleDeclarationContext* context)
{
    Trace(L"VisitSimpleDeclaration");

    auto declarationSpecifierSequence = visit(context->declarationSpecifierSequence())
        .as<std::shared_ptr<DeclarationSpecifierSequence>>();
    auto initializerDeclaratorList = visit(context->initializerDeclaratorList())
        .as<std::shared_ptr<InitializerDeclaratorList>>();

    // TODO
    return std::static_pointer_cast<SyntaxNode>(
        std::make_shared<SimpleDefinition>(
            std::move(declarationSpecifierSequence),
            std::move(initializerDeclaratorList)));
}

antlrcpp::Any ASTVisitor::visitStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext* context)
{
    Trace(L"VisitStaticAssertDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEmptyDeclaration(CppParser::EmptyDeclarationContext* context)
{
    Trace(L"VisitEmptyDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeDeclaration(CppParser::AttributeDeclarationContext* context)
{
    Trace(L"VisitAttributeDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeclarationSpecifier(CppParser::DeclarationSpecifierContext* context)
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

antlrcpp::Any ASTVisitor::visitDeclarationSpecifierSequence(CppParser::DeclarationSpecifierSequenceContext* context)
{
    Trace(L"VisitDeclarationSpecifierSequence");
    
    // Handle the recursive rule
    std::shared_ptr<DeclarationSpecifierSequence> sequence;
    auto childSequence = context->declarationSpecifierSequence();
    if (childSequence != nullptr)
    {
        sequence = visit(childSequence).as<std::shared_ptr<DeclarationSpecifierSequence>>();
    }
    else
    {
        sequence = std::make_shared<DeclarationSpecifierSequence>();
    }

    // Handle the new item
    auto specifier = context->declarationSpecifier();
    sequence->GetSpecifiers().push_back(
        visit(specifier));

    return sequence;
}

antlrcpp::Any ASTVisitor::visitStorageClassSpecifier(CppParser::StorageClassSpecifierContext* context)
{
    Trace(L"VisitStorageClassSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFunctionSpecifier(CppParser::FunctionSpecifierContext* context)
{
    Trace(L"VisitFunctionSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTypeSpecifier(CppParser::TypeSpecifierContext *context)
{
    Trace(L"VisitTypeSpecifier");
    return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext* context)
{
    Trace(L"VisitTypeSpecifierSequence");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDefiningTypeSpecifier(CppParser::DefiningTypeSpecifierContext *context)
{
    Trace(L"VisitDefiningTypeSpecifier");
    return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext* context)
{
    Trace(L"VisitDefiningTypeSpecifierSequence");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext* context)
{
    Trace(L"VisitSimpleTypeSpecifier");
    if (context->Char() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Char));
    else if (context->Char16() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Char16));
    else if (context->Char32() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Char32));
    else if (context->WChar() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::WChar));
    else if (context->Bool() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Bool));
    else if (context->Short() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Short));
    else if (context->Int() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Int));
    else if (context->Long() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Long));
    else if (context->Signed() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Signed));
    else if (context->Unsigned() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Unsigned));
    else if (context->Float() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Float));
    else if (context->Double() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Double));
    else if (context->Void() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Void));
    else if (context->Auto() != nullptr)
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Auto));

    throw std::logic_error("Unexpected simple type.");
}

antlrcpp::Any ASTVisitor::visitTypeName(CppParser::TypeNameContext* context)
{
    Trace(L"VisitTypeName");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext* context)
{
    Trace(L"VisitDeclarationTypeSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext* context)
{
    Trace(L"VisitElaboratedTypeSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumSpecifier(CppParser::EnumSpecifierContext* context)
{
    Trace(L"VisitEnumSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumHead(CppParser::EnumHeadContext* context)
{
    Trace(L"VisitEnumHead");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumHeadName(CppParser::EnumHeadNameContext* context)
{
    Trace(L"VisitEnumHeadName");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitOpaqueEnumDeclaration(CppParser::OpaqueEnumDeclarationContext* context)
{
    Trace(L"VisitOpaqueEnumDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumKey(CppParser::EnumKeyContext* context)
{
    Trace(L"VisitEnumKey");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumBase(CppParser::EnumBaseContext* context)
{
    Trace(L"VisitEnumBase");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumeratorList(CppParser::EnumeratorListContext* context)
{
    Trace(L"VisitEnumeratorList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumeratorDefinition(CppParser::EnumeratorDefinitionContext* context)
{
    Trace(L"VisitEnumeratorDefinition");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumerator(CppParser::EnumeratorContext* context)
{
    Trace(L"VisitEnumerator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNamespaceDefinition(CppParser::NamespaceDefinitionContext* context)
{
    Trace(L"VisitNamespaceDefinition");
    return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext* context)
{
    Trace(L"VisitNamedNamespaceDefinition");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext* context)
{
    Trace(L"VisitUnnamedNamespaceDefinition");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext* context)
{
    Trace(L"VisitNestedNamespaceDefinition");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext* context)
{
    Trace(L"VisitEnclosingNamespaceSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNamespaceBody(CppParser::NamespaceBodyContext* context)
{
    Trace(L"VisitNamespaceBody");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext* context)
{
    Trace(L"VisitNamespaceAliasDefinition");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext* context)
{
    Trace(L"VisitQualifiedNamespaceSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUsingDeclaration(CppParser::UsingDeclarationContext* context)
{
    Trace(L"VisitUsingDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUsingDeclaratorList(CppParser::UsingDeclaratorListContext* context)
{
    Trace(L"VisitUsingDeclaratorList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUsingDeclarator(CppParser::UsingDeclaratorContext* context)
{
    Trace(L"VisitUsingDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUsingDirective(CppParser::UsingDirectiveContext* context)
{
    Trace(L"VisitUsingDirective");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAsmDefinition(CppParser::AsmDefinitionContext* context)
{
    Trace(L"VisitAsmDefinition");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLinkageSpecification(CppParser::LinkageSpecificationContext* context)
{
    Trace(L"VisitLinkageSpecification");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext* context)
{
    Trace(L"VisitAttributeSpecifierSequence");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeSpecifier(CppParser::AttributeSpecifierContext* context)
{
    Trace(L"VisitAttributeSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAlignmentSpecifier(CppParser::AlignmentSpecifierContext* context)
{
    Trace(L"VisitAlignmentSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext* context)
{
    Trace(L"VisitAttributeUsingPrefix");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeList(CppParser::AttributeListContext* context)
{
    Trace(L"VisitAttributeList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttribute(CppParser::AttributeContext* context)
{
    Trace(L"VisitAttribute");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeToken(CppParser::AttributeTokenContext* context)
{
    Trace(L"VisitAttributeToken");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeScopedToken(CppParser::AttributeScopedTokenContext* context)
{
    Trace(L"VisitAttributeScopedToken");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeNamespace(CppParser::AttributeNamespaceContext* context)
{
    Trace(L"VisitAttributeNamespace");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeArgumentClause(CppParser::AttributeArgumentClauseContext* context)
{
    Trace(L"VisitAttributeArgumentClause");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBalancedTokenSequence(CppParser::BalancedTokenSequenceContext* context)
{
    Trace(L"VisitBalancedTokenSequence");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBalancedToken(CppParser::BalancedTokenContext* context)
{
    Trace(L"VisitBalancedToken");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext* context)
{
    Trace(L"VisitInitializerDeclaratorList");

    // Handle the recursive rule
    std::shared_ptr<InitializerDeclaratorList> list;
    auto childList = context->initializerDeclaratorList();
    if (childList != nullptr)
    {
        list = visit(childList).as<std::shared_ptr<InitializerDeclaratorList>>();
    }
    else
    {
        list = std::make_shared<InitializerDeclaratorList>();
    }

    // Handle the new item
    auto item = visit(context->initializerDeclarator()).as<std::shared_ptr<InitializerDeclarator>>();
    list->GetItems().push_back(item);

    return list;
}

antlrcpp::Any ASTVisitor::visitInitializerDeclarator(CppParser::InitializerDeclaratorContext* context)
{
    Trace(L"VisitInitializerDeclarator");

    auto declarator = visit(context->declarator())
        .as<std::shared_ptr<SyntaxNode>>();

    // Check for optional initializer
    std::shared_ptr<SyntaxNode> initializer = nullptr;
    if (context->initializer() != nullptr)
    {
        initializer = visit(context->initializer())
            .as<std::shared_ptr<SyntaxNode>>();
    }

    return std::make_shared<InitializerDeclarator>(
        std::move(declarator),
        std::move(initializer));
}

antlrcpp::Any ASTVisitor::visitDeclarator(CppParser::DeclaratorContext *context)
{
    Trace(L"VisitDeclarator");
    return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitPointerDeclarator(CppParser::PointerDeclaratorContext* context)
{
    Trace(L"VisitPointerDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoPointerDeclarator(CppParser::NoPointerDeclaratorContext* context)
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

antlrcpp::Any ASTVisitor::visitParametersAndQualifiers(CppParser::ParametersAndQualifiersContext* context)
{
    Trace(L"VisitParametersAndQualifiers");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFunctionParameters(CppParser::FunctionParametersContext *context)
{
    Trace(L"VisitFunctionParameters");
    
    return visit(context->parameterDeclarationClause());

}

antlrcpp::Any ASTVisitor::visitFunctionQualifiers(CppParser::FunctionQualifiersContext *context)
{
    Trace(L"VisitFunctionQualifiers");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTrailingReturnType(CppParser::TrailingReturnTypeContext* context)
{
    Trace(L"VisitTrailingReturnType");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitPointerOperator(CppParser::PointerOperatorContext* context)
{
    Trace(L"VisitPointerOperator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext* context)
{
    Trace(L"VisitConstVolatileQualifierSequence");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConstVolatileQualifier(CppParser::ConstVolatileQualifierContext* context)
{
    Trace(L"VisitConstVolatileQualifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitReferenceQualifier(CppParser::ReferenceQualifierContext* context)
{
    Trace(L"VisitReferenceQualifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTypeIdentifier(CppParser::TypeIdentifierContext* context)
{
    Trace(L"VisitTypeIdentifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext* context)
{
    Trace(L"VisitDefiningTypeIdentifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAbstractDeclarator(CppParser::AbstractDeclaratorContext* context)
{
    Trace(L"VisitAbstractDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext* context)
{
    Trace(L"VisitPointerAbstractDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext* context)
{
    Trace(L"VisitNoPointerAbstractDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext* context)
{
    Trace(L"VisitAbstractPackDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext* context)
{
    Trace(L"VisitNoPointerAbstractPackDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext* context)
{
    Trace(L"VisitParameterDeclarationClause");

    // TODO Items
    return std::make_shared<ParameterList>();
}

antlrcpp::Any ASTVisitor::visitParameterDeclarationList(CppParser::ParameterDeclarationListContext* context)
{
    Trace(L"VisitParameterDeclarationList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitParameterDeclaration(CppParser::ParameterDeclarationContext* context)
{
    Trace(L"VisitParameterDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFunctionDefinition(CppParser::FunctionDefinitionContext* context)
{
    Trace(L"VisitFunctionDefinition");

    // Check for optional return type
    std::shared_ptr<DeclarationSpecifierSequence> returnType = nullptr;
    if (context->declarationSpecifierSequence() != nullptr)
    {
        returnType = visit(context->declarationSpecifierSequence()).as<std::shared_ptr<DeclarationSpecifierSequence>>();
    }

    // Analyze the declarator
    auto declaratorContext = context->functionDeclarator();
    auto identifier = std::static_pointer_cast<Identifier>(
        visit(declaratorContext->identifierExpression()).as<std::shared_ptr<SyntaxNode>>());
    auto parameterList = visit(declaratorContext->functionParameters())
        .as<std::shared_ptr<ParameterList>>();
    // TODO Qualifiers
    // TODO Trailiing return type

    auto body = visit(context->functionBody())
        .as<std::shared_ptr<SyntaxNode>>();

    return std::make_shared<FunctionDefinition>(
        std::move(returnType),
        std::move(identifier),
        std::move(parameterList),
        std::move(body));
}

antlrcpp::Any ASTVisitor::visitFunctionDeclarator(CppParser::FunctionDeclaratorContext *context)
{
    Trace(L"VisitFunctionDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFunctionBody(CppParser::FunctionBodyContext *context)
{
    Trace(L"VisitFunctionBody");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitRegularFunctionBody(CppParser::RegularFunctionBodyContext* context)
{
    Trace(L"VisitRegularFunctionBody");
    return std::make_shared<RegularFunctionBody>(
        visit(context->compoundStatement()));
}

antlrcpp::Any ASTVisitor::visitExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext* context)
{
    Trace(L"VisitExplicitlyDefaultedFunction");
    return std::make_shared<DefaultFunctionBody>();
}

antlrcpp::Any ASTVisitor::visitDeletedFunction(CppParser::DeletedFunctionContext* context)
{
    Trace(L"VisitDeletedFunction");
    return std::make_shared<DeleteFunctionBody>();
}

antlrcpp::Any ASTVisitor::visitInitializer(CppParser::InitializerContext *context)
{
    Trace(L"VisitInitializer");
    return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext* context)
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

antlrcpp::Any ASTVisitor::visitInitializerClause(CppParser::InitializerClauseContext *context)
{
    Trace(L"VisitInitializerClause");
    return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitInitializerList(CppParser::InitializerListContext* context)
{
    Trace(L"VisitInitializerList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBracedInitializerList(CppParser::BracedInitializerListContext* context)
{
    Trace(L"VisitBracedInitializerList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext* context)
{
    Trace(L"VisitExpressionOrBracedInitializerList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassSpecifier(CppParser::ClassSpecifierContext* context)
{
    Trace(L"VisitClassSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassHead(CppParser::ClassHeadContext* context)
{
    Trace(L"VisitClassHead");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassHeadName(CppParser::ClassHeadNameContext* context)
{
    Trace(L"VisitClassHeadName");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext* context)
{
    Trace(L"VisitClassVirtualSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassKey(CppParser::ClassKeyContext* context)
{
    Trace(L"VisitClassKey");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberSpecification(CppParser::MemberSpecificationContext* context)
{
    Trace(L"VisitMemberSpecification");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberDeclaration(CppParser::MemberDeclarationContext* context)
{
    Trace(L"VisitMemberDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberDeclaratorList(CppParser::MemberDeclaratorListContext* context)
{
    Trace(L"VisitMemberDeclaratorList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberDeclarator(CppParser::MemberDeclaratorContext* context)
{
    Trace(L"VisitMemberDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext* context)
{
    Trace(L"VisitVirtualSpecifierSequence");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitVirtualSpecifier(CppParser::VirtualSpecifierContext* context)
{
    Trace(L"VisitVirtualSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitPureSpecifier(CppParser::PureSpecifierContext* context)
{
    Trace(L"VisitPureSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBaseClause(CppParser::BaseClauseContext* context)
{
    Trace(L"VisitBaseClause");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBaseSpecifierList(CppParser::BaseSpecifierListContext* context)
{
    Trace(L"VisitBaseSpecifierList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBaseSpecifier(CppParser::BaseSpecifierContext* context)
{
    Trace(L"VisitBaseSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassOrDecltype(CppParser::ClassOrDecltypeContext* context)
{
    Trace(L"VisitClassOrDecltype");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAccessSpecifier(CppParser::AccessSpecifierContext* context)
{
    Trace(L"VisitAccessSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext* context)
{
    Trace(L"VisitConversionFunctionIdentifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext* context)
{
    Trace(L"VisitConversionTypeIdentifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConversionDeclarator(CppParser::ConversionDeclaratorContext* context)
{
    Trace(L"VisitConversionDeclarator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConstructorInitializer(CppParser::ConstructorInitializerContext* context)
{
    Trace(L"VisitConstructorInitializer");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberInitializerList(CppParser::MemberInitializerListContext* context)
{
    Trace(L"VisitMemberInitializerList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberInitializer(CppParser::MemberInitializerContext* context)
{
    Trace(L"VisitMemberInitializer");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext* context)
{
    Trace(L"VisitMemberInitializerIdentifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext* context)
{
    Trace(L"VisitOperatorFunctionIdentifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAnyOperator(CppParser::AnyOperatorContext* context)
{
    Trace(L"VisitAnyOperator");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext* context)
{
    Trace(L"VisitLiteralOperatorIdentifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateDeclaration(CppParser::TemplateDeclarationContext* context)
{
    Trace(L"VisitTemplateDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateParameterList(CppParser::TemplateParameterListContext* context)
{
    Trace(L"VisitTemplateParameterList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateParameter(CppParser::TemplateParameterContext* context)
{
    Trace(L"VisitTemplateParameter");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTypeParameter(CppParser::TypeParameterContext* context)
{
    Trace(L"VisitTypeParameter");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTypeParameterKey(CppParser::TypeParameterKeyContext* context)
{
    Trace(L"VisitTypeParameterKey");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext* context)
{
    Trace(L"VisitSimpleTemplateIdentifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateIdentifier(CppParser::TemplateIdentifierContext* context)
{
    Trace(L"VisitTemplateIdentifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateArgumentList(CppParser::TemplateArgumentListContext* context)
{
    Trace(L"VisitTemplateArgumentList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateArgument(CppParser::TemplateArgumentContext* context)
{
    Trace(L"VisitTemplateArgument");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTypenameSpecifier(CppParser::TypenameSpecifierContext* context)
{
    Trace(L"VisitTypenameSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExplicitInstantiation(CppParser::ExplicitInstantiationContext* context)
{
    Trace(L"VisitExplicitInstantiation");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExplicitSpecialization(CppParser::ExplicitSpecializationContext* context)
{
    Trace(L"VisitExplicitSpecialization");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeductionGuide(CppParser::DeductionGuideContext* context)
{
    Trace(L"VisitDeductionGuide");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTryBlock(CppParser::TryBlockContext* context)
{
    Trace(L"VisitTryBlock");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFunctionTryBlock(CppParser::FunctionTryBlockContext* context)
{
    Trace(L"VisitFunctionTryBlock");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitHandlerSequence(CppParser::HandlerSequenceContext* context)
{
    Trace(L"VisitHandlerSequence");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitHandler(CppParser::HandlerContext* context)
{
    Trace(L"VisitHandler");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExceptionDeclaration(CppParser::ExceptionDeclarationContext* context)
{
    Trace(L"VisitExceptionDeclaration");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext* context)
{
    Trace(L"VisitNoExceptionSpecifier");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitIdentifierList(CppParser::IdentifierListContext* context)
{
    Trace(L"VisitIdentifierList");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLiteral(CppParser::LiteralContext* context)
{
    Trace(L"VisitLiteral");
    if (context->FloatingPointLiteral() != nullptr)
    {
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<LiteralExpression>(LiteralType::Floating, context->getText()));
    }
    else if (context->CharacterLiteral() != nullptr)
    {
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<LiteralExpression>(LiteralType::Character, context->getText()));
    }
    else if (context->StringLiteral() != nullptr)
    {
        return std::static_pointer_cast<SyntaxNode>(
            std::make_shared<LiteralExpression>(LiteralType::String, context->getText()));
    }
    else
        return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitIntegerLiteral(CppParser::IntegerLiteralContext* context)
{
    Trace(L"VisitIntegerLiteral");
    return std::static_pointer_cast<SyntaxNode>(
        std::make_shared<LiteralExpression>(LiteralType::Integer, context->getText()));
}

antlrcpp::Any ASTVisitor::visitBooleanLiteral(CppParser::BooleanLiteralContext* context)
{
    Trace(L"VisitBooleanLiteral");
    return std::static_pointer_cast<SyntaxNode>(
        std::make_shared<LiteralExpression>(LiteralType::Boolean, context->getText()));
}

antlrcpp::Any ASTVisitor::visitPointerLiteral(CppParser::PointerLiteralContext* context)
{
    Trace(L"VisitPointerLiteral");
    return std::static_pointer_cast<SyntaxNode>(
        std::make_shared<LiteralExpression>(LiteralType::Pointer, context->getText()));
}

antlrcpp::Any ASTVisitor::visitUserDefinedLiteral(CppParser::UserDefinedLiteralContext* context)
{
    Trace(L"VisitUserDefinedLiteral");
    return std::static_pointer_cast<SyntaxNode>(
        std::make_shared<LiteralExpression>(LiteralType::UserDefined, context->getText()));
}
