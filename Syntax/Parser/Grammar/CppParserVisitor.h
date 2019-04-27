
// Generated from Grammar\CppParser.g4 by ANTLR 4.7.1

#pragma once


//#include "antlr4-runtime.h"
#include "CppParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CppParser.
 */
export class  CppParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CppParser.
   */
    virtual antlrcpp::Any visitDoubleGreaterThan(CppParser::DoubleGreaterThanContext *context) = 0;

    virtual antlrcpp::Any visitNamespaceName(CppParser::NamespaceNameContext *context) = 0;

    virtual antlrcpp::Any visitNamespaceAlias(CppParser::NamespaceAliasContext *context) = 0;

    virtual antlrcpp::Any visitClassName(CppParser::ClassNameContext *context) = 0;

    virtual antlrcpp::Any visitTemplateName(CppParser::TemplateNameContext *context) = 0;

    virtual antlrcpp::Any visitTranslationUnit(CppParser::TranslationUnitContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(CppParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierExpression(CppParser::IdentifierExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnqualifiedIdentifier(CppParser::UnqualifiedIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedIdentifier(CppParser::QualifiedIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitNestedNameSpecifier(CppParser::NestedNameSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitNestedNameSpecifierSequence(CppParser::NestedNameSpecifierSequenceContext *context) = 0;

    virtual antlrcpp::Any visitLambdaExpression(CppParser::LambdaExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLambdaIntroducer(CppParser::LambdaIntroducerContext *context) = 0;

    virtual antlrcpp::Any visitLambdaDeclarator(CppParser::LambdaDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitLambdaCapture(CppParser::LambdaCaptureContext *context) = 0;

    virtual antlrcpp::Any visitCaptureDefault(CppParser::CaptureDefaultContext *context) = 0;

    virtual antlrcpp::Any visitCaptureList(CppParser::CaptureListContext *context) = 0;

    virtual antlrcpp::Any visitCapture(CppParser::CaptureContext *context) = 0;

    virtual antlrcpp::Any visitSimpleCapture(CppParser::SimpleCaptureContext *context) = 0;

    virtual antlrcpp::Any visitInitializerCapture(CppParser::InitializerCaptureContext *context) = 0;

    virtual antlrcpp::Any visitFoldExpression(CppParser::FoldExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFoldOperator(CppParser::FoldOperatorContext *context) = 0;

    virtual antlrcpp::Any visitExplicitTypeCoversionOperatorExpression(CppParser::ExplicitTypeCoversionOperatorExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostfixOperator(CppParser::PostfixOperatorContext *context) = 0;

    virtual antlrcpp::Any visitNamedCastExpression(CppParser::NamedCastExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMemberAccessOperator(CppParser::MemberAccessOperatorContext *context) = 0;

    virtual antlrcpp::Any visitNamedCastType(CppParser::NamedCastTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeIdentificationExpression(CppParser::TypeIdentificationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostfixExpression(CppParser::PostfixExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExpressionList(CppParser::ExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitPseudoDestructorName(CppParser::PseudoDestructorNameContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpression(CppParser::UnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryOperator(CppParser::UnaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitNewExpression(CppParser::NewExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNewPlacement(CppParser::NewPlacementContext *context) = 0;

    virtual antlrcpp::Any visitNewTypeIdentifier(CppParser::NewTypeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitNewDeclarator(CppParser::NewDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoPointerNewDeclarator(CppParser::NoPointerNewDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNewInitializer(CppParser::NewInitializerContext *context) = 0;

    virtual antlrcpp::Any visitDeleteExpression(CppParser::DeleteExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNoExceptionExpression(CppParser::NoExceptionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCastExpression(CppParser::CastExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPointerManipulationExpression(CppParser::PointerManipulationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeExpression(CppParser::MultiplicativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpression(CppParser::AdditiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitShiftExpression(CppParser::ShiftExpressionContext *context) = 0;

    virtual antlrcpp::Any visitRelationalExpression(CppParser::RelationalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityExpression(CppParser::EqualityExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndExpression(CppParser::AndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitExclusiveOrExpression(CppParser::ExclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInclusiveOrExpression(CppParser::InclusiveOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalAndExpression(CppParser::LogicalAndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOrExpression(CppParser::LogicalOrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionalExpression(CppParser::ConditionalExpressionContext *context) = 0;

    virtual antlrcpp::Any visitThrowExpression(CppParser::ThrowExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentExpression(CppParser::AssignmentExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentOperator(CppParser::AssignmentOperatorContext *context) = 0;

    virtual antlrcpp::Any visitExpression(CppParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConstantExpression(CppParser::ConstantExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStatement(CppParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitInitializerStatement(CppParser::InitializerStatementContext *context) = 0;

    virtual antlrcpp::Any visitCondition(CppParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitLabeledStatement(CppParser::LabeledStatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStatement(CppParser::ExpressionStatementContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(CppParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatementSequence(CppParser::StatementSequenceContext *context) = 0;

    virtual antlrcpp::Any visitSelectionStatement(CppParser::SelectionStatementContext *context) = 0;

    virtual antlrcpp::Any visitIterationStatement(CppParser::IterationStatementContext *context) = 0;

    virtual antlrcpp::Any visitForInitializerStatement(CppParser::ForInitializerStatementContext *context) = 0;

    virtual antlrcpp::Any visitForRangeDeclaration(CppParser::ForRangeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitForRangeInitializer(CppParser::ForRangeInitializerContext *context) = 0;

    virtual antlrcpp::Any visitJumpStatement(CppParser::JumpStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationStatement(CppParser::DeclarationStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationSequence(CppParser::DeclarationSequenceContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(CppParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitBlockDeclaration(CppParser::BlockDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitNoDeclarationSpecifierFunctionDeclaration(CppParser::NoDeclarationSpecifierFunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAliasDeclaration(CppParser::AliasDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSimpleDeclaration(CppParser::SimpleDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitStaticAssertDeclaration(CppParser::StaticAssertDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitEmptyDeclaration(CppParser::EmptyDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAttributeDeclaration(CppParser::AttributeDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationModifier(CppParser::DeclarationModifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationSpecifierSequence(CppParser::DeclarationSpecifierSequenceContext *context) = 0;

    virtual antlrcpp::Any visitLeadingDeclarationModifierSequence(CppParser::LeadingDeclarationModifierSequenceContext *context) = 0;

    virtual antlrcpp::Any visitTrailingDeclarationModifierSequence(CppParser::TrailingDeclarationModifierSequenceContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationModifierSequence(CppParser::DeclarationModifierSequenceContext *context) = 0;

    virtual antlrcpp::Any visitStorageClassSpecifier(CppParser::StorageClassSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionSpecifier(CppParser::FunctionSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifier(CppParser::TypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpecifierSequence(CppParser::TypeSpecifierSequenceContext *context) = 0;

    virtual antlrcpp::Any visitDefiningTypeSpecifier(CppParser::DefiningTypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitDefiningTypeSpecifierSequence(CppParser::DefiningTypeSpecifierSequenceContext *context) = 0;

    virtual antlrcpp::Any visitSimpleTypeSpecifier(CppParser::SimpleTypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(CppParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationTypeSpecifier(CppParser::DeclarationTypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitElaboratedTypeSpecifier(CppParser::ElaboratedTypeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumSpecifier(CppParser::EnumSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumHead(CppParser::EnumHeadContext *context) = 0;

    virtual antlrcpp::Any visitEnumHeadName(CppParser::EnumHeadNameContext *context) = 0;

    virtual antlrcpp::Any visitOpaqueEnumSpecifier(CppParser::OpaqueEnumSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitEnumKey(CppParser::EnumKeyContext *context) = 0;

    virtual antlrcpp::Any visitEnumBase(CppParser::EnumBaseContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratorList(CppParser::EnumeratorListContext *context) = 0;

    virtual antlrcpp::Any visitEnumeratorDefinition(CppParser::EnumeratorDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitEnumerator(CppParser::EnumeratorContext *context) = 0;

    virtual antlrcpp::Any visitNamespaceDefinition(CppParser::NamespaceDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNamedNamespaceDefinition(CppParser::NamedNamespaceDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitUnnamedNamespaceDefinition(CppParser::UnnamedNamespaceDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitNestedNamespaceDefinition(CppParser::NestedNamespaceDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitEnclosingNamespaceSpecifier(CppParser::EnclosingNamespaceSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitNamespaceBody(CppParser::NamespaceBodyContext *context) = 0;

    virtual antlrcpp::Any visitNamespaceAliasDefinition(CppParser::NamespaceAliasDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedNamespaceSpecifier(CppParser::QualifiedNamespaceSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitUsingDeclaration(CppParser::UsingDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitUsingDeclaratorList(CppParser::UsingDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitUsingDeclarator(CppParser::UsingDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitUsingDirective(CppParser::UsingDirectiveContext *context) = 0;

    virtual antlrcpp::Any visitAsmDefinition(CppParser::AsmDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitLinkageSpecification(CppParser::LinkageSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitAttributeSpecifierSequence(CppParser::AttributeSpecifierSequenceContext *context) = 0;

    virtual antlrcpp::Any visitAttributeSpecifier(CppParser::AttributeSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitAlignmentSpecifier(CppParser::AlignmentSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitAttributeUsingPrefix(CppParser::AttributeUsingPrefixContext *context) = 0;

    virtual antlrcpp::Any visitAttributeList(CppParser::AttributeListContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(CppParser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitAttributeToken(CppParser::AttributeTokenContext *context) = 0;

    virtual antlrcpp::Any visitAttributeScopedToken(CppParser::AttributeScopedTokenContext *context) = 0;

    virtual antlrcpp::Any visitAttributeNamespace(CppParser::AttributeNamespaceContext *context) = 0;

    virtual antlrcpp::Any visitAttributeArgumentClause(CppParser::AttributeArgumentClauseContext *context) = 0;

    virtual antlrcpp::Any visitBalancedTokenSequence(CppParser::BalancedTokenSequenceContext *context) = 0;

    virtual antlrcpp::Any visitBalancedToken(CppParser::BalancedTokenContext *context) = 0;

    virtual antlrcpp::Any visitNonBalancedToken(CppParser::NonBalancedTokenContext *context) = 0;

    virtual antlrcpp::Any visitInitializerDeclaratorList(CppParser::InitializerDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitInitializerDeclarator(CppParser::InitializerDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitDeclarator(CppParser::DeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPointerDeclarator(CppParser::PointerDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoPointerDeclarator(CppParser::NoPointerDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitParametersAndQualifiers(CppParser::ParametersAndQualifiersContext *context) = 0;

    virtual antlrcpp::Any visitFunctionParameters(CppParser::FunctionParametersContext *context) = 0;

    virtual antlrcpp::Any visitFunctionQualifiers(CppParser::FunctionQualifiersContext *context) = 0;

    virtual antlrcpp::Any visitTrailingReturnType(CppParser::TrailingReturnTypeContext *context) = 0;

    virtual antlrcpp::Any visitPointerOperator(CppParser::PointerOperatorContext *context) = 0;

    virtual antlrcpp::Any visitConstVolatileQualifierSequence(CppParser::ConstVolatileQualifierSequenceContext *context) = 0;

    virtual antlrcpp::Any visitConstVolatileQualifier(CppParser::ConstVolatileQualifierContext *context) = 0;

    virtual antlrcpp::Any visitReferenceQualifier(CppParser::ReferenceQualifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeIdentifier(CppParser::TypeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitDefiningTypeIdentifier(CppParser::DefiningTypeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitAbstractDeclarator(CppParser::AbstractDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitPointerAbstractDeclarator(CppParser::PointerAbstractDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoPointerAbstractDeclarator(CppParser::NoPointerAbstractDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitAbstractPackDeclarator(CppParser::AbstractPackDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitNoPointerAbstractPackDeclarator(CppParser::NoPointerAbstractPackDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclarationClause(CppParser::ParameterDeclarationClauseContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclarationList(CppParser::ParameterDeclarationListContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclaration(CppParser::ParameterDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(CppParser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclarator(CppParser::FunctionDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitFunctionBody(CppParser::FunctionBodyContext *context) = 0;

    virtual antlrcpp::Any visitRegularFunctionBody(CppParser::RegularFunctionBodyContext *context) = 0;

    virtual antlrcpp::Any visitExplicitlyDefaultedFunction(CppParser::ExplicitlyDefaultedFunctionContext *context) = 0;

    virtual antlrcpp::Any visitDeletedFunction(CppParser::DeletedFunctionContext *context) = 0;

    virtual antlrcpp::Any visitInitializer(CppParser::InitializerContext *context) = 0;

    virtual antlrcpp::Any visitBraceOrEqualInitializer(CppParser::BraceOrEqualInitializerContext *context) = 0;

    virtual antlrcpp::Any visitInitializerClause(CppParser::InitializerClauseContext *context) = 0;

    virtual antlrcpp::Any visitInitializerList(CppParser::InitializerListContext *context) = 0;

    virtual antlrcpp::Any visitBracedInitializerList(CppParser::BracedInitializerListContext *context) = 0;

    virtual antlrcpp::Any visitExpressionOrBracedInitializerList(CppParser::ExpressionOrBracedInitializerListContext *context) = 0;

    virtual antlrcpp::Any visitClassSpecifier(CppParser::ClassSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitClassHead(CppParser::ClassHeadContext *context) = 0;

    virtual antlrcpp::Any visitClassHeadName(CppParser::ClassHeadNameContext *context) = 0;

    virtual antlrcpp::Any visitClassVirtualSpecifier(CppParser::ClassVirtualSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitClassKey(CppParser::ClassKeyContext *context) = 0;

    virtual antlrcpp::Any visitMemberSpecification(CppParser::MemberSpecificationContext *context) = 0;

    virtual antlrcpp::Any visitMemberDeclaration(CppParser::MemberDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMemberDeclaratorList(CppParser::MemberDeclaratorListContext *context) = 0;

    virtual antlrcpp::Any visitMemberDeclarator(CppParser::MemberDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitVirtualSpecifierSequence(CppParser::VirtualSpecifierSequenceContext *context) = 0;

    virtual antlrcpp::Any visitVirtualSpecifier(CppParser::VirtualSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitPureSpecifier(CppParser::PureSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitBaseClause(CppParser::BaseClauseContext *context) = 0;

    virtual antlrcpp::Any visitBaseSpecifierList(CppParser::BaseSpecifierListContext *context) = 0;

    virtual antlrcpp::Any visitBaseSpecifier(CppParser::BaseSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitClassOrDecltype(CppParser::ClassOrDecltypeContext *context) = 0;

    virtual antlrcpp::Any visitAccessSpecifier(CppParser::AccessSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitConversionFunctionIdentifier(CppParser::ConversionFunctionIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitConversionTypeIdentifier(CppParser::ConversionTypeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitConversionDeclarator(CppParser::ConversionDeclaratorContext *context) = 0;

    virtual antlrcpp::Any visitConstructorInitializer(CppParser::ConstructorInitializerContext *context) = 0;

    virtual antlrcpp::Any visitMemberInitializerList(CppParser::MemberInitializerListContext *context) = 0;

    virtual antlrcpp::Any visitMemberInitializer(CppParser::MemberInitializerContext *context) = 0;

    virtual antlrcpp::Any visitMemberInitializerIdentifier(CppParser::MemberInitializerIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitOperatorFunctionIdentifier(CppParser::OperatorFunctionIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitAnyOperator(CppParser::AnyOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLiteralOperatorIdentifier(CppParser::LiteralOperatorIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitTemplateDeclaration(CppParser::TemplateDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitTemplateParameterList(CppParser::TemplateParameterListContext *context) = 0;

    virtual antlrcpp::Any visitTemplateParameter(CppParser::TemplateParameterContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameter(CppParser::TypeParameterContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameterKey(CppParser::TypeParameterKeyContext *context) = 0;

    virtual antlrcpp::Any visitSimpleTemplateIdentifier(CppParser::SimpleTemplateIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitTemplateIdentifier(CppParser::TemplateIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitTemplateArgumentList(CppParser::TemplateArgumentListContext *context) = 0;

    virtual antlrcpp::Any visitTemplateArgument(CppParser::TemplateArgumentContext *context) = 0;

    virtual antlrcpp::Any visitTypenameSpecifier(CppParser::TypenameSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitExplicitInstantiation(CppParser::ExplicitInstantiationContext *context) = 0;

    virtual antlrcpp::Any visitExplicitSpecialization(CppParser::ExplicitSpecializationContext *context) = 0;

    virtual antlrcpp::Any visitDeductionGuide(CppParser::DeductionGuideContext *context) = 0;

    virtual antlrcpp::Any visitTryBlock(CppParser::TryBlockContext *context) = 0;

    virtual antlrcpp::Any visitFunctionTryBlock(CppParser::FunctionTryBlockContext *context) = 0;

    virtual antlrcpp::Any visitHandlerSequence(CppParser::HandlerSequenceContext *context) = 0;

    virtual antlrcpp::Any visitHandler(CppParser::HandlerContext *context) = 0;

    virtual antlrcpp::Any visitExceptionDeclaration(CppParser::ExceptionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitNoExceptionSpecifier(CppParser::NoExceptionSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(CppParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(CppParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(CppParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(CppParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitPointerLiteral(CppParser::PointerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitUserDefinedLiteral(CppParser::UserDefinedLiteralContext *context) = 0;


};

