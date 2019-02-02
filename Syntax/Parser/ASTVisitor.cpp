module SoupSyntax;
using namespace Soup::Syntax;

antlrcpp::Any ASTVisitor::visitTypedefName(CppParser::TypedefNameContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNamespaceName(CppParser::NamespaceNameContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNamespaceAlias(CppParser::NamespaceAliasContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassName(CppParser::ClassNameContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumName(CppParser::EnumNameContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateName(CppParser::TemplateNameContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTranslationUnit(CppParser::TranslationUnitContext* context)
{
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
    if (context->literal () != nullptr)
    {
        return visit(context->literal());
    }
    else
    {
        throw std::logic_error("NotImplemented");
    }
}

antlrcpp::Any ASTVisitor::visitUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext* context)
{
    auto identifier = context->Identifier();
    return std::dynamic_pointer_cast<Node>(
        std::make_shared<Identifier>(identifier->getText()));
}

antlrcpp::Any ASTVisitor::visitQualifiedIdentifier(CppParser::QualifiedIdentifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNestedNameSpecifier(CppParser::NestedNameSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLambdaExpression(CppParser::LambdaExpressionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLambdaIntroducer(CppParser::LambdaIntroducerContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLambdaDeclarator(CppParser::LambdaDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLambdaCapture(CppParser::LambdaCaptureContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCaptureDefault(CppParser::CaptureDefaultContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCaptureList(CppParser::CaptureListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCapture(CppParser::CaptureContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitSimpleCapture(CppParser::SimpleCaptureContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitInitializerCapture(CppParser::InitializerCaptureContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFoldExpression(CppParser::FoldExpressionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFoldOperator(CppParser::FoldOperatorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitPostfixExpression(CppParser::PostfixExpressionContext* context)
{
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
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitPseudoDestructorName(CppParser::PseudoDestructorNameContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUnaryExpression(CppParser::UnaryExpressionContext* context)
{
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
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNewExpression(CppParser::NewExpressionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNewPlacement(CppParser::NewPlacementContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNewTypeIdentifier(CppParser::NewTypeIdentifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNewDeclarator(CppParser::NewDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNewInitializer(CppParser::NewInitializerContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeleteExpression(CppParser::DeleteExpressionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoExceptionExpression(CppParser::NoExceptionExpressionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCastExpression(CppParser::CastExpressionContext* context)
{
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
    // Tracer::Log::Error(L"visitThrowExpression: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAssignmentExpression(CppParser::AssignmentExpressionContext* context)
{
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
    // Tracer::Log::Error(L"visitAssignmentOperator: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExpression(CppParser::ExpressionContext* context)
{
    // Tracer::Log::Error(L"visitExpression: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConstantExpression(CppParser::ConstantExpressionContext* context)
{
    // Tracer::Log::Error(L"visitConstantExpression: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitInitializerStatement(CppParser::InitializerStatementContext* context)
{
    // Tracer::Log::Error(L"visitInitializerStatement: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCondition(CppParser::ConditionContext* context)
{
    // Tracer::Log::Error(L"visitCondition: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLabeledStatement(CppParser::LabeledStatementContext* context)
{
    // Tracer::Log::Error(L"visitLabeledStatement: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExpressionStatement(CppParser::ExpressionStatementContext* context)
{
    // Tracer::Log::Error(L"visitExpressionStatement: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitCompoundStatement(CppParser::CompoundStatementContext* context)
{
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
    // Tracer::Log::Error(L"visitSelectionStatement: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitIterationStatement(CppParser::IterationStatementContext* context)
{
    // Tracer::Log::Error(L"visitSelectionStatement: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitForInitializerStatement(CppParser::ForInitializerStatementContext* context)
{
    // Tracer::Log::Error(L"visitForInitializerStatement: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitForRangeDeclaration(CppParser::ForRangeDeclarationContext* context)
{
    // Tracer::Log::Error(L"visitForRangeDeclaration: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitForRangeInitializer(CppParser::ForRangeInitializerContext* context)
{
    // Tracer::Log::Error(L"visitForRangeInitializer: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitJumpStatement(CppParser::JumpStatementContext* context)
{
    // Tracer::Log::Error(L"visitJumpStatement: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeclarationStatement(CppParser::DeclarationStatementContext* context)
{
    // Tracer::Log::Error(L"visitDeclarationStatement: Not Impletement!");
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeclarationSequence(CppParser::DeclarationSequenceContext* context)
{
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
    auto declarationNode = visit(declaration).as<std::shared_ptr<Node>>();
    sequence->GetDeclarations().push_back(
        std::dynamic_pointer_cast<Declaration>(declarationNode));

    return sequence;
}

antlrcpp::Any ASTVisitor::visitNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAliasDeclaration(CppParser::AliasDeclarationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitSimpleDeclaration(CppParser::SimpleDeclarationContext* context)
{
    auto declarationSpecifierSequence = visit(context->declarationSpecifierSequence())
        .as<std::shared_ptr<DeclarationSpecifierSequence>>();
    auto initializerDeclaratorList = visit(context->initializerDeclaratorList())
        .as<std::shared_ptr<InitializerDeclaratorList>>();

    // TODO
    return std::dynamic_pointer_cast<Node>(
        std::make_shared<SimpleDefinition>(
            std::move(declarationSpecifierSequence),
            std::move(initializerDeclaratorList)));
}

antlrcpp::Any ASTVisitor::visitStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEmptyDeclaration(CppParser::EmptyDeclarationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeDeclaration(CppParser::AttributeDeclarationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeclarationSpecifier(CppParser::DeclarationSpecifierContext* context)
{
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
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFunctionSpecifier(CppParser::FunctionSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext* context)
{
    if (context->Char() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Char));
    else if (context->Char16() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Char16));
    else if (context->Char32() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Char32));
    else if (context->WChar() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::WChar));
    else if (context->Bool() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Bool));
    else if (context->Short() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Short));
    else if (context->Int() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Int));
    else if (context->Long() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Long));
    else if (context->Signed() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Signed));
    else if (context->Unsigned() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Unsigned));
    else if (context->Float() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Float));
    else if (context->Double() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Double));
    else if (context->Void() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Void));
    else if (context->Auto() != nullptr)
        return std::dynamic_pointer_cast<Node>(
            std::make_shared<PrimitiveDataTypeNode>(PrimitiveDataType::Auto));

    throw std::logic_error("Unexpected simple type.");
}

antlrcpp::Any ASTVisitor::visitTypeName(CppParser::TypeNameContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumSpecifier(CppParser::EnumSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumHead(CppParser::EnumHeadContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumHeadName(CppParser::EnumHeadNameContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitOpaqueEnumDeclaration(CppParser::OpaqueEnumDeclarationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumKey(CppParser::EnumKeyContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumBase(CppParser::EnumBaseContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumeratorList(CppParser::EnumeratorListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumeratorDefinition(CppParser::EnumeratorDefinitionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnumerator(CppParser::EnumeratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNamespaceDefinition(CppParser::NamespaceDefinitionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNamespaceBody(CppParser::NamespaceBodyContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUsingDeclaration(CppParser::UsingDeclarationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUsingDeclaratorList(CppParser::UsingDeclaratorListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUsingDeclarator(CppParser::UsingDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUsingDirective(CppParser::UsingDirectiveContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAsmDefinition(CppParser::AsmDefinitionContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLinkageSpecification(CppParser::LinkageSpecificationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeSpecifier(CppParser::AttributeSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAlignmentSpecifier(CppParser::AlignmentSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeList(CppParser::AttributeListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttribute(CppParser::AttributeContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeToken(CppParser::AttributeTokenContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeScopedToken(CppParser::AttributeScopedTokenContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeNamespace(CppParser::AttributeNamespaceContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAttributeArgumentClause(CppParser::AttributeArgumentClauseContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBalancedTokenSequence(CppParser::BalancedTokenSequenceContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBalancedToken(CppParser::BalancedTokenContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext* context)
{
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
    // Check for optional initializer
    std::shared_ptr<Node> initializer = nullptr;
    if (context->initializer() != nullptr)
    {
        initializer = visit(context->initializer())
            .as<std::shared_ptr<Node>>();
    }

    auto declarator = visit(context->declarator())
        .as<std::shared_ptr<Node>>();

    return std::make_shared<InitializerDeclarator>(
        std::move(initializer),
        std::move(declarator));
}

antlrcpp::Any ASTVisitor::visitPointerDeclarator(CppParser::PointerDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoPointerDeclarator(CppParser::NoPointerDeclaratorContext* context)
{
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
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTrailingReturnType(CppParser::TrailingReturnTypeContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitPointerOperator(CppParser::PointerOperatorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConstVolatileQualifier(CppParser::ConstVolatileQualifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitReferenceQualifier(CppParser::ReferenceQualifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTypeIdentifier(CppParser::TypeIdentifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAbstractDeclarator(CppParser::AbstractDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext* context)
{
    // TODO Items
    return std::make_shared<ParameterList>();
}

antlrcpp::Any ASTVisitor::visitParameterDeclarationList(CppParser::ParameterDeclarationListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitParameterDeclaration(CppParser::ParameterDeclarationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFunctionDefinition(CppParser::FunctionDefinitionContext* context)
{
    // Check for optional return type
    std::shared_ptr<DeclarationSpecifierSequence> returnType = nullptr;
    if (context->declarationSpecifierSequence() != nullptr)
    {
        returnType = visit(context->declarationSpecifierSequence()).as<std::shared_ptr<DeclarationSpecifierSequence>>();
    }

    // Analyze the declarator
    auto declaratorContext = context->functionDeclarator();
    auto identifier = visit(declaratorContext->identifierExpression())
        .as<std::shared_ptr<Identifier>>();
    auto parameterList = visit(declaratorContext->functionParameters())
        .as<std::shared_ptr<ParameterList>>();
    // TODO Qualifiers
    // TODO Trailiing return type

    auto body = visit(context->functionBody())
        .as<std::shared_ptr<Node>>();

    return std::make_shared<FunctionDefinition>(
        std::move(returnType),
        std::move(identifier),
        std::move(parameterList),
        std::move(body));
}

antlrcpp::Any ASTVisitor::visitRegularFunctionBody(CppParser::RegularFunctionBodyContext* context)
{
    return std::make_shared<RegularFunctionBody>(
        visit(context->compoundStatement()));
}

antlrcpp::Any ASTVisitor::visitExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext* context)
{
    return std::make_shared<DefaultFunctionBody>();
}

antlrcpp::Any ASTVisitor::visitDeletedFunction(CppParser::DeletedFunctionContext* context)
{
    return std::make_shared<DeleteFunctionBody>();
}

antlrcpp::Any ASTVisitor::visitBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext* context)
{
    if (context->Equal() != nullptr)
    {
        return visit(context->initializerClause());
    }
    else
    {
        return visit(context->bracedInitializerList());
    }
}

antlrcpp::Any ASTVisitor::visitInitializerList(CppParser::InitializerListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBracedInitializerList(CppParser::BracedInitializerListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassSpecifier(CppParser::ClassSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassHead(CppParser::ClassHeadContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassHeadName(CppParser::ClassHeadNameContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassKey(CppParser::ClassKeyContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberSpecification(CppParser::MemberSpecificationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberDeclaration(CppParser::MemberDeclarationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberDeclaratorList(CppParser::MemberDeclaratorListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberDeclarator(CppParser::MemberDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitVirtualSpecifier(CppParser::VirtualSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitPureSpecifier(CppParser::PureSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBaseClause(CppParser::BaseClauseContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBaseSpecifierList(CppParser::BaseSpecifierListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitBaseSpecifier(CppParser::BaseSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitClassOrDecltype(CppParser::ClassOrDecltypeContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAccessSpecifier(CppParser::AccessSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConversionDeclarator(CppParser::ConversionDeclaratorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitConstructorInitializer(CppParser::ConstructorInitializerContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberInitializerList(CppParser::MemberInitializerListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberInitializer(CppParser::MemberInitializerContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitAnyOperator(CppParser::AnyOperatorContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateDeclaration(CppParser::TemplateDeclarationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateParameterList(CppParser::TemplateParameterListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateParameter(CppParser::TemplateParameterContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTypeParameter(CppParser::TypeParameterContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTypeParameterKey(CppParser::TypeParameterKeyContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateIdentifier(CppParser::TemplateIdentifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateArgumentList(CppParser::TemplateArgumentListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTemplateArgument(CppParser::TemplateArgumentContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTypenameSpecifier(CppParser::TypenameSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExplicitInstantiation(CppParser::ExplicitInstantiationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExplicitSpecialization(CppParser::ExplicitSpecializationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitDeductionGuide(CppParser::DeductionGuideContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitTryBlock(CppParser::TryBlockContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitFunctionTryBlock(CppParser::FunctionTryBlockContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitHandlerSequence(CppParser::HandlerSequenceContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitHandler(CppParser::HandlerContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitExceptionDeclaration(CppParser::ExceptionDeclarationContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitIdentifierList(CppParser::IdentifierListContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitLiteral(CppParser::LiteralContext* context)
{
    if (context->FloatingPointLiteral() != nullptr)
        throw std::logic_error("NotImplemented");
    else if (context->CharacterLiteral() != nullptr)
        throw std::logic_error("NotImplemented");
    else if (context->StringLiteral() != nullptr)
        throw std::logic_error("NotImplemented");
    else
        return visitChildren(context);
}

antlrcpp::Any ASTVisitor::visitIntegerLiteral(CppParser::IntegerLiteralContext* context)
{
    // Parse the integer value
    int value = std::stoi(context->getText());

    return std::dynamic_pointer_cast<Node>(
        std::make_shared<IntegerLiteral>(value));
}

antlrcpp::Any ASTVisitor::visitBooleanLiteral(CppParser::BooleanLiteralContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitPointerLiteral(CppParser::PointerLiteralContext* context)
{
    throw std::logic_error("NotImplemented");
}

antlrcpp::Any ASTVisitor::visitUserDefinedLiteral(CppParser::UserDefinedLiteralContext* context)
{
    throw std::logic_error("NotImplemented");
}
