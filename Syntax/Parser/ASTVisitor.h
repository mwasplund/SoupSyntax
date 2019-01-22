#pragma once
#include "Grammar\CppParserBaseVisitor.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Abstract syntax tree visitor
    /// </summary>
    export class ASTVisitor : public CppParserBaseVisitor
    {
    public:
        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::typedefName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTypedefName(CppParser::TypedefNameContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::namespaceName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNamespaceName(CppParser::NamespaceNameContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::namespaceAlias()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNamespaceAlias(CppParser::NamespaceAliasContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::className()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitClassName(CppParser::ClassNameContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::enumName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEnumName(CppParser::EnumNameContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::templateName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTemplateName(CppParser::TemplateNameContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::translationUnit()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTranslationUnit(CppParser::TranslationUnitContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::primaryExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitPrimaryExpression(CppParser::PrimaryExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::unqualifiedIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::qualifiedIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitQualifiedIdentifier(CppParser::QualifiedIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::nestedNameSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNestedNameSpecifier(CppParser::NestedNameSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::lambdaExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitLambdaExpression(CppParser::LambdaExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::lambdaIntroducer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitLambdaIntroducer(CppParser::LambdaIntroducerContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::lambdaDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitLambdaDeclarator(CppParser::LambdaDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::lambdaCapture()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitLambdaCapture(CppParser::LambdaCaptureContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::captureDefault()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitCaptureDefault(CppParser::CaptureDefaultContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::captureList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitCaptureList(CppParser::CaptureListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::capture()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitCapture(CppParser::CaptureContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::simpleCapture()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitSimpleCapture(CppParser::SimpleCaptureContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::initializerCapture()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitInitializerCapture(CppParser::InitializerCaptureContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::foldExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitFoldExpression(CppParser::FoldExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::foldOperator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitFoldOperator(CppParser::FoldOperatorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::postfixExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitPostfixExpression(CppParser::PostfixExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::expressionList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitExpressionList(CppParser::ExpressionListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::pseudoDestructorName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitPseudoDestructorName(CppParser::PseudoDestructorNameContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::unaryExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitUnaryExpression(CppParser::UnaryExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::unaryOperator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitUnaryOperator(CppParser::UnaryOperatorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::newExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNewExpression(CppParser::NewExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::newPlacement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNewPlacement(CppParser::NewPlacementContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::newTypeIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNewTypeIdentifier(CppParser::NewTypeIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::newDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNewDeclarator(CppParser::NewDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::noPointerNewDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::newInitializer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNewInitializer(CppParser::NewInitializerContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::deleteExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitDeleteExpression(CppParser::DeleteExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::noExceptionExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNoExceptionExpression(CppParser::NoExceptionExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::castExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitCastExpression(CppParser::CastExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::pointerManipulationExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitPointerManipulationExpression(CppParser::PointerManipulationExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::multiplicativeExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitMultiplicativeExpression(CppParser::MultiplicativeExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::additiveExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAdditiveExpression(CppParser::AdditiveExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::shiftExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitShiftExpression(CppParser::ShiftExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::relationalExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitRelationalExpression(CppParser::RelationalExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::equalityExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEqualityExpression(CppParser::EqualityExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::andExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAndExpression(CppParser::AndExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::exclusiveOrExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitExclusiveOrExpression(CppParser::ExclusiveOrExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::inclusiveOrExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitInclusiveOrExpression(CppParser::InclusiveOrExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::logicalAndExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitLogicalAndExpression(CppParser::LogicalAndExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::logicalOrExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitLogicalOrExpression(CppParser::LogicalOrExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::conditionalExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitConditionalExpression(CppParser::ConditionalExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::throwExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitThrowExpression(CppParser::ThrowExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::assignmentExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAssignmentExpression(CppParser::AssignmentExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::assignmentOperator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAssignmentOperator(CppParser::AssignmentOperatorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::expression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitExpression(CppParser::ExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::constantExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitConstantExpression(CppParser::ConstantExpressionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::initializerStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitInitializerStatement(CppParser::InitializerStatementContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::condition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitCondition(CppParser::ConditionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::labeledStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitLabeledStatement(CppParser::LabeledStatementContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::expressionStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitExpressionStatement(CppParser::ExpressionStatementContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::compoundStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitCompoundStatement(CppParser::CompoundStatementContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::statementSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitStatementSequence(CppParser::StatementSequenceContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::selectionStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitSelectionStatement(CppParser::SelectionStatementContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::iterationStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitIterationStatement(CppParser::IterationStatementContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::forInitializerStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitForInitializerStatement(CppParser::ForInitializerStatementContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::forRangeDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitForRangeDeclaration(CppParser::ForRangeDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::forRangeInitializer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitForRangeInitializer(CppParser::ForRangeInitializerContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::jumpStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitJumpStatement(CppParser::JumpStatementContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::declarationStatement()"/>.
        /// </summary>
        virtual antlrcpp::Any visitDeclarationStatement(CppParser::DeclarationStatementContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::declarationSequence()"/>.
        /// </summary>
        virtual antlrcpp::Any visitDeclarationSequence(CppParser::DeclarationSequenceContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::noDeclarationSpecifierFunctionDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::aliasDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAliasDeclaration(CppParser::AliasDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::simpleDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitSimpleDeclaration(CppParser::SimpleDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::staticAssertDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::emptyDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEmptyDeclaration(CppParser::EmptyDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::attributeDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAttributeDeclaration(CppParser::AttributeDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::declarationSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitDeclarationSpecifier(CppParser::DeclarationSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::declarationSpecifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitDeclarationSpecifierSequence(CppParser::DeclarationSpecifierSequenceContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::storageClassSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitStorageClassSpecifier(CppParser::StorageClassSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::functionSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitFunctionSpecifier(CppParser::FunctionSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::typeSpecifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::definingTypeSpecifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::simpleTypeSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::typeName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTypeName(CppParser::TypeNameContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::declarationTypeSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::elaboratedTypeSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::enumSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEnumSpecifier(CppParser::EnumSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::enumHead()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEnumHead(CppParser::EnumHeadContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::enumHeadName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEnumHeadName(CppParser::EnumHeadNameContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::opaqueEnumDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitOpaqueEnumDeclaration(CppParser::OpaqueEnumDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::enumKey()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEnumKey(CppParser::EnumKeyContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::enumBase()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEnumBase(CppParser::EnumBaseContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::enumeratorList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEnumeratorList(CppParser::EnumeratorListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::enumeratorDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEnumeratorDefinition(CppParser::EnumeratorDefinitionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::enumerator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEnumerator(CppParser::EnumeratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::namespaceDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNamespaceDefinition(CppParser::NamespaceDefinitionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::namedNamespaceDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::unnamedNamespaceDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::nestedNamespaceDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::enclosingNamespaceSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::namespaceBody()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNamespaceBody(CppParser::NamespaceBodyContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::namespaceAliasDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::qualifiedNamespaceSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::usingDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitUsingDeclaration(CppParser::UsingDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::usingDeclaratorList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitUsingDeclaratorList(CppParser::UsingDeclaratorListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::usingDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitUsingDeclarator(CppParser::UsingDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::usingDirective()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitUsingDirective(CppParser::UsingDirectiveContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::asmDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAsmDefinition(CppParser::AsmDefinitionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::linkageSpecification()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitLinkageSpecification(CppParser::LinkageSpecificationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::attributeSpecifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::attributeSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAttributeSpecifier(CppParser::AttributeSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::alignmentSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAlignmentSpecifier(CppParser::AlignmentSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::attributeUsingPrefix()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::attributeList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAttributeList(CppParser::AttributeListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::attribute()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAttribute(CppParser::AttributeContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::attributeToken()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAttributeToken(CppParser::AttributeTokenContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::attributeScopedToken()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAttributeScopedToken(CppParser::AttributeScopedTokenContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::attributeNamespace()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAttributeNamespace(CppParser::AttributeNamespaceContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::attributeArgumentClause()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAttributeArgumentClause(CppParser::AttributeArgumentClauseContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::balancedTokenSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitBalancedTokenSequence(CppParser::BalancedTokenSequenceContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::balancedToken()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitBalancedToken(CppParser::BalancedTokenContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::initializerDeclaratorList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::initializerDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitInitializerDeclarator(CppParser::InitializerDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::pointerDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitPointerDeclarator(CppParser::PointerDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::noPointerDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNoPointerDeclarator(CppParser::NoPointerDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::parametersAndQualifiers()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitParametersAndQualifiers(CppParser::ParametersAndQualifiersContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::trailingReturnType()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTrailingReturnType(CppParser::TrailingReturnTypeContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::pointerOperator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitPointerOperator(CppParser::PointerOperatorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::constVolatileQualifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::constVolatileQualifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitConstVolatileQualifier(CppParser::ConstVolatileQualifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::referenceQualifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitReferenceQualifier(CppParser::ReferenceQualifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::typeIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTypeIdentifier(CppParser::TypeIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::definingTypeIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::abstractDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAbstractDeclarator(CppParser::AbstractDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::pointerAbstractDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::noPointerAbstractDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::abstractPackDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::noPointerAbstractPackDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::parameterDeclarationClause()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::parameterDeclarationList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitParameterDeclarationList(CppParser::ParameterDeclarationListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::parameterDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitParameterDeclaration(CppParser::ParameterDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::functionDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitFunctionDefinition(CppParser::FunctionDefinitionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::regularFunctionBody()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitRegularFunctionBody(CppParser::RegularFunctionBodyContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::explicitlyDefaultedFunction()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::deletedFunction()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitDeletedFunction(CppParser::DeletedFunctionContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::braceOrEqualInitializer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::initializerList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitInitializerList(CppParser::InitializerListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::bracedInitializerList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitBracedInitializerList(CppParser::BracedInitializerListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::expressionOrBracedInitializerList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::classSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitClassSpecifier(CppParser::ClassSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::classHead()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitClassHead(CppParser::ClassHeadContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::classHeadName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitClassHeadName(CppParser::ClassHeadNameContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::classVirtualSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::classKey()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitClassKey(CppParser::ClassKeyContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::memberSpecification()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitMemberSpecification(CppParser::MemberSpecificationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::memberDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitMemberDeclaration(CppParser::MemberDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::memberDeclaratorList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitMemberDeclaratorList(CppParser::MemberDeclaratorListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::memberDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitMemberDeclarator(CppParser::MemberDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::virtualSpecifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::virtualSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitVirtualSpecifier(CppParser::VirtualSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::pureSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitPureSpecifier(CppParser::PureSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::baseClause()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitBaseClause(CppParser::BaseClauseContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::baseSpecifierList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitBaseSpecifierList(CppParser::BaseSpecifierListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::baseSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitBaseSpecifier(CppParser::BaseSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::classOrDecltype()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitClassOrDecltype(CppParser::ClassOrDecltypeContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::accessSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAccessSpecifier(CppParser::AccessSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::conversionFunctionIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::conversionTypeIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::conversionDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitConversionDeclarator(CppParser::ConversionDeclaratorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::constructorInitializer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitConstructorInitializer(CppParser::ConstructorInitializerContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::memberInitializerList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitMemberInitializerList(CppParser::MemberInitializerListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::memberInitializer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitMemberInitializer(CppParser::MemberInitializerContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::memberInitializerIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::operatorFunctionIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::anyOperator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitAnyOperator(CppParser::AnyOperatorContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::literalOperatorIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::templateDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTemplateDeclaration(CppParser::TemplateDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::templateParameterList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTemplateParameterList(CppParser::TemplateParameterListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::templateParameter()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTemplateParameter(CppParser::TemplateParameterContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::typeParameter()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTypeParameter(CppParser::TypeParameterContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::typeParameterKey()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTypeParameterKey(CppParser::TypeParameterKeyContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::simpleTemplateIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::templateIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTemplateIdentifier(CppParser::TemplateIdentifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::templateArgumentList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTemplateArgumentList(CppParser::TemplateArgumentListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::templateArgument()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTemplateArgument(CppParser::TemplateArgumentContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::typenameSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTypenameSpecifier(CppParser::TypenameSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::explicitInstantiation()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitExplicitInstantiation(CppParser::ExplicitInstantiationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::explicitSpecialization()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitExplicitSpecialization(CppParser::ExplicitSpecializationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::deductionGuide()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitDeductionGuide(CppParser::DeductionGuideContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::tryBlock()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitTryBlock(CppParser::TryBlockContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::functionTryBlock()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitFunctionTryBlock(CppParser::FunctionTryBlockContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::handlerSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitHandlerSequence(CppParser::HandlerSequenceContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::handler()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitHandler(CppParser::HandlerContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::exceptionDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitExceptionDeclaration(CppParser::ExceptionDeclarationContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::noExceptionSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::identifierList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitIdentifierList(CppParser::IdentifierListContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::literal()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitLiteral(CppParser::LiteralContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::integerLiteral()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitIntegerLiteral(CppParser::IntegerLiteralContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::booleanLiteral()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitBooleanLiteral(CppParser::BooleanLiteralContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::pointerLiteral()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitPointerLiteral(CppParser::PointerLiteralContext* context) override final;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser::userDefinedLiteral()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        virtual antlrcpp::Any visitUserDefinedLiteral(CppParser::UserDefinedLiteralContext* context) override final;
    };
}
