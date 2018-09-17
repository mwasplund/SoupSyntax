
// Generated from Grammar\CppParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  CppParser : public antlr4::Parser {
public:
  enum {
    BlockComment = 1, LineComment = 2, Whitespace = 3, Newline = 4, AlignAs = 5, 
    AlignOf = 6, Asm = 7, Auto = 8, Bool = 9, Break = 10, Case = 11, Catch = 12, 
    Char = 13, Char16 = 14, Char32 = 15, Class = 16, Const = 17, ConstExpr = 18, 
    ConstCast = 19, Continue = 20, DeclType = 21, Default = 22, Delete = 23, 
    Do = 24, Double = 25, DynamicCast = 26, Else = 27, Enum = 28, Explicit = 29, 
    Export = 30, Extern = 31, False = 32, Float = 33, For = 34, Friend = 35, 
    GoTo = 36, If = 37, Inline = 38, Int = 39, Long = 40, Mutable = 41, 
    Namespace = 42, New = 43, NoExcept = 44, Nullptr = 45, Operator = 46, 
    Private = 47, Protected = 48, Public = 49, Register = 50, ReinterpretCast = 51, 
    Return = 52, Short = 53, Signed = 54, SizeOf = 55, Static = 56, StaticAssert = 57, 
    StaticCast = 58, Struct = 59, Switch = 60, Template = 61, This = 62, 
    ThreadLocal = 63, Throw = 64, True = 65, Try = 66, TypeDef = 67, TypeId = 68, 
    TypeName = 69, Union = 70, Unsigned = 71, Using = 72, Virtual = 73, 
    Void = 74, Volatile = 75, WChar = 76, While = 77, Override = 78, Final = 79, 
    LeftBrace = 80, RightBrace = 81, LeftBracket = 82, RightBracket = 83, 
    LeftParenthesis = 84, RightParenthesis = 85, Semicolon = 86, Colon = 87, 
    Ellipsis = 88, QuestionMark = 89, DoubleColon = 90, Period = 91, PeriodAsterisk = 92, 
    Plus = 93, Minus = 94, Asterisk = 95, ForwardSlash = 96, Percent = 97, 
    Caret = 98, Ampersand = 99, VerticalBar = 100, Tilde = 101, ExclamationMark = 102, 
    Equal = 103, LessThan = 104, GreaterThan = 105, PlusEqual = 106, MinusEqual = 107, 
    AsteriskEqual = 108, ForwardSlashEqual = 109, PercentEqual = 110, CaretEqual = 111, 
    AmpersandEqual = 112, VerticalBarEqual = 113, DoubleLessThan = 114, 
    DoubleGreaterThan = 115, DoubleLessThanEqual = 116, DoubleGreaterThanEqual = 117, 
    DoubleEqual = 118, ExclamationMarkEqual = 119, LessThanEqual = 120, 
    GreaterThanEqual = 121, DoubleAmpersand = 122, DoubleVerticalBar = 123, 
    DoublePlus = 124, DoubleMinus = 125, Comma = 126, ArrowAsterisk = 127, 
    Arrow = 128, Zero = 129, IntegerLiteral = 130, FloatingPointLiteral = 131, 
    CharacterLiteral = 132, StringLiteral = 133, UserDefinedIntegerLiteral = 134, 
    UserDefinedFloatingPointLiteral = 135, UserDefinedCharacterLiteral = 136, 
    UserDefinedStringLiteral = 137, Identifier = 138
  };

  enum {
    RuleTypedefName = 0, RuleNamespaceName = 1, RuleNamespaceAlias = 2, 
    RuleClassName = 3, RuleEnumName = 4, RuleTemplateName = 5, RuleTranslationUnit = 6, 
    RulePrimaryExpression = 7, RuleIdentifierExpression = 8, RuleUnqualifiedIdentifier = 9, 
    RuleQualifiedIdentifier = 10, RuleNestedNameSpecifier = 11, RuleLambdaExpression = 12, 
    RuleLambdaIntroducer = 13, RuleLambdaDeclarator = 14, RuleLambdaCapture = 15, 
    RuleCaptureDefault = 16, RuleCaptureList = 17, RuleCapture = 18, RuleSimpleCapture = 19, 
    RuleInitializerCapture = 20, RuleFoldExpression = 21, RuleFoldOperator = 22, 
    RulePostfixExpression = 23, RuleExpressionList = 24, RulePseudoDestructorName = 25, 
    RuleUnaryExpression = 26, RuleUnaryOperator = 27, RuleNewExpression = 28, 
    RuleNewPlacement = 29, RuleNewTypeIdentifier = 30, RuleNewDeclarator = 31, 
    RuleNoPointerNewDeclarator = 32, RuleNewInitializer = 33, RuleDeleteExpression = 34, 
    RuleNoExceptionExpression = 35, RuleCastExpression = 36, RulePointerManipulationExpression = 37, 
    RuleMultiplicativeExpression = 38, RuleAdditiveExpression = 39, RuleShiftExpression = 40, 
    RuleRelationalExpression = 41, RuleEqualityExpression = 42, RuleAndExpression = 43, 
    RuleExclusiveOrExpression = 44, RuleInclusiveOrExpression = 45, RuleLogicalAndExpression = 46, 
    RuleLogicalOrExpression = 47, RuleConditionalExpression = 48, RuleThrowExpression = 49, 
    RuleAssignmentExpression = 50, RuleAssignmentOperator = 51, RuleExpression = 52, 
    RuleConstantExpression = 53, RuleStatement = 54, RuleInitializerStatement = 55, 
    RuleCondition = 56, RuleLabeledStatement = 57, RuleExpressionStatement = 58, 
    RuleCompoundStatement = 59, RuleStatementSequence = 60, RuleSelectionStatement = 61, 
    RuleIterationStatement = 62, RuleForInitializerStatement = 63, RuleForRangeDeclaration = 64, 
    RuleForRangeInitializer = 65, RuleJumpStatement = 66, RuleDeclarationStatement = 67, 
    RuleDeclarationSequence = 68, RuleDeclaration = 69, RuleBlockDeclaration = 70, 
    RuleNoDeclarationSpecifierFunctionDeclaration = 71, RuleAliasDeclaration = 72, 
    RuleSimpleDeclaration = 73, RuleStaticAssertDeclaration = 74, RuleEmptyDeclaration = 75, 
    RuleAttributeDeclaration = 76, RuleDeclarationSpecifier = 77, RuleDeclarationSpecifierSequence = 78, 
    RuleStorageClassSpecifier = 79, RuleFunctionSpecifier = 80, RuleTypeSpecifier = 81, 
    RuleTypeSpecifierSequence = 82, RuleDefiningTypeSpecifier = 83, RuleDefiningTypeSpecifierSequence = 84, 
    RuleSimpleTypeSpecifier = 85, RuleTypeName = 86, RuleDeclarationTypeSpecifier = 87, 
    RuleElaboratedTypeSpecifier = 88, RuleEnumSpecifier = 89, RuleEnumHead = 90, 
    RuleEnumHeadName = 91, RuleOpaqueEnumDeclaration = 92, RuleEnumKey = 93, 
    RuleEnumBase = 94, RuleEnumeratorList = 95, RuleEnumeratorDefinition = 96, 
    RuleEnumerator = 97, RuleNamespaceDefinition = 98, RuleNamedNamespaceDefinition = 99, 
    RuleUnnamedNamespaceDefinition = 100, RuleNestedNamespaceDefinition = 101, 
    RuleEnclosingNamespaceSpecifier = 102, RuleNamespaceBody = 103, RuleNamespaceAliasDefinition = 104, 
    RuleQualifiedNamespaceSpecifier = 105, RuleUsingDeclaration = 106, RuleUsingDeclaratorList = 107, 
    RuleUsingDeclarator = 108, RuleUsingDirective = 109, RuleAsmDefinition = 110, 
    RuleLinkageSpecification = 111, RuleAttributeSpecifierSequence = 112, 
    RuleAttributeSpecifier = 113, RuleAlignmentSpecifier = 114, RuleAttributeUsingPrefix = 115, 
    RuleAttributeList = 116, RuleAttribute = 117, RuleAttributeToken = 118, 
    RuleAttributeScopedToken = 119, RuleAttributeNamespace = 120, RuleAttributeArgumentClause = 121, 
    RuleBalancedTokenSequence = 122, RuleBalancedToken = 123, RuleInitializerDeclaratorList = 124, 
    RuleInitializerDeclarator = 125, RuleDeclarator = 126, RulePointerDeclarator = 127, 
    RuleNoPointerDeclarator = 128, RuleParametersAndQualifiers = 129, RuleFunctionParameters = 130, 
    RuleFunctionQualifiers = 131, RuleTrailingReturnType = 132, RulePointerOperator = 133, 
    RuleConstVolatileQualifierSequence = 134, RuleConstVolatileQualifier = 135, 
    RuleReferenceQualifier = 136, RuleTypeIdentifier = 137, RuleDefiningTypeIdentifier = 138, 
    RuleAbstractDeclarator = 139, RulePointerAbstractDeclarator = 140, RuleNoPointerAbstractDeclarator = 141, 
    RuleAbstractPackDeclarator = 142, RuleNoPointerAbstractPackDeclarator = 143, 
    RuleParameterDeclarationClause = 144, RuleParameterDeclarationList = 145, 
    RuleParameterDeclaration = 146, RuleFunctionDefinition = 147, RuleFunctionDeclarator = 148, 
    RuleFunctionBody = 149, RuleRegularFunctionBody = 150, RuleExplicitlyDefaultedFunction = 151, 
    RuleDeletedFunction = 152, RuleInitializer = 153, RuleBraceOrEqualInitializer = 154, 
    RuleInitializerClause = 155, RuleInitializerList = 156, RuleBracedInitializerList = 157, 
    RuleExpressionOrBracedInitializerList = 158, RuleClassSpecifier = 159, 
    RuleClassHead = 160, RuleClassHeadName = 161, RuleClassVirtualSpecifier = 162, 
    RuleClassKey = 163, RuleMemberSpecification = 164, RuleMemberDeclaration = 165, 
    RuleMemberDeclaratorList = 166, RuleMemberDeclarator = 167, RuleVirtualSpecifierSequence = 168, 
    RuleVirtualSpecifier = 169, RulePureSpecifier = 170, RuleBaseClause = 171, 
    RuleBaseSpecifierList = 172, RuleBaseSpecifier = 173, RuleClassOrDecltype = 174, 
    RuleAccessSpecifier = 175, RuleConversionFunctionIdentifier = 176, RuleConversionTypeIdentifier = 177, 
    RuleConversionDeclarator = 178, RuleConstructorInitializer = 179, RuleMemberInitializerList = 180, 
    RuleMemberInitializer = 181, RuleMemberInitializerIdentifier = 182, 
    RuleOperatorFunctionIdentifier = 183, RuleAnyOperator = 184, RuleLiteralOperatorIdentifier = 185, 
    RuleTemplateDeclaration = 186, RuleTemplateParameterList = 187, RuleTemplateParameter = 188, 
    RuleTypeParameter = 189, RuleTypeParameterKey = 190, RuleSimpleTemplateIdentifier = 191, 
    RuleTemplateIdentifier = 192, RuleTemplateArgumentList = 193, RuleTemplateArgument = 194, 
    RuleTypenameSpecifier = 195, RuleExplicitInstantiation = 196, RuleExplicitSpecialization = 197, 
    RuleDeductionGuide = 198, RuleTryBlock = 199, RuleFunctionTryBlock = 200, 
    RuleHandlerSequence = 201, RuleHandler = 202, RuleExceptionDeclaration = 203, 
    RuleNoExceptionSpecifier = 204, RuleIdentifierList = 205, RuleLiteral = 206, 
    RuleIntegerLiteral = 207, RuleBooleanLiteral = 208, RulePointerLiteral = 209, 
    RuleUserDefinedLiteral = 210
  };

  CppParser(antlr4::TokenStream *input);
  ~CppParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class TypedefNameContext;
  class NamespaceNameContext;
  class NamespaceAliasContext;
  class ClassNameContext;
  class EnumNameContext;
  class TemplateNameContext;
  class TranslationUnitContext;
  class PrimaryExpressionContext;
  class IdentifierExpressionContext;
  class UnqualifiedIdentifierContext;
  class QualifiedIdentifierContext;
  class NestedNameSpecifierContext;
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
  class DeclarationSpecifierContext;
  class DeclarationSpecifierSequenceContext;
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

  class  TypedefNameContext : public antlr4::ParserRuleContext {
  public:
    TypedefNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypedefNameContext* typedefName();

  class  NamespaceNameContext : public antlr4::ParserRuleContext {
  public:
    NamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    NamespaceAliasContext *namespaceAlias();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamespaceNameContext* namespaceName();

  class  NamespaceAliasContext : public antlr4::ParserRuleContext {
  public:
    NamespaceAliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  ClassNameContext* className();

  class  EnumNameContext : public antlr4::ParserRuleContext {
  public:
    EnumNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumNameContext* enumName();

  class  TemplateNameContext : public antlr4::ParserRuleContext {
  public:
    TemplateNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  TranslationUnitContext* translationUnit();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParenthesis();
    IdentifierExpressionContext *identifierExpression();
    LambdaExpressionContext *lambdaExpression();
    FoldExpressionContext *foldExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  QualifiedIdentifierContext* qualifiedIdentifier();

  class  NestedNameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    NestedNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DoubleColon();
    TypeNameContext *typeName();
    NamespaceNameContext *namespaceName();
    DeclarationTypeSpecifierContext *declarationTypeSpecifier();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();
    antlr4::tree::TerminalNode *Template();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NestedNameSpecifierContext* nestedNameSpecifier();
  NestedNameSpecifierContext* nestedNameSpecifier(int precedence);
  class  LambdaExpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaIntroducerContext *lambdaIntroducer();
    CompoundStatementContext *compoundStatement();
    LambdaDeclaratorContext *lambdaDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaExpressionContext* lambdaExpression();

  class  LambdaIntroducerContext : public antlr4::ParserRuleContext {
  public:
    LambdaIntroducerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    LambdaCaptureContext *lambdaCapture();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaIntroducerContext* lambdaIntroducer();

  class  LambdaDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    LambdaDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParenthesis();
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    antlr4::tree::TerminalNode *RightParenthesis();
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();
    NoExceptionSpecifierContext *noExceptionSpecifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    TrailingReturnTypeContext *trailingReturnType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  InitializerCaptureContext* initializerCapture();

  class  FoldExpressionContext : public antlr4::ParserRuleContext {
  public:
    FoldExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParenthesis();
    std::vector<CastExpressionContext *> castExpression();
    CastExpressionContext* castExpression(size_t i);
    std::vector<FoldOperatorContext *> foldOperator();
    FoldOperatorContext* foldOperator(size_t i);
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *RightParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    antlr4::tree::TerminalNode *DoubleGreaterThan();
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
   
  };

  FoldOperatorContext* foldOperator();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *RightParenthesis();
    ExpressionListContext *expressionList();
    TypenameSpecifierContext *typenameSpecifier();
    BracedInitializerListContext *bracedInitializerList();
    antlr4::tree::TerminalNode *DynamicCast();
    antlr4::tree::TerminalNode *LessThan();
    std::vector<TypeIdentifierContext *> typeIdentifier();
    TypeIdentifierContext* typeIdentifier(size_t i);
    antlr4::tree::TerminalNode *GreaterThan();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *StaticCast();
    antlr4::tree::TerminalNode *ReinterpretCast();
    antlr4::tree::TerminalNode *ConstCast();
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *LeftBracket();
    ExpressionOrBracedInitializerListContext *expressionOrBracedInitializerList();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Period();
    IdentifierExpressionContext *identifierExpression();
    antlr4::tree::TerminalNode *Template();
    antlr4::tree::TerminalNode *Arrow();
    PseudoDestructorNameContext *pseudoDestructorName();
    antlr4::tree::TerminalNode *DoublePlus();
    antlr4::tree::TerminalNode *DoubleMinus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    antlr4::tree::TerminalNode *LeftParenthesis();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *AlignOf();
    NoExceptionExpressionContext *noExceptionExpression();
    NewExpressionContext *newExpression();
    DeleteExpressionContext *deleteExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    antlr4::tree::TerminalNode *LeftParenthesis();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *RightParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NewExpressionContext* newExpression();

  class  NewPlacementContext : public antlr4::ParserRuleContext {
  public:
    NewPlacementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParenthesis();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RightParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  NewDeclaratorContext* newDeclarator();

  class  NoPointerNewDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerNewDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightBracket();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    NoPointerNewDeclaratorContext *noPointerNewDeclarator();
    ConstantExpressionContext *constantExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NoPointerNewDeclaratorContext* noPointerNewDeclarator();
  NoPointerNewDeclaratorContext* noPointerNewDeclarator(int precedence);
  class  NewInitializerContext : public antlr4::ParserRuleContext {
  public:
    NewInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *RightParenthesis();
    ExpressionListContext *expressionList();
    BracedInitializerListContext *bracedInitializerList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NewInitializerContext* newInitializer();

  class  DeleteExpressionContext : public antlr4::ParserRuleContext {
  public:
    DeleteExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Delete();
    CastExpressionContext *castExpression();
    antlr4::tree::TerminalNode *DoubleColon();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeleteExpressionContext* deleteExpression();

  class  NoExceptionExpressionContext : public antlr4::ParserRuleContext {
  public:
    NoExceptionExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NoExcept();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NoExceptionExpressionContext* noExceptionExpression();

  class  CastExpressionContext : public antlr4::ParserRuleContext {
  public:
    CastExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *LeftParenthesis();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *RightParenthesis();
    CastExpressionContext *castExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    antlr4::tree::TerminalNode *DoubleGreaterThan();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  ExpressionStatementContext* expressionStatement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StatementSequenceContext *statementSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  StatementSequenceContext* statementSequence();
  StatementSequenceContext* statementSequence(int precedence);
  class  SelectionStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParenthesis();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *ConstExpr();
    InitializerStatementContext *initializerStatement();
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Switch();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectionStatementContext* selectionStatement();

  class  IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParenthesis();
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
   
  };

  IterationStatementContext* iterationStatement();

  class  ForInitializerStatementContext : public antlr4::ParserRuleContext {
  public:
    ForInitializerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();
    DeclaratorContext *declarator();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    antlr4::tree::TerminalNode *LeftBracket();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *RightBracket();
    ReferenceQualifierContext *referenceQualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  ForRangeDeclarationContext* forRangeDeclaration();

  class  ForRangeInitializerContext : public antlr4::ParserRuleContext {
  public:
    ForRangeInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionOrBracedInitializerListContext *expressionOrBracedInitializerList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  JumpStatementContext* jumpStatement();

  class  DeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDeclarationContext *blockDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    antlr4::tree::TerminalNode *LeftBracket();
    IdentifierListContext *identifierList();
    antlr4::tree::TerminalNode *RightBracket();
    InitializerContext *initializer();
    ReferenceQualifierContext *referenceQualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleDeclarationContext* simpleDeclaration();

  class  StaticAssertDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StaticAssertDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StaticAssert();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *Semicolon();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StaticAssertDeclarationContext* staticAssertDeclaration();

  class  EmptyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EmptyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  AttributeDeclarationContext* attributeDeclaration();

  class  DeclarationSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DeclarationSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StorageClassSpecifierContext *storageClassSpecifier();
    DefiningTypeSpecifierContext *definingTypeSpecifier();
    FunctionSpecifierContext *functionSpecifier();
    antlr4::tree::TerminalNode *Friend();
    antlr4::tree::TerminalNode *TypeDef();
    antlr4::tree::TerminalNode *ConstExpr();
    antlr4::tree::TerminalNode *Inline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationSpecifierContext* declarationSpecifier();

  class  DeclarationSpecifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    DeclarationSpecifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSpecifierContext *declarationSpecifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationSpecifierSequenceContext* declarationSpecifierSequence();

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
   
  };

  FunctionSpecifierContext* functionSpecifier();

  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    ElaboratedTypeSpecifierContext *elaboratedTypeSpecifier();
    TypenameSpecifierContext *typenameSpecifier();
    ConstVolatileQualifierContext *constVolatileQualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  TypeSpecifierSequenceContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierContext *typeSpecifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    TypeSpecifierSequenceContext *typeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  DefiningTypeSpecifierSequenceContext* definingTypeSpecifierSequence();

  class  SimpleTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Template();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();
    TemplateNameContext *templateName();
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
   
  };

  SimpleTypeSpecifierContext* simpleTypeSpecifier();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    EnumNameContext *enumName();
    TypedefNameContext *typedefName();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNameContext* typeName();

  class  DeclarationTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DeclarationTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DeclType();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *Auto();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  ElaboratedTypeSpecifierContext* elaboratedTypeSpecifier();

  class  EnumSpecifierContext : public antlr4::ParserRuleContext {
  public:
    EnumSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumHeadContext *enumHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    EnumeratorListContext *enumeratorList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  NamespaceDefinitionContext* namespaceDefinition();

  class  NamedNamespaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamedNamespaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftBrace();
    NamespaceBodyContext *namespaceBody();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Inline();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedNamespaceDefinitionContext* namedNamespaceDefinition();

  class  UnnamedNamespaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    UnnamedNamespaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *LeftBrace();
    NamespaceBodyContext *namespaceBody();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Inline();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    antlr4::tree::TerminalNode *LeftBrace();
    NamespaceBodyContext *namespaceBody();
    antlr4::tree::TerminalNode *RightBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NestedNamespaceDefinitionContext* nestedNamespaceDefinition();

  class  EnclosingNamespaceSpecifierContext : public antlr4::ParserRuleContext {
  public:
    EnclosingNamespaceSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    EnclosingNamespaceSpecifierContext *enclosingNamespaceSpecifier();
    antlr4::tree::TerminalNode *DoubleColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnclosingNamespaceSpecifierContext* enclosingNamespaceSpecifier();

  class  NamespaceBodyContext : public antlr4::ParserRuleContext {
  public:
    NamespaceBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSequenceContext *declarationSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  UsingDirectiveContext* usingDirective();

  class  AsmDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AsmDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Asm();
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *Semicolon();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AsmDefinitionContext* asmDefinition();

  class  LinkageSpecificationContext : public antlr4::ParserRuleContext {
  public:
    LinkageSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    DeclarationSequenceContext *declarationSequence();
    DeclarationContext *declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  AttributeSpecifierSequenceContext* attributeSpecifierSequence();
  AttributeSpecifierSequenceContext* attributeSpecifierSequence(int precedence);
  class  AttributeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LeftBracket();
    antlr4::tree::TerminalNode* LeftBracket(size_t i);
    AttributeListContext *attributeList();
    std::vector<antlr4::tree::TerminalNode *> RightBracket();
    antlr4::tree::TerminalNode* RightBracket(size_t i);
    AttributeUsingPrefixContext *attributeUsingPrefix();
    AlignmentSpecifierContext *alignmentSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeSpecifierContext* attributeSpecifier();

  class  AlignmentSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AlignmentSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AlignAs();
    antlr4::tree::TerminalNode *LeftParenthesis();
    TypeIdentifierContext *typeIdentifier();
    std::vector<antlr4::tree::TerminalNode *> RightParenthesis();
    antlr4::tree::TerminalNode* RightParenthesis(size_t i);
    antlr4::tree::TerminalNode *Ellipsis();
    ConstantExpressionContext *constantExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  AttributeScopedTokenContext* attributeScopedToken();

  class  AttributeNamespaceContext : public antlr4::ParserRuleContext {
  public:
    AttributeNamespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeNamespaceContext* attributeNamespace();

  class  AttributeArgumentClauseContext : public antlr4::ParserRuleContext {
  public:
    AttributeArgumentClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *RightParenthesis();
    BalancedTokenSequenceContext *balancedTokenSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  BalancedTokenSequenceContext* balancedTokenSequence();
  BalancedTokenSequenceContext* balancedTokenSequence(int precedence);
  class  BalancedTokenContext : public antlr4::ParserRuleContext {
  public:
    BalancedTokenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *RightParenthesis();
    BalancedTokenSequenceContext *balancedTokenSequence();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  PointerDeclaratorContext* pointerDeclarator();

  class  NoPointerDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierExpressionContext *identifierExpression();
    antlr4::tree::TerminalNode *Ellipsis();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    antlr4::tree::TerminalNode *LeftParenthesis();
    PointerDeclaratorContext *pointerDeclarator();
    antlr4::tree::TerminalNode *RightParenthesis();
    NoPointerDeclaratorContext *noPointerDeclarator();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantExpressionContext *constantExpression();
    ParametersAndQualifiersContext *parametersAndQualifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  ParametersAndQualifiersContext* parametersAndQualifiers();

  class  FunctionParametersContext : public antlr4::ParserRuleContext {
  public:
    FunctionParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParenthesis();
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    antlr4::tree::TerminalNode *RightParenthesis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  PointerAbstractDeclaratorContext* pointerAbstractDeclarator();

  class  NoPointerAbstractDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerAbstractDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParametersAndQualifiersContext *parametersAndQualifiers();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantExpressionContext *constantExpression();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    antlr4::tree::TerminalNode *LeftParenthesis();
    PointerAbstractDeclaratorContext *pointerAbstractDeclarator();
    antlr4::tree::TerminalNode *RightParenthesis();
    NoPointerAbstractDeclaratorContext *noPointerAbstractDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  AbstractPackDeclaratorContext* abstractPackDeclarator();

  class  NoPointerAbstractPackDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    NoPointerAbstractPackDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    NoPointerAbstractPackDeclaratorContext *noPointerAbstractPackDeclarator();
    ParametersAndQualifiersContext *parametersAndQualifiers();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantExpressionContext *constantExpression();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    AbstractDeclaratorContext *abstractDeclarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  DeletedFunctionContext* deletedFunction();

  class  InitializerContext : public antlr4::ParserRuleContext {
  public:
    InitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BraceOrEqualInitializerContext *braceOrEqualInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  InitializerListContext* initializerList();
  InitializerListContext* initializerList(int precedence);
  class  BracedInitializerListContext : public antlr4::ParserRuleContext {
  public:
    BracedInitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  ExpressionOrBracedInitializerListContext* expressionOrBracedInitializerList();

  class  ClassSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassHeadContext *classHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    MemberSpecificationContext *memberSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  ClassHeadNameContext* classHeadName();

  class  ClassVirtualSpecifierContext : public antlr4::ParserRuleContext {
  public:
    ClassVirtualSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Final();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  MemberSpecificationContext* memberSpecification();

  class  MemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semicolon();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();
    DeclarationSpecifierSequenceContext *declarationSpecifierSequence();
    MemberDeclaratorListContext *memberDeclaratorList();
    FunctionDefinitionContext *functionDefinition();
    UsingDeclarationContext *usingDeclaration();
    StaticAssertDeclarationContext *staticAssertDeclaration();
    TemplateDeclarationContext *templateDeclaration();
    DeductionGuideContext *deductionGuide();
    AliasDeclarationContext *aliasDeclaration();
    EmptyDeclarationContext *emptyDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  MemberDeclaratorListContext* memberDeclaratorList();
  MemberDeclaratorListContext* memberDeclaratorList(int precedence);
  class  MemberDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclaratorContext *declarator();
    VirtualSpecifierSequenceContext *virtualSpecifierSequence();
    PureSpecifierContext *pureSpecifier();
    BraceOrEqualInitializerContext *braceOrEqualInitializer();
    antlr4::tree::TerminalNode *Colon();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSequenceContext *attributeSpecifierSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  MemberInitializerListContext* memberInitializerList();
  MemberInitializerListContext* memberInitializerList(int precedence);
  class  MemberInitializerContext : public antlr4::ParserRuleContext {
  public:
    MemberInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberInitializerIdentifierContext *> memberInitializerIdentifier();
    MemberInitializerIdentifierContext* memberInitializerIdentifier(size_t i);
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *RightParenthesis();
    BracedInitializerListContext *bracedInitializerList();
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberInitializerContext* memberInitializer();

  class  MemberInitializerIdentifierContext : public antlr4::ParserRuleContext {
  public:
    MemberInitializerIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassOrDecltypeContext *classOrDecltype();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  OperatorFunctionIdentifierContext* operatorFunctionIdentifier();

  class  AnyOperatorContext : public antlr4::ParserRuleContext {
  public:
    AnyOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBracket();
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
    antlr4::tree::TerminalNode *DoubleGreaterThan();
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
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *LeftBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  TemplateArgumentListContext* templateArgumentList();
  TemplateArgumentListContext* templateArgumentList(int precedence);
  class  TemplateArgumentContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantExpressionContext *constantExpression();
    TypeIdentifierContext *typeIdentifier();
    IdentifierExpressionContext *identifierExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  ExplicitSpecializationContext* explicitSpecialization();

  class  DeductionGuideContext : public antlr4::ParserRuleContext {
  public:
    DeductionGuideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateNameContext *templateName();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ParameterDeclarationClauseContext *parameterDeclarationClause();
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *Arrow();
    SimpleTemplateIdentifierContext *simpleTemplateIdentifier();
    antlr4::tree::TerminalNode *Semicolon();
    antlr4::tree::TerminalNode *Explicit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  HandlerSequenceContext* handlerSequence();

  class  HandlerContext : public antlr4::ParserRuleContext {
  public:
    HandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ExceptionDeclarationContext *exceptionDeclaration();
    antlr4::tree::TerminalNode *RightParenthesis();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  ExceptionDeclarationContext* exceptionDeclaration();

  class  NoExceptionSpecifierContext : public antlr4::ParserRuleContext {
  public:
    NoExceptionSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NoExcept();
    antlr4::tree::TerminalNode *LeftParenthesis();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *Throw();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  PointerLiteralContext : public antlr4::ParserRuleContext {
  public:
    PointerLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Nullptr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  UserDefinedLiteralContext* userDefinedLiteral();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx, size_t predicateIndex);
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

