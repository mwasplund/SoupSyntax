
// Generated from Grammar\CppParser.g4 by ANTLR 4.7.1

#pragma once


//#include "antlr4-runtime.h"




export class  CppParser : public antlr4::Parser {
public:
  enum {
    BlockComment = 1, LineComment = 2, Whitespace = 3, Preprocessor = 4, 
    Newline = 5, AlignAs = 6, AlignOf = 7, Asm = 8, Auto = 9, Bool = 10, 
    Break = 11, Case = 12, Catch = 13, Char = 14, Char16 = 15, Char32 = 16, 
    Class = 17, Const = 18, ConstExpr = 19, ConstCast = 20, Continue = 21, 
    DeclType = 22, Default = 23, Delete = 24, Do = 25, Double = 26, DynamicCast = 27, 
    Else = 28, Enum = 29, Explicit = 30, Export = 31, Extern = 32, False = 33, 
    Float = 34, For = 35, Friend = 36, GoTo = 37, If = 38, Inline = 39, 
    Int = 40, Long = 41, Mutable = 42, Namespace = 43, New = 44, NoExcept = 45, 
    Nullptr = 46, Operator = 47, Private = 48, Protected = 49, Public = 50, 
    Register = 51, ReinterpretCast = 52, Return = 53, Short = 54, Signed = 55, 
    SizeOf = 56, Static = 57, StaticAssert = 58, StaticCast = 59, Struct = 60, 
    Switch = 61, Template = 62, This = 63, ThreadLocal = 64, Throw = 65, 
    True = 66, Try = 67, TypeDef = 68, TypeId = 69, TypeName = 70, Union = 71, 
    Unsigned = 72, Using = 73, Virtual = 74, Void = 75, Volatile = 76, WChar = 77, 
    While = 78, Override = 79, Final = 80, OpenBrace = 81, CloseBrace = 82, 
    OpenBracket = 83, CloseBracket = 84, OpenParenthesis = 85, CloseParenthesis = 86, 
    Semicolon = 87, Colon = 88, Ellipsis = 89, QuestionMark = 90, DoubleColon = 91, 
    Period = 92, PeriodAsterisk = 93, Plus = 94, Minus = 95, Asterisk = 96, 
    ForwardSlash = 97, Percent = 98, Caret = 99, Ampersand = 100, VerticalBar = 101, 
    Tilde = 102, ExclamationMark = 103, Equal = 104, LessThan = 105, GreaterThan = 106, 
    PlusEqual = 107, MinusEqual = 108, AsteriskEqual = 109, ForwardSlashEqual = 110, 
    PercentEqual = 111, CaretEqual = 112, AmpersandEqual = 113, VerticalBarEqual = 114, 
    DoubleLessThan = 115, DoubleLessThanEqual = 116, DoubleGreaterThanEqual = 117, 
    DoubleEqual = 118, ExclamationMarkEqual = 119, LessThanEqual = 120, 
    GreaterThanEqual = 121, DoubleAmpersand = 122, DoubleVerticalBar = 123, 
    DoublePlus = 124, DoubleMinus = 125, Comma = 126, ArrowAsterisk = 127, 
    Arrow = 128, Zero = 129, IntegerLiteral = 130, FloatingPointLiteral = 131, 
    CharacterLiteral = 132, StringLiteral = 133, UserDefinedIntegerLiteral = 134, 
    UserDefinedFloatingPointLiteral = 135, UserDefinedCharacterLiteral = 136, 
    UserDefinedStringLiteral = 137, Identifier = 138
  };

  enum {
    RuleDoubleGreaterThan = 0, RuleNamespaceName = 1, RuleNamespaceAlias = 2, 
    RuleClassName = 3, RuleTemplateName = 4, RuleTranslationUnit = 5, RulePrimaryExpression = 6, 
    RuleIdentifierExpression = 7, RuleUnqualifiedIdentifier = 8, RuleQualifiedIdentifier = 9, 
    RuleNestedNameSpecifier = 10, RuleNestedNameSpecifierSequence = 11, 
    RuleLambdaExpression = 12, RuleLambdaIntroducer = 13, RuleLambdaDeclarator = 14, 
    RuleLambdaCapture = 15, RuleCaptureDefault = 16, RuleCaptureList = 17, 
    RuleCapture = 18, RuleSimpleCapture = 19, RuleInitializerCapture = 20, 
    RuleFoldExpression = 21, RuleFoldOperator = 22, RuleExplicitTypeCoversionOperatorExpression = 23, 
    RulePostfixOperator = 24, RuleNamedCastExpression = 25, RuleMemberAccessOperator = 26, 
    RuleNamedCastType = 27, RuleTypeIdentificationExpression = 28, RulePostfixExpression = 29, 
    RuleExpressionList = 30, RulePseudoDestructorName = 31, RuleUnaryExpression = 32, 
    RuleUnaryOperator = 33, RuleNewExpression = 34, RuleNewPlacement = 35, 
    RuleNewTypeIdentifier = 36, RuleNewDeclarator = 37, RuleNoPointerNewDeclarator = 38, 
    RuleNewInitializer = 39, RuleDeleteExpression = 40, RuleNoExceptionExpression = 41, 
    RuleCastExpression = 42, RulePointerManipulationExpression = 43, RuleMultiplicativeExpression = 44, 
    RuleAdditiveExpression = 45, RuleShiftExpression = 46, RuleRelationalExpression = 47, 
    RuleEqualityExpression = 48, RuleAndExpression = 49, RuleExclusiveOrExpression = 50, 
    RuleInclusiveOrExpression = 51, RuleLogicalAndExpression = 52, RuleLogicalOrExpression = 53, 
    RuleConditionalExpression = 54, RuleThrowExpression = 55, RuleAssignmentExpression = 56, 
    RuleAssignmentOperator = 57, RuleExpression = 58, RuleConstantExpression = 59, 
    RuleStatement = 60, RuleInitializerStatement = 61, RuleCondition = 62, 
    RuleLabeledStatement = 63, RuleExpressionStatement = 64, RuleCompoundStatement = 65, 
    RuleStatementSequence = 66, RuleSelectionStatement = 67, RuleIterationStatement = 68, 
    RuleForInitializerStatement = 69, RuleForRangeDeclaration = 70, RuleForRangeInitializer = 71, 
    RuleJumpStatement = 72, RuleDeclarationStatement = 73, RuleDeclarationSequence = 74, 
    RuleDeclaration = 75, RuleBlockDeclaration = 76, RuleNoDeclarationSpecifierFunctionDeclaration = 77, 
    RuleAliasDeclaration = 78, RuleSimpleDeclaration = 79, RuleStaticAssertDeclaration = 80, 
    RuleEmptyDeclaration = 81, RuleAttributeDeclaration = 82, RuleDeclarationModifier = 83, 
    RuleDeclarationSpecifierSequence = 84, RuleLeadingDeclarationModifierSequence = 85, 
    RuleTrailingDeclarationModifierSequence = 86, RuleDeclarationModifierSequence = 87, 
    RuleStorageClassSpecifier = 88, RuleFunctionSpecifier = 89, RuleTypeSpecifier = 90, 
    RuleTypeSpecifierSequence = 91, RuleDefiningTypeSpecifier = 92, RuleDefiningTypeSpecifierSequence = 93, 
    RuleSimpleTypeSpecifier = 94, RuleTypeName = 95, RuleDeclarationTypeSpecifier = 96, 
    RuleElaboratedTypeSpecifier = 97, RuleEnumSpecifier = 98, RuleEnumHead = 99, 
    RuleEnumHeadName = 100, RuleOpaqueEnumDeclaration = 101, RuleEnumKey = 102, 
    RuleEnumBase = 103, RuleEnumeratorList = 104, RuleEnumeratorDefinition = 105, 
    RuleEnumerator = 106, RuleNamespaceDefinition = 107, RuleNamedNamespaceDefinition = 108, 
    RuleUnnamedNamespaceDefinition = 109, RuleNestedNamespaceDefinition = 110, 
    RuleEnclosingNamespaceSpecifier = 111, RuleNamespaceBody = 112, RuleNamespaceAliasDefinition = 113, 
    RuleQualifiedNamespaceSpecifier = 114, RuleUsingDeclaration = 115, RuleUsingDeclaratorList = 116, 
    RuleUsingDeclarator = 117, RuleUsingDirective = 118, RuleAsmDefinition = 119, 
    RuleLinkageSpecification = 120, RuleAttributeSpecifierSequence = 121, 
    RuleAttributeSpecifier = 122, RuleAlignmentSpecifier = 123, RuleAttributeUsingPrefix = 124, 
    RuleAttributeList = 125, RuleAttribute = 126, RuleAttributeToken = 127, 
    RuleAttributeScopedToken = 128, RuleAttributeNamespace = 129, RuleAttributeArgumentClause = 130, 
    RuleBalancedTokenSequence = 131, RuleBalancedToken = 132, RuleInitializerDeclaratorList = 133, 
    RuleInitializerDeclarator = 134, RuleDeclarator = 135, RulePointerDeclarator = 136, 
    RuleNoPointerDeclarator = 137, RuleParametersAndQualifiers = 138, RuleFunctionParameters = 139, 
    RuleFunctionQualifiers = 140, RuleTrailingReturnType = 141, RulePointerOperator = 142, 
    RuleConstVolatileQualifierSequence = 143, RuleConstVolatileQualifier = 144, 
    RuleReferenceQualifier = 145, RuleTypeIdentifier = 146, RuleDefiningTypeIdentifier = 147, 
    RuleAbstractDeclarator = 148, RulePointerAbstractDeclarator = 149, RuleNoPointerAbstractDeclarator = 150, 
    RuleAbstractPackDeclarator = 151, RuleNoPointerAbstractPackDeclarator = 152, 
    RuleParameterDeclarationClause = 153, RuleParameterDeclarationList = 154, 
    RuleParameterDeclaration = 155, RuleFunctionDefinition = 156, RuleFunctionDeclarator = 157, 
    RuleFunctionBody = 158, RuleRegularFunctionBody = 159, RuleExplicitlyDefaultedFunction = 160, 
    RuleDeletedFunction = 161, RuleInitializer = 162, RuleBraceOrEqualInitializer = 163, 
    RuleInitializerClause = 164, RuleInitializerList = 165, RuleBracedInitializerList = 166, 
    RuleExpressionOrBracedInitializerList = 167, RuleClassSpecifier = 168, 
    RuleClassHead = 169, RuleClassHeadName = 170, RuleClassVirtualSpecifier = 171, 
    RuleClassKey = 172, RuleMemberSpecification = 173, RuleMemberDeclaration = 174, 
    RuleMemberDeclaratorList = 175, RuleMemberDeclarator = 176, RuleVirtualSpecifierSequence = 177, 
    RuleVirtualSpecifier = 178, RulePureSpecifier = 179, RuleBaseClause = 180, 
    RuleBaseSpecifierList = 181, RuleBaseSpecifier = 182, RuleClassOrDecltype = 183, 
    RuleAccessSpecifier = 184, RuleConversionFunctionIdentifier = 185, RuleConversionTypeIdentifier = 186, 
    RuleConversionDeclarator = 187, RuleConstructorInitializer = 188, RuleMemberInitializerList = 189, 
    RuleMemberInitializer = 190, RuleMemberInitializerIdentifier = 191, 
    RuleOperatorFunctionIdentifier = 192, RuleAnyOperator = 193, RuleLiteralOperatorIdentifier = 194, 
    RuleTemplateDeclaration = 195, RuleTemplateParameterList = 196, RuleTemplateParameter = 197, 
    RuleTypeParameter = 198, RuleTypeParameterKey = 199, RuleSimpleTemplateIdentifier = 200, 
    RuleTemplateIdentifier = 201, RuleTemplateArgumentList = 202, RuleTemplateArgument = 203, 
    RuleTypenameSpecifier = 204, RuleExplicitInstantiation = 205, RuleExplicitSpecialization = 206, 
    RuleDeductionGuide = 207, RuleTryBlock = 208, RuleFunctionTryBlock = 209, 
    RuleHandlerSequence = 210, RuleHandler = 211, RuleExceptionDeclaration = 212, 
    RuleNoExceptionSpecifier = 213, RuleIdentifierList = 214, RuleLiteral = 215, 
    RuleIntegerLiteral = 216, RuleBooleanLiteral = 217, RulePointerLiteral = 218, 
    RuleUserDefinedLiteral = 219
  };

  CppParser(antlr4::TokenStream *input);
  ~CppParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class DoubleGreaterThanContext;
  class NamespaceNameContext;
  class NamespaceAliasContext;
  class ClassNameContext;
  class TemplateNameContext;
  class TranslationUnitContext;
  class PrimaryExpressionContext;
  class IdentifierExpressionContext;
  class UnqualifiedIdentifierContext;
  class QualifiedIdentifierContext;
  class NestedNameSpecifierContext;
  class NestedNameSpecifierSequenceContext;
  class LambdaExpressionContext;
  class LambdaIntroducerContext;
  class LambdaDeclaratorContext;
  class LambdaCaptureContext;
  class CaptureDefaultContext;
  class CaptureListContext;
  class CaptureContext;
  class SimpleCaptureContext;
  class InitializerCaptureContext;
  class FoldExpressionContext;
  class FoldOperatorContext;
  class ExplicitTypeCoversionOperatorExpressionContext;
  class PostfixOperatorContext;
  class NamedCastExpressionContext;
  class MemberAccessOperatorContext;
  class NamedCastTypeContext;
  class TypeIdentificationExpressionContext;
  class PostfixExpressionContext;
  class ExpressionListContext;
  class PseudoDestructorNameContext;
  class UnaryExpressionContext;
  class UnaryOperatorContext;
  class NewExpressionContext;
  class NewPlacementContext;
  class NewTypeIdentifierContext;
  class NewDeclaratorContext;
  class NoPointerNewDeclaratorContext;
  class NewInitializerContext;
  class DeleteExpressionContext;
  class NoExceptionExpressionContext;
  class CastExpressionContext;
  class PointerManipulationExpressionContext;
  class MultiplicativeExpressionContext;
  class AdditiveExpressionContext;
  class ShiftExpressionContext;
  class RelationalExpressionContext;
  class EqualityExpressionContext;
  class AndExpressionContext;
  class ExclusiveOrExpressionContext;
  class InclusiveOrExpressionContext;
  class LogicalAndExpressionContext;
  class LogicalOrExpressionContext;
  class ConditionalExpressionContext;
  class ThrowExpressionContext;
  class AssignmentExpressionContext;
  class AssignmentOperatorContext;
  class ExpressionContext;
  class ConstantExpressionContext;
  class StatementContext;
  class InitializerStatementContext;
  class ConditionContext;
  class LabeledStatementContext;
  class ExpressionStatementContext;
  class CompoundStatementContext;
  class StatementSequenceContext;
  class SelectionStatementContext;
  class IterationStatementContext;
  class ForInitializerStatementContext;
  class ForRangeDeclarationContext;
  class ForRangeInitializerContext;
  class JumpStatementContext;
  class DeclarationStatementContext;
  class DeclarationSequenceContext;
  class DeclarationContext;
  class BlockDeclarationContext;
  class NoDeclarationSpecifierFunctionDeclarationContext;
  class AliasDeclarationContext;
  class SimpleDeclarationContext;
  class StaticAssertDeclarationContext;
  class EmptyDeclarationContext;
  class AttributeDeclarationContext;
  class DeclarationModifierContext;
  class DeclarationSpecifierSequenceContext;
  class LeadingDeclarationModifierSequenceContext;
  class TrailingDeclarationModifierSequenceContext;
  class DeclarationModifierSequenceContext;
  class StorageClassSpecifierContext;
  class FunctionSpecifierContext;
  class TypeSpecifierContext;
  class TypeSpecifierSequenceContext;
  class DefiningTypeSpecifierContext;
  class DefiningTypeSpecifierSequenceContext;
  class SimpleTypeSpecifierContext;
  class TypeNameContext;
  class DeclarationTypeSpecifierContext;
  class ElaboratedTypeSpecifierContext;
  class EnumSpecifierContext;
  class EnumHeadContext;
  class EnumHeadNameContext;
  class OpaqueEnumDeclarationContext;
  class EnumKeyContext;
  class EnumBaseContext;
  class EnumeratorListContext;
  class EnumeratorDefinitionContext;
  class EnumeratorContext;
  class NamespaceDefinitionContext;
  class NamedNamespaceDefinitionContext;
  class UnnamedNamespaceDefinitionContext;
  class NestedNamespaceDefinitionContext;
  class EnclosingNamespaceSpecifierContext;
  class NamespaceBodyContext;
  class NamespaceAliasDefinitionContext;
  class QualifiedNamespaceSpecifierContext;
  class UsingDeclarationContext;
  class UsingDeclaratorListContext;
  class UsingDeclaratorContext;
  class UsingDirectiveContext;
  class AsmDefinitionContext;
  class LinkageSpecificationContext;
  class AttributeSpecifierSequenceContext;
  class AttributeSpecifierContext;
  class AlignmentSpecifierContext;
  class AttributeUsingPrefixContext;
  class AttributeListContext;
  class AttributeContext;
  class AttributeTokenContext;
  class AttributeScopedTokenContext;
  class AttributeNamespaceContext;
  class AttributeArgumentClauseContext;
  class BalancedTokenSequenceContext;
  class BalancedTokenContext;
  class InitializerDeclaratorListContext;
  class InitializerDeclaratorContext;
  class DeclaratorContext;
  class PointerDeclaratorContext;
  class NoPointerDeclaratorContext;
  class ParametersAndQualifiersContext;
  class FunctionParametersContext;
  class FunctionQualifiersContext;
  class TrailingReturnTypeContext;
  class PointerOperatorContext;
  class ConstVolatileQualifierSequenceContext;
  class ConstVolatileQualifierContext;
  class ReferenceQualifierContext;
  class TypeIdentifierContext;
  class DefiningTypeIdentifierContext;
  class AbstractDeclaratorContext;
  class PointerAbstractDeclaratorContext;
  class NoPointerAbstractDeclaratorContext;
  class AbstractPackDeclaratorContext;
  class NoPointerAbstractPackDeclaratorContext;
  class ParameterDeclarationClauseContext;
  class ParameterDeclarationListContext;
  class ParameterDeclarationContext;
  class FunctionDefinitionContext;
  class FunctionDeclaratorContext;
  class FunctionBodyContext;
  class RegularFunctionBodyContext;
  class ExplicitlyDefaultedFunctionContext;
  class DeletedFunctionContext;
  class InitializerContext;
  class BraceOrEqualInitializerContext;
  class InitializerClauseContext;
  class InitializerListContext;
  class BracedInitializerListContext;
  class ExpressionOrBracedInitializerListContext;
  class ClassSpecifierContext;
  class ClassHeadContext;
  class ClassHeadNameContext;
  class ClassVirtualSpecifierContext;
  class ClassKeyContext;
  class MemberSpecificationContext;
  class MemberDeclarationContext;
  class MemberDeclaratorListContext;
  class MemberDeclaratorContext;
  class VirtualSpecifierSequenceContext;
  class VirtualSpecifierContext;
  class PureSpecifierContext;
  class BaseClauseContext;
  class BaseSpecifierListContext;
  class BaseSpecifierContext;
  class ClassOrDecltypeContext;
  class AccessSpecifierContext;
  class ConversionFunctionIdentifierContext;
  class ConversionTypeIdentifierContext;
  class ConversionDeclaratorContext;
  class ConstructorInitializerContext;
  class MemberInitializerListContext;
  class MemberInitializerContext;
  class MemberInitializerIdentifierContext;
  class OperatorFunctionIdentifierContext;
  class AnyOperatorContext;
  class LiteralOperatorIdentifierContext;
  class TemplateDeclarationContext;
  class TemplateParameterListContext;
  class TemplateParameterContext;
  class TypeParameterContext;
  class TypeParameterKeyContext;
  class SimpleTemplateIdentifierContext;
  class TemplateIdentifierContext;
  class TemplateArgumentListContext;
  class TemplateArgumentContext;
  class TypenameSpecifierContext;
  class ExplicitInstantiationContext;
  class ExplicitSpecializationContext;
  class DeductionGuideContext;
  class TryBlockContext;
  class FunctionTryBlockContext;
  class HandlerSequenceContext;
  class HandlerContext;
  class ExceptionDeclarationContext;
  class NoExceptionSpecifierContext;
  class IdentifierListContext;
  class LiteralContext;
  class IntegerLiteralContext;
  class BooleanLiteralContext;
  class PointerLiteralContext;
  class UserDefinedLiteralContext; 

  class  DoubleGreaterThanContext : public antlr4::ParserRuleContext {
  public:
    DoubleGreaterThanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GreaterThan();
    antlr4::tree::TerminalNode* GreaterThan(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoubleGreaterThanContext* doubleGreaterThan();

  class  NamespaceNameContext : public antlr4::ParserRuleContext {
  public:
    NamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    NamespaceAliasContext *namespaceAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceNameContext* namespaceName();

  class  NamespaceAliasContext : public antlr4::ParserRuleContext {
  public:
    NamespaceAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceAliasContext* namespaceAlias();

  class  ClassNameContext : public antlr4::ParserRuleContext {
  public:
    ClassNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassNameContext* className();

  class  TemplateNameContext : public antlr4::ParserRuleContext {
  public:
    TemplateNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateNameContext* templateName();

  class  TranslationUnitContext : public antlr4::ParserRuleContext {
  public:
    TranslationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    DeclarationSequenceContext *declarationSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TranslationUnitContext* translationUnit();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *OpenParenthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseParenthesis();
    IdentifierExpressionContext *identifierExpression();
    LambdaExpressionContext *lambdaExpression();
    FoldExpressionContext *foldExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  IdentifierExpressionContext : public antlr4::ParserRuleContext {
  public:
    IdentifierExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedIdentifierContext *unqualifiedIdentifier();
    QualifiedIdentifierContext *qualifiedIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierExpressionContext* identifierExpression();

  class  UnqualifiedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    OperatorFunctionIdentifierContext *operatorFunctionIdentifier();
    ConversionFunctionIdentifierContext *conversionFunctionIdentifier();
    LiteralOperatorIdentifierContext *literalOperatorIdentifier();
    antlr4::tree::TerminalNode *Tilde();
    ClassNameContext *className();
    DeclarationTypeSpecifierContext *declarationTypeSpecifier();
    TemplateIdentifierContext *templateIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnqualifiedIdentifierContext* unqualifiedIdentifier();

  class  QualifiedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestedNameSpecifierContext *nestedNameSpecifier();
    UnqualifiedIdentifierContext *unqualifiedIdentifier();
    antlr4::tree::TerminalNode *Template();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedIdentifierContext* qualifiedIdentifier();

  class  NestedNameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    NestedNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoubleColon();
    NestedNameSpecifierSequenceContext *nestedNameSpecifierSequence();
    antlr4::tree::TerminalNode *Identifier();
    DeclarationTypeSpecifierContext *declarationTypeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedNameSpecifierContext* nestedNameSpecifier();

  class  NestedNameSpecifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    NestedNameSpecifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *DoubleColon();
    NestedNameSpecifierSequenceContext *nestedNameSpecifierSequence();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();
    antlr4::tree::TerminalNode *Template();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedNameSpecifierSequenceContext* nestedNameSpecifierSequence();

  class  LambdaExpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaIntroducerContext *lambdaIntroducer();
    CompoundStatementContext *compoundStatement();
    LambdaDeclaratorContext *lambdaDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaExpressionContext* lambdaExpression();

  class  LambdaIntroducerContext : public antlr4::ParserRuleContext {
  public:
    LambdaIntroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    LambdaCaptureContext *lambdaCapture();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaIntroducerContext* lambdaIntroducer();

  class  LambdaDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    LambdaDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParenthesis();
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    antlr4::tree::TerminalNode *CloseParenthesis();
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();
    NoExceptionSpecifierContext *noExceptionSpecifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    TrailingReturnTypeContext *trailingReturnType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaDeclaratorContext* lambdaDeclarator();

  class  LambdaCaptureContext : public antlr4::ParserRuleContext {
  public:
    LambdaCaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaptureDefaultContext *captureDefault();
    CaptureListContext *captureList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaCaptureContext* lambdaCapture();

  class  CaptureDefaultContext : public antlr4::ParserRuleContext {
  public:
    CaptureDefaultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *Equal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureDefaultContext* captureDefault();

  class  CaptureListContext : public antlr4::ParserRuleContext {
  public:
    CaptureListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CaptureContext *capture();
    antlr4::tree::TerminalNode *Ellipsis();
    CaptureListContext *captureList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureListContext* captureList();
  CaptureListContext* captureList(int precedence);
  class  CaptureContext : public antlr4::ParserRuleContext {
  public:
    CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleCaptureContext *simpleCapture();
    InitializerCaptureContext *initializerCapture();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureContext* capture();

  class  SimpleCaptureContext : public antlr4::ParserRuleContext {
  public:
    SimpleCaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Asterisk();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleCaptureContext* simpleCapture();

  class  InitializerCaptureContext : public antlr4::ParserRuleContext {
  public:
    InitializerCaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    InitializerContext *initializer();
    antlr4::tree::TerminalNode *Ampersand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerCaptureContext* initializerCapture();

  class  FoldExpressionContext : public antlr4::ParserRuleContext {
  public:
    FoldExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParenthesis();
    std::vector<CastExpressionContext *> castExpression();
    CastExpressionContext* castExpression(size_t i);
    std::vector<FoldOperatorContext *> foldOperator();
    FoldOperatorContext* foldOperator(size_t i);
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *CloseParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FoldExpressionContext* foldExpression();

  class  FoldOperatorContext : public antlr4::ParserRuleContext {
  public:
    FoldOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Asterisk();
    antlr4::tree::TerminalNode *ForwardSlash();
    antlr4::tree::TerminalNode *Percent();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *VerticalBar();
    antlr4::tree::TerminalNode *DoubleLessThan();
    DoubleGreaterThanContext *doubleGreaterThan();
    antlr4::tree::TerminalNode *PlusEqual();
    antlr4::tree::TerminalNode *MinusEqual();
    antlr4::tree::TerminalNode *AsteriskEqual();
    antlr4::tree::TerminalNode *ForwardSlashEqual();
    antlr4::tree::TerminalNode *PercentEqual();
    antlr4::tree::TerminalNode *CaretEqual();
    antlr4::tree::TerminalNode *AmpersandEqual();
    antlr4::tree::TerminalNode *VerticalBarEqual();
    antlr4::tree::TerminalNode *DoubleLessThanEqual();
    antlr4::tree::TerminalNode *DoubleGreaterThanEqual();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *DoubleEqual();
    antlr4::tree::TerminalNode *ExclamationMarkEqual();
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *GreaterThan();
    antlr4::tree::TerminalNode *LessThanEqual();
    antlr4::tree::TerminalNode *GreaterThanEqual();
    antlr4::tree::TerminalNode *DoubleAmpersand();
    antlr4::tree::TerminalNode *DoubleVerticalBar();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *PeriodAsterisk();
    antlr4::tree::TerminalNode *ArrowAsterisk();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FoldOperatorContext* foldOperator();

  class  ExplicitTypeCoversionOperatorExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExplicitTypeCoversionOperatorExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypenameSpecifierContext *typenameSpecifier();
    antlr4::tree::TerminalNode *OpenParenthesis();
    antlr4::tree::TerminalNode *CloseParenthesis();
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitTypeCoversionOperatorExpressionContext* explicitTypeCoversionOperatorExpression();

  class  PostfixOperatorContext : public antlr4::ParserRuleContext {
  public:
    PostfixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoublePlus();
    antlr4::tree::TerminalNode *DoubleMinus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixOperatorContext* postfixOperator();

  class  NamedCastExpressionContext : public antlr4::ParserRuleContext {
  public:
    NamedCastExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamedCastTypeContext *namedCastType();
    antlr4::tree::TerminalNode *LessThan();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *GreaterThan();
    antlr4::tree::TerminalNode *OpenParenthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedCastExpressionContext* namedCastExpression();

  class  MemberAccessOperatorContext : public antlr4::ParserRuleContext {
  public:
    MemberAccessOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Period();
    antlr4::tree::TerminalNode *Arrow();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberAccessOperatorContext* memberAccessOperator();

  class  NamedCastTypeContext : public antlr4::ParserRuleContext {
  public:
    NamedCastTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DynamicCast();
    antlr4::tree::TerminalNode *StaticCast();
    antlr4::tree::TerminalNode *ReinterpretCast();
    antlr4::tree::TerminalNode *ConstCast();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedCastTypeContext* namedCastType();

  class  TypeIdentificationExpressionContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentificationExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TypeId();
    antlr4::tree::TerminalNode *OpenParenthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseParenthesis();
    TypeIdentifierContext *typeIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentificationExpressionContext* typeIdentificationExpression();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    ExplicitTypeCoversionOperatorExpressionContext *explicitTypeCoversionOperatorExpression();
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    BracedInitializerListContext *bracedInitializerList();
    TypenameSpecifierContext *typenameSpecifier();
    NamedCastExpressionContext *namedCastExpression();
    TypeIdentificationExpressionContext *typeIdentificationExpression();
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *OpenBracket();
    ExpressionOrBracedInitializerListContext *expressionOrBracedInitializerList();
    antlr4::tree::TerminalNode *CloseBracket();
    antlr4::tree::TerminalNode *OpenParenthesis();
    antlr4::tree::TerminalNode *CloseParenthesis();
    ExpressionListContext *expressionList();
    MemberAccessOperatorContext *memberAccessOperator();
    IdentifierExpressionContext *identifierExpression();
    antlr4::tree::TerminalNode *Template();
    PseudoDestructorNameContext *pseudoDestructorName();
    PostfixOperatorContext *postfixOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixExpressionContext* postfixExpression();
  PostfixExpressionContext* postfixExpression(int precedence);
  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerListContext *initializerList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListContext* expressionList();

  class  PseudoDestructorNameContext : public antlr4::ParserRuleContext {
  public:
    PseudoDestructorNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeNameContext *> typeName();
    TypeNameContext* typeName(size_t i);
    antlr4::tree::TerminalNode *DoubleColon();
    antlr4::tree::TerminalNode *Tilde();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Template();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();
    DeclarationTypeSpecifierContext *declarationTypeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PseudoDestructorNameContext* pseudoDestructorName();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *DoublePlus();
    CastExpressionContext *castExpression();
    antlr4::tree::TerminalNode *DoubleMinus();
    UnaryOperatorContext *unaryOperator();
    antlr4::tree::TerminalNode *SizeOf();
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *OpenParenthesis();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *CloseParenthesis();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *AlignOf();
    NoExceptionExpressionContext *noExceptionExpression();
    NewExpressionContext *newExpression();
    DeleteExpressionContext *deleteExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VerticalBar();
    antlr4::tree::TerminalNode *Asterisk();
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *ExclamationMark();
    antlr4::tree::TerminalNode *Tilde();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  NewExpressionContext : public antlr4::ParserRuleContext {
  public:
    NewExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    NewTypeIdentifierContext *newTypeIdentifier();
    antlr4::tree::TerminalNode *DoubleColon();
    NewPlacementContext *newPlacement();
    NewInitializerContext *newInitializer();
    antlr4::tree::TerminalNode *OpenParenthesis();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *CloseParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewExpressionContext* newExpression();

  class  NewPlacementContext : public antlr4::ParserRuleContext {
  public:
    NewPlacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParenthesis();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *CloseParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewPlacementContext* newPlacement();

  class  NewTypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    NewTypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSequenceContext *typeSpecifierSequence();
    NewDeclaratorContext *newDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewTypeIdentifierContext* newTypeIdentifier();

  class  NewDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NewDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerOperatorContext *pointerOperator();
    NoPointerNewDeclaratorContext *noPointerNewDeclarator();
    NewDeclaratorContext *newDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewDeclaratorContext* newDeclarator();

  class  NoPointerNewDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerNewDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseBracket();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    NoPointerNewDeclaratorContext *noPointerNewDeclarator();
    ConstantExpressionContext *constantExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoPointerNewDeclaratorContext* noPointerNewDeclarator();
  NoPointerNewDeclaratorContext* noPointerNewDeclarator(int precedence);
  class  NewInitializerContext : public antlr4::ParserRuleContext {
  public:
    NewInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParenthesis();
    antlr4::tree::TerminalNode *CloseParenthesis();
    ExpressionListContext *expressionList();
    BracedInitializerListContext *bracedInitializerList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewInitializerContext* newInitializer();

  class  DeleteExpressionContext : public antlr4::ParserRuleContext {
  public:
    DeleteExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Delete();
    CastExpressionContext *castExpression();
    antlr4::tree::TerminalNode *DoubleColon();
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteExpressionContext* deleteExpression();

  class  NoExceptionExpressionContext : public antlr4::ParserRuleContext {
  public:
    NoExceptionExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NoExcept();
    antlr4::tree::TerminalNode *OpenParenthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoExceptionExpressionContext* noExceptionExpression();

  class  CastExpressionContext : public antlr4::ParserRuleContext {
  public:
    CastExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *OpenParenthesis();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *CloseParenthesis();
    CastExpressionContext *castExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastExpressionContext* castExpression();

  class  PointerManipulationExpressionContext : public antlr4::ParserRuleContext {
  public:
    PointerManipulationExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CastExpressionContext *castExpression();
    PointerManipulationExpressionContext *pointerManipulationExpression();
    antlr4::tree::TerminalNode *PeriodAsterisk();
    antlr4::tree::TerminalNode *ArrowAsterisk();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerManipulationExpressionContext* pointerManipulationExpression();
  PointerManipulationExpressionContext* pointerManipulationExpression(int precedence);
  class  MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerManipulationExpressionContext *pointerManipulationExpression();
    MultiplicativeExpressionContext *multiplicativeExpression();
    antlr4::tree::TerminalNode *Asterisk();
    antlr4::tree::TerminalNode *ForwardSlash();
    antlr4::tree::TerminalNode *Percent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();
  MultiplicativeExpressionContext* multiplicativeExpression(int precedence);
  class  AdditiveExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeExpressionContext *multiplicativeExpression();
    AdditiveExpressionContext *additiveExpression();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditiveExpressionContext* additiveExpression();
  AdditiveExpressionContext* additiveExpression(int precedence);
  class  ShiftExpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveExpressionContext *additiveExpression();
    ShiftExpressionContext *shiftExpression();
    antlr4::tree::TerminalNode *DoubleLessThan();
    DoubleGreaterThanContext *doubleGreaterThan();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftExpressionContext* shiftExpression();
  ShiftExpressionContext* shiftExpression(int precedence);
  class  RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftExpressionContext *shiftExpression();
    RelationalExpressionContext *relationalExpression();
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *GreaterThan();
    antlr4::tree::TerminalNode *LessThanEqual();
    antlr4::tree::TerminalNode *GreaterThanEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalExpressionContext* relationalExpression();
  RelationalExpressionContext* relationalExpression(int precedence);
  class  EqualityExpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalExpressionContext *relationalExpression();
    EqualityExpressionContext *equalityExpression();
    antlr4::tree::TerminalNode *DoubleEqual();
    antlr4::tree::TerminalNode *ExclamationMarkEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityExpressionContext* equalityExpression();
  EqualityExpressionContext* equalityExpression(int precedence);
  class  AndExpressionContext : public antlr4::ParserRuleContext {
  public:
    AndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualityExpressionContext *equalityExpression();
    AndExpressionContext *andExpression();
    antlr4::tree::TerminalNode *Ampersand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndExpressionContext* andExpression();
  AndExpressionContext* andExpression(int precedence);
  class  ExclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndExpressionContext *andExpression();
    ExclusiveOrExpressionContext *exclusiveOrExpression();
    antlr4::tree::TerminalNode *Caret();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExclusiveOrExpressionContext* exclusiveOrExpression();
  ExclusiveOrExpressionContext* exclusiveOrExpression(int precedence);
  class  InclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExclusiveOrExpressionContext *exclusiveOrExpression();
    InclusiveOrExpressionContext *inclusiveOrExpression();
    antlr4::tree::TerminalNode *VerticalBar();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InclusiveOrExpressionContext* inclusiveOrExpression();
  InclusiveOrExpressionContext* inclusiveOrExpression(int precedence);
  class  LogicalAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InclusiveOrExpressionContext *inclusiveOrExpression();
    LogicalAndExpressionContext *logicalAndExpression();
    antlr4::tree::TerminalNode *DoubleAmpersand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalAndExpressionContext* logicalAndExpression();
  LogicalAndExpressionContext* logicalAndExpression(int precedence);
  class  LogicalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalAndExpressionContext *logicalAndExpression();
    LogicalOrExpressionContext *logicalOrExpression();
    antlr4::tree::TerminalNode *DoubleVerticalBar();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOrExpressionContext* logicalOrExpression();
  LogicalOrExpressionContext* logicalOrExpression(int precedence);
  class  ConditionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    antlr4::tree::TerminalNode *QuestionMark();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Colon();
    AssignmentExpressionContext *assignmentExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalExpressionContext* conditionalExpression();

  class  ThrowExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThrowExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    AssignmentExpressionContext *assignmentExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThrowExpressionContext* throwExpression();

  class  AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    LogicalOrExpressionContext *logicalOrExpression();
    AssignmentOperatorContext *assignmentOperator();
    InitializerClauseContext *initializerClause();
    ThrowExpressionContext *throwExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentExpressionContext* assignmentExpression();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *AsteriskEqual();
    antlr4::tree::TerminalNode *ForwardSlashEqual();
    antlr4::tree::TerminalNode *PercentEqual();
    antlr4::tree::TerminalNode *PlusEqual();
    antlr4::tree::TerminalNode *MinusEqual();
    antlr4::tree::TerminalNode *DoubleGreaterThanEqual();
    antlr4::tree::TerminalNode *DoubleLessThanEqual();
    antlr4::tree::TerminalNode *AmpersandEqual();
    antlr4::tree::TerminalNode *CaretEqual();
    antlr4::tree::TerminalNode *VerticalBarEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  ConstantExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantExpressionContext* constantExpression();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabeledStatementContext *labeledStatement();
    ExpressionStatementContext *expressionStatement();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    CompoundStatementContext *compoundStatement();
    SelectionStatementContext *selectionStatement();
    IterationStatementContext *iterationStatement();
    JumpStatementContext *jumpStatement();
    DeclarationStatementContext *declarationStatement();
    TryBlockContext *tryBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  InitializerStatementContext : public antlr4::ParserRuleContext {
  public:
    InitializerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionStatementContext *expressionStatement();
    SimpleDeclarationContext *simpleDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerStatementContext* initializerStatement();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();
    DeclaratorContext *declarator();
    BraceOrEqualInitializerContext *braceOrEqualInitializer();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  LabeledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    StatementContext *statement();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    antlr4::tree::TerminalNode *Case();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledStatementContext* labeledStatement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semicolon();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    StatementSequenceContext *statementSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  StatementSequenceContext : public antlr4::ParserRuleContext {
  public:
    StatementSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    StatementSequenceContext *statementSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementSequenceContext* statementSequence();
  StatementSequenceContext* statementSequence(int precedence);
  class  SelectionStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *OpenParenthesis();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *CloseParenthesis();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ConstExpr();
    InitializerStatementContext *initializerStatement();
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Switch();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectionStatementContext* selectionStatement();

  class  IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *OpenParenthesis();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *CloseParenthesis();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Do();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Semicolon();
    antlr4::tree::TerminalNode *For();
    InitializerStatementContext *initializerStatement();
    ForRangeDeclarationContext *forRangeDeclaration();
    antlr4::tree::TerminalNode *Colon();
    ForRangeInitializerContext *forRangeInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterationStatementContext* iterationStatement();

  class  ForInitializerStatementContext : public antlr4::ParserRuleContext {
  public:
    ForInitializerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();
    DeclaratorContext *declarator();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    antlr4::tree::TerminalNode *OpenBracket();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *CloseBracket();
    ReferenceQualifierContext *referenceQualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForInitializerStatementContext* forInitializerStatement();

  class  ForRangeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForRangeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();
    DeclaratorContext *declarator();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForRangeDeclarationContext* forRangeDeclaration();

  class  ForRangeInitializerContext : public antlr4::ParserRuleContext {
  public:
    ForRangeInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionOrBracedInitializerListContext *expressionOrBracedInitializerList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForRangeInitializerContext* forRangeInitializer();

  class  JumpStatementContext : public antlr4::ParserRuleContext {
  public:
    JumpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Semicolon();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Return();
    ExpressionOrBracedInitializerListContext *expressionOrBracedInitializerList();
    antlr4::tree::TerminalNode *GoTo();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpStatementContext* jumpStatement();

  class  DeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDeclarationContext *blockDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationStatementContext* declarationStatement();

  class  DeclarationSequenceContext : public antlr4::ParserRuleContext {
  public:
    DeclarationSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    DeclarationSequenceContext *declarationSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationSequenceContext* declarationSequence();
  DeclarationSequenceContext* declarationSequence(int precedence);
  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDeclarationContext *blockDeclaration();
    NoDeclarationSpecifierFunctionDeclarationContext *noDeclarationSpecifierFunctionDeclaration();
    FunctionDefinitionContext *functionDefinition();
    TemplateDeclarationContext *templateDeclaration();
    DeductionGuideContext *deductionGuide();
    ExplicitInstantiationContext *explicitInstantiation();
    ExplicitSpecializationContext *explicitSpecialization();
    LinkageSpecificationContext *linkageSpecification();
    NamespaceDefinitionContext *namespaceDefinition();
    EmptyDeclarationContext *emptyDeclaration();
    AttributeDeclarationContext *attributeDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  BlockDeclarationContext : public antlr4::ParserRuleContext {
  public:
    BlockDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDeclarationContext *simpleDeclaration();
    AsmDefinitionContext *asmDefinition();
    NamespaceAliasDefinitionContext *namespaceAliasDefinition();
    UsingDeclarationContext *usingDeclaration();
    UsingDirectiveContext *usingDirective();
    StaticAssertDeclarationContext *staticAssertDeclaration();
    AliasDeclarationContext *aliasDeclaration();
    OpaqueEnumDeclarationContext *opaqueEnumDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockDeclarationContext* blockDeclaration();

  class  NoDeclarationSpecifierFunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    NoDeclarationSpecifierFunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    antlr4::tree::TerminalNode *Semicolon();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoDeclarationSpecifierFunctionDeclarationContext* noDeclarationSpecifierFunctionDeclaration();

  class  AliasDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AliasDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Equal();
    DefiningTypeIdentifierContext *definingTypeIdentifier();
    antlr4::tree::TerminalNode *Semicolon();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasDeclarationContext* aliasDeclaration();

  class  SimpleDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SimpleDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();
    antlr4::tree::TerminalNode *Semicolon();
    InitializerDeclaratorListContext *initializerDeclaratorList();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    antlr4::tree::TerminalNode *OpenBracket();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *CloseBracket();
    InitializerContext *initializer();
    ReferenceQualifierContext *referenceQualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleDeclarationContext* simpleDeclaration();

  class  StaticAssertDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StaticAssertDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StaticAssert();
    antlr4::tree::TerminalNode *OpenParenthesis();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *CloseParenthesis();
    antlr4::tree::TerminalNode *Semicolon();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StaticAssertDeclarationContext* staticAssertDeclaration();

  class  EmptyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EmptyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyDeclarationContext* emptyDeclaration();

  class  AttributeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AttributeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeDeclarationContext* attributeDeclaration();

  class  DeclarationModifierContext : public antlr4::ParserRuleContext {
  public:
    DeclarationModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StorageClassSpecifierContext *storageClassSpecifier();
    FunctionSpecifierContext *functionSpecifier();
    antlr4::tree::TerminalNode *Friend();
    antlr4::tree::TerminalNode *TypeDef();
    antlr4::tree::TerminalNode *ConstExpr();
    antlr4::tree::TerminalNode *Inline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationModifierContext* declarationModifier();

  class  DeclarationSpecifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    DeclarationSpecifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefiningTypeSpecifierContext *definingTypeSpecifier();
    LeadingDeclarationModifierSequenceContext *leadingDeclarationModifierSequence();
    TrailingDeclarationModifierSequenceContext *trailingDeclarationModifierSequence();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationSpecifierSequenceContext* declarationSpecifierSequence();

  class  LeadingDeclarationModifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    LeadingDeclarationModifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationModifierSequenceContext *declarationModifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeadingDeclarationModifierSequenceContext* leadingDeclarationModifierSequence();

  class  TrailingDeclarationModifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    TrailingDeclarationModifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationModifierSequenceContext *declarationModifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingDeclarationModifierSequenceContext* trailingDeclarationModifierSequence();

  class  DeclarationModifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    DeclarationModifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationModifierContext *declarationModifier();
    DeclarationModifierSequenceContext *declarationModifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationModifierSequenceContext* declarationModifierSequence();

  class  StorageClassSpecifierContext : public antlr4::ParserRuleContext {
  public:
    StorageClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *ThreadLocal();
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Mutable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StorageClassSpecifierContext* storageClassSpecifier();

  class  FunctionSpecifierContext : public antlr4::ParserRuleContext {
  public:
    FunctionSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Virtual();
    antlr4::tree::TerminalNode *Explicit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionSpecifierContext* functionSpecifier();

  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    ElaboratedTypeSpecifierContext *elaboratedTypeSpecifier();
    TypenameSpecifierContext *typenameSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  TypeSpecifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();
    ConstVolatileQualifierContext *constVolatileQualifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierSequenceContext* typeSpecifierSequence();

  class  DefiningTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DefiningTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();
    ClassSpecifierContext *classSpecifier();
    EnumSpecifierContext *enumSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefiningTypeSpecifierContext* definingTypeSpecifier();

  class  DefiningTypeSpecifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    DefiningTypeSpecifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefiningTypeSpecifierContext *definingTypeSpecifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    DefiningTypeSpecifierSequenceContext *definingTypeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefiningTypeSpecifierSequenceContext* definingTypeSpecifierSequence();

  class  SimpleTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Char16();
    antlr4::tree::TerminalNode *Char32();
    antlr4::tree::TerminalNode *WChar();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Short();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Long();
    antlr4::tree::TerminalNode *Signed();
    antlr4::tree::TerminalNode *Unsigned();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Double();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Auto();
    DeclarationTypeSpecifierContext *declarationTypeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTypeSpecifierContext* simpleTypeSpecifier();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();

  class  DeclarationTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DeclarationTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DeclType();
    antlr4::tree::TerminalNode *OpenParenthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CloseParenthesis();
    antlr4::tree::TerminalNode *Auto();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationTypeSpecifierContext* declarationTypeSpecifier();

  class  ElaboratedTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ElaboratedTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassKeyContext *classKey();
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    NestedNameSpecifierContext *nestedNameSpecifier();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Enum();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElaboratedTypeSpecifierContext* elaboratedTypeSpecifier();

  class  EnumSpecifierContext : public antlr4::ParserRuleContext {
  public:
    EnumSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumHeadContext *enumHead();
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    EnumeratorListContext *enumeratorList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumSpecifierContext* enumSpecifier();

  class  EnumHeadContext : public antlr4::ParserRuleContext {
  public:
    EnumHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumKeyContext *enumKey();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    EnumHeadNameContext *enumHeadName();
    EnumBaseContext *enumBase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumHeadContext* enumHead();

  class  EnumHeadNameContext : public antlr4::ParserRuleContext {
  public:
    EnumHeadNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    NestedNameSpecifierContext *nestedNameSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumHeadNameContext* enumHeadName();

  class  OpaqueEnumDeclarationContext : public antlr4::ParserRuleContext {
  public:
    OpaqueEnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumKeyContext *enumKey();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Semicolon();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    NestedNameSpecifierContext *nestedNameSpecifier();
    EnumBaseContext *enumBase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpaqueEnumDeclarationContext* opaqueEnumDeclaration();

  class  EnumKeyContext : public antlr4::ParserRuleContext {
  public:
    EnumKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumKeyContext* enumKey();

  class  EnumBaseContext : public antlr4::ParserRuleContext {
  public:
    EnumBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    TypeSpecifierSequenceContext *typeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumBaseContext* enumBase();

  class  EnumeratorListContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratorDefinitionContext *enumeratorDefinition();
    EnumeratorListContext *enumeratorList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorListContext* enumeratorList();
  EnumeratorListContext* enumeratorList(int precedence);
  class  EnumeratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumeratorContext *enumerator();
    antlr4::tree::TerminalNode *Equal();
    ConstantExpressionContext *constantExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorDefinitionContext* enumeratorDefinition();

  class  EnumeratorContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorContext* enumerator();

  class  NamespaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamedNamespaceDefinitionContext *namedNamespaceDefinition();
    UnnamedNamespaceDefinitionContext *unnamedNamespaceDefinition();
    NestedNamespaceDefinitionContext *nestedNamespaceDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceDefinitionContext* namespaceDefinition();

  class  NamedNamespaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamedNamespaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *OpenBrace();
    NamespaceBodyContext *namespaceBody();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Inline();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedNamespaceDefinitionContext* namedNamespaceDefinition();

  class  UnnamedNamespaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    UnnamedNamespaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *OpenBrace();
    NamespaceBodyContext *namespaceBody();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Inline();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnnamedNamespaceDefinitionContext* unnamedNamespaceDefinition();

  class  NestedNamespaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    NestedNamespaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    EnclosingNamespaceSpecifierContext *enclosingNamespaceSpecifier();
    antlr4::tree::TerminalNode *DoubleColon();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *OpenBrace();
    NamespaceBodyContext *namespaceBody();
    antlr4::tree::TerminalNode *CloseBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedNamespaceDefinitionContext* nestedNamespaceDefinition();

  class  EnclosingNamespaceSpecifierContext : public antlr4::ParserRuleContext {
  public:
    EnclosingNamespaceSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    EnclosingNamespaceSpecifierContext *enclosingNamespaceSpecifier();
    antlr4::tree::TerminalNode *DoubleColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnclosingNamespaceSpecifierContext* enclosingNamespaceSpecifier();
  EnclosingNamespaceSpecifierContext* enclosingNamespaceSpecifier(int precedence);
  class  NamespaceBodyContext : public antlr4::ParserRuleContext {
  public:
    NamespaceBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSequenceContext *declarationSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceBodyContext* namespaceBody();

  class  NamespaceAliasDefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespaceAliasDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Equal();
    QualifiedNamespaceSpecifierContext *qualifiedNamespaceSpecifier();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceAliasDefinitionContext* namespaceAliasDefinition();

  class  QualifiedNamespaceSpecifierContext : public antlr4::ParserRuleContext {
  public:
    QualifiedNamespaceSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamespaceNameContext *namespaceName();
    NestedNameSpecifierContext *nestedNameSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedNamespaceSpecifierContext* qualifiedNamespaceSpecifier();

  class  UsingDeclarationContext : public antlr4::ParserRuleContext {
  public:
    UsingDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    UsingDeclaratorListContext *usingDeclaratorList();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingDeclarationContext* usingDeclaration();

  class  UsingDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    UsingDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UsingDeclaratorContext *usingDeclarator();
    antlr4::tree::TerminalNode *Ellipsis();
    UsingDeclaratorListContext *usingDeclaratorList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingDeclaratorListContext* usingDeclaratorList();
  UsingDeclaratorListContext* usingDeclaratorList(int precedence);
  class  UsingDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    UsingDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestedNameSpecifierContext *nestedNameSpecifier();
    UnqualifiedIdentifierContext *unqualifiedIdentifier();
    TypeNameContext *typeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingDeclaratorContext* usingDeclarator();

  class  UsingDirectiveContext : public antlr4::ParserRuleContext {
  public:
    UsingDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    antlr4::tree::TerminalNode *Namespace();
    NamespaceNameContext *namespaceName();
    antlr4::tree::TerminalNode *Semicolon();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    NestedNameSpecifierContext *nestedNameSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsingDirectiveContext* usingDirective();

  class  AsmDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AsmDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Asm();
    antlr4::tree::TerminalNode *OpenParenthesis();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *CloseParenthesis();
    antlr4::tree::TerminalNode *Semicolon();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AsmDefinitionContext* asmDefinition();

  class  LinkageSpecificationContext : public antlr4::ParserRuleContext {
  public:
    LinkageSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    DeclarationSequenceContext *declarationSequence();
    DeclarationContext *declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinkageSpecificationContext* linkageSpecification();

  class  AttributeSpecifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeSpecifierContext *attributeSpecifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeSpecifierSequenceContext* attributeSpecifierSequence();
  AttributeSpecifierSequenceContext* attributeSpecifierSequence(int precedence);
  class  AttributeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OpenBracket();
    antlr4::tree::TerminalNode* OpenBracket(size_t i);
    AttributeListContext *attributeList();
    std::vector<antlr4::tree::TerminalNode *> CloseBracket();
    antlr4::tree::TerminalNode* CloseBracket(size_t i);
    AttributeUsingPrefixContext *attributeUsingPrefix();
    AlignmentSpecifierContext *alignmentSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeSpecifierContext* attributeSpecifier();

  class  AlignmentSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AlignmentSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AlignAs();
    antlr4::tree::TerminalNode *OpenParenthesis();
    TypeIdentifierContext *typeIdentifier();
    std::vector<antlr4::tree::TerminalNode *> CloseParenthesis();
    antlr4::tree::TerminalNode* CloseParenthesis(size_t i);
    antlr4::tree::TerminalNode *Ellipsis();
    ConstantExpressionContext *constantExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlignmentSpecifierContext* alignmentSpecifier();

  class  AttributeUsingPrefixContext : public antlr4::ParserRuleContext {
  public:
    AttributeUsingPrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Using();
    AttributeNamespaceContext *attributeNamespace();
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeUsingPrefixContext* attributeUsingPrefix();

  class  AttributeListContext : public antlr4::ParserRuleContext {
  public:
    AttributeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    antlr4::tree::TerminalNode *Ellipsis();
    AttributeListContext *attributeList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeListContext* attributeList();
  AttributeListContext* attributeList(int precedence);
  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeTokenContext *attributeToken();
    AttributeArgumentClauseContext *attributeArgumentClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeContext* attribute();

  class  AttributeTokenContext : public antlr4::ParserRuleContext {
  public:
    AttributeTokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributeScopedTokenContext *attributeScopedToken();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeTokenContext* attributeToken();

  class  AttributeScopedTokenContext : public antlr4::ParserRuleContext {
  public:
    AttributeScopedTokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeNamespaceContext *attributeNamespace();
    antlr4::tree::TerminalNode *DoubleColon();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeScopedTokenContext* attributeScopedToken();

  class  AttributeNamespaceContext : public antlr4::ParserRuleContext {
  public:
    AttributeNamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeNamespaceContext* attributeNamespace();

  class  AttributeArgumentClauseContext : public antlr4::ParserRuleContext {
  public:
    AttributeArgumentClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParenthesis();
    antlr4::tree::TerminalNode *CloseParenthesis();
    BalancedTokenSequenceContext *balancedTokenSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeArgumentClauseContext* attributeArgumentClause();

  class  BalancedTokenSequenceContext : public antlr4::ParserRuleContext {
  public:
    BalancedTokenSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BalancedTokenContext *balancedToken();
    BalancedTokenSequenceContext *balancedTokenSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedTokenSequenceContext* balancedTokenSequence();
  BalancedTokenSequenceContext* balancedTokenSequence(int precedence);
  class  BalancedTokenContext : public antlr4::ParserRuleContext {
  public:
    BalancedTokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParenthesis();
    antlr4::tree::TerminalNode *CloseParenthesis();
    BalancedTokenSequenceContext *balancedTokenSequence();
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BalancedTokenContext* balancedToken();

  class  InitializerDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    InitializerDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerDeclaratorContext *initializerDeclarator();
    InitializerDeclaratorListContext *initializerDeclaratorList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerDeclaratorListContext* initializerDeclaratorList();
  InitializerDeclaratorListContext* initializerDeclaratorList(int precedence);
  class  InitializerDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    InitializerDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    InitializerContext *initializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerDeclaratorContext* initializerDeclarator();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerDeclaratorContext *pointerDeclarator();
    NoPointerDeclaratorContext *noPointerDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorContext* declarator();

  class  PointerDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PointerDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerOperatorContext *pointerOperator();
    DeclaratorContext *declarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerDeclaratorContext* pointerDeclarator();

  class  NoPointerDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierExpressionContext *identifierExpression();
    antlr4::tree::TerminalNode *Ellipsis();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    antlr4::tree::TerminalNode *OpenParenthesis();
    PointerDeclaratorContext *pointerDeclarator();
    antlr4::tree::TerminalNode *CloseParenthesis();
    NoPointerDeclaratorContext *noPointerDeclarator();
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    ConstantExpressionContext *constantExpression();
    ParametersAndQualifiersContext *parametersAndQualifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoPointerDeclaratorContext* noPointerDeclarator();
  NoPointerDeclaratorContext* noPointerDeclarator(int precedence);
  class  ParametersAndQualifiersContext : public antlr4::ParserRuleContext {
  public:
    ParametersAndQualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionParametersContext *functionParameters();
    FunctionQualifiersContext *functionQualifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersAndQualifiersContext* parametersAndQualifiers();

  class  FunctionParametersContext : public antlr4::ParserRuleContext {
  public:
    FunctionParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenParenthesis();
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    antlr4::tree::TerminalNode *CloseParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionParametersContext* functionParameters();

  class  FunctionQualifiersContext : public antlr4::ParserRuleContext {
  public:
    FunctionQualifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstVolatileQualifierSequenceContext *constVolatileQualifierSequence();
    ReferenceQualifierContext *referenceQualifier();
    NoExceptionSpecifierContext *noExceptionSpecifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionQualifiersContext* functionQualifiers();

  class  TrailingReturnTypeContext : public antlr4::ParserRuleContext {
  public:
    TrailingReturnTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Arrow();
    TypeIdentifierContext *typeIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingReturnTypeContext* trailingReturnType();

  class  PointerOperatorContext : public antlr4::ParserRuleContext {
  public:
    PointerOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Asterisk();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    ConstVolatileQualifierSequenceContext *constVolatileQualifierSequence();
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *DoubleAmpersand();
    NestedNameSpecifierContext *nestedNameSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerOperatorContext* pointerOperator();

  class  ConstVolatileQualifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    ConstVolatileQualifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstVolatileQualifierContext *constVolatileQualifier();
    ConstVolatileQualifierSequenceContext *constVolatileQualifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstVolatileQualifierSequenceContext* constVolatileQualifierSequence();

  class  ConstVolatileQualifierContext : public antlr4::ParserRuleContext {
  public:
    ConstVolatileQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstVolatileQualifierContext* constVolatileQualifier();

  class  ReferenceQualifierContext : public antlr4::ParserRuleContext {
  public:
    ReferenceQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *DoubleAmpersand();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferenceQualifierContext* referenceQualifier();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSequenceContext *typeSpecifierSequence();
    AbstractDeclaratorContext *abstractDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  DefiningTypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    DefiningTypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefiningTypeSpecifierSequenceContext *definingTypeSpecifierSequence();
    AbstractDeclaratorContext *abstractDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefiningTypeIdentifierContext* definingTypeIdentifier();

  class  AbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerAbstractDeclaratorContext *pointerAbstractDeclarator();
    ParametersAndQualifiersContext *parametersAndQualifiers();
    TrailingReturnTypeContext *trailingReturnType();
    NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator();
    AbstractPackDeclaratorContext *abstractPackDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractDeclaratorContext* abstractDeclarator();

  class  PointerAbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    PointerAbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator();
    PointerOperatorContext *pointerOperator();
    PointerAbstractDeclaratorContext *pointerAbstractDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerAbstractDeclaratorContext* pointerAbstractDeclarator();

  class  NoPointerAbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerAbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParametersAndQualifiersContext *parametersAndQualifiers();
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    ConstantExpressionContext *constantExpression();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    antlr4::tree::TerminalNode *OpenParenthesis();
    PointerAbstractDeclaratorContext *pointerAbstractDeclarator();
    antlr4::tree::TerminalNode *CloseParenthesis();
    NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoPointerAbstractDeclaratorContext* noPointerAbstractDeclarator();
  NoPointerAbstractDeclaratorContext* noPointerAbstractDeclarator(int precedence);
  class  AbstractPackDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    AbstractPackDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NoPointerAbstractPackDeclaratorContext *noPointerAbstractPackDeclarator();
    PointerOperatorContext *pointerOperator();
    AbstractPackDeclaratorContext *abstractPackDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractPackDeclaratorContext* abstractPackDeclarator();

  class  NoPointerAbstractPackDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerAbstractPackDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    NoPointerAbstractPackDeclaratorContext *noPointerAbstractPackDeclarator();
    ParametersAndQualifiersContext *parametersAndQualifiers();
    antlr4::tree::TerminalNode *OpenBracket();
    antlr4::tree::TerminalNode *CloseBracket();
    ConstantExpressionContext *constantExpression();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoPointerAbstractPackDeclaratorContext* noPointerAbstractPackDeclarator();
  NoPointerAbstractPackDeclaratorContext* noPointerAbstractPackDeclarator(int precedence);
  class  ParameterDeclarationClauseContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterDeclarationListContext *parameterDeclarationList();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationClauseContext* parameterDeclarationClause();

  class  ParameterDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterDeclarationContext *parameterDeclaration();
    ParameterDeclarationListContext *parameterDeclarationList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationListContext* parameterDeclarationList();
  ParameterDeclarationListContext* parameterDeclarationList(int precedence);
  class  ParameterDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();
    DeclaratorContext *declarator();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    antlr4::tree::TerminalNode *Equal();
    InitializerClauseContext *initializerClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationContext* parameterDeclaration();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDeclaratorContext *functionDeclarator();
    FunctionBodyContext *functionBody();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();
    VirtualSpecifierSequenceContext *virtualSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  FunctionDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierExpressionContext *identifierExpression();
    FunctionParametersContext *functionParameters();
    FunctionQualifiersContext *functionQualifiers();
    TrailingReturnTypeContext *trailingReturnType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclaratorContext* functionDeclarator();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegularFunctionBodyContext *regularFunctionBody();
    FunctionTryBlockContext *functionTryBlock();
    ExplicitlyDefaultedFunctionContext *explicitlyDefaultedFunction();
    DeletedFunctionContext *deletedFunction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionBodyContext* functionBody();

  class  RegularFunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    RegularFunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementContext *compoundStatement();
    ConstructorInitializerContext *constructorInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegularFunctionBodyContext* regularFunctionBody();

  class  ExplicitlyDefaultedFunctionContext : public antlr4::ParserRuleContext {
  public:
    ExplicitlyDefaultedFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitlyDefaultedFunctionContext* explicitlyDefaultedFunction();

  class  DeletedFunctionContext : public antlr4::ParserRuleContext {
  public:
    DeletedFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeletedFunctionContext* deletedFunction();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BraceOrEqualInitializerContext *braceOrEqualInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerContext* initializer();

  class  BraceOrEqualInitializerContext : public antlr4::ParserRuleContext {
  public:
    BraceOrEqualInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Equal();
    InitializerClauseContext *initializerClause();
    BracedInitializerListContext *bracedInitializerList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BraceOrEqualInitializerContext* braceOrEqualInitializer();

  class  InitializerClauseContext : public antlr4::ParserRuleContext {
  public:
    InitializerClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    BracedInitializerListContext *bracedInitializerList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerClauseContext* initializerClause();

  class  InitializerListContext : public antlr4::ParserRuleContext {
  public:
    InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Ellipsis();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerListContext* initializerList();
  InitializerListContext* initializerList(int precedence);
  class  BracedInitializerListContext : public antlr4::ParserRuleContext {
  public:
    BracedInitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenBrace();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *CloseBrace();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BracedInitializerListContext* bracedInitializerList();

  class  ExpressionOrBracedInitializerListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionOrBracedInitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BracedInitializerListContext *bracedInitializerList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionOrBracedInitializerListContext* expressionOrBracedInitializerList();

  class  ClassSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassHeadContext *classHead();
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBrace();
    MemberSpecificationContext *memberSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassSpecifierContext* classSpecifier();

  class  ClassHeadContext : public antlr4::ParserRuleContext {
  public:
    ClassHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassKeyContext *classKey();
    ClassHeadNameContext *classHeadName();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    ClassVirtualSpecifierContext *classVirtualSpecifier();
    BaseClauseContext *baseClause();
    AttributeSpecifierContext *attributeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassHeadContext* classHead();

  class  ClassHeadNameContext : public antlr4::ParserRuleContext {
  public:
    ClassHeadNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    NestedNameSpecifierContext *nestedNameSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassHeadNameContext* classHeadName();

  class  ClassVirtualSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassVirtualSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Final();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassVirtualSpecifierContext* classVirtualSpecifier();

  class  ClassKeyContext : public antlr4::ParserRuleContext {
  public:
    ClassKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Struct();
    antlr4::tree::TerminalNode *Union();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassKeyContext* classKey();

  class  MemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    MemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberDeclarationContext *memberDeclaration();
    MemberSpecificationContext *memberSpecification();
    AccessSpecifierContext *accessSpecifier();
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberSpecificationContext* memberSpecification();

  class  MemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();
    MemberDeclaratorListContext *memberDeclaratorList();
    antlr4::tree::TerminalNode *Semicolon();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    FunctionDefinitionContext *functionDefinition();
    UsingDeclarationContext *usingDeclaration();
    StaticAssertDeclarationContext *staticAssertDeclaration();
    TemplateDeclarationContext *templateDeclaration();
    DeductionGuideContext *deductionGuide();
    AliasDeclarationContext *aliasDeclaration();
    EmptyDeclarationContext *emptyDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberDeclarationContext* memberDeclaration();

  class  MemberDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberDeclaratorContext *memberDeclarator();
    MemberDeclaratorListContext *memberDeclaratorList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberDeclaratorListContext* memberDeclaratorList();
  MemberDeclaratorListContext* memberDeclaratorList(int precedence);
  class  MemberDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    VirtualSpecifierSequenceContext *virtualSpecifierSequence();
    BraceOrEqualInitializerContext *braceOrEqualInitializer();
    antlr4::tree::TerminalNode *Colon();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberDeclaratorContext* memberDeclarator();

  class  VirtualSpecifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    VirtualSpecifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VirtualSpecifierContext *virtualSpecifier();
    VirtualSpecifierSequenceContext *virtualSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtualSpecifierSequenceContext* virtualSpecifierSequence();
  VirtualSpecifierSequenceContext* virtualSpecifierSequence(int precedence);
  class  VirtualSpecifierContext : public antlr4::ParserRuleContext {
  public:
    VirtualSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Override();
    antlr4::tree::TerminalNode *Final();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VirtualSpecifierContext* virtualSpecifier();

  class  PureSpecifierContext : public antlr4::ParserRuleContext {
  public:
    PureSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *Zero();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PureSpecifierContext* pureSpecifier();

  class  BaseClauseContext : public antlr4::ParserRuleContext {
  public:
    BaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    BaseSpecifierListContext *baseSpecifierList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseClauseContext* baseClause();

  class  BaseSpecifierListContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BaseSpecifierContext *baseSpecifier();
    antlr4::tree::TerminalNode *Ellipsis();
    BaseSpecifierListContext *baseSpecifierList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseSpecifierListContext* baseSpecifierList();
  BaseSpecifierListContext* baseSpecifierList(int precedence);
  class  BaseSpecifierContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassOrDecltypeContext *classOrDecltype();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    antlr4::tree::TerminalNode *Virtual();
    AccessSpecifierContext *accessSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseSpecifierContext* baseSpecifier();

  class  ClassOrDecltypeContext : public antlr4::ParserRuleContext {
  public:
    ClassOrDecltypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Template();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();
    DeclarationTypeSpecifierContext *declarationTypeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassOrDecltypeContext* classOrDecltype();

  class  AccessSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AccessSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Public();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessSpecifierContext* accessSpecifier();

  class  ConversionFunctionIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ConversionFunctionIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    ConversionTypeIdentifierContext *conversionTypeIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionFunctionIdentifierContext* conversionFunctionIdentifier();

  class  ConversionTypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ConversionTypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSequenceContext *typeSpecifierSequence();
    ConversionDeclaratorContext *conversionDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionTypeIdentifierContext* conversionTypeIdentifier();

  class  ConversionDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ConversionDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerOperatorContext *pointerOperator();
    ConversionDeclaratorContext *conversionDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionDeclaratorContext* conversionDeclarator();

  class  ConstructorInitializerContext : public antlr4::ParserRuleContext {
  public:
    ConstructorInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    MemberInitializerListContext *memberInitializerList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorInitializerContext* constructorInitializer();

  class  MemberInitializerListContext : public antlr4::ParserRuleContext {
  public:
    MemberInitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberInitializerContext *memberInitializer();
    antlr4::tree::TerminalNode *Ellipsis();
    MemberInitializerListContext *memberInitializerList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberInitializerListContext* memberInitializerList();
  MemberInitializerListContext* memberInitializerList(int precedence);
  class  MemberInitializerContext : public antlr4::ParserRuleContext {
  public:
    MemberInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberInitializerIdentifierContext *memberInitializerIdentifier();
    antlr4::tree::TerminalNode *OpenParenthesis();
    antlr4::tree::TerminalNode *CloseParenthesis();
    ExpressionListContext *expressionList();
    BracedInitializerListContext *bracedInitializerList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberInitializerContext* memberInitializer();

  class  MemberInitializerIdentifierContext : public antlr4::ParserRuleContext {
  public:
    MemberInitializerIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberInitializerIdentifierContext* memberInitializerIdentifier();

  class  OperatorFunctionIdentifierContext : public antlr4::ParserRuleContext {
  public:
    OperatorFunctionIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    AnyOperatorContext *anyOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorFunctionIdentifierContext* operatorFunctionIdentifier();

  class  AnyOperatorContext : public antlr4::ParserRuleContext {
  public:
    AnyOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *OpenBrace();
    antlr4::tree::TerminalNode *CloseBracket();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Asterisk();
    antlr4::tree::TerminalNode *ForwardSlash();
    antlr4::tree::TerminalNode *Percent();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *Ampersand();
    antlr4::tree::TerminalNode *VerticalBar();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *ExclamationMark();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *GreaterThan();
    antlr4::tree::TerminalNode *PlusEqual();
    antlr4::tree::TerminalNode *MinusEqual();
    antlr4::tree::TerminalNode *AsteriskEqual();
    antlr4::tree::TerminalNode *ForwardSlashEqual();
    antlr4::tree::TerminalNode *PercentEqual();
    antlr4::tree::TerminalNode *CaretEqual();
    antlr4::tree::TerminalNode *AmpersandEqual();
    antlr4::tree::TerminalNode *VerticalBarEqual();
    antlr4::tree::TerminalNode *DoubleLessThan();
    DoubleGreaterThanContext *doubleGreaterThan();
    antlr4::tree::TerminalNode *DoubleGreaterThanEqual();
    antlr4::tree::TerminalNode *DoubleLessThanEqual();
    antlr4::tree::TerminalNode *DoubleEqual();
    antlr4::tree::TerminalNode *ExclamationMarkEqual();
    antlr4::tree::TerminalNode *LessThanEqual();
    antlr4::tree::TerminalNode *GreaterThanEqual();
    antlr4::tree::TerminalNode *DoubleAmpersand();
    antlr4::tree::TerminalNode *DoubleVerticalBar();
    antlr4::tree::TerminalNode *DoublePlus();
    antlr4::tree::TerminalNode *DoubleMinus();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *ArrowAsterisk();
    antlr4::tree::TerminalNode *Arrow();
    antlr4::tree::TerminalNode *OpenParenthesis();
    antlr4::tree::TerminalNode *CloseParenthesis();
    antlr4::tree::TerminalNode *OpenBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnyOperatorContext* anyOperator();

  class  LiteralOperatorIdentifierContext : public antlr4::ParserRuleContext {
  public:
    LiteralOperatorIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *UserDefinedStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralOperatorIdentifierContext* literalOperatorIdentifier();

  class  TemplateDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TemplateDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *LessThan();
    TemplateParameterListContext *templateParameterList();
    antlr4::tree::TerminalNode *GreaterThan();
    DeclarationContext *declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateDeclarationContext* templateDeclaration();

  class  TemplateParameterListContext : public antlr4::ParserRuleContext {
  public:
    TemplateParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateParameterContext *templateParameter();
    TemplateParameterListContext *templateParameterList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateParameterListContext* templateParameterList();
  TemplateParameterListContext* templateParameterList(int precedence);
  class  TemplateParameterContext : public antlr4::ParserRuleContext {
  public:
    TemplateParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeParameterContext *typeParameter();
    ParameterDeclarationContext *parameterDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateParameterContext* templateParameter();

  class  TypeParameterContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeParameterKeyContext *typeParameterKey();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Equal();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *LessThan();
    TemplateParameterListContext *templateParameterList();
    antlr4::tree::TerminalNode *GreaterThan();
    IdentifierExpressionContext *identifierExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParameterContext* typeParameter();

  class  TypeParameterKeyContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterKeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *TypeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParameterKeyContext* typeParameterKey();

  class  SimpleTemplateIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleTemplateIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateNameContext *templateName();
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *GreaterThan();
    TemplateArgumentListContext *templateArgumentList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTemplateIdentifierContext* simpleTemplateIdentifier();

  class  TemplateIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TemplateIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();
    OperatorFunctionIdentifierContext *operatorFunctionIdentifier();
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *GreaterThan();
    TemplateArgumentListContext *templateArgumentList();
    LiteralOperatorIdentifierContext *literalOperatorIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateIdentifierContext* templateIdentifier();

  class  TemplateArgumentListContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateArgumentContext *templateArgument();
    antlr4::tree::TerminalNode *Ellipsis();
    TemplateArgumentListContext *templateArgumentList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateArgumentListContext* templateArgumentList();
  TemplateArgumentListContext* templateArgumentList(int precedence);
  class  TemplateArgumentContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateArgumentContext* templateArgument();

  class  TypenameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypenameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TypeName();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();
    antlr4::tree::TerminalNode *Template();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypenameSpecifierContext* typenameSpecifier();

  class  ExplicitInstantiationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitInstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *Extern();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitInstantiationContext* explicitInstantiation();

  class  ExplicitSpecializationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitSpecializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *GreaterThan();
    DeclarationContext *declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitSpecializationContext* explicitSpecialization();

  class  DeductionGuideContext : public antlr4::ParserRuleContext {
  public:
    DeductionGuideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateNameContext *templateName();
    antlr4::tree::TerminalNode *OpenParenthesis();
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    antlr4::tree::TerminalNode *CloseParenthesis();
    antlr4::tree::TerminalNode *Arrow();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();
    antlr4::tree::TerminalNode *Semicolon();
    antlr4::tree::TerminalNode *Explicit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeductionGuideContext* deductionGuide();

  class  TryBlockContext : public antlr4::ParserRuleContext {
  public:
    TryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundStatementContext *compoundStatement();
    HandlerSequenceContext *handlerSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryBlockContext* tryBlock();

  class  FunctionTryBlockContext : public antlr4::ParserRuleContext {
  public:
    FunctionTryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundStatementContext *compoundStatement();
    HandlerSequenceContext *handlerSequence();
    ConstructorInitializerContext *constructorInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTryBlockContext* functionTryBlock();

  class  HandlerSequenceContext : public antlr4::ParserRuleContext {
  public:
    HandlerSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HandlerContext *handler();
    HandlerSequenceContext *handlerSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerSequenceContext* handlerSequence();

  class  HandlerContext : public antlr4::ParserRuleContext {
  public:
    HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *OpenParenthesis();
    ExceptionDeclarationContext *exceptionDeclaration();
    antlr4::tree::TerminalNode *CloseParenthesis();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandlerContext* handler();

  class  ExceptionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSequenceContext *typeSpecifierSequence();
    DeclaratorContext *declarator();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    AbstractDeclaratorContext *abstractDeclarator();
    antlr4::tree::TerminalNode *Ellipsis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionDeclarationContext* exceptionDeclaration();

  class  NoExceptionSpecifierContext : public antlr4::ParserRuleContext {
  public:
    NoExceptionSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NoExcept();
    antlr4::tree::TerminalNode *OpenParenthesis();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *CloseParenthesis();
    antlr4::tree::TerminalNode *Throw();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoExceptionSpecifierContext* noExceptionSpecifier();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();
  IdentifierListContext* identifierList(int precedence);
  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerLiteralContext *integerLiteral();
    antlr4::tree::TerminalNode *FloatingPointLiteral();
    antlr4::tree::TerminalNode *CharacterLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    BooleanLiteralContext *booleanLiteral();
    PointerLiteralContext *pointerLiteral();
    UserDefinedLiteralContext *userDefinedLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  IntegerLiteralContext : public antlr4::ParserRuleContext {
  public:
    IntegerLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Zero();
    antlr4::tree::TerminalNode *IntegerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerLiteralContext* integerLiteral();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *True();
    antlr4::tree::TerminalNode *False();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  PointerLiteralContext : public antlr4::ParserRuleContext {
  public:
    PointerLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Nullptr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerLiteralContext* pointerLiteral();

  class  UserDefinedLiteralContext : public antlr4::ParserRuleContext {
  public:
    UserDefinedLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UserDefinedIntegerLiteral();
    antlr4::tree::TerminalNode *UserDefinedFloatingPointLiteral();
    antlr4::tree::TerminalNode *UserDefinedCharacterLiteral();
    antlr4::tree::TerminalNode *UserDefinedStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserDefinedLiteralContext* userDefinedLiteral();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool captureListSempred(CaptureListContext *_localctx, size_t predicateIndex);
  bool postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex);
  bool noPointerNewDeclaratorSempred(NoPointerNewDeclaratorContext *_localctx, size_t predicateIndex);
  bool pointerManipulationExpressionSempred(PointerManipulationExpressionContext *_localctx, size_t predicateIndex);
  bool multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex);
  bool additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex);
  bool shiftExpressionSempred(ShiftExpressionContext *_localctx, size_t predicateIndex);
  bool relationalExpressionSempred(RelationalExpressionContext *_localctx, size_t predicateIndex);
  bool equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex);
  bool andExpressionSempred(AndExpressionContext *_localctx, size_t predicateIndex);
  bool exclusiveOrExpressionSempred(ExclusiveOrExpressionContext *_localctx, size_t predicateIndex);
  bool inclusiveOrExpressionSempred(InclusiveOrExpressionContext *_localctx, size_t predicateIndex);
  bool logicalAndExpressionSempred(LogicalAndExpressionContext *_localctx, size_t predicateIndex);
  bool logicalOrExpressionSempred(LogicalOrExpressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool statementSequenceSempred(StatementSequenceContext *_localctx, size_t predicateIndex);
  bool declarationSequenceSempred(DeclarationSequenceContext *_localctx, size_t predicateIndex);
  bool enumeratorListSempred(EnumeratorListContext *_localctx, size_t predicateIndex);
  bool enclosingNamespaceSpecifierSempred(EnclosingNamespaceSpecifierContext *_localctx, size_t predicateIndex);
  bool usingDeclaratorListSempred(UsingDeclaratorListContext *_localctx, size_t predicateIndex);
  bool attributeSpecifierSequenceSempred(AttributeSpecifierSequenceContext *_localctx, size_t predicateIndex);
  bool attributeListSempred(AttributeListContext *_localctx, size_t predicateIndex);
  bool balancedTokenSequenceSempred(BalancedTokenSequenceContext *_localctx, size_t predicateIndex);
  bool initializerDeclaratorListSempred(InitializerDeclaratorListContext *_localctx, size_t predicateIndex);
  bool noPointerDeclaratorSempred(NoPointerDeclaratorContext *_localctx, size_t predicateIndex);
  bool noPointerAbstractDeclaratorSempred(NoPointerAbstractDeclaratorContext *_localctx, size_t predicateIndex);
  bool noPointerAbstractPackDeclaratorSempred(NoPointerAbstractPackDeclaratorContext *_localctx, size_t predicateIndex);
  bool parameterDeclarationListSempred(ParameterDeclarationListContext *_localctx, size_t predicateIndex);
  bool initializerListSempred(InitializerListContext *_localctx, size_t predicateIndex);
  bool memberDeclaratorListSempred(MemberDeclaratorListContext *_localctx, size_t predicateIndex);
  bool virtualSpecifierSequenceSempred(VirtualSpecifierSequenceContext *_localctx, size_t predicateIndex);
  bool baseSpecifierListSempred(BaseSpecifierListContext *_localctx, size_t predicateIndex);
  bool memberInitializerListSempred(MemberInitializerListContext *_localctx, size_t predicateIndex);
  bool templateParameterListSempred(TemplateParameterListContext *_localctx, size_t predicateIndex);
  bool templateArgumentListSempred(TemplateArgumentListContext *_localctx, size_t predicateIndex);
  bool identifierListSempred(IdentifierListContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

