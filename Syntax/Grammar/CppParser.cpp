
// Generated from Grammar\CppParser.g4 by ANTLR 4.7.1


#include "CppParserListener.h"

#include "CppParser.h"


using namespace antlrcpp;
using namespace antlr4;

CppParser::CppParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CppParser::~CppParser() {
  delete _interpreter;
}

std::string CppParser::getGrammarFileName() const {
  return "CppParser.g4";
}

const std::vector<std::string>& CppParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CppParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TypedefNameContext ------------------------------------------------------------------

CppParser::TypedefNameContext::TypedefNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::TypedefNameContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}


size_t CppParser::TypedefNameContext::getRuleIndex() const {
  return CppParser::RuleTypedefName;
}

void CppParser::TypedefNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedefName(this);
}

void CppParser::TypedefNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedefName(this);
}

CppParser::TypedefNameContext* CppParser::typedefName() {
  TypedefNameContext *_localctx = _tracker.createInstance<TypedefNameContext>(_ctx, getState());
  enterRule(_localctx, 0, CppParser::RuleTypedefName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(422);
    match(CppParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceNameContext ------------------------------------------------------------------

CppParser::NamespaceNameContext::NamespaceNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NamespaceNameContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::NamespaceAliasContext* CppParser::NamespaceNameContext::namespaceAlias() {
  return getRuleContext<CppParser::NamespaceAliasContext>(0);
}


size_t CppParser::NamespaceNameContext::getRuleIndex() const {
  return CppParser::RuleNamespaceName;
}

void CppParser::NamespaceNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceName(this);
}

void CppParser::NamespaceNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceName(this);
}

CppParser::NamespaceNameContext* CppParser::namespaceName() {
  NamespaceNameContext *_localctx = _tracker.createInstance<NamespaceNameContext>(_ctx, getState());
  enterRule(_localctx, 2, CppParser::RuleNamespaceName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(426);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(424);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(425);
      namespaceAlias();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceAliasContext ------------------------------------------------------------------

CppParser::NamespaceAliasContext::NamespaceAliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NamespaceAliasContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}


size_t CppParser::NamespaceAliasContext::getRuleIndex() const {
  return CppParser::RuleNamespaceAlias;
}

void CppParser::NamespaceAliasContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceAlias(this);
}

void CppParser::NamespaceAliasContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceAlias(this);
}

CppParser::NamespaceAliasContext* CppParser::namespaceAlias() {
  NamespaceAliasContext *_localctx = _tracker.createInstance<NamespaceAliasContext>(_ctx, getState());
  enterRule(_localctx, 4, CppParser::RuleNamespaceAlias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    match(CppParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassNameContext ------------------------------------------------------------------

CppParser::ClassNameContext::ClassNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ClassNameContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::ClassNameContext::simpleTemplateIdentifier() {
  return getRuleContext<CppParser::SimpleTemplateIdentifierContext>(0);
}


size_t CppParser::ClassNameContext::getRuleIndex() const {
  return CppParser::RuleClassName;
}

void CppParser::ClassNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassName(this);
}

void CppParser::ClassNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassName(this);
}

CppParser::ClassNameContext* CppParser::className() {
  ClassNameContext *_localctx = _tracker.createInstance<ClassNameContext>(_ctx, getState());
  enterRule(_localctx, 6, CppParser::RuleClassName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(432);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(430);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(431);
      simpleTemplateIdentifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumNameContext ------------------------------------------------------------------

CppParser::EnumNameContext::EnumNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::EnumNameContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}


size_t CppParser::EnumNameContext::getRuleIndex() const {
  return CppParser::RuleEnumName;
}

void CppParser::EnumNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumName(this);
}

void CppParser::EnumNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumName(this);
}

CppParser::EnumNameContext* CppParser::enumName() {
  EnumNameContext *_localctx = _tracker.createInstance<EnumNameContext>(_ctx, getState());
  enterRule(_localctx, 8, CppParser::RuleEnumName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(CppParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateNameContext ------------------------------------------------------------------

CppParser::TemplateNameContext::TemplateNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::TemplateNameContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}


size_t CppParser::TemplateNameContext::getRuleIndex() const {
  return CppParser::RuleTemplateName;
}

void CppParser::TemplateNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateName(this);
}

void CppParser::TemplateNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateName(this);
}

CppParser::TemplateNameContext* CppParser::templateName() {
  TemplateNameContext *_localctx = _tracker.createInstance<TemplateNameContext>(_ctx, getState());
  enterRule(_localctx, 10, CppParser::RuleTemplateName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    match(CppParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TranslationUnitContext ------------------------------------------------------------------

CppParser::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::TranslationUnitContext::EOF() {
  return getToken(CppParser::EOF, 0);
}

CppParser::DeclarationSequenceContext* CppParser::TranslationUnitContext::declarationSequence() {
  return getRuleContext<CppParser::DeclarationSequenceContext>(0);
}


size_t CppParser::TranslationUnitContext::getRuleIndex() const {
  return CppParser::RuleTranslationUnit;
}

void CppParser::TranslationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationUnit(this);
}

void CppParser::TranslationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationUnit(this);
}

CppParser::TranslationUnitContext* CppParser::translationUnit() {
  TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, getState());
  enterRule(_localctx, 12, CppParser::RuleTranslationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
      | (1ULL << CppParser::Asm)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::Class)
      | (1ULL << CppParser::Const)
      | (1ULL << CppParser::ConstExpr)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::Enum)
      | (1ULL << CppParser::Explicit)
      | (1ULL << CppParser::Extern)
      | (1ULL << CppParser::Float)
      | (1ULL << CppParser::Friend)
      | (1ULL << CppParser::Inline)
      | (1ULL << CppParser::Int)
      | (1ULL << CppParser::Long)
      | (1ULL << CppParser::Mutable)
      | (1ULL << CppParser::Namespace)
      | (1ULL << CppParser::Operator)
      | (1ULL << CppParser::Short)
      | (1ULL << CppParser::Signed)
      | (1ULL << CppParser::Static)
      | (1ULL << CppParser::StaticAssert)
      | (1ULL << CppParser::Struct)
      | (1ULL << CppParser::Template)
      | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (CppParser::TypeDef - 67))
      | (1ULL << (CppParser::TypeName - 67))
      | (1ULL << (CppParser::Union - 67))
      | (1ULL << (CppParser::Unsigned - 67))
      | (1ULL << (CppParser::Using - 67))
      | (1ULL << (CppParser::Virtual - 67))
      | (1ULL << (CppParser::Void - 67))
      | (1ULL << (CppParser::Volatile - 67))
      | (1ULL << (CppParser::WChar - 67))
      | (1ULL << (CppParser::LeftBracket - 67))
      | (1ULL << (CppParser::LeftParenthesis - 67))
      | (1ULL << (CppParser::Semicolon - 67))
      | (1ULL << (CppParser::Ellipsis - 67))
      | (1ULL << (CppParser::DoubleColon - 67))
      | (1ULL << (CppParser::Asterisk - 67))
      | (1ULL << (CppParser::Ampersand - 67))
      | (1ULL << (CppParser::Tilde - 67))
      | (1ULL << (CppParser::DoubleAmpersand - 67)))) != 0) || _la == CppParser::Identifier) {
      setState(438);
      declarationSequence(0);
    }
    setState(441);
    match(CppParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

CppParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::LiteralContext* CppParser::PrimaryExpressionContext::literal() {
  return getRuleContext<CppParser::LiteralContext>(0);
}

tree::TerminalNode* CppParser::PrimaryExpressionContext::This() {
  return getToken(CppParser::This, 0);
}

tree::TerminalNode* CppParser::PrimaryExpressionContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ExpressionContext* CppParser::PrimaryExpressionContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::PrimaryExpressionContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::IdentifierExpressionContext* CppParser::PrimaryExpressionContext::identifierExpression() {
  return getRuleContext<CppParser::IdentifierExpressionContext>(0);
}

CppParser::LambdaExpressionContext* CppParser::PrimaryExpressionContext::lambdaExpression() {
  return getRuleContext<CppParser::LambdaExpressionContext>(0);
}

CppParser::FoldExpressionContext* CppParser::PrimaryExpressionContext::foldExpression() {
  return getRuleContext<CppParser::FoldExpressionContext>(0);
}


size_t CppParser::PrimaryExpressionContext::getRuleIndex() const {
  return CppParser::RulePrimaryExpression;
}

void CppParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void CppParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}

CppParser::PrimaryExpressionContext* CppParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 14, CppParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(452);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(443);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(444);
      match(CppParser::This);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(445);
      match(CppParser::LeftParenthesis);
      setState(446);
      expression(0);
      setState(447);
      match(CppParser::RightParenthesis);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(449);
      identifierExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(450);
      lambdaExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(451);
      foldExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierExpressionContext ------------------------------------------------------------------

CppParser::IdentifierExpressionContext::IdentifierExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::UnqualifiedIdentifierContext* CppParser::IdentifierExpressionContext::unqualifiedIdentifier() {
  return getRuleContext<CppParser::UnqualifiedIdentifierContext>(0);
}

CppParser::QualifiedIdentifierContext* CppParser::IdentifierExpressionContext::qualifiedIdentifier() {
  return getRuleContext<CppParser::QualifiedIdentifierContext>(0);
}


size_t CppParser::IdentifierExpressionContext::getRuleIndex() const {
  return CppParser::RuleIdentifierExpression;
}

void CppParser::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}

void CppParser::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}

CppParser::IdentifierExpressionContext* CppParser::identifierExpression() {
  IdentifierExpressionContext *_localctx = _tracker.createInstance<IdentifierExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, CppParser::RuleIdentifierExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(456);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(454);
      unqualifiedIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(455);
      qualifiedIdentifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnqualifiedIdentifierContext ------------------------------------------------------------------

CppParser::UnqualifiedIdentifierContext::UnqualifiedIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::UnqualifiedIdentifierContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::OperatorFunctionIdentifierContext* CppParser::UnqualifiedIdentifierContext::operatorFunctionIdentifier() {
  return getRuleContext<CppParser::OperatorFunctionIdentifierContext>(0);
}

CppParser::ConversionFunctionIdentifierContext* CppParser::UnqualifiedIdentifierContext::conversionFunctionIdentifier() {
  return getRuleContext<CppParser::ConversionFunctionIdentifierContext>(0);
}

CppParser::LiteralOperatorIdentifierContext* CppParser::UnqualifiedIdentifierContext::literalOperatorIdentifier() {
  return getRuleContext<CppParser::LiteralOperatorIdentifierContext>(0);
}

tree::TerminalNode* CppParser::UnqualifiedIdentifierContext::Tilde() {
  return getToken(CppParser::Tilde, 0);
}

CppParser::ClassNameContext* CppParser::UnqualifiedIdentifierContext::className() {
  return getRuleContext<CppParser::ClassNameContext>(0);
}

CppParser::DeclarationTypeSpecifierContext* CppParser::UnqualifiedIdentifierContext::declarationTypeSpecifier() {
  return getRuleContext<CppParser::DeclarationTypeSpecifierContext>(0);
}

CppParser::TemplateIdentifierContext* CppParser::UnqualifiedIdentifierContext::templateIdentifier() {
  return getRuleContext<CppParser::TemplateIdentifierContext>(0);
}


size_t CppParser::UnqualifiedIdentifierContext::getRuleIndex() const {
  return CppParser::RuleUnqualifiedIdentifier;
}

void CppParser::UnqualifiedIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnqualifiedIdentifier(this);
}

void CppParser::UnqualifiedIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnqualifiedIdentifier(this);
}

CppParser::UnqualifiedIdentifierContext* CppParser::unqualifiedIdentifier() {
  UnqualifiedIdentifierContext *_localctx = _tracker.createInstance<UnqualifiedIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 18, CppParser::RuleUnqualifiedIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(467);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(458);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(459);
      operatorFunctionIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(460);
      conversionFunctionIdentifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(461);
      literalOperatorIdentifier();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(462);
      match(CppParser::Tilde);
      setState(463);
      className();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(464);
      match(CppParser::Tilde);
      setState(465);
      declarationTypeSpecifier();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(466);
      templateIdentifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedIdentifierContext ------------------------------------------------------------------

CppParser::QualifiedIdentifierContext::QualifiedIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::NestedNameSpecifierContext* CppParser::QualifiedIdentifierContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}

CppParser::UnqualifiedIdentifierContext* CppParser::QualifiedIdentifierContext::unqualifiedIdentifier() {
  return getRuleContext<CppParser::UnqualifiedIdentifierContext>(0);
}

tree::TerminalNode* CppParser::QualifiedIdentifierContext::Template() {
  return getToken(CppParser::Template, 0);
}


size_t CppParser::QualifiedIdentifierContext::getRuleIndex() const {
  return CppParser::RuleQualifiedIdentifier;
}

void CppParser::QualifiedIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedIdentifier(this);
}

void CppParser::QualifiedIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedIdentifier(this);
}

CppParser::QualifiedIdentifierContext* CppParser::qualifiedIdentifier() {
  QualifiedIdentifierContext *_localctx = _tracker.createInstance<QualifiedIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 20, CppParser::RuleQualifiedIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    nestedNameSpecifier(0);
    setState(471);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Template) {
      setState(470);
      match(CppParser::Template);
    }
    setState(473);
    unqualifiedIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestedNameSpecifierContext ------------------------------------------------------------------

CppParser::NestedNameSpecifierContext::NestedNameSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NestedNameSpecifierContext::DoubleColon() {
  return getToken(CppParser::DoubleColon, 0);
}

CppParser::TypeNameContext* CppParser::NestedNameSpecifierContext::typeName() {
  return getRuleContext<CppParser::TypeNameContext>(0);
}

CppParser::NamespaceNameContext* CppParser::NestedNameSpecifierContext::namespaceName() {
  return getRuleContext<CppParser::NamespaceNameContext>(0);
}

CppParser::DeclarationTypeSpecifierContext* CppParser::NestedNameSpecifierContext::declarationTypeSpecifier() {
  return getRuleContext<CppParser::DeclarationTypeSpecifierContext>(0);
}

CppParser::NestedNameSpecifierContext* CppParser::NestedNameSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* CppParser::NestedNameSpecifierContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::NestedNameSpecifierContext::simpleTemplateIdentifier() {
  return getRuleContext<CppParser::SimpleTemplateIdentifierContext>(0);
}

tree::TerminalNode* CppParser::NestedNameSpecifierContext::Template() {
  return getToken(CppParser::Template, 0);
}


size_t CppParser::NestedNameSpecifierContext::getRuleIndex() const {
  return CppParser::RuleNestedNameSpecifier;
}

void CppParser::NestedNameSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestedNameSpecifier(this);
}

void CppParser::NestedNameSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestedNameSpecifier(this);
}


CppParser::NestedNameSpecifierContext* CppParser::nestedNameSpecifier() {
   return nestedNameSpecifier(0);
}

CppParser::NestedNameSpecifierContext* CppParser::nestedNameSpecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::NestedNameSpecifierContext *_localctx = _tracker.createInstance<NestedNameSpecifierContext>(_ctx, parentState);
  CppParser::NestedNameSpecifierContext *previousContext = _localctx;
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, CppParser::RuleNestedNameSpecifier, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(486);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(476);
      match(CppParser::DoubleColon);
      break;
    }

    case 2: {
      setState(477);
      typeName();
      setState(478);
      match(CppParser::DoubleColon);
      break;
    }

    case 3: {
      setState(480);
      namespaceName();
      setState(481);
      match(CppParser::DoubleColon);
      break;
    }

    case 4: {
      setState(483);
      declarationTypeSpecifier();
      setState(484);
      match(CppParser::DoubleColon);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(500);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(498);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NestedNameSpecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestedNameSpecifier);
          setState(488);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(489);
          match(CppParser::Identifier);
          setState(490);
          match(CppParser::DoubleColon);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NestedNameSpecifierContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNestedNameSpecifier);
          setState(491);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(493);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CppParser::Template) {
            setState(492);
            match(CppParser::Template);
          }
          setState(495);
          simpleTemplateIdentifier();
          setState(496);
          match(CppParser::DoubleColon);
          break;
        }

        } 
      }
      setState(502);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LambdaExpressionContext ------------------------------------------------------------------

CppParser::LambdaExpressionContext::LambdaExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::LambdaIntroducerContext* CppParser::LambdaExpressionContext::lambdaIntroducer() {
  return getRuleContext<CppParser::LambdaIntroducerContext>(0);
}

CppParser::CompoundStatementContext* CppParser::LambdaExpressionContext::compoundStatement() {
  return getRuleContext<CppParser::CompoundStatementContext>(0);
}

CppParser::LambdaDeclaratorContext* CppParser::LambdaExpressionContext::lambdaDeclarator() {
  return getRuleContext<CppParser::LambdaDeclaratorContext>(0);
}


size_t CppParser::LambdaExpressionContext::getRuleIndex() const {
  return CppParser::RuleLambdaExpression;
}

void CppParser::LambdaExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaExpression(this);
}

void CppParser::LambdaExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaExpression(this);
}

CppParser::LambdaExpressionContext* CppParser::lambdaExpression() {
  LambdaExpressionContext *_localctx = _tracker.createInstance<LambdaExpressionContext>(_ctx, getState());
  enterRule(_localctx, 24, CppParser::RuleLambdaExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    lambdaIntroducer();
    setState(505);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::LeftParenthesis) {
      setState(504);
      lambdaDeclarator();
    }
    setState(507);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaIntroducerContext ------------------------------------------------------------------

CppParser::LambdaIntroducerContext::LambdaIntroducerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::LambdaIntroducerContext::LeftBracket() {
  return getToken(CppParser::LeftBracket, 0);
}

tree::TerminalNode* CppParser::LambdaIntroducerContext::RightBracket() {
  return getToken(CppParser::RightBracket, 0);
}

CppParser::LambdaCaptureContext* CppParser::LambdaIntroducerContext::lambdaCapture() {
  return getRuleContext<CppParser::LambdaCaptureContext>(0);
}


size_t CppParser::LambdaIntroducerContext::getRuleIndex() const {
  return CppParser::RuleLambdaIntroducer;
}

void CppParser::LambdaIntroducerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaIntroducer(this);
}

void CppParser::LambdaIntroducerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaIntroducer(this);
}

CppParser::LambdaIntroducerContext* CppParser::lambdaIntroducer() {
  LambdaIntroducerContext *_localctx = _tracker.createInstance<LambdaIntroducerContext>(_ctx, getState());
  enterRule(_localctx, 26, CppParser::RuleLambdaIntroducer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    match(CppParser::LeftBracket);
    setState(511);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::This || ((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (CppParser::Asterisk - 95))
      | (1ULL << (CppParser::Ampersand - 95))
      | (1ULL << (CppParser::Equal - 95))
      | (1ULL << (CppParser::Identifier - 95)))) != 0)) {
      setState(510);
      lambdaCapture();
    }
    setState(513);
    match(CppParser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaDeclaratorContext ------------------------------------------------------------------

CppParser::LambdaDeclaratorContext::LambdaDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::LambdaDeclaratorContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ParameterDeclarationClauseContext* CppParser::LambdaDeclaratorContext::parameterDeclarationClause() {
  return getRuleContext<CppParser::ParameterDeclarationClauseContext>(0);
}

tree::TerminalNode* CppParser::LambdaDeclaratorContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::DeclarationSpecifierSequenceContext* CppParser::LambdaDeclaratorContext::declarationSpecifierSequence() {
  return getRuleContext<CppParser::DeclarationSpecifierSequenceContext>(0);
}

CppParser::NoExceptionSpecifierContext* CppParser::LambdaDeclaratorContext::noExceptionSpecifier() {
  return getRuleContext<CppParser::NoExceptionSpecifierContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::LambdaDeclaratorContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::TrailingReturnTypeContext* CppParser::LambdaDeclaratorContext::trailingReturnType() {
  return getRuleContext<CppParser::TrailingReturnTypeContext>(0);
}


size_t CppParser::LambdaDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleLambdaDeclarator;
}

void CppParser::LambdaDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaDeclarator(this);
}

void CppParser::LambdaDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaDeclarator(this);
}

CppParser::LambdaDeclaratorContext* CppParser::lambdaDeclarator() {
  LambdaDeclaratorContext *_localctx = _tracker.createInstance<LambdaDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 28, CppParser::RuleLambdaDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(515);
    match(CppParser::LeftParenthesis);
    setState(516);
    parameterDeclarationClause();
    setState(517);
    match(CppParser::RightParenthesis);
    setState(519);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::Class)
      | (1ULL << CppParser::Const)
      | (1ULL << CppParser::ConstExpr)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::Enum)
      | (1ULL << CppParser::Explicit)
      | (1ULL << CppParser::Extern)
      | (1ULL << CppParser::Float)
      | (1ULL << CppParser::Friend)
      | (1ULL << CppParser::Inline)
      | (1ULL << CppParser::Int)
      | (1ULL << CppParser::Long)
      | (1ULL << CppParser::Mutable)
      | (1ULL << CppParser::Short)
      | (1ULL << CppParser::Signed)
      | (1ULL << CppParser::Static)
      | (1ULL << CppParser::Struct)
      | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (CppParser::TypeDef - 67))
      | (1ULL << (CppParser::TypeName - 67))
      | (1ULL << (CppParser::Union - 67))
      | (1ULL << (CppParser::Unsigned - 67))
      | (1ULL << (CppParser::Virtual - 67))
      | (1ULL << (CppParser::Void - 67))
      | (1ULL << (CppParser::Volatile - 67))
      | (1ULL << (CppParser::WChar - 67))
      | (1ULL << (CppParser::DoubleColon - 67)))) != 0) || _la == CppParser::Identifier) {
      setState(518);
      declarationSpecifierSequence();
    }
    setState(522);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::NoExcept

    || _la == CppParser::Throw) {
      setState(521);
      noExceptionSpecifier();
    }
    setState(525);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
      setState(524);
      attributeSpecifierSequence(0);
    }
    setState(528);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Arrow) {
      setState(527);
      trailingReturnType();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaCaptureContext ------------------------------------------------------------------

CppParser::LambdaCaptureContext::LambdaCaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::CaptureDefaultContext* CppParser::LambdaCaptureContext::captureDefault() {
  return getRuleContext<CppParser::CaptureDefaultContext>(0);
}

CppParser::CaptureListContext* CppParser::LambdaCaptureContext::captureList() {
  return getRuleContext<CppParser::CaptureListContext>(0);
}

tree::TerminalNode* CppParser::LambdaCaptureContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::LambdaCaptureContext::getRuleIndex() const {
  return CppParser::RuleLambdaCapture;
}

void CppParser::LambdaCaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambdaCapture(this);
}

void CppParser::LambdaCaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambdaCapture(this);
}

CppParser::LambdaCaptureContext* CppParser::lambdaCapture() {
  LambdaCaptureContext *_localctx = _tracker.createInstance<LambdaCaptureContext>(_ctx, getState());
  enterRule(_localctx, 30, CppParser::RuleLambdaCapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(536);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(530);
      captureDefault();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(531);
      captureList(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(532);
      captureDefault();
      setState(533);
      match(CppParser::Comma);
      setState(534);
      captureList(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaptureDefaultContext ------------------------------------------------------------------

CppParser::CaptureDefaultContext::CaptureDefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::CaptureDefaultContext::Ampersand() {
  return getToken(CppParser::Ampersand, 0);
}

tree::TerminalNode* CppParser::CaptureDefaultContext::Equal() {
  return getToken(CppParser::Equal, 0);
}


size_t CppParser::CaptureDefaultContext::getRuleIndex() const {
  return CppParser::RuleCaptureDefault;
}

void CppParser::CaptureDefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaptureDefault(this);
}

void CppParser::CaptureDefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaptureDefault(this);
}

CppParser::CaptureDefaultContext* CppParser::captureDefault() {
  CaptureDefaultContext *_localctx = _tracker.createInstance<CaptureDefaultContext>(_ctx, getState());
  enterRule(_localctx, 32, CppParser::RuleCaptureDefault);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(538);
    _la = _input->LA(1);
    if (!(_la == CppParser::Ampersand

    || _la == CppParser::Equal)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaptureListContext ------------------------------------------------------------------

CppParser::CaptureListContext::CaptureListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::CaptureContext* CppParser::CaptureListContext::capture() {
  return getRuleContext<CppParser::CaptureContext>(0);
}

tree::TerminalNode* CppParser::CaptureListContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

CppParser::CaptureListContext* CppParser::CaptureListContext::captureList() {
  return getRuleContext<CppParser::CaptureListContext>(0);
}

tree::TerminalNode* CppParser::CaptureListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::CaptureListContext::getRuleIndex() const {
  return CppParser::RuleCaptureList;
}

void CppParser::CaptureListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaptureList(this);
}

void CppParser::CaptureListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaptureList(this);
}


CppParser::CaptureListContext* CppParser::captureList() {
   return captureList(0);
}

CppParser::CaptureListContext* CppParser::captureList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::CaptureListContext *_localctx = _tracker.createInstance<CaptureListContext>(_ctx, parentState);
  CppParser::CaptureListContext *previousContext = _localctx;
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, CppParser::RuleCaptureList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(541);
    capture();
    setState(543);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(542);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(553);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<CaptureListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleCaptureList);
        setState(545);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(546);
        match(CppParser::Comma);
        setState(547);
        capture();
        setState(549);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          setState(548);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(555);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CaptureContext ------------------------------------------------------------------

CppParser::CaptureContext::CaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::SimpleCaptureContext* CppParser::CaptureContext::simpleCapture() {
  return getRuleContext<CppParser::SimpleCaptureContext>(0);
}

CppParser::InitializerCaptureContext* CppParser::CaptureContext::initializerCapture() {
  return getRuleContext<CppParser::InitializerCaptureContext>(0);
}


size_t CppParser::CaptureContext::getRuleIndex() const {
  return CppParser::RuleCapture;
}

void CppParser::CaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCapture(this);
}

void CppParser::CaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCapture(this);
}

CppParser::CaptureContext* CppParser::capture() {
  CaptureContext *_localctx = _tracker.createInstance<CaptureContext>(_ctx, getState());
  enterRule(_localctx, 36, CppParser::RuleCapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    simpleCapture();
    setState(557);
    initializerCapture();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleCaptureContext ------------------------------------------------------------------

CppParser::SimpleCaptureContext::SimpleCaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::SimpleCaptureContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::SimpleCaptureContext::Ampersand() {
  return getToken(CppParser::Ampersand, 0);
}

tree::TerminalNode* CppParser::SimpleCaptureContext::This() {
  return getToken(CppParser::This, 0);
}

tree::TerminalNode* CppParser::SimpleCaptureContext::Asterisk() {
  return getToken(CppParser::Asterisk, 0);
}


size_t CppParser::SimpleCaptureContext::getRuleIndex() const {
  return CppParser::RuleSimpleCapture;
}

void CppParser::SimpleCaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleCapture(this);
}

void CppParser::SimpleCaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleCapture(this);
}

CppParser::SimpleCaptureContext* CppParser::simpleCapture() {
  SimpleCaptureContext *_localctx = _tracker.createInstance<SimpleCaptureContext>(_ctx, getState());
  enterRule(_localctx, 38, CppParser::RuleSimpleCapture);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(566);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Ampersand:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(560);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CppParser::Ampersand) {
          setState(559);
          match(CppParser::Ampersand);
        }
        setState(562);
        match(CppParser::Identifier);
        break;
      }

      case CppParser::This: {
        enterOuterAlt(_localctx, 2);
        setState(563);
        match(CppParser::This);
        break;
      }

      case CppParser::Asterisk: {
        enterOuterAlt(_localctx, 3);
        setState(564);
        match(CppParser::Asterisk);
        setState(565);
        match(CppParser::This);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerCaptureContext ------------------------------------------------------------------

CppParser::InitializerCaptureContext::InitializerCaptureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::InitializerCaptureContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::InitializerContext* CppParser::InitializerCaptureContext::initializer() {
  return getRuleContext<CppParser::InitializerContext>(0);
}

tree::TerminalNode* CppParser::InitializerCaptureContext::Ampersand() {
  return getToken(CppParser::Ampersand, 0);
}


size_t CppParser::InitializerCaptureContext::getRuleIndex() const {
  return CppParser::RuleInitializerCapture;
}

void CppParser::InitializerCaptureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerCapture(this);
}

void CppParser::InitializerCaptureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerCapture(this);
}

CppParser::InitializerCaptureContext* CppParser::initializerCapture() {
  InitializerCaptureContext *_localctx = _tracker.createInstance<InitializerCaptureContext>(_ctx, getState());
  enterRule(_localctx, 40, CppParser::RuleInitializerCapture);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(569);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Ampersand) {
      setState(568);
      match(CppParser::Ampersand);
    }
    setState(571);
    match(CppParser::Identifier);
    setState(572);
    initializer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FoldExpressionContext ------------------------------------------------------------------

CppParser::FoldExpressionContext::FoldExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::FoldExpressionContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

std::vector<CppParser::CastExpressionContext *> CppParser::FoldExpressionContext::castExpression() {
  return getRuleContexts<CppParser::CastExpressionContext>();
}

CppParser::CastExpressionContext* CppParser::FoldExpressionContext::castExpression(size_t i) {
  return getRuleContext<CppParser::CastExpressionContext>(i);
}

std::vector<CppParser::FoldOperatorContext *> CppParser::FoldExpressionContext::foldOperator() {
  return getRuleContexts<CppParser::FoldOperatorContext>();
}

CppParser::FoldOperatorContext* CppParser::FoldExpressionContext::foldOperator(size_t i) {
  return getRuleContext<CppParser::FoldOperatorContext>(i);
}

tree::TerminalNode* CppParser::FoldExpressionContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

tree::TerminalNode* CppParser::FoldExpressionContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}


size_t CppParser::FoldExpressionContext::getRuleIndex() const {
  return CppParser::RuleFoldExpression;
}

void CppParser::FoldExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFoldExpression(this);
}

void CppParser::FoldExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFoldExpression(this);
}

CppParser::FoldExpressionContext* CppParser::foldExpression() {
  FoldExpressionContext *_localctx = _tracker.createInstance<FoldExpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, CppParser::RuleFoldExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(594);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(574);
      match(CppParser::LeftParenthesis);
      setState(575);
      castExpression();
      setState(576);
      foldOperator();
      setState(577);
      match(CppParser::Ellipsis);
      setState(578);
      match(CppParser::RightParenthesis);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(580);
      match(CppParser::LeftParenthesis);
      setState(581);
      match(CppParser::Ellipsis);
      setState(582);
      foldOperator();
      setState(583);
      castExpression();
      setState(584);
      match(CppParser::RightParenthesis);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(586);
      match(CppParser::LeftParenthesis);
      setState(587);
      castExpression();
      setState(588);
      foldOperator();
      setState(589);
      match(CppParser::Ellipsis);
      setState(590);
      foldOperator();
      setState(591);
      castExpression();
      setState(592);
      match(CppParser::RightParenthesis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FoldOperatorContext ------------------------------------------------------------------

CppParser::FoldOperatorContext::FoldOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::FoldOperatorContext::Plus() {
  return getToken(CppParser::Plus, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::Minus() {
  return getToken(CppParser::Minus, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::Asterisk() {
  return getToken(CppParser::Asterisk, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::ForwardSlash() {
  return getToken(CppParser::ForwardSlash, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::Percent() {
  return getToken(CppParser::Percent, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::Caret() {
  return getToken(CppParser::Caret, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::Ampersand() {
  return getToken(CppParser::Ampersand, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::VerticalBar() {
  return getToken(CppParser::VerticalBar, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::DoubleLessThan() {
  return getToken(CppParser::DoubleLessThan, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::DoubleGreaterThan() {
  return getToken(CppParser::DoubleGreaterThan, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::PlusEqual() {
  return getToken(CppParser::PlusEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::MinusEqual() {
  return getToken(CppParser::MinusEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::AsteriskEqual() {
  return getToken(CppParser::AsteriskEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::ForwardSlashEqual() {
  return getToken(CppParser::ForwardSlashEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::PercentEqual() {
  return getToken(CppParser::PercentEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::CaretEqual() {
  return getToken(CppParser::CaretEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::AmpersandEqual() {
  return getToken(CppParser::AmpersandEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::VerticalBarEqual() {
  return getToken(CppParser::VerticalBarEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::DoubleLessThanEqual() {
  return getToken(CppParser::DoubleLessThanEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::DoubleGreaterThanEqual() {
  return getToken(CppParser::DoubleGreaterThanEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::DoubleEqual() {
  return getToken(CppParser::DoubleEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::ExclamationMarkEqual() {
  return getToken(CppParser::ExclamationMarkEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::LessThan() {
  return getToken(CppParser::LessThan, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::GreaterThan() {
  return getToken(CppParser::GreaterThan, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::LessThanEqual() {
  return getToken(CppParser::LessThanEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::GreaterThanEqual() {
  return getToken(CppParser::GreaterThanEqual, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::DoubleAmpersand() {
  return getToken(CppParser::DoubleAmpersand, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::DoubleVerticalBar() {
  return getToken(CppParser::DoubleVerticalBar, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::Comma() {
  return getToken(CppParser::Comma, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::PeriodAsterisk() {
  return getToken(CppParser::PeriodAsterisk, 0);
}

tree::TerminalNode* CppParser::FoldOperatorContext::ArrowAsterisk() {
  return getToken(CppParser::ArrowAsterisk, 0);
}


size_t CppParser::FoldOperatorContext::getRuleIndex() const {
  return CppParser::RuleFoldOperator;
}

void CppParser::FoldOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFoldOperator(this);
}

void CppParser::FoldOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFoldOperator(this);
}

CppParser::FoldOperatorContext* CppParser::foldOperator() {
  FoldOperatorContext *_localctx = _tracker.createInstance<FoldOperatorContext>(_ctx, getState());
  enterRule(_localctx, 44, CppParser::RuleFoldOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
    _la = _input->LA(1);
    if (!(((((_la - 92) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 92)) & ((1ULL << (CppParser::PeriodAsterisk - 92))
      | (1ULL << (CppParser::Plus - 92))
      | (1ULL << (CppParser::Minus - 92))
      | (1ULL << (CppParser::Asterisk - 92))
      | (1ULL << (CppParser::ForwardSlash - 92))
      | (1ULL << (CppParser::Percent - 92))
      | (1ULL << (CppParser::Caret - 92))
      | (1ULL << (CppParser::Ampersand - 92))
      | (1ULL << (CppParser::VerticalBar - 92))
      | (1ULL << (CppParser::Equal - 92))
      | (1ULL << (CppParser::LessThan - 92))
      | (1ULL << (CppParser::GreaterThan - 92))
      | (1ULL << (CppParser::PlusEqual - 92))
      | (1ULL << (CppParser::MinusEqual - 92))
      | (1ULL << (CppParser::AsteriskEqual - 92))
      | (1ULL << (CppParser::ForwardSlashEqual - 92))
      | (1ULL << (CppParser::PercentEqual - 92))
      | (1ULL << (CppParser::CaretEqual - 92))
      | (1ULL << (CppParser::AmpersandEqual - 92))
      | (1ULL << (CppParser::VerticalBarEqual - 92))
      | (1ULL << (CppParser::DoubleLessThan - 92))
      | (1ULL << (CppParser::DoubleGreaterThan - 92))
      | (1ULL << (CppParser::DoubleLessThanEqual - 92))
      | (1ULL << (CppParser::DoubleGreaterThanEqual - 92))
      | (1ULL << (CppParser::DoubleEqual - 92))
      | (1ULL << (CppParser::ExclamationMarkEqual - 92))
      | (1ULL << (CppParser::LessThanEqual - 92))
      | (1ULL << (CppParser::GreaterThanEqual - 92))
      | (1ULL << (CppParser::DoubleAmpersand - 92))
      | (1ULL << (CppParser::DoubleVerticalBar - 92))
      | (1ULL << (CppParser::Comma - 92))
      | (1ULL << (CppParser::ArrowAsterisk - 92)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixExpressionContext ------------------------------------------------------------------

CppParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::PrimaryExpressionContext* CppParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<CppParser::PrimaryExpressionContext>(0);
}

CppParser::SimpleTypeSpecifierContext* CppParser::PostfixExpressionContext::simpleTypeSpecifier() {
  return getRuleContext<CppParser::SimpleTypeSpecifierContext>(0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::ExpressionListContext* CppParser::PostfixExpressionContext::expressionList() {
  return getRuleContext<CppParser::ExpressionListContext>(0);
}

CppParser::TypenameSpecifierContext* CppParser::PostfixExpressionContext::typenameSpecifier() {
  return getRuleContext<CppParser::TypenameSpecifierContext>(0);
}

CppParser::BracedInitializerListContext* CppParser::PostfixExpressionContext::bracedInitializerList() {
  return getRuleContext<CppParser::BracedInitializerListContext>(0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::DynamicCast() {
  return getToken(CppParser::DynamicCast, 0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::LessThan() {
  return getToken(CppParser::LessThan, 0);
}

std::vector<CppParser::TypeIdentifierContext *> CppParser::PostfixExpressionContext::typeIdentifier() {
  return getRuleContexts<CppParser::TypeIdentifierContext>();
}

CppParser::TypeIdentifierContext* CppParser::PostfixExpressionContext::typeIdentifier(size_t i) {
  return getRuleContext<CppParser::TypeIdentifierContext>(i);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::GreaterThan() {
  return getToken(CppParser::GreaterThan, 0);
}

CppParser::ExpressionContext* CppParser::PostfixExpressionContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::StaticCast() {
  return getToken(CppParser::StaticCast, 0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::ReinterpretCast() {
  return getToken(CppParser::ReinterpretCast, 0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::ConstCast() {
  return getToken(CppParser::ConstCast, 0);
}

CppParser::PostfixExpressionContext* CppParser::PostfixExpressionContext::postfixExpression() {
  return getRuleContext<CppParser::PostfixExpressionContext>(0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::LeftBracket() {
  return getToken(CppParser::LeftBracket, 0);
}

CppParser::ExpressionOrBracedInitializerListContext* CppParser::PostfixExpressionContext::expressionOrBracedInitializerList() {
  return getRuleContext<CppParser::ExpressionOrBracedInitializerListContext>(0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::RightBracket() {
  return getToken(CppParser::RightBracket, 0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::Period() {
  return getToken(CppParser::Period, 0);
}

CppParser::IdentifierExpressionContext* CppParser::PostfixExpressionContext::identifierExpression() {
  return getRuleContext<CppParser::IdentifierExpressionContext>(0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::Template() {
  return getToken(CppParser::Template, 0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::Arrow() {
  return getToken(CppParser::Arrow, 0);
}

CppParser::PseudoDestructorNameContext* CppParser::PostfixExpressionContext::pseudoDestructorName() {
  return getRuleContext<CppParser::PseudoDestructorNameContext>(0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::DoublePlus() {
  return getToken(CppParser::DoublePlus, 0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::DoubleMinus() {
  return getToken(CppParser::DoubleMinus, 0);
}


size_t CppParser::PostfixExpressionContext::getRuleIndex() const {
  return CppParser::RulePostfixExpression;
}

void CppParser::PostfixExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixExpression(this);
}

void CppParser::PostfixExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixExpression(this);
}


CppParser::PostfixExpressionContext* CppParser::postfixExpression() {
   return postfixExpression(0);
}

CppParser::PostfixExpressionContext* CppParser::postfixExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, parentState);
  CppParser::PostfixExpressionContext *previousContext = _localctx;
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, CppParser::RulePostfixExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(658);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(599);
      primaryExpression();
      break;
    }

    case 2: {
      setState(600);
      simpleTypeSpecifier();
      setState(601);
      match(CppParser::LeftParenthesis);
      setState(603);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::Class)
        | (1ULL << CppParser::Const)
        | (1ULL << CppParser::ConstCast)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Delete)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::DynamicCast)
        | (1ULL << CppParser::Enum)
        | (1ULL << CppParser::False)
        | (1ULL << CppParser::Float)
        | (1ULL << CppParser::Int)
        | (1ULL << CppParser::Long)
        | (1ULL << CppParser::New)
        | (1ULL << CppParser::NoExcept)
        | (1ULL << CppParser::Nullptr)
        | (1ULL << CppParser::Operator)
        | (1ULL << CppParser::ReinterpretCast)
        | (1ULL << CppParser::Short)
        | (1ULL << CppParser::Signed)
        | (1ULL << CppParser::SizeOf)
        | (1ULL << CppParser::StaticCast)
        | (1ULL << CppParser::Struct)
        | (1ULL << CppParser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
        | (1ULL << (CppParser::True - 64))
        | (1ULL << (CppParser::TypeName - 64))
        | (1ULL << (CppParser::Union - 64))
        | (1ULL << (CppParser::Unsigned - 64))
        | (1ULL << (CppParser::Void - 64))
        | (1ULL << (CppParser::Volatile - 64))
        | (1ULL << (CppParser::WChar - 64))
        | (1ULL << (CppParser::LeftBrace - 64))
        | (1ULL << (CppParser::LeftBracket - 64))
        | (1ULL << (CppParser::LeftParenthesis - 64))
        | (1ULL << (CppParser::DoubleColon - 64))
        | (1ULL << (CppParser::Plus - 64))
        | (1ULL << (CppParser::Minus - 64))
        | (1ULL << (CppParser::Asterisk - 64))
        | (1ULL << (CppParser::Ampersand - 64))
        | (1ULL << (CppParser::VerticalBar - 64))
        | (1ULL << (CppParser::Tilde - 64))
        | (1ULL << (CppParser::ExclamationMark - 64))
        | (1ULL << (CppParser::DoublePlus - 64))
        | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
        | (1ULL << (CppParser::IntegerLiteral - 129))
        | (1ULL << (CppParser::FloatingPointLiteral - 129))
        | (1ULL << (CppParser::CharacterLiteral - 129))
        | (1ULL << (CppParser::StringLiteral - 129))
        | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
        | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
        | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
        | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
        | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
        setState(602);
        expressionList();
      }
      setState(605);
      match(CppParser::RightParenthesis);
      break;
    }

    case 3: {
      setState(607);
      typenameSpecifier();
      setState(608);
      match(CppParser::LeftParenthesis);
      setState(610);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::Class)
        | (1ULL << CppParser::Const)
        | (1ULL << CppParser::ConstCast)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Delete)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::DynamicCast)
        | (1ULL << CppParser::Enum)
        | (1ULL << CppParser::False)
        | (1ULL << CppParser::Float)
        | (1ULL << CppParser::Int)
        | (1ULL << CppParser::Long)
        | (1ULL << CppParser::New)
        | (1ULL << CppParser::NoExcept)
        | (1ULL << CppParser::Nullptr)
        | (1ULL << CppParser::Operator)
        | (1ULL << CppParser::ReinterpretCast)
        | (1ULL << CppParser::Short)
        | (1ULL << CppParser::Signed)
        | (1ULL << CppParser::SizeOf)
        | (1ULL << CppParser::StaticCast)
        | (1ULL << CppParser::Struct)
        | (1ULL << CppParser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
        | (1ULL << (CppParser::True - 64))
        | (1ULL << (CppParser::TypeName - 64))
        | (1ULL << (CppParser::Union - 64))
        | (1ULL << (CppParser::Unsigned - 64))
        | (1ULL << (CppParser::Void - 64))
        | (1ULL << (CppParser::Volatile - 64))
        | (1ULL << (CppParser::WChar - 64))
        | (1ULL << (CppParser::LeftBrace - 64))
        | (1ULL << (CppParser::LeftBracket - 64))
        | (1ULL << (CppParser::LeftParenthesis - 64))
        | (1ULL << (CppParser::DoubleColon - 64))
        | (1ULL << (CppParser::Plus - 64))
        | (1ULL << (CppParser::Minus - 64))
        | (1ULL << (CppParser::Asterisk - 64))
        | (1ULL << (CppParser::Ampersand - 64))
        | (1ULL << (CppParser::VerticalBar - 64))
        | (1ULL << (CppParser::Tilde - 64))
        | (1ULL << (CppParser::ExclamationMark - 64))
        | (1ULL << (CppParser::DoublePlus - 64))
        | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
        | (1ULL << (CppParser::IntegerLiteral - 129))
        | (1ULL << (CppParser::FloatingPointLiteral - 129))
        | (1ULL << (CppParser::CharacterLiteral - 129))
        | (1ULL << (CppParser::StringLiteral - 129))
        | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
        | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
        | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
        | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
        | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
        setState(609);
        expressionList();
      }
      setState(612);
      match(CppParser::RightParenthesis);
      break;
    }

    case 4: {
      setState(614);
      simpleTypeSpecifier();
      setState(615);
      bracedInitializerList();
      break;
    }

    case 5: {
      setState(617);
      typenameSpecifier();
      setState(618);
      bracedInitializerList();
      break;
    }

    case 6: {
      setState(620);
      match(CppParser::DynamicCast);
      setState(621);
      match(CppParser::LessThan);
      setState(622);
      typeIdentifier();
      setState(623);
      match(CppParser::GreaterThan);
      setState(624);
      match(CppParser::LeftParenthesis);
      setState(625);
      expression(0);
      setState(626);
      match(CppParser::RightParenthesis);
      break;
    }

    case 7: {
      setState(628);
      match(CppParser::StaticCast);
      setState(629);
      match(CppParser::LessThan);
      setState(630);
      typeIdentifier();
      setState(631);
      match(CppParser::GreaterThan);
      setState(632);
      match(CppParser::LeftParenthesis);
      setState(633);
      expression(0);
      setState(634);
      match(CppParser::RightParenthesis);
      break;
    }

    case 8: {
      setState(636);
      match(CppParser::ReinterpretCast);
      setState(637);
      match(CppParser::GreaterThan);
      setState(638);
      match(CppParser::LeftParenthesis);
      setState(639);
      expression(0);
      setState(640);
      match(CppParser::RightParenthesis);
      break;
    }

    case 9: {
      setState(642);
      match(CppParser::ConstCast);
      setState(643);
      match(CppParser::GreaterThan);
      setState(644);
      match(CppParser::LeftParenthesis);
      setState(645);
      expression(0);
      setState(646);
      match(CppParser::RightParenthesis);
      break;
    }

    case 10: {
      setState(648);
      typeIdentifier();
      setState(649);
      match(CppParser::LeftParenthesis);
      setState(650);
      expression(0);
      setState(651);
      match(CppParser::RightParenthesis);
      break;
    }

    case 11: {
      setState(653);
      typeIdentifier();
      setState(654);
      match(CppParser::LeftParenthesis);
      setState(655);
      typeIdentifier();
      setState(656);
      match(CppParser::RightParenthesis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(695);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(693);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(660);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(661);
          match(CppParser::LeftBracket);
          setState(662);
          expressionOrBracedInitializerList();
          setState(663);
          match(CppParser::RightBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(665);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(666);
          match(CppParser::LeftParenthesis);
          setState(668);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
            | (1ULL << CppParser::Auto)
            | (1ULL << CppParser::Bool)
            | (1ULL << CppParser::Char)
            | (1ULL << CppParser::Char16)
            | (1ULL << CppParser::Char32)
            | (1ULL << CppParser::Class)
            | (1ULL << CppParser::Const)
            | (1ULL << CppParser::ConstCast)
            | (1ULL << CppParser::DeclType)
            | (1ULL << CppParser::Delete)
            | (1ULL << CppParser::Double)
            | (1ULL << CppParser::DynamicCast)
            | (1ULL << CppParser::Enum)
            | (1ULL << CppParser::False)
            | (1ULL << CppParser::Float)
            | (1ULL << CppParser::Int)
            | (1ULL << CppParser::Long)
            | (1ULL << CppParser::New)
            | (1ULL << CppParser::NoExcept)
            | (1ULL << CppParser::Nullptr)
            | (1ULL << CppParser::Operator)
            | (1ULL << CppParser::ReinterpretCast)
            | (1ULL << CppParser::Short)
            | (1ULL << CppParser::Signed)
            | (1ULL << CppParser::SizeOf)
            | (1ULL << CppParser::StaticCast)
            | (1ULL << CppParser::Struct)
            | (1ULL << CppParser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
            | (1ULL << (CppParser::True - 64))
            | (1ULL << (CppParser::TypeName - 64))
            | (1ULL << (CppParser::Union - 64))
            | (1ULL << (CppParser::Unsigned - 64))
            | (1ULL << (CppParser::Void - 64))
            | (1ULL << (CppParser::Volatile - 64))
            | (1ULL << (CppParser::WChar - 64))
            | (1ULL << (CppParser::LeftBrace - 64))
            | (1ULL << (CppParser::LeftBracket - 64))
            | (1ULL << (CppParser::LeftParenthesis - 64))
            | (1ULL << (CppParser::DoubleColon - 64))
            | (1ULL << (CppParser::Plus - 64))
            | (1ULL << (CppParser::Minus - 64))
            | (1ULL << (CppParser::Asterisk - 64))
            | (1ULL << (CppParser::Ampersand - 64))
            | (1ULL << (CppParser::VerticalBar - 64))
            | (1ULL << (CppParser::Tilde - 64))
            | (1ULL << (CppParser::ExclamationMark - 64))
            | (1ULL << (CppParser::DoublePlus - 64))
            | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
            | (1ULL << (CppParser::IntegerLiteral - 129))
            | (1ULL << (CppParser::FloatingPointLiteral - 129))
            | (1ULL << (CppParser::CharacterLiteral - 129))
            | (1ULL << (CppParser::StringLiteral - 129))
            | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
            | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
            | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
            | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
            | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
            setState(667);
            expressionList();
          }
          setState(670);
          match(CppParser::RightParenthesis);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(671);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(672);
          match(CppParser::Period);
          setState(674);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CppParser::Template) {
            setState(673);
            match(CppParser::Template);
          }
          setState(676);
          identifierExpression();
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(677);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(678);
          match(CppParser::Arrow);
          setState(680);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CppParser::Template) {
            setState(679);
            match(CppParser::Template);
          }
          setState(682);
          identifierExpression();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(683);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(684);
          match(CppParser::Period);
          setState(685);
          pseudoDestructorName();
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(686);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(687);
          match(CppParser::Arrow);
          setState(688);
          pseudoDestructorName();
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(689);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(690);
          match(CppParser::DoublePlus);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(691);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(692);
          match(CppParser::DoubleMinus);
          break;
        }

        } 
      }
      setState(697);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

CppParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::InitializerListContext* CppParser::ExpressionListContext::initializerList() {
  return getRuleContext<CppParser::InitializerListContext>(0);
}


size_t CppParser::ExpressionListContext::getRuleIndex() const {
  return CppParser::RuleExpressionList;
}

void CppParser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void CppParser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}

CppParser::ExpressionListContext* CppParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 48, CppParser::RuleExpressionList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(698);
    initializerList(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PseudoDestructorNameContext ------------------------------------------------------------------

CppParser::PseudoDestructorNameContext::PseudoDestructorNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CppParser::TypeNameContext *> CppParser::PseudoDestructorNameContext::typeName() {
  return getRuleContexts<CppParser::TypeNameContext>();
}

CppParser::TypeNameContext* CppParser::PseudoDestructorNameContext::typeName(size_t i) {
  return getRuleContext<CppParser::TypeNameContext>(i);
}

tree::TerminalNode* CppParser::PseudoDestructorNameContext::DoubleColon() {
  return getToken(CppParser::DoubleColon, 0);
}

tree::TerminalNode* CppParser::PseudoDestructorNameContext::Tilde() {
  return getToken(CppParser::Tilde, 0);
}

CppParser::NestedNameSpecifierContext* CppParser::PseudoDestructorNameContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* CppParser::PseudoDestructorNameContext::Template() {
  return getToken(CppParser::Template, 0);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::PseudoDestructorNameContext::simpleTemplateIdentifier() {
  return getRuleContext<CppParser::SimpleTemplateIdentifierContext>(0);
}

CppParser::DeclarationTypeSpecifierContext* CppParser::PseudoDestructorNameContext::declarationTypeSpecifier() {
  return getRuleContext<CppParser::DeclarationTypeSpecifierContext>(0);
}


size_t CppParser::PseudoDestructorNameContext::getRuleIndex() const {
  return CppParser::RulePseudoDestructorName;
}

void CppParser::PseudoDestructorNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPseudoDestructorName(this);
}

void CppParser::PseudoDestructorNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPseudoDestructorName(this);
}

CppParser::PseudoDestructorNameContext* CppParser::pseudoDestructorName() {
  PseudoDestructorNameContext *_localctx = _tracker.createInstance<PseudoDestructorNameContext>(_ctx, getState());
  enterRule(_localctx, 50, CppParser::RulePseudoDestructorName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(719);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(701);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
      case 1: {
        setState(700);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(703);
      typeName();
      setState(704);
      match(CppParser::DoubleColon);
      setState(705);
      match(CppParser::Tilde);
      setState(706);
      typeName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(708);
      nestedNameSpecifier(0);
      setState(709);
      match(CppParser::Template);
      setState(710);
      simpleTemplateIdentifier();
      setState(711);
      match(CppParser::DoubleColon);
      setState(712);
      match(CppParser::Tilde);
      setState(713);
      typeName();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(715);
      match(CppParser::Tilde);
      setState(716);
      typeName();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(717);
      match(CppParser::Tilde);
      setState(718);
      declarationTypeSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

CppParser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::PostfixExpressionContext* CppParser::UnaryExpressionContext::postfixExpression() {
  return getRuleContext<CppParser::PostfixExpressionContext>(0);
}

tree::TerminalNode* CppParser::UnaryExpressionContext::DoublePlus() {
  return getToken(CppParser::DoublePlus, 0);
}

CppParser::CastExpressionContext* CppParser::UnaryExpressionContext::castExpression() {
  return getRuleContext<CppParser::CastExpressionContext>(0);
}

tree::TerminalNode* CppParser::UnaryExpressionContext::DoubleMinus() {
  return getToken(CppParser::DoubleMinus, 0);
}

CppParser::UnaryOperatorContext* CppParser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<CppParser::UnaryOperatorContext>(0);
}

tree::TerminalNode* CppParser::UnaryExpressionContext::SizeOf() {
  return getToken(CppParser::SizeOf, 0);
}

CppParser::UnaryExpressionContext* CppParser::UnaryExpressionContext::unaryExpression() {
  return getRuleContext<CppParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CppParser::UnaryExpressionContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::TypeIdentifierContext* CppParser::UnaryExpressionContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* CppParser::UnaryExpressionContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

tree::TerminalNode* CppParser::UnaryExpressionContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

tree::TerminalNode* CppParser::UnaryExpressionContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::UnaryExpressionContext::AlignOf() {
  return getToken(CppParser::AlignOf, 0);
}

CppParser::NoExceptionExpressionContext* CppParser::UnaryExpressionContext::noExceptionExpression() {
  return getRuleContext<CppParser::NoExceptionExpressionContext>(0);
}

CppParser::NewExpressionContext* CppParser::UnaryExpressionContext::newExpression() {
  return getRuleContext<CppParser::NewExpressionContext>(0);
}

CppParser::DeleteExpressionContext* CppParser::UnaryExpressionContext::deleteExpression() {
  return getRuleContext<CppParser::DeleteExpressionContext>(0);
}


size_t CppParser::UnaryExpressionContext::getRuleIndex() const {
  return CppParser::RuleUnaryExpression;
}

void CppParser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void CppParser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}

CppParser::UnaryExpressionContext* CppParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 52, CppParser::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(749);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(721);
      postfixExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(722);
      match(CppParser::DoublePlus);
      setState(723);
      castExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(724);
      match(CppParser::DoubleMinus);
      setState(725);
      castExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(726);
      unaryOperator();
      setState(727);
      castExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(729);
      match(CppParser::SizeOf);
      setState(730);
      unaryExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(731);
      match(CppParser::SizeOf);
      setState(732);
      match(CppParser::LeftParenthesis);
      setState(733);
      typeIdentifier();
      setState(734);
      match(CppParser::RightParenthesis);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(736);
      match(CppParser::SizeOf);
      setState(737);
      match(CppParser::Ellipsis);
      setState(738);
      match(CppParser::LeftParenthesis);
      setState(739);
      match(CppParser::Identifier);
      setState(740);
      match(CppParser::RightParenthesis);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(741);
      match(CppParser::AlignOf);
      setState(742);
      match(CppParser::LeftParenthesis);
      setState(743);
      typeIdentifier();
      setState(744);
      match(CppParser::RightParenthesis);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(746);
      noExceptionExpression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(747);
      newExpression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(748);
      deleteExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

CppParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::UnaryOperatorContext::VerticalBar() {
  return getToken(CppParser::VerticalBar, 0);
}

tree::TerminalNode* CppParser::UnaryOperatorContext::Asterisk() {
  return getToken(CppParser::Asterisk, 0);
}

tree::TerminalNode* CppParser::UnaryOperatorContext::Ampersand() {
  return getToken(CppParser::Ampersand, 0);
}

tree::TerminalNode* CppParser::UnaryOperatorContext::Plus() {
  return getToken(CppParser::Plus, 0);
}

tree::TerminalNode* CppParser::UnaryOperatorContext::Minus() {
  return getToken(CppParser::Minus, 0);
}

tree::TerminalNode* CppParser::UnaryOperatorContext::ExclamationMark() {
  return getToken(CppParser::ExclamationMark, 0);
}

tree::TerminalNode* CppParser::UnaryOperatorContext::Tilde() {
  return getToken(CppParser::Tilde, 0);
}


size_t CppParser::UnaryOperatorContext::getRuleIndex() const {
  return CppParser::RuleUnaryOperator;
}

void CppParser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void CppParser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}

CppParser::UnaryOperatorContext* CppParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 54, CppParser::RuleUnaryOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(751);
    _la = _input->LA(1);
    if (!(((((_la - 93) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 93)) & ((1ULL << (CppParser::Plus - 93))
      | (1ULL << (CppParser::Minus - 93))
      | (1ULL << (CppParser::Asterisk - 93))
      | (1ULL << (CppParser::Ampersand - 93))
      | (1ULL << (CppParser::VerticalBar - 93))
      | (1ULL << (CppParser::Tilde - 93))
      | (1ULL << (CppParser::ExclamationMark - 93)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewExpressionContext ------------------------------------------------------------------

CppParser::NewExpressionContext::NewExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NewExpressionContext::New() {
  return getToken(CppParser::New, 0);
}

CppParser::NewTypeIdentifierContext* CppParser::NewExpressionContext::newTypeIdentifier() {
  return getRuleContext<CppParser::NewTypeIdentifierContext>(0);
}

tree::TerminalNode* CppParser::NewExpressionContext::DoubleColon() {
  return getToken(CppParser::DoubleColon, 0);
}

CppParser::NewPlacementContext* CppParser::NewExpressionContext::newPlacement() {
  return getRuleContext<CppParser::NewPlacementContext>(0);
}

CppParser::NewInitializerContext* CppParser::NewExpressionContext::newInitializer() {
  return getRuleContext<CppParser::NewInitializerContext>(0);
}

tree::TerminalNode* CppParser::NewExpressionContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::TypeIdentifierContext* CppParser::NewExpressionContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* CppParser::NewExpressionContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}


size_t CppParser::NewExpressionContext::getRuleIndex() const {
  return CppParser::RuleNewExpression;
}

void CppParser::NewExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewExpression(this);
}

void CppParser::NewExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewExpression(this);
}

CppParser::NewExpressionContext* CppParser::newExpression() {
  NewExpressionContext *_localctx = _tracker.createInstance<NewExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, CppParser::RuleNewExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(777);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(754);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DoubleColon) {
        setState(753);
        match(CppParser::DoubleColon);
      }
      setState(756);
      match(CppParser::New);
      setState(758);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::LeftParenthesis) {
        setState(757);
        newPlacement();
      }
      setState(760);
      newTypeIdentifier();
      setState(762);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
      case 1: {
        setState(761);
        newInitializer();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(765);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DoubleColon) {
        setState(764);
        match(CppParser::DoubleColon);
      }
      setState(767);
      match(CppParser::New);
      setState(769);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
      case 1: {
        setState(768);
        newPlacement();
        break;
      }

      }
      setState(771);
      match(CppParser::LeftParenthesis);
      setState(772);
      typeIdentifier();
      setState(773);
      match(CppParser::RightParenthesis);
      setState(775);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
      case 1: {
        setState(774);
        newInitializer();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewPlacementContext ------------------------------------------------------------------

CppParser::NewPlacementContext::NewPlacementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NewPlacementContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ExpressionListContext* CppParser::NewPlacementContext::expressionList() {
  return getRuleContext<CppParser::ExpressionListContext>(0);
}

tree::TerminalNode* CppParser::NewPlacementContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}


size_t CppParser::NewPlacementContext::getRuleIndex() const {
  return CppParser::RuleNewPlacement;
}

void CppParser::NewPlacementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewPlacement(this);
}

void CppParser::NewPlacementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewPlacement(this);
}

CppParser::NewPlacementContext* CppParser::newPlacement() {
  NewPlacementContext *_localctx = _tracker.createInstance<NewPlacementContext>(_ctx, getState());
  enterRule(_localctx, 58, CppParser::RuleNewPlacement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(779);
    match(CppParser::LeftParenthesis);
    setState(780);
    expressionList();
    setState(781);
    match(CppParser::RightParenthesis);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewTypeIdentifierContext ------------------------------------------------------------------

CppParser::NewTypeIdentifierContext::NewTypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TypeSpecifierSequenceContext* CppParser::NewTypeIdentifierContext::typeSpecifierSequence() {
  return getRuleContext<CppParser::TypeSpecifierSequenceContext>(0);
}

CppParser::NewDeclaratorContext* CppParser::NewTypeIdentifierContext::newDeclarator() {
  return getRuleContext<CppParser::NewDeclaratorContext>(0);
}


size_t CppParser::NewTypeIdentifierContext::getRuleIndex() const {
  return CppParser::RuleNewTypeIdentifier;
}

void CppParser::NewTypeIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewTypeIdentifier(this);
}

void CppParser::NewTypeIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewTypeIdentifier(this);
}

CppParser::NewTypeIdentifierContext* CppParser::newTypeIdentifier() {
  NewTypeIdentifierContext *_localctx = _tracker.createInstance<NewTypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 60, CppParser::RuleNewTypeIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(783);
    typeSpecifierSequence();
    setState(785);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(784);
      newDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NewDeclaratorContext ------------------------------------------------------------------

CppParser::NewDeclaratorContext::NewDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::PointerOperatorContext* CppParser::NewDeclaratorContext::pointerOperator() {
  return getRuleContext<CppParser::PointerOperatorContext>(0);
}

CppParser::NoPointerNewDeclaratorContext* CppParser::NewDeclaratorContext::noPointerNewDeclarator() {
  return getRuleContext<CppParser::NoPointerNewDeclaratorContext>(0);
}

CppParser::NewDeclaratorContext* CppParser::NewDeclaratorContext::newDeclarator() {
  return getRuleContext<CppParser::NewDeclaratorContext>(0);
}


size_t CppParser::NewDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleNewDeclarator;
}

void CppParser::NewDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewDeclarator(this);
}

void CppParser::NewDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewDeclarator(this);
}

CppParser::NewDeclaratorContext* CppParser::newDeclarator() {
  NewDeclaratorContext *_localctx = _tracker.createInstance<NewDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 62, CppParser::RuleNewDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(787);
    pointerOperator();
    setState(789);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::DeclType || ((((_la - 90) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 90)) & ((1ULL << (CppParser::DoubleColon - 90))
      | (1ULL << (CppParser::Asterisk - 90))
      | (1ULL << (CppParser::Ampersand - 90))
      | (1ULL << (CppParser::DoubleAmpersand - 90))
      | (1ULL << (CppParser::Identifier - 90)))) != 0)) {
      setState(788);
      newDeclarator();
    }
    setState(791);
    noPointerNewDeclarator(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerNewDeclaratorContext ------------------------------------------------------------------

CppParser::NoPointerNewDeclaratorContext::NoPointerNewDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NoPointerNewDeclaratorContext::LeftBracket() {
  return getToken(CppParser::LeftBracket, 0);
}

CppParser::ExpressionContext* CppParser::NoPointerNewDeclaratorContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::NoPointerNewDeclaratorContext::RightBracket() {
  return getToken(CppParser::RightBracket, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::NoPointerNewDeclaratorContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::NoPointerNewDeclaratorContext* CppParser::NoPointerNewDeclaratorContext::noPointerNewDeclarator() {
  return getRuleContext<CppParser::NoPointerNewDeclaratorContext>(0);
}

CppParser::ConstantExpressionContext* CppParser::NoPointerNewDeclaratorContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}


size_t CppParser::NoPointerNewDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleNoPointerNewDeclarator;
}

void CppParser::NoPointerNewDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoPointerNewDeclarator(this);
}

void CppParser::NoPointerNewDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoPointerNewDeclarator(this);
}


CppParser::NoPointerNewDeclaratorContext* CppParser::noPointerNewDeclarator() {
   return noPointerNewDeclarator(0);
}

CppParser::NoPointerNewDeclaratorContext* CppParser::noPointerNewDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::NoPointerNewDeclaratorContext *_localctx = _tracker.createInstance<NoPointerNewDeclaratorContext>(_ctx, parentState);
  CppParser::NoPointerNewDeclaratorContext *previousContext = _localctx;
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, CppParser::RuleNoPointerNewDeclarator, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(794);
    match(CppParser::LeftBracket);
    setState(795);
    expression(0);
    setState(796);
    match(CppParser::RightBracket);
    setState(798);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(797);
      attributeSpecifierSequence(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(809);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoPointerNewDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoPointerNewDeclarator);
        setState(800);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(801);
        match(CppParser::LeftBracket);
        setState(802);
        constantExpression();
        setState(803);
        match(CppParser::RightBracket);
        setState(805);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
        case 1: {
          setState(804);
          attributeSpecifierSequence(0);
          break;
        }

        } 
      }
      setState(811);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NewInitializerContext ------------------------------------------------------------------

CppParser::NewInitializerContext::NewInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NewInitializerContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

tree::TerminalNode* CppParser::NewInitializerContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::ExpressionListContext* CppParser::NewInitializerContext::expressionList() {
  return getRuleContext<CppParser::ExpressionListContext>(0);
}

CppParser::BracedInitializerListContext* CppParser::NewInitializerContext::bracedInitializerList() {
  return getRuleContext<CppParser::BracedInitializerListContext>(0);
}


size_t CppParser::NewInitializerContext::getRuleIndex() const {
  return CppParser::RuleNewInitializer;
}

void CppParser::NewInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewInitializer(this);
}

void CppParser::NewInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewInitializer(this);
}

CppParser::NewInitializerContext* CppParser::newInitializer() {
  NewInitializerContext *_localctx = _tracker.createInstance<NewInitializerContext>(_ctx, getState());
  enterRule(_localctx, 66, CppParser::RuleNewInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(818);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::LeftParenthesis: {
        enterOuterAlt(_localctx, 1);
        setState(812);
        match(CppParser::LeftParenthesis);
        setState(814);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
          | (1ULL << CppParser::Auto)
          | (1ULL << CppParser::Bool)
          | (1ULL << CppParser::Char)
          | (1ULL << CppParser::Char16)
          | (1ULL << CppParser::Char32)
          | (1ULL << CppParser::Class)
          | (1ULL << CppParser::Const)
          | (1ULL << CppParser::ConstCast)
          | (1ULL << CppParser::DeclType)
          | (1ULL << CppParser::Delete)
          | (1ULL << CppParser::Double)
          | (1ULL << CppParser::DynamicCast)
          | (1ULL << CppParser::Enum)
          | (1ULL << CppParser::False)
          | (1ULL << CppParser::Float)
          | (1ULL << CppParser::Int)
          | (1ULL << CppParser::Long)
          | (1ULL << CppParser::New)
          | (1ULL << CppParser::NoExcept)
          | (1ULL << CppParser::Nullptr)
          | (1ULL << CppParser::Operator)
          | (1ULL << CppParser::ReinterpretCast)
          | (1ULL << CppParser::Short)
          | (1ULL << CppParser::Signed)
          | (1ULL << CppParser::SizeOf)
          | (1ULL << CppParser::StaticCast)
          | (1ULL << CppParser::Struct)
          | (1ULL << CppParser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
          | (1ULL << (CppParser::True - 64))
          | (1ULL << (CppParser::TypeName - 64))
          | (1ULL << (CppParser::Union - 64))
          | (1ULL << (CppParser::Unsigned - 64))
          | (1ULL << (CppParser::Void - 64))
          | (1ULL << (CppParser::Volatile - 64))
          | (1ULL << (CppParser::WChar - 64))
          | (1ULL << (CppParser::LeftBrace - 64))
          | (1ULL << (CppParser::LeftBracket - 64))
          | (1ULL << (CppParser::LeftParenthesis - 64))
          | (1ULL << (CppParser::DoubleColon - 64))
          | (1ULL << (CppParser::Plus - 64))
          | (1ULL << (CppParser::Minus - 64))
          | (1ULL << (CppParser::Asterisk - 64))
          | (1ULL << (CppParser::Ampersand - 64))
          | (1ULL << (CppParser::VerticalBar - 64))
          | (1ULL << (CppParser::Tilde - 64))
          | (1ULL << (CppParser::ExclamationMark - 64))
          | (1ULL << (CppParser::DoublePlus - 64))
          | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
          | (1ULL << (CppParser::IntegerLiteral - 129))
          | (1ULL << (CppParser::FloatingPointLiteral - 129))
          | (1ULL << (CppParser::CharacterLiteral - 129))
          | (1ULL << (CppParser::StringLiteral - 129))
          | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
          | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
          | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
          | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
          | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
          setState(813);
          expressionList();
        }
        setState(816);
        match(CppParser::RightParenthesis);
        break;
      }

      case CppParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(817);
        bracedInitializerList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteExpressionContext ------------------------------------------------------------------

CppParser::DeleteExpressionContext::DeleteExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::DeleteExpressionContext::Delete() {
  return getToken(CppParser::Delete, 0);
}

CppParser::CastExpressionContext* CppParser::DeleteExpressionContext::castExpression() {
  return getRuleContext<CppParser::CastExpressionContext>(0);
}

tree::TerminalNode* CppParser::DeleteExpressionContext::DoubleColon() {
  return getToken(CppParser::DoubleColon, 0);
}

tree::TerminalNode* CppParser::DeleteExpressionContext::LeftBracket() {
  return getToken(CppParser::LeftBracket, 0);
}

tree::TerminalNode* CppParser::DeleteExpressionContext::RightBracket() {
  return getToken(CppParser::RightBracket, 0);
}


size_t CppParser::DeleteExpressionContext::getRuleIndex() const {
  return CppParser::RuleDeleteExpression;
}

void CppParser::DeleteExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteExpression(this);
}

void CppParser::DeleteExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteExpression(this);
}

CppParser::DeleteExpressionContext* CppParser::deleteExpression() {
  DeleteExpressionContext *_localctx = _tracker.createInstance<DeleteExpressionContext>(_ctx, getState());
  enterRule(_localctx, 68, CppParser::RuleDeleteExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(832);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(821);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DoubleColon) {
        setState(820);
        match(CppParser::DoubleColon);
      }
      setState(823);
      match(CppParser::Delete);
      setState(824);
      castExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(826);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DoubleColon) {
        setState(825);
        match(CppParser::DoubleColon);
      }
      setState(828);
      match(CppParser::Delete);
      setState(829);
      match(CppParser::LeftBracket);
      setState(830);
      match(CppParser::RightBracket);
      setState(831);
      castExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoExceptionExpressionContext ------------------------------------------------------------------

CppParser::NoExceptionExpressionContext::NoExceptionExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NoExceptionExpressionContext::NoExcept() {
  return getToken(CppParser::NoExcept, 0);
}

tree::TerminalNode* CppParser::NoExceptionExpressionContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ExpressionContext* CppParser::NoExceptionExpressionContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::NoExceptionExpressionContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}


size_t CppParser::NoExceptionExpressionContext::getRuleIndex() const {
  return CppParser::RuleNoExceptionExpression;
}

void CppParser::NoExceptionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoExceptionExpression(this);
}

void CppParser::NoExceptionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoExceptionExpression(this);
}

CppParser::NoExceptionExpressionContext* CppParser::noExceptionExpression() {
  NoExceptionExpressionContext *_localctx = _tracker.createInstance<NoExceptionExpressionContext>(_ctx, getState());
  enterRule(_localctx, 70, CppParser::RuleNoExceptionExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(834);
    match(CppParser::NoExcept);
    setState(835);
    match(CppParser::LeftParenthesis);
    setState(836);
    expression(0);
    setState(837);
    match(CppParser::RightParenthesis);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastExpressionContext ------------------------------------------------------------------

CppParser::CastExpressionContext::CastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::UnaryExpressionContext* CppParser::CastExpressionContext::unaryExpression() {
  return getRuleContext<CppParser::UnaryExpressionContext>(0);
}

tree::TerminalNode* CppParser::CastExpressionContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::TypeIdentifierContext* CppParser::CastExpressionContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* CppParser::CastExpressionContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::CastExpressionContext* CppParser::CastExpressionContext::castExpression() {
  return getRuleContext<CppParser::CastExpressionContext>(0);
}


size_t CppParser::CastExpressionContext::getRuleIndex() const {
  return CppParser::RuleCastExpression;
}

void CppParser::CastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastExpression(this);
}

void CppParser::CastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastExpression(this);
}

CppParser::CastExpressionContext* CppParser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 72, CppParser::RuleCastExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(845);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(839);
      unaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(840);
      match(CppParser::LeftParenthesis);
      setState(841);
      typeIdentifier();
      setState(842);
      match(CppParser::RightParenthesis);
      setState(843);
      castExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerManipulationExpressionContext ------------------------------------------------------------------

CppParser::PointerManipulationExpressionContext::PointerManipulationExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::CastExpressionContext* CppParser::PointerManipulationExpressionContext::castExpression() {
  return getRuleContext<CppParser::CastExpressionContext>(0);
}

CppParser::PointerManipulationExpressionContext* CppParser::PointerManipulationExpressionContext::pointerManipulationExpression() {
  return getRuleContext<CppParser::PointerManipulationExpressionContext>(0);
}

tree::TerminalNode* CppParser::PointerManipulationExpressionContext::PeriodAsterisk() {
  return getToken(CppParser::PeriodAsterisk, 0);
}

tree::TerminalNode* CppParser::PointerManipulationExpressionContext::ArrowAsterisk() {
  return getToken(CppParser::ArrowAsterisk, 0);
}


size_t CppParser::PointerManipulationExpressionContext::getRuleIndex() const {
  return CppParser::RulePointerManipulationExpression;
}

void CppParser::PointerManipulationExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerManipulationExpression(this);
}

void CppParser::PointerManipulationExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerManipulationExpression(this);
}


CppParser::PointerManipulationExpressionContext* CppParser::pointerManipulationExpression() {
   return pointerManipulationExpression(0);
}

CppParser::PointerManipulationExpressionContext* CppParser::pointerManipulationExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::PointerManipulationExpressionContext *_localctx = _tracker.createInstance<PointerManipulationExpressionContext>(_ctx, parentState);
  CppParser::PointerManipulationExpressionContext *previousContext = _localctx;
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, CppParser::RulePointerManipulationExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(848);
    castExpression();
    _ctx->stop = _input->LT(-1);
    setState(858);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(856);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PointerManipulationExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePointerManipulationExpression);
          setState(850);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(851);
          match(CppParser::PeriodAsterisk);
          setState(852);
          castExpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PointerManipulationExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePointerManipulationExpression);
          setState(853);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(854);
          match(CppParser::ArrowAsterisk);
          setState(855);
          castExpression();
          break;
        }

        } 
      }
      setState(860);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

CppParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::PointerManipulationExpressionContext* CppParser::MultiplicativeExpressionContext::pointerManipulationExpression() {
  return getRuleContext<CppParser::PointerManipulationExpressionContext>(0);
}

CppParser::MultiplicativeExpressionContext* CppParser::MultiplicativeExpressionContext::multiplicativeExpression() {
  return getRuleContext<CppParser::MultiplicativeExpressionContext>(0);
}

tree::TerminalNode* CppParser::MultiplicativeExpressionContext::Asterisk() {
  return getToken(CppParser::Asterisk, 0);
}

tree::TerminalNode* CppParser::MultiplicativeExpressionContext::ForwardSlash() {
  return getToken(CppParser::ForwardSlash, 0);
}

tree::TerminalNode* CppParser::MultiplicativeExpressionContext::Percent() {
  return getToken(CppParser::Percent, 0);
}


size_t CppParser::MultiplicativeExpressionContext::getRuleIndex() const {
  return CppParser::RuleMultiplicativeExpression;
}

void CppParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void CppParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


CppParser::MultiplicativeExpressionContext* CppParser::multiplicativeExpression() {
   return multiplicativeExpression(0);
}

CppParser::MultiplicativeExpressionContext* CppParser::multiplicativeExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, parentState);
  CppParser::MultiplicativeExpressionContext *previousContext = _localctx;
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, CppParser::RuleMultiplicativeExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(862);
    pointerManipulationExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(875);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(873);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(864);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(865);
          match(CppParser::Asterisk);
          setState(866);
          pointerManipulationExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(867);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(868);
          match(CppParser::ForwardSlash);
          setState(869);
          pointerManipulationExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
          setState(870);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(871);
          match(CppParser::Percent);
          setState(872);
          pointerManipulationExpression(0);
          break;
        }

        } 
      }
      setState(877);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

CppParser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::MultiplicativeExpressionContext* CppParser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContext<CppParser::MultiplicativeExpressionContext>(0);
}

CppParser::AdditiveExpressionContext* CppParser::AdditiveExpressionContext::additiveExpression() {
  return getRuleContext<CppParser::AdditiveExpressionContext>(0);
}

tree::TerminalNode* CppParser::AdditiveExpressionContext::Plus() {
  return getToken(CppParser::Plus, 0);
}

tree::TerminalNode* CppParser::AdditiveExpressionContext::Minus() {
  return getToken(CppParser::Minus, 0);
}


size_t CppParser::AdditiveExpressionContext::getRuleIndex() const {
  return CppParser::RuleAdditiveExpression;
}

void CppParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void CppParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


CppParser::AdditiveExpressionContext* CppParser::additiveExpression() {
   return additiveExpression(0);
}

CppParser::AdditiveExpressionContext* CppParser::additiveExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, parentState);
  CppParser::AdditiveExpressionContext *previousContext = _localctx;
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, CppParser::RuleAdditiveExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(879);
    multiplicativeExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(889);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(887);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(881);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(882);
          match(CppParser::Plus);
          setState(883);
          multiplicativeExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
          setState(884);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(885);
          match(CppParser::Minus);
          setState(886);
          multiplicativeExpression(0);
          break;
        }

        } 
      }
      setState(891);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftExpressionContext ------------------------------------------------------------------

CppParser::ShiftExpressionContext::ShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::AdditiveExpressionContext* CppParser::ShiftExpressionContext::additiveExpression() {
  return getRuleContext<CppParser::AdditiveExpressionContext>(0);
}

CppParser::ShiftExpressionContext* CppParser::ShiftExpressionContext::shiftExpression() {
  return getRuleContext<CppParser::ShiftExpressionContext>(0);
}

tree::TerminalNode* CppParser::ShiftExpressionContext::DoubleLessThan() {
  return getToken(CppParser::DoubleLessThan, 0);
}

tree::TerminalNode* CppParser::ShiftExpressionContext::DoubleGreaterThan() {
  return getToken(CppParser::DoubleGreaterThan, 0);
}


size_t CppParser::ShiftExpressionContext::getRuleIndex() const {
  return CppParser::RuleShiftExpression;
}

void CppParser::ShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftExpression(this);
}

void CppParser::ShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftExpression(this);
}


CppParser::ShiftExpressionContext* CppParser::shiftExpression() {
   return shiftExpression(0);
}

CppParser::ShiftExpressionContext* CppParser::shiftExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::ShiftExpressionContext *_localctx = _tracker.createInstance<ShiftExpressionContext>(_ctx, parentState);
  CppParser::ShiftExpressionContext *previousContext = _localctx;
  size_t startState = 80;
  enterRecursionRule(_localctx, 80, CppParser::RuleShiftExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(893);
    additiveExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(903);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(901);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(895);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(896);
          match(CppParser::DoubleLessThan);
          setState(897);
          additiveExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ShiftExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShiftExpression);
          setState(898);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(899);
          match(CppParser::DoubleGreaterThan);
          setState(900);
          additiveExpression(0);
          break;
        }

        } 
      }
      setState(905);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalExpressionContext ------------------------------------------------------------------

CppParser::RelationalExpressionContext::RelationalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ShiftExpressionContext* CppParser::RelationalExpressionContext::shiftExpression() {
  return getRuleContext<CppParser::ShiftExpressionContext>(0);
}

CppParser::RelationalExpressionContext* CppParser::RelationalExpressionContext::relationalExpression() {
  return getRuleContext<CppParser::RelationalExpressionContext>(0);
}

tree::TerminalNode* CppParser::RelationalExpressionContext::LessThan() {
  return getToken(CppParser::LessThan, 0);
}

tree::TerminalNode* CppParser::RelationalExpressionContext::GreaterThan() {
  return getToken(CppParser::GreaterThan, 0);
}

tree::TerminalNode* CppParser::RelationalExpressionContext::LessThanEqual() {
  return getToken(CppParser::LessThanEqual, 0);
}

tree::TerminalNode* CppParser::RelationalExpressionContext::GreaterThanEqual() {
  return getToken(CppParser::GreaterThanEqual, 0);
}


size_t CppParser::RelationalExpressionContext::getRuleIndex() const {
  return CppParser::RuleRelationalExpression;
}

void CppParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}

void CppParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}


CppParser::RelationalExpressionContext* CppParser::relationalExpression() {
   return relationalExpression(0);
}

CppParser::RelationalExpressionContext* CppParser::relationalExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::RelationalExpressionContext *_localctx = _tracker.createInstance<RelationalExpressionContext>(_ctx, parentState);
  CppParser::RelationalExpressionContext *previousContext = _localctx;
  size_t startState = 82;
  enterRecursionRule(_localctx, 82, CppParser::RuleRelationalExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(907);
    shiftExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(923);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(921);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(909);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(910);
          match(CppParser::LessThan);
          setState(911);
          shiftExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(912);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(913);
          match(CppParser::GreaterThan);
          setState(914);
          shiftExpression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(915);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(916);
          match(CppParser::LessThanEqual);
          setState(917);
          shiftExpression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<RelationalExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelationalExpression);
          setState(918);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(919);
          match(CppParser::GreaterThanEqual);
          setState(920);
          shiftExpression(0);
          break;
        }

        } 
      }
      setState(925);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

CppParser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::RelationalExpressionContext* CppParser::EqualityExpressionContext::relationalExpression() {
  return getRuleContext<CppParser::RelationalExpressionContext>(0);
}

CppParser::EqualityExpressionContext* CppParser::EqualityExpressionContext::equalityExpression() {
  return getRuleContext<CppParser::EqualityExpressionContext>(0);
}

tree::TerminalNode* CppParser::EqualityExpressionContext::DoubleEqual() {
  return getToken(CppParser::DoubleEqual, 0);
}

tree::TerminalNode* CppParser::EqualityExpressionContext::ExclamationMarkEqual() {
  return getToken(CppParser::ExclamationMarkEqual, 0);
}


size_t CppParser::EqualityExpressionContext::getRuleIndex() const {
  return CppParser::RuleEqualityExpression;
}

void CppParser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}

void CppParser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}


CppParser::EqualityExpressionContext* CppParser::equalityExpression() {
   return equalityExpression(0);
}

CppParser::EqualityExpressionContext* CppParser::equalityExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, parentState);
  CppParser::EqualityExpressionContext *previousContext = _localctx;
  size_t startState = 84;
  enterRecursionRule(_localctx, 84, CppParser::RuleEqualityExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(927);
    relationalExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(937);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(935);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(929);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(930);
          match(CppParser::DoubleEqual);
          setState(931);
          relationalExpression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
          setState(932);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(933);
          match(CppParser::ExclamationMarkEqual);
          setState(934);
          relationalExpression(0);
          break;
        }

        } 
      }
      setState(939);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

CppParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::EqualityExpressionContext* CppParser::AndExpressionContext::equalityExpression() {
  return getRuleContext<CppParser::EqualityExpressionContext>(0);
}

CppParser::AndExpressionContext* CppParser::AndExpressionContext::andExpression() {
  return getRuleContext<CppParser::AndExpressionContext>(0);
}

tree::TerminalNode* CppParser::AndExpressionContext::Ampersand() {
  return getToken(CppParser::Ampersand, 0);
}


size_t CppParser::AndExpressionContext::getRuleIndex() const {
  return CppParser::RuleAndExpression;
}

void CppParser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}

void CppParser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}


CppParser::AndExpressionContext* CppParser::andExpression() {
   return andExpression(0);
}

CppParser::AndExpressionContext* CppParser::andExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, parentState);
  CppParser::AndExpressionContext *previousContext = _localctx;
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, CppParser::RuleAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(941);
    equalityExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(948);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAndExpression);
        setState(943);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(944);
        match(CppParser::Ampersand);
        setState(945);
        equalityExpression(0); 
      }
      setState(950);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExclusiveOrExpressionContext ------------------------------------------------------------------

CppParser::ExclusiveOrExpressionContext::ExclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::AndExpressionContext* CppParser::ExclusiveOrExpressionContext::andExpression() {
  return getRuleContext<CppParser::AndExpressionContext>(0);
}

CppParser::ExclusiveOrExpressionContext* CppParser::ExclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<CppParser::ExclusiveOrExpressionContext>(0);
}

tree::TerminalNode* CppParser::ExclusiveOrExpressionContext::Caret() {
  return getToken(CppParser::Caret, 0);
}


size_t CppParser::ExclusiveOrExpressionContext::getRuleIndex() const {
  return CppParser::RuleExclusiveOrExpression;
}

void CppParser::ExclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExclusiveOrExpression(this);
}

void CppParser::ExclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExclusiveOrExpression(this);
}


CppParser::ExclusiveOrExpressionContext* CppParser::exclusiveOrExpression() {
   return exclusiveOrExpression(0);
}

CppParser::ExclusiveOrExpressionContext* CppParser::exclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::ExclusiveOrExpressionContext *_localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(_ctx, parentState);
  CppParser::ExclusiveOrExpressionContext *previousContext = _localctx;
  size_t startState = 88;
  enterRecursionRule(_localctx, 88, CppParser::RuleExclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(952);
    andExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(959);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExclusiveOrExpression);
        setState(954);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(955);
        match(CppParser::Caret);
        setState(956);
        andExpression(0); 
      }
      setState(961);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InclusiveOrExpressionContext ------------------------------------------------------------------

CppParser::InclusiveOrExpressionContext::InclusiveOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ExclusiveOrExpressionContext* CppParser::InclusiveOrExpressionContext::exclusiveOrExpression() {
  return getRuleContext<CppParser::ExclusiveOrExpressionContext>(0);
}

CppParser::InclusiveOrExpressionContext* CppParser::InclusiveOrExpressionContext::inclusiveOrExpression() {
  return getRuleContext<CppParser::InclusiveOrExpressionContext>(0);
}

tree::TerminalNode* CppParser::InclusiveOrExpressionContext::VerticalBar() {
  return getToken(CppParser::VerticalBar, 0);
}


size_t CppParser::InclusiveOrExpressionContext::getRuleIndex() const {
  return CppParser::RuleInclusiveOrExpression;
}

void CppParser::InclusiveOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclusiveOrExpression(this);
}

void CppParser::InclusiveOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclusiveOrExpression(this);
}


CppParser::InclusiveOrExpressionContext* CppParser::inclusiveOrExpression() {
   return inclusiveOrExpression(0);
}

CppParser::InclusiveOrExpressionContext* CppParser::inclusiveOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::InclusiveOrExpressionContext *_localctx = _tracker.createInstance<InclusiveOrExpressionContext>(_ctx, parentState);
  CppParser::InclusiveOrExpressionContext *previousContext = _localctx;
  size_t startState = 90;
  enterRecursionRule(_localctx, 90, CppParser::RuleInclusiveOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(963);
    exclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(970);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InclusiveOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInclusiveOrExpression);
        setState(965);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(966);
        match(CppParser::VerticalBar);
        setState(967);
        exclusiveOrExpression(0); 
      }
      setState(972);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

CppParser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::InclusiveOrExpressionContext* CppParser::LogicalAndExpressionContext::inclusiveOrExpression() {
  return getRuleContext<CppParser::InclusiveOrExpressionContext>(0);
}

CppParser::LogicalAndExpressionContext* CppParser::LogicalAndExpressionContext::logicalAndExpression() {
  return getRuleContext<CppParser::LogicalAndExpressionContext>(0);
}

tree::TerminalNode* CppParser::LogicalAndExpressionContext::DoubleAmpersand() {
  return getToken(CppParser::DoubleAmpersand, 0);
}


size_t CppParser::LogicalAndExpressionContext::getRuleIndex() const {
  return CppParser::RuleLogicalAndExpression;
}

void CppParser::LogicalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpression(this);
}

void CppParser::LogicalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpression(this);
}


CppParser::LogicalAndExpressionContext* CppParser::logicalAndExpression() {
   return logicalAndExpression(0);
}

CppParser::LogicalAndExpressionContext* CppParser::logicalAndExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, parentState);
  CppParser::LogicalAndExpressionContext *previousContext = _localctx;
  size_t startState = 92;
  enterRecursionRule(_localctx, 92, CppParser::RuleLogicalAndExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(974);
    inclusiveOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(981);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalAndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalAndExpression);
        setState(976);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(977);
        match(CppParser::DoubleAmpersand);
        setState(978);
        inclusiveOrExpression(0); 
      }
      setState(983);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

CppParser::LogicalOrExpressionContext::LogicalOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::LogicalAndExpressionContext* CppParser::LogicalOrExpressionContext::logicalAndExpression() {
  return getRuleContext<CppParser::LogicalAndExpressionContext>(0);
}

CppParser::LogicalOrExpressionContext* CppParser::LogicalOrExpressionContext::logicalOrExpression() {
  return getRuleContext<CppParser::LogicalOrExpressionContext>(0);
}

tree::TerminalNode* CppParser::LogicalOrExpressionContext::DoubleVerticalBar() {
  return getToken(CppParser::DoubleVerticalBar, 0);
}


size_t CppParser::LogicalOrExpressionContext::getRuleIndex() const {
  return CppParser::RuleLogicalOrExpression;
}

void CppParser::LogicalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOrExpression(this);
}

void CppParser::LogicalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOrExpression(this);
}


CppParser::LogicalOrExpressionContext* CppParser::logicalOrExpression() {
   return logicalOrExpression(0);
}

CppParser::LogicalOrExpressionContext* CppParser::logicalOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::LogicalOrExpressionContext *_localctx = _tracker.createInstance<LogicalOrExpressionContext>(_ctx, parentState);
  CppParser::LogicalOrExpressionContext *previousContext = _localctx;
  size_t startState = 94;
  enterRecursionRule(_localctx, 94, CppParser::RuleLogicalOrExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(985);
    logicalAndExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(992);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalOrExpression);
        setState(987);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(988);
        match(CppParser::DoubleVerticalBar);
        setState(989);
        logicalAndExpression(0); 
      }
      setState(994);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

CppParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::LogicalOrExpressionContext* CppParser::ConditionalExpressionContext::logicalOrExpression() {
  return getRuleContext<CppParser::LogicalOrExpressionContext>(0);
}

tree::TerminalNode* CppParser::ConditionalExpressionContext::QuestionMark() {
  return getToken(CppParser::QuestionMark, 0);
}

CppParser::ExpressionContext* CppParser::ConditionalExpressionContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::ConditionalExpressionContext::Colon() {
  return getToken(CppParser::Colon, 0);
}

CppParser::AssignmentExpressionContext* CppParser::ConditionalExpressionContext::assignmentExpression() {
  return getRuleContext<CppParser::AssignmentExpressionContext>(0);
}


size_t CppParser::ConditionalExpressionContext::getRuleIndex() const {
  return CppParser::RuleConditionalExpression;
}

void CppParser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void CppParser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}

CppParser::ConditionalExpressionContext* CppParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 96, CppParser::RuleConditionalExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1002);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(995);
      logicalOrExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(996);
      logicalOrExpression(0);
      setState(997);
      match(CppParser::QuestionMark);
      setState(998);
      expression(0);
      setState(999);
      match(CppParser::Colon);
      setState(1000);
      assignmentExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowExpressionContext ------------------------------------------------------------------

CppParser::ThrowExpressionContext::ThrowExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ThrowExpressionContext::Throw() {
  return getToken(CppParser::Throw, 0);
}

CppParser::AssignmentExpressionContext* CppParser::ThrowExpressionContext::assignmentExpression() {
  return getRuleContext<CppParser::AssignmentExpressionContext>(0);
}


size_t CppParser::ThrowExpressionContext::getRuleIndex() const {
  return CppParser::RuleThrowExpression;
}

void CppParser::ThrowExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowExpression(this);
}

void CppParser::ThrowExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowExpression(this);
}

CppParser::ThrowExpressionContext* CppParser::throwExpression() {
  ThrowExpressionContext *_localctx = _tracker.createInstance<ThrowExpressionContext>(_ctx, getState());
  enterRule(_localctx, 98, CppParser::RuleThrowExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1004);
    match(CppParser::Throw);
    setState(1006);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      setState(1005);
      assignmentExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

CppParser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ConditionalExpressionContext* CppParser::AssignmentExpressionContext::conditionalExpression() {
  return getRuleContext<CppParser::ConditionalExpressionContext>(0);
}

CppParser::LogicalOrExpressionContext* CppParser::AssignmentExpressionContext::logicalOrExpression() {
  return getRuleContext<CppParser::LogicalOrExpressionContext>(0);
}

CppParser::AssignmentOperatorContext* CppParser::AssignmentExpressionContext::assignmentOperator() {
  return getRuleContext<CppParser::AssignmentOperatorContext>(0);
}

CppParser::InitializerClauseContext* CppParser::AssignmentExpressionContext::initializerClause() {
  return getRuleContext<CppParser::InitializerClauseContext>(0);
}

CppParser::ThrowExpressionContext* CppParser::AssignmentExpressionContext::throwExpression() {
  return getRuleContext<CppParser::ThrowExpressionContext>(0);
}


size_t CppParser::AssignmentExpressionContext::getRuleIndex() const {
  return CppParser::RuleAssignmentExpression;
}

void CppParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void CppParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}

CppParser::AssignmentExpressionContext* CppParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 100, CppParser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1014);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1008);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1009);
      logicalOrExpression(0);
      setState(1010);
      assignmentOperator();
      setState(1011);
      initializerClause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1013);
      throwExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

CppParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::AssignmentOperatorContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

tree::TerminalNode* CppParser::AssignmentOperatorContext::AsteriskEqual() {
  return getToken(CppParser::AsteriskEqual, 0);
}

tree::TerminalNode* CppParser::AssignmentOperatorContext::ForwardSlashEqual() {
  return getToken(CppParser::ForwardSlashEqual, 0);
}

tree::TerminalNode* CppParser::AssignmentOperatorContext::PercentEqual() {
  return getToken(CppParser::PercentEqual, 0);
}

tree::TerminalNode* CppParser::AssignmentOperatorContext::PlusEqual() {
  return getToken(CppParser::PlusEqual, 0);
}

tree::TerminalNode* CppParser::AssignmentOperatorContext::MinusEqual() {
  return getToken(CppParser::MinusEqual, 0);
}

tree::TerminalNode* CppParser::AssignmentOperatorContext::DoubleGreaterThanEqual() {
  return getToken(CppParser::DoubleGreaterThanEqual, 0);
}

tree::TerminalNode* CppParser::AssignmentOperatorContext::DoubleLessThanEqual() {
  return getToken(CppParser::DoubleLessThanEqual, 0);
}

tree::TerminalNode* CppParser::AssignmentOperatorContext::AmpersandEqual() {
  return getToken(CppParser::AmpersandEqual, 0);
}

tree::TerminalNode* CppParser::AssignmentOperatorContext::CaretEqual() {
  return getToken(CppParser::CaretEqual, 0);
}

tree::TerminalNode* CppParser::AssignmentOperatorContext::VerticalBarEqual() {
  return getToken(CppParser::VerticalBarEqual, 0);
}


size_t CppParser::AssignmentOperatorContext::getRuleIndex() const {
  return CppParser::RuleAssignmentOperator;
}

void CppParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void CppParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}

CppParser::AssignmentOperatorContext* CppParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 102, CppParser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1016);
    _la = _input->LA(1);
    if (!(((((_la - 103) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 103)) & ((1ULL << (CppParser::Equal - 103))
      | (1ULL << (CppParser::PlusEqual - 103))
      | (1ULL << (CppParser::MinusEqual - 103))
      | (1ULL << (CppParser::AsteriskEqual - 103))
      | (1ULL << (CppParser::ForwardSlashEqual - 103))
      | (1ULL << (CppParser::PercentEqual - 103))
      | (1ULL << (CppParser::CaretEqual - 103))
      | (1ULL << (CppParser::AmpersandEqual - 103))
      | (1ULL << (CppParser::VerticalBarEqual - 103))
      | (1ULL << (CppParser::DoubleLessThanEqual - 103))
      | (1ULL << (CppParser::DoubleGreaterThanEqual - 103)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CppParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::AssignmentExpressionContext* CppParser::ExpressionContext::assignmentExpression() {
  return getRuleContext<CppParser::AssignmentExpressionContext>(0);
}

CppParser::ExpressionContext* CppParser::ExpressionContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::ExpressionContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::ExpressionContext::getRuleIndex() const {
  return CppParser::RuleExpression;
}

void CppParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CppParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


CppParser::ExpressionContext* CppParser::expression() {
   return expression(0);
}

CppParser::ExpressionContext* CppParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  CppParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 104;
  enterRecursionRule(_localctx, 104, CppParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1019);
    assignmentExpression();
    _ctx->stop = _input->LT(-1);
    setState(1026);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(1021);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1022);
        match(CppParser::Comma);
        setState(1023);
        assignmentExpression(); 
      }
      setState(1028);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConstantExpressionContext ------------------------------------------------------------------

CppParser::ConstantExpressionContext::ConstantExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ConditionalExpressionContext* CppParser::ConstantExpressionContext::conditionalExpression() {
  return getRuleContext<CppParser::ConditionalExpressionContext>(0);
}


size_t CppParser::ConstantExpressionContext::getRuleIndex() const {
  return CppParser::RuleConstantExpression;
}

void CppParser::ConstantExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantExpression(this);
}

void CppParser::ConstantExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantExpression(this);
}

CppParser::ConstantExpressionContext* CppParser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 106, CppParser::RuleConstantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1029);
    conditionalExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CppParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::LabeledStatementContext* CppParser::StatementContext::labeledStatement() {
  return getRuleContext<CppParser::LabeledStatementContext>(0);
}

CppParser::ExpressionStatementContext* CppParser::StatementContext::expressionStatement() {
  return getRuleContext<CppParser::ExpressionStatementContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::StatementContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::CompoundStatementContext* CppParser::StatementContext::compoundStatement() {
  return getRuleContext<CppParser::CompoundStatementContext>(0);
}

CppParser::SelectionStatementContext* CppParser::StatementContext::selectionStatement() {
  return getRuleContext<CppParser::SelectionStatementContext>(0);
}

CppParser::IterationStatementContext* CppParser::StatementContext::iterationStatement() {
  return getRuleContext<CppParser::IterationStatementContext>(0);
}

CppParser::JumpStatementContext* CppParser::StatementContext::jumpStatement() {
  return getRuleContext<CppParser::JumpStatementContext>(0);
}

CppParser::DeclarationStatementContext* CppParser::StatementContext::declarationStatement() {
  return getRuleContext<CppParser::DeclarationStatementContext>(0);
}

CppParser::TryBlockContext* CppParser::StatementContext::tryBlock() {
  return getRuleContext<CppParser::TryBlockContext>(0);
}


size_t CppParser::StatementContext::getRuleIndex() const {
  return CppParser::RuleStatement;
}

void CppParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CppParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

CppParser::StatementContext* CppParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 108, CppParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1057);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1031);
      labeledStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1033);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
      case 1: {
        setState(1032);
        attributeSpecifierSequence(0);
        break;
      }

      }
      setState(1035);
      expressionStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1037);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1036);
        attributeSpecifierSequence(0);
      }
      setState(1039);
      compoundStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1041);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1040);
        attributeSpecifierSequence(0);
      }
      setState(1043);
      selectionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1045);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1044);
        attributeSpecifierSequence(0);
      }
      setState(1047);
      iterationStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1049);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1048);
        attributeSpecifierSequence(0);
      }
      setState(1051);
      jumpStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1052);
      declarationStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1054);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1053);
        attributeSpecifierSequence(0);
      }
      setState(1056);
      tryBlock();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerStatementContext ------------------------------------------------------------------

CppParser::InitializerStatementContext::InitializerStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ExpressionStatementContext* CppParser::InitializerStatementContext::expressionStatement() {
  return getRuleContext<CppParser::ExpressionStatementContext>(0);
}

CppParser::SimpleDeclarationContext* CppParser::InitializerStatementContext::simpleDeclaration() {
  return getRuleContext<CppParser::SimpleDeclarationContext>(0);
}


size_t CppParser::InitializerStatementContext::getRuleIndex() const {
  return CppParser::RuleInitializerStatement;
}

void CppParser::InitializerStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerStatement(this);
}

void CppParser::InitializerStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerStatement(this);
}

CppParser::InitializerStatementContext* CppParser::initializerStatement() {
  InitializerStatementContext *_localctx = _tracker.createInstance<InitializerStatementContext>(_ctx, getState());
  enterRule(_localctx, 110, CppParser::RuleInitializerStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1061);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1059);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1060);
      simpleDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

CppParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ExpressionContext* CppParser::ConditionContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

CppParser::DeclarationSpecifierSequenceContext* CppParser::ConditionContext::declarationSpecifierSequence() {
  return getRuleContext<CppParser::DeclarationSpecifierSequenceContext>(0);
}

CppParser::DeclaratorContext* CppParser::ConditionContext::declarator() {
  return getRuleContext<CppParser::DeclaratorContext>(0);
}

CppParser::BraceOrEqualInitializerContext* CppParser::ConditionContext::braceOrEqualInitializer() {
  return getRuleContext<CppParser::BraceOrEqualInitializerContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::ConditionContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::ConditionContext::getRuleIndex() const {
  return CppParser::RuleCondition;
}

void CppParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void CppParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

CppParser::ConditionContext* CppParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 112, CppParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1071);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1063);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1065);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1064);
        attributeSpecifierSequence(0);
      }
      setState(1067);
      declarationSpecifierSequence();
      setState(1068);
      declarator();
      setState(1069);
      braceOrEqualInitializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStatementContext ------------------------------------------------------------------

CppParser::LabeledStatementContext::LabeledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::LabeledStatementContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::LabeledStatementContext::Colon() {
  return getToken(CppParser::Colon, 0);
}

CppParser::StatementContext* CppParser::LabeledStatementContext::statement() {
  return getRuleContext<CppParser::StatementContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::LabeledStatementContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::LabeledStatementContext::Case() {
  return getToken(CppParser::Case, 0);
}

CppParser::ConstantExpressionContext* CppParser::LabeledStatementContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CppParser::LabeledStatementContext::Default() {
  return getToken(CppParser::Default, 0);
}


size_t CppParser::LabeledStatementContext::getRuleIndex() const {
  return CppParser::RuleLabeledStatement;
}

void CppParser::LabeledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabeledStatement(this);
}

void CppParser::LabeledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabeledStatement(this);
}

CppParser::LabeledStatementContext* CppParser::labeledStatement() {
  LabeledStatementContext *_localctx = _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
  enterRule(_localctx, 114, CppParser::RuleLabeledStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1093);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1074);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1073);
        attributeSpecifierSequence(0);
      }
      setState(1076);
      match(CppParser::Identifier);
      setState(1077);
      match(CppParser::Colon);
      setState(1078);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1080);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1079);
        attributeSpecifierSequence(0);
      }
      setState(1082);
      match(CppParser::Case);
      setState(1083);
      constantExpression();
      setState(1084);
      match(CppParser::Colon);
      setState(1085);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1088);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1087);
        attributeSpecifierSequence(0);
      }
      setState(1090);
      match(CppParser::Default);
      setState(1091);
      match(CppParser::Colon);
      setState(1092);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

CppParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ExpressionStatementContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

CppParser::ExpressionContext* CppParser::ExpressionStatementContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}


size_t CppParser::ExpressionStatementContext::getRuleIndex() const {
  return CppParser::RuleExpressionStatement;
}

void CppParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void CppParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

CppParser::ExpressionStatementContext* CppParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 116, CppParser::RuleExpressionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1096);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::Class)
      | (1ULL << CppParser::Const)
      | (1ULL << CppParser::ConstCast)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Delete)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::DynamicCast)
      | (1ULL << CppParser::Enum)
      | (1ULL << CppParser::False)
      | (1ULL << CppParser::Float)
      | (1ULL << CppParser::Int)
      | (1ULL << CppParser::Long)
      | (1ULL << CppParser::New)
      | (1ULL << CppParser::NoExcept)
      | (1ULL << CppParser::Nullptr)
      | (1ULL << CppParser::Operator)
      | (1ULL << CppParser::ReinterpretCast)
      | (1ULL << CppParser::Short)
      | (1ULL << CppParser::Signed)
      | (1ULL << CppParser::SizeOf)
      | (1ULL << CppParser::StaticCast)
      | (1ULL << CppParser::Struct)
      | (1ULL << CppParser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
      | (1ULL << (CppParser::True - 64))
      | (1ULL << (CppParser::TypeName - 64))
      | (1ULL << (CppParser::Union - 64))
      | (1ULL << (CppParser::Unsigned - 64))
      | (1ULL << (CppParser::Void - 64))
      | (1ULL << (CppParser::Volatile - 64))
      | (1ULL << (CppParser::WChar - 64))
      | (1ULL << (CppParser::LeftBracket - 64))
      | (1ULL << (CppParser::LeftParenthesis - 64))
      | (1ULL << (CppParser::DoubleColon - 64))
      | (1ULL << (CppParser::Plus - 64))
      | (1ULL << (CppParser::Minus - 64))
      | (1ULL << (CppParser::Asterisk - 64))
      | (1ULL << (CppParser::Ampersand - 64))
      | (1ULL << (CppParser::VerticalBar - 64))
      | (1ULL << (CppParser::Tilde - 64))
      | (1ULL << (CppParser::ExclamationMark - 64))
      | (1ULL << (CppParser::DoublePlus - 64))
      | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
      | (1ULL << (CppParser::IntegerLiteral - 129))
      | (1ULL << (CppParser::FloatingPointLiteral - 129))
      | (1ULL << (CppParser::CharacterLiteral - 129))
      | (1ULL << (CppParser::StringLiteral - 129))
      | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
      | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
      | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
      | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
      | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
      setState(1095);
      expression(0);
    }
    setState(1098);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

CppParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::CompoundStatementContext::LeftBrace() {
  return getToken(CppParser::LeftBrace, 0);
}

tree::TerminalNode* CppParser::CompoundStatementContext::RightBrace() {
  return getToken(CppParser::RightBrace, 0);
}

CppParser::StatementSequenceContext* CppParser::CompoundStatementContext::statementSequence() {
  return getRuleContext<CppParser::StatementSequenceContext>(0);
}


size_t CppParser::CompoundStatementContext::getRuleIndex() const {
  return CppParser::RuleCompoundStatement;
}

void CppParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void CppParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}

CppParser::CompoundStatementContext* CppParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 118, CppParser::RuleCompoundStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1100);
    match(CppParser::LeftBrace);
    setState(1102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
      | (1ULL << CppParser::AlignOf)
      | (1ULL << CppParser::Asm)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Break)
      | (1ULL << CppParser::Case)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::Class)
      | (1ULL << CppParser::Const)
      | (1ULL << CppParser::ConstExpr)
      | (1ULL << CppParser::ConstCast)
      | (1ULL << CppParser::Continue)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Default)
      | (1ULL << CppParser::Delete)
      | (1ULL << CppParser::Do)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::DynamicCast)
      | (1ULL << CppParser::Enum)
      | (1ULL << CppParser::Explicit)
      | (1ULL << CppParser::Extern)
      | (1ULL << CppParser::False)
      | (1ULL << CppParser::Float)
      | (1ULL << CppParser::For)
      | (1ULL << CppParser::Friend)
      | (1ULL << CppParser::GoTo)
      | (1ULL << CppParser::If)
      | (1ULL << CppParser::Inline)
      | (1ULL << CppParser::Int)
      | (1ULL << CppParser::Long)
      | (1ULL << CppParser::Mutable)
      | (1ULL << CppParser::Namespace)
      | (1ULL << CppParser::New)
      | (1ULL << CppParser::NoExcept)
      | (1ULL << CppParser::Nullptr)
      | (1ULL << CppParser::Operator)
      | (1ULL << CppParser::ReinterpretCast)
      | (1ULL << CppParser::Return)
      | (1ULL << CppParser::Short)
      | (1ULL << CppParser::Signed)
      | (1ULL << CppParser::SizeOf)
      | (1ULL << CppParser::Static)
      | (1ULL << CppParser::StaticAssert)
      | (1ULL << CppParser::StaticCast)
      | (1ULL << CppParser::Struct)
      | (1ULL << CppParser::Switch)
      | (1ULL << CppParser::This)
      | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
      | (1ULL << (CppParser::True - 64))
      | (1ULL << (CppParser::Try - 64))
      | (1ULL << (CppParser::TypeDef - 64))
      | (1ULL << (CppParser::TypeName - 64))
      | (1ULL << (CppParser::Union - 64))
      | (1ULL << (CppParser::Unsigned - 64))
      | (1ULL << (CppParser::Using - 64))
      | (1ULL << (CppParser::Virtual - 64))
      | (1ULL << (CppParser::Void - 64))
      | (1ULL << (CppParser::Volatile - 64))
      | (1ULL << (CppParser::WChar - 64))
      | (1ULL << (CppParser::While - 64))
      | (1ULL << (CppParser::LeftBrace - 64))
      | (1ULL << (CppParser::LeftBracket - 64))
      | (1ULL << (CppParser::LeftParenthesis - 64))
      | (1ULL << (CppParser::Semicolon - 64))
      | (1ULL << (CppParser::DoubleColon - 64))
      | (1ULL << (CppParser::Plus - 64))
      | (1ULL << (CppParser::Minus - 64))
      | (1ULL << (CppParser::Asterisk - 64))
      | (1ULL << (CppParser::Ampersand - 64))
      | (1ULL << (CppParser::VerticalBar - 64))
      | (1ULL << (CppParser::Tilde - 64))
      | (1ULL << (CppParser::ExclamationMark - 64))
      | (1ULL << (CppParser::DoublePlus - 64))
      | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
      | (1ULL << (CppParser::IntegerLiteral - 129))
      | (1ULL << (CppParser::FloatingPointLiteral - 129))
      | (1ULL << (CppParser::CharacterLiteral - 129))
      | (1ULL << (CppParser::StringLiteral - 129))
      | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
      | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
      | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
      | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
      | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
      setState(1101);
      statementSequence(0);
    }
    setState(1104);
    match(CppParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementSequenceContext ------------------------------------------------------------------

CppParser::StatementSequenceContext::StatementSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::StatementContext* CppParser::StatementSequenceContext::statement() {
  return getRuleContext<CppParser::StatementContext>(0);
}

CppParser::StatementSequenceContext* CppParser::StatementSequenceContext::statementSequence() {
  return getRuleContext<CppParser::StatementSequenceContext>(0);
}


size_t CppParser::StatementSequenceContext::getRuleIndex() const {
  return CppParser::RuleStatementSequence;
}

void CppParser::StatementSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementSequence(this);
}

void CppParser::StatementSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementSequence(this);
}


CppParser::StatementSequenceContext* CppParser::statementSequence() {
   return statementSequence(0);
}

CppParser::StatementSequenceContext* CppParser::statementSequence(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::StatementSequenceContext *_localctx = _tracker.createInstance<StatementSequenceContext>(_ctx, parentState);
  CppParser::StatementSequenceContext *previousContext = _localctx;
  size_t startState = 120;
  enterRecursionRule(_localctx, 120, CppParser::RuleStatementSequence, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1107);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(1113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementSequenceContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatementSequence);
        setState(1109);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1110);
        statement(); 
      }
      setState(1115);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SelectionStatementContext ------------------------------------------------------------------

CppParser::SelectionStatementContext::SelectionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::SelectionStatementContext::If() {
  return getToken(CppParser::If, 0);
}

tree::TerminalNode* CppParser::SelectionStatementContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ConditionContext* CppParser::SelectionStatementContext::condition() {
  return getRuleContext<CppParser::ConditionContext>(0);
}

tree::TerminalNode* CppParser::SelectionStatementContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

std::vector<CppParser::StatementContext *> CppParser::SelectionStatementContext::statement() {
  return getRuleContexts<CppParser::StatementContext>();
}

CppParser::StatementContext* CppParser::SelectionStatementContext::statement(size_t i) {
  return getRuleContext<CppParser::StatementContext>(i);
}

tree::TerminalNode* CppParser::SelectionStatementContext::ConstExpr() {
  return getToken(CppParser::ConstExpr, 0);
}

CppParser::InitializerStatementContext* CppParser::SelectionStatementContext::initializerStatement() {
  return getRuleContext<CppParser::InitializerStatementContext>(0);
}

tree::TerminalNode* CppParser::SelectionStatementContext::Else() {
  return getToken(CppParser::Else, 0);
}

tree::TerminalNode* CppParser::SelectionStatementContext::Switch() {
  return getToken(CppParser::Switch, 0);
}


size_t CppParser::SelectionStatementContext::getRuleIndex() const {
  return CppParser::RuleSelectionStatement;
}

void CppParser::SelectionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionStatement(this);
}

void CppParser::SelectionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionStatement(this);
}

CppParser::SelectionStatementContext* CppParser::selectionStatement() {
  SelectionStatementContext *_localctx = _tracker.createInstance<SelectionStatementContext>(_ctx, getState());
  enterRule(_localctx, 122, CppParser::RuleSelectionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1116);
      match(CppParser::If);
      setState(1118);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::ConstExpr) {
        setState(1117);
        match(CppParser::ConstExpr);
      }
      setState(1120);
      match(CppParser::LeftParenthesis);
      setState(1122);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
      case 1: {
        setState(1121);
        initializerStatement();
        break;
      }

      }
      setState(1124);
      condition();
      setState(1125);
      match(CppParser::RightParenthesis);
      setState(1126);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1128);
      match(CppParser::If);
      setState(1130);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::ConstExpr) {
        setState(1129);
        match(CppParser::ConstExpr);
      }
      setState(1132);
      match(CppParser::LeftParenthesis);
      setState(1134);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
      case 1: {
        setState(1133);
        initializerStatement();
        break;
      }

      }
      setState(1136);
      condition();
      setState(1137);
      match(CppParser::RightParenthesis);
      setState(1138);
      statement();
      setState(1139);
      match(CppParser::Else);
      setState(1140);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1142);
      match(CppParser::Switch);
      setState(1143);
      match(CppParser::LeftParenthesis);
      setState(1145);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
      case 1: {
        setState(1144);
        initializerStatement();
        break;
      }

      }
      setState(1147);
      condition();
      setState(1148);
      match(CppParser::RightParenthesis);
      setState(1149);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationStatementContext ------------------------------------------------------------------

CppParser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::IterationStatementContext::While() {
  return getToken(CppParser::While, 0);
}

tree::TerminalNode* CppParser::IterationStatementContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ConditionContext* CppParser::IterationStatementContext::condition() {
  return getRuleContext<CppParser::ConditionContext>(0);
}

tree::TerminalNode* CppParser::IterationStatementContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::StatementContext* CppParser::IterationStatementContext::statement() {
  return getRuleContext<CppParser::StatementContext>(0);
}

tree::TerminalNode* CppParser::IterationStatementContext::Do() {
  return getToken(CppParser::Do, 0);
}

CppParser::ExpressionContext* CppParser::IterationStatementContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::IterationStatementContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

tree::TerminalNode* CppParser::IterationStatementContext::For() {
  return getToken(CppParser::For, 0);
}

CppParser::InitializerStatementContext* CppParser::IterationStatementContext::initializerStatement() {
  return getRuleContext<CppParser::InitializerStatementContext>(0);
}

CppParser::ForRangeDeclarationContext* CppParser::IterationStatementContext::forRangeDeclaration() {
  return getRuleContext<CppParser::ForRangeDeclarationContext>(0);
}

tree::TerminalNode* CppParser::IterationStatementContext::Colon() {
  return getToken(CppParser::Colon, 0);
}

CppParser::ForRangeInitializerContext* CppParser::IterationStatementContext::forRangeInitializer() {
  return getRuleContext<CppParser::ForRangeInitializerContext>(0);
}


size_t CppParser::IterationStatementContext::getRuleIndex() const {
  return CppParser::RuleIterationStatement;
}

void CppParser::IterationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationStatement(this);
}

void CppParser::IterationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationStatement(this);
}

CppParser::IterationStatementContext* CppParser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 124, CppParser::RuleIterationStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1188);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1153);
      match(CppParser::While);
      setState(1154);
      match(CppParser::LeftParenthesis);
      setState(1155);
      condition();
      setState(1156);
      match(CppParser::RightParenthesis);
      setState(1157);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1159);
      match(CppParser::Do);
      setState(1160);
      statement();
      setState(1161);
      match(CppParser::While);
      setState(1162);
      match(CppParser::LeftParenthesis);
      setState(1163);
      expression(0);
      setState(1164);
      match(CppParser::RightParenthesis);
      setState(1165);
      match(CppParser::Semicolon);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1167);
      match(CppParser::For);
      setState(1168);
      match(CppParser::LeftParenthesis);
      setState(1169);
      initializerStatement();
      setState(1171);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
        | (1ULL << CppParser::AlignOf)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::Class)
        | (1ULL << CppParser::Const)
        | (1ULL << CppParser::ConstExpr)
        | (1ULL << CppParser::ConstCast)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Delete)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::DynamicCast)
        | (1ULL << CppParser::Enum)
        | (1ULL << CppParser::Explicit)
        | (1ULL << CppParser::Extern)
        | (1ULL << CppParser::False)
        | (1ULL << CppParser::Float)
        | (1ULL << CppParser::Friend)
        | (1ULL << CppParser::Inline)
        | (1ULL << CppParser::Int)
        | (1ULL << CppParser::Long)
        | (1ULL << CppParser::Mutable)
        | (1ULL << CppParser::New)
        | (1ULL << CppParser::NoExcept)
        | (1ULL << CppParser::Nullptr)
        | (1ULL << CppParser::Operator)
        | (1ULL << CppParser::ReinterpretCast)
        | (1ULL << CppParser::Short)
        | (1ULL << CppParser::Signed)
        | (1ULL << CppParser::SizeOf)
        | (1ULL << CppParser::Static)
        | (1ULL << CppParser::StaticCast)
        | (1ULL << CppParser::Struct)
        | (1ULL << CppParser::This)
        | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
        | (1ULL << (CppParser::True - 64))
        | (1ULL << (CppParser::TypeDef - 64))
        | (1ULL << (CppParser::TypeName - 64))
        | (1ULL << (CppParser::Union - 64))
        | (1ULL << (CppParser::Unsigned - 64))
        | (1ULL << (CppParser::Virtual - 64))
        | (1ULL << (CppParser::Void - 64))
        | (1ULL << (CppParser::Volatile - 64))
        | (1ULL << (CppParser::WChar - 64))
        | (1ULL << (CppParser::LeftBracket - 64))
        | (1ULL << (CppParser::LeftParenthesis - 64))
        | (1ULL << (CppParser::DoubleColon - 64))
        | (1ULL << (CppParser::Plus - 64))
        | (1ULL << (CppParser::Minus - 64))
        | (1ULL << (CppParser::Asterisk - 64))
        | (1ULL << (CppParser::Ampersand - 64))
        | (1ULL << (CppParser::VerticalBar - 64))
        | (1ULL << (CppParser::Tilde - 64))
        | (1ULL << (CppParser::ExclamationMark - 64))
        | (1ULL << (CppParser::DoublePlus - 64))
        | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
        | (1ULL << (CppParser::IntegerLiteral - 129))
        | (1ULL << (CppParser::FloatingPointLiteral - 129))
        | (1ULL << (CppParser::CharacterLiteral - 129))
        | (1ULL << (CppParser::StringLiteral - 129))
        | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
        | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
        | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
        | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
        | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
        setState(1170);
        condition();
      }
      setState(1173);
      match(CppParser::Semicolon);
      setState(1175);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::Class)
        | (1ULL << CppParser::Const)
        | (1ULL << CppParser::ConstCast)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Delete)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::DynamicCast)
        | (1ULL << CppParser::Enum)
        | (1ULL << CppParser::False)
        | (1ULL << CppParser::Float)
        | (1ULL << CppParser::Int)
        | (1ULL << CppParser::Long)
        | (1ULL << CppParser::New)
        | (1ULL << CppParser::NoExcept)
        | (1ULL << CppParser::Nullptr)
        | (1ULL << CppParser::Operator)
        | (1ULL << CppParser::ReinterpretCast)
        | (1ULL << CppParser::Short)
        | (1ULL << CppParser::Signed)
        | (1ULL << CppParser::SizeOf)
        | (1ULL << CppParser::StaticCast)
        | (1ULL << CppParser::Struct)
        | (1ULL << CppParser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
        | (1ULL << (CppParser::True - 64))
        | (1ULL << (CppParser::TypeName - 64))
        | (1ULL << (CppParser::Union - 64))
        | (1ULL << (CppParser::Unsigned - 64))
        | (1ULL << (CppParser::Void - 64))
        | (1ULL << (CppParser::Volatile - 64))
        | (1ULL << (CppParser::WChar - 64))
        | (1ULL << (CppParser::LeftBracket - 64))
        | (1ULL << (CppParser::LeftParenthesis - 64))
        | (1ULL << (CppParser::DoubleColon - 64))
        | (1ULL << (CppParser::Plus - 64))
        | (1ULL << (CppParser::Minus - 64))
        | (1ULL << (CppParser::Asterisk - 64))
        | (1ULL << (CppParser::Ampersand - 64))
        | (1ULL << (CppParser::VerticalBar - 64))
        | (1ULL << (CppParser::Tilde - 64))
        | (1ULL << (CppParser::ExclamationMark - 64))
        | (1ULL << (CppParser::DoublePlus - 64))
        | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
        | (1ULL << (CppParser::IntegerLiteral - 129))
        | (1ULL << (CppParser::FloatingPointLiteral - 129))
        | (1ULL << (CppParser::CharacterLiteral - 129))
        | (1ULL << (CppParser::StringLiteral - 129))
        | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
        | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
        | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
        | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
        | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
        setState(1174);
        expression(0);
      }
      setState(1177);
      match(CppParser::RightParenthesis);
      setState(1178);
      statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1180);
      match(CppParser::For);
      setState(1181);
      match(CppParser::LeftParenthesis);
      setState(1182);
      forRangeDeclaration();
      setState(1183);
      match(CppParser::Colon);
      setState(1184);
      forRangeInitializer();
      setState(1185);
      match(CppParser::RightParenthesis);
      setState(1186);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitializerStatementContext ------------------------------------------------------------------

CppParser::ForInitializerStatementContext::ForInitializerStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclarationSpecifierSequenceContext* CppParser::ForInitializerStatementContext::declarationSpecifierSequence() {
  return getRuleContext<CppParser::DeclarationSpecifierSequenceContext>(0);
}

CppParser::DeclaratorContext* CppParser::ForInitializerStatementContext::declarator() {
  return getRuleContext<CppParser::DeclaratorContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::ForInitializerStatementContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::ForInitializerStatementContext::LeftBracket() {
  return getToken(CppParser::LeftBracket, 0);
}

CppParser::IdentifierListContext* CppParser::ForInitializerStatementContext::identifierList() {
  return getRuleContext<CppParser::IdentifierListContext>(0);
}

tree::TerminalNode* CppParser::ForInitializerStatementContext::RightBracket() {
  return getToken(CppParser::RightBracket, 0);
}

CppParser::ReferenceQualifierContext* CppParser::ForInitializerStatementContext::referenceQualifier() {
  return getRuleContext<CppParser::ReferenceQualifierContext>(0);
}


size_t CppParser::ForInitializerStatementContext::getRuleIndex() const {
  return CppParser::RuleForInitializerStatement;
}

void CppParser::ForInitializerStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInitializerStatement(this);
}

void CppParser::ForInitializerStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInitializerStatement(this);
}

CppParser::ForInitializerStatementContext* CppParser::forInitializerStatement() {
  ForInitializerStatementContext *_localctx = _tracker.createInstance<ForInitializerStatementContext>(_ctx, getState());
  enterRule(_localctx, 126, CppParser::RuleForInitializerStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1207);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1191);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1190);
        attributeSpecifierSequence(0);
      }
      setState(1193);
      declarationSpecifierSequence();
      setState(1194);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1197);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1196);
        attributeSpecifierSequence(0);
      }
      setState(1199);
      declarationSpecifierSequence();
      setState(1201);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Ampersand) {
        setState(1200);
        referenceQualifier();
      }
      setState(1203);
      match(CppParser::LeftBracket);
      setState(1204);
      identifierList(0);
      setState(1205);
      match(CppParser::RightBracket);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForRangeDeclarationContext ------------------------------------------------------------------

CppParser::ForRangeDeclarationContext::ForRangeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclarationSpecifierSequenceContext* CppParser::ForRangeDeclarationContext::declarationSpecifierSequence() {
  return getRuleContext<CppParser::DeclarationSpecifierSequenceContext>(0);
}

CppParser::DeclaratorContext* CppParser::ForRangeDeclarationContext::declarator() {
  return getRuleContext<CppParser::DeclaratorContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::ForRangeDeclarationContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::ForRangeDeclarationContext::getRuleIndex() const {
  return CppParser::RuleForRangeDeclaration;
}

void CppParser::ForRangeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForRangeDeclaration(this);
}

void CppParser::ForRangeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForRangeDeclaration(this);
}

CppParser::ForRangeDeclarationContext* CppParser::forRangeDeclaration() {
  ForRangeDeclarationContext *_localctx = _tracker.createInstance<ForRangeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 128, CppParser::RuleForRangeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
      setState(1209);
      attributeSpecifierSequence(0);
    }
    setState(1212);
    declarationSpecifierSequence();
    setState(1213);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForRangeInitializerContext ------------------------------------------------------------------

CppParser::ForRangeInitializerContext::ForRangeInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ExpressionOrBracedInitializerListContext* CppParser::ForRangeInitializerContext::expressionOrBracedInitializerList() {
  return getRuleContext<CppParser::ExpressionOrBracedInitializerListContext>(0);
}


size_t CppParser::ForRangeInitializerContext::getRuleIndex() const {
  return CppParser::RuleForRangeInitializer;
}

void CppParser::ForRangeInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForRangeInitializer(this);
}

void CppParser::ForRangeInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForRangeInitializer(this);
}

CppParser::ForRangeInitializerContext* CppParser::forRangeInitializer() {
  ForRangeInitializerContext *_localctx = _tracker.createInstance<ForRangeInitializerContext>(_ctx, getState());
  enterRule(_localctx, 130, CppParser::RuleForRangeInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1215);
    expressionOrBracedInitializerList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStatementContext ------------------------------------------------------------------

CppParser::JumpStatementContext::JumpStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::JumpStatementContext::Break() {
  return getToken(CppParser::Break, 0);
}

tree::TerminalNode* CppParser::JumpStatementContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

tree::TerminalNode* CppParser::JumpStatementContext::Continue() {
  return getToken(CppParser::Continue, 0);
}

tree::TerminalNode* CppParser::JumpStatementContext::Return() {
  return getToken(CppParser::Return, 0);
}

CppParser::ExpressionOrBracedInitializerListContext* CppParser::JumpStatementContext::expressionOrBracedInitializerList() {
  return getRuleContext<CppParser::ExpressionOrBracedInitializerListContext>(0);
}

tree::TerminalNode* CppParser::JumpStatementContext::GoTo() {
  return getToken(CppParser::GoTo, 0);
}

tree::TerminalNode* CppParser::JumpStatementContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}


size_t CppParser::JumpStatementContext::getRuleIndex() const {
  return CppParser::RuleJumpStatement;
}

void CppParser::JumpStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpStatement(this);
}

void CppParser::JumpStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpStatement(this);
}

CppParser::JumpStatementContext* CppParser::jumpStatement() {
  JumpStatementContext *_localctx = _tracker.createInstance<JumpStatementContext>(_ctx, getState());
  enterRule(_localctx, 132, CppParser::RuleJumpStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1229);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Break: {
        enterOuterAlt(_localctx, 1);
        setState(1217);
        match(CppParser::Break);
        setState(1218);
        match(CppParser::Semicolon);
        break;
      }

      case CppParser::Continue: {
        enterOuterAlt(_localctx, 2);
        setState(1219);
        match(CppParser::Continue);
        setState(1220);
        match(CppParser::Semicolon);
        break;
      }

      case CppParser::Return: {
        enterOuterAlt(_localctx, 3);
        setState(1221);
        match(CppParser::Return);
        setState(1223);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
          | (1ULL << CppParser::Auto)
          | (1ULL << CppParser::Bool)
          | (1ULL << CppParser::Char)
          | (1ULL << CppParser::Char16)
          | (1ULL << CppParser::Char32)
          | (1ULL << CppParser::Class)
          | (1ULL << CppParser::Const)
          | (1ULL << CppParser::ConstCast)
          | (1ULL << CppParser::DeclType)
          | (1ULL << CppParser::Delete)
          | (1ULL << CppParser::Double)
          | (1ULL << CppParser::DynamicCast)
          | (1ULL << CppParser::Enum)
          | (1ULL << CppParser::False)
          | (1ULL << CppParser::Float)
          | (1ULL << CppParser::Int)
          | (1ULL << CppParser::Long)
          | (1ULL << CppParser::New)
          | (1ULL << CppParser::NoExcept)
          | (1ULL << CppParser::Nullptr)
          | (1ULL << CppParser::Operator)
          | (1ULL << CppParser::ReinterpretCast)
          | (1ULL << CppParser::Short)
          | (1ULL << CppParser::Signed)
          | (1ULL << CppParser::SizeOf)
          | (1ULL << CppParser::StaticCast)
          | (1ULL << CppParser::Struct)
          | (1ULL << CppParser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
          | (1ULL << (CppParser::True - 64))
          | (1ULL << (CppParser::TypeName - 64))
          | (1ULL << (CppParser::Union - 64))
          | (1ULL << (CppParser::Unsigned - 64))
          | (1ULL << (CppParser::Void - 64))
          | (1ULL << (CppParser::Volatile - 64))
          | (1ULL << (CppParser::WChar - 64))
          | (1ULL << (CppParser::LeftBrace - 64))
          | (1ULL << (CppParser::LeftBracket - 64))
          | (1ULL << (CppParser::LeftParenthesis - 64))
          | (1ULL << (CppParser::DoubleColon - 64))
          | (1ULL << (CppParser::Plus - 64))
          | (1ULL << (CppParser::Minus - 64))
          | (1ULL << (CppParser::Asterisk - 64))
          | (1ULL << (CppParser::Ampersand - 64))
          | (1ULL << (CppParser::VerticalBar - 64))
          | (1ULL << (CppParser::Tilde - 64))
          | (1ULL << (CppParser::ExclamationMark - 64))
          | (1ULL << (CppParser::DoublePlus - 64))
          | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
          | (1ULL << (CppParser::IntegerLiteral - 129))
          | (1ULL << (CppParser::FloatingPointLiteral - 129))
          | (1ULL << (CppParser::CharacterLiteral - 129))
          | (1ULL << (CppParser::StringLiteral - 129))
          | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
          | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
          | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
          | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
          | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
          setState(1222);
          expressionOrBracedInitializerList();
        }
        setState(1225);
        match(CppParser::Semicolon);
        break;
      }

      case CppParser::GoTo: {
        enterOuterAlt(_localctx, 4);
        setState(1226);
        match(CppParser::GoTo);
        setState(1227);
        match(CppParser::Identifier);
        setState(1228);
        match(CppParser::Semicolon);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationStatementContext ------------------------------------------------------------------

CppParser::DeclarationStatementContext::DeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::BlockDeclarationContext* CppParser::DeclarationStatementContext::blockDeclaration() {
  return getRuleContext<CppParser::BlockDeclarationContext>(0);
}


size_t CppParser::DeclarationStatementContext::getRuleIndex() const {
  return CppParser::RuleDeclarationStatement;
}

void CppParser::DeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationStatement(this);
}

void CppParser::DeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationStatement(this);
}

CppParser::DeclarationStatementContext* CppParser::declarationStatement() {
  DeclarationStatementContext *_localctx = _tracker.createInstance<DeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 134, CppParser::RuleDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1231);
    blockDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSequenceContext ------------------------------------------------------------------

CppParser::DeclarationSequenceContext::DeclarationSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclarationContext* CppParser::DeclarationSequenceContext::declaration() {
  return getRuleContext<CppParser::DeclarationContext>(0);
}

CppParser::DeclarationSequenceContext* CppParser::DeclarationSequenceContext::declarationSequence() {
  return getRuleContext<CppParser::DeclarationSequenceContext>(0);
}


size_t CppParser::DeclarationSequenceContext::getRuleIndex() const {
  return CppParser::RuleDeclarationSequence;
}

void CppParser::DeclarationSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSequence(this);
}

void CppParser::DeclarationSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSequence(this);
}


CppParser::DeclarationSequenceContext* CppParser::declarationSequence() {
   return declarationSequence(0);
}

CppParser::DeclarationSequenceContext* CppParser::declarationSequence(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::DeclarationSequenceContext *_localctx = _tracker.createInstance<DeclarationSequenceContext>(_ctx, parentState);
  CppParser::DeclarationSequenceContext *previousContext = _localctx;
  size_t startState = 136;
  enterRecursionRule(_localctx, 136, CppParser::RuleDeclarationSequence, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1234);
    declaration();
    _ctx->stop = _input->LT(-1);
    setState(1240);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DeclarationSequenceContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDeclarationSequence);
        setState(1236);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1237);
        declaration(); 
      }
      setState(1242);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CppParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::BlockDeclarationContext* CppParser::DeclarationContext::blockDeclaration() {
  return getRuleContext<CppParser::BlockDeclarationContext>(0);
}

CppParser::NoDeclarationSpecifierFunctionDeclarationContext* CppParser::DeclarationContext::noDeclarationSpecifierFunctionDeclaration() {
  return getRuleContext<CppParser::NoDeclarationSpecifierFunctionDeclarationContext>(0);
}

CppParser::FunctionDefinitionContext* CppParser::DeclarationContext::functionDefinition() {
  return getRuleContext<CppParser::FunctionDefinitionContext>(0);
}

CppParser::TemplateDeclarationContext* CppParser::DeclarationContext::templateDeclaration() {
  return getRuleContext<CppParser::TemplateDeclarationContext>(0);
}

CppParser::DeductionGuideContext* CppParser::DeclarationContext::deductionGuide() {
  return getRuleContext<CppParser::DeductionGuideContext>(0);
}

CppParser::ExplicitInstantiationContext* CppParser::DeclarationContext::explicitInstantiation() {
  return getRuleContext<CppParser::ExplicitInstantiationContext>(0);
}

CppParser::ExplicitSpecializationContext* CppParser::DeclarationContext::explicitSpecialization() {
  return getRuleContext<CppParser::ExplicitSpecializationContext>(0);
}

CppParser::LinkageSpecificationContext* CppParser::DeclarationContext::linkageSpecification() {
  return getRuleContext<CppParser::LinkageSpecificationContext>(0);
}

CppParser::NamespaceDefinitionContext* CppParser::DeclarationContext::namespaceDefinition() {
  return getRuleContext<CppParser::NamespaceDefinitionContext>(0);
}

CppParser::EmptyDeclarationContext* CppParser::DeclarationContext::emptyDeclaration() {
  return getRuleContext<CppParser::EmptyDeclarationContext>(0);
}

CppParser::AttributeDeclarationContext* CppParser::DeclarationContext::attributeDeclaration() {
  return getRuleContext<CppParser::AttributeDeclarationContext>(0);
}


size_t CppParser::DeclarationContext::getRuleIndex() const {
  return CppParser::RuleDeclaration;
}

void CppParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void CppParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

CppParser::DeclarationContext* CppParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 138, CppParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1243);
      blockDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1244);
      noDeclarationSpecifierFunctionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1245);
      functionDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1246);
      templateDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1247);
      deductionGuide();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1248);
      explicitInstantiation();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1249);
      explicitSpecialization();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1250);
      linkageSpecification();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1251);
      namespaceDefinition();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1252);
      emptyDeclaration();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1253);
      attributeDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockDeclarationContext ------------------------------------------------------------------

CppParser::BlockDeclarationContext::BlockDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::SimpleDeclarationContext* CppParser::BlockDeclarationContext::simpleDeclaration() {
  return getRuleContext<CppParser::SimpleDeclarationContext>(0);
}

CppParser::AsmDefinitionContext* CppParser::BlockDeclarationContext::asmDefinition() {
  return getRuleContext<CppParser::AsmDefinitionContext>(0);
}

CppParser::NamespaceAliasDefinitionContext* CppParser::BlockDeclarationContext::namespaceAliasDefinition() {
  return getRuleContext<CppParser::NamespaceAliasDefinitionContext>(0);
}

CppParser::UsingDeclarationContext* CppParser::BlockDeclarationContext::usingDeclaration() {
  return getRuleContext<CppParser::UsingDeclarationContext>(0);
}

CppParser::UsingDirectiveContext* CppParser::BlockDeclarationContext::usingDirective() {
  return getRuleContext<CppParser::UsingDirectiveContext>(0);
}

CppParser::StaticAssertDeclarationContext* CppParser::BlockDeclarationContext::staticAssertDeclaration() {
  return getRuleContext<CppParser::StaticAssertDeclarationContext>(0);
}

CppParser::AliasDeclarationContext* CppParser::BlockDeclarationContext::aliasDeclaration() {
  return getRuleContext<CppParser::AliasDeclarationContext>(0);
}

CppParser::OpaqueEnumDeclarationContext* CppParser::BlockDeclarationContext::opaqueEnumDeclaration() {
  return getRuleContext<CppParser::OpaqueEnumDeclarationContext>(0);
}


size_t CppParser::BlockDeclarationContext::getRuleIndex() const {
  return CppParser::RuleBlockDeclaration;
}

void CppParser::BlockDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockDeclaration(this);
}

void CppParser::BlockDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockDeclaration(this);
}

CppParser::BlockDeclarationContext* CppParser::blockDeclaration() {
  BlockDeclarationContext *_localctx = _tracker.createInstance<BlockDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 140, CppParser::RuleBlockDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1264);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1256);
      simpleDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1257);
      asmDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1258);
      namespaceAliasDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1259);
      usingDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1260);
      usingDirective();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1261);
      staticAssertDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1262);
      aliasDeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1263);
      opaqueEnumDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoDeclarationSpecifierFunctionDeclarationContext ------------------------------------------------------------------

CppParser::NoDeclarationSpecifierFunctionDeclarationContext::NoDeclarationSpecifierFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclaratorContext* CppParser::NoDeclarationSpecifierFunctionDeclarationContext::declarator() {
  return getRuleContext<CppParser::DeclaratorContext>(0);
}

tree::TerminalNode* CppParser::NoDeclarationSpecifierFunctionDeclarationContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::NoDeclarationSpecifierFunctionDeclarationContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::NoDeclarationSpecifierFunctionDeclarationContext::getRuleIndex() const {
  return CppParser::RuleNoDeclarationSpecifierFunctionDeclaration;
}

void CppParser::NoDeclarationSpecifierFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoDeclarationSpecifierFunctionDeclaration(this);
}

void CppParser::NoDeclarationSpecifierFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoDeclarationSpecifierFunctionDeclaration(this);
}

CppParser::NoDeclarationSpecifierFunctionDeclarationContext* CppParser::noDeclarationSpecifierFunctionDeclaration() {
  NoDeclarationSpecifierFunctionDeclarationContext *_localctx = _tracker.createInstance<NoDeclarationSpecifierFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 142, CppParser::RuleNoDeclarationSpecifierFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1267);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
      setState(1266);
      attributeSpecifierSequence(0);
    }
    setState(1269);
    declarator();
    setState(1270);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasDeclarationContext ------------------------------------------------------------------

CppParser::AliasDeclarationContext::AliasDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::AliasDeclarationContext::Using() {
  return getToken(CppParser::Using, 0);
}

tree::TerminalNode* CppParser::AliasDeclarationContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::AliasDeclarationContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

CppParser::DefiningTypeIdentifierContext* CppParser::AliasDeclarationContext::definingTypeIdentifier() {
  return getRuleContext<CppParser::DefiningTypeIdentifierContext>(0);
}

tree::TerminalNode* CppParser::AliasDeclarationContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::AliasDeclarationContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::AliasDeclarationContext::getRuleIndex() const {
  return CppParser::RuleAliasDeclaration;
}

void CppParser::AliasDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliasDeclaration(this);
}

void CppParser::AliasDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliasDeclaration(this);
}

CppParser::AliasDeclarationContext* CppParser::aliasDeclaration() {
  AliasDeclarationContext *_localctx = _tracker.createInstance<AliasDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 144, CppParser::RuleAliasDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1272);
    match(CppParser::Using);
    setState(1273);
    match(CppParser::Identifier);
    setState(1275);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
      setState(1274);
      attributeSpecifierSequence(0);
    }
    setState(1277);
    match(CppParser::Equal);
    setState(1278);
    definingTypeIdentifier();
    setState(1279);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleDeclarationContext ------------------------------------------------------------------

CppParser::SimpleDeclarationContext::SimpleDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclarationSpecifierSequenceContext* CppParser::SimpleDeclarationContext::declarationSpecifierSequence() {
  return getRuleContext<CppParser::DeclarationSpecifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::SimpleDeclarationContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

CppParser::InitializerDeclaratorListContext* CppParser::SimpleDeclarationContext::initializerDeclaratorList() {
  return getRuleContext<CppParser::InitializerDeclaratorListContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::SimpleDeclarationContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::SimpleDeclarationContext::LeftBracket() {
  return getToken(CppParser::LeftBracket, 0);
}

CppParser::IdentifierListContext* CppParser::SimpleDeclarationContext::identifierList() {
  return getRuleContext<CppParser::IdentifierListContext>(0);
}

tree::TerminalNode* CppParser::SimpleDeclarationContext::RightBracket() {
  return getToken(CppParser::RightBracket, 0);
}

CppParser::InitializerContext* CppParser::SimpleDeclarationContext::initializer() {
  return getRuleContext<CppParser::InitializerContext>(0);
}

CppParser::ReferenceQualifierContext* CppParser::SimpleDeclarationContext::referenceQualifier() {
  return getRuleContext<CppParser::ReferenceQualifierContext>(0);
}


size_t CppParser::SimpleDeclarationContext::getRuleIndex() const {
  return CppParser::RuleSimpleDeclaration;
}

void CppParser::SimpleDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleDeclaration(this);
}

void CppParser::SimpleDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleDeclaration(this);
}

CppParser::SimpleDeclarationContext* CppParser::simpleDeclaration() {
  SimpleDeclarationContext *_localctx = _tracker.createInstance<SimpleDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 146, CppParser::RuleSimpleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1305);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1281);
      declarationSpecifierSequence();
      setState(1283);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DeclType

      || _la == CppParser::Operator || ((((_la - 84) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 84)) & ((1ULL << (CppParser::LeftParenthesis - 84))
        | (1ULL << (CppParser::Ellipsis - 84))
        | (1ULL << (CppParser::DoubleColon - 84))
        | (1ULL << (CppParser::Asterisk - 84))
        | (1ULL << (CppParser::Ampersand - 84))
        | (1ULL << (CppParser::Tilde - 84))
        | (1ULL << (CppParser::DoubleAmpersand - 84))
        | (1ULL << (CppParser::Identifier - 84)))) != 0)) {
        setState(1282);
        initializerDeclaratorList(0);
      }
      setState(1285);
      match(CppParser::Semicolon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1287);
      attributeSpecifierSequence(0);
      setState(1288);
      declarationSpecifierSequence();
      setState(1289);
      initializerDeclaratorList(0);
      setState(1290);
      match(CppParser::Semicolon);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1293);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1292);
        attributeSpecifierSequence(0);
      }
      setState(1295);
      declarationSpecifierSequence();
      setState(1297);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Ampersand) {
        setState(1296);
        referenceQualifier();
      }
      setState(1299);
      match(CppParser::LeftBracket);
      setState(1300);
      identifierList(0);
      setState(1301);
      match(CppParser::RightBracket);
      setState(1302);
      initializer();
      setState(1303);
      match(CppParser::Semicolon);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StaticAssertDeclarationContext ------------------------------------------------------------------

CppParser::StaticAssertDeclarationContext::StaticAssertDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::StaticAssertDeclarationContext::StaticAssert() {
  return getToken(CppParser::StaticAssert, 0);
}

tree::TerminalNode* CppParser::StaticAssertDeclarationContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ConstantExpressionContext* CppParser::StaticAssertDeclarationContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CppParser::StaticAssertDeclarationContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

tree::TerminalNode* CppParser::StaticAssertDeclarationContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

tree::TerminalNode* CppParser::StaticAssertDeclarationContext::Comma() {
  return getToken(CppParser::Comma, 0);
}

tree::TerminalNode* CppParser::StaticAssertDeclarationContext::StringLiteral() {
  return getToken(CppParser::StringLiteral, 0);
}


size_t CppParser::StaticAssertDeclarationContext::getRuleIndex() const {
  return CppParser::RuleStaticAssertDeclaration;
}

void CppParser::StaticAssertDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStaticAssertDeclaration(this);
}

void CppParser::StaticAssertDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStaticAssertDeclaration(this);
}

CppParser::StaticAssertDeclarationContext* CppParser::staticAssertDeclaration() {
  StaticAssertDeclarationContext *_localctx = _tracker.createInstance<StaticAssertDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 148, CppParser::RuleStaticAssertDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1321);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1307);
      match(CppParser::StaticAssert);
      setState(1308);
      match(CppParser::LeftParenthesis);
      setState(1309);
      constantExpression();
      setState(1310);
      match(CppParser::RightParenthesis);
      setState(1311);
      match(CppParser::Semicolon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1313);
      match(CppParser::StaticAssert);
      setState(1314);
      match(CppParser::LeftParenthesis);
      setState(1315);
      constantExpression();
      setState(1316);
      match(CppParser::Comma);
      setState(1317);
      match(CppParser::StringLiteral);
      setState(1318);
      match(CppParser::RightParenthesis);
      setState(1319);
      match(CppParser::Semicolon);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyDeclarationContext ------------------------------------------------------------------

CppParser::EmptyDeclarationContext::EmptyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::EmptyDeclarationContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}


size_t CppParser::EmptyDeclarationContext::getRuleIndex() const {
  return CppParser::RuleEmptyDeclaration;
}

void CppParser::EmptyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyDeclaration(this);
}

void CppParser::EmptyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyDeclaration(this);
}

CppParser::EmptyDeclarationContext* CppParser::emptyDeclaration() {
  EmptyDeclarationContext *_localctx = _tracker.createInstance<EmptyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 150, CppParser::RuleEmptyDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1323);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeDeclarationContext ------------------------------------------------------------------

CppParser::AttributeDeclarationContext::AttributeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::AttributeSpecifierSequenceContext* CppParser::AttributeDeclarationContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::AttributeDeclarationContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}


size_t CppParser::AttributeDeclarationContext::getRuleIndex() const {
  return CppParser::RuleAttributeDeclaration;
}

void CppParser::AttributeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeDeclaration(this);
}

void CppParser::AttributeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeDeclaration(this);
}

CppParser::AttributeDeclarationContext* CppParser::attributeDeclaration() {
  AttributeDeclarationContext *_localctx = _tracker.createInstance<AttributeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 152, CppParser::RuleAttributeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1325);
    attributeSpecifierSequence(0);
    setState(1326);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifierContext ------------------------------------------------------------------

CppParser::DeclarationSpecifierContext::DeclarationSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::StorageClassSpecifierContext* CppParser::DeclarationSpecifierContext::storageClassSpecifier() {
  return getRuleContext<CppParser::StorageClassSpecifierContext>(0);
}

CppParser::DefiningTypeSpecifierContext* CppParser::DeclarationSpecifierContext::definingTypeSpecifier() {
  return getRuleContext<CppParser::DefiningTypeSpecifierContext>(0);
}

CppParser::FunctionSpecifierContext* CppParser::DeclarationSpecifierContext::functionSpecifier() {
  return getRuleContext<CppParser::FunctionSpecifierContext>(0);
}

tree::TerminalNode* CppParser::DeclarationSpecifierContext::Friend() {
  return getToken(CppParser::Friend, 0);
}

tree::TerminalNode* CppParser::DeclarationSpecifierContext::TypeDef() {
  return getToken(CppParser::TypeDef, 0);
}

tree::TerminalNode* CppParser::DeclarationSpecifierContext::ConstExpr() {
  return getToken(CppParser::ConstExpr, 0);
}

tree::TerminalNode* CppParser::DeclarationSpecifierContext::Inline() {
  return getToken(CppParser::Inline, 0);
}


size_t CppParser::DeclarationSpecifierContext::getRuleIndex() const {
  return CppParser::RuleDeclarationSpecifier;
}

void CppParser::DeclarationSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifier(this);
}

void CppParser::DeclarationSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifier(this);
}

CppParser::DeclarationSpecifierContext* CppParser::declarationSpecifier() {
  DeclarationSpecifierContext *_localctx = _tracker.createInstance<DeclarationSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 154, CppParser::RuleDeclarationSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1335);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Extern:
      case CppParser::Mutable:
      case CppParser::Static:
      case CppParser::ThreadLocal: {
        enterOuterAlt(_localctx, 1);
        setState(1328);
        storageClassSpecifier();
        break;
      }

      case CppParser::Auto:
      case CppParser::Bool:
      case CppParser::Char:
      case CppParser::Char16:
      case CppParser::Char32:
      case CppParser::Class:
      case CppParser::Const:
      case CppParser::DeclType:
      case CppParser::Double:
      case CppParser::Enum:
      case CppParser::Float:
      case CppParser::Int:
      case CppParser::Long:
      case CppParser::Short:
      case CppParser::Signed:
      case CppParser::Struct:
      case CppParser::TypeName:
      case CppParser::Union:
      case CppParser::Unsigned:
      case CppParser::Void:
      case CppParser::Volatile:
      case CppParser::WChar:
      case CppParser::DoubleColon:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1329);
        definingTypeSpecifier();
        break;
      }

      case CppParser::Explicit:
      case CppParser::Virtual: {
        enterOuterAlt(_localctx, 3);
        setState(1330);
        functionSpecifier();
        break;
      }

      case CppParser::Friend: {
        enterOuterAlt(_localctx, 4);
        setState(1331);
        match(CppParser::Friend);
        break;
      }

      case CppParser::TypeDef: {
        enterOuterAlt(_localctx, 5);
        setState(1332);
        match(CppParser::TypeDef);
        break;
      }

      case CppParser::ConstExpr: {
        enterOuterAlt(_localctx, 6);
        setState(1333);
        match(CppParser::ConstExpr);
        break;
      }

      case CppParser::Inline: {
        enterOuterAlt(_localctx, 7);
        setState(1334);
        match(CppParser::Inline);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationSpecifierSequenceContext ------------------------------------------------------------------

CppParser::DeclarationSpecifierSequenceContext::DeclarationSpecifierSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclarationSpecifierContext* CppParser::DeclarationSpecifierSequenceContext::declarationSpecifier() {
  return getRuleContext<CppParser::DeclarationSpecifierContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::DeclarationSpecifierSequenceContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::DeclarationSpecifierSequenceContext* CppParser::DeclarationSpecifierSequenceContext::declarationSpecifierSequence() {
  return getRuleContext<CppParser::DeclarationSpecifierSequenceContext>(0);
}


size_t CppParser::DeclarationSpecifierSequenceContext::getRuleIndex() const {
  return CppParser::RuleDeclarationSpecifierSequence;
}

void CppParser::DeclarationSpecifierSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationSpecifierSequence(this);
}

void CppParser::DeclarationSpecifierSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationSpecifierSequence(this);
}

CppParser::DeclarationSpecifierSequenceContext* CppParser::declarationSpecifierSequence() {
  DeclarationSpecifierSequenceContext *_localctx = _tracker.createInstance<DeclarationSpecifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 156, CppParser::RuleDeclarationSpecifierSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1344);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1337);
      declarationSpecifier();
      setState(1339);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
      case 1: {
        setState(1338);
        attributeSpecifierSequence(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1341);
      declarationSpecifier();
      setState(1342);
      declarationSpecifierSequence();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StorageClassSpecifierContext ------------------------------------------------------------------

CppParser::StorageClassSpecifierContext::StorageClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::StorageClassSpecifierContext::Static() {
  return getToken(CppParser::Static, 0);
}

tree::TerminalNode* CppParser::StorageClassSpecifierContext::ThreadLocal() {
  return getToken(CppParser::ThreadLocal, 0);
}

tree::TerminalNode* CppParser::StorageClassSpecifierContext::Extern() {
  return getToken(CppParser::Extern, 0);
}

tree::TerminalNode* CppParser::StorageClassSpecifierContext::Mutable() {
  return getToken(CppParser::Mutable, 0);
}


size_t CppParser::StorageClassSpecifierContext::getRuleIndex() const {
  return CppParser::RuleStorageClassSpecifier;
}

void CppParser::StorageClassSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorageClassSpecifier(this);
}

void CppParser::StorageClassSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorageClassSpecifier(this);
}

CppParser::StorageClassSpecifierContext* CppParser::storageClassSpecifier() {
  StorageClassSpecifierContext *_localctx = _tracker.createInstance<StorageClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 158, CppParser::RuleStorageClassSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1346);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::Extern)
      | (1ULL << CppParser::Mutable)
      | (1ULL << CppParser::Static)
      | (1ULL << CppParser::ThreadLocal))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionSpecifierContext ------------------------------------------------------------------

CppParser::FunctionSpecifierContext::FunctionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::FunctionSpecifierContext::Virtual() {
  return getToken(CppParser::Virtual, 0);
}

tree::TerminalNode* CppParser::FunctionSpecifierContext::Explicit() {
  return getToken(CppParser::Explicit, 0);
}


size_t CppParser::FunctionSpecifierContext::getRuleIndex() const {
  return CppParser::RuleFunctionSpecifier;
}

void CppParser::FunctionSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionSpecifier(this);
}

void CppParser::FunctionSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionSpecifier(this);
}

CppParser::FunctionSpecifierContext* CppParser::functionSpecifier() {
  FunctionSpecifierContext *_localctx = _tracker.createInstance<FunctionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 160, CppParser::RuleFunctionSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1348);
    _la = _input->LA(1);
    if (!(_la == CppParser::Explicit

    || _la == CppParser::Virtual)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

CppParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::SimpleTypeSpecifierContext* CppParser::TypeSpecifierContext::simpleTypeSpecifier() {
  return getRuleContext<CppParser::SimpleTypeSpecifierContext>(0);
}

CppParser::ElaboratedTypeSpecifierContext* CppParser::TypeSpecifierContext::elaboratedTypeSpecifier() {
  return getRuleContext<CppParser::ElaboratedTypeSpecifierContext>(0);
}

CppParser::TypenameSpecifierContext* CppParser::TypeSpecifierContext::typenameSpecifier() {
  return getRuleContext<CppParser::TypenameSpecifierContext>(0);
}

CppParser::ConstVolatileQualifierContext* CppParser::TypeSpecifierContext::constVolatileQualifier() {
  return getRuleContext<CppParser::ConstVolatileQualifierContext>(0);
}


size_t CppParser::TypeSpecifierContext::getRuleIndex() const {
  return CppParser::RuleTypeSpecifier;
}

void CppParser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void CppParser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}

CppParser::TypeSpecifierContext* CppParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 162, CppParser::RuleTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1354);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Auto:
      case CppParser::Bool:
      case CppParser::Char:
      case CppParser::Char16:
      case CppParser::Char32:
      case CppParser::DeclType:
      case CppParser::Double:
      case CppParser::Float:
      case CppParser::Int:
      case CppParser::Long:
      case CppParser::Short:
      case CppParser::Signed:
      case CppParser::Unsigned:
      case CppParser::Void:
      case CppParser::WChar:
      case CppParser::DoubleColon:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(1350);
        simpleTypeSpecifier();
        break;
      }

      case CppParser::Class:
      case CppParser::Enum:
      case CppParser::Struct:
      case CppParser::Union: {
        enterOuterAlt(_localctx, 2);
        setState(1351);
        elaboratedTypeSpecifier();
        break;
      }

      case CppParser::TypeName: {
        enterOuterAlt(_localctx, 3);
        setState(1352);
        typenameSpecifier();
        break;
      }

      case CppParser::Const:
      case CppParser::Volatile: {
        enterOuterAlt(_localctx, 4);
        setState(1353);
        constVolatileQualifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierSequenceContext ------------------------------------------------------------------

CppParser::TypeSpecifierSequenceContext::TypeSpecifierSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TypeSpecifierContext* CppParser::TypeSpecifierSequenceContext::typeSpecifier() {
  return getRuleContext<CppParser::TypeSpecifierContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::TypeSpecifierSequenceContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::TypeSpecifierSequenceContext* CppParser::TypeSpecifierSequenceContext::typeSpecifierSequence() {
  return getRuleContext<CppParser::TypeSpecifierSequenceContext>(0);
}


size_t CppParser::TypeSpecifierSequenceContext::getRuleIndex() const {
  return CppParser::RuleTypeSpecifierSequence;
}

void CppParser::TypeSpecifierSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifierSequence(this);
}

void CppParser::TypeSpecifierSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifierSequence(this);
}

CppParser::TypeSpecifierSequenceContext* CppParser::typeSpecifierSequence() {
  TypeSpecifierSequenceContext *_localctx = _tracker.createInstance<TypeSpecifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 164, CppParser::RuleTypeSpecifierSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1363);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1356);
      typeSpecifier();
      setState(1358);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx)) {
      case 1: {
        setState(1357);
        attributeSpecifierSequence(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1360);
      typeSpecifier();
      setState(1361);
      typeSpecifierSequence();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefiningTypeSpecifierContext ------------------------------------------------------------------

CppParser::DefiningTypeSpecifierContext::DefiningTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TypeSpecifierContext* CppParser::DefiningTypeSpecifierContext::typeSpecifier() {
  return getRuleContext<CppParser::TypeSpecifierContext>(0);
}

CppParser::ClassSpecifierContext* CppParser::DefiningTypeSpecifierContext::classSpecifier() {
  return getRuleContext<CppParser::ClassSpecifierContext>(0);
}

CppParser::EnumSpecifierContext* CppParser::DefiningTypeSpecifierContext::enumSpecifier() {
  return getRuleContext<CppParser::EnumSpecifierContext>(0);
}


size_t CppParser::DefiningTypeSpecifierContext::getRuleIndex() const {
  return CppParser::RuleDefiningTypeSpecifier;
}

void CppParser::DefiningTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefiningTypeSpecifier(this);
}

void CppParser::DefiningTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefiningTypeSpecifier(this);
}

CppParser::DefiningTypeSpecifierContext* CppParser::definingTypeSpecifier() {
  DefiningTypeSpecifierContext *_localctx = _tracker.createInstance<DefiningTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 166, CppParser::RuleDefiningTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1368);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 124, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1365);
      typeSpecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1366);
      classSpecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1367);
      enumSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefiningTypeSpecifierSequenceContext ------------------------------------------------------------------

CppParser::DefiningTypeSpecifierSequenceContext::DefiningTypeSpecifierSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DefiningTypeSpecifierContext* CppParser::DefiningTypeSpecifierSequenceContext::definingTypeSpecifier() {
  return getRuleContext<CppParser::DefiningTypeSpecifierContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::DefiningTypeSpecifierSequenceContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::DefiningTypeSpecifierSequenceContext* CppParser::DefiningTypeSpecifierSequenceContext::definingTypeSpecifierSequence() {
  return getRuleContext<CppParser::DefiningTypeSpecifierSequenceContext>(0);
}


size_t CppParser::DefiningTypeSpecifierSequenceContext::getRuleIndex() const {
  return CppParser::RuleDefiningTypeSpecifierSequence;
}

void CppParser::DefiningTypeSpecifierSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefiningTypeSpecifierSequence(this);
}

void CppParser::DefiningTypeSpecifierSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefiningTypeSpecifierSequence(this);
}

CppParser::DefiningTypeSpecifierSequenceContext* CppParser::definingTypeSpecifierSequence() {
  DefiningTypeSpecifierSequenceContext *_localctx = _tracker.createInstance<DefiningTypeSpecifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 168, CppParser::RuleDefiningTypeSpecifierSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1377);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 126, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1370);
      definingTypeSpecifier();
      setState(1372);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
      case 1: {
        setState(1371);
        attributeSpecifierSequence(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1374);
      definingTypeSpecifier();
      setState(1375);
      definingTypeSpecifierSequence();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeSpecifierContext ------------------------------------------------------------------

CppParser::SimpleTypeSpecifierContext::SimpleTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TypeNameContext* CppParser::SimpleTypeSpecifierContext::typeName() {
  return getRuleContext<CppParser::TypeNameContext>(0);
}

CppParser::NestedNameSpecifierContext* CppParser::SimpleTypeSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Template() {
  return getToken(CppParser::Template, 0);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::SimpleTypeSpecifierContext::simpleTemplateIdentifier() {
  return getRuleContext<CppParser::SimpleTemplateIdentifierContext>(0);
}

CppParser::TemplateNameContext* CppParser::SimpleTypeSpecifierContext::templateName() {
  return getRuleContext<CppParser::TemplateNameContext>(0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Char() {
  return getToken(CppParser::Char, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Char16() {
  return getToken(CppParser::Char16, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Char32() {
  return getToken(CppParser::Char32, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::WChar() {
  return getToken(CppParser::WChar, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Bool() {
  return getToken(CppParser::Bool, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Short() {
  return getToken(CppParser::Short, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Int() {
  return getToken(CppParser::Int, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Long() {
  return getToken(CppParser::Long, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Signed() {
  return getToken(CppParser::Signed, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Unsigned() {
  return getToken(CppParser::Unsigned, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Float() {
  return getToken(CppParser::Float, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Double() {
  return getToken(CppParser::Double, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Void() {
  return getToken(CppParser::Void, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Auto() {
  return getToken(CppParser::Auto, 0);
}

CppParser::DeclarationTypeSpecifierContext* CppParser::SimpleTypeSpecifierContext::declarationTypeSpecifier() {
  return getRuleContext<CppParser::DeclarationTypeSpecifierContext>(0);
}


size_t CppParser::SimpleTypeSpecifierContext::getRuleIndex() const {
  return CppParser::RuleSimpleTypeSpecifier;
}

void CppParser::SimpleTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleTypeSpecifier(this);
}

void CppParser::SimpleTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleTypeSpecifier(this);
}

CppParser::SimpleTypeSpecifierContext* CppParser::simpleTypeSpecifier() {
  SimpleTypeSpecifierContext *_localctx = _tracker.createInstance<SimpleTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 170, CppParser::RuleSimpleTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1406);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1380);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
      case 1: {
        setState(1379);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(1382);
      typeName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1383);
      nestedNameSpecifier(0);
      setState(1384);
      match(CppParser::Template);
      setState(1385);
      simpleTemplateIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1388);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx)) {
      case 1: {
        setState(1387);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(1390);
      templateName();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1391);
      match(CppParser::Char);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1392);
      match(CppParser::Char16);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1393);
      match(CppParser::Char32);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1394);
      match(CppParser::WChar);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1395);
      match(CppParser::Bool);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1396);
      match(CppParser::Short);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1397);
      match(CppParser::Int);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1398);
      match(CppParser::Long);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1399);
      match(CppParser::Signed);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1400);
      match(CppParser::Unsigned);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1401);
      match(CppParser::Float);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1402);
      match(CppParser::Double);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1403);
      match(CppParser::Void);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1404);
      match(CppParser::Auto);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(1405);
      declarationTypeSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

CppParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ClassNameContext* CppParser::TypeNameContext::className() {
  return getRuleContext<CppParser::ClassNameContext>(0);
}

CppParser::EnumNameContext* CppParser::TypeNameContext::enumName() {
  return getRuleContext<CppParser::EnumNameContext>(0);
}

CppParser::TypedefNameContext* CppParser::TypeNameContext::typedefName() {
  return getRuleContext<CppParser::TypedefNameContext>(0);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::TypeNameContext::simpleTemplateIdentifier() {
  return getRuleContext<CppParser::SimpleTemplateIdentifierContext>(0);
}


size_t CppParser::TypeNameContext::getRuleIndex() const {
  return CppParser::RuleTypeName;
}

void CppParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void CppParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}

CppParser::TypeNameContext* CppParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 172, CppParser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1412);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 130, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1408);
      className();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1409);
      enumName();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1410);
      typedefName();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1411);
      simpleTemplateIdentifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationTypeSpecifierContext ------------------------------------------------------------------

CppParser::DeclarationTypeSpecifierContext::DeclarationTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::DeclarationTypeSpecifierContext::DeclType() {
  return getToken(CppParser::DeclType, 0);
}

tree::TerminalNode* CppParser::DeclarationTypeSpecifierContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ExpressionContext* CppParser::DeclarationTypeSpecifierContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::DeclarationTypeSpecifierContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

tree::TerminalNode* CppParser::DeclarationTypeSpecifierContext::Auto() {
  return getToken(CppParser::Auto, 0);
}


size_t CppParser::DeclarationTypeSpecifierContext::getRuleIndex() const {
  return CppParser::RuleDeclarationTypeSpecifier;
}

void CppParser::DeclarationTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationTypeSpecifier(this);
}

void CppParser::DeclarationTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationTypeSpecifier(this);
}

CppParser::DeclarationTypeSpecifierContext* CppParser::declarationTypeSpecifier() {
  DeclarationTypeSpecifierContext *_localctx = _tracker.createInstance<DeclarationTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 174, CppParser::RuleDeclarationTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1423);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 131, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1414);
      match(CppParser::DeclType);
      setState(1415);
      match(CppParser::LeftParenthesis);
      setState(1416);
      expression(0);
      setState(1417);
      match(CppParser::RightParenthesis);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1419);
      match(CppParser::DeclType);
      setState(1420);
      match(CppParser::LeftParenthesis);
      setState(1421);
      match(CppParser::Auto);
      setState(1422);
      match(CppParser::RightParenthesis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElaboratedTypeSpecifierContext ------------------------------------------------------------------

CppParser::ElaboratedTypeSpecifierContext::ElaboratedTypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ClassKeyContext* CppParser::ElaboratedTypeSpecifierContext::classKey() {
  return getRuleContext<CppParser::ClassKeyContext>(0);
}

tree::TerminalNode* CppParser::ElaboratedTypeSpecifierContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::ElaboratedTypeSpecifierContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::NestedNameSpecifierContext* CppParser::ElaboratedTypeSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::ElaboratedTypeSpecifierContext::simpleTemplateIdentifier() {
  return getRuleContext<CppParser::SimpleTemplateIdentifierContext>(0);
}

tree::TerminalNode* CppParser::ElaboratedTypeSpecifierContext::Template() {
  return getToken(CppParser::Template, 0);
}

tree::TerminalNode* CppParser::ElaboratedTypeSpecifierContext::Enum() {
  return getToken(CppParser::Enum, 0);
}


size_t CppParser::ElaboratedTypeSpecifierContext::getRuleIndex() const {
  return CppParser::RuleElaboratedTypeSpecifier;
}

void CppParser::ElaboratedTypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElaboratedTypeSpecifier(this);
}

void CppParser::ElaboratedTypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElaboratedTypeSpecifier(this);
}

CppParser::ElaboratedTypeSpecifierContext* CppParser::elaboratedTypeSpecifier() {
  ElaboratedTypeSpecifierContext *_localctx = _tracker.createInstance<ElaboratedTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 176, CppParser::RuleElaboratedTypeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1449);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1425);
      classKey();
      setState(1427);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1426);
        attributeSpecifierSequence(0);
      }
      setState(1430);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 133, _ctx)) {
      case 1: {
        setState(1429);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(1432);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1434);
      classKey();
      setState(1435);
      simpleTemplateIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1437);
      classKey();
      setState(1438);
      nestedNameSpecifier(0);
      setState(1440);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Template) {
        setState(1439);
        match(CppParser::Template);
      }
      setState(1442);
      simpleTemplateIdentifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1444);
      match(CppParser::Enum);
      setState(1446);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 135, _ctx)) {
      case 1: {
        setState(1445);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(1448);
      match(CppParser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumSpecifierContext ------------------------------------------------------------------

CppParser::EnumSpecifierContext::EnumSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::EnumHeadContext* CppParser::EnumSpecifierContext::enumHead() {
  return getRuleContext<CppParser::EnumHeadContext>(0);
}

tree::TerminalNode* CppParser::EnumSpecifierContext::LeftBrace() {
  return getToken(CppParser::LeftBrace, 0);
}

tree::TerminalNode* CppParser::EnumSpecifierContext::RightBrace() {
  return getToken(CppParser::RightBrace, 0);
}

CppParser::EnumeratorListContext* CppParser::EnumSpecifierContext::enumeratorList() {
  return getRuleContext<CppParser::EnumeratorListContext>(0);
}

tree::TerminalNode* CppParser::EnumSpecifierContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::EnumSpecifierContext::getRuleIndex() const {
  return CppParser::RuleEnumSpecifier;
}

void CppParser::EnumSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumSpecifier(this);
}

void CppParser::EnumSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumSpecifier(this);
}

CppParser::EnumSpecifierContext* CppParser::enumSpecifier() {
  EnumSpecifierContext *_localctx = _tracker.createInstance<EnumSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 178, CppParser::RuleEnumSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1464);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1451);
      enumHead();
      setState(1452);
      match(CppParser::LeftBrace);
      setState(1454);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Identifier) {
        setState(1453);
        enumeratorList(0);
      }
      setState(1456);
      match(CppParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1458);
      enumHead();
      setState(1459);
      match(CppParser::LeftBrace);
      setState(1460);
      enumeratorList(0);
      setState(1461);
      match(CppParser::Comma);
      setState(1462);
      match(CppParser::RightBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumHeadContext ------------------------------------------------------------------

CppParser::EnumHeadContext::EnumHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::EnumKeyContext* CppParser::EnumHeadContext::enumKey() {
  return getRuleContext<CppParser::EnumKeyContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::EnumHeadContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::EnumHeadNameContext* CppParser::EnumHeadContext::enumHeadName() {
  return getRuleContext<CppParser::EnumHeadNameContext>(0);
}

CppParser::EnumBaseContext* CppParser::EnumHeadContext::enumBase() {
  return getRuleContext<CppParser::EnumBaseContext>(0);
}


size_t CppParser::EnumHeadContext::getRuleIndex() const {
  return CppParser::RuleEnumHead;
}

void CppParser::EnumHeadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumHead(this);
}

void CppParser::EnumHeadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumHead(this);
}

CppParser::EnumHeadContext* CppParser::enumHead() {
  EnumHeadContext *_localctx = _tracker.createInstance<EnumHeadContext>(_ctx, getState());
  enterRule(_localctx, 180, CppParser::RuleEnumHead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1466);
    enumKey();
    setState(1468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
      setState(1467);
      attributeSpecifierSequence(0);
    }
    setState(1471);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::DeclType || _la == CppParser::DoubleColon

    || _la == CppParser::Identifier) {
      setState(1470);
      enumHeadName();
    }
    setState(1474);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Colon) {
      setState(1473);
      enumBase();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumHeadNameContext ------------------------------------------------------------------

CppParser::EnumHeadNameContext::EnumHeadNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::EnumHeadNameContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::NestedNameSpecifierContext* CppParser::EnumHeadNameContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}


size_t CppParser::EnumHeadNameContext::getRuleIndex() const {
  return CppParser::RuleEnumHeadName;
}

void CppParser::EnumHeadNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumHeadName(this);
}

void CppParser::EnumHeadNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumHeadName(this);
}

CppParser::EnumHeadNameContext* CppParser::enumHeadName() {
  EnumHeadNameContext *_localctx = _tracker.createInstance<EnumHeadNameContext>(_ctx, getState());
  enterRule(_localctx, 182, CppParser::RuleEnumHeadName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1477);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 142, _ctx)) {
    case 1: {
      setState(1476);
      nestedNameSpecifier(0);
      break;
    }

    }
    setState(1479);
    match(CppParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpaqueEnumDeclarationContext ------------------------------------------------------------------

CppParser::OpaqueEnumDeclarationContext::OpaqueEnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::EnumKeyContext* CppParser::OpaqueEnumDeclarationContext::enumKey() {
  return getRuleContext<CppParser::EnumKeyContext>(0);
}

tree::TerminalNode* CppParser::OpaqueEnumDeclarationContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::OpaqueEnumDeclarationContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::OpaqueEnumDeclarationContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::NestedNameSpecifierContext* CppParser::OpaqueEnumDeclarationContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}

CppParser::EnumBaseContext* CppParser::OpaqueEnumDeclarationContext::enumBase() {
  return getRuleContext<CppParser::EnumBaseContext>(0);
}


size_t CppParser::OpaqueEnumDeclarationContext::getRuleIndex() const {
  return CppParser::RuleOpaqueEnumDeclaration;
}

void CppParser::OpaqueEnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpaqueEnumDeclaration(this);
}

void CppParser::OpaqueEnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpaqueEnumDeclaration(this);
}

CppParser::OpaqueEnumDeclarationContext* CppParser::opaqueEnumDeclaration() {
  OpaqueEnumDeclarationContext *_localctx = _tracker.createInstance<OpaqueEnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 184, CppParser::RuleOpaqueEnumDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1481);
    enumKey();
    setState(1483);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
      setState(1482);
      attributeSpecifierSequence(0);
    }
    setState(1486);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 144, _ctx)) {
    case 1: {
      setState(1485);
      nestedNameSpecifier(0);
      break;
    }

    }
    setState(1488);
    match(CppParser::Identifier);
    setState(1490);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Colon) {
      setState(1489);
      enumBase();
    }
    setState(1492);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumKeyContext ------------------------------------------------------------------

CppParser::EnumKeyContext::EnumKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::EnumKeyContext::Enum() {
  return getToken(CppParser::Enum, 0);
}

tree::TerminalNode* CppParser::EnumKeyContext::Class() {
  return getToken(CppParser::Class, 0);
}

tree::TerminalNode* CppParser::EnumKeyContext::Struct() {
  return getToken(CppParser::Struct, 0);
}


size_t CppParser::EnumKeyContext::getRuleIndex() const {
  return CppParser::RuleEnumKey;
}

void CppParser::EnumKeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumKey(this);
}

void CppParser::EnumKeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumKey(this);
}

CppParser::EnumKeyContext* CppParser::enumKey() {
  EnumKeyContext *_localctx = _tracker.createInstance<EnumKeyContext>(_ctx, getState());
  enterRule(_localctx, 186, CppParser::RuleEnumKey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1499);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 146, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1494);
      match(CppParser::Enum);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1495);
      match(CppParser::Enum);
      setState(1496);
      match(CppParser::Class);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1497);
      match(CppParser::Enum);
      setState(1498);
      match(CppParser::Struct);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBaseContext ------------------------------------------------------------------

CppParser::EnumBaseContext::EnumBaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::EnumBaseContext::Colon() {
  return getToken(CppParser::Colon, 0);
}

CppParser::TypeSpecifierSequenceContext* CppParser::EnumBaseContext::typeSpecifierSequence() {
  return getRuleContext<CppParser::TypeSpecifierSequenceContext>(0);
}


size_t CppParser::EnumBaseContext::getRuleIndex() const {
  return CppParser::RuleEnumBase;
}

void CppParser::EnumBaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumBase(this);
}

void CppParser::EnumBaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumBase(this);
}

CppParser::EnumBaseContext* CppParser::enumBase() {
  EnumBaseContext *_localctx = _tracker.createInstance<EnumBaseContext>(_ctx, getState());
  enterRule(_localctx, 188, CppParser::RuleEnumBase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1501);
    match(CppParser::Colon);
    setState(1502);
    typeSpecifierSequence();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorListContext ------------------------------------------------------------------

CppParser::EnumeratorListContext::EnumeratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::EnumeratorDefinitionContext* CppParser::EnumeratorListContext::enumeratorDefinition() {
  return getRuleContext<CppParser::EnumeratorDefinitionContext>(0);
}

CppParser::EnumeratorListContext* CppParser::EnumeratorListContext::enumeratorList() {
  return getRuleContext<CppParser::EnumeratorListContext>(0);
}

tree::TerminalNode* CppParser::EnumeratorListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::EnumeratorListContext::getRuleIndex() const {
  return CppParser::RuleEnumeratorList;
}

void CppParser::EnumeratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorList(this);
}

void CppParser::EnumeratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorList(this);
}


CppParser::EnumeratorListContext* CppParser::enumeratorList() {
   return enumeratorList(0);
}

CppParser::EnumeratorListContext* CppParser::enumeratorList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::EnumeratorListContext *_localctx = _tracker.createInstance<EnumeratorListContext>(_ctx, parentState);
  CppParser::EnumeratorListContext *previousContext = _localctx;
  size_t startState = 190;
  enterRecursionRule(_localctx, 190, CppParser::RuleEnumeratorList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1505);
    enumeratorDefinition();
    _ctx->stop = _input->LT(-1);
    setState(1512);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EnumeratorListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEnumeratorList);
        setState(1507);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1508);
        match(CppParser::Comma);
        setState(1509);
        enumeratorDefinition(); 
      }
      setState(1514);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EnumeratorDefinitionContext ------------------------------------------------------------------

CppParser::EnumeratorDefinitionContext::EnumeratorDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::EnumeratorContext* CppParser::EnumeratorDefinitionContext::enumerator() {
  return getRuleContext<CppParser::EnumeratorContext>(0);
}

tree::TerminalNode* CppParser::EnumeratorDefinitionContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

CppParser::ConstantExpressionContext* CppParser::EnumeratorDefinitionContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}


size_t CppParser::EnumeratorDefinitionContext::getRuleIndex() const {
  return CppParser::RuleEnumeratorDefinition;
}

void CppParser::EnumeratorDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumeratorDefinition(this);
}

void CppParser::EnumeratorDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumeratorDefinition(this);
}

CppParser::EnumeratorDefinitionContext* CppParser::enumeratorDefinition() {
  EnumeratorDefinitionContext *_localctx = _tracker.createInstance<EnumeratorDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 192, CppParser::RuleEnumeratorDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1520);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1515);
      enumerator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1516);
      enumerator();
      setState(1517);
      match(CppParser::Equal);
      setState(1518);
      constantExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumeratorContext ------------------------------------------------------------------

CppParser::EnumeratorContext::EnumeratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::EnumeratorContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::EnumeratorContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::EnumeratorContext::getRuleIndex() const {
  return CppParser::RuleEnumerator;
}

void CppParser::EnumeratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumerator(this);
}

void CppParser::EnumeratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumerator(this);
}

CppParser::EnumeratorContext* CppParser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 194, CppParser::RuleEnumerator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1522);
    match(CppParser::Identifier);
    setState(1524);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx)) {
    case 1: {
      setState(1523);
      attributeSpecifierSequence(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceDefinitionContext ------------------------------------------------------------------

CppParser::NamespaceDefinitionContext::NamespaceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::NamedNamespaceDefinitionContext* CppParser::NamespaceDefinitionContext::namedNamespaceDefinition() {
  return getRuleContext<CppParser::NamedNamespaceDefinitionContext>(0);
}

CppParser::UnnamedNamespaceDefinitionContext* CppParser::NamespaceDefinitionContext::unnamedNamespaceDefinition() {
  return getRuleContext<CppParser::UnnamedNamespaceDefinitionContext>(0);
}

CppParser::NestedNamespaceDefinitionContext* CppParser::NamespaceDefinitionContext::nestedNamespaceDefinition() {
  return getRuleContext<CppParser::NestedNamespaceDefinitionContext>(0);
}


size_t CppParser::NamespaceDefinitionContext::getRuleIndex() const {
  return CppParser::RuleNamespaceDefinition;
}

void CppParser::NamespaceDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceDefinition(this);
}

void CppParser::NamespaceDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceDefinition(this);
}

CppParser::NamespaceDefinitionContext* CppParser::namespaceDefinition() {
  NamespaceDefinitionContext *_localctx = _tracker.createInstance<NamespaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 196, CppParser::RuleNamespaceDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1529);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1526);
      namedNamespaceDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1527);
      unnamedNamespaceDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1528);
      nestedNamespaceDefinition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamedNamespaceDefinitionContext ------------------------------------------------------------------

CppParser::NamedNamespaceDefinitionContext::NamedNamespaceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NamedNamespaceDefinitionContext::Namespace() {
  return getToken(CppParser::Namespace, 0);
}

tree::TerminalNode* CppParser::NamedNamespaceDefinitionContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::NamedNamespaceDefinitionContext::LeftBrace() {
  return getToken(CppParser::LeftBrace, 0);
}

CppParser::NamespaceBodyContext* CppParser::NamedNamespaceDefinitionContext::namespaceBody() {
  return getRuleContext<CppParser::NamespaceBodyContext>(0);
}

tree::TerminalNode* CppParser::NamedNamespaceDefinitionContext::RightBrace() {
  return getToken(CppParser::RightBrace, 0);
}

tree::TerminalNode* CppParser::NamedNamespaceDefinitionContext::Inline() {
  return getToken(CppParser::Inline, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::NamedNamespaceDefinitionContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::NamedNamespaceDefinitionContext::getRuleIndex() const {
  return CppParser::RuleNamedNamespaceDefinition;
}

void CppParser::NamedNamespaceDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamedNamespaceDefinition(this);
}

void CppParser::NamedNamespaceDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamedNamespaceDefinition(this);
}

CppParser::NamedNamespaceDefinitionContext* CppParser::namedNamespaceDefinition() {
  NamedNamespaceDefinitionContext *_localctx = _tracker.createInstance<NamedNamespaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 198, CppParser::RuleNamedNamespaceDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1532);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Inline) {
      setState(1531);
      match(CppParser::Inline);
    }
    setState(1534);
    match(CppParser::Namespace);
    setState(1536);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
      setState(1535);
      attributeSpecifierSequence(0);
    }
    setState(1538);
    match(CppParser::Identifier);
    setState(1539);
    match(CppParser::LeftBrace);
    setState(1540);
    namespaceBody();
    setState(1541);
    match(CppParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnnamedNamespaceDefinitionContext ------------------------------------------------------------------

CppParser::UnnamedNamespaceDefinitionContext::UnnamedNamespaceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::UnnamedNamespaceDefinitionContext::Namespace() {
  return getToken(CppParser::Namespace, 0);
}

tree::TerminalNode* CppParser::UnnamedNamespaceDefinitionContext::LeftBrace() {
  return getToken(CppParser::LeftBrace, 0);
}

CppParser::NamespaceBodyContext* CppParser::UnnamedNamespaceDefinitionContext::namespaceBody() {
  return getRuleContext<CppParser::NamespaceBodyContext>(0);
}

tree::TerminalNode* CppParser::UnnamedNamespaceDefinitionContext::RightBrace() {
  return getToken(CppParser::RightBrace, 0);
}

tree::TerminalNode* CppParser::UnnamedNamespaceDefinitionContext::Inline() {
  return getToken(CppParser::Inline, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::UnnamedNamespaceDefinitionContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::UnnamedNamespaceDefinitionContext::getRuleIndex() const {
  return CppParser::RuleUnnamedNamespaceDefinition;
}

void CppParser::UnnamedNamespaceDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnnamedNamespaceDefinition(this);
}

void CppParser::UnnamedNamespaceDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnnamedNamespaceDefinition(this);
}

CppParser::UnnamedNamespaceDefinitionContext* CppParser::unnamedNamespaceDefinition() {
  UnnamedNamespaceDefinitionContext *_localctx = _tracker.createInstance<UnnamedNamespaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 200, CppParser::RuleUnnamedNamespaceDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1544);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Inline) {
      setState(1543);
      match(CppParser::Inline);
    }
    setState(1546);
    match(CppParser::Namespace);
    setState(1548);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
      setState(1547);
      attributeSpecifierSequence(0);
    }
    setState(1550);
    match(CppParser::LeftBrace);
    setState(1551);
    namespaceBody();
    setState(1552);
    match(CppParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NestedNamespaceDefinitionContext ------------------------------------------------------------------

CppParser::NestedNamespaceDefinitionContext::NestedNamespaceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NestedNamespaceDefinitionContext::Namespace() {
  return getToken(CppParser::Namespace, 0);
}

CppParser::EnclosingNamespaceSpecifierContext* CppParser::NestedNamespaceDefinitionContext::enclosingNamespaceSpecifier() {
  return getRuleContext<CppParser::EnclosingNamespaceSpecifierContext>(0);
}

tree::TerminalNode* CppParser::NestedNamespaceDefinitionContext::DoubleColon() {
  return getToken(CppParser::DoubleColon, 0);
}

tree::TerminalNode* CppParser::NestedNamespaceDefinitionContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::NestedNamespaceDefinitionContext::LeftBrace() {
  return getToken(CppParser::LeftBrace, 0);
}

CppParser::NamespaceBodyContext* CppParser::NestedNamespaceDefinitionContext::namespaceBody() {
  return getRuleContext<CppParser::NamespaceBodyContext>(0);
}

tree::TerminalNode* CppParser::NestedNamespaceDefinitionContext::RightBrace() {
  return getToken(CppParser::RightBrace, 0);
}


size_t CppParser::NestedNamespaceDefinitionContext::getRuleIndex() const {
  return CppParser::RuleNestedNamespaceDefinition;
}

void CppParser::NestedNamespaceDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestedNamespaceDefinition(this);
}

void CppParser::NestedNamespaceDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestedNamespaceDefinition(this);
}

CppParser::NestedNamespaceDefinitionContext* CppParser::nestedNamespaceDefinition() {
  NestedNamespaceDefinitionContext *_localctx = _tracker.createInstance<NestedNamespaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 202, CppParser::RuleNestedNamespaceDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1554);
    match(CppParser::Namespace);
    setState(1555);
    enclosingNamespaceSpecifier();
    setState(1556);
    match(CppParser::DoubleColon);
    setState(1557);
    match(CppParser::Identifier);
    setState(1558);
    match(CppParser::LeftBrace);
    setState(1559);
    namespaceBody();
    setState(1560);
    match(CppParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnclosingNamespaceSpecifierContext ------------------------------------------------------------------

CppParser::EnclosingNamespaceSpecifierContext::EnclosingNamespaceSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CppParser::EnclosingNamespaceSpecifierContext::Identifier() {
  return getTokens(CppParser::Identifier);
}

tree::TerminalNode* CppParser::EnclosingNamespaceSpecifierContext::Identifier(size_t i) {
  return getToken(CppParser::Identifier, i);
}

CppParser::EnclosingNamespaceSpecifierContext* CppParser::EnclosingNamespaceSpecifierContext::enclosingNamespaceSpecifier() {
  return getRuleContext<CppParser::EnclosingNamespaceSpecifierContext>(0);
}

tree::TerminalNode* CppParser::EnclosingNamespaceSpecifierContext::DoubleColon() {
  return getToken(CppParser::DoubleColon, 0);
}


size_t CppParser::EnclosingNamespaceSpecifierContext::getRuleIndex() const {
  return CppParser::RuleEnclosingNamespaceSpecifier;
}

void CppParser::EnclosingNamespaceSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnclosingNamespaceSpecifier(this);
}

void CppParser::EnclosingNamespaceSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnclosingNamespaceSpecifier(this);
}

CppParser::EnclosingNamespaceSpecifierContext* CppParser::enclosingNamespaceSpecifier() {
  EnclosingNamespaceSpecifierContext *_localctx = _tracker.createInstance<EnclosingNamespaceSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 204, CppParser::RuleEnclosingNamespaceSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1562);
    match(CppParser::Identifier);
    setState(1563);
    enclosingNamespaceSpecifier();
    setState(1564);
    match(CppParser::DoubleColon);
    setState(1565);
    match(CppParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceBodyContext ------------------------------------------------------------------

CppParser::NamespaceBodyContext::NamespaceBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclarationSequenceContext* CppParser::NamespaceBodyContext::declarationSequence() {
  return getRuleContext<CppParser::DeclarationSequenceContext>(0);
}


size_t CppParser::NamespaceBodyContext::getRuleIndex() const {
  return CppParser::RuleNamespaceBody;
}

void CppParser::NamespaceBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceBody(this);
}

void CppParser::NamespaceBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceBody(this);
}

CppParser::NamespaceBodyContext* CppParser::namespaceBody() {
  NamespaceBodyContext *_localctx = _tracker.createInstance<NamespaceBodyContext>(_ctx, getState());
  enterRule(_localctx, 206, CppParser::RuleNamespaceBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1568);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
      | (1ULL << CppParser::Asm)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::Class)
      | (1ULL << CppParser::Const)
      | (1ULL << CppParser::ConstExpr)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::Enum)
      | (1ULL << CppParser::Explicit)
      | (1ULL << CppParser::Extern)
      | (1ULL << CppParser::Float)
      | (1ULL << CppParser::Friend)
      | (1ULL << CppParser::Inline)
      | (1ULL << CppParser::Int)
      | (1ULL << CppParser::Long)
      | (1ULL << CppParser::Mutable)
      | (1ULL << CppParser::Namespace)
      | (1ULL << CppParser::Operator)
      | (1ULL << CppParser::Short)
      | (1ULL << CppParser::Signed)
      | (1ULL << CppParser::Static)
      | (1ULL << CppParser::StaticAssert)
      | (1ULL << CppParser::Struct)
      | (1ULL << CppParser::Template)
      | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (CppParser::TypeDef - 67))
      | (1ULL << (CppParser::TypeName - 67))
      | (1ULL << (CppParser::Union - 67))
      | (1ULL << (CppParser::Unsigned - 67))
      | (1ULL << (CppParser::Using - 67))
      | (1ULL << (CppParser::Virtual - 67))
      | (1ULL << (CppParser::Void - 67))
      | (1ULL << (CppParser::Volatile - 67))
      | (1ULL << (CppParser::WChar - 67))
      | (1ULL << (CppParser::LeftBracket - 67))
      | (1ULL << (CppParser::LeftParenthesis - 67))
      | (1ULL << (CppParser::Semicolon - 67))
      | (1ULL << (CppParser::Ellipsis - 67))
      | (1ULL << (CppParser::DoubleColon - 67))
      | (1ULL << (CppParser::Asterisk - 67))
      | (1ULL << (CppParser::Ampersand - 67))
      | (1ULL << (CppParser::Tilde - 67))
      | (1ULL << (CppParser::DoubleAmpersand - 67)))) != 0) || _la == CppParser::Identifier) {
      setState(1567);
      declarationSequence(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceAliasDefinitionContext ------------------------------------------------------------------

CppParser::NamespaceAliasDefinitionContext::NamespaceAliasDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NamespaceAliasDefinitionContext::Namespace() {
  return getToken(CppParser::Namespace, 0);
}

tree::TerminalNode* CppParser::NamespaceAliasDefinitionContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::NamespaceAliasDefinitionContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

CppParser::QualifiedNamespaceSpecifierContext* CppParser::NamespaceAliasDefinitionContext::qualifiedNamespaceSpecifier() {
  return getRuleContext<CppParser::QualifiedNamespaceSpecifierContext>(0);
}

tree::TerminalNode* CppParser::NamespaceAliasDefinitionContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}


size_t CppParser::NamespaceAliasDefinitionContext::getRuleIndex() const {
  return CppParser::RuleNamespaceAliasDefinition;
}

void CppParser::NamespaceAliasDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceAliasDefinition(this);
}

void CppParser::NamespaceAliasDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceAliasDefinition(this);
}

CppParser::NamespaceAliasDefinitionContext* CppParser::namespaceAliasDefinition() {
  NamespaceAliasDefinitionContext *_localctx = _tracker.createInstance<NamespaceAliasDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 208, CppParser::RuleNamespaceAliasDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1570);
    match(CppParser::Namespace);
    setState(1571);
    match(CppParser::Identifier);
    setState(1572);
    match(CppParser::Equal);
    setState(1573);
    qualifiedNamespaceSpecifier();
    setState(1574);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedNamespaceSpecifierContext ------------------------------------------------------------------

CppParser::QualifiedNamespaceSpecifierContext::QualifiedNamespaceSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::NamespaceNameContext* CppParser::QualifiedNamespaceSpecifierContext::namespaceName() {
  return getRuleContext<CppParser::NamespaceNameContext>(0);
}

CppParser::NestedNameSpecifierContext* CppParser::QualifiedNamespaceSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}


size_t CppParser::QualifiedNamespaceSpecifierContext::getRuleIndex() const {
  return CppParser::RuleQualifiedNamespaceSpecifier;
}

void CppParser::QualifiedNamespaceSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedNamespaceSpecifier(this);
}

void CppParser::QualifiedNamespaceSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedNamespaceSpecifier(this);
}

CppParser::QualifiedNamespaceSpecifierContext* CppParser::qualifiedNamespaceSpecifier() {
  QualifiedNamespaceSpecifierContext *_localctx = _tracker.createInstance<QualifiedNamespaceSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 210, CppParser::RuleQualifiedNamespaceSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1577);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx)) {
    case 1: {
      setState(1576);
      nestedNameSpecifier(0);
      break;
    }

    }
    setState(1579);
    namespaceName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingDeclarationContext ------------------------------------------------------------------

CppParser::UsingDeclarationContext::UsingDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::UsingDeclarationContext::Using() {
  return getToken(CppParser::Using, 0);
}

CppParser::UsingDeclaratorListContext* CppParser::UsingDeclarationContext::usingDeclaratorList() {
  return getRuleContext<CppParser::UsingDeclaratorListContext>(0);
}

tree::TerminalNode* CppParser::UsingDeclarationContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}


size_t CppParser::UsingDeclarationContext::getRuleIndex() const {
  return CppParser::RuleUsingDeclaration;
}

void CppParser::UsingDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingDeclaration(this);
}

void CppParser::UsingDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingDeclaration(this);
}

CppParser::UsingDeclarationContext* CppParser::usingDeclaration() {
  UsingDeclarationContext *_localctx = _tracker.createInstance<UsingDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 212, CppParser::RuleUsingDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1581);
    match(CppParser::Using);
    setState(1582);
    usingDeclaratorList(0);
    setState(1583);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingDeclaratorListContext ------------------------------------------------------------------

CppParser::UsingDeclaratorListContext::UsingDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::UsingDeclaratorContext* CppParser::UsingDeclaratorListContext::usingDeclarator() {
  return getRuleContext<CppParser::UsingDeclaratorContext>(0);
}

tree::TerminalNode* CppParser::UsingDeclaratorListContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

CppParser::UsingDeclaratorListContext* CppParser::UsingDeclaratorListContext::usingDeclaratorList() {
  return getRuleContext<CppParser::UsingDeclaratorListContext>(0);
}

tree::TerminalNode* CppParser::UsingDeclaratorListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::UsingDeclaratorListContext::getRuleIndex() const {
  return CppParser::RuleUsingDeclaratorList;
}

void CppParser::UsingDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingDeclaratorList(this);
}

void CppParser::UsingDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingDeclaratorList(this);
}


CppParser::UsingDeclaratorListContext* CppParser::usingDeclaratorList() {
   return usingDeclaratorList(0);
}

CppParser::UsingDeclaratorListContext* CppParser::usingDeclaratorList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::UsingDeclaratorListContext *_localctx = _tracker.createInstance<UsingDeclaratorListContext>(_ctx, parentState);
  CppParser::UsingDeclaratorListContext *previousContext = _localctx;
  size_t startState = 214;
  enterRecursionRule(_localctx, 214, CppParser::RuleUsingDeclaratorList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1586);
    usingDeclarator();
    setState(1588);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx)) {
    case 1: {
      setState(1587);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1598);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<UsingDeclaratorListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleUsingDeclaratorList);
        setState(1590);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1591);
        match(CppParser::Comma);
        setState(1592);
        usingDeclarator();
        setState(1594);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
        case 1: {
          setState(1593);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(1600);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UsingDeclaratorContext ------------------------------------------------------------------

CppParser::UsingDeclaratorContext::UsingDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::NestedNameSpecifierContext* CppParser::UsingDeclaratorContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}

CppParser::UnqualifiedIdentifierContext* CppParser::UsingDeclaratorContext::unqualifiedIdentifier() {
  return getRuleContext<CppParser::UnqualifiedIdentifierContext>(0);
}

CppParser::TypeNameContext* CppParser::UsingDeclaratorContext::typeName() {
  return getRuleContext<CppParser::TypeNameContext>(0);
}


size_t CppParser::UsingDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleUsingDeclarator;
}

void CppParser::UsingDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingDeclarator(this);
}

void CppParser::UsingDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingDeclarator(this);
}

CppParser::UsingDeclaratorContext* CppParser::usingDeclarator() {
  UsingDeclaratorContext *_localctx = _tracker.createInstance<UsingDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 216, CppParser::RuleUsingDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1602);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 160, _ctx)) {
    case 1: {
      setState(1601);
      typeName();
      break;
    }

    }
    setState(1604);
    nestedNameSpecifier(0);
    setState(1605);
    unqualifiedIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingDirectiveContext ------------------------------------------------------------------

CppParser::UsingDirectiveContext::UsingDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::UsingDirectiveContext::Using() {
  return getToken(CppParser::Using, 0);
}

tree::TerminalNode* CppParser::UsingDirectiveContext::Namespace() {
  return getToken(CppParser::Namespace, 0);
}

CppParser::NamespaceNameContext* CppParser::UsingDirectiveContext::namespaceName() {
  return getRuleContext<CppParser::NamespaceNameContext>(0);
}

tree::TerminalNode* CppParser::UsingDirectiveContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::UsingDirectiveContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::NestedNameSpecifierContext* CppParser::UsingDirectiveContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}


size_t CppParser::UsingDirectiveContext::getRuleIndex() const {
  return CppParser::RuleUsingDirective;
}

void CppParser::UsingDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingDirective(this);
}

void CppParser::UsingDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingDirective(this);
}

CppParser::UsingDirectiveContext* CppParser::usingDirective() {
  UsingDirectiveContext *_localctx = _tracker.createInstance<UsingDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 218, CppParser::RuleUsingDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1608);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
      setState(1607);
      attributeSpecifierSequence(0);
    }
    setState(1610);
    match(CppParser::Using);
    setState(1611);
    match(CppParser::Namespace);
    setState(1613);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx)) {
    case 1: {
      setState(1612);
      nestedNameSpecifier(0);
      break;
    }

    }
    setState(1615);
    namespaceName();
    setState(1616);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsmDefinitionContext ------------------------------------------------------------------

CppParser::AsmDefinitionContext::AsmDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::AsmDefinitionContext::Asm() {
  return getToken(CppParser::Asm, 0);
}

tree::TerminalNode* CppParser::AsmDefinitionContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

tree::TerminalNode* CppParser::AsmDefinitionContext::StringLiteral() {
  return getToken(CppParser::StringLiteral, 0);
}

tree::TerminalNode* CppParser::AsmDefinitionContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

tree::TerminalNode* CppParser::AsmDefinitionContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::AsmDefinitionContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::AsmDefinitionContext::getRuleIndex() const {
  return CppParser::RuleAsmDefinition;
}

void CppParser::AsmDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsmDefinition(this);
}

void CppParser::AsmDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsmDefinition(this);
}

CppParser::AsmDefinitionContext* CppParser::asmDefinition() {
  AsmDefinitionContext *_localctx = _tracker.createInstance<AsmDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 220, CppParser::RuleAsmDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1619);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
      setState(1618);
      attributeSpecifierSequence(0);
    }
    setState(1621);
    match(CppParser::Asm);
    setState(1622);
    match(CppParser::LeftParenthesis);
    setState(1623);
    match(CppParser::StringLiteral);
    setState(1624);
    match(CppParser::RightParenthesis);
    setState(1625);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinkageSpecificationContext ------------------------------------------------------------------

CppParser::LinkageSpecificationContext::LinkageSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::LinkageSpecificationContext::Extern() {
  return getToken(CppParser::Extern, 0);
}

tree::TerminalNode* CppParser::LinkageSpecificationContext::StringLiteral() {
  return getToken(CppParser::StringLiteral, 0);
}

tree::TerminalNode* CppParser::LinkageSpecificationContext::LeftBrace() {
  return getToken(CppParser::LeftBrace, 0);
}

tree::TerminalNode* CppParser::LinkageSpecificationContext::RightBrace() {
  return getToken(CppParser::RightBrace, 0);
}

CppParser::DeclarationSequenceContext* CppParser::LinkageSpecificationContext::declarationSequence() {
  return getRuleContext<CppParser::DeclarationSequenceContext>(0);
}

CppParser::DeclarationContext* CppParser::LinkageSpecificationContext::declaration() {
  return getRuleContext<CppParser::DeclarationContext>(0);
}


size_t CppParser::LinkageSpecificationContext::getRuleIndex() const {
  return CppParser::RuleLinkageSpecification;
}

void CppParser::LinkageSpecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLinkageSpecification(this);
}

void CppParser::LinkageSpecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLinkageSpecification(this);
}

CppParser::LinkageSpecificationContext* CppParser::linkageSpecification() {
  LinkageSpecificationContext *_localctx = _tracker.createInstance<LinkageSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 222, CppParser::RuleLinkageSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1637);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1627);
      match(CppParser::Extern);
      setState(1628);
      match(CppParser::StringLiteral);
      setState(1629);
      match(CppParser::LeftBrace);
      setState(1631);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
        | (1ULL << CppParser::Asm)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::Class)
        | (1ULL << CppParser::Const)
        | (1ULL << CppParser::ConstExpr)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::Enum)
        | (1ULL << CppParser::Explicit)
        | (1ULL << CppParser::Extern)
        | (1ULL << CppParser::Float)
        | (1ULL << CppParser::Friend)
        | (1ULL << CppParser::Inline)
        | (1ULL << CppParser::Int)
        | (1ULL << CppParser::Long)
        | (1ULL << CppParser::Mutable)
        | (1ULL << CppParser::Namespace)
        | (1ULL << CppParser::Operator)
        | (1ULL << CppParser::Short)
        | (1ULL << CppParser::Signed)
        | (1ULL << CppParser::Static)
        | (1ULL << CppParser::StaticAssert)
        | (1ULL << CppParser::Struct)
        | (1ULL << CppParser::Template)
        | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (CppParser::TypeDef - 67))
        | (1ULL << (CppParser::TypeName - 67))
        | (1ULL << (CppParser::Union - 67))
        | (1ULL << (CppParser::Unsigned - 67))
        | (1ULL << (CppParser::Using - 67))
        | (1ULL << (CppParser::Virtual - 67))
        | (1ULL << (CppParser::Void - 67))
        | (1ULL << (CppParser::Volatile - 67))
        | (1ULL << (CppParser::WChar - 67))
        | (1ULL << (CppParser::LeftBracket - 67))
        | (1ULL << (CppParser::LeftParenthesis - 67))
        | (1ULL << (CppParser::Semicolon - 67))
        | (1ULL << (CppParser::Ellipsis - 67))
        | (1ULL << (CppParser::DoubleColon - 67))
        | (1ULL << (CppParser::Asterisk - 67))
        | (1ULL << (CppParser::Ampersand - 67))
        | (1ULL << (CppParser::Tilde - 67))
        | (1ULL << (CppParser::DoubleAmpersand - 67)))) != 0) || _la == CppParser::Identifier) {
        setState(1630);
        declarationSequence(0);
      }
      setState(1633);
      match(CppParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1634);
      match(CppParser::Extern);
      setState(1635);
      match(CppParser::StringLiteral);
      setState(1636);
      declaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeSpecifierSequenceContext ------------------------------------------------------------------

CppParser::AttributeSpecifierSequenceContext::AttributeSpecifierSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::AttributeSpecifierContext* CppParser::AttributeSpecifierSequenceContext::attributeSpecifier() {
  return getRuleContext<CppParser::AttributeSpecifierContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::AttributeSpecifierSequenceContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::AttributeSpecifierSequenceContext::getRuleIndex() const {
  return CppParser::RuleAttributeSpecifierSequence;
}

void CppParser::AttributeSpecifierSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeSpecifierSequence(this);
}

void CppParser::AttributeSpecifierSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeSpecifierSequence(this);
}


CppParser::AttributeSpecifierSequenceContext* CppParser::attributeSpecifierSequence() {
   return attributeSpecifierSequence(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::attributeSpecifierSequence(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::AttributeSpecifierSequenceContext *_localctx = _tracker.createInstance<AttributeSpecifierSequenceContext>(_ctx, parentState);
  CppParser::AttributeSpecifierSequenceContext *previousContext = _localctx;
  size_t startState = 224;
  enterRecursionRule(_localctx, 224, CppParser::RuleAttributeSpecifierSequence, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1640);
    attributeSpecifier();
    _ctx->stop = _input->LT(-1);
    setState(1646);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AttributeSpecifierSequenceContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAttributeSpecifierSequence);
        setState(1642);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1643);
        attributeSpecifier(); 
      }
      setState(1648);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AttributeSpecifierContext ------------------------------------------------------------------

CppParser::AttributeSpecifierContext::AttributeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CppParser::AttributeSpecifierContext::LeftBracket() {
  return getTokens(CppParser::LeftBracket);
}

tree::TerminalNode* CppParser::AttributeSpecifierContext::LeftBracket(size_t i) {
  return getToken(CppParser::LeftBracket, i);
}

CppParser::AttributeListContext* CppParser::AttributeSpecifierContext::attributeList() {
  return getRuleContext<CppParser::AttributeListContext>(0);
}

std::vector<tree::TerminalNode *> CppParser::AttributeSpecifierContext::RightBracket() {
  return getTokens(CppParser::RightBracket);
}

tree::TerminalNode* CppParser::AttributeSpecifierContext::RightBracket(size_t i) {
  return getToken(CppParser::RightBracket, i);
}

CppParser::AttributeUsingPrefixContext* CppParser::AttributeSpecifierContext::attributeUsingPrefix() {
  return getRuleContext<CppParser::AttributeUsingPrefixContext>(0);
}

CppParser::AlignmentSpecifierContext* CppParser::AttributeSpecifierContext::alignmentSpecifier() {
  return getRuleContext<CppParser::AlignmentSpecifierContext>(0);
}


size_t CppParser::AttributeSpecifierContext::getRuleIndex() const {
  return CppParser::RuleAttributeSpecifier;
}

void CppParser::AttributeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeSpecifier(this);
}

void CppParser::AttributeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeSpecifier(this);
}

CppParser::AttributeSpecifierContext* CppParser::attributeSpecifier() {
  AttributeSpecifierContext *_localctx = _tracker.createInstance<AttributeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 226, CppParser::RuleAttributeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1659);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::LeftBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1649);
        match(CppParser::LeftBracket);
        setState(1650);
        match(CppParser::LeftBracket);
        setState(1652);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx)) {
        case 1: {
          setState(1651);
          attributeUsingPrefix();
          break;
        }

        }
        setState(1654);
        attributeList(0);
        setState(1655);
        match(CppParser::RightBracket);
        setState(1656);
        match(CppParser::RightBracket);
        break;
      }

      case CppParser::AlignAs: {
        enterOuterAlt(_localctx, 2);
        setState(1658);
        alignmentSpecifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlignmentSpecifierContext ------------------------------------------------------------------

CppParser::AlignmentSpecifierContext::AlignmentSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::AlignmentSpecifierContext::AlignAs() {
  return getToken(CppParser::AlignAs, 0);
}

tree::TerminalNode* CppParser::AlignmentSpecifierContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::TypeIdentifierContext* CppParser::AlignmentSpecifierContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}

std::vector<tree::TerminalNode *> CppParser::AlignmentSpecifierContext::RightParenthesis() {
  return getTokens(CppParser::RightParenthesis);
}

tree::TerminalNode* CppParser::AlignmentSpecifierContext::RightParenthesis(size_t i) {
  return getToken(CppParser::RightParenthesis, i);
}

tree::TerminalNode* CppParser::AlignmentSpecifierContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

CppParser::ConstantExpressionContext* CppParser::AlignmentSpecifierContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}


size_t CppParser::AlignmentSpecifierContext::getRuleIndex() const {
  return CppParser::RuleAlignmentSpecifier;
}

void CppParser::AlignmentSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlignmentSpecifier(this);
}

void CppParser::AlignmentSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlignmentSpecifier(this);
}

CppParser::AlignmentSpecifierContext* CppParser::alignmentSpecifier() {
  AlignmentSpecifierContext *_localctx = _tracker.createInstance<AlignmentSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 228, CppParser::RuleAlignmentSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1677);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1661);
      match(CppParser::AlignAs);
      setState(1662);
      match(CppParser::LeftParenthesis);
      setState(1663);
      typeIdentifier();
      setState(1665);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Ellipsis) {
        setState(1664);
        match(CppParser::Ellipsis);
      }
      setState(1667);
      match(CppParser::RightParenthesis);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1669);
      match(CppParser::AlignAs);
      setState(1670);
      match(CppParser::RightParenthesis);
      setState(1671);
      constantExpression();
      setState(1673);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Ellipsis) {
        setState(1672);
        match(CppParser::Ellipsis);
      }
      setState(1675);
      match(CppParser::RightParenthesis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeUsingPrefixContext ------------------------------------------------------------------

CppParser::AttributeUsingPrefixContext::AttributeUsingPrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::AttributeUsingPrefixContext::Using() {
  return getToken(CppParser::Using, 0);
}

CppParser::AttributeNamespaceContext* CppParser::AttributeUsingPrefixContext::attributeNamespace() {
  return getRuleContext<CppParser::AttributeNamespaceContext>(0);
}

tree::TerminalNode* CppParser::AttributeUsingPrefixContext::Colon() {
  return getToken(CppParser::Colon, 0);
}


size_t CppParser::AttributeUsingPrefixContext::getRuleIndex() const {
  return CppParser::RuleAttributeUsingPrefix;
}

void CppParser::AttributeUsingPrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeUsingPrefix(this);
}

void CppParser::AttributeUsingPrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeUsingPrefix(this);
}

CppParser::AttributeUsingPrefixContext* CppParser::attributeUsingPrefix() {
  AttributeUsingPrefixContext *_localctx = _tracker.createInstance<AttributeUsingPrefixContext>(_ctx, getState());
  enterRule(_localctx, 230, CppParser::RuleAttributeUsingPrefix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1679);
    match(CppParser::Using);
    setState(1680);
    attributeNamespace();
    setState(1681);
    match(CppParser::Colon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeListContext ------------------------------------------------------------------

CppParser::AttributeListContext::AttributeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::AttributeContext* CppParser::AttributeListContext::attribute() {
  return getRuleContext<CppParser::AttributeContext>(0);
}

tree::TerminalNode* CppParser::AttributeListContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

CppParser::AttributeListContext* CppParser::AttributeListContext::attributeList() {
  return getRuleContext<CppParser::AttributeListContext>(0);
}

tree::TerminalNode* CppParser::AttributeListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::AttributeListContext::getRuleIndex() const {
  return CppParser::RuleAttributeList;
}

void CppParser::AttributeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeList(this);
}

void CppParser::AttributeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeList(this);
}


CppParser::AttributeListContext* CppParser::attributeList() {
   return attributeList(0);
}

CppParser::AttributeListContext* CppParser::attributeList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::AttributeListContext *_localctx = _tracker.createInstance<AttributeListContext>(_ctx, parentState);
  CppParser::AttributeListContext *previousContext = _localctx;
  size_t startState = 232;
  enterRecursionRule(_localctx, 232, CppParser::RuleAttributeList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1690);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 173, _ctx)) {
    case 1: {
      setState(1685);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 172, _ctx)) {
      case 1: {
        setState(1684);
        attribute();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1687);
      attribute();
      setState(1688);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1704);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1702);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 175, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AttributeListContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributeList);
          setState(1692);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1693);
          match(CppParser::Comma);
          setState(1695);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 174, _ctx)) {
          case 1: {
            setState(1694);
            attribute();
            break;
          }

          }
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AttributeListContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributeList);
          setState(1697);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1698);
          match(CppParser::Comma);
          setState(1699);
          attribute();
          setState(1700);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(1706);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

CppParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::AttributeTokenContext* CppParser::AttributeContext::attributeToken() {
  return getRuleContext<CppParser::AttributeTokenContext>(0);
}

CppParser::AttributeArgumentClauseContext* CppParser::AttributeContext::attributeArgumentClause() {
  return getRuleContext<CppParser::AttributeArgumentClauseContext>(0);
}


size_t CppParser::AttributeContext::getRuleIndex() const {
  return CppParser::RuleAttribute;
}

void CppParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void CppParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}

CppParser::AttributeContext* CppParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 234, CppParser::RuleAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1707);
    attributeToken();
    setState(1709);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx)) {
    case 1: {
      setState(1708);
      attributeArgumentClause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeTokenContext ------------------------------------------------------------------

CppParser::AttributeTokenContext::AttributeTokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::AttributeTokenContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::AttributeScopedTokenContext* CppParser::AttributeTokenContext::attributeScopedToken() {
  return getRuleContext<CppParser::AttributeScopedTokenContext>(0);
}


size_t CppParser::AttributeTokenContext::getRuleIndex() const {
  return CppParser::RuleAttributeToken;
}

void CppParser::AttributeTokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeToken(this);
}

void CppParser::AttributeTokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeToken(this);
}

CppParser::AttributeTokenContext* CppParser::attributeToken() {
  AttributeTokenContext *_localctx = _tracker.createInstance<AttributeTokenContext>(_ctx, getState());
  enterRule(_localctx, 236, CppParser::RuleAttributeToken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1713);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1711);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1712);
      attributeScopedToken();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeScopedTokenContext ------------------------------------------------------------------

CppParser::AttributeScopedTokenContext::AttributeScopedTokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::AttributeNamespaceContext* CppParser::AttributeScopedTokenContext::attributeNamespace() {
  return getRuleContext<CppParser::AttributeNamespaceContext>(0);
}

tree::TerminalNode* CppParser::AttributeScopedTokenContext::DoubleColon() {
  return getToken(CppParser::DoubleColon, 0);
}

tree::TerminalNode* CppParser::AttributeScopedTokenContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}


size_t CppParser::AttributeScopedTokenContext::getRuleIndex() const {
  return CppParser::RuleAttributeScopedToken;
}

void CppParser::AttributeScopedTokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeScopedToken(this);
}

void CppParser::AttributeScopedTokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeScopedToken(this);
}

CppParser::AttributeScopedTokenContext* CppParser::attributeScopedToken() {
  AttributeScopedTokenContext *_localctx = _tracker.createInstance<AttributeScopedTokenContext>(_ctx, getState());
  enterRule(_localctx, 238, CppParser::RuleAttributeScopedToken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1715);
    attributeNamespace();
    setState(1716);
    match(CppParser::DoubleColon);
    setState(1717);
    match(CppParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeNamespaceContext ------------------------------------------------------------------

CppParser::AttributeNamespaceContext::AttributeNamespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::AttributeNamespaceContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}


size_t CppParser::AttributeNamespaceContext::getRuleIndex() const {
  return CppParser::RuleAttributeNamespace;
}

void CppParser::AttributeNamespaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeNamespace(this);
}

void CppParser::AttributeNamespaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeNamespace(this);
}

CppParser::AttributeNamespaceContext* CppParser::attributeNamespace() {
  AttributeNamespaceContext *_localctx = _tracker.createInstance<AttributeNamespaceContext>(_ctx, getState());
  enterRule(_localctx, 240, CppParser::RuleAttributeNamespace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1719);
    match(CppParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeArgumentClauseContext ------------------------------------------------------------------

CppParser::AttributeArgumentClauseContext::AttributeArgumentClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::AttributeArgumentClauseContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

tree::TerminalNode* CppParser::AttributeArgumentClauseContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::BalancedTokenSequenceContext* CppParser::AttributeArgumentClauseContext::balancedTokenSequence() {
  return getRuleContext<CppParser::BalancedTokenSequenceContext>(0);
}


size_t CppParser::AttributeArgumentClauseContext::getRuleIndex() const {
  return CppParser::RuleAttributeArgumentClause;
}

void CppParser::AttributeArgumentClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeArgumentClause(this);
}

void CppParser::AttributeArgumentClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeArgumentClause(this);
}

CppParser::AttributeArgumentClauseContext* CppParser::attributeArgumentClause() {
  AttributeArgumentClauseContext *_localctx = _tracker.createInstance<AttributeArgumentClauseContext>(_ctx, getState());
  enterRule(_localctx, 242, CppParser::RuleAttributeArgumentClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1721);
    match(CppParser::LeftParenthesis);
    setState(1723);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::BlockComment)
      | (1ULL << CppParser::LineComment)
      | (1ULL << CppParser::Whitespace)
      | (1ULL << CppParser::Newline)
      | (1ULL << CppParser::AlignAs)
      | (1ULL << CppParser::AlignOf)
      | (1ULL << CppParser::Asm)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Break)
      | (1ULL << CppParser::Case)
      | (1ULL << CppParser::Catch)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::Class)
      | (1ULL << CppParser::Const)
      | (1ULL << CppParser::ConstExpr)
      | (1ULL << CppParser::ConstCast)
      | (1ULL << CppParser::Continue)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Default)
      | (1ULL << CppParser::Delete)
      | (1ULL << CppParser::Do)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::DynamicCast)
      | (1ULL << CppParser::Else)
      | (1ULL << CppParser::Enum)
      | (1ULL << CppParser::Explicit)
      | (1ULL << CppParser::Export)
      | (1ULL << CppParser::Extern)
      | (1ULL << CppParser::False)
      | (1ULL << CppParser::Float)
      | (1ULL << CppParser::For)
      | (1ULL << CppParser::Friend)
      | (1ULL << CppParser::GoTo)
      | (1ULL << CppParser::If)
      | (1ULL << CppParser::Inline)
      | (1ULL << CppParser::Int)
      | (1ULL << CppParser::Long)
      | (1ULL << CppParser::Mutable)
      | (1ULL << CppParser::Namespace)
      | (1ULL << CppParser::New)
      | (1ULL << CppParser::NoExcept)
      | (1ULL << CppParser::Nullptr)
      | (1ULL << CppParser::Operator)
      | (1ULL << CppParser::Private)
      | (1ULL << CppParser::Protected)
      | (1ULL << CppParser::Public)
      | (1ULL << CppParser::Register)
      | (1ULL << CppParser::ReinterpretCast)
      | (1ULL << CppParser::Return)
      | (1ULL << CppParser::Short)
      | (1ULL << CppParser::Signed)
      | (1ULL << CppParser::SizeOf)
      | (1ULL << CppParser::Static)
      | (1ULL << CppParser::StaticAssert)
      | (1ULL << CppParser::StaticCast)
      | (1ULL << CppParser::Struct)
      | (1ULL << CppParser::Switch)
      | (1ULL << CppParser::Template)
      | (1ULL << CppParser::This)
      | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
      | (1ULL << (CppParser::True - 64))
      | (1ULL << (CppParser::Try - 64))
      | (1ULL << (CppParser::TypeDef - 64))
      | (1ULL << (CppParser::TypeId - 64))
      | (1ULL << (CppParser::TypeName - 64))
      | (1ULL << (CppParser::Union - 64))
      | (1ULL << (CppParser::Unsigned - 64))
      | (1ULL << (CppParser::Using - 64))
      | (1ULL << (CppParser::Virtual - 64))
      | (1ULL << (CppParser::Void - 64))
      | (1ULL << (CppParser::Volatile - 64))
      | (1ULL << (CppParser::WChar - 64))
      | (1ULL << (CppParser::While - 64))
      | (1ULL << (CppParser::Override - 64))
      | (1ULL << (CppParser::Final - 64))
      | (1ULL << (CppParser::LeftBrace - 64))
      | (1ULL << (CppParser::LeftBracket - 64))
      | (1ULL << (CppParser::LeftParenthesis - 64))
      | (1ULL << (CppParser::Semicolon - 64))
      | (1ULL << (CppParser::Colon - 64))
      | (1ULL << (CppParser::Ellipsis - 64))
      | (1ULL << (CppParser::QuestionMark - 64))
      | (1ULL << (CppParser::DoubleColon - 64))
      | (1ULL << (CppParser::Period - 64))
      | (1ULL << (CppParser::PeriodAsterisk - 64))
      | (1ULL << (CppParser::Plus - 64))
      | (1ULL << (CppParser::Minus - 64))
      | (1ULL << (CppParser::Asterisk - 64))
      | (1ULL << (CppParser::ForwardSlash - 64))
      | (1ULL << (CppParser::Percent - 64))
      | (1ULL << (CppParser::Caret - 64))
      | (1ULL << (CppParser::Ampersand - 64))
      | (1ULL << (CppParser::VerticalBar - 64))
      | (1ULL << (CppParser::Tilde - 64))
      | (1ULL << (CppParser::ExclamationMark - 64))
      | (1ULL << (CppParser::Equal - 64))
      | (1ULL << (CppParser::LessThan - 64))
      | (1ULL << (CppParser::GreaterThan - 64))
      | (1ULL << (CppParser::PlusEqual - 64))
      | (1ULL << (CppParser::MinusEqual - 64))
      | (1ULL << (CppParser::AsteriskEqual - 64))
      | (1ULL << (CppParser::ForwardSlashEqual - 64))
      | (1ULL << (CppParser::PercentEqual - 64))
      | (1ULL << (CppParser::CaretEqual - 64))
      | (1ULL << (CppParser::AmpersandEqual - 64))
      | (1ULL << (CppParser::VerticalBarEqual - 64))
      | (1ULL << (CppParser::DoubleLessThan - 64))
      | (1ULL << (CppParser::DoubleGreaterThan - 64))
      | (1ULL << (CppParser::DoubleLessThanEqual - 64))
      | (1ULL << (CppParser::DoubleGreaterThanEqual - 64))
      | (1ULL << (CppParser::DoubleEqual - 64))
      | (1ULL << (CppParser::ExclamationMarkEqual - 64))
      | (1ULL << (CppParser::LessThanEqual - 64))
      | (1ULL << (CppParser::GreaterThanEqual - 64))
      | (1ULL << (CppParser::DoubleAmpersand - 64))
      | (1ULL << (CppParser::DoubleVerticalBar - 64))
      | (1ULL << (CppParser::DoublePlus - 64))
      | (1ULL << (CppParser::DoubleMinus - 64))
      | (1ULL << (CppParser::Comma - 64))
      | (1ULL << (CppParser::ArrowAsterisk - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (CppParser::Arrow - 128))
      | (1ULL << (CppParser::Zero - 128))
      | (1ULL << (CppParser::IntegerLiteral - 128))
      | (1ULL << (CppParser::FloatingPointLiteral - 128))
      | (1ULL << (CppParser::CharacterLiteral - 128))
      | (1ULL << (CppParser::StringLiteral - 128))
      | (1ULL << (CppParser::UserDefinedIntegerLiteral - 128))
      | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 128))
      | (1ULL << (CppParser::UserDefinedCharacterLiteral - 128))
      | (1ULL << (CppParser::UserDefinedStringLiteral - 128))
      | (1ULL << (CppParser::Identifier - 128)))) != 0)) {
      setState(1722);
      balancedTokenSequence(0);
    }
    setState(1725);
    match(CppParser::RightParenthesis);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BalancedTokenSequenceContext ------------------------------------------------------------------

CppParser::BalancedTokenSequenceContext::BalancedTokenSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::BalancedTokenContext* CppParser::BalancedTokenSequenceContext::balancedToken() {
  return getRuleContext<CppParser::BalancedTokenContext>(0);
}

CppParser::BalancedTokenSequenceContext* CppParser::BalancedTokenSequenceContext::balancedTokenSequence() {
  return getRuleContext<CppParser::BalancedTokenSequenceContext>(0);
}


size_t CppParser::BalancedTokenSequenceContext::getRuleIndex() const {
  return CppParser::RuleBalancedTokenSequence;
}

void CppParser::BalancedTokenSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedTokenSequence(this);
}

void CppParser::BalancedTokenSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedTokenSequence(this);
}


CppParser::BalancedTokenSequenceContext* CppParser::balancedTokenSequence() {
   return balancedTokenSequence(0);
}

CppParser::BalancedTokenSequenceContext* CppParser::balancedTokenSequence(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::BalancedTokenSequenceContext *_localctx = _tracker.createInstance<BalancedTokenSequenceContext>(_ctx, parentState);
  CppParser::BalancedTokenSequenceContext *previousContext = _localctx;
  size_t startState = 244;
  enterRecursionRule(_localctx, 244, CppParser::RuleBalancedTokenSequence, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1728);
    balancedToken();
    _ctx->stop = _input->LT(-1);
    setState(1734);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BalancedTokenSequenceContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBalancedTokenSequence);
        setState(1730);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1731);
        balancedToken(); 
      }
      setState(1736);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BalancedTokenContext ------------------------------------------------------------------

CppParser::BalancedTokenContext::BalancedTokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::BalancedTokenContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

tree::TerminalNode* CppParser::BalancedTokenContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::BalancedTokenSequenceContext* CppParser::BalancedTokenContext::balancedTokenSequence() {
  return getRuleContext<CppParser::BalancedTokenSequenceContext>(0);
}

tree::TerminalNode* CppParser::BalancedTokenContext::LeftBracket() {
  return getToken(CppParser::LeftBracket, 0);
}

tree::TerminalNode* CppParser::BalancedTokenContext::RightBracket() {
  return getToken(CppParser::RightBracket, 0);
}

tree::TerminalNode* CppParser::BalancedTokenContext::LeftBrace() {
  return getToken(CppParser::LeftBrace, 0);
}

tree::TerminalNode* CppParser::BalancedTokenContext::RightBrace() {
  return getToken(CppParser::RightBrace, 0);
}


size_t CppParser::BalancedTokenContext::getRuleIndex() const {
  return CppParser::RuleBalancedToken;
}

void CppParser::BalancedTokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBalancedToken(this);
}

void CppParser::BalancedTokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBalancedToken(this);
}

CppParser::BalancedTokenContext* CppParser::balancedToken() {
  BalancedTokenContext *_localctx = _tracker.createInstance<BalancedTokenContext>(_ctx, getState());
  enterRule(_localctx, 246, CppParser::RuleBalancedToken);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1753);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::LeftParenthesis: {
        enterOuterAlt(_localctx, 1);
        setState(1737);
        match(CppParser::LeftParenthesis);
        setState(1739);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::BlockComment)
          | (1ULL << CppParser::LineComment)
          | (1ULL << CppParser::Whitespace)
          | (1ULL << CppParser::Newline)
          | (1ULL << CppParser::AlignAs)
          | (1ULL << CppParser::AlignOf)
          | (1ULL << CppParser::Asm)
          | (1ULL << CppParser::Auto)
          | (1ULL << CppParser::Bool)
          | (1ULL << CppParser::Break)
          | (1ULL << CppParser::Case)
          | (1ULL << CppParser::Catch)
          | (1ULL << CppParser::Char)
          | (1ULL << CppParser::Char16)
          | (1ULL << CppParser::Char32)
          | (1ULL << CppParser::Class)
          | (1ULL << CppParser::Const)
          | (1ULL << CppParser::ConstExpr)
          | (1ULL << CppParser::ConstCast)
          | (1ULL << CppParser::Continue)
          | (1ULL << CppParser::DeclType)
          | (1ULL << CppParser::Default)
          | (1ULL << CppParser::Delete)
          | (1ULL << CppParser::Do)
          | (1ULL << CppParser::Double)
          | (1ULL << CppParser::DynamicCast)
          | (1ULL << CppParser::Else)
          | (1ULL << CppParser::Enum)
          | (1ULL << CppParser::Explicit)
          | (1ULL << CppParser::Export)
          | (1ULL << CppParser::Extern)
          | (1ULL << CppParser::False)
          | (1ULL << CppParser::Float)
          | (1ULL << CppParser::For)
          | (1ULL << CppParser::Friend)
          | (1ULL << CppParser::GoTo)
          | (1ULL << CppParser::If)
          | (1ULL << CppParser::Inline)
          | (1ULL << CppParser::Int)
          | (1ULL << CppParser::Long)
          | (1ULL << CppParser::Mutable)
          | (1ULL << CppParser::Namespace)
          | (1ULL << CppParser::New)
          | (1ULL << CppParser::NoExcept)
          | (1ULL << CppParser::Nullptr)
          | (1ULL << CppParser::Operator)
          | (1ULL << CppParser::Private)
          | (1ULL << CppParser::Protected)
          | (1ULL << CppParser::Public)
          | (1ULL << CppParser::Register)
          | (1ULL << CppParser::ReinterpretCast)
          | (1ULL << CppParser::Return)
          | (1ULL << CppParser::Short)
          | (1ULL << CppParser::Signed)
          | (1ULL << CppParser::SizeOf)
          | (1ULL << CppParser::Static)
          | (1ULL << CppParser::StaticAssert)
          | (1ULL << CppParser::StaticCast)
          | (1ULL << CppParser::Struct)
          | (1ULL << CppParser::Switch)
          | (1ULL << CppParser::Template)
          | (1ULL << CppParser::This)
          | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
          | (1ULL << (CppParser::True - 64))
          | (1ULL << (CppParser::Try - 64))
          | (1ULL << (CppParser::TypeDef - 64))
          | (1ULL << (CppParser::TypeId - 64))
          | (1ULL << (CppParser::TypeName - 64))
          | (1ULL << (CppParser::Union - 64))
          | (1ULL << (CppParser::Unsigned - 64))
          | (1ULL << (CppParser::Using - 64))
          | (1ULL << (CppParser::Virtual - 64))
          | (1ULL << (CppParser::Void - 64))
          | (1ULL << (CppParser::Volatile - 64))
          | (1ULL << (CppParser::WChar - 64))
          | (1ULL << (CppParser::While - 64))
          | (1ULL << (CppParser::Override - 64))
          | (1ULL << (CppParser::Final - 64))
          | (1ULL << (CppParser::LeftBrace - 64))
          | (1ULL << (CppParser::LeftBracket - 64))
          | (1ULL << (CppParser::LeftParenthesis - 64))
          | (1ULL << (CppParser::Semicolon - 64))
          | (1ULL << (CppParser::Colon - 64))
          | (1ULL << (CppParser::Ellipsis - 64))
          | (1ULL << (CppParser::QuestionMark - 64))
          | (1ULL << (CppParser::DoubleColon - 64))
          | (1ULL << (CppParser::Period - 64))
          | (1ULL << (CppParser::PeriodAsterisk - 64))
          | (1ULL << (CppParser::Plus - 64))
          | (1ULL << (CppParser::Minus - 64))
          | (1ULL << (CppParser::Asterisk - 64))
          | (1ULL << (CppParser::ForwardSlash - 64))
          | (1ULL << (CppParser::Percent - 64))
          | (1ULL << (CppParser::Caret - 64))
          | (1ULL << (CppParser::Ampersand - 64))
          | (1ULL << (CppParser::VerticalBar - 64))
          | (1ULL << (CppParser::Tilde - 64))
          | (1ULL << (CppParser::ExclamationMark - 64))
          | (1ULL << (CppParser::Equal - 64))
          | (1ULL << (CppParser::LessThan - 64))
          | (1ULL << (CppParser::GreaterThan - 64))
          | (1ULL << (CppParser::PlusEqual - 64))
          | (1ULL << (CppParser::MinusEqual - 64))
          | (1ULL << (CppParser::AsteriskEqual - 64))
          | (1ULL << (CppParser::ForwardSlashEqual - 64))
          | (1ULL << (CppParser::PercentEqual - 64))
          | (1ULL << (CppParser::CaretEqual - 64))
          | (1ULL << (CppParser::AmpersandEqual - 64))
          | (1ULL << (CppParser::VerticalBarEqual - 64))
          | (1ULL << (CppParser::DoubleLessThan - 64))
          | (1ULL << (CppParser::DoubleGreaterThan - 64))
          | (1ULL << (CppParser::DoubleLessThanEqual - 64))
          | (1ULL << (CppParser::DoubleGreaterThanEqual - 64))
          | (1ULL << (CppParser::DoubleEqual - 64))
          | (1ULL << (CppParser::ExclamationMarkEqual - 64))
          | (1ULL << (CppParser::LessThanEqual - 64))
          | (1ULL << (CppParser::GreaterThanEqual - 64))
          | (1ULL << (CppParser::DoubleAmpersand - 64))
          | (1ULL << (CppParser::DoubleVerticalBar - 64))
          | (1ULL << (CppParser::DoublePlus - 64))
          | (1ULL << (CppParser::DoubleMinus - 64))
          | (1ULL << (CppParser::Comma - 64))
          | (1ULL << (CppParser::ArrowAsterisk - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (CppParser::Arrow - 128))
          | (1ULL << (CppParser::Zero - 128))
          | (1ULL << (CppParser::IntegerLiteral - 128))
          | (1ULL << (CppParser::FloatingPointLiteral - 128))
          | (1ULL << (CppParser::CharacterLiteral - 128))
          | (1ULL << (CppParser::StringLiteral - 128))
          | (1ULL << (CppParser::UserDefinedIntegerLiteral - 128))
          | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 128))
          | (1ULL << (CppParser::UserDefinedCharacterLiteral - 128))
          | (1ULL << (CppParser::UserDefinedStringLiteral - 128))
          | (1ULL << (CppParser::Identifier - 128)))) != 0)) {
          setState(1738);
          balancedTokenSequence(0);
        }
        setState(1741);
        match(CppParser::RightParenthesis);
        break;
      }

      case CppParser::LeftBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1742);
        match(CppParser::LeftBracket);
        setState(1744);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::BlockComment)
          | (1ULL << CppParser::LineComment)
          | (1ULL << CppParser::Whitespace)
          | (1ULL << CppParser::Newline)
          | (1ULL << CppParser::AlignAs)
          | (1ULL << CppParser::AlignOf)
          | (1ULL << CppParser::Asm)
          | (1ULL << CppParser::Auto)
          | (1ULL << CppParser::Bool)
          | (1ULL << CppParser::Break)
          | (1ULL << CppParser::Case)
          | (1ULL << CppParser::Catch)
          | (1ULL << CppParser::Char)
          | (1ULL << CppParser::Char16)
          | (1ULL << CppParser::Char32)
          | (1ULL << CppParser::Class)
          | (1ULL << CppParser::Const)
          | (1ULL << CppParser::ConstExpr)
          | (1ULL << CppParser::ConstCast)
          | (1ULL << CppParser::Continue)
          | (1ULL << CppParser::DeclType)
          | (1ULL << CppParser::Default)
          | (1ULL << CppParser::Delete)
          | (1ULL << CppParser::Do)
          | (1ULL << CppParser::Double)
          | (1ULL << CppParser::DynamicCast)
          | (1ULL << CppParser::Else)
          | (1ULL << CppParser::Enum)
          | (1ULL << CppParser::Explicit)
          | (1ULL << CppParser::Export)
          | (1ULL << CppParser::Extern)
          | (1ULL << CppParser::False)
          | (1ULL << CppParser::Float)
          | (1ULL << CppParser::For)
          | (1ULL << CppParser::Friend)
          | (1ULL << CppParser::GoTo)
          | (1ULL << CppParser::If)
          | (1ULL << CppParser::Inline)
          | (1ULL << CppParser::Int)
          | (1ULL << CppParser::Long)
          | (1ULL << CppParser::Mutable)
          | (1ULL << CppParser::Namespace)
          | (1ULL << CppParser::New)
          | (1ULL << CppParser::NoExcept)
          | (1ULL << CppParser::Nullptr)
          | (1ULL << CppParser::Operator)
          | (1ULL << CppParser::Private)
          | (1ULL << CppParser::Protected)
          | (1ULL << CppParser::Public)
          | (1ULL << CppParser::Register)
          | (1ULL << CppParser::ReinterpretCast)
          | (1ULL << CppParser::Return)
          | (1ULL << CppParser::Short)
          | (1ULL << CppParser::Signed)
          | (1ULL << CppParser::SizeOf)
          | (1ULL << CppParser::Static)
          | (1ULL << CppParser::StaticAssert)
          | (1ULL << CppParser::StaticCast)
          | (1ULL << CppParser::Struct)
          | (1ULL << CppParser::Switch)
          | (1ULL << CppParser::Template)
          | (1ULL << CppParser::This)
          | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
          | (1ULL << (CppParser::True - 64))
          | (1ULL << (CppParser::Try - 64))
          | (1ULL << (CppParser::TypeDef - 64))
          | (1ULL << (CppParser::TypeId - 64))
          | (1ULL << (CppParser::TypeName - 64))
          | (1ULL << (CppParser::Union - 64))
          | (1ULL << (CppParser::Unsigned - 64))
          | (1ULL << (CppParser::Using - 64))
          | (1ULL << (CppParser::Virtual - 64))
          | (1ULL << (CppParser::Void - 64))
          | (1ULL << (CppParser::Volatile - 64))
          | (1ULL << (CppParser::WChar - 64))
          | (1ULL << (CppParser::While - 64))
          | (1ULL << (CppParser::Override - 64))
          | (1ULL << (CppParser::Final - 64))
          | (1ULL << (CppParser::LeftBrace - 64))
          | (1ULL << (CppParser::LeftBracket - 64))
          | (1ULL << (CppParser::LeftParenthesis - 64))
          | (1ULL << (CppParser::Semicolon - 64))
          | (1ULL << (CppParser::Colon - 64))
          | (1ULL << (CppParser::Ellipsis - 64))
          | (1ULL << (CppParser::QuestionMark - 64))
          | (1ULL << (CppParser::DoubleColon - 64))
          | (1ULL << (CppParser::Period - 64))
          | (1ULL << (CppParser::PeriodAsterisk - 64))
          | (1ULL << (CppParser::Plus - 64))
          | (1ULL << (CppParser::Minus - 64))
          | (1ULL << (CppParser::Asterisk - 64))
          | (1ULL << (CppParser::ForwardSlash - 64))
          | (1ULL << (CppParser::Percent - 64))
          | (1ULL << (CppParser::Caret - 64))
          | (1ULL << (CppParser::Ampersand - 64))
          | (1ULL << (CppParser::VerticalBar - 64))
          | (1ULL << (CppParser::Tilde - 64))
          | (1ULL << (CppParser::ExclamationMark - 64))
          | (1ULL << (CppParser::Equal - 64))
          | (1ULL << (CppParser::LessThan - 64))
          | (1ULL << (CppParser::GreaterThan - 64))
          | (1ULL << (CppParser::PlusEqual - 64))
          | (1ULL << (CppParser::MinusEqual - 64))
          | (1ULL << (CppParser::AsteriskEqual - 64))
          | (1ULL << (CppParser::ForwardSlashEqual - 64))
          | (1ULL << (CppParser::PercentEqual - 64))
          | (1ULL << (CppParser::CaretEqual - 64))
          | (1ULL << (CppParser::AmpersandEqual - 64))
          | (1ULL << (CppParser::VerticalBarEqual - 64))
          | (1ULL << (CppParser::DoubleLessThan - 64))
          | (1ULL << (CppParser::DoubleGreaterThan - 64))
          | (1ULL << (CppParser::DoubleLessThanEqual - 64))
          | (1ULL << (CppParser::DoubleGreaterThanEqual - 64))
          | (1ULL << (CppParser::DoubleEqual - 64))
          | (1ULL << (CppParser::ExclamationMarkEqual - 64))
          | (1ULL << (CppParser::LessThanEqual - 64))
          | (1ULL << (CppParser::GreaterThanEqual - 64))
          | (1ULL << (CppParser::DoubleAmpersand - 64))
          | (1ULL << (CppParser::DoubleVerticalBar - 64))
          | (1ULL << (CppParser::DoublePlus - 64))
          | (1ULL << (CppParser::DoubleMinus - 64))
          | (1ULL << (CppParser::Comma - 64))
          | (1ULL << (CppParser::ArrowAsterisk - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (CppParser::Arrow - 128))
          | (1ULL << (CppParser::Zero - 128))
          | (1ULL << (CppParser::IntegerLiteral - 128))
          | (1ULL << (CppParser::FloatingPointLiteral - 128))
          | (1ULL << (CppParser::CharacterLiteral - 128))
          | (1ULL << (CppParser::StringLiteral - 128))
          | (1ULL << (CppParser::UserDefinedIntegerLiteral - 128))
          | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 128))
          | (1ULL << (CppParser::UserDefinedCharacterLiteral - 128))
          | (1ULL << (CppParser::UserDefinedStringLiteral - 128))
          | (1ULL << (CppParser::Identifier - 128)))) != 0)) {
          setState(1743);
          balancedTokenSequence(0);
        }
        setState(1746);
        match(CppParser::RightBracket);
        break;
      }

      case CppParser::LeftBrace: {
        enterOuterAlt(_localctx, 3);
        setState(1747);
        match(CppParser::LeftBrace);
        setState(1749);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::BlockComment)
          | (1ULL << CppParser::LineComment)
          | (1ULL << CppParser::Whitespace)
          | (1ULL << CppParser::Newline)
          | (1ULL << CppParser::AlignAs)
          | (1ULL << CppParser::AlignOf)
          | (1ULL << CppParser::Asm)
          | (1ULL << CppParser::Auto)
          | (1ULL << CppParser::Bool)
          | (1ULL << CppParser::Break)
          | (1ULL << CppParser::Case)
          | (1ULL << CppParser::Catch)
          | (1ULL << CppParser::Char)
          | (1ULL << CppParser::Char16)
          | (1ULL << CppParser::Char32)
          | (1ULL << CppParser::Class)
          | (1ULL << CppParser::Const)
          | (1ULL << CppParser::ConstExpr)
          | (1ULL << CppParser::ConstCast)
          | (1ULL << CppParser::Continue)
          | (1ULL << CppParser::DeclType)
          | (1ULL << CppParser::Default)
          | (1ULL << CppParser::Delete)
          | (1ULL << CppParser::Do)
          | (1ULL << CppParser::Double)
          | (1ULL << CppParser::DynamicCast)
          | (1ULL << CppParser::Else)
          | (1ULL << CppParser::Enum)
          | (1ULL << CppParser::Explicit)
          | (1ULL << CppParser::Export)
          | (1ULL << CppParser::Extern)
          | (1ULL << CppParser::False)
          | (1ULL << CppParser::Float)
          | (1ULL << CppParser::For)
          | (1ULL << CppParser::Friend)
          | (1ULL << CppParser::GoTo)
          | (1ULL << CppParser::If)
          | (1ULL << CppParser::Inline)
          | (1ULL << CppParser::Int)
          | (1ULL << CppParser::Long)
          | (1ULL << CppParser::Mutable)
          | (1ULL << CppParser::Namespace)
          | (1ULL << CppParser::New)
          | (1ULL << CppParser::NoExcept)
          | (1ULL << CppParser::Nullptr)
          | (1ULL << CppParser::Operator)
          | (1ULL << CppParser::Private)
          | (1ULL << CppParser::Protected)
          | (1ULL << CppParser::Public)
          | (1ULL << CppParser::Register)
          | (1ULL << CppParser::ReinterpretCast)
          | (1ULL << CppParser::Return)
          | (1ULL << CppParser::Short)
          | (1ULL << CppParser::Signed)
          | (1ULL << CppParser::SizeOf)
          | (1ULL << CppParser::Static)
          | (1ULL << CppParser::StaticAssert)
          | (1ULL << CppParser::StaticCast)
          | (1ULL << CppParser::Struct)
          | (1ULL << CppParser::Switch)
          | (1ULL << CppParser::Template)
          | (1ULL << CppParser::This)
          | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
          | (1ULL << (CppParser::True - 64))
          | (1ULL << (CppParser::Try - 64))
          | (1ULL << (CppParser::TypeDef - 64))
          | (1ULL << (CppParser::TypeId - 64))
          | (1ULL << (CppParser::TypeName - 64))
          | (1ULL << (CppParser::Union - 64))
          | (1ULL << (CppParser::Unsigned - 64))
          | (1ULL << (CppParser::Using - 64))
          | (1ULL << (CppParser::Virtual - 64))
          | (1ULL << (CppParser::Void - 64))
          | (1ULL << (CppParser::Volatile - 64))
          | (1ULL << (CppParser::WChar - 64))
          | (1ULL << (CppParser::While - 64))
          | (1ULL << (CppParser::Override - 64))
          | (1ULL << (CppParser::Final - 64))
          | (1ULL << (CppParser::LeftBrace - 64))
          | (1ULL << (CppParser::LeftBracket - 64))
          | (1ULL << (CppParser::LeftParenthesis - 64))
          | (1ULL << (CppParser::Semicolon - 64))
          | (1ULL << (CppParser::Colon - 64))
          | (1ULL << (CppParser::Ellipsis - 64))
          | (1ULL << (CppParser::QuestionMark - 64))
          | (1ULL << (CppParser::DoubleColon - 64))
          | (1ULL << (CppParser::Period - 64))
          | (1ULL << (CppParser::PeriodAsterisk - 64))
          | (1ULL << (CppParser::Plus - 64))
          | (1ULL << (CppParser::Minus - 64))
          | (1ULL << (CppParser::Asterisk - 64))
          | (1ULL << (CppParser::ForwardSlash - 64))
          | (1ULL << (CppParser::Percent - 64))
          | (1ULL << (CppParser::Caret - 64))
          | (1ULL << (CppParser::Ampersand - 64))
          | (1ULL << (CppParser::VerticalBar - 64))
          | (1ULL << (CppParser::Tilde - 64))
          | (1ULL << (CppParser::ExclamationMark - 64))
          | (1ULL << (CppParser::Equal - 64))
          | (1ULL << (CppParser::LessThan - 64))
          | (1ULL << (CppParser::GreaterThan - 64))
          | (1ULL << (CppParser::PlusEqual - 64))
          | (1ULL << (CppParser::MinusEqual - 64))
          | (1ULL << (CppParser::AsteriskEqual - 64))
          | (1ULL << (CppParser::ForwardSlashEqual - 64))
          | (1ULL << (CppParser::PercentEqual - 64))
          | (1ULL << (CppParser::CaretEqual - 64))
          | (1ULL << (CppParser::AmpersandEqual - 64))
          | (1ULL << (CppParser::VerticalBarEqual - 64))
          | (1ULL << (CppParser::DoubleLessThan - 64))
          | (1ULL << (CppParser::DoubleGreaterThan - 64))
          | (1ULL << (CppParser::DoubleLessThanEqual - 64))
          | (1ULL << (CppParser::DoubleGreaterThanEqual - 64))
          | (1ULL << (CppParser::DoubleEqual - 64))
          | (1ULL << (CppParser::ExclamationMarkEqual - 64))
          | (1ULL << (CppParser::LessThanEqual - 64))
          | (1ULL << (CppParser::GreaterThanEqual - 64))
          | (1ULL << (CppParser::DoubleAmpersand - 64))
          | (1ULL << (CppParser::DoubleVerticalBar - 64))
          | (1ULL << (CppParser::DoublePlus - 64))
          | (1ULL << (CppParser::DoubleMinus - 64))
          | (1ULL << (CppParser::Comma - 64))
          | (1ULL << (CppParser::ArrowAsterisk - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (CppParser::Arrow - 128))
          | (1ULL << (CppParser::Zero - 128))
          | (1ULL << (CppParser::IntegerLiteral - 128))
          | (1ULL << (CppParser::FloatingPointLiteral - 128))
          | (1ULL << (CppParser::CharacterLiteral - 128))
          | (1ULL << (CppParser::StringLiteral - 128))
          | (1ULL << (CppParser::UserDefinedIntegerLiteral - 128))
          | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 128))
          | (1ULL << (CppParser::UserDefinedCharacterLiteral - 128))
          | (1ULL << (CppParser::UserDefinedStringLiteral - 128))
          | (1ULL << (CppParser::Identifier - 128)))) != 0)) {
          setState(1748);
          balancedTokenSequence(0);
        }
        setState(1751);
        match(CppParser::RightBrace);
        break;
      }

      case CppParser::BlockComment:
      case CppParser::LineComment:
      case CppParser::Whitespace:
      case CppParser::Newline:
      case CppParser::AlignAs:
      case CppParser::AlignOf:
      case CppParser::Asm:
      case CppParser::Auto:
      case CppParser::Bool:
      case CppParser::Break:
      case CppParser::Case:
      case CppParser::Catch:
      case CppParser::Char:
      case CppParser::Char16:
      case CppParser::Char32:
      case CppParser::Class:
      case CppParser::Const:
      case CppParser::ConstExpr:
      case CppParser::ConstCast:
      case CppParser::Continue:
      case CppParser::DeclType:
      case CppParser::Default:
      case CppParser::Delete:
      case CppParser::Do:
      case CppParser::Double:
      case CppParser::DynamicCast:
      case CppParser::Else:
      case CppParser::Enum:
      case CppParser::Explicit:
      case CppParser::Export:
      case CppParser::Extern:
      case CppParser::False:
      case CppParser::Float:
      case CppParser::For:
      case CppParser::Friend:
      case CppParser::GoTo:
      case CppParser::If:
      case CppParser::Inline:
      case CppParser::Int:
      case CppParser::Long:
      case CppParser::Mutable:
      case CppParser::Namespace:
      case CppParser::New:
      case CppParser::NoExcept:
      case CppParser::Nullptr:
      case CppParser::Operator:
      case CppParser::Private:
      case CppParser::Protected:
      case CppParser::Public:
      case CppParser::Register:
      case CppParser::ReinterpretCast:
      case CppParser::Return:
      case CppParser::Short:
      case CppParser::Signed:
      case CppParser::SizeOf:
      case CppParser::Static:
      case CppParser::StaticAssert:
      case CppParser::StaticCast:
      case CppParser::Struct:
      case CppParser::Switch:
      case CppParser::Template:
      case CppParser::This:
      case CppParser::ThreadLocal:
      case CppParser::Throw:
      case CppParser::True:
      case CppParser::Try:
      case CppParser::TypeDef:
      case CppParser::TypeId:
      case CppParser::TypeName:
      case CppParser::Union:
      case CppParser::Unsigned:
      case CppParser::Using:
      case CppParser::Virtual:
      case CppParser::Void:
      case CppParser::Volatile:
      case CppParser::WChar:
      case CppParser::While:
      case CppParser::Override:
      case CppParser::Final:
      case CppParser::Semicolon:
      case CppParser::Colon:
      case CppParser::Ellipsis:
      case CppParser::QuestionMark:
      case CppParser::DoubleColon:
      case CppParser::Period:
      case CppParser::PeriodAsterisk:
      case CppParser::Plus:
      case CppParser::Minus:
      case CppParser::Asterisk:
      case CppParser::ForwardSlash:
      case CppParser::Percent:
      case CppParser::Caret:
      case CppParser::Ampersand:
      case CppParser::VerticalBar:
      case CppParser::Tilde:
      case CppParser::ExclamationMark:
      case CppParser::Equal:
      case CppParser::LessThan:
      case CppParser::GreaterThan:
      case CppParser::PlusEqual:
      case CppParser::MinusEqual:
      case CppParser::AsteriskEqual:
      case CppParser::ForwardSlashEqual:
      case CppParser::PercentEqual:
      case CppParser::CaretEqual:
      case CppParser::AmpersandEqual:
      case CppParser::VerticalBarEqual:
      case CppParser::DoubleLessThan:
      case CppParser::DoubleGreaterThan:
      case CppParser::DoubleLessThanEqual:
      case CppParser::DoubleGreaterThanEqual:
      case CppParser::DoubleEqual:
      case CppParser::ExclamationMarkEqual:
      case CppParser::LessThanEqual:
      case CppParser::GreaterThanEqual:
      case CppParser::DoubleAmpersand:
      case CppParser::DoubleVerticalBar:
      case CppParser::DoublePlus:
      case CppParser::DoubleMinus:
      case CppParser::Comma:
      case CppParser::ArrowAsterisk:
      case CppParser::Arrow:
      case CppParser::Zero:
      case CppParser::IntegerLiteral:
      case CppParser::FloatingPointLiteral:
      case CppParser::CharacterLiteral:
      case CppParser::StringLiteral:
      case CppParser::UserDefinedIntegerLiteral:
      case CppParser::UserDefinedFloatingPointLiteral:
      case CppParser::UserDefinedCharacterLiteral:
      case CppParser::UserDefinedStringLiteral:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(1752);
        _la = _input->LA(1);
        if (_la == 0 || _la == Token::EOF || (((((_la - 80) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 80)) & ((1ULL << (CppParser::LeftBrace - 80))
          | (1ULL << (CppParser::RightBrace - 80))
          | (1ULL << (CppParser::LeftBracket - 80))
          | (1ULL << (CppParser::RightBracket - 80))
          | (1ULL << (CppParser::LeftParenthesis - 80))
          | (1ULL << (CppParser::RightParenthesis - 80)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerDeclaratorListContext ------------------------------------------------------------------

CppParser::InitializerDeclaratorListContext::InitializerDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::InitializerDeclaratorContext* CppParser::InitializerDeclaratorListContext::initializerDeclarator() {
  return getRuleContext<CppParser::InitializerDeclaratorContext>(0);
}

CppParser::InitializerDeclaratorListContext* CppParser::InitializerDeclaratorListContext::initializerDeclaratorList() {
  return getRuleContext<CppParser::InitializerDeclaratorListContext>(0);
}

tree::TerminalNode* CppParser::InitializerDeclaratorListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::InitializerDeclaratorListContext::getRuleIndex() const {
  return CppParser::RuleInitializerDeclaratorList;
}

void CppParser::InitializerDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerDeclaratorList(this);
}

void CppParser::InitializerDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerDeclaratorList(this);
}


CppParser::InitializerDeclaratorListContext* CppParser::initializerDeclaratorList() {
   return initializerDeclaratorList(0);
}

CppParser::InitializerDeclaratorListContext* CppParser::initializerDeclaratorList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::InitializerDeclaratorListContext *_localctx = _tracker.createInstance<InitializerDeclaratorListContext>(_ctx, parentState);
  CppParser::InitializerDeclaratorListContext *previousContext = _localctx;
  size_t startState = 248;
  enterRecursionRule(_localctx, 248, CppParser::RuleInitializerDeclaratorList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1756);
    initializerDeclarator();
    _ctx->stop = _input->LT(-1);
    setState(1763);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerDeclaratorListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerDeclaratorList);
        setState(1758);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1759);
        match(CppParser::Comma);
        setState(1760);
        initializerDeclarator(); 
      }
      setState(1765);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- InitializerDeclaratorContext ------------------------------------------------------------------

CppParser::InitializerDeclaratorContext::InitializerDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclaratorContext* CppParser::InitializerDeclaratorContext::declarator() {
  return getRuleContext<CppParser::DeclaratorContext>(0);
}

CppParser::InitializerContext* CppParser::InitializerDeclaratorContext::initializer() {
  return getRuleContext<CppParser::InitializerContext>(0);
}


size_t CppParser::InitializerDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleInitializerDeclarator;
}

void CppParser::InitializerDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerDeclarator(this);
}

void CppParser::InitializerDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerDeclarator(this);
}

CppParser::InitializerDeclaratorContext* CppParser::initializerDeclarator() {
  InitializerDeclaratorContext *_localctx = _tracker.createInstance<InitializerDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 250, CppParser::RuleInitializerDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1766);
    declarator();
    setState(1768);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx)) {
    case 1: {
      setState(1767);
      initializer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclaratorContext ------------------------------------------------------------------

CppParser::DeclaratorContext::DeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::PointerDeclaratorContext* CppParser::DeclaratorContext::pointerDeclarator() {
  return getRuleContext<CppParser::PointerDeclaratorContext>(0);
}

CppParser::NoPointerDeclaratorContext* CppParser::DeclaratorContext::noPointerDeclarator() {
  return getRuleContext<CppParser::NoPointerDeclaratorContext>(0);
}


size_t CppParser::DeclaratorContext::getRuleIndex() const {
  return CppParser::RuleDeclarator;
}

void CppParser::DeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarator(this);
}

void CppParser::DeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarator(this);
}

CppParser::DeclaratorContext* CppParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 252, CppParser::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1772);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1770);
      pointerDeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1771);
      noPointerDeclarator(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerDeclaratorContext ------------------------------------------------------------------

CppParser::PointerDeclaratorContext::PointerDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::PointerOperatorContext* CppParser::PointerDeclaratorContext::pointerOperator() {
  return getRuleContext<CppParser::PointerOperatorContext>(0);
}

CppParser::DeclaratorContext* CppParser::PointerDeclaratorContext::declarator() {
  return getRuleContext<CppParser::DeclaratorContext>(0);
}


size_t CppParser::PointerDeclaratorContext::getRuleIndex() const {
  return CppParser::RulePointerDeclarator;
}

void CppParser::PointerDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerDeclarator(this);
}

void CppParser::PointerDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerDeclarator(this);
}

CppParser::PointerDeclaratorContext* CppParser::pointerDeclarator() {
  PointerDeclaratorContext *_localctx = _tracker.createInstance<PointerDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 254, CppParser::RulePointerDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1774);
    pointerOperator();
    setState(1775);
    declarator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerDeclaratorContext ------------------------------------------------------------------

CppParser::NoPointerDeclaratorContext::NoPointerDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::IdentifierExpressionContext* CppParser::NoPointerDeclaratorContext::identifierExpression() {
  return getRuleContext<CppParser::IdentifierExpressionContext>(0);
}

tree::TerminalNode* CppParser::NoPointerDeclaratorContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::NoPointerDeclaratorContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::NoPointerDeclaratorContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::PointerDeclaratorContext* CppParser::NoPointerDeclaratorContext::pointerDeclarator() {
  return getRuleContext<CppParser::PointerDeclaratorContext>(0);
}

tree::TerminalNode* CppParser::NoPointerDeclaratorContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::NoPointerDeclaratorContext* CppParser::NoPointerDeclaratorContext::noPointerDeclarator() {
  return getRuleContext<CppParser::NoPointerDeclaratorContext>(0);
}

tree::TerminalNode* CppParser::NoPointerDeclaratorContext::LeftBracket() {
  return getToken(CppParser::LeftBracket, 0);
}

tree::TerminalNode* CppParser::NoPointerDeclaratorContext::RightBracket() {
  return getToken(CppParser::RightBracket, 0);
}

CppParser::ConstantExpressionContext* CppParser::NoPointerDeclaratorContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}

CppParser::ParametersAndQualifiersContext* CppParser::NoPointerDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<CppParser::ParametersAndQualifiersContext>(0);
}


size_t CppParser::NoPointerDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleNoPointerDeclarator;
}

void CppParser::NoPointerDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoPointerDeclarator(this);
}

void CppParser::NoPointerDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoPointerDeclarator(this);
}


CppParser::NoPointerDeclaratorContext* CppParser::noPointerDeclarator() {
   return noPointerDeclarator(0);
}

CppParser::NoPointerDeclaratorContext* CppParser::noPointerDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::NoPointerDeclaratorContext *_localctx = _tracker.createInstance<NoPointerDeclaratorContext>(_ctx, parentState);
  CppParser::NoPointerDeclaratorContext *previousContext = _localctx;
  size_t startState = 256;
  enterRecursionRule(_localctx, 256, CppParser::RuleNoPointerDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1789);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::DeclType:
      case CppParser::Operator:
      case CppParser::Ellipsis:
      case CppParser::DoubleColon:
      case CppParser::Tilde:
      case CppParser::Identifier: {
        setState(1779);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CppParser::Ellipsis) {
          setState(1778);
          match(CppParser::Ellipsis);
        }
        setState(1781);
        identifierExpression();
        setState(1783);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, _ctx)) {
        case 1: {
          setState(1782);
          attributeSpecifierSequence(0);
          break;
        }

        }
        break;
      }

      case CppParser::LeftParenthesis: {
        setState(1785);
        match(CppParser::LeftParenthesis);
        setState(1786);
        pointerDeclarator();
        setState(1787);
        match(CppParser::RightParenthesis);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1804);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1802);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoPointerDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerDeclarator);
          setState(1791);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1792);
          match(CppParser::LeftBracket);
          setState(1794);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
            | (1ULL << CppParser::Auto)
            | (1ULL << CppParser::Bool)
            | (1ULL << CppParser::Char)
            | (1ULL << CppParser::Char16)
            | (1ULL << CppParser::Char32)
            | (1ULL << CppParser::Class)
            | (1ULL << CppParser::Const)
            | (1ULL << CppParser::ConstCast)
            | (1ULL << CppParser::DeclType)
            | (1ULL << CppParser::Delete)
            | (1ULL << CppParser::Double)
            | (1ULL << CppParser::DynamicCast)
            | (1ULL << CppParser::Enum)
            | (1ULL << CppParser::False)
            | (1ULL << CppParser::Float)
            | (1ULL << CppParser::Int)
            | (1ULL << CppParser::Long)
            | (1ULL << CppParser::New)
            | (1ULL << CppParser::NoExcept)
            | (1ULL << CppParser::Nullptr)
            | (1ULL << CppParser::Operator)
            | (1ULL << CppParser::ReinterpretCast)
            | (1ULL << CppParser::Short)
            | (1ULL << CppParser::Signed)
            | (1ULL << CppParser::SizeOf)
            | (1ULL << CppParser::StaticCast)
            | (1ULL << CppParser::Struct)
            | (1ULL << CppParser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (CppParser::True - 65))
            | (1ULL << (CppParser::TypeName - 65))
            | (1ULL << (CppParser::Union - 65))
            | (1ULL << (CppParser::Unsigned - 65))
            | (1ULL << (CppParser::Void - 65))
            | (1ULL << (CppParser::Volatile - 65))
            | (1ULL << (CppParser::WChar - 65))
            | (1ULL << (CppParser::LeftBracket - 65))
            | (1ULL << (CppParser::LeftParenthesis - 65))
            | (1ULL << (CppParser::DoubleColon - 65))
            | (1ULL << (CppParser::Plus - 65))
            | (1ULL << (CppParser::Minus - 65))
            | (1ULL << (CppParser::Asterisk - 65))
            | (1ULL << (CppParser::Ampersand - 65))
            | (1ULL << (CppParser::VerticalBar - 65))
            | (1ULL << (CppParser::Tilde - 65))
            | (1ULL << (CppParser::ExclamationMark - 65))
            | (1ULL << (CppParser::DoublePlus - 65))
            | (1ULL << (CppParser::DoubleMinus - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
            | (1ULL << (CppParser::IntegerLiteral - 129))
            | (1ULL << (CppParser::FloatingPointLiteral - 129))
            | (1ULL << (CppParser::CharacterLiteral - 129))
            | (1ULL << (CppParser::StringLiteral - 129))
            | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
            | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
            | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
            | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
            | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
            setState(1793);
            constantExpression();
          }
          setState(1796);
          match(CppParser::RightBracket);
          setState(1798);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx)) {
          case 1: {
            setState(1797);
            attributeSpecifierSequence(0);
            break;
          }

          }
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoPointerDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerDeclarator);
          setState(1800);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1801);
          parametersAndQualifiers();
          break;
        }

        } 
      }
      setState(1806);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParametersAndQualifiersContext ------------------------------------------------------------------

CppParser::ParametersAndQualifiersContext::ParametersAndQualifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::FunctionParametersContext* CppParser::ParametersAndQualifiersContext::functionParameters() {
  return getRuleContext<CppParser::FunctionParametersContext>(0);
}

CppParser::FunctionQualifiersContext* CppParser::ParametersAndQualifiersContext::functionQualifiers() {
  return getRuleContext<CppParser::FunctionQualifiersContext>(0);
}


size_t CppParser::ParametersAndQualifiersContext::getRuleIndex() const {
  return CppParser::RuleParametersAndQualifiers;
}

void CppParser::ParametersAndQualifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametersAndQualifiers(this);
}

void CppParser::ParametersAndQualifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametersAndQualifiers(this);
}

CppParser::ParametersAndQualifiersContext* CppParser::parametersAndQualifiers() {
  ParametersAndQualifiersContext *_localctx = _tracker.createInstance<ParametersAndQualifiersContext>(_ctx, getState());
  enterRule(_localctx, 258, CppParser::RuleParametersAndQualifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1807);
    functionParameters();
    setState(1808);
    functionQualifiers();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParametersContext ------------------------------------------------------------------

CppParser::FunctionParametersContext::FunctionParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::FunctionParametersContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ParameterDeclarationClauseContext* CppParser::FunctionParametersContext::parameterDeclarationClause() {
  return getRuleContext<CppParser::ParameterDeclarationClauseContext>(0);
}

tree::TerminalNode* CppParser::FunctionParametersContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}


size_t CppParser::FunctionParametersContext::getRuleIndex() const {
  return CppParser::RuleFunctionParameters;
}

void CppParser::FunctionParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameters(this);
}

void CppParser::FunctionParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameters(this);
}

CppParser::FunctionParametersContext* CppParser::functionParameters() {
  FunctionParametersContext *_localctx = _tracker.createInstance<FunctionParametersContext>(_ctx, getState());
  enterRule(_localctx, 260, CppParser::RuleFunctionParameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1810);
    match(CppParser::LeftParenthesis);
    setState(1811);
    parameterDeclarationClause();
    setState(1812);
    match(CppParser::RightParenthesis);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionQualifiersContext ------------------------------------------------------------------

CppParser::FunctionQualifiersContext::FunctionQualifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ConstVolatileQualifierSequenceContext* CppParser::FunctionQualifiersContext::constVolatileQualifierSequence() {
  return getRuleContext<CppParser::ConstVolatileQualifierSequenceContext>(0);
}

CppParser::ReferenceQualifierContext* CppParser::FunctionQualifiersContext::referenceQualifier() {
  return getRuleContext<CppParser::ReferenceQualifierContext>(0);
}

CppParser::NoExceptionSpecifierContext* CppParser::FunctionQualifiersContext::noExceptionSpecifier() {
  return getRuleContext<CppParser::NoExceptionSpecifierContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::FunctionQualifiersContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::FunctionQualifiersContext::getRuleIndex() const {
  return CppParser::RuleFunctionQualifiers;
}

void CppParser::FunctionQualifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionQualifiers(this);
}

void CppParser::FunctionQualifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionQualifiers(this);
}

CppParser::FunctionQualifiersContext* CppParser::functionQualifiers() {
  FunctionQualifiersContext *_localctx = _tracker.createInstance<FunctionQualifiersContext>(_ctx, getState());
  enterRule(_localctx, 262, CppParser::RuleFunctionQualifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1815);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
    case 1: {
      setState(1814);
      constVolatileQualifierSequence();
      break;
    }

    }
    setState(1818);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 196, _ctx)) {
    case 1: {
      setState(1817);
      referenceQualifier();
      break;
    }

    }
    setState(1821);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 197, _ctx)) {
    case 1: {
      setState(1820);
      noExceptionSpecifier();
      break;
    }

    }
    setState(1824);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 198, _ctx)) {
    case 1: {
      setState(1823);
      attributeSpecifierSequence(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingReturnTypeContext ------------------------------------------------------------------

CppParser::TrailingReturnTypeContext::TrailingReturnTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::TrailingReturnTypeContext::Arrow() {
  return getToken(CppParser::Arrow, 0);
}

CppParser::TypeIdentifierContext* CppParser::TrailingReturnTypeContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}


size_t CppParser::TrailingReturnTypeContext::getRuleIndex() const {
  return CppParser::RuleTrailingReturnType;
}

void CppParser::TrailingReturnTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingReturnType(this);
}

void CppParser::TrailingReturnTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingReturnType(this);
}

CppParser::TrailingReturnTypeContext* CppParser::trailingReturnType() {
  TrailingReturnTypeContext *_localctx = _tracker.createInstance<TrailingReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 264, CppParser::RuleTrailingReturnType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1826);
    match(CppParser::Arrow);
    setState(1827);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerOperatorContext ------------------------------------------------------------------

CppParser::PointerOperatorContext::PointerOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::PointerOperatorContext::Asterisk() {
  return getToken(CppParser::Asterisk, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::PointerOperatorContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::ConstVolatileQualifierSequenceContext* CppParser::PointerOperatorContext::constVolatileQualifierSequence() {
  return getRuleContext<CppParser::ConstVolatileQualifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::PointerOperatorContext::Ampersand() {
  return getToken(CppParser::Ampersand, 0);
}

tree::TerminalNode* CppParser::PointerOperatorContext::DoubleAmpersand() {
  return getToken(CppParser::DoubleAmpersand, 0);
}

CppParser::NestedNameSpecifierContext* CppParser::PointerOperatorContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}


size_t CppParser::PointerOperatorContext::getRuleIndex() const {
  return CppParser::RulePointerOperator;
}

void CppParser::PointerOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerOperator(this);
}

void CppParser::PointerOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerOperator(this);
}

CppParser::PointerOperatorContext* CppParser::pointerOperator() {
  PointerOperatorContext *_localctx = _tracker.createInstance<PointerOperatorContext>(_ctx, getState());
  enterRule(_localctx, 266, CppParser::RulePointerOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1852);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Asterisk: {
        enterOuterAlt(_localctx, 1);
        setState(1829);
        match(CppParser::Asterisk);
        setState(1831);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 199, _ctx)) {
        case 1: {
          setState(1830);
          attributeSpecifierSequence(0);
          break;
        }

        }
        setState(1834);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx)) {
        case 1: {
          setState(1833);
          constVolatileQualifierSequence();
          break;
        }

        }
        break;
      }

      case CppParser::Ampersand: {
        enterOuterAlt(_localctx, 2);
        setState(1836);
        match(CppParser::Ampersand);
        setState(1838);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 201, _ctx)) {
        case 1: {
          setState(1837);
          attributeSpecifierSequence(0);
          break;
        }

        }
        break;
      }

      case CppParser::DoubleAmpersand: {
        enterOuterAlt(_localctx, 3);
        setState(1840);
        match(CppParser::DoubleAmpersand);
        setState(1842);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx)) {
        case 1: {
          setState(1841);
          attributeSpecifierSequence(0);
          break;
        }

        }
        break;
      }

      case CppParser::DeclType:
      case CppParser::DoubleColon:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 4);
        setState(1844);
        nestedNameSpecifier(0);
        setState(1845);
        match(CppParser::Asterisk);
        setState(1847);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 203, _ctx)) {
        case 1: {
          setState(1846);
          attributeSpecifierSequence(0);
          break;
        }

        }
        setState(1850);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 204, _ctx)) {
        case 1: {
          setState(1849);
          constVolatileQualifierSequence();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstVolatileQualifierSequenceContext ------------------------------------------------------------------

CppParser::ConstVolatileQualifierSequenceContext::ConstVolatileQualifierSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ConstVolatileQualifierContext* CppParser::ConstVolatileQualifierSequenceContext::constVolatileQualifier() {
  return getRuleContext<CppParser::ConstVolatileQualifierContext>(0);
}

CppParser::ConstVolatileQualifierSequenceContext* CppParser::ConstVolatileQualifierSequenceContext::constVolatileQualifierSequence() {
  return getRuleContext<CppParser::ConstVolatileQualifierSequenceContext>(0);
}


size_t CppParser::ConstVolatileQualifierSequenceContext::getRuleIndex() const {
  return CppParser::RuleConstVolatileQualifierSequence;
}

void CppParser::ConstVolatileQualifierSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstVolatileQualifierSequence(this);
}

void CppParser::ConstVolatileQualifierSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstVolatileQualifierSequence(this);
}

CppParser::ConstVolatileQualifierSequenceContext* CppParser::constVolatileQualifierSequence() {
  ConstVolatileQualifierSequenceContext *_localctx = _tracker.createInstance<ConstVolatileQualifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 268, CppParser::RuleConstVolatileQualifierSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1854);
    constVolatileQualifier();
    setState(1856);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 206, _ctx)) {
    case 1: {
      setState(1855);
      constVolatileQualifierSequence();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstVolatileQualifierContext ------------------------------------------------------------------

CppParser::ConstVolatileQualifierContext::ConstVolatileQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ConstVolatileQualifierContext::Const() {
  return getToken(CppParser::Const, 0);
}

tree::TerminalNode* CppParser::ConstVolatileQualifierContext::Volatile() {
  return getToken(CppParser::Volatile, 0);
}


size_t CppParser::ConstVolatileQualifierContext::getRuleIndex() const {
  return CppParser::RuleConstVolatileQualifier;
}

void CppParser::ConstVolatileQualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstVolatileQualifier(this);
}

void CppParser::ConstVolatileQualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstVolatileQualifier(this);
}

CppParser::ConstVolatileQualifierContext* CppParser::constVolatileQualifier() {
  ConstVolatileQualifierContext *_localctx = _tracker.createInstance<ConstVolatileQualifierContext>(_ctx, getState());
  enterRule(_localctx, 270, CppParser::RuleConstVolatileQualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1858);
    _la = _input->LA(1);
    if (!(_la == CppParser::Const

    || _la == CppParser::Volatile)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReferenceQualifierContext ------------------------------------------------------------------

CppParser::ReferenceQualifierContext::ReferenceQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ReferenceQualifierContext::Ampersand() {
  return getToken(CppParser::Ampersand, 0);
}

tree::TerminalNode* CppParser::ReferenceQualifierContext::DoubleAmpersand() {
  return getToken(CppParser::DoubleAmpersand, 0);
}


size_t CppParser::ReferenceQualifierContext::getRuleIndex() const {
  return CppParser::RuleReferenceQualifier;
}

void CppParser::ReferenceQualifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReferenceQualifier(this);
}

void CppParser::ReferenceQualifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReferenceQualifier(this);
}

CppParser::ReferenceQualifierContext* CppParser::referenceQualifier() {
  ReferenceQualifierContext *_localctx = _tracker.createInstance<ReferenceQualifierContext>(_ctx, getState());
  enterRule(_localctx, 272, CppParser::RuleReferenceQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1860);
    match(CppParser::Ampersand);
    setState(1861);
    match(CppParser::DoubleAmpersand);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdentifierContext ------------------------------------------------------------------

CppParser::TypeIdentifierContext::TypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TypeSpecifierSequenceContext* CppParser::TypeIdentifierContext::typeSpecifierSequence() {
  return getRuleContext<CppParser::TypeSpecifierSequenceContext>(0);
}

CppParser::AbstractDeclaratorContext* CppParser::TypeIdentifierContext::abstractDeclarator() {
  return getRuleContext<CppParser::AbstractDeclaratorContext>(0);
}


size_t CppParser::TypeIdentifierContext::getRuleIndex() const {
  return CppParser::RuleTypeIdentifier;
}

void CppParser::TypeIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeIdentifier(this);
}

void CppParser::TypeIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeIdentifier(this);
}

CppParser::TypeIdentifierContext* CppParser::typeIdentifier() {
  TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 274, CppParser::RuleTypeIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1863);
    typeSpecifierSequence();
    setState(1865);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 207, _ctx)) {
    case 1: {
      setState(1864);
      abstractDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefiningTypeIdentifierContext ------------------------------------------------------------------

CppParser::DefiningTypeIdentifierContext::DefiningTypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DefiningTypeSpecifierSequenceContext* CppParser::DefiningTypeIdentifierContext::definingTypeSpecifierSequence() {
  return getRuleContext<CppParser::DefiningTypeSpecifierSequenceContext>(0);
}

CppParser::AbstractDeclaratorContext* CppParser::DefiningTypeIdentifierContext::abstractDeclarator() {
  return getRuleContext<CppParser::AbstractDeclaratorContext>(0);
}


size_t CppParser::DefiningTypeIdentifierContext::getRuleIndex() const {
  return CppParser::RuleDefiningTypeIdentifier;
}

void CppParser::DefiningTypeIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefiningTypeIdentifier(this);
}

void CppParser::DefiningTypeIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefiningTypeIdentifier(this);
}

CppParser::DefiningTypeIdentifierContext* CppParser::definingTypeIdentifier() {
  DefiningTypeIdentifierContext *_localctx = _tracker.createInstance<DefiningTypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 276, CppParser::RuleDefiningTypeIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1867);
    definingTypeSpecifierSequence();
    setState(1869);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::DeclType || ((((_la - 82) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 82)) & ((1ULL << (CppParser::LeftBracket - 82))
      | (1ULL << (CppParser::LeftParenthesis - 82))
      | (1ULL << (CppParser::Ellipsis - 82))
      | (1ULL << (CppParser::DoubleColon - 82))
      | (1ULL << (CppParser::Asterisk - 82))
      | (1ULL << (CppParser::Ampersand - 82))
      | (1ULL << (CppParser::DoubleAmpersand - 82))
      | (1ULL << (CppParser::Identifier - 82)))) != 0)) {
      setState(1868);
      abstractDeclarator();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbstractDeclaratorContext ------------------------------------------------------------------

CppParser::AbstractDeclaratorContext::AbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::PointerAbstractDeclaratorContext* CppParser::AbstractDeclaratorContext::pointerAbstractDeclarator() {
  return getRuleContext<CppParser::PointerAbstractDeclaratorContext>(0);
}

CppParser::ParametersAndQualifiersContext* CppParser::AbstractDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<CppParser::ParametersAndQualifiersContext>(0);
}

CppParser::TrailingReturnTypeContext* CppParser::AbstractDeclaratorContext::trailingReturnType() {
  return getRuleContext<CppParser::TrailingReturnTypeContext>(0);
}

CppParser::NoPointerAbstractDeclaratorContext* CppParser::AbstractDeclaratorContext::noPointerAbstractDeclarator() {
  return getRuleContext<CppParser::NoPointerAbstractDeclaratorContext>(0);
}

CppParser::AbstractPackDeclaratorContext* CppParser::AbstractDeclaratorContext::abstractPackDeclarator() {
  return getRuleContext<CppParser::AbstractPackDeclaratorContext>(0);
}


size_t CppParser::AbstractDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleAbstractDeclarator;
}

void CppParser::AbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractDeclarator(this);
}

void CppParser::AbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractDeclarator(this);
}

CppParser::AbstractDeclaratorContext* CppParser::abstractDeclarator() {
  AbstractDeclaratorContext *_localctx = _tracker.createInstance<AbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 278, CppParser::RuleAbstractDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1879);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 210, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1871);
      pointerAbstractDeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1873);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx)) {
      case 1: {
        setState(1872);
        noPointerAbstractDeclarator(0);
        break;
      }

      }
      setState(1875);
      parametersAndQualifiers();
      setState(1876);
      trailingReturnType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1878);
      abstractPackDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerAbstractDeclaratorContext ------------------------------------------------------------------

CppParser::PointerAbstractDeclaratorContext::PointerAbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::NoPointerAbstractDeclaratorContext* CppParser::PointerAbstractDeclaratorContext::noPointerAbstractDeclarator() {
  return getRuleContext<CppParser::NoPointerAbstractDeclaratorContext>(0);
}

CppParser::PointerOperatorContext* CppParser::PointerAbstractDeclaratorContext::pointerOperator() {
  return getRuleContext<CppParser::PointerOperatorContext>(0);
}

CppParser::PointerAbstractDeclaratorContext* CppParser::PointerAbstractDeclaratorContext::pointerAbstractDeclarator() {
  return getRuleContext<CppParser::PointerAbstractDeclaratorContext>(0);
}


size_t CppParser::PointerAbstractDeclaratorContext::getRuleIndex() const {
  return CppParser::RulePointerAbstractDeclarator;
}

void CppParser::PointerAbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerAbstractDeclarator(this);
}

void CppParser::PointerAbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerAbstractDeclarator(this);
}

CppParser::PointerAbstractDeclaratorContext* CppParser::pointerAbstractDeclarator() {
  PointerAbstractDeclaratorContext *_localctx = _tracker.createInstance<PointerAbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 280, CppParser::RulePointerAbstractDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1886);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::LeftBracket:
      case CppParser::LeftParenthesis: {
        enterOuterAlt(_localctx, 1);
        setState(1881);
        noPointerAbstractDeclarator(0);
        break;
      }

      case CppParser::DeclType:
      case CppParser::DoubleColon:
      case CppParser::Asterisk:
      case CppParser::Ampersand:
      case CppParser::DoubleAmpersand:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1882);
        pointerOperator();
        setState(1884);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 211, _ctx)) {
        case 1: {
          setState(1883);
          pointerAbstractDeclarator();
          break;
        }

        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerAbstractDeclaratorContext ------------------------------------------------------------------

CppParser::NoPointerAbstractDeclaratorContext::NoPointerAbstractDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ParametersAndQualifiersContext* CppParser::NoPointerAbstractDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<CppParser::ParametersAndQualifiersContext>(0);
}

tree::TerminalNode* CppParser::NoPointerAbstractDeclaratorContext::LeftBracket() {
  return getToken(CppParser::LeftBracket, 0);
}

tree::TerminalNode* CppParser::NoPointerAbstractDeclaratorContext::RightBracket() {
  return getToken(CppParser::RightBracket, 0);
}

CppParser::ConstantExpressionContext* CppParser::NoPointerAbstractDeclaratorContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::NoPointerAbstractDeclaratorContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::NoPointerAbstractDeclaratorContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::PointerAbstractDeclaratorContext* CppParser::NoPointerAbstractDeclaratorContext::pointerAbstractDeclarator() {
  return getRuleContext<CppParser::PointerAbstractDeclaratorContext>(0);
}

tree::TerminalNode* CppParser::NoPointerAbstractDeclaratorContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::NoPointerAbstractDeclaratorContext* CppParser::NoPointerAbstractDeclaratorContext::noPointerAbstractDeclarator() {
  return getRuleContext<CppParser::NoPointerAbstractDeclaratorContext>(0);
}


size_t CppParser::NoPointerAbstractDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleNoPointerAbstractDeclarator;
}

void CppParser::NoPointerAbstractDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoPointerAbstractDeclarator(this);
}

void CppParser::NoPointerAbstractDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoPointerAbstractDeclarator(this);
}


CppParser::NoPointerAbstractDeclaratorContext* CppParser::noPointerAbstractDeclarator() {
   return noPointerAbstractDeclarator(0);
}

CppParser::NoPointerAbstractDeclaratorContext* CppParser::noPointerAbstractDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::NoPointerAbstractDeclaratorContext *_localctx = _tracker.createInstance<NoPointerAbstractDeclaratorContext>(_ctx, parentState);
  CppParser::NoPointerAbstractDeclaratorContext *previousContext = _localctx;
  size_t startState = 282;
  enterRecursionRule(_localctx, 282, CppParser::RuleNoPointerAbstractDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1902);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 215, _ctx)) {
    case 1: {
      setState(1889);
      parametersAndQualifiers();
      break;
    }

    case 2: {
      setState(1890);
      match(CppParser::LeftBracket);
      setState(1892);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::Class)
        | (1ULL << CppParser::Const)
        | (1ULL << CppParser::ConstCast)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Delete)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::DynamicCast)
        | (1ULL << CppParser::Enum)
        | (1ULL << CppParser::False)
        | (1ULL << CppParser::Float)
        | (1ULL << CppParser::Int)
        | (1ULL << CppParser::Long)
        | (1ULL << CppParser::New)
        | (1ULL << CppParser::NoExcept)
        | (1ULL << CppParser::Nullptr)
        | (1ULL << CppParser::Operator)
        | (1ULL << CppParser::ReinterpretCast)
        | (1ULL << CppParser::Short)
        | (1ULL << CppParser::Signed)
        | (1ULL << CppParser::SizeOf)
        | (1ULL << CppParser::StaticCast)
        | (1ULL << CppParser::Struct)
        | (1ULL << CppParser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (CppParser::True - 65))
        | (1ULL << (CppParser::TypeName - 65))
        | (1ULL << (CppParser::Union - 65))
        | (1ULL << (CppParser::Unsigned - 65))
        | (1ULL << (CppParser::Void - 65))
        | (1ULL << (CppParser::Volatile - 65))
        | (1ULL << (CppParser::WChar - 65))
        | (1ULL << (CppParser::LeftBracket - 65))
        | (1ULL << (CppParser::LeftParenthesis - 65))
        | (1ULL << (CppParser::DoubleColon - 65))
        | (1ULL << (CppParser::Plus - 65))
        | (1ULL << (CppParser::Minus - 65))
        | (1ULL << (CppParser::Asterisk - 65))
        | (1ULL << (CppParser::Ampersand - 65))
        | (1ULL << (CppParser::VerticalBar - 65))
        | (1ULL << (CppParser::Tilde - 65))
        | (1ULL << (CppParser::ExclamationMark - 65))
        | (1ULL << (CppParser::DoublePlus - 65))
        | (1ULL << (CppParser::DoubleMinus - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
        | (1ULL << (CppParser::IntegerLiteral - 129))
        | (1ULL << (CppParser::FloatingPointLiteral - 129))
        | (1ULL << (CppParser::CharacterLiteral - 129))
        | (1ULL << (CppParser::StringLiteral - 129))
        | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
        | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
        | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
        | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
        | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
        setState(1891);
        constantExpression();
      }
      setState(1894);
      match(CppParser::RightBracket);
      setState(1896);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 214, _ctx)) {
      case 1: {
        setState(1895);
        attributeSpecifierSequence(0);
        break;
      }

      }
      break;
    }

    case 3: {
      setState(1898);
      match(CppParser::LeftParenthesis);
      setState(1899);
      pointerAbstractDeclarator();
      setState(1900);
      match(CppParser::RightParenthesis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1917);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 219, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1915);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 218, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoPointerAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractDeclarator);
          setState(1904);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1905);
          parametersAndQualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoPointerAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractDeclarator);
          setState(1906);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1907);
          match(CppParser::LeftBracket);
          setState(1909);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
            | (1ULL << CppParser::Auto)
            | (1ULL << CppParser::Bool)
            | (1ULL << CppParser::Char)
            | (1ULL << CppParser::Char16)
            | (1ULL << CppParser::Char32)
            | (1ULL << CppParser::Class)
            | (1ULL << CppParser::Const)
            | (1ULL << CppParser::ConstCast)
            | (1ULL << CppParser::DeclType)
            | (1ULL << CppParser::Delete)
            | (1ULL << CppParser::Double)
            | (1ULL << CppParser::DynamicCast)
            | (1ULL << CppParser::Enum)
            | (1ULL << CppParser::False)
            | (1ULL << CppParser::Float)
            | (1ULL << CppParser::Int)
            | (1ULL << CppParser::Long)
            | (1ULL << CppParser::New)
            | (1ULL << CppParser::NoExcept)
            | (1ULL << CppParser::Nullptr)
            | (1ULL << CppParser::Operator)
            | (1ULL << CppParser::ReinterpretCast)
            | (1ULL << CppParser::Short)
            | (1ULL << CppParser::Signed)
            | (1ULL << CppParser::SizeOf)
            | (1ULL << CppParser::StaticCast)
            | (1ULL << CppParser::Struct)
            | (1ULL << CppParser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (CppParser::True - 65))
            | (1ULL << (CppParser::TypeName - 65))
            | (1ULL << (CppParser::Union - 65))
            | (1ULL << (CppParser::Unsigned - 65))
            | (1ULL << (CppParser::Void - 65))
            | (1ULL << (CppParser::Volatile - 65))
            | (1ULL << (CppParser::WChar - 65))
            | (1ULL << (CppParser::LeftBracket - 65))
            | (1ULL << (CppParser::LeftParenthesis - 65))
            | (1ULL << (CppParser::DoubleColon - 65))
            | (1ULL << (CppParser::Plus - 65))
            | (1ULL << (CppParser::Minus - 65))
            | (1ULL << (CppParser::Asterisk - 65))
            | (1ULL << (CppParser::Ampersand - 65))
            | (1ULL << (CppParser::VerticalBar - 65))
            | (1ULL << (CppParser::Tilde - 65))
            | (1ULL << (CppParser::ExclamationMark - 65))
            | (1ULL << (CppParser::DoublePlus - 65))
            | (1ULL << (CppParser::DoubleMinus - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
            | (1ULL << (CppParser::IntegerLiteral - 129))
            | (1ULL << (CppParser::FloatingPointLiteral - 129))
            | (1ULL << (CppParser::CharacterLiteral - 129))
            | (1ULL << (CppParser::StringLiteral - 129))
            | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
            | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
            | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
            | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
            | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
            setState(1908);
            constantExpression();
          }
          setState(1911);
          match(CppParser::RightBracket);
          setState(1913);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 217, _ctx)) {
          case 1: {
            setState(1912);
            attributeSpecifierSequence(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1919);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 219, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AbstractPackDeclaratorContext ------------------------------------------------------------------

CppParser::AbstractPackDeclaratorContext::AbstractPackDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::NoPointerAbstractPackDeclaratorContext* CppParser::AbstractPackDeclaratorContext::noPointerAbstractPackDeclarator() {
  return getRuleContext<CppParser::NoPointerAbstractPackDeclaratorContext>(0);
}

CppParser::PointerOperatorContext* CppParser::AbstractPackDeclaratorContext::pointerOperator() {
  return getRuleContext<CppParser::PointerOperatorContext>(0);
}

CppParser::AbstractPackDeclaratorContext* CppParser::AbstractPackDeclaratorContext::abstractPackDeclarator() {
  return getRuleContext<CppParser::AbstractPackDeclaratorContext>(0);
}


size_t CppParser::AbstractPackDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleAbstractPackDeclarator;
}

void CppParser::AbstractPackDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbstractPackDeclarator(this);
}

void CppParser::AbstractPackDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbstractPackDeclarator(this);
}

CppParser::AbstractPackDeclaratorContext* CppParser::abstractPackDeclarator() {
  AbstractPackDeclaratorContext *_localctx = _tracker.createInstance<AbstractPackDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 284, CppParser::RuleAbstractPackDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1924);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Ellipsis: {
        enterOuterAlt(_localctx, 1);
        setState(1920);
        noPointerAbstractPackDeclarator(0);
        break;
      }

      case CppParser::DeclType:
      case CppParser::DoubleColon:
      case CppParser::Asterisk:
      case CppParser::Ampersand:
      case CppParser::DoubleAmpersand:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(1921);
        pointerOperator();
        setState(1922);
        abstractPackDeclarator();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoPointerAbstractPackDeclaratorContext ------------------------------------------------------------------

CppParser::NoPointerAbstractPackDeclaratorContext::NoPointerAbstractPackDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NoPointerAbstractPackDeclaratorContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

CppParser::NoPointerAbstractPackDeclaratorContext* CppParser::NoPointerAbstractPackDeclaratorContext::noPointerAbstractPackDeclarator() {
  return getRuleContext<CppParser::NoPointerAbstractPackDeclaratorContext>(0);
}

CppParser::ParametersAndQualifiersContext* CppParser::NoPointerAbstractPackDeclaratorContext::parametersAndQualifiers() {
  return getRuleContext<CppParser::ParametersAndQualifiersContext>(0);
}

tree::TerminalNode* CppParser::NoPointerAbstractPackDeclaratorContext::LeftBracket() {
  return getToken(CppParser::LeftBracket, 0);
}

tree::TerminalNode* CppParser::NoPointerAbstractPackDeclaratorContext::RightBracket() {
  return getToken(CppParser::RightBracket, 0);
}

CppParser::ConstantExpressionContext* CppParser::NoPointerAbstractPackDeclaratorContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::NoPointerAbstractPackDeclaratorContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::NoPointerAbstractPackDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleNoPointerAbstractPackDeclarator;
}

void CppParser::NoPointerAbstractPackDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoPointerAbstractPackDeclarator(this);
}

void CppParser::NoPointerAbstractPackDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoPointerAbstractPackDeclarator(this);
}


CppParser::NoPointerAbstractPackDeclaratorContext* CppParser::noPointerAbstractPackDeclarator() {
   return noPointerAbstractPackDeclarator(0);
}

CppParser::NoPointerAbstractPackDeclaratorContext* CppParser::noPointerAbstractPackDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::NoPointerAbstractPackDeclaratorContext *_localctx = _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(_ctx, parentState);
  CppParser::NoPointerAbstractPackDeclaratorContext *previousContext = _localctx;
  size_t startState = 286;
  enterRecursionRule(_localctx, 286, CppParser::RuleNoPointerAbstractPackDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1927);
    match(CppParser::Ellipsis);
    _ctx->stop = _input->LT(-1);
    setState(1942);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 224, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1940);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 223, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractPackDeclarator);
          setState(1929);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1930);
          parametersAndQualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractPackDeclarator);
          setState(1931);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1932);
          match(CppParser::LeftBracket);
          setState(1934);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
            | (1ULL << CppParser::Auto)
            | (1ULL << CppParser::Bool)
            | (1ULL << CppParser::Char)
            | (1ULL << CppParser::Char16)
            | (1ULL << CppParser::Char32)
            | (1ULL << CppParser::Class)
            | (1ULL << CppParser::Const)
            | (1ULL << CppParser::ConstCast)
            | (1ULL << CppParser::DeclType)
            | (1ULL << CppParser::Delete)
            | (1ULL << CppParser::Double)
            | (1ULL << CppParser::DynamicCast)
            | (1ULL << CppParser::Enum)
            | (1ULL << CppParser::False)
            | (1ULL << CppParser::Float)
            | (1ULL << CppParser::Int)
            | (1ULL << CppParser::Long)
            | (1ULL << CppParser::New)
            | (1ULL << CppParser::NoExcept)
            | (1ULL << CppParser::Nullptr)
            | (1ULL << CppParser::Operator)
            | (1ULL << CppParser::ReinterpretCast)
            | (1ULL << CppParser::Short)
            | (1ULL << CppParser::Signed)
            | (1ULL << CppParser::SizeOf)
            | (1ULL << CppParser::StaticCast)
            | (1ULL << CppParser::Struct)
            | (1ULL << CppParser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (CppParser::True - 65))
            | (1ULL << (CppParser::TypeName - 65))
            | (1ULL << (CppParser::Union - 65))
            | (1ULL << (CppParser::Unsigned - 65))
            | (1ULL << (CppParser::Void - 65))
            | (1ULL << (CppParser::Volatile - 65))
            | (1ULL << (CppParser::WChar - 65))
            | (1ULL << (CppParser::LeftBracket - 65))
            | (1ULL << (CppParser::LeftParenthesis - 65))
            | (1ULL << (CppParser::DoubleColon - 65))
            | (1ULL << (CppParser::Plus - 65))
            | (1ULL << (CppParser::Minus - 65))
            | (1ULL << (CppParser::Asterisk - 65))
            | (1ULL << (CppParser::Ampersand - 65))
            | (1ULL << (CppParser::VerticalBar - 65))
            | (1ULL << (CppParser::Tilde - 65))
            | (1ULL << (CppParser::ExclamationMark - 65))
            | (1ULL << (CppParser::DoublePlus - 65))
            | (1ULL << (CppParser::DoubleMinus - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
            | (1ULL << (CppParser::IntegerLiteral - 129))
            | (1ULL << (CppParser::FloatingPointLiteral - 129))
            | (1ULL << (CppParser::CharacterLiteral - 129))
            | (1ULL << (CppParser::StringLiteral - 129))
            | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
            | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
            | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
            | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
            | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
            setState(1933);
            constantExpression();
          }
          setState(1936);
          match(CppParser::RightBracket);
          setState(1938);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 222, _ctx)) {
          case 1: {
            setState(1937);
            attributeSpecifierSequence(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1944);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 224, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterDeclarationClauseContext ------------------------------------------------------------------

CppParser::ParameterDeclarationClauseContext::ParameterDeclarationClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ParameterDeclarationListContext* CppParser::ParameterDeclarationClauseContext::parameterDeclarationList() {
  return getRuleContext<CppParser::ParameterDeclarationListContext>(0);
}

tree::TerminalNode* CppParser::ParameterDeclarationClauseContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

tree::TerminalNode* CppParser::ParameterDeclarationClauseContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::ParameterDeclarationClauseContext::getRuleIndex() const {
  return CppParser::RuleParameterDeclarationClause;
}

void CppParser::ParameterDeclarationClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterDeclarationClause(this);
}

void CppParser::ParameterDeclarationClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterDeclarationClause(this);
}

CppParser::ParameterDeclarationClauseContext* CppParser::parameterDeclarationClause() {
  ParameterDeclarationClauseContext *_localctx = _tracker.createInstance<ParameterDeclarationClauseContext>(_ctx, getState());
  enterRule(_localctx, 288, CppParser::RuleParameterDeclarationClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1955);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 227, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1946);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::Class)
        | (1ULL << CppParser::Const)
        | (1ULL << CppParser::ConstExpr)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::Enum)
        | (1ULL << CppParser::Explicit)
        | (1ULL << CppParser::Extern)
        | (1ULL << CppParser::Float)
        | (1ULL << CppParser::Friend)
        | (1ULL << CppParser::Inline)
        | (1ULL << CppParser::Int)
        | (1ULL << CppParser::Long)
        | (1ULL << CppParser::Mutable)
        | (1ULL << CppParser::Short)
        | (1ULL << CppParser::Signed)
        | (1ULL << CppParser::Static)
        | (1ULL << CppParser::Struct)
        | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 67)) & ((1ULL << (CppParser::TypeDef - 67))
        | (1ULL << (CppParser::TypeName - 67))
        | (1ULL << (CppParser::Union - 67))
        | (1ULL << (CppParser::Unsigned - 67))
        | (1ULL << (CppParser::Virtual - 67))
        | (1ULL << (CppParser::Void - 67))
        | (1ULL << (CppParser::Volatile - 67))
        | (1ULL << (CppParser::WChar - 67))
        | (1ULL << (CppParser::LeftBracket - 67))
        | (1ULL << (CppParser::DoubleColon - 67)))) != 0) || _la == CppParser::Identifier) {
        setState(1945);
        parameterDeclarationList(0);
      }
      setState(1949);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Ellipsis) {
        setState(1948);
        match(CppParser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1951);
      parameterDeclarationList(0);
      setState(1952);
      match(CppParser::Comma);
      setState(1953);
      match(CppParser::Ellipsis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationListContext ------------------------------------------------------------------

CppParser::ParameterDeclarationListContext::ParameterDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ParameterDeclarationContext* CppParser::ParameterDeclarationListContext::parameterDeclaration() {
  return getRuleContext<CppParser::ParameterDeclarationContext>(0);
}

CppParser::ParameterDeclarationListContext* CppParser::ParameterDeclarationListContext::parameterDeclarationList() {
  return getRuleContext<CppParser::ParameterDeclarationListContext>(0);
}

tree::TerminalNode* CppParser::ParameterDeclarationListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::ParameterDeclarationListContext::getRuleIndex() const {
  return CppParser::RuleParameterDeclarationList;
}

void CppParser::ParameterDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterDeclarationList(this);
}

void CppParser::ParameterDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterDeclarationList(this);
}


CppParser::ParameterDeclarationListContext* CppParser::parameterDeclarationList() {
   return parameterDeclarationList(0);
}

CppParser::ParameterDeclarationListContext* CppParser::parameterDeclarationList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::ParameterDeclarationListContext *_localctx = _tracker.createInstance<ParameterDeclarationListContext>(_ctx, parentState);
  CppParser::ParameterDeclarationListContext *previousContext = _localctx;
  size_t startState = 290;
  enterRecursionRule(_localctx, 290, CppParser::RuleParameterDeclarationList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1958);
    parameterDeclaration();
    _ctx->stop = _input->LT(-1);
    setState(1965);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 228, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParameterDeclarationListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameterDeclarationList);
        setState(1960);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1961);
        match(CppParser::Comma);
        setState(1962);
        parameterDeclaration(); 
      }
      setState(1967);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 228, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ParameterDeclarationContext ------------------------------------------------------------------

CppParser::ParameterDeclarationContext::ParameterDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclarationSpecifierSequenceContext* CppParser::ParameterDeclarationContext::declarationSpecifierSequence() {
  return getRuleContext<CppParser::DeclarationSpecifierSequenceContext>(0);
}

CppParser::DeclaratorContext* CppParser::ParameterDeclarationContext::declarator() {
  return getRuleContext<CppParser::DeclaratorContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::ParameterDeclarationContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::ParameterDeclarationContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

CppParser::InitializerClauseContext* CppParser::ParameterDeclarationContext::initializerClause() {
  return getRuleContext<CppParser::InitializerClauseContext>(0);
}

CppParser::AbstractDeclaratorContext* CppParser::ParameterDeclarationContext::abstractDeclarator() {
  return getRuleContext<CppParser::AbstractDeclaratorContext>(0);
}


size_t CppParser::ParameterDeclarationContext::getRuleIndex() const {
  return CppParser::RuleParameterDeclaration;
}

void CppParser::ParameterDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterDeclaration(this);
}

void CppParser::ParameterDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterDeclaration(this);
}

CppParser::ParameterDeclarationContext* CppParser::parameterDeclaration() {
  ParameterDeclarationContext *_localctx = _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 292, CppParser::RuleParameterDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1999);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 235, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1969);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1968);
        attributeSpecifierSequence(0);
      }
      setState(1971);
      declarationSpecifierSequence();
      setState(1972);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1975);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1974);
        attributeSpecifierSequence(0);
      }
      setState(1977);
      declarationSpecifierSequence();
      setState(1978);
      declarator();
      setState(1979);
      match(CppParser::Equal);
      setState(1980);
      initializerClause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1983);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1982);
        attributeSpecifierSequence(0);
      }
      setState(1985);
      declarationSpecifierSequence();
      setState(1987);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 232, _ctx)) {
      case 1: {
        setState(1986);
        abstractDeclarator();
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1990);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(1989);
        attributeSpecifierSequence(0);
      }
      setState(1992);
      declarationSpecifierSequence();
      setState(1994);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DeclType || ((((_la - 82) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 82)) & ((1ULL << (CppParser::LeftBracket - 82))
        | (1ULL << (CppParser::LeftParenthesis - 82))
        | (1ULL << (CppParser::Ellipsis - 82))
        | (1ULL << (CppParser::DoubleColon - 82))
        | (1ULL << (CppParser::Asterisk - 82))
        | (1ULL << (CppParser::Ampersand - 82))
        | (1ULL << (CppParser::DoubleAmpersand - 82))
        | (1ULL << (CppParser::Identifier - 82)))) != 0)) {
        setState(1993);
        abstractDeclarator();
      }
      setState(1996);
      match(CppParser::Equal);
      setState(1997);
      initializerClause();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

CppParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::FunctionDeclaratorContext* CppParser::FunctionDefinitionContext::functionDeclarator() {
  return getRuleContext<CppParser::FunctionDeclaratorContext>(0);
}

CppParser::FunctionBodyContext* CppParser::FunctionDefinitionContext::functionBody() {
  return getRuleContext<CppParser::FunctionBodyContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::FunctionDefinitionContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::DeclarationSpecifierSequenceContext* CppParser::FunctionDefinitionContext::declarationSpecifierSequence() {
  return getRuleContext<CppParser::DeclarationSpecifierSequenceContext>(0);
}

CppParser::VirtualSpecifierSequenceContext* CppParser::FunctionDefinitionContext::virtualSpecifierSequence() {
  return getRuleContext<CppParser::VirtualSpecifierSequenceContext>(0);
}


size_t CppParser::FunctionDefinitionContext::getRuleIndex() const {
  return CppParser::RuleFunctionDefinition;
}

void CppParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void CppParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}

CppParser::FunctionDefinitionContext* CppParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 294, CppParser::RuleFunctionDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2002);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
      setState(2001);
      attributeSpecifierSequence(0);
    }
    setState(2005);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 237, _ctx)) {
    case 1: {
      setState(2004);
      declarationSpecifierSequence();
      break;
    }

    }
    setState(2007);
    functionDeclarator();
    setState(2009);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Override

    || _la == CppParser::Final) {
      setState(2008);
      virtualSpecifierSequence(0);
    }
    setState(2011);
    functionBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclaratorContext ------------------------------------------------------------------

CppParser::FunctionDeclaratorContext::FunctionDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::IdentifierExpressionContext* CppParser::FunctionDeclaratorContext::identifierExpression() {
  return getRuleContext<CppParser::IdentifierExpressionContext>(0);
}

CppParser::FunctionParametersContext* CppParser::FunctionDeclaratorContext::functionParameters() {
  return getRuleContext<CppParser::FunctionParametersContext>(0);
}

CppParser::FunctionQualifiersContext* CppParser::FunctionDeclaratorContext::functionQualifiers() {
  return getRuleContext<CppParser::FunctionQualifiersContext>(0);
}

CppParser::TrailingReturnTypeContext* CppParser::FunctionDeclaratorContext::trailingReturnType() {
  return getRuleContext<CppParser::TrailingReturnTypeContext>(0);
}


size_t CppParser::FunctionDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleFunctionDeclarator;
}

void CppParser::FunctionDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclarator(this);
}

void CppParser::FunctionDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclarator(this);
}

CppParser::FunctionDeclaratorContext* CppParser::functionDeclarator() {
  FunctionDeclaratorContext *_localctx = _tracker.createInstance<FunctionDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 296, CppParser::RuleFunctionDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2013);
    identifierExpression();
    setState(2014);
    functionParameters();
    setState(2015);
    functionQualifiers();
    setState(2017);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Arrow) {
      setState(2016);
      trailingReturnType();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBodyContext ------------------------------------------------------------------

CppParser::FunctionBodyContext::FunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::RegularFunctionBodyContext* CppParser::FunctionBodyContext::regularFunctionBody() {
  return getRuleContext<CppParser::RegularFunctionBodyContext>(0);
}

CppParser::FunctionTryBlockContext* CppParser::FunctionBodyContext::functionTryBlock() {
  return getRuleContext<CppParser::FunctionTryBlockContext>(0);
}

CppParser::ExplicitlyDefaultedFunctionContext* CppParser::FunctionBodyContext::explicitlyDefaultedFunction() {
  return getRuleContext<CppParser::ExplicitlyDefaultedFunctionContext>(0);
}

CppParser::DeletedFunctionContext* CppParser::FunctionBodyContext::deletedFunction() {
  return getRuleContext<CppParser::DeletedFunctionContext>(0);
}


size_t CppParser::FunctionBodyContext::getRuleIndex() const {
  return CppParser::RuleFunctionBody;
}

void CppParser::FunctionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionBody(this);
}

void CppParser::FunctionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionBody(this);
}

CppParser::FunctionBodyContext* CppParser::functionBody() {
  FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 298, CppParser::RuleFunctionBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2023);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 240, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2019);
      regularFunctionBody();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2020);
      functionTryBlock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2021);
      explicitlyDefaultedFunction();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2022);
      deletedFunction();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegularFunctionBodyContext ------------------------------------------------------------------

CppParser::RegularFunctionBodyContext::RegularFunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::CompoundStatementContext* CppParser::RegularFunctionBodyContext::compoundStatement() {
  return getRuleContext<CppParser::CompoundStatementContext>(0);
}

CppParser::ConstructorInitializerContext* CppParser::RegularFunctionBodyContext::constructorInitializer() {
  return getRuleContext<CppParser::ConstructorInitializerContext>(0);
}


size_t CppParser::RegularFunctionBodyContext::getRuleIndex() const {
  return CppParser::RuleRegularFunctionBody;
}

void CppParser::RegularFunctionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegularFunctionBody(this);
}

void CppParser::RegularFunctionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegularFunctionBody(this);
}

CppParser::RegularFunctionBodyContext* CppParser::regularFunctionBody() {
  RegularFunctionBodyContext *_localctx = _tracker.createInstance<RegularFunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 300, CppParser::RuleRegularFunctionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2026);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Colon) {
      setState(2025);
      constructorInitializer();
    }
    setState(2028);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitlyDefaultedFunctionContext ------------------------------------------------------------------

CppParser::ExplicitlyDefaultedFunctionContext::ExplicitlyDefaultedFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ExplicitlyDefaultedFunctionContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

tree::TerminalNode* CppParser::ExplicitlyDefaultedFunctionContext::Default() {
  return getToken(CppParser::Default, 0);
}

tree::TerminalNode* CppParser::ExplicitlyDefaultedFunctionContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}


size_t CppParser::ExplicitlyDefaultedFunctionContext::getRuleIndex() const {
  return CppParser::RuleExplicitlyDefaultedFunction;
}

void CppParser::ExplicitlyDefaultedFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitlyDefaultedFunction(this);
}

void CppParser::ExplicitlyDefaultedFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitlyDefaultedFunction(this);
}

CppParser::ExplicitlyDefaultedFunctionContext* CppParser::explicitlyDefaultedFunction() {
  ExplicitlyDefaultedFunctionContext *_localctx = _tracker.createInstance<ExplicitlyDefaultedFunctionContext>(_ctx, getState());
  enterRule(_localctx, 302, CppParser::RuleExplicitlyDefaultedFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2030);
    match(CppParser::Equal);
    setState(2031);
    match(CppParser::Default);
    setState(2032);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeletedFunctionContext ------------------------------------------------------------------

CppParser::DeletedFunctionContext::DeletedFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::DeletedFunctionContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

tree::TerminalNode* CppParser::DeletedFunctionContext::Delete() {
  return getToken(CppParser::Delete, 0);
}

tree::TerminalNode* CppParser::DeletedFunctionContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}


size_t CppParser::DeletedFunctionContext::getRuleIndex() const {
  return CppParser::RuleDeletedFunction;
}

void CppParser::DeletedFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeletedFunction(this);
}

void CppParser::DeletedFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeletedFunction(this);
}

CppParser::DeletedFunctionContext* CppParser::deletedFunction() {
  DeletedFunctionContext *_localctx = _tracker.createInstance<DeletedFunctionContext>(_ctx, getState());
  enterRule(_localctx, 304, CppParser::RuleDeletedFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2034);
    match(CppParser::Equal);
    setState(2035);
    match(CppParser::Delete);
    setState(2036);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

CppParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::BraceOrEqualInitializerContext* CppParser::InitializerContext::braceOrEqualInitializer() {
  return getRuleContext<CppParser::BraceOrEqualInitializerContext>(0);
}


size_t CppParser::InitializerContext::getRuleIndex() const {
  return CppParser::RuleInitializer;
}

void CppParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void CppParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}

CppParser::InitializerContext* CppParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 306, CppParser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2038);
    braceOrEqualInitializer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BraceOrEqualInitializerContext ------------------------------------------------------------------

CppParser::BraceOrEqualInitializerContext::BraceOrEqualInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::BraceOrEqualInitializerContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

CppParser::InitializerClauseContext* CppParser::BraceOrEqualInitializerContext::initializerClause() {
  return getRuleContext<CppParser::InitializerClauseContext>(0);
}

CppParser::BracedInitializerListContext* CppParser::BraceOrEqualInitializerContext::bracedInitializerList() {
  return getRuleContext<CppParser::BracedInitializerListContext>(0);
}


size_t CppParser::BraceOrEqualInitializerContext::getRuleIndex() const {
  return CppParser::RuleBraceOrEqualInitializer;
}

void CppParser::BraceOrEqualInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBraceOrEqualInitializer(this);
}

void CppParser::BraceOrEqualInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBraceOrEqualInitializer(this);
}

CppParser::BraceOrEqualInitializerContext* CppParser::braceOrEqualInitializer() {
  BraceOrEqualInitializerContext *_localctx = _tracker.createInstance<BraceOrEqualInitializerContext>(_ctx, getState());
  enterRule(_localctx, 308, CppParser::RuleBraceOrEqualInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2043);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Equal: {
        enterOuterAlt(_localctx, 1);
        setState(2040);
        match(CppParser::Equal);
        setState(2041);
        initializerClause();
        break;
      }

      case CppParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(2042);
        bracedInitializerList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerClauseContext ------------------------------------------------------------------

CppParser::InitializerClauseContext::InitializerClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::AssignmentExpressionContext* CppParser::InitializerClauseContext::assignmentExpression() {
  return getRuleContext<CppParser::AssignmentExpressionContext>(0);
}

CppParser::BracedInitializerListContext* CppParser::InitializerClauseContext::bracedInitializerList() {
  return getRuleContext<CppParser::BracedInitializerListContext>(0);
}


size_t CppParser::InitializerClauseContext::getRuleIndex() const {
  return CppParser::RuleInitializerClause;
}

void CppParser::InitializerClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerClause(this);
}

void CppParser::InitializerClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerClause(this);
}

CppParser::InitializerClauseContext* CppParser::initializerClause() {
  InitializerClauseContext *_localctx = _tracker.createInstance<InitializerClauseContext>(_ctx, getState());
  enterRule(_localctx, 310, CppParser::RuleInitializerClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2047);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::AlignOf:
      case CppParser::Auto:
      case CppParser::Bool:
      case CppParser::Char:
      case CppParser::Char16:
      case CppParser::Char32:
      case CppParser::Class:
      case CppParser::Const:
      case CppParser::ConstCast:
      case CppParser::DeclType:
      case CppParser::Delete:
      case CppParser::Double:
      case CppParser::DynamicCast:
      case CppParser::Enum:
      case CppParser::False:
      case CppParser::Float:
      case CppParser::Int:
      case CppParser::Long:
      case CppParser::New:
      case CppParser::NoExcept:
      case CppParser::Nullptr:
      case CppParser::Operator:
      case CppParser::ReinterpretCast:
      case CppParser::Short:
      case CppParser::Signed:
      case CppParser::SizeOf:
      case CppParser::StaticCast:
      case CppParser::Struct:
      case CppParser::This:
      case CppParser::Throw:
      case CppParser::True:
      case CppParser::TypeName:
      case CppParser::Union:
      case CppParser::Unsigned:
      case CppParser::Void:
      case CppParser::Volatile:
      case CppParser::WChar:
      case CppParser::LeftBracket:
      case CppParser::LeftParenthesis:
      case CppParser::DoubleColon:
      case CppParser::Plus:
      case CppParser::Minus:
      case CppParser::Asterisk:
      case CppParser::Ampersand:
      case CppParser::VerticalBar:
      case CppParser::Tilde:
      case CppParser::ExclamationMark:
      case CppParser::DoublePlus:
      case CppParser::DoubleMinus:
      case CppParser::Zero:
      case CppParser::IntegerLiteral:
      case CppParser::FloatingPointLiteral:
      case CppParser::CharacterLiteral:
      case CppParser::StringLiteral:
      case CppParser::UserDefinedIntegerLiteral:
      case CppParser::UserDefinedFloatingPointLiteral:
      case CppParser::UserDefinedCharacterLiteral:
      case CppParser::UserDefinedStringLiteral:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(2045);
        assignmentExpression();
        break;
      }

      case CppParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(2046);
        bracedInitializerList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerListContext ------------------------------------------------------------------

CppParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::InitializerClauseContext* CppParser::InitializerListContext::initializerClause() {
  return getRuleContext<CppParser::InitializerClauseContext>(0);
}

tree::TerminalNode* CppParser::InitializerListContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

CppParser::InitializerListContext* CppParser::InitializerListContext::initializerList() {
  return getRuleContext<CppParser::InitializerListContext>(0);
}

tree::TerminalNode* CppParser::InitializerListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::InitializerListContext::getRuleIndex() const {
  return CppParser::RuleInitializerList;
}

void CppParser::InitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerList(this);
}

void CppParser::InitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerList(this);
}


CppParser::InitializerListContext* CppParser::initializerList() {
   return initializerList(0);
}

CppParser::InitializerListContext* CppParser::initializerList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, parentState);
  CppParser::InitializerListContext *previousContext = _localctx;
  size_t startState = 312;
  enterRecursionRule(_localctx, 312, CppParser::RuleInitializerList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2050);
    initializerClause();
    setState(2052);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 244, _ctx)) {
    case 1: {
      setState(2051);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2062);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerList);
        setState(2054);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2055);
        match(CppParser::Comma);
        setState(2056);
        initializerClause();
        setState(2058);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 245, _ctx)) {
        case 1: {
          setState(2057);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2064);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 246, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BracedInitializerListContext ------------------------------------------------------------------

CppParser::BracedInitializerListContext::BracedInitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::BracedInitializerListContext::LeftBrace() {
  return getToken(CppParser::LeftBrace, 0);
}

CppParser::InitializerListContext* CppParser::BracedInitializerListContext::initializerList() {
  return getRuleContext<CppParser::InitializerListContext>(0);
}

tree::TerminalNode* CppParser::BracedInitializerListContext::RightBrace() {
  return getToken(CppParser::RightBrace, 0);
}

tree::TerminalNode* CppParser::BracedInitializerListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::BracedInitializerListContext::getRuleIndex() const {
  return CppParser::RuleBracedInitializerList;
}

void CppParser::BracedInitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracedInitializerList(this);
}

void CppParser::BracedInitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracedInitializerList(this);
}

CppParser::BracedInitializerListContext* CppParser::bracedInitializerList() {
  BracedInitializerListContext *_localctx = _tracker.createInstance<BracedInitializerListContext>(_ctx, getState());
  enterRule(_localctx, 314, CppParser::RuleBracedInitializerList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2074);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 248, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2065);
      match(CppParser::LeftBrace);
      setState(2066);
      initializerList(0);
      setState(2068);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Comma) {
        setState(2067);
        match(CppParser::Comma);
      }
      setState(2070);
      match(CppParser::RightBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2072);
      match(CppParser::LeftBrace);
      setState(2073);
      match(CppParser::RightBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionOrBracedInitializerListContext ------------------------------------------------------------------

CppParser::ExpressionOrBracedInitializerListContext::ExpressionOrBracedInitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ExpressionContext* CppParser::ExpressionOrBracedInitializerListContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

CppParser::BracedInitializerListContext* CppParser::ExpressionOrBracedInitializerListContext::bracedInitializerList() {
  return getRuleContext<CppParser::BracedInitializerListContext>(0);
}


size_t CppParser::ExpressionOrBracedInitializerListContext::getRuleIndex() const {
  return CppParser::RuleExpressionOrBracedInitializerList;
}

void CppParser::ExpressionOrBracedInitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionOrBracedInitializerList(this);
}

void CppParser::ExpressionOrBracedInitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionOrBracedInitializerList(this);
}

CppParser::ExpressionOrBracedInitializerListContext* CppParser::expressionOrBracedInitializerList() {
  ExpressionOrBracedInitializerListContext *_localctx = _tracker.createInstance<ExpressionOrBracedInitializerListContext>(_ctx, getState());
  enterRule(_localctx, 316, CppParser::RuleExpressionOrBracedInitializerList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2078);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::AlignOf:
      case CppParser::Auto:
      case CppParser::Bool:
      case CppParser::Char:
      case CppParser::Char16:
      case CppParser::Char32:
      case CppParser::Class:
      case CppParser::Const:
      case CppParser::ConstCast:
      case CppParser::DeclType:
      case CppParser::Delete:
      case CppParser::Double:
      case CppParser::DynamicCast:
      case CppParser::Enum:
      case CppParser::False:
      case CppParser::Float:
      case CppParser::Int:
      case CppParser::Long:
      case CppParser::New:
      case CppParser::NoExcept:
      case CppParser::Nullptr:
      case CppParser::Operator:
      case CppParser::ReinterpretCast:
      case CppParser::Short:
      case CppParser::Signed:
      case CppParser::SizeOf:
      case CppParser::StaticCast:
      case CppParser::Struct:
      case CppParser::This:
      case CppParser::Throw:
      case CppParser::True:
      case CppParser::TypeName:
      case CppParser::Union:
      case CppParser::Unsigned:
      case CppParser::Void:
      case CppParser::Volatile:
      case CppParser::WChar:
      case CppParser::LeftBracket:
      case CppParser::LeftParenthesis:
      case CppParser::DoubleColon:
      case CppParser::Plus:
      case CppParser::Minus:
      case CppParser::Asterisk:
      case CppParser::Ampersand:
      case CppParser::VerticalBar:
      case CppParser::Tilde:
      case CppParser::ExclamationMark:
      case CppParser::DoublePlus:
      case CppParser::DoubleMinus:
      case CppParser::Zero:
      case CppParser::IntegerLiteral:
      case CppParser::FloatingPointLiteral:
      case CppParser::CharacterLiteral:
      case CppParser::StringLiteral:
      case CppParser::UserDefinedIntegerLiteral:
      case CppParser::UserDefinedFloatingPointLiteral:
      case CppParser::UserDefinedCharacterLiteral:
      case CppParser::UserDefinedStringLiteral:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(2076);
        expression(0);
        break;
      }

      case CppParser::LeftBrace: {
        enterOuterAlt(_localctx, 2);
        setState(2077);
        bracedInitializerList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassSpecifierContext ------------------------------------------------------------------

CppParser::ClassSpecifierContext::ClassSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ClassHeadContext* CppParser::ClassSpecifierContext::classHead() {
  return getRuleContext<CppParser::ClassHeadContext>(0);
}

tree::TerminalNode* CppParser::ClassSpecifierContext::LeftBrace() {
  return getToken(CppParser::LeftBrace, 0);
}

tree::TerminalNode* CppParser::ClassSpecifierContext::RightBrace() {
  return getToken(CppParser::RightBrace, 0);
}

CppParser::MemberSpecificationContext* CppParser::ClassSpecifierContext::memberSpecification() {
  return getRuleContext<CppParser::MemberSpecificationContext>(0);
}


size_t CppParser::ClassSpecifierContext::getRuleIndex() const {
  return CppParser::RuleClassSpecifier;
}

void CppParser::ClassSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassSpecifier(this);
}

void CppParser::ClassSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassSpecifier(this);
}

CppParser::ClassSpecifierContext* CppParser::classSpecifier() {
  ClassSpecifierContext *_localctx = _tracker.createInstance<ClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 318, CppParser::RuleClassSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2080);
    classHead();
    setState(2081);
    match(CppParser::LeftBrace);
    setState(2083);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::Class)
      | (1ULL << CppParser::Const)
      | (1ULL << CppParser::ConstExpr)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::Enum)
      | (1ULL << CppParser::Explicit)
      | (1ULL << CppParser::Extern)
      | (1ULL << CppParser::Float)
      | (1ULL << CppParser::Friend)
      | (1ULL << CppParser::Inline)
      | (1ULL << CppParser::Int)
      | (1ULL << CppParser::Long)
      | (1ULL << CppParser::Mutable)
      | (1ULL << CppParser::Operator)
      | (1ULL << CppParser::Private)
      | (1ULL << CppParser::Protected)
      | (1ULL << CppParser::Public)
      | (1ULL << CppParser::Short)
      | (1ULL << CppParser::Signed)
      | (1ULL << CppParser::Static)
      | (1ULL << CppParser::StaticAssert)
      | (1ULL << CppParser::Struct)
      | (1ULL << CppParser::Template)
      | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (CppParser::TypeDef - 67))
      | (1ULL << (CppParser::TypeName - 67))
      | (1ULL << (CppParser::Union - 67))
      | (1ULL << (CppParser::Unsigned - 67))
      | (1ULL << (CppParser::Using - 67))
      | (1ULL << (CppParser::Virtual - 67))
      | (1ULL << (CppParser::Void - 67))
      | (1ULL << (CppParser::Volatile - 67))
      | (1ULL << (CppParser::WChar - 67))
      | (1ULL << (CppParser::LeftBracket - 67))
      | (1ULL << (CppParser::LeftParenthesis - 67))
      | (1ULL << (CppParser::Semicolon - 67))
      | (1ULL << (CppParser::Colon - 67))
      | (1ULL << (CppParser::Ellipsis - 67))
      | (1ULL << (CppParser::DoubleColon - 67))
      | (1ULL << (CppParser::Asterisk - 67))
      | (1ULL << (CppParser::Ampersand - 67))
      | (1ULL << (CppParser::Tilde - 67))
      | (1ULL << (CppParser::DoubleAmpersand - 67)))) != 0) || _la == CppParser::Identifier) {
      setState(2082);
      memberSpecification();
    }
    setState(2085);
    match(CppParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassHeadContext ------------------------------------------------------------------

CppParser::ClassHeadContext::ClassHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ClassKeyContext* CppParser::ClassHeadContext::classKey() {
  return getRuleContext<CppParser::ClassKeyContext>(0);
}

CppParser::ClassHeadNameContext* CppParser::ClassHeadContext::classHeadName() {
  return getRuleContext<CppParser::ClassHeadNameContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::ClassHeadContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::ClassVirtualSpecifierContext* CppParser::ClassHeadContext::classVirtualSpecifier() {
  return getRuleContext<CppParser::ClassVirtualSpecifierContext>(0);
}

CppParser::BaseClauseContext* CppParser::ClassHeadContext::baseClause() {
  return getRuleContext<CppParser::BaseClauseContext>(0);
}

CppParser::AttributeSpecifierContext* CppParser::ClassHeadContext::attributeSpecifier() {
  return getRuleContext<CppParser::AttributeSpecifierContext>(0);
}


size_t CppParser::ClassHeadContext::getRuleIndex() const {
  return CppParser::RuleClassHead;
}

void CppParser::ClassHeadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassHead(this);
}

void CppParser::ClassHeadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassHead(this);
}

CppParser::ClassHeadContext* CppParser::classHead() {
  ClassHeadContext *_localctx = _tracker.createInstance<ClassHeadContext>(_ctx, getState());
  enterRule(_localctx, 320, CppParser::RuleClassHead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2105);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2087);
      classKey();
      setState(2089);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(2088);
        attributeSpecifierSequence(0);
      }
      setState(2091);
      classHeadName();
      setState(2093);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Final) {
        setState(2092);
        classVirtualSpecifier();
      }
      setState(2096);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Colon) {
        setState(2095);
        baseClause();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2098);
      classKey();
      setState(2100);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(2099);
        attributeSpecifier();
      }
      setState(2103);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Colon) {
        setState(2102);
        baseClause();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassHeadNameContext ------------------------------------------------------------------

CppParser::ClassHeadNameContext::ClassHeadNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ClassNameContext* CppParser::ClassHeadNameContext::className() {
  return getRuleContext<CppParser::ClassNameContext>(0);
}

CppParser::NestedNameSpecifierContext* CppParser::ClassHeadNameContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}


size_t CppParser::ClassHeadNameContext::getRuleIndex() const {
  return CppParser::RuleClassHeadName;
}

void CppParser::ClassHeadNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassHeadName(this);
}

void CppParser::ClassHeadNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassHeadName(this);
}

CppParser::ClassHeadNameContext* CppParser::classHeadName() {
  ClassHeadNameContext *_localctx = _tracker.createInstance<ClassHeadNameContext>(_ctx, getState());
  enterRule(_localctx, 322, CppParser::RuleClassHeadName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2108);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 257, _ctx)) {
    case 1: {
      setState(2107);
      nestedNameSpecifier(0);
      break;
    }

    }
    setState(2110);
    className();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassVirtualSpecifierContext ------------------------------------------------------------------

CppParser::ClassVirtualSpecifierContext::ClassVirtualSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ClassVirtualSpecifierContext::Final() {
  return getToken(CppParser::Final, 0);
}


size_t CppParser::ClassVirtualSpecifierContext::getRuleIndex() const {
  return CppParser::RuleClassVirtualSpecifier;
}

void CppParser::ClassVirtualSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassVirtualSpecifier(this);
}

void CppParser::ClassVirtualSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassVirtualSpecifier(this);
}

CppParser::ClassVirtualSpecifierContext* CppParser::classVirtualSpecifier() {
  ClassVirtualSpecifierContext *_localctx = _tracker.createInstance<ClassVirtualSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 324, CppParser::RuleClassVirtualSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2112);
    match(CppParser::Final);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassKeyContext ------------------------------------------------------------------

CppParser::ClassKeyContext::ClassKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ClassKeyContext::Class() {
  return getToken(CppParser::Class, 0);
}

tree::TerminalNode* CppParser::ClassKeyContext::Struct() {
  return getToken(CppParser::Struct, 0);
}

tree::TerminalNode* CppParser::ClassKeyContext::Union() {
  return getToken(CppParser::Union, 0);
}


size_t CppParser::ClassKeyContext::getRuleIndex() const {
  return CppParser::RuleClassKey;
}

void CppParser::ClassKeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassKey(this);
}

void CppParser::ClassKeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassKey(this);
}

CppParser::ClassKeyContext* CppParser::classKey() {
  ClassKeyContext *_localctx = _tracker.createInstance<ClassKeyContext>(_ctx, getState());
  enterRule(_localctx, 326, CppParser::RuleClassKey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2114);
    _la = _input->LA(1);
    if (!(((((_la - 16) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 16)) & ((1ULL << (CppParser::Class - 16))
      | (1ULL << (CppParser::Struct - 16))
      | (1ULL << (CppParser::Union - 16)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberSpecificationContext ------------------------------------------------------------------

CppParser::MemberSpecificationContext::MemberSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::MemberDeclarationContext* CppParser::MemberSpecificationContext::memberDeclaration() {
  return getRuleContext<CppParser::MemberDeclarationContext>(0);
}

CppParser::MemberSpecificationContext* CppParser::MemberSpecificationContext::memberSpecification() {
  return getRuleContext<CppParser::MemberSpecificationContext>(0);
}

CppParser::AccessSpecifierContext* CppParser::MemberSpecificationContext::accessSpecifier() {
  return getRuleContext<CppParser::AccessSpecifierContext>(0);
}

tree::TerminalNode* CppParser::MemberSpecificationContext::Colon() {
  return getToken(CppParser::Colon, 0);
}


size_t CppParser::MemberSpecificationContext::getRuleIndex() const {
  return CppParser::RuleMemberSpecification;
}

void CppParser::MemberSpecificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberSpecification(this);
}

void CppParser::MemberSpecificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberSpecification(this);
}

CppParser::MemberSpecificationContext* CppParser::memberSpecification() {
  MemberSpecificationContext *_localctx = _tracker.createInstance<MemberSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 328, CppParser::RuleMemberSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2125);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::AlignAs:
      case CppParser::Auto:
      case CppParser::Bool:
      case CppParser::Char:
      case CppParser::Char16:
      case CppParser::Char32:
      case CppParser::Class:
      case CppParser::Const:
      case CppParser::ConstExpr:
      case CppParser::DeclType:
      case CppParser::Double:
      case CppParser::Enum:
      case CppParser::Explicit:
      case CppParser::Extern:
      case CppParser::Float:
      case CppParser::Friend:
      case CppParser::Inline:
      case CppParser::Int:
      case CppParser::Long:
      case CppParser::Mutable:
      case CppParser::Operator:
      case CppParser::Short:
      case CppParser::Signed:
      case CppParser::Static:
      case CppParser::StaticAssert:
      case CppParser::Struct:
      case CppParser::Template:
      case CppParser::ThreadLocal:
      case CppParser::TypeDef:
      case CppParser::TypeName:
      case CppParser::Union:
      case CppParser::Unsigned:
      case CppParser::Using:
      case CppParser::Virtual:
      case CppParser::Void:
      case CppParser::Volatile:
      case CppParser::WChar:
      case CppParser::LeftBracket:
      case CppParser::LeftParenthesis:
      case CppParser::Semicolon:
      case CppParser::Colon:
      case CppParser::Ellipsis:
      case CppParser::DoubleColon:
      case CppParser::Asterisk:
      case CppParser::Ampersand:
      case CppParser::Tilde:
      case CppParser::DoubleAmpersand:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(2116);
        memberDeclaration();
        setState(2118);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
          | (1ULL << CppParser::Auto)
          | (1ULL << CppParser::Bool)
          | (1ULL << CppParser::Char)
          | (1ULL << CppParser::Char16)
          | (1ULL << CppParser::Char32)
          | (1ULL << CppParser::Class)
          | (1ULL << CppParser::Const)
          | (1ULL << CppParser::ConstExpr)
          | (1ULL << CppParser::DeclType)
          | (1ULL << CppParser::Double)
          | (1ULL << CppParser::Enum)
          | (1ULL << CppParser::Explicit)
          | (1ULL << CppParser::Extern)
          | (1ULL << CppParser::Float)
          | (1ULL << CppParser::Friend)
          | (1ULL << CppParser::Inline)
          | (1ULL << CppParser::Int)
          | (1ULL << CppParser::Long)
          | (1ULL << CppParser::Mutable)
          | (1ULL << CppParser::Operator)
          | (1ULL << CppParser::Private)
          | (1ULL << CppParser::Protected)
          | (1ULL << CppParser::Public)
          | (1ULL << CppParser::Short)
          | (1ULL << CppParser::Signed)
          | (1ULL << CppParser::Static)
          | (1ULL << CppParser::StaticAssert)
          | (1ULL << CppParser::Struct)
          | (1ULL << CppParser::Template)
          | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 67)) & ((1ULL << (CppParser::TypeDef - 67))
          | (1ULL << (CppParser::TypeName - 67))
          | (1ULL << (CppParser::Union - 67))
          | (1ULL << (CppParser::Unsigned - 67))
          | (1ULL << (CppParser::Using - 67))
          | (1ULL << (CppParser::Virtual - 67))
          | (1ULL << (CppParser::Void - 67))
          | (1ULL << (CppParser::Volatile - 67))
          | (1ULL << (CppParser::WChar - 67))
          | (1ULL << (CppParser::LeftBracket - 67))
          | (1ULL << (CppParser::LeftParenthesis - 67))
          | (1ULL << (CppParser::Semicolon - 67))
          | (1ULL << (CppParser::Colon - 67))
          | (1ULL << (CppParser::Ellipsis - 67))
          | (1ULL << (CppParser::DoubleColon - 67))
          | (1ULL << (CppParser::Asterisk - 67))
          | (1ULL << (CppParser::Ampersand - 67))
          | (1ULL << (CppParser::Tilde - 67))
          | (1ULL << (CppParser::DoubleAmpersand - 67)))) != 0) || _la == CppParser::Identifier) {
          setState(2117);
          memberSpecification();
        }
        break;
      }

      case CppParser::Private:
      case CppParser::Protected:
      case CppParser::Public: {
        enterOuterAlt(_localctx, 2);
        setState(2120);
        accessSpecifier();
        setState(2121);
        match(CppParser::Colon);
        setState(2123);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
          | (1ULL << CppParser::Auto)
          | (1ULL << CppParser::Bool)
          | (1ULL << CppParser::Char)
          | (1ULL << CppParser::Char16)
          | (1ULL << CppParser::Char32)
          | (1ULL << CppParser::Class)
          | (1ULL << CppParser::Const)
          | (1ULL << CppParser::ConstExpr)
          | (1ULL << CppParser::DeclType)
          | (1ULL << CppParser::Double)
          | (1ULL << CppParser::Enum)
          | (1ULL << CppParser::Explicit)
          | (1ULL << CppParser::Extern)
          | (1ULL << CppParser::Float)
          | (1ULL << CppParser::Friend)
          | (1ULL << CppParser::Inline)
          | (1ULL << CppParser::Int)
          | (1ULL << CppParser::Long)
          | (1ULL << CppParser::Mutable)
          | (1ULL << CppParser::Operator)
          | (1ULL << CppParser::Private)
          | (1ULL << CppParser::Protected)
          | (1ULL << CppParser::Public)
          | (1ULL << CppParser::Short)
          | (1ULL << CppParser::Signed)
          | (1ULL << CppParser::Static)
          | (1ULL << CppParser::StaticAssert)
          | (1ULL << CppParser::Struct)
          | (1ULL << CppParser::Template)
          | (1ULL << CppParser::ThreadLocal))) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 67)) & ((1ULL << (CppParser::TypeDef - 67))
          | (1ULL << (CppParser::TypeName - 67))
          | (1ULL << (CppParser::Union - 67))
          | (1ULL << (CppParser::Unsigned - 67))
          | (1ULL << (CppParser::Using - 67))
          | (1ULL << (CppParser::Virtual - 67))
          | (1ULL << (CppParser::Void - 67))
          | (1ULL << (CppParser::Volatile - 67))
          | (1ULL << (CppParser::WChar - 67))
          | (1ULL << (CppParser::LeftBracket - 67))
          | (1ULL << (CppParser::LeftParenthesis - 67))
          | (1ULL << (CppParser::Semicolon - 67))
          | (1ULL << (CppParser::Colon - 67))
          | (1ULL << (CppParser::Ellipsis - 67))
          | (1ULL << (CppParser::DoubleColon - 67))
          | (1ULL << (CppParser::Asterisk - 67))
          | (1ULL << (CppParser::Ampersand - 67))
          | (1ULL << (CppParser::Tilde - 67))
          | (1ULL << (CppParser::DoubleAmpersand - 67)))) != 0) || _la == CppParser::Identifier) {
          setState(2122);
          memberSpecification();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberDeclarationContext ------------------------------------------------------------------

CppParser::MemberDeclarationContext::MemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::MemberDeclarationContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::MemberDeclarationContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::DeclarationSpecifierSequenceContext* CppParser::MemberDeclarationContext::declarationSpecifierSequence() {
  return getRuleContext<CppParser::DeclarationSpecifierSequenceContext>(0);
}

CppParser::MemberDeclaratorListContext* CppParser::MemberDeclarationContext::memberDeclaratorList() {
  return getRuleContext<CppParser::MemberDeclaratorListContext>(0);
}

CppParser::FunctionDefinitionContext* CppParser::MemberDeclarationContext::functionDefinition() {
  return getRuleContext<CppParser::FunctionDefinitionContext>(0);
}

CppParser::UsingDeclarationContext* CppParser::MemberDeclarationContext::usingDeclaration() {
  return getRuleContext<CppParser::UsingDeclarationContext>(0);
}

CppParser::StaticAssertDeclarationContext* CppParser::MemberDeclarationContext::staticAssertDeclaration() {
  return getRuleContext<CppParser::StaticAssertDeclarationContext>(0);
}

CppParser::TemplateDeclarationContext* CppParser::MemberDeclarationContext::templateDeclaration() {
  return getRuleContext<CppParser::TemplateDeclarationContext>(0);
}

CppParser::DeductionGuideContext* CppParser::MemberDeclarationContext::deductionGuide() {
  return getRuleContext<CppParser::DeductionGuideContext>(0);
}

CppParser::AliasDeclarationContext* CppParser::MemberDeclarationContext::aliasDeclaration() {
  return getRuleContext<CppParser::AliasDeclarationContext>(0);
}

CppParser::EmptyDeclarationContext* CppParser::MemberDeclarationContext::emptyDeclaration() {
  return getRuleContext<CppParser::EmptyDeclarationContext>(0);
}


size_t CppParser::MemberDeclarationContext::getRuleIndex() const {
  return CppParser::RuleMemberDeclaration;
}

void CppParser::MemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberDeclaration(this);
}

void CppParser::MemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberDeclaration(this);
}

CppParser::MemberDeclarationContext* CppParser::memberDeclaration() {
  MemberDeclarationContext *_localctx = _tracker.createInstance<MemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 330, CppParser::RuleMemberDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2144);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 264, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2128);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 261, _ctx)) {
      case 1: {
        setState(2127);
        attributeSpecifierSequence(0);
        break;
      }

      }
      setState(2131);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 262, _ctx)) {
      case 1: {
        setState(2130);
        declarationSpecifierSequence();
        break;
      }

      }
      setState(2134);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Operator))) != 0) || ((((_la - 82) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 82)) & ((1ULL << (CppParser::LeftBracket - 82))
        | (1ULL << (CppParser::LeftParenthesis - 82))
        | (1ULL << (CppParser::Colon - 82))
        | (1ULL << (CppParser::Ellipsis - 82))
        | (1ULL << (CppParser::DoubleColon - 82))
        | (1ULL << (CppParser::Asterisk - 82))
        | (1ULL << (CppParser::Ampersand - 82))
        | (1ULL << (CppParser::Tilde - 82))
        | (1ULL << (CppParser::DoubleAmpersand - 82))
        | (1ULL << (CppParser::Identifier - 82)))) != 0)) {
        setState(2133);
        memberDeclaratorList(0);
      }
      setState(2136);
      match(CppParser::Semicolon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2137);
      functionDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2138);
      usingDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2139);
      staticAssertDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2140);
      templateDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2141);
      deductionGuide();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2142);
      aliasDeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2143);
      emptyDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberDeclaratorListContext ------------------------------------------------------------------

CppParser::MemberDeclaratorListContext::MemberDeclaratorListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::MemberDeclaratorContext* CppParser::MemberDeclaratorListContext::memberDeclarator() {
  return getRuleContext<CppParser::MemberDeclaratorContext>(0);
}

CppParser::MemberDeclaratorListContext* CppParser::MemberDeclaratorListContext::memberDeclaratorList() {
  return getRuleContext<CppParser::MemberDeclaratorListContext>(0);
}

tree::TerminalNode* CppParser::MemberDeclaratorListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::MemberDeclaratorListContext::getRuleIndex() const {
  return CppParser::RuleMemberDeclaratorList;
}

void CppParser::MemberDeclaratorListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberDeclaratorList(this);
}

void CppParser::MemberDeclaratorListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberDeclaratorList(this);
}


CppParser::MemberDeclaratorListContext* CppParser::memberDeclaratorList() {
   return memberDeclaratorList(0);
}

CppParser::MemberDeclaratorListContext* CppParser::memberDeclaratorList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::MemberDeclaratorListContext *_localctx = _tracker.createInstance<MemberDeclaratorListContext>(_ctx, parentState);
  CppParser::MemberDeclaratorListContext *previousContext = _localctx;
  size_t startState = 332;
  enterRecursionRule(_localctx, 332, CppParser::RuleMemberDeclaratorList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2147);
    memberDeclarator();
    _ctx->stop = _input->LT(-1);
    setState(2154);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 265, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MemberDeclaratorListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMemberDeclaratorList);
        setState(2149);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2150);
        match(CppParser::Comma);
        setState(2151);
        memberDeclarator(); 
      }
      setState(2156);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 265, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MemberDeclaratorContext ------------------------------------------------------------------

CppParser::MemberDeclaratorContext::MemberDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclaratorContext* CppParser::MemberDeclaratorContext::declarator() {
  return getRuleContext<CppParser::DeclaratorContext>(0);
}

CppParser::VirtualSpecifierSequenceContext* CppParser::MemberDeclaratorContext::virtualSpecifierSequence() {
  return getRuleContext<CppParser::VirtualSpecifierSequenceContext>(0);
}

CppParser::PureSpecifierContext* CppParser::MemberDeclaratorContext::pureSpecifier() {
  return getRuleContext<CppParser::PureSpecifierContext>(0);
}

CppParser::BraceOrEqualInitializerContext* CppParser::MemberDeclaratorContext::braceOrEqualInitializer() {
  return getRuleContext<CppParser::BraceOrEqualInitializerContext>(0);
}

tree::TerminalNode* CppParser::MemberDeclaratorContext::Colon() {
  return getToken(CppParser::Colon, 0);
}

CppParser::ConstantExpressionContext* CppParser::MemberDeclaratorContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CppParser::MemberDeclaratorContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::MemberDeclaratorContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}


size_t CppParser::MemberDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleMemberDeclarator;
}

void CppParser::MemberDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberDeclarator(this);
}

void CppParser::MemberDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberDeclarator(this);
}

CppParser::MemberDeclaratorContext* CppParser::memberDeclarator() {
  MemberDeclaratorContext *_localctx = _tracker.createInstance<MemberDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 334, CppParser::RuleMemberDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 271, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2157);
      declarator();
      setState(2159);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 266, _ctx)) {
      case 1: {
        setState(2158);
        virtualSpecifierSequence(0);
        break;
      }

      }
      setState(2162);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 267, _ctx)) {
      case 1: {
        setState(2161);
        pureSpecifier();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2164);
      declarator();
      setState(2166);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 268, _ctx)) {
      case 1: {
        setState(2165);
        braceOrEqualInitializer();
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2169);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Identifier) {
        setState(2168);
        match(CppParser::Identifier);
      }
      setState(2172);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(2171);
        attributeSpecifierSequence(0);
      }
      setState(2174);
      match(CppParser::Colon);
      setState(2175);
      constantExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VirtualSpecifierSequenceContext ------------------------------------------------------------------

CppParser::VirtualSpecifierSequenceContext::VirtualSpecifierSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::VirtualSpecifierContext* CppParser::VirtualSpecifierSequenceContext::virtualSpecifier() {
  return getRuleContext<CppParser::VirtualSpecifierContext>(0);
}

CppParser::VirtualSpecifierSequenceContext* CppParser::VirtualSpecifierSequenceContext::virtualSpecifierSequence() {
  return getRuleContext<CppParser::VirtualSpecifierSequenceContext>(0);
}


size_t CppParser::VirtualSpecifierSequenceContext::getRuleIndex() const {
  return CppParser::RuleVirtualSpecifierSequence;
}

void CppParser::VirtualSpecifierSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtualSpecifierSequence(this);
}

void CppParser::VirtualSpecifierSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtualSpecifierSequence(this);
}


CppParser::VirtualSpecifierSequenceContext* CppParser::virtualSpecifierSequence() {
   return virtualSpecifierSequence(0);
}

CppParser::VirtualSpecifierSequenceContext* CppParser::virtualSpecifierSequence(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::VirtualSpecifierSequenceContext *_localctx = _tracker.createInstance<VirtualSpecifierSequenceContext>(_ctx, parentState);
  CppParser::VirtualSpecifierSequenceContext *previousContext = _localctx;
  size_t startState = 336;
  enterRecursionRule(_localctx, 336, CppParser::RuleVirtualSpecifierSequence, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2179);
    virtualSpecifier();
    _ctx->stop = _input->LT(-1);
    setState(2185);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 272, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VirtualSpecifierSequenceContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVirtualSpecifierSequence);
        setState(2181);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2182);
        virtualSpecifier(); 
      }
      setState(2187);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 272, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VirtualSpecifierContext ------------------------------------------------------------------

CppParser::VirtualSpecifierContext::VirtualSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::VirtualSpecifierContext::Override() {
  return getToken(CppParser::Override, 0);
}

tree::TerminalNode* CppParser::VirtualSpecifierContext::Final() {
  return getToken(CppParser::Final, 0);
}


size_t CppParser::VirtualSpecifierContext::getRuleIndex() const {
  return CppParser::RuleVirtualSpecifier;
}

void CppParser::VirtualSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVirtualSpecifier(this);
}

void CppParser::VirtualSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVirtualSpecifier(this);
}

CppParser::VirtualSpecifierContext* CppParser::virtualSpecifier() {
  VirtualSpecifierContext *_localctx = _tracker.createInstance<VirtualSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 338, CppParser::RuleVirtualSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2188);
    _la = _input->LA(1);
    if (!(_la == CppParser::Override

    || _la == CppParser::Final)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PureSpecifierContext ------------------------------------------------------------------

CppParser::PureSpecifierContext::PureSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::PureSpecifierContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

tree::TerminalNode* CppParser::PureSpecifierContext::Zero() {
  return getToken(CppParser::Zero, 0);
}


size_t CppParser::PureSpecifierContext::getRuleIndex() const {
  return CppParser::RulePureSpecifier;
}

void CppParser::PureSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPureSpecifier(this);
}

void CppParser::PureSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPureSpecifier(this);
}

CppParser::PureSpecifierContext* CppParser::pureSpecifier() {
  PureSpecifierContext *_localctx = _tracker.createInstance<PureSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 340, CppParser::RulePureSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2190);
    match(CppParser::Equal);
    setState(2191);
    match(CppParser::Zero);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseClauseContext ------------------------------------------------------------------

CppParser::BaseClauseContext::BaseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::BaseClauseContext::Colon() {
  return getToken(CppParser::Colon, 0);
}

CppParser::BaseSpecifierListContext* CppParser::BaseClauseContext::baseSpecifierList() {
  return getRuleContext<CppParser::BaseSpecifierListContext>(0);
}


size_t CppParser::BaseClauseContext::getRuleIndex() const {
  return CppParser::RuleBaseClause;
}

void CppParser::BaseClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseClause(this);
}

void CppParser::BaseClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseClause(this);
}

CppParser::BaseClauseContext* CppParser::baseClause() {
  BaseClauseContext *_localctx = _tracker.createInstance<BaseClauseContext>(_ctx, getState());
  enterRule(_localctx, 342, CppParser::RuleBaseClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2193);
    match(CppParser::Colon);
    setState(2194);
    baseSpecifierList(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseSpecifierListContext ------------------------------------------------------------------

CppParser::BaseSpecifierListContext::BaseSpecifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::BaseSpecifierContext* CppParser::BaseSpecifierListContext::baseSpecifier() {
  return getRuleContext<CppParser::BaseSpecifierContext>(0);
}

tree::TerminalNode* CppParser::BaseSpecifierListContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

CppParser::BaseSpecifierListContext* CppParser::BaseSpecifierListContext::baseSpecifierList() {
  return getRuleContext<CppParser::BaseSpecifierListContext>(0);
}

tree::TerminalNode* CppParser::BaseSpecifierListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::BaseSpecifierListContext::getRuleIndex() const {
  return CppParser::RuleBaseSpecifierList;
}

void CppParser::BaseSpecifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseSpecifierList(this);
}

void CppParser::BaseSpecifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseSpecifierList(this);
}


CppParser::BaseSpecifierListContext* CppParser::baseSpecifierList() {
   return baseSpecifierList(0);
}

CppParser::BaseSpecifierListContext* CppParser::baseSpecifierList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::BaseSpecifierListContext *_localctx = _tracker.createInstance<BaseSpecifierListContext>(_ctx, parentState);
  CppParser::BaseSpecifierListContext *previousContext = _localctx;
  size_t startState = 344;
  enterRecursionRule(_localctx, 344, CppParser::RuleBaseSpecifierList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2197);
    baseSpecifier();
    setState(2199);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 273, _ctx)) {
    case 1: {
      setState(2198);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2209);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 275, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BaseSpecifierListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBaseSpecifierList);
        setState(2201);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2202);
        match(CppParser::Comma);
        setState(2203);
        baseSpecifier();
        setState(2205);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 274, _ctx)) {
        case 1: {
          setState(2204);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2211);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 275, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BaseSpecifierContext ------------------------------------------------------------------

CppParser::BaseSpecifierContext::BaseSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ClassOrDecltypeContext* CppParser::BaseSpecifierContext::classOrDecltype() {
  return getRuleContext<CppParser::ClassOrDecltypeContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::BaseSpecifierContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::BaseSpecifierContext::Virtual() {
  return getToken(CppParser::Virtual, 0);
}

CppParser::AccessSpecifierContext* CppParser::BaseSpecifierContext::accessSpecifier() {
  return getRuleContext<CppParser::AccessSpecifierContext>(0);
}


size_t CppParser::BaseSpecifierContext::getRuleIndex() const {
  return CppParser::RuleBaseSpecifier;
}

void CppParser::BaseSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseSpecifier(this);
}

void CppParser::BaseSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseSpecifier(this);
}

CppParser::BaseSpecifierContext* CppParser::baseSpecifier() {
  BaseSpecifierContext *_localctx = _tracker.createInstance<BaseSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 346, CppParser::RuleBaseSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2233);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 281, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2213);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(2212);
        attributeSpecifierSequence(0);
      }
      setState(2215);
      classOrDecltype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2217);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(2216);
        attributeSpecifierSequence(0);
      }
      setState(2219);
      match(CppParser::Virtual);
      setState(2221);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::Private)
        | (1ULL << CppParser::Protected)
        | (1ULL << CppParser::Public))) != 0)) {
        setState(2220);
        accessSpecifier();
      }
      setState(2223);
      classOrDecltype();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2225);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(2224);
        attributeSpecifierSequence(0);
      }
      setState(2227);
      accessSpecifier();
      setState(2229);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Virtual) {
        setState(2228);
        match(CppParser::Virtual);
      }
      setState(2231);
      classOrDecltype();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassOrDecltypeContext ------------------------------------------------------------------

CppParser::ClassOrDecltypeContext::ClassOrDecltypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ClassNameContext* CppParser::ClassOrDecltypeContext::className() {
  return getRuleContext<CppParser::ClassNameContext>(0);
}

CppParser::NestedNameSpecifierContext* CppParser::ClassOrDecltypeContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* CppParser::ClassOrDecltypeContext::Template() {
  return getToken(CppParser::Template, 0);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::ClassOrDecltypeContext::simpleTemplateIdentifier() {
  return getRuleContext<CppParser::SimpleTemplateIdentifierContext>(0);
}

CppParser::DeclarationTypeSpecifierContext* CppParser::ClassOrDecltypeContext::declarationTypeSpecifier() {
  return getRuleContext<CppParser::DeclarationTypeSpecifierContext>(0);
}


size_t CppParser::ClassOrDecltypeContext::getRuleIndex() const {
  return CppParser::RuleClassOrDecltype;
}

void CppParser::ClassOrDecltypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassOrDecltype(this);
}

void CppParser::ClassOrDecltypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassOrDecltype(this);
}

CppParser::ClassOrDecltypeContext* CppParser::classOrDecltype() {
  ClassOrDecltypeContext *_localctx = _tracker.createInstance<ClassOrDecltypeContext>(_ctx, getState());
  enterRule(_localctx, 348, CppParser::RuleClassOrDecltype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2244);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 283, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2236);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 282, _ctx)) {
      case 1: {
        setState(2235);
        nestedNameSpecifier(0);
        break;
      }

      }
      setState(2238);
      className();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2239);
      nestedNameSpecifier(0);
      setState(2240);
      match(CppParser::Template);
      setState(2241);
      simpleTemplateIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2243);
      declarationTypeSpecifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessSpecifierContext ------------------------------------------------------------------

CppParser::AccessSpecifierContext::AccessSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::AccessSpecifierContext::Private() {
  return getToken(CppParser::Private, 0);
}

tree::TerminalNode* CppParser::AccessSpecifierContext::Protected() {
  return getToken(CppParser::Protected, 0);
}

tree::TerminalNode* CppParser::AccessSpecifierContext::Public() {
  return getToken(CppParser::Public, 0);
}


size_t CppParser::AccessSpecifierContext::getRuleIndex() const {
  return CppParser::RuleAccessSpecifier;
}

void CppParser::AccessSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessSpecifier(this);
}

void CppParser::AccessSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessSpecifier(this);
}

CppParser::AccessSpecifierContext* CppParser::accessSpecifier() {
  AccessSpecifierContext *_localctx = _tracker.createInstance<AccessSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 350, CppParser::RuleAccessSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2246);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::Private)
      | (1ULL << CppParser::Protected)
      | (1ULL << CppParser::Public))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionFunctionIdentifierContext ------------------------------------------------------------------

CppParser::ConversionFunctionIdentifierContext::ConversionFunctionIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ConversionFunctionIdentifierContext::Operator() {
  return getToken(CppParser::Operator, 0);
}

CppParser::ConversionTypeIdentifierContext* CppParser::ConversionFunctionIdentifierContext::conversionTypeIdentifier() {
  return getRuleContext<CppParser::ConversionTypeIdentifierContext>(0);
}


size_t CppParser::ConversionFunctionIdentifierContext::getRuleIndex() const {
  return CppParser::RuleConversionFunctionIdentifier;
}

void CppParser::ConversionFunctionIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversionFunctionIdentifier(this);
}

void CppParser::ConversionFunctionIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversionFunctionIdentifier(this);
}

CppParser::ConversionFunctionIdentifierContext* CppParser::conversionFunctionIdentifier() {
  ConversionFunctionIdentifierContext *_localctx = _tracker.createInstance<ConversionFunctionIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 352, CppParser::RuleConversionFunctionIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2248);
    match(CppParser::Operator);
    setState(2249);
    conversionTypeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionTypeIdentifierContext ------------------------------------------------------------------

CppParser::ConversionTypeIdentifierContext::ConversionTypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TypeSpecifierSequenceContext* CppParser::ConversionTypeIdentifierContext::typeSpecifierSequence() {
  return getRuleContext<CppParser::TypeSpecifierSequenceContext>(0);
}

CppParser::ConversionDeclaratorContext* CppParser::ConversionTypeIdentifierContext::conversionDeclarator() {
  return getRuleContext<CppParser::ConversionDeclaratorContext>(0);
}


size_t CppParser::ConversionTypeIdentifierContext::getRuleIndex() const {
  return CppParser::RuleConversionTypeIdentifier;
}

void CppParser::ConversionTypeIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversionTypeIdentifier(this);
}

void CppParser::ConversionTypeIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversionTypeIdentifier(this);
}

CppParser::ConversionTypeIdentifierContext* CppParser::conversionTypeIdentifier() {
  ConversionTypeIdentifierContext *_localctx = _tracker.createInstance<ConversionTypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 354, CppParser::RuleConversionTypeIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2251);
    typeSpecifierSequence();
    setState(2253);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 284, _ctx)) {
    case 1: {
      setState(2252);
      conversionDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionDeclaratorContext ------------------------------------------------------------------

CppParser::ConversionDeclaratorContext::ConversionDeclaratorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::PointerOperatorContext* CppParser::ConversionDeclaratorContext::pointerOperator() {
  return getRuleContext<CppParser::PointerOperatorContext>(0);
}

CppParser::ConversionDeclaratorContext* CppParser::ConversionDeclaratorContext::conversionDeclarator() {
  return getRuleContext<CppParser::ConversionDeclaratorContext>(0);
}


size_t CppParser::ConversionDeclaratorContext::getRuleIndex() const {
  return CppParser::RuleConversionDeclarator;
}

void CppParser::ConversionDeclaratorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConversionDeclarator(this);
}

void CppParser::ConversionDeclaratorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConversionDeclarator(this);
}

CppParser::ConversionDeclaratorContext* CppParser::conversionDeclarator() {
  ConversionDeclaratorContext *_localctx = _tracker.createInstance<ConversionDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 356, CppParser::RuleConversionDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2255);
    pointerOperator();
    setState(2257);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 285, _ctx)) {
    case 1: {
      setState(2256);
      conversionDeclarator();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructorInitializerContext ------------------------------------------------------------------

CppParser::ConstructorInitializerContext::ConstructorInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ConstructorInitializerContext::Colon() {
  return getToken(CppParser::Colon, 0);
}

CppParser::MemberInitializerListContext* CppParser::ConstructorInitializerContext::memberInitializerList() {
  return getRuleContext<CppParser::MemberInitializerListContext>(0);
}


size_t CppParser::ConstructorInitializerContext::getRuleIndex() const {
  return CppParser::RuleConstructorInitializer;
}

void CppParser::ConstructorInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructorInitializer(this);
}

void CppParser::ConstructorInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructorInitializer(this);
}

CppParser::ConstructorInitializerContext* CppParser::constructorInitializer() {
  ConstructorInitializerContext *_localctx = _tracker.createInstance<ConstructorInitializerContext>(_ctx, getState());
  enterRule(_localctx, 358, CppParser::RuleConstructorInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2259);
    match(CppParser::Colon);
    setState(2260);
    memberInitializerList(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberInitializerListContext ------------------------------------------------------------------

CppParser::MemberInitializerListContext::MemberInitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::MemberInitializerContext* CppParser::MemberInitializerListContext::memberInitializer() {
  return getRuleContext<CppParser::MemberInitializerContext>(0);
}

tree::TerminalNode* CppParser::MemberInitializerListContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

CppParser::MemberInitializerListContext* CppParser::MemberInitializerListContext::memberInitializerList() {
  return getRuleContext<CppParser::MemberInitializerListContext>(0);
}

tree::TerminalNode* CppParser::MemberInitializerListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::MemberInitializerListContext::getRuleIndex() const {
  return CppParser::RuleMemberInitializerList;
}

void CppParser::MemberInitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberInitializerList(this);
}

void CppParser::MemberInitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberInitializerList(this);
}


CppParser::MemberInitializerListContext* CppParser::memberInitializerList() {
   return memberInitializerList(0);
}

CppParser::MemberInitializerListContext* CppParser::memberInitializerList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::MemberInitializerListContext *_localctx = _tracker.createInstance<MemberInitializerListContext>(_ctx, parentState);
  CppParser::MemberInitializerListContext *previousContext = _localctx;
  size_t startState = 360;
  enterRecursionRule(_localctx, 360, CppParser::RuleMemberInitializerList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2263);
    memberInitializer();
    setState(2265);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 286, _ctx)) {
    case 1: {
      setState(2264);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2275);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 288, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MemberInitializerListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMemberInitializerList);
        setState(2267);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2268);
        match(CppParser::Comma);
        setState(2269);
        memberInitializer();
        setState(2271);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 287, _ctx)) {
        case 1: {
          setState(2270);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2277);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 288, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MemberInitializerContext ------------------------------------------------------------------

CppParser::MemberInitializerContext::MemberInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CppParser::MemberInitializerIdentifierContext *> CppParser::MemberInitializerContext::memberInitializerIdentifier() {
  return getRuleContexts<CppParser::MemberInitializerIdentifierContext>();
}

CppParser::MemberInitializerIdentifierContext* CppParser::MemberInitializerContext::memberInitializerIdentifier(size_t i) {
  return getRuleContext<CppParser::MemberInitializerIdentifierContext>(i);
}

tree::TerminalNode* CppParser::MemberInitializerContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

tree::TerminalNode* CppParser::MemberInitializerContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::BracedInitializerListContext* CppParser::MemberInitializerContext::bracedInitializerList() {
  return getRuleContext<CppParser::BracedInitializerListContext>(0);
}

CppParser::ExpressionListContext* CppParser::MemberInitializerContext::expressionList() {
  return getRuleContext<CppParser::ExpressionListContext>(0);
}


size_t CppParser::MemberInitializerContext::getRuleIndex() const {
  return CppParser::RuleMemberInitializer;
}

void CppParser::MemberInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberInitializer(this);
}

void CppParser::MemberInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberInitializer(this);
}

CppParser::MemberInitializerContext* CppParser::memberInitializer() {
  MemberInitializerContext *_localctx = _tracker.createInstance<MemberInitializerContext>(_ctx, getState());
  enterRule(_localctx, 362, CppParser::RuleMemberInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2278);
    memberInitializerIdentifier();
    setState(2279);
    match(CppParser::LeftParenthesis);
    setState(2281);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::Class)
      | (1ULL << CppParser::Const)
      | (1ULL << CppParser::ConstCast)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Delete)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::DynamicCast)
      | (1ULL << CppParser::Enum)
      | (1ULL << CppParser::False)
      | (1ULL << CppParser::Float)
      | (1ULL << CppParser::Int)
      | (1ULL << CppParser::Long)
      | (1ULL << CppParser::New)
      | (1ULL << CppParser::NoExcept)
      | (1ULL << CppParser::Nullptr)
      | (1ULL << CppParser::Operator)
      | (1ULL << CppParser::ReinterpretCast)
      | (1ULL << CppParser::Short)
      | (1ULL << CppParser::Signed)
      | (1ULL << CppParser::SizeOf)
      | (1ULL << CppParser::StaticCast)
      | (1ULL << CppParser::Struct)
      | (1ULL << CppParser::This))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CppParser::Throw - 64))
      | (1ULL << (CppParser::True - 64))
      | (1ULL << (CppParser::TypeName - 64))
      | (1ULL << (CppParser::Union - 64))
      | (1ULL << (CppParser::Unsigned - 64))
      | (1ULL << (CppParser::Void - 64))
      | (1ULL << (CppParser::Volatile - 64))
      | (1ULL << (CppParser::WChar - 64))
      | (1ULL << (CppParser::LeftBrace - 64))
      | (1ULL << (CppParser::LeftBracket - 64))
      | (1ULL << (CppParser::LeftParenthesis - 64))
      | (1ULL << (CppParser::DoubleColon - 64))
      | (1ULL << (CppParser::Plus - 64))
      | (1ULL << (CppParser::Minus - 64))
      | (1ULL << (CppParser::Asterisk - 64))
      | (1ULL << (CppParser::Ampersand - 64))
      | (1ULL << (CppParser::VerticalBar - 64))
      | (1ULL << (CppParser::Tilde - 64))
      | (1ULL << (CppParser::ExclamationMark - 64))
      | (1ULL << (CppParser::DoublePlus - 64))
      | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
      | (1ULL << (CppParser::IntegerLiteral - 129))
      | (1ULL << (CppParser::FloatingPointLiteral - 129))
      | (1ULL << (CppParser::CharacterLiteral - 129))
      | (1ULL << (CppParser::StringLiteral - 129))
      | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
      | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
      | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
      | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
      | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
      setState(2280);
      expressionList();
    }
    setState(2283);
    match(CppParser::RightParenthesis);
    setState(2284);
    memberInitializerIdentifier();
    setState(2285);
    bracedInitializerList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberInitializerIdentifierContext ------------------------------------------------------------------

CppParser::MemberInitializerIdentifierContext::MemberInitializerIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ClassOrDecltypeContext* CppParser::MemberInitializerIdentifierContext::classOrDecltype() {
  return getRuleContext<CppParser::ClassOrDecltypeContext>(0);
}

tree::TerminalNode* CppParser::MemberInitializerIdentifierContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}


size_t CppParser::MemberInitializerIdentifierContext::getRuleIndex() const {
  return CppParser::RuleMemberInitializerIdentifier;
}

void CppParser::MemberInitializerIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberInitializerIdentifier(this);
}

void CppParser::MemberInitializerIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberInitializerIdentifier(this);
}

CppParser::MemberInitializerIdentifierContext* CppParser::memberInitializerIdentifier() {
  MemberInitializerIdentifierContext *_localctx = _tracker.createInstance<MemberInitializerIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 364, CppParser::RuleMemberInitializerIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2289);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 290, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2287);
      classOrDecltype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2288);
      match(CppParser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorFunctionIdentifierContext ------------------------------------------------------------------

CppParser::OperatorFunctionIdentifierContext::OperatorFunctionIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::OperatorFunctionIdentifierContext::Operator() {
  return getToken(CppParser::Operator, 0);
}

CppParser::AnyOperatorContext* CppParser::OperatorFunctionIdentifierContext::anyOperator() {
  return getRuleContext<CppParser::AnyOperatorContext>(0);
}


size_t CppParser::OperatorFunctionIdentifierContext::getRuleIndex() const {
  return CppParser::RuleOperatorFunctionIdentifier;
}

void CppParser::OperatorFunctionIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorFunctionIdentifier(this);
}

void CppParser::OperatorFunctionIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorFunctionIdentifier(this);
}

CppParser::OperatorFunctionIdentifierContext* CppParser::operatorFunctionIdentifier() {
  OperatorFunctionIdentifierContext *_localctx = _tracker.createInstance<OperatorFunctionIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 366, CppParser::RuleOperatorFunctionIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2291);
    match(CppParser::Operator);
    setState(2292);
    anyOperator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnyOperatorContext ------------------------------------------------------------------

CppParser::AnyOperatorContext::AnyOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::AnyOperatorContext::New() {
  return getToken(CppParser::New, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::Delete() {
  return getToken(CppParser::Delete, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::LeftBrace() {
  return getToken(CppParser::LeftBrace, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::RightBracket() {
  return getToken(CppParser::RightBracket, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::Plus() {
  return getToken(CppParser::Plus, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::Minus() {
  return getToken(CppParser::Minus, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::Asterisk() {
  return getToken(CppParser::Asterisk, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::ForwardSlash() {
  return getToken(CppParser::ForwardSlash, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::Percent() {
  return getToken(CppParser::Percent, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::Caret() {
  return getToken(CppParser::Caret, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::Ampersand() {
  return getToken(CppParser::Ampersand, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::VerticalBar() {
  return getToken(CppParser::VerticalBar, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::Tilde() {
  return getToken(CppParser::Tilde, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::ExclamationMark() {
  return getToken(CppParser::ExclamationMark, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::LessThan() {
  return getToken(CppParser::LessThan, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::GreaterThan() {
  return getToken(CppParser::GreaterThan, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::PlusEqual() {
  return getToken(CppParser::PlusEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::MinusEqual() {
  return getToken(CppParser::MinusEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::AsteriskEqual() {
  return getToken(CppParser::AsteriskEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::ForwardSlashEqual() {
  return getToken(CppParser::ForwardSlashEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::PercentEqual() {
  return getToken(CppParser::PercentEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::CaretEqual() {
  return getToken(CppParser::CaretEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::AmpersandEqual() {
  return getToken(CppParser::AmpersandEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::VerticalBarEqual() {
  return getToken(CppParser::VerticalBarEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::DoubleLessThan() {
  return getToken(CppParser::DoubleLessThan, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::DoubleGreaterThan() {
  return getToken(CppParser::DoubleGreaterThan, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::DoubleGreaterThanEqual() {
  return getToken(CppParser::DoubleGreaterThanEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::DoubleLessThanEqual() {
  return getToken(CppParser::DoubleLessThanEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::DoubleEqual() {
  return getToken(CppParser::DoubleEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::ExclamationMarkEqual() {
  return getToken(CppParser::ExclamationMarkEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::LessThanEqual() {
  return getToken(CppParser::LessThanEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::GreaterThanEqual() {
  return getToken(CppParser::GreaterThanEqual, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::DoubleAmpersand() {
  return getToken(CppParser::DoubleAmpersand, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::DoubleVerticalBar() {
  return getToken(CppParser::DoubleVerticalBar, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::DoublePlus() {
  return getToken(CppParser::DoublePlus, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::DoubleMinus() {
  return getToken(CppParser::DoubleMinus, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::Comma() {
  return getToken(CppParser::Comma, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::ArrowAsterisk() {
  return getToken(CppParser::ArrowAsterisk, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::Arrow() {
  return getToken(CppParser::Arrow, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::LeftBracket() {
  return getToken(CppParser::LeftBracket, 0);
}


size_t CppParser::AnyOperatorContext::getRuleIndex() const {
  return CppParser::RuleAnyOperator;
}

void CppParser::AnyOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnyOperator(this);
}

void CppParser::AnyOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnyOperator(this);
}

CppParser::AnyOperatorContext* CppParser::anyOperator() {
  AnyOperatorContext *_localctx = _tracker.createInstance<AnyOperatorContext>(_ctx, getState());
  enterRule(_localctx, 368, CppParser::RuleAnyOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2342);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 291, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2294);
      match(CppParser::New);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2295);
      match(CppParser::Delete);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2296);
      match(CppParser::New);
      setState(2297);
      match(CppParser::LeftBrace);
      setState(2298);
      match(CppParser::RightBracket);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2299);
      match(CppParser::Delete);
      setState(2300);
      match(CppParser::LeftBrace);
      setState(2301);
      match(CppParser::RightBracket);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2302);
      match(CppParser::Plus);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2303);
      match(CppParser::Minus);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2304);
      match(CppParser::Asterisk);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2305);
      match(CppParser::ForwardSlash);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2306);
      match(CppParser::Percent);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2307);
      match(CppParser::Caret);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2308);
      match(CppParser::Ampersand);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2309);
      match(CppParser::VerticalBar);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2310);
      match(CppParser::Tilde);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2311);
      match(CppParser::ExclamationMark);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2312);
      match(CppParser::Equal);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2313);
      match(CppParser::LessThan);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2314);
      match(CppParser::GreaterThan);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2315);
      match(CppParser::PlusEqual);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2316);
      match(CppParser::MinusEqual);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2317);
      match(CppParser::AsteriskEqual);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2318);
      match(CppParser::ForwardSlashEqual);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2319);
      match(CppParser::PercentEqual);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2320);
      match(CppParser::CaretEqual);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2321);
      match(CppParser::AmpersandEqual);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2322);
      match(CppParser::VerticalBarEqual);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2323);
      match(CppParser::DoubleLessThan);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2324);
      match(CppParser::DoubleGreaterThan);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2325);
      match(CppParser::DoubleGreaterThanEqual);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2326);
      match(CppParser::DoubleLessThanEqual);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2327);
      match(CppParser::DoubleEqual);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2328);
      match(CppParser::ExclamationMarkEqual);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2329);
      match(CppParser::LessThanEqual);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2330);
      match(CppParser::GreaterThanEqual);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2331);
      match(CppParser::DoubleAmpersand);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2332);
      match(CppParser::DoubleVerticalBar);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2333);
      match(CppParser::DoublePlus);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2334);
      match(CppParser::DoubleMinus);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2335);
      match(CppParser::Comma);
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2336);
      match(CppParser::ArrowAsterisk);
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(2337);
      match(CppParser::Arrow);
      break;
    }

    case 41: {
      enterOuterAlt(_localctx, 41);
      setState(2338);
      match(CppParser::LeftParenthesis);
      setState(2339);
      match(CppParser::RightParenthesis);
      break;
    }

    case 42: {
      enterOuterAlt(_localctx, 42);
      setState(2340);
      match(CppParser::LeftBracket);
      setState(2341);
      match(CppParser::RightBracket);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralOperatorIdentifierContext ------------------------------------------------------------------

CppParser::LiteralOperatorIdentifierContext::LiteralOperatorIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::LiteralOperatorIdentifierContext::Operator() {
  return getToken(CppParser::Operator, 0);
}

tree::TerminalNode* CppParser::LiteralOperatorIdentifierContext::StringLiteral() {
  return getToken(CppParser::StringLiteral, 0);
}

tree::TerminalNode* CppParser::LiteralOperatorIdentifierContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::LiteralOperatorIdentifierContext::UserDefinedStringLiteral() {
  return getToken(CppParser::UserDefinedStringLiteral, 0);
}


size_t CppParser::LiteralOperatorIdentifierContext::getRuleIndex() const {
  return CppParser::RuleLiteralOperatorIdentifier;
}

void CppParser::LiteralOperatorIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralOperatorIdentifier(this);
}

void CppParser::LiteralOperatorIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralOperatorIdentifier(this);
}

CppParser::LiteralOperatorIdentifierContext* CppParser::literalOperatorIdentifier() {
  LiteralOperatorIdentifierContext *_localctx = _tracker.createInstance<LiteralOperatorIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 370, CppParser::RuleLiteralOperatorIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2349);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 292, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2344);
      match(CppParser::Operator);
      setState(2345);
      match(CppParser::StringLiteral);
      setState(2346);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2347);
      match(CppParser::Operator);
      setState(2348);
      match(CppParser::UserDefinedStringLiteral);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateDeclarationContext ------------------------------------------------------------------

CppParser::TemplateDeclarationContext::TemplateDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::TemplateDeclarationContext::Template() {
  return getToken(CppParser::Template, 0);
}

tree::TerminalNode* CppParser::TemplateDeclarationContext::LessThan() {
  return getToken(CppParser::LessThan, 0);
}

CppParser::TemplateParameterListContext* CppParser::TemplateDeclarationContext::templateParameterList() {
  return getRuleContext<CppParser::TemplateParameterListContext>(0);
}

tree::TerminalNode* CppParser::TemplateDeclarationContext::GreaterThan() {
  return getToken(CppParser::GreaterThan, 0);
}

CppParser::DeclarationContext* CppParser::TemplateDeclarationContext::declaration() {
  return getRuleContext<CppParser::DeclarationContext>(0);
}


size_t CppParser::TemplateDeclarationContext::getRuleIndex() const {
  return CppParser::RuleTemplateDeclaration;
}

void CppParser::TemplateDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateDeclaration(this);
}

void CppParser::TemplateDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateDeclaration(this);
}

CppParser::TemplateDeclarationContext* CppParser::templateDeclaration() {
  TemplateDeclarationContext *_localctx = _tracker.createInstance<TemplateDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 372, CppParser::RuleTemplateDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2351);
    match(CppParser::Template);
    setState(2352);
    match(CppParser::LessThan);
    setState(2353);
    templateParameterList(0);
    setState(2354);
    match(CppParser::GreaterThan);
    setState(2355);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateParameterListContext ------------------------------------------------------------------

CppParser::TemplateParameterListContext::TemplateParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TemplateParameterContext* CppParser::TemplateParameterListContext::templateParameter() {
  return getRuleContext<CppParser::TemplateParameterContext>(0);
}

CppParser::TemplateParameterListContext* CppParser::TemplateParameterListContext::templateParameterList() {
  return getRuleContext<CppParser::TemplateParameterListContext>(0);
}

tree::TerminalNode* CppParser::TemplateParameterListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::TemplateParameterListContext::getRuleIndex() const {
  return CppParser::RuleTemplateParameterList;
}

void CppParser::TemplateParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateParameterList(this);
}

void CppParser::TemplateParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateParameterList(this);
}


CppParser::TemplateParameterListContext* CppParser::templateParameterList() {
   return templateParameterList(0);
}

CppParser::TemplateParameterListContext* CppParser::templateParameterList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::TemplateParameterListContext *_localctx = _tracker.createInstance<TemplateParameterListContext>(_ctx, parentState);
  CppParser::TemplateParameterListContext *previousContext = _localctx;
  size_t startState = 374;
  enterRecursionRule(_localctx, 374, CppParser::RuleTemplateParameterList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2358);
    templateParameter();
    _ctx->stop = _input->LT(-1);
    setState(2365);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateParameterListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateParameterList);
        setState(2360);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2361);
        match(CppParser::Comma);
        setState(2362);
        templateParameter(); 
      }
      setState(2367);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TemplateParameterContext ------------------------------------------------------------------

CppParser::TemplateParameterContext::TemplateParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TypeParameterContext* CppParser::TemplateParameterContext::typeParameter() {
  return getRuleContext<CppParser::TypeParameterContext>(0);
}

CppParser::ParameterDeclarationContext* CppParser::TemplateParameterContext::parameterDeclaration() {
  return getRuleContext<CppParser::ParameterDeclarationContext>(0);
}


size_t CppParser::TemplateParameterContext::getRuleIndex() const {
  return CppParser::RuleTemplateParameter;
}

void CppParser::TemplateParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateParameter(this);
}

void CppParser::TemplateParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateParameter(this);
}

CppParser::TemplateParameterContext* CppParser::templateParameter() {
  TemplateParameterContext *_localctx = _tracker.createInstance<TemplateParameterContext>(_ctx, getState());
  enterRule(_localctx, 376, CppParser::RuleTemplateParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2370);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 294, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2368);
      typeParameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2369);
      parameterDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

CppParser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TypeParameterKeyContext* CppParser::TypeParameterContext::typeParameterKey() {
  return getRuleContext<CppParser::TypeParameterKeyContext>(0);
}

tree::TerminalNode* CppParser::TypeParameterContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

tree::TerminalNode* CppParser::TypeParameterContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::TypeParameterContext::Equal() {
  return getToken(CppParser::Equal, 0);
}

CppParser::TypeIdentifierContext* CppParser::TypeParameterContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* CppParser::TypeParameterContext::Template() {
  return getToken(CppParser::Template, 0);
}

tree::TerminalNode* CppParser::TypeParameterContext::LessThan() {
  return getToken(CppParser::LessThan, 0);
}

CppParser::TemplateParameterListContext* CppParser::TypeParameterContext::templateParameterList() {
  return getRuleContext<CppParser::TemplateParameterListContext>(0);
}

tree::TerminalNode* CppParser::TypeParameterContext::GreaterThan() {
  return getToken(CppParser::GreaterThan, 0);
}

CppParser::IdentifierExpressionContext* CppParser::TypeParameterContext::identifierExpression() {
  return getRuleContext<CppParser::IdentifierExpressionContext>(0);
}


size_t CppParser::TypeParameterContext::getRuleIndex() const {
  return CppParser::RuleTypeParameter;
}

void CppParser::TypeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameter(this);
}

void CppParser::TypeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameter(this);
}

CppParser::TypeParameterContext* CppParser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 378, CppParser::RuleTypeParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2408);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2372);
      typeParameterKey();
      setState(2374);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 295, _ctx)) {
      case 1: {
        setState(2373);
        match(CppParser::Ellipsis);
        break;
      }

      }
      setState(2377);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 296, _ctx)) {
      case 1: {
        setState(2376);
        match(CppParser::Identifier);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2379);
      typeParameterKey();
      setState(2381);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Identifier) {
        setState(2380);
        match(CppParser::Identifier);
      }
      setState(2383);
      match(CppParser::Equal);
      setState(2384);
      typeIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2386);
      match(CppParser::Template);
      setState(2387);
      match(CppParser::LessThan);
      setState(2388);
      templateParameterList(0);
      setState(2389);
      match(CppParser::GreaterThan);
      setState(2390);
      typeParameterKey();
      setState(2392);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 298, _ctx)) {
      case 1: {
        setState(2391);
        match(CppParser::Ellipsis);
        break;
      }

      }
      setState(2395);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 299, _ctx)) {
      case 1: {
        setState(2394);
        match(CppParser::Identifier);
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2397);
      match(CppParser::Template);
      setState(2398);
      match(CppParser::LessThan);
      setState(2399);
      templateParameterList(0);
      setState(2400);
      match(CppParser::GreaterThan);
      setState(2401);
      typeParameterKey();
      setState(2403);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Identifier) {
        setState(2402);
        match(CppParser::Identifier);
      }
      setState(2405);
      match(CppParser::Equal);
      setState(2406);
      identifierExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterKeyContext ------------------------------------------------------------------

CppParser::TypeParameterKeyContext::TypeParameterKeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::TypeParameterKeyContext::Class() {
  return getToken(CppParser::Class, 0);
}

tree::TerminalNode* CppParser::TypeParameterKeyContext::TypeName() {
  return getToken(CppParser::TypeName, 0);
}


size_t CppParser::TypeParameterKeyContext::getRuleIndex() const {
  return CppParser::RuleTypeParameterKey;
}

void CppParser::TypeParameterKeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameterKey(this);
}

void CppParser::TypeParameterKeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameterKey(this);
}

CppParser::TypeParameterKeyContext* CppParser::typeParameterKey() {
  TypeParameterKeyContext *_localctx = _tracker.createInstance<TypeParameterKeyContext>(_ctx, getState());
  enterRule(_localctx, 380, CppParser::RuleTypeParameterKey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2410);
    _la = _input->LA(1);
    if (!(_la == CppParser::Class

    || _la == CppParser::TypeName)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTemplateIdentifierContext ------------------------------------------------------------------

CppParser::SimpleTemplateIdentifierContext::SimpleTemplateIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TemplateNameContext* CppParser::SimpleTemplateIdentifierContext::templateName() {
  return getRuleContext<CppParser::TemplateNameContext>(0);
}

tree::TerminalNode* CppParser::SimpleTemplateIdentifierContext::LessThan() {
  return getToken(CppParser::LessThan, 0);
}

tree::TerminalNode* CppParser::SimpleTemplateIdentifierContext::GreaterThan() {
  return getToken(CppParser::GreaterThan, 0);
}

CppParser::TemplateArgumentListContext* CppParser::SimpleTemplateIdentifierContext::templateArgumentList() {
  return getRuleContext<CppParser::TemplateArgumentListContext>(0);
}


size_t CppParser::SimpleTemplateIdentifierContext::getRuleIndex() const {
  return CppParser::RuleSimpleTemplateIdentifier;
}

void CppParser::SimpleTemplateIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleTemplateIdentifier(this);
}

void CppParser::SimpleTemplateIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleTemplateIdentifier(this);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::simpleTemplateIdentifier() {
  SimpleTemplateIdentifierContext *_localctx = _tracker.createInstance<SimpleTemplateIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 382, CppParser::RuleSimpleTemplateIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2412);
    templateName();
    setState(2413);
    match(CppParser::LessThan);
    setState(2415);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::Class)
      | (1ULL << CppParser::Const)
      | (1ULL << CppParser::ConstCast)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Delete)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::DynamicCast)
      | (1ULL << CppParser::Enum)
      | (1ULL << CppParser::False)
      | (1ULL << CppParser::Float)
      | (1ULL << CppParser::Int)
      | (1ULL << CppParser::Long)
      | (1ULL << CppParser::New)
      | (1ULL << CppParser::NoExcept)
      | (1ULL << CppParser::Nullptr)
      | (1ULL << CppParser::Operator)
      | (1ULL << CppParser::ReinterpretCast)
      | (1ULL << CppParser::Short)
      | (1ULL << CppParser::Signed)
      | (1ULL << CppParser::SizeOf)
      | (1ULL << CppParser::StaticCast)
      | (1ULL << CppParser::Struct)
      | (1ULL << CppParser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CppParser::True - 65))
      | (1ULL << (CppParser::TypeName - 65))
      | (1ULL << (CppParser::Union - 65))
      | (1ULL << (CppParser::Unsigned - 65))
      | (1ULL << (CppParser::Void - 65))
      | (1ULL << (CppParser::Volatile - 65))
      | (1ULL << (CppParser::WChar - 65))
      | (1ULL << (CppParser::LeftBracket - 65))
      | (1ULL << (CppParser::LeftParenthesis - 65))
      | (1ULL << (CppParser::DoubleColon - 65))
      | (1ULL << (CppParser::Plus - 65))
      | (1ULL << (CppParser::Minus - 65))
      | (1ULL << (CppParser::Asterisk - 65))
      | (1ULL << (CppParser::Ampersand - 65))
      | (1ULL << (CppParser::VerticalBar - 65))
      | (1ULL << (CppParser::Tilde - 65))
      | (1ULL << (CppParser::ExclamationMark - 65))
      | (1ULL << (CppParser::DoublePlus - 65))
      | (1ULL << (CppParser::DoubleMinus - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
      | (1ULL << (CppParser::IntegerLiteral - 129))
      | (1ULL << (CppParser::FloatingPointLiteral - 129))
      | (1ULL << (CppParser::CharacterLiteral - 129))
      | (1ULL << (CppParser::StringLiteral - 129))
      | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
      | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
      | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
      | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
      | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
      setState(2414);
      templateArgumentList(0);
    }
    setState(2417);
    match(CppParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateIdentifierContext ------------------------------------------------------------------

CppParser::TemplateIdentifierContext::TemplateIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::SimpleTemplateIdentifierContext* CppParser::TemplateIdentifierContext::simpleTemplateIdentifier() {
  return getRuleContext<CppParser::SimpleTemplateIdentifierContext>(0);
}

CppParser::OperatorFunctionIdentifierContext* CppParser::TemplateIdentifierContext::operatorFunctionIdentifier() {
  return getRuleContext<CppParser::OperatorFunctionIdentifierContext>(0);
}

tree::TerminalNode* CppParser::TemplateIdentifierContext::LessThan() {
  return getToken(CppParser::LessThan, 0);
}

tree::TerminalNode* CppParser::TemplateIdentifierContext::GreaterThan() {
  return getToken(CppParser::GreaterThan, 0);
}

CppParser::TemplateArgumentListContext* CppParser::TemplateIdentifierContext::templateArgumentList() {
  return getRuleContext<CppParser::TemplateArgumentListContext>(0);
}

CppParser::LiteralOperatorIdentifierContext* CppParser::TemplateIdentifierContext::literalOperatorIdentifier() {
  return getRuleContext<CppParser::LiteralOperatorIdentifierContext>(0);
}


size_t CppParser::TemplateIdentifierContext::getRuleIndex() const {
  return CppParser::RuleTemplateIdentifier;
}

void CppParser::TemplateIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateIdentifier(this);
}

void CppParser::TemplateIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateIdentifier(this);
}

CppParser::TemplateIdentifierContext* CppParser::templateIdentifier() {
  TemplateIdentifierContext *_localctx = _tracker.createInstance<TemplateIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 384, CppParser::RuleTemplateIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2434);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 305, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2419);
      simpleTemplateIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2420);
      operatorFunctionIdentifier();
      setState(2421);
      match(CppParser::LessThan);
      setState(2423);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::Class)
        | (1ULL << CppParser::Const)
        | (1ULL << CppParser::ConstCast)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Delete)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::DynamicCast)
        | (1ULL << CppParser::Enum)
        | (1ULL << CppParser::False)
        | (1ULL << CppParser::Float)
        | (1ULL << CppParser::Int)
        | (1ULL << CppParser::Long)
        | (1ULL << CppParser::New)
        | (1ULL << CppParser::NoExcept)
        | (1ULL << CppParser::Nullptr)
        | (1ULL << CppParser::Operator)
        | (1ULL << CppParser::ReinterpretCast)
        | (1ULL << CppParser::Short)
        | (1ULL << CppParser::Signed)
        | (1ULL << CppParser::SizeOf)
        | (1ULL << CppParser::StaticCast)
        | (1ULL << CppParser::Struct)
        | (1ULL << CppParser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (CppParser::True - 65))
        | (1ULL << (CppParser::TypeName - 65))
        | (1ULL << (CppParser::Union - 65))
        | (1ULL << (CppParser::Unsigned - 65))
        | (1ULL << (CppParser::Void - 65))
        | (1ULL << (CppParser::Volatile - 65))
        | (1ULL << (CppParser::WChar - 65))
        | (1ULL << (CppParser::LeftBracket - 65))
        | (1ULL << (CppParser::LeftParenthesis - 65))
        | (1ULL << (CppParser::DoubleColon - 65))
        | (1ULL << (CppParser::Plus - 65))
        | (1ULL << (CppParser::Minus - 65))
        | (1ULL << (CppParser::Asterisk - 65))
        | (1ULL << (CppParser::Ampersand - 65))
        | (1ULL << (CppParser::VerticalBar - 65))
        | (1ULL << (CppParser::Tilde - 65))
        | (1ULL << (CppParser::ExclamationMark - 65))
        | (1ULL << (CppParser::DoublePlus - 65))
        | (1ULL << (CppParser::DoubleMinus - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
        | (1ULL << (CppParser::IntegerLiteral - 129))
        | (1ULL << (CppParser::FloatingPointLiteral - 129))
        | (1ULL << (CppParser::CharacterLiteral - 129))
        | (1ULL << (CppParser::StringLiteral - 129))
        | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
        | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
        | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
        | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
        | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
        setState(2422);
        templateArgumentList(0);
      }
      setState(2425);
      match(CppParser::GreaterThan);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2427);
      literalOperatorIdentifier();
      setState(2428);
      match(CppParser::LessThan);
      setState(2430);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::Class)
        | (1ULL << CppParser::Const)
        | (1ULL << CppParser::ConstCast)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Delete)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::DynamicCast)
        | (1ULL << CppParser::Enum)
        | (1ULL << CppParser::False)
        | (1ULL << CppParser::Float)
        | (1ULL << CppParser::Int)
        | (1ULL << CppParser::Long)
        | (1ULL << CppParser::New)
        | (1ULL << CppParser::NoExcept)
        | (1ULL << CppParser::Nullptr)
        | (1ULL << CppParser::Operator)
        | (1ULL << CppParser::ReinterpretCast)
        | (1ULL << CppParser::Short)
        | (1ULL << CppParser::Signed)
        | (1ULL << CppParser::SizeOf)
        | (1ULL << CppParser::StaticCast)
        | (1ULL << CppParser::Struct)
        | (1ULL << CppParser::This))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (CppParser::True - 65))
        | (1ULL << (CppParser::TypeName - 65))
        | (1ULL << (CppParser::Union - 65))
        | (1ULL << (CppParser::Unsigned - 65))
        | (1ULL << (CppParser::Void - 65))
        | (1ULL << (CppParser::Volatile - 65))
        | (1ULL << (CppParser::WChar - 65))
        | (1ULL << (CppParser::LeftBracket - 65))
        | (1ULL << (CppParser::LeftParenthesis - 65))
        | (1ULL << (CppParser::DoubleColon - 65))
        | (1ULL << (CppParser::Plus - 65))
        | (1ULL << (CppParser::Minus - 65))
        | (1ULL << (CppParser::Asterisk - 65))
        | (1ULL << (CppParser::Ampersand - 65))
        | (1ULL << (CppParser::VerticalBar - 65))
        | (1ULL << (CppParser::Tilde - 65))
        | (1ULL << (CppParser::ExclamationMark - 65))
        | (1ULL << (CppParser::DoublePlus - 65))
        | (1ULL << (CppParser::DoubleMinus - 65)))) != 0) || ((((_la - 129) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 129)) & ((1ULL << (CppParser::Zero - 129))
        | (1ULL << (CppParser::IntegerLiteral - 129))
        | (1ULL << (CppParser::FloatingPointLiteral - 129))
        | (1ULL << (CppParser::CharacterLiteral - 129))
        | (1ULL << (CppParser::StringLiteral - 129))
        | (1ULL << (CppParser::UserDefinedIntegerLiteral - 129))
        | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 129))
        | (1ULL << (CppParser::UserDefinedCharacterLiteral - 129))
        | (1ULL << (CppParser::UserDefinedStringLiteral - 129))
        | (1ULL << (CppParser::Identifier - 129)))) != 0)) {
        setState(2429);
        templateArgumentList(0);
      }
      setState(2432);
      match(CppParser::GreaterThan);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateArgumentListContext ------------------------------------------------------------------

CppParser::TemplateArgumentListContext::TemplateArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TemplateArgumentContext* CppParser::TemplateArgumentListContext::templateArgument() {
  return getRuleContext<CppParser::TemplateArgumentContext>(0);
}

tree::TerminalNode* CppParser::TemplateArgumentListContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}

CppParser::TemplateArgumentListContext* CppParser::TemplateArgumentListContext::templateArgumentList() {
  return getRuleContext<CppParser::TemplateArgumentListContext>(0);
}

tree::TerminalNode* CppParser::TemplateArgumentListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::TemplateArgumentListContext::getRuleIndex() const {
  return CppParser::RuleTemplateArgumentList;
}

void CppParser::TemplateArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateArgumentList(this);
}

void CppParser::TemplateArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateArgumentList(this);
}


CppParser::TemplateArgumentListContext* CppParser::templateArgumentList() {
   return templateArgumentList(0);
}

CppParser::TemplateArgumentListContext* CppParser::templateArgumentList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::TemplateArgumentListContext *_localctx = _tracker.createInstance<TemplateArgumentListContext>(_ctx, parentState);
  CppParser::TemplateArgumentListContext *previousContext = _localctx;
  size_t startState = 386;
  enterRecursionRule(_localctx, 386, CppParser::RuleTemplateArgumentList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2437);
    templateArgument();
    setState(2439);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 306, _ctx)) {
    case 1: {
      setState(2438);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2449);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 308, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateArgumentListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateArgumentList);
        setState(2441);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2442);
        match(CppParser::Comma);
        setState(2443);
        templateArgument();
        setState(2445);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 307, _ctx)) {
        case 1: {
          setState(2444);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2451);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 308, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TemplateArgumentContext ------------------------------------------------------------------

CppParser::TemplateArgumentContext::TemplateArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ConstantExpressionContext* CppParser::TemplateArgumentContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}

CppParser::TypeIdentifierContext* CppParser::TemplateArgumentContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}

CppParser::IdentifierExpressionContext* CppParser::TemplateArgumentContext::identifierExpression() {
  return getRuleContext<CppParser::IdentifierExpressionContext>(0);
}


size_t CppParser::TemplateArgumentContext::getRuleIndex() const {
  return CppParser::RuleTemplateArgument;
}

void CppParser::TemplateArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateArgument(this);
}

void CppParser::TemplateArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateArgument(this);
}

CppParser::TemplateArgumentContext* CppParser::templateArgument() {
  TemplateArgumentContext *_localctx = _tracker.createInstance<TemplateArgumentContext>(_ctx, getState());
  enterRule(_localctx, 388, CppParser::RuleTemplateArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2455);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 309, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2452);
      constantExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2453);
      typeIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2454);
      identifierExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypenameSpecifierContext ------------------------------------------------------------------

CppParser::TypenameSpecifierContext::TypenameSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::TypenameSpecifierContext::TypeName() {
  return getToken(CppParser::TypeName, 0);
}

CppParser::NestedNameSpecifierContext* CppParser::TypenameSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}

tree::TerminalNode* CppParser::TypenameSpecifierContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::TypenameSpecifierContext::simpleTemplateIdentifier() {
  return getRuleContext<CppParser::SimpleTemplateIdentifierContext>(0);
}

tree::TerminalNode* CppParser::TypenameSpecifierContext::Template() {
  return getToken(CppParser::Template, 0);
}


size_t CppParser::TypenameSpecifierContext::getRuleIndex() const {
  return CppParser::RuleTypenameSpecifier;
}

void CppParser::TypenameSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypenameSpecifier(this);
}

void CppParser::TypenameSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypenameSpecifier(this);
}

CppParser::TypenameSpecifierContext* CppParser::typenameSpecifier() {
  TypenameSpecifierContext *_localctx = _tracker.createInstance<TypenameSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 390, CppParser::RuleTypenameSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2468);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 311, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2457);
      match(CppParser::TypeName);
      setState(2458);
      nestedNameSpecifier(0);
      setState(2459);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2461);
      match(CppParser::TypeName);
      setState(2462);
      nestedNameSpecifier(0);
      setState(2464);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Template) {
        setState(2463);
        match(CppParser::Template);
      }
      setState(2466);
      simpleTemplateIdentifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitInstantiationContext ------------------------------------------------------------------

CppParser::ExplicitInstantiationContext::ExplicitInstantiationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ExplicitInstantiationContext::Template() {
  return getToken(CppParser::Template, 0);
}

CppParser::DeclarationContext* CppParser::ExplicitInstantiationContext::declaration() {
  return getRuleContext<CppParser::DeclarationContext>(0);
}

tree::TerminalNode* CppParser::ExplicitInstantiationContext::Extern() {
  return getToken(CppParser::Extern, 0);
}


size_t CppParser::ExplicitInstantiationContext::getRuleIndex() const {
  return CppParser::RuleExplicitInstantiation;
}

void CppParser::ExplicitInstantiationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitInstantiation(this);
}

void CppParser::ExplicitInstantiationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitInstantiation(this);
}

CppParser::ExplicitInstantiationContext* CppParser::explicitInstantiation() {
  ExplicitInstantiationContext *_localctx = _tracker.createInstance<ExplicitInstantiationContext>(_ctx, getState());
  enterRule(_localctx, 392, CppParser::RuleExplicitInstantiation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2471);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Extern) {
      setState(2470);
      match(CppParser::Extern);
    }
    setState(2473);
    match(CppParser::Template);
    setState(2474);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitSpecializationContext ------------------------------------------------------------------

CppParser::ExplicitSpecializationContext::ExplicitSpecializationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::ExplicitSpecializationContext::Template() {
  return getToken(CppParser::Template, 0);
}

tree::TerminalNode* CppParser::ExplicitSpecializationContext::LessThan() {
  return getToken(CppParser::LessThan, 0);
}

tree::TerminalNode* CppParser::ExplicitSpecializationContext::GreaterThan() {
  return getToken(CppParser::GreaterThan, 0);
}

CppParser::DeclarationContext* CppParser::ExplicitSpecializationContext::declaration() {
  return getRuleContext<CppParser::DeclarationContext>(0);
}


size_t CppParser::ExplicitSpecializationContext::getRuleIndex() const {
  return CppParser::RuleExplicitSpecialization;
}

void CppParser::ExplicitSpecializationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitSpecialization(this);
}

void CppParser::ExplicitSpecializationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitSpecialization(this);
}

CppParser::ExplicitSpecializationContext* CppParser::explicitSpecialization() {
  ExplicitSpecializationContext *_localctx = _tracker.createInstance<ExplicitSpecializationContext>(_ctx, getState());
  enterRule(_localctx, 394, CppParser::RuleExplicitSpecialization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2476);
    match(CppParser::Template);
    setState(2477);
    match(CppParser::LessThan);
    setState(2478);
    match(CppParser::GreaterThan);
    setState(2479);
    declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeductionGuideContext ------------------------------------------------------------------

CppParser::DeductionGuideContext::DeductionGuideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TemplateNameContext* CppParser::DeductionGuideContext::templateName() {
  return getRuleContext<CppParser::TemplateNameContext>(0);
}

tree::TerminalNode* CppParser::DeductionGuideContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ParameterDeclarationClauseContext* CppParser::DeductionGuideContext::parameterDeclarationClause() {
  return getRuleContext<CppParser::ParameterDeclarationClauseContext>(0);
}

tree::TerminalNode* CppParser::DeductionGuideContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

tree::TerminalNode* CppParser::DeductionGuideContext::Arrow() {
  return getToken(CppParser::Arrow, 0);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::DeductionGuideContext::simpleTemplateIdentifier() {
  return getRuleContext<CppParser::SimpleTemplateIdentifierContext>(0);
}

tree::TerminalNode* CppParser::DeductionGuideContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

tree::TerminalNode* CppParser::DeductionGuideContext::Explicit() {
  return getToken(CppParser::Explicit, 0);
}


size_t CppParser::DeductionGuideContext::getRuleIndex() const {
  return CppParser::RuleDeductionGuide;
}

void CppParser::DeductionGuideContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeductionGuide(this);
}

void CppParser::DeductionGuideContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeductionGuide(this);
}

CppParser::DeductionGuideContext* CppParser::deductionGuide() {
  DeductionGuideContext *_localctx = _tracker.createInstance<DeductionGuideContext>(_ctx, getState());
  enterRule(_localctx, 396, CppParser::RuleDeductionGuide);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2482);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Explicit) {
      setState(2481);
      match(CppParser::Explicit);
    }
    setState(2484);
    templateName();
    setState(2485);
    match(CppParser::LeftParenthesis);
    setState(2486);
    parameterDeclarationClause();
    setState(2487);
    match(CppParser::RightParenthesis);
    setState(2488);
    match(CppParser::Arrow);
    setState(2489);
    simpleTemplateIdentifier();
    setState(2490);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryBlockContext ------------------------------------------------------------------

CppParser::TryBlockContext::TryBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::TryBlockContext::Try() {
  return getToken(CppParser::Try, 0);
}

CppParser::CompoundStatementContext* CppParser::TryBlockContext::compoundStatement() {
  return getRuleContext<CppParser::CompoundStatementContext>(0);
}

CppParser::HandlerSequenceContext* CppParser::TryBlockContext::handlerSequence() {
  return getRuleContext<CppParser::HandlerSequenceContext>(0);
}


size_t CppParser::TryBlockContext::getRuleIndex() const {
  return CppParser::RuleTryBlock;
}

void CppParser::TryBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryBlock(this);
}

void CppParser::TryBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryBlock(this);
}

CppParser::TryBlockContext* CppParser::tryBlock() {
  TryBlockContext *_localctx = _tracker.createInstance<TryBlockContext>(_ctx, getState());
  enterRule(_localctx, 398, CppParser::RuleTryBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2492);
    match(CppParser::Try);
    setState(2493);
    compoundStatement();
    setState(2494);
    handlerSequence();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTryBlockContext ------------------------------------------------------------------

CppParser::FunctionTryBlockContext::FunctionTryBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::FunctionTryBlockContext::Try() {
  return getToken(CppParser::Try, 0);
}

CppParser::CompoundStatementContext* CppParser::FunctionTryBlockContext::compoundStatement() {
  return getRuleContext<CppParser::CompoundStatementContext>(0);
}

CppParser::HandlerSequenceContext* CppParser::FunctionTryBlockContext::handlerSequence() {
  return getRuleContext<CppParser::HandlerSequenceContext>(0);
}

CppParser::ConstructorInitializerContext* CppParser::FunctionTryBlockContext::constructorInitializer() {
  return getRuleContext<CppParser::ConstructorInitializerContext>(0);
}


size_t CppParser::FunctionTryBlockContext::getRuleIndex() const {
  return CppParser::RuleFunctionTryBlock;
}

void CppParser::FunctionTryBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionTryBlock(this);
}

void CppParser::FunctionTryBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionTryBlock(this);
}

CppParser::FunctionTryBlockContext* CppParser::functionTryBlock() {
  FunctionTryBlockContext *_localctx = _tracker.createInstance<FunctionTryBlockContext>(_ctx, getState());
  enterRule(_localctx, 400, CppParser::RuleFunctionTryBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2496);
    match(CppParser::Try);
    setState(2498);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Colon) {
      setState(2497);
      constructorInitializer();
    }
    setState(2500);
    compoundStatement();
    setState(2501);
    handlerSequence();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerSequenceContext ------------------------------------------------------------------

CppParser::HandlerSequenceContext::HandlerSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::HandlerContext* CppParser::HandlerSequenceContext::handler() {
  return getRuleContext<CppParser::HandlerContext>(0);
}

CppParser::HandlerSequenceContext* CppParser::HandlerSequenceContext::handlerSequence() {
  return getRuleContext<CppParser::HandlerSequenceContext>(0);
}


size_t CppParser::HandlerSequenceContext::getRuleIndex() const {
  return CppParser::RuleHandlerSequence;
}

void CppParser::HandlerSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandlerSequence(this);
}

void CppParser::HandlerSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandlerSequence(this);
}

CppParser::HandlerSequenceContext* CppParser::handlerSequence() {
  HandlerSequenceContext *_localctx = _tracker.createInstance<HandlerSequenceContext>(_ctx, getState());
  enterRule(_localctx, 402, CppParser::RuleHandlerSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2503);
    handler();
    setState(2505);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 315, _ctx)) {
    case 1: {
      setState(2504);
      handlerSequence();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandlerContext ------------------------------------------------------------------

CppParser::HandlerContext::HandlerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::HandlerContext::Catch() {
  return getToken(CppParser::Catch, 0);
}

tree::TerminalNode* CppParser::HandlerContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ExceptionDeclarationContext* CppParser::HandlerContext::exceptionDeclaration() {
  return getRuleContext<CppParser::ExceptionDeclarationContext>(0);
}

tree::TerminalNode* CppParser::HandlerContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

CppParser::CompoundStatementContext* CppParser::HandlerContext::compoundStatement() {
  return getRuleContext<CppParser::CompoundStatementContext>(0);
}


size_t CppParser::HandlerContext::getRuleIndex() const {
  return CppParser::RuleHandler;
}

void CppParser::HandlerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHandler(this);
}

void CppParser::HandlerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHandler(this);
}

CppParser::HandlerContext* CppParser::handler() {
  HandlerContext *_localctx = _tracker.createInstance<HandlerContext>(_ctx, getState());
  enterRule(_localctx, 404, CppParser::RuleHandler);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2507);
    match(CppParser::Catch);
    setState(2508);
    match(CppParser::LeftParenthesis);
    setState(2509);
    exceptionDeclaration();
    setState(2510);
    match(CppParser::RightParenthesis);
    setState(2511);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExceptionDeclarationContext ------------------------------------------------------------------

CppParser::ExceptionDeclarationContext::ExceptionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TypeSpecifierSequenceContext* CppParser::ExceptionDeclarationContext::typeSpecifierSequence() {
  return getRuleContext<CppParser::TypeSpecifierSequenceContext>(0);
}

CppParser::DeclaratorContext* CppParser::ExceptionDeclarationContext::declarator() {
  return getRuleContext<CppParser::DeclaratorContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::ExceptionDeclarationContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::AbstractDeclaratorContext* CppParser::ExceptionDeclarationContext::abstractDeclarator() {
  return getRuleContext<CppParser::AbstractDeclaratorContext>(0);
}

tree::TerminalNode* CppParser::ExceptionDeclarationContext::Ellipsis() {
  return getToken(CppParser::Ellipsis, 0);
}


size_t CppParser::ExceptionDeclarationContext::getRuleIndex() const {
  return CppParser::RuleExceptionDeclaration;
}

void CppParser::ExceptionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExceptionDeclaration(this);
}

void CppParser::ExceptionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExceptionDeclaration(this);
}

CppParser::ExceptionDeclarationContext* CppParser::exceptionDeclaration() {
  ExceptionDeclarationContext *_localctx = _tracker.createInstance<ExceptionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 406, CppParser::RuleExceptionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2527);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 319, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2514);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(2513);
        attributeSpecifierSequence(0);
      }
      setState(2516);
      typeSpecifierSequence();
      setState(2517);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2520);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::LeftBracket) {
        setState(2519);
        attributeSpecifierSequence(0);
      }
      setState(2522);
      typeSpecifierSequence();
      setState(2524);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DeclType || ((((_la - 82) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 82)) & ((1ULL << (CppParser::LeftBracket - 82))
        | (1ULL << (CppParser::LeftParenthesis - 82))
        | (1ULL << (CppParser::Ellipsis - 82))
        | (1ULL << (CppParser::DoubleColon - 82))
        | (1ULL << (CppParser::Asterisk - 82))
        | (1ULL << (CppParser::Ampersand - 82))
        | (1ULL << (CppParser::DoubleAmpersand - 82))
        | (1ULL << (CppParser::Identifier - 82)))) != 0)) {
        setState(2523);
        abstractDeclarator();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2526);
      match(CppParser::Ellipsis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoExceptionSpecifierContext ------------------------------------------------------------------

CppParser::NoExceptionSpecifierContext::NoExceptionSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NoExceptionSpecifierContext::NoExcept() {
  return getToken(CppParser::NoExcept, 0);
}

tree::TerminalNode* CppParser::NoExceptionSpecifierContext::LeftParenthesis() {
  return getToken(CppParser::LeftParenthesis, 0);
}

CppParser::ConstantExpressionContext* CppParser::NoExceptionSpecifierContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CppParser::NoExceptionSpecifierContext::RightParenthesis() {
  return getToken(CppParser::RightParenthesis, 0);
}

tree::TerminalNode* CppParser::NoExceptionSpecifierContext::Throw() {
  return getToken(CppParser::Throw, 0);
}


size_t CppParser::NoExceptionSpecifierContext::getRuleIndex() const {
  return CppParser::RuleNoExceptionSpecifier;
}

void CppParser::NoExceptionSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoExceptionSpecifier(this);
}

void CppParser::NoExceptionSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoExceptionSpecifier(this);
}

CppParser::NoExceptionSpecifierContext* CppParser::noExceptionSpecifier() {
  NoExceptionSpecifierContext *_localctx = _tracker.createInstance<NoExceptionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 408, CppParser::RuleNoExceptionSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2538);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 320, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2529);
      match(CppParser::NoExcept);
      setState(2530);
      match(CppParser::LeftParenthesis);
      setState(2531);
      constantExpression();
      setState(2532);
      match(CppParser::RightParenthesis);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2534);
      match(CppParser::NoExcept);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2535);
      match(CppParser::Throw);
      setState(2536);
      match(CppParser::LeftParenthesis);
      setState(2537);
      match(CppParser::RightParenthesis);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

CppParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::IdentifierListContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::IdentifierListContext* CppParser::IdentifierListContext::identifierList() {
  return getRuleContext<CppParser::IdentifierListContext>(0);
}

tree::TerminalNode* CppParser::IdentifierListContext::Comma() {
  return getToken(CppParser::Comma, 0);
}


size_t CppParser::IdentifierListContext::getRuleIndex() const {
  return CppParser::RuleIdentifierList;
}

void CppParser::IdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList(this);
}

void CppParser::IdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList(this);
}


CppParser::IdentifierListContext* CppParser::identifierList() {
   return identifierList(0);
}

CppParser::IdentifierListContext* CppParser::identifierList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, parentState);
  CppParser::IdentifierListContext *previousContext = _localctx;
  size_t startState = 410;
  enterRecursionRule(_localctx, 410, CppParser::RuleIdentifierList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2541);
    match(CppParser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(2548);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 321, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<IdentifierListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdentifierList);
        setState(2543);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2544);
        match(CppParser::Comma);
        setState(2545);
        match(CppParser::Identifier); 
      }
      setState(2550);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 321, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

CppParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::IntegerLiteralContext* CppParser::LiteralContext::integerLiteral() {
  return getRuleContext<CppParser::IntegerLiteralContext>(0);
}

tree::TerminalNode* CppParser::LiteralContext::FloatingPointLiteral() {
  return getToken(CppParser::FloatingPointLiteral, 0);
}

tree::TerminalNode* CppParser::LiteralContext::CharacterLiteral() {
  return getToken(CppParser::CharacterLiteral, 0);
}

tree::TerminalNode* CppParser::LiteralContext::StringLiteral() {
  return getToken(CppParser::StringLiteral, 0);
}

CppParser::BooleanLiteralContext* CppParser::LiteralContext::booleanLiteral() {
  return getRuleContext<CppParser::BooleanLiteralContext>(0);
}

CppParser::PointerLiteralContext* CppParser::LiteralContext::pointerLiteral() {
  return getRuleContext<CppParser::PointerLiteralContext>(0);
}

CppParser::UserDefinedLiteralContext* CppParser::LiteralContext::userDefinedLiteral() {
  return getRuleContext<CppParser::UserDefinedLiteralContext>(0);
}


size_t CppParser::LiteralContext::getRuleIndex() const {
  return CppParser::RuleLiteral;
}

void CppParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void CppParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

CppParser::LiteralContext* CppParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 412, CppParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2558);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Zero:
      case CppParser::IntegerLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(2551);
        integerLiteral();
        break;
      }

      case CppParser::FloatingPointLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(2552);
        match(CppParser::FloatingPointLiteral);
        break;
      }

      case CppParser::CharacterLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(2553);
        match(CppParser::CharacterLiteral);
        break;
      }

      case CppParser::StringLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(2554);
        match(CppParser::StringLiteral);
        break;
      }

      case CppParser::False:
      case CppParser::True: {
        enterOuterAlt(_localctx, 5);
        setState(2555);
        booleanLiteral();
        break;
      }

      case CppParser::Nullptr: {
        enterOuterAlt(_localctx, 6);
        setState(2556);
        pointerLiteral();
        break;
      }

      case CppParser::UserDefinedIntegerLiteral:
      case CppParser::UserDefinedFloatingPointLiteral:
      case CppParser::UserDefinedCharacterLiteral:
      case CppParser::UserDefinedStringLiteral: {
        enterOuterAlt(_localctx, 7);
        setState(2557);
        userDefinedLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

CppParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::IntegerLiteralContext::Zero() {
  return getToken(CppParser::Zero, 0);
}

tree::TerminalNode* CppParser::IntegerLiteralContext::IntegerLiteral() {
  return getToken(CppParser::IntegerLiteral, 0);
}


size_t CppParser::IntegerLiteralContext::getRuleIndex() const {
  return CppParser::RuleIntegerLiteral;
}

void CppParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}

void CppParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}

CppParser::IntegerLiteralContext* CppParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 414, CppParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2560);
    _la = _input->LA(1);
    if (!(_la == CppParser::Zero

    || _la == CppParser::IntegerLiteral)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

CppParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::BooleanLiteralContext::True() {
  return getToken(CppParser::True, 0);
}

tree::TerminalNode* CppParser::BooleanLiteralContext::False() {
  return getToken(CppParser::False, 0);
}


size_t CppParser::BooleanLiteralContext::getRuleIndex() const {
  return CppParser::RuleBooleanLiteral;
}

void CppParser::BooleanLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanLiteral(this);
}

void CppParser::BooleanLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanLiteral(this);
}

CppParser::BooleanLiteralContext* CppParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 416, CppParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2562);
    _la = _input->LA(1);
    if (!(_la == CppParser::False

    || _la == CppParser::True)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerLiteralContext ------------------------------------------------------------------

CppParser::PointerLiteralContext::PointerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::PointerLiteralContext::Nullptr() {
  return getToken(CppParser::Nullptr, 0);
}


size_t CppParser::PointerLiteralContext::getRuleIndex() const {
  return CppParser::RulePointerLiteral;
}

void CppParser::PointerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerLiteral(this);
}

void CppParser::PointerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerLiteral(this);
}

CppParser::PointerLiteralContext* CppParser::pointerLiteral() {
  PointerLiteralContext *_localctx = _tracker.createInstance<PointerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 418, CppParser::RulePointerLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2564);
    match(CppParser::Nullptr);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserDefinedLiteralContext ------------------------------------------------------------------

CppParser::UserDefinedLiteralContext::UserDefinedLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::UserDefinedLiteralContext::UserDefinedIntegerLiteral() {
  return getToken(CppParser::UserDefinedIntegerLiteral, 0);
}

tree::TerminalNode* CppParser::UserDefinedLiteralContext::UserDefinedFloatingPointLiteral() {
  return getToken(CppParser::UserDefinedFloatingPointLiteral, 0);
}

tree::TerminalNode* CppParser::UserDefinedLiteralContext::UserDefinedCharacterLiteral() {
  return getToken(CppParser::UserDefinedCharacterLiteral, 0);
}

tree::TerminalNode* CppParser::UserDefinedLiteralContext::UserDefinedStringLiteral() {
  return getToken(CppParser::UserDefinedStringLiteral, 0);
}


size_t CppParser::UserDefinedLiteralContext::getRuleIndex() const {
  return CppParser::RuleUserDefinedLiteral;
}

void CppParser::UserDefinedLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserDefinedLiteral(this);
}

void CppParser::UserDefinedLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserDefinedLiteral(this);
}

CppParser::UserDefinedLiteralContext* CppParser::userDefinedLiteral() {
  UserDefinedLiteralContext *_localctx = _tracker.createInstance<UserDefinedLiteralContext>(_ctx, getState());
  enterRule(_localctx, 420, CppParser::RuleUserDefinedLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2566);
    _la = _input->LA(1);
    if (!(((((_la - 134) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 134)) & ((1ULL << (CppParser::UserDefinedIntegerLiteral - 134))
      | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 134))
      | (1ULL << (CppParser::UserDefinedCharacterLiteral - 134))
      | (1ULL << (CppParser::UserDefinedStringLiteral - 134)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CppParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 11: return nestedNameSpecifierSempred(dynamic_cast<NestedNameSpecifierContext *>(context), predicateIndex);
    case 17: return captureListSempred(dynamic_cast<CaptureListContext *>(context), predicateIndex);
    case 23: return postfixExpressionSempred(dynamic_cast<PostfixExpressionContext *>(context), predicateIndex);
    case 32: return noPointerNewDeclaratorSempred(dynamic_cast<NoPointerNewDeclaratorContext *>(context), predicateIndex);
    case 37: return pointerManipulationExpressionSempred(dynamic_cast<PointerManipulationExpressionContext *>(context), predicateIndex);
    case 38: return multiplicativeExpressionSempred(dynamic_cast<MultiplicativeExpressionContext *>(context), predicateIndex);
    case 39: return additiveExpressionSempred(dynamic_cast<AdditiveExpressionContext *>(context), predicateIndex);
    case 40: return shiftExpressionSempred(dynamic_cast<ShiftExpressionContext *>(context), predicateIndex);
    case 41: return relationalExpressionSempred(dynamic_cast<RelationalExpressionContext *>(context), predicateIndex);
    case 42: return equalityExpressionSempred(dynamic_cast<EqualityExpressionContext *>(context), predicateIndex);
    case 43: return andExpressionSempred(dynamic_cast<AndExpressionContext *>(context), predicateIndex);
    case 44: return exclusiveOrExpressionSempred(dynamic_cast<ExclusiveOrExpressionContext *>(context), predicateIndex);
    case 45: return inclusiveOrExpressionSempred(dynamic_cast<InclusiveOrExpressionContext *>(context), predicateIndex);
    case 46: return logicalAndExpressionSempred(dynamic_cast<LogicalAndExpressionContext *>(context), predicateIndex);
    case 47: return logicalOrExpressionSempred(dynamic_cast<LogicalOrExpressionContext *>(context), predicateIndex);
    case 52: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 60: return statementSequenceSempred(dynamic_cast<StatementSequenceContext *>(context), predicateIndex);
    case 68: return declarationSequenceSempred(dynamic_cast<DeclarationSequenceContext *>(context), predicateIndex);
    case 95: return enumeratorListSempred(dynamic_cast<EnumeratorListContext *>(context), predicateIndex);
    case 107: return usingDeclaratorListSempred(dynamic_cast<UsingDeclaratorListContext *>(context), predicateIndex);
    case 112: return attributeSpecifierSequenceSempred(dynamic_cast<AttributeSpecifierSequenceContext *>(context), predicateIndex);
    case 116: return attributeListSempred(dynamic_cast<AttributeListContext *>(context), predicateIndex);
    case 122: return balancedTokenSequenceSempred(dynamic_cast<BalancedTokenSequenceContext *>(context), predicateIndex);
    case 124: return initializerDeclaratorListSempred(dynamic_cast<InitializerDeclaratorListContext *>(context), predicateIndex);
    case 128: return noPointerDeclaratorSempred(dynamic_cast<NoPointerDeclaratorContext *>(context), predicateIndex);
    case 141: return noPointerAbstractDeclaratorSempred(dynamic_cast<NoPointerAbstractDeclaratorContext *>(context), predicateIndex);
    case 143: return noPointerAbstractPackDeclaratorSempred(dynamic_cast<NoPointerAbstractPackDeclaratorContext *>(context), predicateIndex);
    case 145: return parameterDeclarationListSempred(dynamic_cast<ParameterDeclarationListContext *>(context), predicateIndex);
    case 156: return initializerListSempred(dynamic_cast<InitializerListContext *>(context), predicateIndex);
    case 166: return memberDeclaratorListSempred(dynamic_cast<MemberDeclaratorListContext *>(context), predicateIndex);
    case 168: return virtualSpecifierSequenceSempred(dynamic_cast<VirtualSpecifierSequenceContext *>(context), predicateIndex);
    case 172: return baseSpecifierListSempred(dynamic_cast<BaseSpecifierListContext *>(context), predicateIndex);
    case 180: return memberInitializerListSempred(dynamic_cast<MemberInitializerListContext *>(context), predicateIndex);
    case 187: return templateParameterListSempred(dynamic_cast<TemplateParameterListContext *>(context), predicateIndex);
    case 193: return templateArgumentListSempred(dynamic_cast<TemplateArgumentListContext *>(context), predicateIndex);
    case 205: return identifierListSempred(dynamic_cast<IdentifierListContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CppParser::nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::captureListSempred(CaptureListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 18);
    case 4: return precpred(_ctx, 17);
    case 5: return precpred(_ctx, 12);
    case 6: return precpred(_ctx, 11);
    case 7: return precpred(_ctx, 10);
    case 8: return precpred(_ctx, 9);
    case 9: return precpred(_ctx, 8);
    case 10: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

bool CppParser::noPointerNewDeclaratorSempred(NoPointerNewDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::pointerManipulationExpressionSempred(PointerManipulationExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 2);
    case 13: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 14: return precpred(_ctx, 3);
    case 15: return precpred(_ctx, 2);
    case 16: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 17: return precpred(_ctx, 2);
    case 18: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::shiftExpressionSempred(ShiftExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 19: return precpred(_ctx, 2);
    case 20: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::relationalExpressionSempred(RelationalExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 21: return precpred(_ctx, 4);
    case 22: return precpred(_ctx, 3);
    case 23: return precpred(_ctx, 2);
    case 24: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 25: return precpred(_ctx, 2);
    case 26: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::andExpressionSempred(AndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 27: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::exclusiveOrExpressionSempred(ExclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 28: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::inclusiveOrExpressionSempred(InclusiveOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 29: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::logicalAndExpressionSempred(LogicalAndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 30: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::logicalOrExpressionSempred(LogicalOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 31: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 32: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::statementSequenceSempred(StatementSequenceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 33: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::declarationSequenceSempred(DeclarationSequenceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 34: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::enumeratorListSempred(EnumeratorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 35: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::usingDeclaratorListSempred(UsingDeclaratorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 36: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::attributeSpecifierSequenceSempred(AttributeSpecifierSequenceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 37: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::attributeListSempred(AttributeListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 38: return precpred(_ctx, 3);
    case 39: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::balancedTokenSequenceSempred(BalancedTokenSequenceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 40: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::initializerDeclaratorListSempred(InitializerDeclaratorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 41: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::noPointerDeclaratorSempred(NoPointerDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 42: return precpred(_ctx, 3);
    case 43: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CppParser::noPointerAbstractDeclaratorSempred(NoPointerAbstractDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 44: return precpred(_ctx, 4);
    case 45: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CppParser::noPointerAbstractPackDeclaratorSempred(NoPointerAbstractPackDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 46: return precpred(_ctx, 3);
    case 47: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CppParser::parameterDeclarationListSempred(ParameterDeclarationListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 48: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::initializerListSempred(InitializerListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 49: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::memberDeclaratorListSempred(MemberDeclaratorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 50: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::virtualSpecifierSequenceSempred(VirtualSpecifierSequenceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 51: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::baseSpecifierListSempred(BaseSpecifierListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 52: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::memberInitializerListSempred(MemberInitializerListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 53: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::templateParameterListSempred(TemplateParameterListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 54: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::templateArgumentListSempred(TemplateArgumentListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 55: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::identifierListSempred(IdentifierListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 56: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CppParser::_decisionToDFA;
atn::PredictionContextCache CppParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CppParser::_atn;
std::vector<uint16_t> CppParser::_serializedATN;

std::vector<std::string> CppParser::_ruleNames = {
  "typedefName", "namespaceName", "namespaceAlias", "className", "enumName", 
  "templateName", "translationUnit", "primaryExpression", "identifierExpression", 
  "unqualifiedIdentifier", "qualifiedIdentifier", "nestedNameSpecifier", 
  "lambdaExpression", "lambdaIntroducer", "lambdaDeclarator", "lambdaCapture", 
  "captureDefault", "captureList", "capture", "simpleCapture", "initializerCapture", 
  "foldExpression", "foldOperator", "postfixExpression", "expressionList", 
  "pseudoDestructorName", "unaryExpression", "unaryOperator", "newExpression", 
  "newPlacement", "newTypeIdentifier", "newDeclarator", "noPointerNewDeclarator", 
  "newInitializer", "deleteExpression", "noExceptionExpression", "castExpression", 
  "pointerManipulationExpression", "multiplicativeExpression", "additiveExpression", 
  "shiftExpression", "relationalExpression", "equalityExpression", "andExpression", 
  "exclusiveOrExpression", "inclusiveOrExpression", "logicalAndExpression", 
  "logicalOrExpression", "conditionalExpression", "throwExpression", "assignmentExpression", 
  "assignmentOperator", "expression", "constantExpression", "statement", 
  "initializerStatement", "condition", "labeledStatement", "expressionStatement", 
  "compoundStatement", "statementSequence", "selectionStatement", "iterationStatement", 
  "forInitializerStatement", "forRangeDeclaration", "forRangeInitializer", 
  "jumpStatement", "declarationStatement", "declarationSequence", "declaration", 
  "blockDeclaration", "noDeclarationSpecifierFunctionDeclaration", "aliasDeclaration", 
  "simpleDeclaration", "staticAssertDeclaration", "emptyDeclaration", "attributeDeclaration", 
  "declarationSpecifier", "declarationSpecifierSequence", "storageClassSpecifier", 
  "functionSpecifier", "typeSpecifier", "typeSpecifierSequence", "definingTypeSpecifier", 
  "definingTypeSpecifierSequence", "simpleTypeSpecifier", "typeName", "declarationTypeSpecifier", 
  "elaboratedTypeSpecifier", "enumSpecifier", "enumHead", "enumHeadName", 
  "opaqueEnumDeclaration", "enumKey", "enumBase", "enumeratorList", "enumeratorDefinition", 
  "enumerator", "namespaceDefinition", "namedNamespaceDefinition", "unnamedNamespaceDefinition", 
  "nestedNamespaceDefinition", "enclosingNamespaceSpecifier", "namespaceBody", 
  "namespaceAliasDefinition", "qualifiedNamespaceSpecifier", "usingDeclaration", 
  "usingDeclaratorList", "usingDeclarator", "usingDirective", "asmDefinition", 
  "linkageSpecification", "attributeSpecifierSequence", "attributeSpecifier", 
  "alignmentSpecifier", "attributeUsingPrefix", "attributeList", "attribute", 
  "attributeToken", "attributeScopedToken", "attributeNamespace", "attributeArgumentClause", 
  "balancedTokenSequence", "balancedToken", "initializerDeclaratorList", 
  "initializerDeclarator", "declarator", "pointerDeclarator", "noPointerDeclarator", 
  "parametersAndQualifiers", "functionParameters", "functionQualifiers", 
  "trailingReturnType", "pointerOperator", "constVolatileQualifierSequence", 
  "constVolatileQualifier", "referenceQualifier", "typeIdentifier", "definingTypeIdentifier", 
  "abstractDeclarator", "pointerAbstractDeclarator", "noPointerAbstractDeclarator", 
  "abstractPackDeclarator", "noPointerAbstractPackDeclarator", "parameterDeclarationClause", 
  "parameterDeclarationList", "parameterDeclaration", "functionDefinition", 
  "functionDeclarator", "functionBody", "regularFunctionBody", "explicitlyDefaultedFunction", 
  "deletedFunction", "initializer", "braceOrEqualInitializer", "initializerClause", 
  "initializerList", "bracedInitializerList", "expressionOrBracedInitializerList", 
  "classSpecifier", "classHead", "classHeadName", "classVirtualSpecifier", 
  "classKey", "memberSpecification", "memberDeclaration", "memberDeclaratorList", 
  "memberDeclarator", "virtualSpecifierSequence", "virtualSpecifier", "pureSpecifier", 
  "baseClause", "baseSpecifierList", "baseSpecifier", "classOrDecltype", 
  "accessSpecifier", "conversionFunctionIdentifier", "conversionTypeIdentifier", 
  "conversionDeclarator", "constructorInitializer", "memberInitializerList", 
  "memberInitializer", "memberInitializerIdentifier", "operatorFunctionIdentifier", 
  "anyOperator", "literalOperatorIdentifier", "templateDeclaration", "templateParameterList", 
  "templateParameter", "typeParameter", "typeParameterKey", "simpleTemplateIdentifier", 
  "templateIdentifier", "templateArgumentList", "templateArgument", "typenameSpecifier", 
  "explicitInstantiation", "explicitSpecialization", "deductionGuide", "tryBlock", 
  "functionTryBlock", "handlerSequence", "handler", "exceptionDeclaration", 
  "noExceptionSpecifier", "identifierList", "literal", "integerLiteral", 
  "booleanLiteral", "pointerLiteral", "userDefinedLiteral"
};

std::vector<std::string> CppParser::_literalNames = {
  "", "", "", "", "", "'alignas'", "'alignof'", "'asm'", "'auto'", "'bool'", 
  "'break'", "'case'", "'catch'", "'char'", "'char16_t'", "'char32_t'", 
  "'class'", "'const'", "'constexpr'", "'const_cast'", "'continue'", "'decltype'", 
  "'default'", "'delete'", "'do'", "'double'", "'dynamic_cast'", "'else'", 
  "'enum'", "'explicit'", "'export'", "'extern'", "'false'", "'float'", 
  "'for'", "'friend'", "'goto'", "'if'", "'inline'", "'int'", "'long'", 
  "'mutable'", "'namespace'", "'new'", "'noexcept'", "'nullptr'", "'operator'", 
  "'private'", "'protected'", "'public'", "'register'", "'reinterpret_cast'", 
  "'return'", "'short'", "'signed'", "'sizeof'", "'static'", "'static_assert'", 
  "'static_cast'", "'struct'", "'switch'", "'template'", "'this'", "'thread_local'", 
  "'throw'", "'true'", "'try'", "'typedef'", "'typeid'", "'typename'", "'union'", 
  "'unsigned'", "'using'", "'virtual'", "'void'", "'volatile'", "'wchar_t'", 
  "'while'", "'override'", "'final'", "'{'", "'}'", "'['", "']'", "'('", 
  "')'", "';'", "':'", "'...'", "'?'", "'::'", "'.'", "'.*'", "'+'", "'-'", 
  "'*'", "'/'", "'%'", "'^'", "'&'", "'|'", "'~'", "'!'", "'='", "'<'", 
  "'>'", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", 
  "'<<'", "'>>'", "'<<='", "'>>='", "'=='", "'!='", "'<='", "'>='", "'&&'", 
  "'||'", "'++'", "'--'", "','", "'->*'", "'->'", "'0'"
};

std::vector<std::string> CppParser::_symbolicNames = {
  "", "BlockComment", "LineComment", "Whitespace", "Newline", "AlignAs", 
  "AlignOf", "Asm", "Auto", "Bool", "Break", "Case", "Catch", "Char", "Char16", 
  "Char32", "Class", "Const", "ConstExpr", "ConstCast", "Continue", "DeclType", 
  "Default", "Delete", "Do", "Double", "DynamicCast", "Else", "Enum", "Explicit", 
  "Export", "Extern", "False", "Float", "For", "Friend", "GoTo", "If", "Inline", 
  "Int", "Long", "Mutable", "Namespace", "New", "NoExcept", "Nullptr", "Operator", 
  "Private", "Protected", "Public", "Register", "ReinterpretCast", "Return", 
  "Short", "Signed", "SizeOf", "Static", "StaticAssert", "StaticCast", "Struct", 
  "Switch", "Template", "This", "ThreadLocal", "Throw", "True", "Try", "TypeDef", 
  "TypeId", "TypeName", "Union", "Unsigned", "Using", "Virtual", "Void", 
  "Volatile", "WChar", "While", "Override", "Final", "LeftBrace", "RightBrace", 
  "LeftBracket", "RightBracket", "LeftParenthesis", "RightParenthesis", 
  "Semicolon", "Colon", "Ellipsis", "QuestionMark", "DoubleColon", "Period", 
  "PeriodAsterisk", "Plus", "Minus", "Asterisk", "ForwardSlash", "Percent", 
  "Caret", "Ampersand", "VerticalBar", "Tilde", "ExclamationMark", "Equal", 
  "LessThan", "GreaterThan", "PlusEqual", "MinusEqual", "AsteriskEqual", 
  "ForwardSlashEqual", "PercentEqual", "CaretEqual", "AmpersandEqual", "VerticalBarEqual", 
  "DoubleLessThan", "DoubleGreaterThan", "DoubleLessThanEqual", "DoubleGreaterThanEqual", 
  "DoubleEqual", "ExclamationMarkEqual", "LessThanEqual", "GreaterThanEqual", 
  "DoubleAmpersand", "DoubleVerticalBar", "DoublePlus", "DoubleMinus", "Comma", 
  "ArrowAsterisk", "Arrow", "Zero", "IntegerLiteral", "FloatingPointLiteral", 
  "CharacterLiteral", "StringLiteral", "UserDefinedIntegerLiteral", "UserDefinedFloatingPointLiteral", 
  "UserDefinedCharacterLiteral", "UserDefinedStringLiteral", "Identifier"
};

dfa::Vocabulary CppParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CppParser::_tokenNames;

CppParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x8c, 0xa0b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 
       0x9, 0xad, 0x4, 0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 
       0x9, 0xb0, 0x4, 0xb1, 0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 
       0x9, 0xb3, 0x4, 0xb4, 0x9, 0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 
       0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 
       0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 0xbb, 0x9, 0xbb, 0x4, 0xbc, 
       0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 0x9, 0xbe, 0x4, 0xbf, 
       0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 0xc1, 0x4, 0xc2, 
       0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 0x4, 0xc5, 
       0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 0xc8, 
       0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x4, 0xca, 0x9, 0xca, 0x4, 0xcb, 
       0x9, 0xcb, 0x4, 0xcc, 0x9, 0xcc, 0x4, 0xcd, 0x9, 0xcd, 0x4, 0xce, 
       0x9, 0xce, 0x4, 0xcf, 0x9, 0xcf, 0x4, 0xd0, 0x9, 0xd0, 0x4, 0xd1, 
       0x9, 0xd1, 0x4, 0xd2, 0x9, 0xd2, 0x4, 0xd3, 0x9, 0xd3, 0x4, 0xd4, 
       0x9, 0xd4, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x1ad, 
       0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x1b3, 
       0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x5, 
       0x8, 0x1ba, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x5, 0x9, 0x1c7, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x1cb, 0xa, 
       0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x1d6, 0xa, 0xb, 0x3, 0xc, 
       0x3, 0xc, 0x5, 0xc, 0x1da, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1e9, 0xa, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1f0, 0xa, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1f5, 0xa, 0xd, 0xc, 
       0xd, 0xe, 0xd, 0x1f8, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1fc, 
       0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x202, 
       0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x5, 0x10, 0x20a, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x20d, 0xa, 
       0x10, 0x3, 0x10, 0x5, 0x10, 0x210, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 
       0x213, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x5, 0x11, 0x21b, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x222, 0xa, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x228, 0xa, 0x13, 
       0x7, 0x13, 0x22a, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x22d, 0xb, 0x13, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x5, 0x15, 0x233, 0xa, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x239, 
       0xa, 0x15, 0x3, 0x16, 0x5, 0x16, 0x23c, 0xa, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x255, 0xa, 0x17, 
       0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x5, 0x19, 0x25e, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x265, 0xa, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x295, 0xa, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x5, 0x19, 0x29f, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x2a5, 0xa, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x2ab, 0xa, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x2b8, 0xa, 
       0x19, 0xc, 0x19, 0xe, 0x19, 0x2bb, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
       0x3, 0x1b, 0x5, 0x1b, 0x2c0, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x2d2, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x2f0, 0xa, 0x1c, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1e, 0x5, 0x1e, 0x2f5, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x5, 0x1e, 0x2f9, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x2fd, 
       0xa, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x300, 0xa, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x5, 0x1e, 0x304, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x5, 0x1e, 0x30a, 0xa, 0x1e, 0x5, 0x1e, 0x30c, 0xa, 0x1e, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 
       0x5, 0x20, 0x314, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x318, 
       0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x321, 0xa, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x328, 0xa, 0x22, 
       0x7, 0x22, 0x32a, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x32d, 0xb, 0x22, 
       0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x331, 0xa, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x5, 0x23, 0x335, 0xa, 0x23, 0x3, 0x24, 0x5, 0x24, 0x338, 0xa, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x33d, 0xa, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x343, 0xa, 
       0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 
       0x26, 0x350, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 
       0x35b, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x35e, 0xb, 0x27, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 
       0x36c, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x36f, 0xb, 0x28, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x37a, 0xa, 0x29, 0xc, 0x29, 0xe, 
       0x29, 0x37d, 0xb, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 
       0x388, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x38b, 0xb, 0x2a, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x39c, 0xa, 0x2b, 0xc, 0x2b, 0xe, 
       0x2b, 0x39f, 0xb, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 
       0x3aa, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x3ad, 0xb, 0x2c, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x7, 0x2d, 
       0x3b5, 0xa, 0x2d, 0xc, 0x2d, 0xe, 0x2d, 0x3b8, 0xb, 0x2d, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 
       0x3c0, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x3c3, 0xb, 0x2e, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 
       0x3cb, 0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x3ce, 0xb, 0x2f, 0x3, 0x30, 
       0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 
       0x3d6, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x3d9, 0xb, 0x30, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 
       0x3e1, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x3e4, 0xb, 0x31, 0x3, 0x32, 
       0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
       0x5, 0x32, 0x3ed, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x3f1, 
       0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
       0x3, 0x34, 0x5, 0x34, 0x3f9, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 
       0x36, 0x403, 0xa, 0x36, 0xc, 0x36, 0xe, 0x36, 0x406, 0xb, 0x36, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x40c, 0xa, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x410, 0xa, 0x38, 0x3, 0x38, 0x3, 
       0x38, 0x5, 0x38, 0x414, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 
       0x418, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x41c, 0xa, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x421, 0xa, 0x38, 0x3, 
       0x38, 0x5, 0x38, 0x424, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 
       0x428, 0xa, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x42c, 0xa, 0x3a, 
       0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x432, 0xa, 
       0x3a, 0x3, 0x3b, 0x5, 0x3b, 0x435, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
       0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x43b, 0xa, 0x3b, 0x3, 0x3b, 0x3, 
       0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x443, 
       0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x448, 0xa, 
       0x3b, 0x3, 0x3c, 0x5, 0x3c, 0x44b, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x451, 0xa, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x7, 
       0x3e, 0x45a, 0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 0x45d, 0xb, 0x3e, 0x3, 
       0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x461, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
       0x5, 0x3f, 0x465, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
       0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x46d, 0xa, 0x3f, 0x3, 0x3f, 
       0x3, 0x3f, 0x5, 0x3f, 0x471, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
       0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
       0x3f, 0x5, 0x3f, 0x47c, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
       0x3, 0x3f, 0x5, 0x3f, 0x482, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x496, 0xa, 0x40, 
       0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x49a, 0xa, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x4a7, 0xa, 0x40, 
       0x3, 0x41, 0x5, 0x41, 0x4aa, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
       0x41, 0x3, 0x41, 0x5, 0x41, 0x4b0, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x5, 0x41, 0x4b4, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
       0x41, 0x5, 0x41, 0x4ba, 0xa, 0x41, 0x3, 0x42, 0x5, 0x42, 0x4bd, 0xa, 
       0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 
       0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 
       0x44, 0x4ca, 0xa, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
       0x5, 0x44, 0x4d0, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 
       0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x7, 0x46, 0x4d9, 0xa, 0x46, 
       0xc, 0x46, 0xe, 0x46, 0x4dc, 0xb, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 
       0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
       0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x4e9, 0xa, 0x47, 0x3, 0x48, 
       0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
       0x3, 0x48, 0x5, 0x48, 0x4f3, 0xa, 0x48, 0x3, 0x49, 0x5, 0x49, 0x4f6, 
       0xa, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 
       0x3, 0x4a, 0x5, 0x4a, 0x4fe, 0xa, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x506, 0xa, 0x4b, 
       0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
       0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x510, 0xa, 0x4b, 0x3, 0x4b, 0x3, 
       0x4b, 0x5, 0x4b, 0x514, 0xa, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
       0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x51c, 0xa, 0x4b, 0x3, 
       0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
       0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
       0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x52c, 0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 
       0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x53a, 0xa, 
       0x4f, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x53e, 0xa, 0x50, 0x3, 0x50, 
       0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x543, 0xa, 0x50, 0x3, 0x51, 0x3, 
       0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 
       0x53, 0x5, 0x53, 0x54d, 0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 
       0x551, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x556, 
       0xa, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x55b, 0xa, 
       0x55, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x55f, 0xa, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x564, 0xa, 0x56, 0x3, 0x57, 0x5, 
       0x57, 0x567, 0xa, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
       0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x56f, 0xa, 0x57, 0x3, 0x57, 0x3, 
       0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 
       0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 
       0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x581, 0xa, 0x57, 0x3, 0x58, 
       0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x587, 0xa, 0x58, 0x3, 
       0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 
       0x59, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x592, 0xa, 0x59, 0x3, 0x5a, 
       0x3, 0x5a, 0x5, 0x5a, 0x596, 0xa, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x599, 
       0xa, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 
       0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x5a3, 0xa, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x5a9, 0xa, 0x5a, 
       0x3, 0x5a, 0x5, 0x5a, 0x5ac, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
       0x5b, 0x5, 0x5b, 0x5b1, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 
       0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 0x5b, 
       0x5bb, 0xa, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x5bf, 0xa, 0x5c, 
       0x3, 0x5c, 0x5, 0x5c, 0x5c2, 0xa, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x5c5, 
       0xa, 0x5c, 0x3, 0x5d, 0x5, 0x5d, 0x5c8, 0xa, 0x5d, 0x3, 0x5d, 0x3, 
       0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x5ce, 0xa, 0x5e, 0x3, 0x5e, 
       0x5, 0x5e, 0x5d1, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x5d5, 
       0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
       0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x5de, 0xa, 0x5f, 0x3, 0x60, 0x3, 
       0x60, 0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
       0x61, 0x3, 0x61, 0x7, 0x61, 0x5e9, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 
       0x5ec, 0xb, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
       0x62, 0x5, 0x62, 0x5f3, 0xa, 0x62, 0x3, 0x63, 0x3, 0x63, 0x5, 0x63, 
       0x5f7, 0xa, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 0x5fc, 
       0xa, 0x64, 0x3, 0x65, 0x5, 0x65, 0x5ff, 0xa, 0x65, 0x3, 0x65, 0x3, 
       0x65, 0x5, 0x65, 0x603, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 
       0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x5, 0x66, 0x60b, 0xa, 0x66, 0x3, 
       0x66, 0x3, 0x66, 0x5, 0x66, 0x60f, 0xa, 0x66, 0x3, 0x66, 0x3, 0x66, 
       0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
       0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x68, 0x3, 0x68, 
       0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x5, 0x69, 0x623, 0xa, 
       0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
       0x6a, 0x3, 0x6b, 0x5, 0x6b, 0x62c, 0xa, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
       0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 
       0x3, 0x6d, 0x5, 0x6d, 0x637, 0xa, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 
       0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x63d, 0xa, 0x6d, 0x7, 0x6d, 0x63f, 0xa, 
       0x6d, 0xc, 0x6d, 0xe, 0x6d, 0x642, 0xb, 0x6d, 0x3, 0x6e, 0x5, 0x6e, 
       0x645, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6f, 0x5, 
       0x6f, 0x64b, 0xa, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 
       0x650, 0xa, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 0x5, 
       0x70, 0x656, 0xa, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
       0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 
       0x5, 0x71, 0x662, 0xa, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 
       0x71, 0x5, 0x71, 0x668, 0xa, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 
       0x3, 0x72, 0x3, 0x72, 0x7, 0x72, 0x66f, 0xa, 0x72, 0xc, 0x72, 0xe, 
       0x72, 0x672, 0xb, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 
       0x677, 0xa, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 
       0x73, 0x5, 0x73, 0x67e, 0xa, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 
       0x3, 0x74, 0x5, 0x74, 0x684, 0xa, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 
       0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x68c, 0xa, 0x74, 
       0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x690, 0xa, 0x74, 0x3, 0x75, 0x3, 
       0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x698, 
       0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x69d, 0xa, 
       0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x6a2, 0xa, 0x76, 
       0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x7, 0x76, 
       0x6a9, 0xa, 0x76, 0xc, 0x76, 0xe, 0x76, 0x6ac, 0xb, 0x76, 0x3, 0x77, 
       0x3, 0x77, 0x5, 0x77, 0x6b0, 0xa, 0x77, 0x3, 0x78, 0x3, 0x78, 0x5, 
       0x78, 0x6b4, 0xa, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 
       0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x6be, 0xa, 
       0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
       0x7c, 0x3, 0x7c, 0x7, 0x7c, 0x6c7, 0xa, 0x7c, 0xc, 0x7c, 0xe, 0x7c, 
       0x6ca, 0xb, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x6ce, 0xa, 0x7d, 
       0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x6d3, 0xa, 0x7d, 0x3, 
       0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x6d8, 0xa, 0x7d, 0x3, 0x7d, 
       0x3, 0x7d, 0x5, 0x7d, 0x6dc, 0xa, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 
       0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x7, 0x7e, 0x6e4, 0xa, 0x7e, 
       0xc, 0x7e, 0xe, 0x7e, 0x6e7, 0xb, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x5, 
       0x7f, 0x6eb, 0xa, 0x7f, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x6ef, 0xa, 
       0x80, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x3, 0x82, 0x5, 
       0x82, 0x6f6, 0xa, 0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x6fa, 0xa, 
       0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x700, 
       0xa, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x705, 0xa, 
       0x82, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x709, 0xa, 0x82, 0x3, 0x82, 
       0x3, 0x82, 0x7, 0x82, 0x70d, 0xa, 0x82, 0xc, 0x82, 0xe, 0x82, 0x710, 
       0xb, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x84, 0x3, 0x84, 
       0x3, 0x84, 0x3, 0x84, 0x3, 0x85, 0x5, 0x85, 0x71a, 0xa, 0x85, 0x3, 
       0x85, 0x5, 0x85, 0x71d, 0xa, 0x85, 0x3, 0x85, 0x5, 0x85, 0x720, 0xa, 
       0x85, 0x3, 0x85, 0x5, 0x85, 0x723, 0xa, 0x85, 0x3, 0x86, 0x3, 0x86, 
       0x3, 0x86, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x72a, 0xa, 0x87, 0x3, 
       0x87, 0x5, 0x87, 0x72d, 0xa, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 
       0x731, 0xa, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x735, 0xa, 0x87, 
       0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x73a, 0xa, 0x87, 0x3, 
       0x87, 0x5, 0x87, 0x73d, 0xa, 0x87, 0x5, 0x87, 0x73f, 0xa, 0x87, 0x3, 
       0x88, 0x3, 0x88, 0x5, 0x88, 0x743, 0xa, 0x88, 0x3, 0x89, 0x3, 0x89, 
       0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 
       0x74c, 0xa, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x750, 0xa, 0x8c, 
       0x3, 0x8d, 0x3, 0x8d, 0x5, 0x8d, 0x754, 0xa, 0x8d, 0x3, 0x8d, 0x3, 
       0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x5, 0x8d, 0x75a, 0xa, 0x8d, 0x3, 0x8e, 
       0x3, 0x8e, 0x3, 0x8e, 0x5, 0x8e, 0x75f, 0xa, 0x8e, 0x5, 0x8e, 0x761, 
       0xa, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 
       0x767, 0xa, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x76b, 0xa, 0x8f, 
       0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x771, 0xa, 
       0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 
       0x8f, 0x778, 0xa, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x77c, 0xa, 
       0x8f, 0x7, 0x8f, 0x77e, 0xa, 0x8f, 0xc, 0x8f, 0xe, 0x8f, 0x781, 0xb, 
       0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x5, 0x90, 0x787, 
       0xa, 0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 
       0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x5, 0x91, 0x791, 0xa, 0x91, 0x3, 
       0x91, 0x3, 0x91, 0x5, 0x91, 0x795, 0xa, 0x91, 0x7, 0x91, 0x797, 0xa, 
       0x91, 0xc, 0x91, 0xe, 0x91, 0x79a, 0xb, 0x91, 0x3, 0x92, 0x5, 0x92, 
       0x79d, 0xa, 0x92, 0x3, 0x92, 0x5, 0x92, 0x7a0, 0xa, 0x92, 0x3, 0x92, 
       0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 0x7a6, 0xa, 0x92, 0x3, 
       0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x7, 
       0x93, 0x7ae, 0xa, 0x93, 0xc, 0x93, 0xe, 0x93, 0x7b1, 0xb, 0x93, 0x3, 
       0x94, 0x5, 0x94, 0x7b4, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 
       0x3, 0x94, 0x5, 0x94, 0x7ba, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 
       0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x7c2, 0xa, 0x94, 
       0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x7c6, 0xa, 0x94, 0x3, 0x94, 0x5, 
       0x94, 0x7c9, 0xa, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x7cd, 0xa, 
       0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x7d2, 0xa, 0x94, 
       0x3, 0x95, 0x5, 0x95, 0x7d5, 0xa, 0x95, 0x3, 0x95, 0x5, 0x95, 0x7d8, 
       0xa, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x7dc, 0xa, 0x95, 0x3, 
       0x95, 0x3, 0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x5, 
       0x96, 0x7e4, 0xa, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 
       0x5, 0x97, 0x7ea, 0xa, 0x97, 0x3, 0x98, 0x5, 0x98, 0x7ed, 0xa, 0x98, 
       0x3, 0x98, 0x3, 0x98, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 
       0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 
       0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x7fe, 0xa, 0x9c, 0x3, 
       0x9d, 0x3, 0x9d, 0x5, 0x9d, 0x802, 0xa, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 
       0x3, 0x9e, 0x5, 0x9e, 0x807, 0xa, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 
       0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x80d, 0xa, 0x9e, 0x7, 0x9e, 0x80f, 0xa, 
       0x9e, 0xc, 0x9e, 0xe, 0x9e, 0x812, 0xb, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 
       0x3, 0x9f, 0x5, 0x9f, 0x817, 0xa, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 
       0x9f, 0x3, 0x9f, 0x5, 0x9f, 0x81d, 0xa, 0x9f, 0x3, 0xa0, 0x3, 0xa0, 
       0x5, 0xa0, 0x821, 0xa, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x5, 
       0xa1, 0x826, 0xa, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa2, 0x3, 0xa2, 
       0x5, 0xa2, 0x82c, 0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x830, 
       0xa, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x833, 0xa, 0xa2, 0x3, 0xa2, 0x3, 
       0xa2, 0x5, 0xa2, 0x837, 0xa, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x83a, 0xa, 
       0xa2, 0x5, 0xa2, 0x83c, 0xa, 0xa2, 0x3, 0xa3, 0x5, 0xa3, 0x83f, 0xa, 
       0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa5, 0x3, 
       0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x5, 0xa6, 0x849, 0xa, 0xa6, 0x3, 0xa6, 
       0x3, 0xa6, 0x3, 0xa6, 0x5, 0xa6, 0x84e, 0xa, 0xa6, 0x5, 0xa6, 0x850, 
       0xa, 0xa6, 0x3, 0xa7, 0x5, 0xa7, 0x853, 0xa, 0xa7, 0x3, 0xa7, 0x5, 
       0xa7, 0x856, 0xa, 0xa7, 0x3, 0xa7, 0x5, 0xa7, 0x859, 0xa, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
       0xa7, 0x3, 0xa7, 0x5, 0xa7, 0x863, 0xa, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 
       0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x7, 0xa8, 0x86b, 0xa, 
       0xa8, 0xc, 0xa8, 0xe, 0xa8, 0x86e, 0xb, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 
       0x5, 0xa9, 0x872, 0xa, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x875, 0xa, 0xa9, 
       0x3, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x879, 0xa, 0xa9, 0x3, 0xa9, 0x5, 
       0xa9, 0x87c, 0xa, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x87f, 0xa, 0xa9, 0x3, 
       0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x883, 0xa, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 
       0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x7, 0xaa, 0x88a, 0xa, 0xaa, 0xc, 
       0xaa, 0xe, 0xaa, 0x88d, 0xb, 0xaa, 0x3, 0xab, 0x3, 0xab, 0x3, 0xac, 
       0x3, 0xac, 0x3, 0xac, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xae, 
       0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 0x89a, 0xa, 0xae, 0x3, 0xae, 0x3, 
       0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 0x8a0, 0xa, 0xae, 0x7, 0xae, 
       0x8a2, 0xa, 0xae, 0xc, 0xae, 0xe, 0xae, 0x8a5, 0xb, 0xae, 0x3, 0xaf, 
       0x5, 0xaf, 0x8a8, 0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x8ac, 
       0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x8b0, 0xa, 0xaf, 0x3, 
       0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x8b4, 0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 
       0x5, 0xaf, 0x8b8, 0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x8bc, 
       0xa, 0xaf, 0x3, 0xb0, 0x5, 0xb0, 0x8bf, 0xa, 0xb0, 0x3, 0xb0, 0x3, 
       0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x8c7, 
       0xa, 0xb0, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 
       0x3, 0xb3, 0x3, 0xb3, 0x5, 0xb3, 0x8d0, 0xa, 0xb3, 0x3, 0xb4, 0x3, 
       0xb4, 0x5, 0xb4, 0x8d4, 0xa, 0xb4, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 
       0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x5, 0xb6, 0x8dc, 0xa, 0xb6, 0x3, 
       0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x5, 0xb6, 0x8e2, 0xa, 0xb6, 
       0x7, 0xb6, 0x8e4, 0xa, 0xb6, 0xc, 0xb6, 0xe, 0xb6, 0x8e7, 0xb, 0xb6, 
       0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x8ec, 0xa, 0xb7, 0x3, 
       0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x5, 
       0xb8, 0x8f4, 0xa, 0xb8, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 
       0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x5, 0xba, 
       0x929, 0xa, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x5, 0xbb, 0x930, 0xa, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 
       0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 
       0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x7, 0xbd, 0x93e, 0xa, 0xbd, 0xc, 
       0xbd, 0xe, 0xbd, 0x941, 0xb, 0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 
       0x945, 0xa, 0xbe, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x949, 0xa, 0xbf, 
       0x3, 0xbf, 0x5, 0xbf, 0x94c, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 
       0xbf, 0x950, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
       0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 
       0x95b, 0xa, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x95e, 0xa, 0xbf, 0x3, 0xbf, 
       0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 
       0x966, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x96b, 
       0xa, 0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 
       0x5, 0xc1, 0x972, 0xa, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc2, 0x3, 
       0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x5, 0xc2, 0x97a, 0xa, 0xc2, 0x3, 0xc2, 
       0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x5, 0xc2, 0x981, 0xa, 
       0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x5, 0xc2, 0x985, 0xa, 0xc2, 0x3, 0xc3, 
       0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x98a, 0xa, 0xc3, 0x3, 0xc3, 0x3, 
       0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x990, 0xa, 0xc3, 0x7, 0xc3, 
       0x992, 0xa, 0xc3, 0xc, 0xc3, 0xe, 0xc3, 0x995, 0xb, 0xc3, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 0x99a, 0xa, 0xc4, 0x3, 0xc5, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 
       0xc5, 0x9a3, 0xa, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x9a7, 0xa, 
       0xc5, 0x3, 0xc6, 0x5, 0xc6, 0x9aa, 0xa, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 
       0x3, 0xc8, 0x5, 0xc8, 0x9b5, 0xa, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 
       0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 
       0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xca, 0x3, 0xca, 0x5, 
       0xca, 0x9c5, 0xa, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xcb, 
       0x3, 0xcb, 0x5, 0xcb, 0x9cc, 0xa, 0xcb, 0x3, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcd, 0x5, 0xcd, 0x9d5, 
       0xa, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x5, 0xcd, 
       0x9db, 0xa, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x5, 0xcd, 0x9df, 0xa, 0xcd, 
       0x3, 0xcd, 0x5, 0xcd, 0x9e2, 0xa, 0xcd, 0x3, 0xce, 0x3, 0xce, 0x3, 
       0xce, 0x3, 0xce, 0x3, 0xce, 0x3, 0xce, 0x3, 0xce, 0x3, 0xce, 0x3, 
       0xce, 0x5, 0xce, 0x9ed, 0xa, 0xce, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 
       0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x7, 0xcf, 0x9f5, 0xa, 0xcf, 0xc, 
       0xcf, 0xe, 0xcf, 0x9f8, 0xb, 0xcf, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 
       0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x5, 0xd0, 0xa01, 0xa, 
       0xd0, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd2, 0x3, 0xd2, 0x3, 0xd3, 0x3, 
       0xd3, 0x3, 0xd4, 0x3, 0xd4, 0x3, 0xd4, 0x2, 0x26, 0x18, 0x24, 0x30, 
       0x42, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 
       0x60, 0x6a, 0x7a, 0x8a, 0xc0, 0xd8, 0xe2, 0xea, 0xf6, 0xfa, 0x102, 
       0x11c, 0x120, 0x124, 0x13a, 0x14e, 0x152, 0x15a, 0x16a, 0x178, 0x184, 
       0x19c, 0xd5, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
       0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
       0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
       0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
       0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
       0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 
       0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 
       0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 
       0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 
       0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 
       0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 
       0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 
       0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 
       0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 
       0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 
       0x144, 0x146, 0x148, 0x14a, 0x14c, 0x14e, 0x150, 0x152, 0x154, 0x156, 
       0x158, 0x15a, 0x15c, 0x15e, 0x160, 0x162, 0x164, 0x166, 0x168, 0x16a, 
       0x16c, 0x16e, 0x170, 0x172, 0x174, 0x176, 0x178, 0x17a, 0x17c, 0x17e, 
       0x180, 0x182, 0x184, 0x186, 0x188, 0x18a, 0x18c, 0x18e, 0x190, 0x192, 
       0x194, 0x196, 0x198, 0x19a, 0x19c, 0x19e, 0x1a0, 0x1a2, 0x1a4, 0x1a6, 
       0x2, 0x11, 0x4, 0x2, 0x65, 0x65, 0x69, 0x69, 0x5, 0x2, 0x5e, 0x66, 
       0x69, 0x7d, 0x80, 0x81, 0x4, 0x2, 0x5f, 0x61, 0x65, 0x68, 0x5, 0x2, 
       0x69, 0x69, 0x6c, 0x73, 0x76, 0x77, 0x6, 0x2, 0x21, 0x21, 0x2b, 0x2b, 
       0x3a, 0x3a, 0x41, 0x41, 0x4, 0x2, 0x1f, 0x1f, 0x4b, 0x4b, 0x3, 0x2, 
       0x52, 0x57, 0x4, 0x2, 0x13, 0x13, 0x4d, 0x4d, 0x5, 0x2, 0x12, 0x12, 
       0x3d, 0x3d, 0x48, 0x48, 0x3, 0x2, 0x50, 0x51, 0x3, 0x2, 0x31, 0x33, 
       0x4, 0x2, 0x12, 0x12, 0x47, 0x47, 0x3, 0x2, 0x83, 0x84, 0x4, 0x2, 
       0x22, 0x22, 0x43, 0x43, 0x3, 0x2, 0x88, 0x8b, 0x2, 0xb26, 0x2, 0x1a8, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1ae, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0xa, 0x1b4, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1b9, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1ca, 0x3, 0x2, 0x2, 
       0x2, 0x14, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1d7, 0x3, 0x2, 0x2, 
       0x2, 0x18, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1f9, 0x3, 0x2, 0x2, 
       0x2, 0x1c, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x205, 0x3, 0x2, 0x2, 
       0x2, 0x20, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x22, 0x21c, 0x3, 0x2, 0x2, 
       0x2, 0x24, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x26, 0x22e, 0x3, 0x2, 0x2, 
       0x2, 0x28, 0x238, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x23b, 0x3, 0x2, 0x2, 
       0x2, 0x2c, 0x254, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x256, 0x3, 0x2, 0x2, 
       0x2, 0x30, 0x294, 0x3, 0x2, 0x2, 0x2, 0x32, 0x2bc, 0x3, 0x2, 0x2, 
       0x2, 0x34, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x36, 0x2ef, 0x3, 0x2, 0x2, 
       0x2, 0x38, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x30b, 0x3, 0x2, 0x2, 
       0x2, 0x3c, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x311, 0x3, 0x2, 0x2, 
       0x2, 0x40, 0x315, 0x3, 0x2, 0x2, 0x2, 0x42, 0x31b, 0x3, 0x2, 0x2, 
       0x2, 0x44, 0x334, 0x3, 0x2, 0x2, 0x2, 0x46, 0x342, 0x3, 0x2, 0x2, 
       0x2, 0x48, 0x344, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x34f, 0x3, 0x2, 0x2, 
       0x2, 0x4c, 0x351, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x35f, 0x3, 0x2, 0x2, 
       0x2, 0x50, 0x370, 0x3, 0x2, 0x2, 0x2, 0x52, 0x37e, 0x3, 0x2, 0x2, 
       0x2, 0x54, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x56, 0x3a0, 0x3, 0x2, 0x2, 
       0x2, 0x58, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x3b9, 0x3, 0x2, 0x2, 
       0x2, 0x5c, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x3cf, 0x3, 0x2, 0x2, 
       0x2, 0x60, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x62, 0x3ec, 0x3, 0x2, 0x2, 
       0x2, 0x64, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x66, 0x3f8, 0x3, 0x2, 0x2, 
       0x2, 0x68, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x3fc, 0x3, 0x2, 0x2, 
       0x2, 0x6c, 0x407, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x423, 0x3, 0x2, 0x2, 
       0x2, 0x70, 0x427, 0x3, 0x2, 0x2, 0x2, 0x72, 0x431, 0x3, 0x2, 0x2, 
       0x2, 0x74, 0x447, 0x3, 0x2, 0x2, 0x2, 0x76, 0x44a, 0x3, 0x2, 0x2, 
       0x2, 0x78, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x454, 0x3, 0x2, 0x2, 
       0x2, 0x7c, 0x481, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x4a6, 0x3, 0x2, 0x2, 
       0x2, 0x80, 0x4b9, 0x3, 0x2, 0x2, 0x2, 0x82, 0x4bc, 0x3, 0x2, 0x2, 
       0x2, 0x84, 0x4c1, 0x3, 0x2, 0x2, 0x2, 0x86, 0x4cf, 0x3, 0x2, 0x2, 
       0x2, 0x88, 0x4d1, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x4d3, 0x3, 0x2, 0x2, 
       0x2, 0x8c, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x4f2, 0x3, 0x2, 0x2, 
       0x2, 0x90, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x92, 0x4fa, 0x3, 0x2, 0x2, 
       0x2, 0x94, 0x51b, 0x3, 0x2, 0x2, 0x2, 0x96, 0x52b, 0x3, 0x2, 0x2, 
       0x2, 0x98, 0x52d, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x52f, 0x3, 0x2, 0x2, 
       0x2, 0x9c, 0x539, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x542, 0x3, 0x2, 0x2, 
       0x2, 0xa0, 0x544, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x546, 0x3, 0x2, 0x2, 
       0x2, 0xa4, 0x54c, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x555, 0x3, 0x2, 0x2, 
       0x2, 0xa8, 0x55a, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x563, 0x3, 0x2, 0x2, 
       0x2, 0xac, 0x580, 0x3, 0x2, 0x2, 0x2, 0xae, 0x586, 0x3, 0x2, 0x2, 
       0x2, 0xb0, 0x591, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x5ab, 0x3, 0x2, 0x2, 
       0x2, 0xb4, 0x5ba, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x5bc, 0x3, 0x2, 0x2, 
       0x2, 0xb8, 0x5c7, 0x3, 0x2, 0x2, 0x2, 0xba, 0x5cb, 0x3, 0x2, 0x2, 
       0x2, 0xbc, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x5df, 0x3, 0x2, 0x2, 
       0x2, 0xc0, 0x5e2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x5f2, 0x3, 0x2, 0x2, 
       0x2, 0xc4, 0x5f4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x5fb, 0x3, 0x2, 0x2, 
       0x2, 0xc8, 0x5fe, 0x3, 0x2, 0x2, 0x2, 0xca, 0x60a, 0x3, 0x2, 0x2, 
       0x2, 0xcc, 0x614, 0x3, 0x2, 0x2, 0x2, 0xce, 0x61c, 0x3, 0x2, 0x2, 
       0x2, 0xd0, 0x622, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x624, 0x3, 0x2, 0x2, 
       0x2, 0xd4, 0x62b, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x62f, 0x3, 0x2, 0x2, 
       0x2, 0xd8, 0x633, 0x3, 0x2, 0x2, 0x2, 0xda, 0x644, 0x3, 0x2, 0x2, 
       0x2, 0xdc, 0x64a, 0x3, 0x2, 0x2, 0x2, 0xde, 0x655, 0x3, 0x2, 0x2, 
       0x2, 0xe0, 0x667, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x669, 0x3, 0x2, 0x2, 
       0x2, 0xe4, 0x67d, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x68f, 0x3, 0x2, 0x2, 
       0x2, 0xe8, 0x691, 0x3, 0x2, 0x2, 0x2, 0xea, 0x69c, 0x3, 0x2, 0x2, 
       0x2, 0xec, 0x6ad, 0x3, 0x2, 0x2, 0x2, 0xee, 0x6b3, 0x3, 0x2, 0x2, 
       0x2, 0xf0, 0x6b5, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x6b9, 0x3, 0x2, 0x2, 
       0x2, 0xf4, 0x6bb, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x6c1, 0x3, 0x2, 0x2, 
       0x2, 0xf8, 0x6db, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x6dd, 0x3, 0x2, 0x2, 
       0x2, 0xfc, 0x6e8, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x6ee, 0x3, 0x2, 0x2, 
       0x2, 0x100, 0x6f0, 0x3, 0x2, 0x2, 0x2, 0x102, 0x6ff, 0x3, 0x2, 0x2, 
       0x2, 0x104, 0x711, 0x3, 0x2, 0x2, 0x2, 0x106, 0x714, 0x3, 0x2, 0x2, 
       0x2, 0x108, 0x719, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x724, 0x3, 0x2, 0x2, 
       0x2, 0x10c, 0x73e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x740, 0x3, 0x2, 0x2, 
       0x2, 0x110, 0x744, 0x3, 0x2, 0x2, 0x2, 0x112, 0x746, 0x3, 0x2, 0x2, 
       0x2, 0x114, 0x749, 0x3, 0x2, 0x2, 0x2, 0x116, 0x74d, 0x3, 0x2, 0x2, 
       0x2, 0x118, 0x759, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x760, 0x3, 0x2, 0x2, 
       0x2, 0x11c, 0x770, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x786, 0x3, 0x2, 0x2, 
       0x2, 0x120, 0x788, 0x3, 0x2, 0x2, 0x2, 0x122, 0x7a5, 0x3, 0x2, 0x2, 
       0x2, 0x124, 0x7a7, 0x3, 0x2, 0x2, 0x2, 0x126, 0x7d1, 0x3, 0x2, 0x2, 
       0x2, 0x128, 0x7d4, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x7df, 0x3, 0x2, 0x2, 
       0x2, 0x12c, 0x7e9, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x7ec, 0x3, 0x2, 0x2, 
       0x2, 0x130, 0x7f0, 0x3, 0x2, 0x2, 0x2, 0x132, 0x7f4, 0x3, 0x2, 0x2, 
       0x2, 0x134, 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x136, 0x7fd, 0x3, 0x2, 0x2, 
       0x2, 0x138, 0x801, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x803, 0x3, 0x2, 0x2, 
       0x2, 0x13c, 0x81c, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x820, 0x3, 0x2, 0x2, 
       0x2, 0x140, 0x822, 0x3, 0x2, 0x2, 0x2, 0x142, 0x83b, 0x3, 0x2, 0x2, 
       0x2, 0x144, 0x83e, 0x3, 0x2, 0x2, 0x2, 0x146, 0x842, 0x3, 0x2, 0x2, 
       0x2, 0x148, 0x844, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x84f, 0x3, 0x2, 0x2, 
       0x2, 0x14c, 0x862, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x864, 0x3, 0x2, 0x2, 
       0x2, 0x150, 0x882, 0x3, 0x2, 0x2, 0x2, 0x152, 0x884, 0x3, 0x2, 0x2, 
       0x2, 0x154, 0x88e, 0x3, 0x2, 0x2, 0x2, 0x156, 0x890, 0x3, 0x2, 0x2, 
       0x2, 0x158, 0x893, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x896, 0x3, 0x2, 0x2, 
       0x2, 0x15c, 0x8bb, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x8c6, 0x3, 0x2, 0x2, 
       0x2, 0x160, 0x8c8, 0x3, 0x2, 0x2, 0x2, 0x162, 0x8ca, 0x3, 0x2, 0x2, 
       0x2, 0x164, 0x8cd, 0x3, 0x2, 0x2, 0x2, 0x166, 0x8d1, 0x3, 0x2, 0x2, 
       0x2, 0x168, 0x8d5, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x8d8, 0x3, 0x2, 0x2, 
       0x2, 0x16c, 0x8e8, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x8f3, 0x3, 0x2, 0x2, 
       0x2, 0x170, 0x8f5, 0x3, 0x2, 0x2, 0x2, 0x172, 0x928, 0x3, 0x2, 0x2, 
       0x2, 0x174, 0x92f, 0x3, 0x2, 0x2, 0x2, 0x176, 0x931, 0x3, 0x2, 0x2, 
       0x2, 0x178, 0x937, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x944, 0x3, 0x2, 0x2, 
       0x2, 0x17c, 0x96a, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x96c, 0x3, 0x2, 0x2, 
       0x2, 0x180, 0x96e, 0x3, 0x2, 0x2, 0x2, 0x182, 0x984, 0x3, 0x2, 0x2, 
       0x2, 0x184, 0x986, 0x3, 0x2, 0x2, 0x2, 0x186, 0x999, 0x3, 0x2, 0x2, 
       0x2, 0x188, 0x9a6, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x9a9, 0x3, 0x2, 0x2, 
       0x2, 0x18c, 0x9ae, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x9b4, 0x3, 0x2, 0x2, 
       0x2, 0x190, 0x9be, 0x3, 0x2, 0x2, 0x2, 0x192, 0x9c2, 0x3, 0x2, 0x2, 
       0x2, 0x194, 0x9c9, 0x3, 0x2, 0x2, 0x2, 0x196, 0x9cd, 0x3, 0x2, 0x2, 
       0x2, 0x198, 0x9e1, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x9ec, 0x3, 0x2, 0x2, 
       0x2, 0x19c, 0x9ee, 0x3, 0x2, 0x2, 0x2, 0x19e, 0xa00, 0x3, 0x2, 0x2, 
       0x2, 0x1a0, 0xa02, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0xa04, 0x3, 0x2, 0x2, 
       0x2, 0x1a4, 0xa06, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0xa08, 0x3, 0x2, 0x2, 
       0x2, 0x1a8, 0x1a9, 0x7, 0x8c, 0x2, 0x2, 0x1a9, 0x3, 0x3, 0x2, 0x2, 
       0x2, 0x1aa, 0x1ad, 0x7, 0x8c, 0x2, 0x2, 0x1ab, 0x1ad, 0x5, 0x6, 0x4, 
       0x2, 0x1ac, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ab, 0x3, 0x2, 0x2, 
       0x2, 0x1ad, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x7, 0x8c, 0x2, 
       0x2, 0x1af, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b3, 0x7, 0x8c, 0x2, 
       0x2, 0x1b1, 0x1b3, 0x5, 0x180, 0xc1, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 
       0x2, 0x2, 0x1b2, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x9, 0x3, 0x2, 
       0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x8c, 0x2, 0x2, 0x1b5, 0xb, 0x3, 0x2, 
       0x2, 0x2, 0x1b6, 0x1b7, 0x7, 0x8c, 0x2, 0x2, 0x1b7, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0x1b8, 0x1ba, 0x5, 0x8a, 0x46, 0x2, 0x1b9, 0x1b8, 0x3, 
       0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x3, 
       0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x2, 0x2, 0x3, 0x1bc, 0xf, 0x3, 
       0x2, 0x2, 0x2, 0x1bd, 0x1c7, 0x5, 0x19e, 0xd0, 0x2, 0x1be, 0x1c7, 
       0x7, 0x40, 0x2, 0x2, 0x1bf, 0x1c0, 0x7, 0x56, 0x2, 0x2, 0x1c0, 0x1c1, 
       0x5, 0x6a, 0x36, 0x2, 0x1c1, 0x1c2, 0x7, 0x57, 0x2, 0x2, 0x1c2, 0x1c7, 
       0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c7, 0x5, 0x12, 0xa, 0x2, 0x1c4, 0x1c7, 
       0x5, 0x1a, 0xe, 0x2, 0x1c5, 0x1c7, 0x5, 0x2c, 0x17, 0x2, 0x1c6, 0x1bd, 
       0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1bf, 
       0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c4, 
       0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1cb, 0x5, 0x14, 0xb, 0x2, 0x1c9, 0x1cb, 
       0x5, 0x16, 0xc, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c9, 
       0x3, 0x2, 0x2, 0x2, 0x1cb, 0x13, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1d6, 
       0x7, 0x8c, 0x2, 0x2, 0x1cd, 0x1d6, 0x5, 0x170, 0xb9, 0x2, 0x1ce, 
       0x1d6, 0x5, 0x162, 0xb2, 0x2, 0x1cf, 0x1d6, 0x5, 0x174, 0xbb, 0x2, 
       0x1d0, 0x1d1, 0x7, 0x67, 0x2, 0x2, 0x1d1, 0x1d6, 0x5, 0x8, 0x5, 0x2, 
       0x1d2, 0x1d3, 0x7, 0x67, 0x2, 0x2, 0x1d3, 0x1d6, 0x5, 0xb0, 0x59, 
       0x2, 0x1d4, 0x1d6, 0x5, 0x182, 0xc2, 0x2, 0x1d5, 0x1cc, 0x3, 0x2, 
       0x2, 0x2, 0x1d5, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1ce, 0x3, 0x2, 
       0x2, 0x2, 0x1d5, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d0, 0x3, 0x2, 
       0x2, 0x2, 0x1d5, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d4, 0x3, 0x2, 
       0x2, 0x2, 0x1d6, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d9, 0x5, 0x18, 
       0xd, 0x2, 0x1d8, 0x1da, 0x7, 0x3f, 0x2, 0x2, 0x1d9, 0x1d8, 0x3, 0x2, 
       0x2, 0x2, 0x1d9, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x3, 0x2, 
       0x2, 0x2, 0x1db, 0x1dc, 0x5, 0x14, 0xb, 0x2, 0x1dc, 0x17, 0x3, 0x2, 
       0x2, 0x2, 0x1dd, 0x1de, 0x8, 0xd, 0x1, 0x2, 0x1de, 0x1e9, 0x7, 0x5c, 
       0x2, 0x2, 0x1df, 0x1e0, 0x5, 0xae, 0x58, 0x2, 0x1e0, 0x1e1, 0x7, 
       0x5c, 0x2, 0x2, 0x1e1, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x5, 
       0x4, 0x3, 0x2, 0x1e3, 0x1e4, 0x7, 0x5c, 0x2, 0x2, 0x1e4, 0x1e9, 0x3, 
       0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x5, 0xb0, 0x59, 0x2, 0x1e6, 0x1e7, 
       0x7, 0x5c, 0x2, 0x2, 0x1e7, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1dd, 
       0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e2, 
       0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1f6, 
       0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0xc, 0x4, 0x2, 0x2, 0x1eb, 0x1ec, 
       0x7, 0x8c, 0x2, 0x2, 0x1ec, 0x1f5, 0x7, 0x5c, 0x2, 0x2, 0x1ed, 0x1ef, 
       0xc, 0x3, 0x2, 0x2, 0x1ee, 0x1f0, 0x7, 0x3f, 0x2, 0x2, 0x1ef, 0x1ee, 
       0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 
       0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x5, 0x180, 0xc1, 0x2, 0x1f2, 0x1f3, 
       0x7, 0x5c, 0x2, 0x2, 0x1f3, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1ea, 
       0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f8, 
       0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 
       0x3, 0x2, 0x2, 0x2, 0x1f7, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f6, 
       0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fb, 0x5, 0x1c, 0xf, 0x2, 0x1fa, 0x1fc, 
       0x5, 0x1e, 0x10, 0x2, 0x1fb, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 
       0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 
       0x5, 0x78, 0x3d, 0x2, 0x1fe, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x201, 
       0x7, 0x54, 0x2, 0x2, 0x200, 0x202, 0x5, 0x20, 0x11, 0x2, 0x201, 0x200, 
       0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 
       0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x7, 0x55, 0x2, 0x2, 0x204, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x7, 0x56, 0x2, 0x2, 0x206, 0x207, 
       0x5, 0x122, 0x92, 0x2, 0x207, 0x209, 0x7, 0x57, 0x2, 0x2, 0x208, 
       0x20a, 0x5, 0x9e, 0x50, 0x2, 0x209, 0x208, 0x3, 0x2, 0x2, 0x2, 0x209, 
       0x20a, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20b, 
       0x20d, 0x5, 0x19a, 0xce, 0x2, 0x20c, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20c, 
       0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x20e, 
       0x210, 0x5, 0xe2, 0x72, 0x2, 0x20f, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20f, 
       0x210, 0x3, 0x2, 0x2, 0x2, 0x210, 0x212, 0x3, 0x2, 0x2, 0x2, 0x211, 
       0x213, 0x5, 0x10a, 0x86, 0x2, 0x212, 0x211, 0x3, 0x2, 0x2, 0x2, 0x212, 
       0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x214, 
       0x21b, 0x5, 0x22, 0x12, 0x2, 0x215, 0x21b, 0x5, 0x24, 0x13, 0x2, 
       0x216, 0x217, 0x5, 0x22, 0x12, 0x2, 0x217, 0x218, 0x7, 0x80, 0x2, 
       0x2, 0x218, 0x219, 0x5, 0x24, 0x13, 0x2, 0x219, 0x21b, 0x3, 0x2, 
       0x2, 0x2, 0x21a, 0x214, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x215, 0x3, 0x2, 
       0x2, 0x2, 0x21a, 0x216, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21, 0x3, 0x2, 
       0x2, 0x2, 0x21c, 0x21d, 0x9, 0x2, 0x2, 0x2, 0x21d, 0x23, 0x3, 0x2, 
       0x2, 0x2, 0x21e, 0x21f, 0x8, 0x13, 0x1, 0x2, 0x21f, 0x221, 0x5, 0x26, 
       0x14, 0x2, 0x220, 0x222, 0x7, 0x5a, 0x2, 0x2, 0x221, 0x220, 0x3, 
       0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 0x2, 0x2, 0x222, 0x22b, 0x3, 
       0x2, 0x2, 0x2, 0x223, 0x224, 0xc, 0x3, 0x2, 0x2, 0x224, 0x225, 0x7, 
       0x80, 0x2, 0x2, 0x225, 0x227, 0x5, 0x26, 0x14, 0x2, 0x226, 0x228, 
       0x7, 0x5a, 0x2, 0x2, 0x227, 0x226, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 
       0x3, 0x2, 0x2, 0x2, 0x228, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x229, 0x223, 
       0x3, 0x2, 0x2, 0x2, 0x22a, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x229, 
       0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x22d, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 
       0x5, 0x28, 0x15, 0x2, 0x22f, 0x230, 0x5, 0x2a, 0x16, 0x2, 0x230, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0x231, 0x233, 0x7, 0x65, 0x2, 0x2, 0x232, 
       0x231, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 0x2, 0x2, 0x233, 
       0x234, 0x3, 0x2, 0x2, 0x2, 0x234, 0x239, 0x7, 0x8c, 0x2, 0x2, 0x235, 
       0x239, 0x7, 0x40, 0x2, 0x2, 0x236, 0x237, 0x7, 0x61, 0x2, 0x2, 0x237, 
       0x239, 0x7, 0x40, 0x2, 0x2, 0x238, 0x232, 0x3, 0x2, 0x2, 0x2, 0x238, 
       0x235, 0x3, 0x2, 0x2, 0x2, 0x238, 0x236, 0x3, 0x2, 0x2, 0x2, 0x239, 
       0x29, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23c, 0x7, 0x65, 0x2, 0x2, 0x23b, 
       0x23a, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23c, 
       0x23d, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x7, 0x8c, 0x2, 0x2, 0x23e, 
       0x23f, 0x5, 0x134, 0x9b, 0x2, 0x23f, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x240, 
       0x241, 0x7, 0x56, 0x2, 0x2, 0x241, 0x242, 0x5, 0x4a, 0x26, 0x2, 0x242, 
       0x243, 0x5, 0x2e, 0x18, 0x2, 0x243, 0x244, 0x7, 0x5a, 0x2, 0x2, 0x244, 
       0x245, 0x7, 0x57, 0x2, 0x2, 0x245, 0x255, 0x3, 0x2, 0x2, 0x2, 0x246, 
       0x247, 0x7, 0x56, 0x2, 0x2, 0x247, 0x248, 0x7, 0x5a, 0x2, 0x2, 0x248, 
       0x249, 0x5, 0x2e, 0x18, 0x2, 0x249, 0x24a, 0x5, 0x4a, 0x26, 0x2, 
       0x24a, 0x24b, 0x7, 0x57, 0x2, 0x2, 0x24b, 0x255, 0x3, 0x2, 0x2, 0x2, 
       0x24c, 0x24d, 0x7, 0x56, 0x2, 0x2, 0x24d, 0x24e, 0x5, 0x4a, 0x26, 
       0x2, 0x24e, 0x24f, 0x5, 0x2e, 0x18, 0x2, 0x24f, 0x250, 0x7, 0x5a, 
       0x2, 0x2, 0x250, 0x251, 0x5, 0x2e, 0x18, 0x2, 0x251, 0x252, 0x5, 
       0x4a, 0x26, 0x2, 0x252, 0x253, 0x7, 0x57, 0x2, 0x2, 0x253, 0x255, 
       0x3, 0x2, 0x2, 0x2, 0x254, 0x240, 0x3, 0x2, 0x2, 0x2, 0x254, 0x246, 
       0x3, 0x2, 0x2, 0x2, 0x254, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x255, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x9, 0x3, 0x2, 0x2, 0x257, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x8, 0x19, 0x1, 0x2, 0x259, 0x295, 
       0x5, 0x10, 0x9, 0x2, 0x25a, 0x25b, 0x5, 0xac, 0x57, 0x2, 0x25b, 0x25d, 
       0x7, 0x56, 0x2, 0x2, 0x25c, 0x25e, 0x5, 0x32, 0x1a, 0x2, 0x25d, 0x25c, 
       0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 
       0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x7, 0x57, 0x2, 0x2, 0x260, 0x295, 
       0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x5, 0x188, 0xc5, 0x2, 0x262, 0x264, 
       0x7, 0x56, 0x2, 0x2, 0x263, 0x265, 0x5, 0x32, 0x1a, 0x2, 0x264, 0x263, 
       0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 
       0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x7, 0x57, 0x2, 0x2, 0x267, 0x295, 
       0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x5, 0xac, 0x57, 0x2, 0x269, 0x26a, 
       0x5, 0x13c, 0x9f, 0x2, 0x26a, 0x295, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 
       0x5, 0x188, 0xc5, 0x2, 0x26c, 0x26d, 0x5, 0x13c, 0x9f, 0x2, 0x26d, 
       0x295, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x7, 0x1c, 0x2, 0x2, 0x26f, 
       0x270, 0x7, 0x6a, 0x2, 0x2, 0x270, 0x271, 0x5, 0x114, 0x8b, 0x2, 
       0x271, 0x272, 0x7, 0x6b, 0x2, 0x2, 0x272, 0x273, 0x7, 0x56, 0x2, 
       0x2, 0x273, 0x274, 0x5, 0x6a, 0x36, 0x2, 0x274, 0x275, 0x7, 0x57, 
       0x2, 0x2, 0x275, 0x295, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 0x7, 0x3c, 
       0x2, 0x2, 0x277, 0x278, 0x7, 0x6a, 0x2, 0x2, 0x278, 0x279, 0x5, 0x114, 
       0x8b, 0x2, 0x279, 0x27a, 0x7, 0x6b, 0x2, 0x2, 0x27a, 0x27b, 0x7, 
       0x56, 0x2, 0x2, 0x27b, 0x27c, 0x5, 0x6a, 0x36, 0x2, 0x27c, 0x27d, 
       0x7, 0x57, 0x2, 0x2, 0x27d, 0x295, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27f, 
       0x7, 0x35, 0x2, 0x2, 0x27f, 0x280, 0x7, 0x6b, 0x2, 0x2, 0x280, 0x281, 
       0x7, 0x56, 0x2, 0x2, 0x281, 0x282, 0x5, 0x6a, 0x36, 0x2, 0x282, 0x283, 
       0x7, 0x57, 0x2, 0x2, 0x283, 0x295, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 
       0x7, 0x15, 0x2, 0x2, 0x285, 0x286, 0x7, 0x6b, 0x2, 0x2, 0x286, 0x287, 
       0x7, 0x56, 0x2, 0x2, 0x287, 0x288, 0x5, 0x6a, 0x36, 0x2, 0x288, 0x289, 
       0x7, 0x57, 0x2, 0x2, 0x289, 0x295, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 
       0x5, 0x114, 0x8b, 0x2, 0x28b, 0x28c, 0x7, 0x56, 0x2, 0x2, 0x28c, 
       0x28d, 0x5, 0x6a, 0x36, 0x2, 0x28d, 0x28e, 0x7, 0x57, 0x2, 0x2, 0x28e, 
       0x295, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x5, 0x114, 0x8b, 0x2, 0x290, 
       0x291, 0x7, 0x56, 0x2, 0x2, 0x291, 0x292, 0x5, 0x114, 0x8b, 0x2, 
       0x292, 0x293, 0x7, 0x57, 0x2, 0x2, 0x293, 0x295, 0x3, 0x2, 0x2, 0x2, 
       0x294, 0x258, 0x3, 0x2, 0x2, 0x2, 0x294, 0x25a, 0x3, 0x2, 0x2, 0x2, 
       0x294, 0x261, 0x3, 0x2, 0x2, 0x2, 0x294, 0x268, 0x3, 0x2, 0x2, 0x2, 
       0x294, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x294, 0x26e, 0x3, 0x2, 0x2, 0x2, 
       0x294, 0x276, 0x3, 0x2, 0x2, 0x2, 0x294, 0x27e, 0x3, 0x2, 0x2, 0x2, 
       0x294, 0x284, 0x3, 0x2, 0x2, 0x2, 0x294, 0x28a, 0x3, 0x2, 0x2, 0x2, 
       0x294, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x295, 0x2b9, 0x3, 0x2, 0x2, 0x2, 
       0x296, 0x297, 0xc, 0x14, 0x2, 0x2, 0x297, 0x298, 0x7, 0x54, 0x2, 
       0x2, 0x298, 0x299, 0x5, 0x13e, 0xa0, 0x2, 0x299, 0x29a, 0x7, 0x55, 
       0x2, 0x2, 0x29a, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0xc, 0x13, 
       0x2, 0x2, 0x29c, 0x29e, 0x7, 0x56, 0x2, 0x2, 0x29d, 0x29f, 0x5, 0x32, 
       0x1a, 0x2, 0x29e, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x3, 0x2, 
       0x2, 0x2, 0x29f, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2b8, 0x7, 0x57, 
       0x2, 0x2, 0x2a1, 0x2a2, 0xc, 0xe, 0x2, 0x2, 0x2a2, 0x2a4, 0x7, 0x5d, 
       0x2, 0x2, 0x2a3, 0x2a5, 0x7, 0x3f, 0x2, 0x2, 0x2a4, 0x2a3, 0x3, 0x2, 
       0x2, 0x2, 0x2a4, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x3, 0x2, 
       0x2, 0x2, 0x2a6, 0x2b8, 0x5, 0x12, 0xa, 0x2, 0x2a7, 0x2a8, 0xc, 0xd, 
       0x2, 0x2, 0x2a8, 0x2aa, 0x7, 0x82, 0x2, 0x2, 0x2a9, 0x2ab, 0x7, 0x3f, 
       0x2, 0x2, 0x2aa, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0x3, 0x2, 
       0x2, 0x2, 0x2ab, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2b8, 0x5, 0x12, 
       0xa, 0x2, 0x2ad, 0x2ae, 0xc, 0xc, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x5d, 
       0x2, 0x2, 0x2af, 0x2b8, 0x5, 0x34, 0x1b, 0x2, 0x2b0, 0x2b1, 0xc, 
       0xb, 0x2, 0x2, 0x2b1, 0x2b2, 0x7, 0x82, 0x2, 0x2, 0x2b2, 0x2b8, 0x5, 
       0x34, 0x1b, 0x2, 0x2b3, 0x2b4, 0xc, 0xa, 0x2, 0x2, 0x2b4, 0x2b8, 
       0x7, 0x7e, 0x2, 0x2, 0x2b5, 0x2b6, 0xc, 0x9, 0x2, 0x2, 0x2b6, 0x2b8, 
       0x7, 0x7f, 0x2, 0x2, 0x2b7, 0x296, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x29b, 
       0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2a7, 
       0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b0, 
       0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b5, 
       0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b7, 
       0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2bd, 
       0x5, 0x13a, 0x9e, 0x2, 0x2bd, 0x33, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2c0, 
       0x5, 0x18, 0xd, 0x2, 0x2bf, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 
       0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 
       0x5, 0xae, 0x58, 0x2, 0x2c2, 0x2c3, 0x7, 0x5c, 0x2, 0x2, 0x2c3, 0x2c4, 
       0x7, 0x67, 0x2, 0x2, 0x2c4, 0x2c5, 0x5, 0xae, 0x58, 0x2, 0x2c5, 0x2d2, 
       0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x5, 0x18, 0xd, 0x2, 0x2c7, 0x2c8, 
       0x7, 0x3f, 0x2, 0x2, 0x2c8, 0x2c9, 0x5, 0x180, 0xc1, 0x2, 0x2c9, 
       0x2ca, 0x7, 0x5c, 0x2, 0x2, 0x2ca, 0x2cb, 0x7, 0x67, 0x2, 0x2, 0x2cb, 
       0x2cc, 0x5, 0xae, 0x58, 0x2, 0x2cc, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2cd, 
       0x2ce, 0x7, 0x67, 0x2, 0x2, 0x2ce, 0x2d2, 0x5, 0xae, 0x58, 0x2, 0x2cf, 
       0x2d0, 0x7, 0x67, 0x2, 0x2, 0x2d0, 0x2d2, 0x5, 0xb0, 0x59, 0x2, 0x2d1, 
       0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2d1, 
       0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d2, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2f0, 0x5, 0x30, 0x19, 0x2, 0x2d4, 
       0x2d5, 0x7, 0x7e, 0x2, 0x2, 0x2d5, 0x2f0, 0x5, 0x4a, 0x26, 0x2, 0x2d6, 
       0x2d7, 0x7, 0x7f, 0x2, 0x2, 0x2d7, 0x2f0, 0x5, 0x4a, 0x26, 0x2, 0x2d8, 
       0x2d9, 0x5, 0x38, 0x1d, 0x2, 0x2d9, 0x2da, 0x5, 0x4a, 0x26, 0x2, 
       0x2da, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2dc, 0x7, 0x39, 0x2, 0x2, 
       0x2dc, 0x2f0, 0x5, 0x36, 0x1c, 0x2, 0x2dd, 0x2de, 0x7, 0x39, 0x2, 
       0x2, 0x2de, 0x2df, 0x7, 0x56, 0x2, 0x2, 0x2df, 0x2e0, 0x5, 0x114, 
       0x8b, 0x2, 0x2e0, 0x2e1, 0x7, 0x57, 0x2, 0x2, 0x2e1, 0x2f0, 0x3, 
       0x2, 0x2, 0x2, 0x2e2, 0x2e3, 0x7, 0x39, 0x2, 0x2, 0x2e3, 0x2e4, 0x7, 
       0x5a, 0x2, 0x2, 0x2e4, 0x2e5, 0x7, 0x56, 0x2, 0x2, 0x2e5, 0x2e6, 
       0x7, 0x8c, 0x2, 0x2, 0x2e6, 0x2f0, 0x7, 0x57, 0x2, 0x2, 0x2e7, 0x2e8, 
       0x7, 0x8, 0x2, 0x2, 0x2e8, 0x2e9, 0x7, 0x56, 0x2, 0x2, 0x2e9, 0x2ea, 
       0x5, 0x114, 0x8b, 0x2, 0x2ea, 0x2eb, 0x7, 0x57, 0x2, 0x2, 0x2eb, 
       0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2f0, 0x5, 0x48, 0x25, 0x2, 0x2ed, 
       0x2f0, 0x5, 0x3a, 0x1e, 0x2, 0x2ee, 0x2f0, 0x5, 0x46, 0x24, 0x2, 
       0x2ef, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2d4, 0x3, 0x2, 0x2, 0x2, 
       0x2ef, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2d8, 0x3, 0x2, 0x2, 0x2, 
       0x2ef, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2dd, 0x3, 0x2, 0x2, 0x2, 
       0x2ef, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2e7, 0x3, 0x2, 0x2, 0x2, 
       0x2ef, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2ed, 0x3, 0x2, 0x2, 0x2, 
       0x2ef, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x37, 0x3, 0x2, 0x2, 0x2, 
       0x2f1, 0x2f2, 0x9, 0x4, 0x2, 0x2, 0x2f2, 0x39, 0x3, 0x2, 0x2, 0x2, 
       0x2f3, 0x2f5, 0x7, 0x5c, 0x2, 0x2, 0x2f4, 0x2f3, 0x3, 0x2, 0x2, 0x2, 
       0x2f4, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f6, 0x3, 0x2, 0x2, 0x2, 
       0x2f6, 0x2f8, 0x7, 0x2d, 0x2, 0x2, 0x2f7, 0x2f9, 0x5, 0x3c, 0x1f, 
       0x2, 0x2f8, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x3, 0x2, 0x2, 
       0x2, 0x2f9, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fc, 0x5, 0x3e, 0x20, 
       0x2, 0x2fb, 0x2fd, 0x5, 0x44, 0x23, 0x2, 0x2fc, 0x2fb, 0x3, 0x2, 
       0x2, 0x2, 0x2fc, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x30c, 0x3, 0x2, 
       0x2, 0x2, 0x2fe, 0x300, 0x7, 0x5c, 0x2, 0x2, 0x2ff, 0x2fe, 0x3, 0x2, 
       0x2, 0x2, 0x2ff, 0x300, 0x3, 0x2, 0x2, 0x2, 0x300, 0x301, 0x3, 0x2, 
       0x2, 0x2, 0x301, 0x303, 0x7, 0x2d, 0x2, 0x2, 0x302, 0x304, 0x5, 0x3c, 
       0x1f, 0x2, 0x303, 0x302, 0x3, 0x2, 0x2, 0x2, 0x303, 0x304, 0x3, 0x2, 
       0x2, 0x2, 0x304, 0x305, 0x3, 0x2, 0x2, 0x2, 0x305, 0x306, 0x7, 0x56, 
       0x2, 0x2, 0x306, 0x307, 0x5, 0x114, 0x8b, 0x2, 0x307, 0x309, 0x7, 
       0x57, 0x2, 0x2, 0x308, 0x30a, 0x5, 0x44, 0x23, 0x2, 0x309, 0x308, 
       0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30c, 
       0x3, 0x2, 0x2, 0x2, 0x30b, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x2ff, 
       0x3, 0x2, 0x2, 0x2, 0x30c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 
       0x7, 0x56, 0x2, 0x2, 0x30e, 0x30f, 0x5, 0x32, 0x1a, 0x2, 0x30f, 0x310, 
       0x7, 0x57, 0x2, 0x2, 0x310, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x311, 0x313, 
       0x5, 0xa6, 0x54, 0x2, 0x312, 0x314, 0x5, 0x40, 0x21, 0x2, 0x313, 
       0x312, 0x3, 0x2, 0x2, 0x2, 0x313, 0x314, 0x3, 0x2, 0x2, 0x2, 0x314, 
       0x3f, 0x3, 0x2, 0x2, 0x2, 0x315, 0x317, 0x5, 0x10c, 0x87, 0x2, 0x316, 
       0x318, 0x5, 0x40, 0x21, 0x2, 0x317, 0x316, 0x3, 0x2, 0x2, 0x2, 0x317, 
       0x318, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 0x3, 0x2, 0x2, 0x2, 0x319, 
       0x31a, 0x5, 0x42, 0x22, 0x2, 0x31a, 0x41, 0x3, 0x2, 0x2, 0x2, 0x31b, 
       0x31c, 0x8, 0x22, 0x1, 0x2, 0x31c, 0x31d, 0x7, 0x54, 0x2, 0x2, 0x31d, 
       0x31e, 0x5, 0x6a, 0x36, 0x2, 0x31e, 0x320, 0x7, 0x55, 0x2, 0x2, 0x31f, 
       0x321, 0x5, 0xe2, 0x72, 0x2, 0x320, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x320, 
       0x321, 0x3, 0x2, 0x2, 0x2, 0x321, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x322, 
       0x323, 0xc, 0x3, 0x2, 0x2, 0x323, 0x324, 0x7, 0x54, 0x2, 0x2, 0x324, 
       0x325, 0x5, 0x6c, 0x37, 0x2, 0x325, 0x327, 0x7, 0x55, 0x2, 0x2, 0x326, 
       0x328, 0x5, 0xe2, 0x72, 0x2, 0x327, 0x326, 0x3, 0x2, 0x2, 0x2, 0x327, 
       0x328, 0x3, 0x2, 0x2, 0x2, 0x328, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x329, 
       0x322, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32b, 
       0x329, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x32c, 
       0x43, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32e, 
       0x330, 0x7, 0x56, 0x2, 0x2, 0x32f, 0x331, 0x5, 0x32, 0x1a, 0x2, 0x330, 
       0x32f, 0x3, 0x2, 0x2, 0x2, 0x330, 0x331, 0x3, 0x2, 0x2, 0x2, 0x331, 
       0x332, 0x3, 0x2, 0x2, 0x2, 0x332, 0x335, 0x7, 0x57, 0x2, 0x2, 0x333, 
       0x335, 0x5, 0x13c, 0x9f, 0x2, 0x334, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x334, 
       0x333, 0x3, 0x2, 0x2, 0x2, 0x335, 0x45, 0x3, 0x2, 0x2, 0x2, 0x336, 
       0x338, 0x7, 0x5c, 0x2, 0x2, 0x337, 0x336, 0x3, 0x2, 0x2, 0x2, 0x337, 
       0x338, 0x3, 0x2, 0x2, 0x2, 0x338, 0x339, 0x3, 0x2, 0x2, 0x2, 0x339, 
       0x33a, 0x7, 0x19, 0x2, 0x2, 0x33a, 0x343, 0x5, 0x4a, 0x26, 0x2, 0x33b, 
       0x33d, 0x7, 0x5c, 0x2, 0x2, 0x33c, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x33c, 
       0x33d, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x33f, 0x7, 0x19, 0x2, 0x2, 0x33f, 0x340, 0x7, 0x54, 0x2, 0x2, 0x340, 
       0x341, 0x7, 0x55, 0x2, 0x2, 0x341, 0x343, 0x5, 0x4a, 0x26, 0x2, 0x342, 
       0x337, 0x3, 0x2, 0x2, 0x2, 0x342, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x343, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 0x7, 0x2e, 0x2, 0x2, 0x345, 
       0x346, 0x7, 0x56, 0x2, 0x2, 0x346, 0x347, 0x5, 0x6a, 0x36, 0x2, 0x347, 
       0x348, 0x7, 0x57, 0x2, 0x2, 0x348, 0x49, 0x3, 0x2, 0x2, 0x2, 0x349, 
       0x350, 0x5, 0x36, 0x1c, 0x2, 0x34a, 0x34b, 0x7, 0x56, 0x2, 0x2, 0x34b, 
       0x34c, 0x5, 0x114, 0x8b, 0x2, 0x34c, 0x34d, 0x7, 0x57, 0x2, 0x2, 
       0x34d, 0x34e, 0x5, 0x4a, 0x26, 0x2, 0x34e, 0x350, 0x3, 0x2, 0x2, 
       0x2, 0x34f, 0x349, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x34a, 0x3, 0x2, 0x2, 
       0x2, 0x350, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x351, 0x352, 0x8, 0x27, 0x1, 
       0x2, 0x352, 0x353, 0x5, 0x4a, 0x26, 0x2, 0x353, 0x35c, 0x3, 0x2, 
       0x2, 0x2, 0x354, 0x355, 0xc, 0x4, 0x2, 0x2, 0x355, 0x356, 0x7, 0x5e, 
       0x2, 0x2, 0x356, 0x35b, 0x5, 0x4a, 0x26, 0x2, 0x357, 0x358, 0xc, 
       0x3, 0x2, 0x2, 0x358, 0x359, 0x7, 0x81, 0x2, 0x2, 0x359, 0x35b, 0x5, 
       0x4a, 0x26, 0x2, 0x35a, 0x354, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x357, 
       0x3, 0x2, 0x2, 0x2, 0x35b, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35a, 
       0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x4d, 
       0x3, 0x2, 0x2, 0x2, 0x35e, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x360, 
       0x8, 0x28, 0x1, 0x2, 0x360, 0x361, 0x5, 0x4c, 0x27, 0x2, 0x361, 0x36d, 
       0x3, 0x2, 0x2, 0x2, 0x362, 0x363, 0xc, 0x5, 0x2, 0x2, 0x363, 0x364, 
       0x7, 0x61, 0x2, 0x2, 0x364, 0x36c, 0x5, 0x4c, 0x27, 0x2, 0x365, 0x366, 
       0xc, 0x4, 0x2, 0x2, 0x366, 0x367, 0x7, 0x62, 0x2, 0x2, 0x367, 0x36c, 
       0x5, 0x4c, 0x27, 0x2, 0x368, 0x369, 0xc, 0x3, 0x2, 0x2, 0x369, 0x36a, 
       0x7, 0x63, 0x2, 0x2, 0x36a, 0x36c, 0x5, 0x4c, 0x27, 0x2, 0x36b, 0x362, 
       0x3, 0x2, 0x2, 0x2, 0x36b, 0x365, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x368, 
       0x3, 0x2, 0x2, 0x2, 0x36c, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36b, 
       0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x36f, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x370, 0x371, 
       0x8, 0x29, 0x1, 0x2, 0x371, 0x372, 0x5, 0x4e, 0x28, 0x2, 0x372, 0x37b, 
       0x3, 0x2, 0x2, 0x2, 0x373, 0x374, 0xc, 0x4, 0x2, 0x2, 0x374, 0x375, 
       0x7, 0x5f, 0x2, 0x2, 0x375, 0x37a, 0x5, 0x4e, 0x28, 0x2, 0x376, 0x377, 
       0xc, 0x3, 0x2, 0x2, 0x377, 0x378, 0x7, 0x60, 0x2, 0x2, 0x378, 0x37a, 
       0x5, 0x4e, 0x28, 0x2, 0x379, 0x373, 0x3, 0x2, 0x2, 0x2, 0x379, 0x376, 
       0x3, 0x2, 0x2, 0x2, 0x37a, 0x37d, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x379, 
       0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x37d, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37f, 
       0x8, 0x2a, 0x1, 0x2, 0x37f, 0x380, 0x5, 0x50, 0x29, 0x2, 0x380, 0x389, 
       0x3, 0x2, 0x2, 0x2, 0x381, 0x382, 0xc, 0x4, 0x2, 0x2, 0x382, 0x383, 
       0x7, 0x74, 0x2, 0x2, 0x383, 0x388, 0x5, 0x50, 0x29, 0x2, 0x384, 0x385, 
       0xc, 0x3, 0x2, 0x2, 0x385, 0x386, 0x7, 0x75, 0x2, 0x2, 0x386, 0x388, 
       0x5, 0x50, 0x29, 0x2, 0x387, 0x381, 0x3, 0x2, 0x2, 0x2, 0x387, 0x384, 
       0x3, 0x2, 0x2, 0x2, 0x388, 0x38b, 0x3, 0x2, 0x2, 0x2, 0x389, 0x387, 
       0x3, 0x2, 0x2, 0x2, 0x389, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x38a, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x38b, 0x389, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 
       0x8, 0x2b, 0x1, 0x2, 0x38d, 0x38e, 0x5, 0x52, 0x2a, 0x2, 0x38e, 0x39d, 
       0x3, 0x2, 0x2, 0x2, 0x38f, 0x390, 0xc, 0x6, 0x2, 0x2, 0x390, 0x391, 
       0x7, 0x6a, 0x2, 0x2, 0x391, 0x39c, 0x5, 0x52, 0x2a, 0x2, 0x392, 0x393, 
       0xc, 0x5, 0x2, 0x2, 0x393, 0x394, 0x7, 0x6b, 0x2, 0x2, 0x394, 0x39c, 
       0x5, 0x52, 0x2a, 0x2, 0x395, 0x396, 0xc, 0x4, 0x2, 0x2, 0x396, 0x397, 
       0x7, 0x7a, 0x2, 0x2, 0x397, 0x39c, 0x5, 0x52, 0x2a, 0x2, 0x398, 0x399, 
       0xc, 0x3, 0x2, 0x2, 0x399, 0x39a, 0x7, 0x7b, 0x2, 0x2, 0x39a, 0x39c, 
       0x5, 0x52, 0x2a, 0x2, 0x39b, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x392, 
       0x3, 0x2, 0x2, 0x2, 0x39b, 0x395, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x398, 
       0x3, 0x2, 0x2, 0x2, 0x39c, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39b, 
       0x3, 0x2, 0x2, 0x2, 0x39d, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x39f, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a1, 
       0x8, 0x2c, 0x1, 0x2, 0x3a1, 0x3a2, 0x5, 0x54, 0x2b, 0x2, 0x3a2, 0x3ab, 
       0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a4, 0xc, 0x4, 0x2, 0x2, 0x3a4, 0x3a5, 
       0x7, 0x78, 0x2, 0x2, 0x3a5, 0x3aa, 0x5, 0x54, 0x2b, 0x2, 0x3a6, 0x3a7, 
       0xc, 0x3, 0x2, 0x2, 0x3a7, 0x3a8, 0x7, 0x79, 0x2, 0x2, 0x3a8, 0x3aa, 
       0x5, 0x54, 0x2b, 0x2, 0x3a9, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3a6, 
       0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3a9, 
       0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x57, 
       0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3af, 
       0x8, 0x2d, 0x1, 0x2, 0x3af, 0x3b0, 0x5, 0x56, 0x2c, 0x2, 0x3b0, 0x3b6, 
       0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b2, 0xc, 0x3, 0x2, 0x2, 0x3b2, 0x3b3, 
       0x7, 0x65, 0x2, 0x2, 0x3b3, 0x3b5, 0x5, 0x56, 0x2c, 0x2, 0x3b4, 0x3b1, 
       0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b4, 
       0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x59, 
       0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 
       0x8, 0x2e, 0x1, 0x2, 0x3ba, 0x3bb, 0x5, 0x58, 0x2d, 0x2, 0x3bb, 0x3c1, 
       0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 0xc, 0x3, 0x2, 0x2, 0x3bd, 0x3be, 
       0x7, 0x64, 0x2, 0x2, 0x3be, 0x3c0, 0x5, 0x58, 0x2d, 0x2, 0x3bf, 0x3bc, 
       0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3bf, 
       0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0x3c5, 
       0x8, 0x2f, 0x1, 0x2, 0x3c5, 0x3c6, 0x5, 0x5a, 0x2e, 0x2, 0x3c6, 0x3cc, 
       0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0xc, 0x3, 0x2, 0x2, 0x3c8, 0x3c9, 
       0x7, 0x66, 0x2, 0x2, 0x3c9, 0x3cb, 0x5, 0x5a, 0x2e, 0x2, 0x3ca, 0x3c7, 
       0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3ca, 
       0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 
       0x8, 0x30, 0x1, 0x2, 0x3d0, 0x3d1, 0x5, 0x5c, 0x2f, 0x2, 0x3d1, 0x3d7, 
       0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d3, 0xc, 0x3, 0x2, 0x2, 0x3d3, 0x3d4, 
       0x7, 0x7c, 0x2, 0x2, 0x3d4, 0x3d6, 0x5, 0x5c, 0x2f, 0x2, 0x3d5, 0x3d2, 
       0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d5, 
       0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x5f, 
       0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3db, 
       0x8, 0x31, 0x1, 0x2, 0x3db, 0x3dc, 0x5, 0x5e, 0x30, 0x2, 0x3dc, 0x3e2, 
       0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3de, 0xc, 0x3, 0x2, 0x2, 0x3de, 0x3df, 
       0x7, 0x7d, 0x2, 0x2, 0x3df, 0x3e1, 0x5, 0x5e, 0x30, 0x2, 0x3e0, 0x3dd, 
       0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e0, 
       0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3ed, 
       0x5, 0x60, 0x31, 0x2, 0x3e6, 0x3e7, 0x5, 0x60, 0x31, 0x2, 0x3e7, 
       0x3e8, 0x7, 0x5b, 0x2, 0x2, 0x3e8, 0x3e9, 0x5, 0x6a, 0x36, 0x2, 0x3e9, 
       0x3ea, 0x7, 0x59, 0x2, 0x2, 0x3ea, 0x3eb, 0x5, 0x66, 0x34, 0x2, 0x3eb, 
       0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3ec, 
       0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x63, 0x3, 0x2, 0x2, 0x2, 0x3ee, 
       0x3f0, 0x7, 0x42, 0x2, 0x2, 0x3ef, 0x3f1, 0x5, 0x66, 0x34, 0x2, 0x3f0, 
       0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f1, 
       0x65, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f9, 0x5, 0x62, 0x32, 0x2, 0x3f3, 
       0x3f4, 0x5, 0x60, 0x31, 0x2, 0x3f4, 0x3f5, 0x5, 0x68, 0x35, 0x2, 
       0x3f5, 0x3f6, 0x5, 0x138, 0x9d, 0x2, 0x3f6, 0x3f9, 0x3, 0x2, 0x2, 
       0x2, 0x3f7, 0x3f9, 0x5, 0x64, 0x33, 0x2, 0x3f8, 0x3f2, 0x3, 0x2, 
       0x2, 0x2, 0x3f8, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f7, 0x3, 0x2, 
       0x2, 0x2, 0x3f9, 0x67, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fb, 0x9, 0x5, 
       0x2, 0x2, 0x3fb, 0x69, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 0x8, 0x36, 
       0x1, 0x2, 0x3fd, 0x3fe, 0x5, 0x66, 0x34, 0x2, 0x3fe, 0x404, 0x3, 
       0x2, 0x2, 0x2, 0x3ff, 0x400, 0xc, 0x3, 0x2, 0x2, 0x400, 0x401, 0x7, 
       0x80, 0x2, 0x2, 0x401, 0x403, 0x5, 0x66, 0x34, 0x2, 0x402, 0x3ff, 
       0x3, 0x2, 0x2, 0x2, 0x403, 0x406, 0x3, 0x2, 0x2, 0x2, 0x404, 0x402, 
       0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 0x3, 0x2, 0x2, 0x2, 0x405, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x406, 0x404, 0x3, 0x2, 0x2, 0x2, 0x407, 0x408, 
       0x5, 0x62, 0x32, 0x2, 0x408, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x409, 0x424, 
       0x5, 0x74, 0x3b, 0x2, 0x40a, 0x40c, 0x5, 0xe2, 0x72, 0x2, 0x40b, 
       0x40a, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x40c, 
       0x40d, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x424, 0x5, 0x76, 0x3c, 0x2, 0x40e, 
       0x410, 0x5, 0xe2, 0x72, 0x2, 0x40f, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x40f, 
       0x410, 0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 0x3, 0x2, 0x2, 0x2, 0x411, 
       0x424, 0x5, 0x78, 0x3d, 0x2, 0x412, 0x414, 0x5, 0xe2, 0x72, 0x2, 
       0x413, 0x412, 0x3, 0x2, 0x2, 0x2, 0x413, 0x414, 0x3, 0x2, 0x2, 0x2, 
       0x414, 0x415, 0x3, 0x2, 0x2, 0x2, 0x415, 0x424, 0x5, 0x7c, 0x3f, 
       0x2, 0x416, 0x418, 0x5, 0xe2, 0x72, 0x2, 0x417, 0x416, 0x3, 0x2, 
       0x2, 0x2, 0x417, 0x418, 0x3, 0x2, 0x2, 0x2, 0x418, 0x419, 0x3, 0x2, 
       0x2, 0x2, 0x419, 0x424, 0x5, 0x7e, 0x40, 0x2, 0x41a, 0x41c, 0x5, 
       0xe2, 0x72, 0x2, 0x41b, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x41c, 
       0x3, 0x2, 0x2, 0x2, 0x41c, 0x41d, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x424, 
       0x5, 0x86, 0x44, 0x2, 0x41e, 0x424, 0x5, 0x88, 0x45, 0x2, 0x41f, 
       0x421, 0x5, 0xe2, 0x72, 0x2, 0x420, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x420, 
       0x421, 0x3, 0x2, 0x2, 0x2, 0x421, 0x422, 0x3, 0x2, 0x2, 0x2, 0x422, 
       0x424, 0x5, 0x190, 0xc9, 0x2, 0x423, 0x409, 0x3, 0x2, 0x2, 0x2, 0x423, 
       0x40b, 0x3, 0x2, 0x2, 0x2, 0x423, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x423, 
       0x413, 0x3, 0x2, 0x2, 0x2, 0x423, 0x417, 0x3, 0x2, 0x2, 0x2, 0x423, 
       0x41b, 0x3, 0x2, 0x2, 0x2, 0x423, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x423, 
       0x420, 0x3, 0x2, 0x2, 0x2, 0x424, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x425, 
       0x428, 0x5, 0x76, 0x3c, 0x2, 0x426, 0x428, 0x5, 0x94, 0x4b, 0x2, 
       0x427, 0x425, 0x3, 0x2, 0x2, 0x2, 0x427, 0x426, 0x3, 0x2, 0x2, 0x2, 
       0x428, 0x71, 0x3, 0x2, 0x2, 0x2, 0x429, 0x432, 0x5, 0x6a, 0x36, 0x2, 
       0x42a, 0x42c, 0x5, 0xe2, 0x72, 0x2, 0x42b, 0x42a, 0x3, 0x2, 0x2, 
       0x2, 0x42b, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x42d, 0x3, 0x2, 0x2, 
       0x2, 0x42d, 0x42e, 0x5, 0x9e, 0x50, 0x2, 0x42e, 0x42f, 0x5, 0xfe, 
       0x80, 0x2, 0x42f, 0x430, 0x5, 0x136, 0x9c, 0x2, 0x430, 0x432, 0x3, 
       0x2, 0x2, 0x2, 0x431, 0x429, 0x3, 0x2, 0x2, 0x2, 0x431, 0x42b, 0x3, 
       0x2, 0x2, 0x2, 0x432, 0x73, 0x3, 0x2, 0x2, 0x2, 0x433, 0x435, 0x5, 
       0xe2, 0x72, 0x2, 0x434, 0x433, 0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 
       0x3, 0x2, 0x2, 0x2, 0x435, 0x436, 0x3, 0x2, 0x2, 0x2, 0x436, 0x437, 
       0x7, 0x8c, 0x2, 0x2, 0x437, 0x438, 0x7, 0x59, 0x2, 0x2, 0x438, 0x448, 
       0x5, 0x6e, 0x38, 0x2, 0x439, 0x43b, 0x5, 0xe2, 0x72, 0x2, 0x43a, 
       0x439, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x43b, 
       0x43c, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43d, 0x7, 0xd, 0x2, 0x2, 0x43d, 
       0x43e, 0x5, 0x6c, 0x37, 0x2, 0x43e, 0x43f, 0x7, 0x59, 0x2, 0x2, 0x43f, 
       0x440, 0x5, 0x6e, 0x38, 0x2, 0x440, 0x448, 0x3, 0x2, 0x2, 0x2, 0x441, 
       0x443, 0x5, 0xe2, 0x72, 0x2, 0x442, 0x441, 0x3, 0x2, 0x2, 0x2, 0x442, 
       0x443, 0x3, 0x2, 0x2, 0x2, 0x443, 0x444, 0x3, 0x2, 0x2, 0x2, 0x444, 
       0x445, 0x7, 0x18, 0x2, 0x2, 0x445, 0x446, 0x7, 0x59, 0x2, 0x2, 0x446, 
       0x448, 0x5, 0x6e, 0x38, 0x2, 0x447, 0x434, 0x3, 0x2, 0x2, 0x2, 0x447, 
       0x43a, 0x3, 0x2, 0x2, 0x2, 0x447, 0x442, 0x3, 0x2, 0x2, 0x2, 0x448, 
       0x75, 0x3, 0x2, 0x2, 0x2, 0x449, 0x44b, 0x5, 0x6a, 0x36, 0x2, 0x44a, 
       0x449, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44b, 
       0x44c, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x44d, 0x7, 0x58, 0x2, 0x2, 0x44d, 
       0x77, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x450, 0x7, 0x52, 0x2, 0x2, 0x44f, 
       0x451, 0x5, 0x7a, 0x3e, 0x2, 0x450, 0x44f, 0x3, 0x2, 0x2, 0x2, 0x450, 
       0x451, 0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0x3, 0x2, 0x2, 0x2, 0x452, 
       0x453, 0x7, 0x53, 0x2, 0x2, 0x453, 0x79, 0x3, 0x2, 0x2, 0x2, 0x454, 
       0x455, 0x8, 0x3e, 0x1, 0x2, 0x455, 0x456, 0x5, 0x6e, 0x38, 0x2, 0x456, 
       0x45b, 0x3, 0x2, 0x2, 0x2, 0x457, 0x458, 0xc, 0x3, 0x2, 0x2, 0x458, 
       0x45a, 0x5, 0x6e, 0x38, 0x2, 0x459, 0x457, 0x3, 0x2, 0x2, 0x2, 0x45a, 
       0x45d, 0x3, 0x2, 0x2, 0x2, 0x45b, 0x459, 0x3, 0x2, 0x2, 0x2, 0x45b, 
       0x45c, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x45d, 
       0x45b, 0x3, 0x2, 0x2, 0x2, 0x45e, 0x460, 0x7, 0x27, 0x2, 0x2, 0x45f, 
       0x461, 0x7, 0x14, 0x2, 0x2, 0x460, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x460, 
       0x461, 0x3, 0x2, 0x2, 0x2, 0x461, 0x462, 0x3, 0x2, 0x2, 0x2, 0x462, 
       0x464, 0x7, 0x56, 0x2, 0x2, 0x463, 0x465, 0x5, 0x70, 0x39, 0x2, 0x464, 
       0x463, 0x3, 0x2, 0x2, 0x2, 0x464, 0x465, 0x3, 0x2, 0x2, 0x2, 0x465, 
       0x466, 0x3, 0x2, 0x2, 0x2, 0x466, 0x467, 0x5, 0x72, 0x3a, 0x2, 0x467, 
       0x468, 0x7, 0x57, 0x2, 0x2, 0x468, 0x469, 0x5, 0x6e, 0x38, 0x2, 0x469, 
       0x482, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x46c, 0x7, 0x27, 0x2, 0x2, 0x46b, 
       0x46d, 0x7, 0x14, 0x2, 0x2, 0x46c, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x46c, 
       0x46d, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x46e, 
       0x470, 0x7, 0x56, 0x2, 0x2, 0x46f, 0x471, 0x5, 0x70, 0x39, 0x2, 0x470, 
       0x46f, 0x3, 0x2, 0x2, 0x2, 0x470, 0x471, 0x3, 0x2, 0x2, 0x2, 0x471, 
       0x472, 0x3, 0x2, 0x2, 0x2, 0x472, 0x473, 0x5, 0x72, 0x3a, 0x2, 0x473, 
       0x474, 0x7, 0x57, 0x2, 0x2, 0x474, 0x475, 0x5, 0x6e, 0x38, 0x2, 0x475, 
       0x476, 0x7, 0x1d, 0x2, 0x2, 0x476, 0x477, 0x5, 0x6e, 0x38, 0x2, 0x477, 
       0x482, 0x3, 0x2, 0x2, 0x2, 0x478, 0x479, 0x7, 0x3e, 0x2, 0x2, 0x479, 
       0x47b, 0x7, 0x56, 0x2, 0x2, 0x47a, 0x47c, 0x5, 0x70, 0x39, 0x2, 0x47b, 
       0x47a, 0x3, 0x2, 0x2, 0x2, 0x47b, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x47c, 
       0x47d, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x47e, 0x5, 0x72, 0x3a, 0x2, 0x47e, 
       0x47f, 0x7, 0x57, 0x2, 0x2, 0x47f, 0x480, 0x5, 0x6e, 0x38, 0x2, 0x480, 
       0x482, 0x3, 0x2, 0x2, 0x2, 0x481, 0x45e, 0x3, 0x2, 0x2, 0x2, 0x481, 
       0x46a, 0x3, 0x2, 0x2, 0x2, 0x481, 0x478, 0x3, 0x2, 0x2, 0x2, 0x482, 
       0x7d, 0x3, 0x2, 0x2, 0x2, 0x483, 0x484, 0x7, 0x4f, 0x2, 0x2, 0x484, 
       0x485, 0x7, 0x56, 0x2, 0x2, 0x485, 0x486, 0x5, 0x72, 0x3a, 0x2, 0x486, 
       0x487, 0x7, 0x57, 0x2, 0x2, 0x487, 0x488, 0x5, 0x6e, 0x38, 0x2, 0x488, 
       0x4a7, 0x3, 0x2, 0x2, 0x2, 0x489, 0x48a, 0x7, 0x1a, 0x2, 0x2, 0x48a, 
       0x48b, 0x5, 0x6e, 0x38, 0x2, 0x48b, 0x48c, 0x7, 0x4f, 0x2, 0x2, 0x48c, 
       0x48d, 0x7, 0x56, 0x2, 0x2, 0x48d, 0x48e, 0x5, 0x6a, 0x36, 0x2, 0x48e, 
       0x48f, 0x7, 0x57, 0x2, 0x2, 0x48f, 0x490, 0x7, 0x58, 0x2, 0x2, 0x490, 
       0x4a7, 0x3, 0x2, 0x2, 0x2, 0x491, 0x492, 0x7, 0x24, 0x2, 0x2, 0x492, 
       0x493, 0x7, 0x56, 0x2, 0x2, 0x493, 0x495, 0x5, 0x70, 0x39, 0x2, 0x494, 
       0x496, 0x5, 0x72, 0x3a, 0x2, 0x495, 0x494, 0x3, 0x2, 0x2, 0x2, 0x495, 
       0x496, 0x3, 0x2, 0x2, 0x2, 0x496, 0x497, 0x3, 0x2, 0x2, 0x2, 0x497, 
       0x499, 0x7, 0x58, 0x2, 0x2, 0x498, 0x49a, 0x5, 0x6a, 0x36, 0x2, 0x499, 
       0x498, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 0x3, 0x2, 0x2, 0x2, 0x49a, 
       0x49b, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x49c, 0x7, 0x57, 0x2, 0x2, 0x49c, 
       0x49d, 0x5, 0x6e, 0x38, 0x2, 0x49d, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x49e, 
       0x49f, 0x7, 0x24, 0x2, 0x2, 0x49f, 0x4a0, 0x7, 0x56, 0x2, 0x2, 0x4a0, 
       0x4a1, 0x5, 0x82, 0x42, 0x2, 0x4a1, 0x4a2, 0x7, 0x59, 0x2, 0x2, 0x4a2, 
       0x4a3, 0x5, 0x84, 0x43, 0x2, 0x4a3, 0x4a4, 0x7, 0x57, 0x2, 0x2, 0x4a4, 
       0x4a5, 0x5, 0x6e, 0x38, 0x2, 0x4a5, 0x4a7, 0x3, 0x2, 0x2, 0x2, 0x4a6, 
       0x483, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x489, 0x3, 0x2, 0x2, 0x2, 0x4a6, 
       0x491, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x4a7, 
       0x7f, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4aa, 0x5, 0xe2, 0x72, 0x2, 0x4a9, 
       0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4aa, 
       0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ab, 0x4ac, 0x5, 0x9e, 0x50, 0x2, 0x4ac, 
       0x4ad, 0x5, 0xfe, 0x80, 0x2, 0x4ad, 0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4ae, 
       0x4b0, 0x5, 0xe2, 0x72, 0x2, 0x4af, 0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4af, 
       0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4b1, 0x3, 0x2, 0x2, 0x2, 0x4b1, 
       0x4b3, 0x5, 0x9e, 0x50, 0x2, 0x4b2, 0x4b4, 0x5, 0x112, 0x8a, 0x2, 
       0x4b3, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b4, 0x3, 0x2, 0x2, 0x2, 
       0x4b4, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b6, 0x7, 0x54, 0x2, 0x2, 
       0x4b6, 0x4b7, 0x5, 0x19c, 0xcf, 0x2, 0x4b7, 0x4b8, 0x7, 0x55, 0x2, 
       0x2, 0x4b8, 0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4b9, 0x4a9, 0x3, 0x2, 0x2, 
       0x2, 0x4b9, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x4ba, 0x81, 0x3, 0x2, 0x2, 
       0x2, 0x4bb, 0x4bd, 0x5, 0xe2, 0x72, 0x2, 0x4bc, 0x4bb, 0x3, 0x2, 
       0x2, 0x2, 0x4bc, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4be, 0x3, 0x2, 
       0x2, 0x2, 0x4be, 0x4bf, 0x5, 0x9e, 0x50, 0x2, 0x4bf, 0x4c0, 0x5, 
       0xfe, 0x80, 0x2, 0x4c0, 0x83, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c2, 0x5, 
       0x13e, 0xa0, 0x2, 0x4c2, 0x85, 0x3, 0x2, 0x2, 0x2, 0x4c3, 0x4c4, 
       0x7, 0xc, 0x2, 0x2, 0x4c4, 0x4d0, 0x7, 0x58, 0x2, 0x2, 0x4c5, 0x4c6, 
       0x7, 0x16, 0x2, 0x2, 0x4c6, 0x4d0, 0x7, 0x58, 0x2, 0x2, 0x4c7, 0x4c9, 
       0x7, 0x36, 0x2, 0x2, 0x4c8, 0x4ca, 0x5, 0x13e, 0xa0, 0x2, 0x4c9, 
       0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0x4ca, 
       0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4d0, 0x7, 0x58, 0x2, 0x2, 0x4cc, 
       0x4cd, 0x7, 0x26, 0x2, 0x2, 0x4cd, 0x4ce, 0x7, 0x8c, 0x2, 0x2, 0x4ce, 
       0x4d0, 0x7, 0x58, 0x2, 0x2, 0x4cf, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
       0x4c5, 0x3, 0x2, 0x2, 0x2, 0x4cf, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4cf, 
       0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x87, 0x3, 0x2, 0x2, 0x2, 0x4d1, 
       0x4d2, 0x5, 0x8e, 0x48, 0x2, 0x4d2, 0x89, 0x3, 0x2, 0x2, 0x2, 0x4d3, 
       0x4d4, 0x8, 0x46, 0x1, 0x2, 0x4d4, 0x4d5, 0x5, 0x8c, 0x47, 0x2, 0x4d5, 
       0x4da, 0x3, 0x2, 0x2, 0x2, 0x4d6, 0x4d7, 0xc, 0x3, 0x2, 0x2, 0x4d7, 
       0x4d9, 0x5, 0x8c, 0x47, 0x2, 0x4d8, 0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d9, 
       0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4da, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4da, 
       0x4db, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x4dc, 
       0x4da, 0x3, 0x2, 0x2, 0x2, 0x4dd, 0x4e9, 0x5, 0x8e, 0x48, 0x2, 0x4de, 
       0x4e9, 0x5, 0x90, 0x49, 0x2, 0x4df, 0x4e9, 0x5, 0x128, 0x95, 0x2, 
       0x4e0, 0x4e9, 0x5, 0x176, 0xbc, 0x2, 0x4e1, 0x4e9, 0x5, 0x18e, 0xc8, 
       0x2, 0x4e2, 0x4e9, 0x5, 0x18a, 0xc6, 0x2, 0x4e3, 0x4e9, 0x5, 0x18c, 
       0xc7, 0x2, 0x4e4, 0x4e9, 0x5, 0xe0, 0x71, 0x2, 0x4e5, 0x4e9, 0x5, 
       0xc6, 0x64, 0x2, 0x4e6, 0x4e9, 0x5, 0x98, 0x4d, 0x2, 0x4e7, 0x4e9, 
       0x5, 0x9a, 0x4e, 0x2, 0x4e8, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4de, 
       0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4df, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e0, 
       0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e1, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e2, 
       0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e4, 
       0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e6, 
       0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e9, 0x8d, 
       0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4f3, 0x5, 0x94, 0x4b, 0x2, 0x4eb, 0x4f3, 
       0x5, 0xde, 0x70, 0x2, 0x4ec, 0x4f3, 0x5, 0xd2, 0x6a, 0x2, 0x4ed, 
       0x4f3, 0x5, 0xd6, 0x6c, 0x2, 0x4ee, 0x4f3, 0x5, 0xdc, 0x6f, 0x2, 
       0x4ef, 0x4f3, 0x5, 0x96, 0x4c, 0x2, 0x4f0, 0x4f3, 0x5, 0x92, 0x4a, 
       0x2, 0x4f1, 0x4f3, 0x5, 0xba, 0x5e, 0x2, 0x4f2, 0x4ea, 0x3, 0x2, 
       0x2, 0x2, 0x4f2, 0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4ec, 0x3, 0x2, 
       0x2, 0x2, 0x4f2, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4ee, 0x3, 0x2, 
       0x2, 0x2, 0x4f2, 0x4ef, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f0, 0x3, 0x2, 
       0x2, 0x2, 0x4f2, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x8f, 0x3, 0x2, 
       0x2, 0x2, 0x4f4, 0x4f6, 0x5, 0xe2, 0x72, 0x2, 0x4f5, 0x4f4, 0x3, 
       0x2, 0x2, 0x2, 0x4f5, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f6, 0x4f7, 0x3, 
       0x2, 0x2, 0x2, 0x4f7, 0x4f8, 0x5, 0xfe, 0x80, 0x2, 0x4f8, 0x4f9, 
       0x7, 0x58, 0x2, 0x2, 0x4f9, 0x91, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4fb, 
       0x7, 0x4a, 0x2, 0x2, 0x4fb, 0x4fd, 0x7, 0x8c, 0x2, 0x2, 0x4fc, 0x4fe, 
       0x5, 0xe2, 0x72, 0x2, 0x4fd, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4fe, 
       0x3, 0x2, 0x2, 0x2, 0x4fe, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x500, 
       0x7, 0x69, 0x2, 0x2, 0x500, 0x501, 0x5, 0x116, 0x8c, 0x2, 0x501, 
       0x502, 0x7, 0x58, 0x2, 0x2, 0x502, 0x93, 0x3, 0x2, 0x2, 0x2, 0x503, 
       0x505, 0x5, 0x9e, 0x50, 0x2, 0x504, 0x506, 0x5, 0xfa, 0x7e, 0x2, 
       0x505, 0x504, 0x3, 0x2, 0x2, 0x2, 0x505, 0x506, 0x3, 0x2, 0x2, 0x2, 
       0x506, 0x507, 0x3, 0x2, 0x2, 0x2, 0x507, 0x508, 0x7, 0x58, 0x2, 0x2, 
       0x508, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x509, 0x50a, 0x5, 0xe2, 0x72, 
       0x2, 0x50a, 0x50b, 0x5, 0x9e, 0x50, 0x2, 0x50b, 0x50c, 0x5, 0xfa, 
       0x7e, 0x2, 0x50c, 0x50d, 0x7, 0x58, 0x2, 0x2, 0x50d, 0x51c, 0x3, 
       0x2, 0x2, 0x2, 0x50e, 0x510, 0x5, 0xe2, 0x72, 0x2, 0x50f, 0x50e, 
       0x3, 0x2, 0x2, 0x2, 0x50f, 0x510, 0x3, 0x2, 0x2, 0x2, 0x510, 0x511, 
       0x3, 0x2, 0x2, 0x2, 0x511, 0x513, 0x5, 0x9e, 0x50, 0x2, 0x512, 0x514, 
       0x5, 0x112, 0x8a, 0x2, 0x513, 0x512, 0x3, 0x2, 0x2, 0x2, 0x513, 0x514, 
       0x3, 0x2, 0x2, 0x2, 0x514, 0x515, 0x3, 0x2, 0x2, 0x2, 0x515, 0x516, 
       0x7, 0x54, 0x2, 0x2, 0x516, 0x517, 0x5, 0x19c, 0xcf, 0x2, 0x517, 
       0x518, 0x7, 0x55, 0x2, 0x2, 0x518, 0x519, 0x5, 0x134, 0x9b, 0x2, 
       0x519, 0x51a, 0x7, 0x58, 0x2, 0x2, 0x51a, 0x51c, 0x3, 0x2, 0x2, 0x2, 
       0x51b, 0x503, 0x3, 0x2, 0x2, 0x2, 0x51b, 0x509, 0x3, 0x2, 0x2, 0x2, 
       0x51b, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x95, 0x3, 0x2, 0x2, 0x2, 
       0x51d, 0x51e, 0x7, 0x3b, 0x2, 0x2, 0x51e, 0x51f, 0x7, 0x56, 0x2, 
       0x2, 0x51f, 0x520, 0x5, 0x6c, 0x37, 0x2, 0x520, 0x521, 0x7, 0x57, 
       0x2, 0x2, 0x521, 0x522, 0x7, 0x58, 0x2, 0x2, 0x522, 0x52c, 0x3, 0x2, 
       0x2, 0x2, 0x523, 0x524, 0x7, 0x3b, 0x2, 0x2, 0x524, 0x525, 0x7, 0x56, 
       0x2, 0x2, 0x525, 0x526, 0x5, 0x6c, 0x37, 0x2, 0x526, 0x527, 0x7, 
       0x80, 0x2, 0x2, 0x527, 0x528, 0x7, 0x87, 0x2, 0x2, 0x528, 0x529, 
       0x7, 0x57, 0x2, 0x2, 0x529, 0x52a, 0x7, 0x58, 0x2, 0x2, 0x52a, 0x52c, 
       0x3, 0x2, 0x2, 0x2, 0x52b, 0x51d, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x523, 
       0x3, 0x2, 0x2, 0x2, 0x52c, 0x97, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52e, 
       0x7, 0x58, 0x2, 0x2, 0x52e, 0x99, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x530, 
       0x5, 0xe2, 0x72, 0x2, 0x530, 0x531, 0x7, 0x58, 0x2, 0x2, 0x531, 0x9b, 
       0x3, 0x2, 0x2, 0x2, 0x532, 0x53a, 0x5, 0xa0, 0x51, 0x2, 0x533, 0x53a, 
       0x5, 0xa8, 0x55, 0x2, 0x534, 0x53a, 0x5, 0xa2, 0x52, 0x2, 0x535, 
       0x53a, 0x7, 0x25, 0x2, 0x2, 0x536, 0x53a, 0x7, 0x45, 0x2, 0x2, 0x537, 
       0x53a, 0x7, 0x14, 0x2, 0x2, 0x538, 0x53a, 0x7, 0x28, 0x2, 0x2, 0x539, 
       0x532, 0x3, 0x2, 0x2, 0x2, 0x539, 0x533, 0x3, 0x2, 0x2, 0x2, 0x539, 
       0x534, 0x3, 0x2, 0x2, 0x2, 0x539, 0x535, 0x3, 0x2, 0x2, 0x2, 0x539, 
       0x536, 0x3, 0x2, 0x2, 0x2, 0x539, 0x537, 0x3, 0x2, 0x2, 0x2, 0x539, 
       0x538, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x53b, 
       0x53d, 0x5, 0x9c, 0x4f, 0x2, 0x53c, 0x53e, 0x5, 0xe2, 0x72, 0x2, 
       0x53d, 0x53c, 0x3, 0x2, 0x2, 0x2, 0x53d, 0x53e, 0x3, 0x2, 0x2, 0x2, 
       0x53e, 0x543, 0x3, 0x2, 0x2, 0x2, 0x53f, 0x540, 0x5, 0x9c, 0x4f, 
       0x2, 0x540, 0x541, 0x5, 0x9e, 0x50, 0x2, 0x541, 0x543, 0x3, 0x2, 
       0x2, 0x2, 0x542, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x542, 0x53f, 0x3, 0x2, 
       0x2, 0x2, 0x543, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x544, 0x545, 0x9, 0x6, 
       0x2, 0x2, 0x545, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x546, 0x547, 0x9, 0x7, 
       0x2, 0x2, 0x547, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x548, 0x54d, 0x5, 0xac, 
       0x57, 0x2, 0x549, 0x54d, 0x5, 0xb2, 0x5a, 0x2, 0x54a, 0x54d, 0x5, 
       0x188, 0xc5, 0x2, 0x54b, 0x54d, 0x5, 0x110, 0x89, 0x2, 0x54c, 0x548, 
       0x3, 0x2, 0x2, 0x2, 0x54c, 0x549, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x54a, 
       0x3, 0x2, 0x2, 0x2, 0x54c, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54d, 0xa5, 
       0x3, 0x2, 0x2, 0x2, 0x54e, 0x550, 0x5, 0xa4, 0x53, 0x2, 0x54f, 0x551, 
       0x5, 0xe2, 0x72, 0x2, 0x550, 0x54f, 0x3, 0x2, 0x2, 0x2, 0x550, 0x551, 
       0x3, 0x2, 0x2, 0x2, 0x551, 0x556, 0x3, 0x2, 0x2, 0x2, 0x552, 0x553, 
       0x5, 0xa4, 0x53, 0x2, 0x553, 0x554, 0x5, 0xa6, 0x54, 0x2, 0x554, 
       0x556, 0x3, 0x2, 0x2, 0x2, 0x555, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x555, 
       0x552, 0x3, 0x2, 0x2, 0x2, 0x556, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x557, 
       0x55b, 0x5, 0xa4, 0x53, 0x2, 0x558, 0x55b, 0x5, 0x140, 0xa1, 0x2, 
       0x559, 0x55b, 0x5, 0xb4, 0x5b, 0x2, 0x55a, 0x557, 0x3, 0x2, 0x2, 
       0x2, 0x55a, 0x558, 0x3, 0x2, 0x2, 0x2, 0x55a, 0x559, 0x3, 0x2, 0x2, 
       0x2, 0x55b, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x55c, 0x55e, 0x5, 0xa8, 0x55, 
       0x2, 0x55d, 0x55f, 0x5, 0xe2, 0x72, 0x2, 0x55e, 0x55d, 0x3, 0x2, 
       0x2, 0x2, 0x55e, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x55f, 0x564, 0x3, 0x2, 
       0x2, 0x2, 0x560, 0x561, 0x5, 0xa8, 0x55, 0x2, 0x561, 0x562, 0x5, 
       0xaa, 0x56, 0x2, 0x562, 0x564, 0x3, 0x2, 0x2, 0x2, 0x563, 0x55c, 
       0x3, 0x2, 0x2, 0x2, 0x563, 0x560, 0x3, 0x2, 0x2, 0x2, 0x564, 0xab, 
       0x3, 0x2, 0x2, 0x2, 0x565, 0x567, 0x5, 0x18, 0xd, 0x2, 0x566, 0x565, 
       0x3, 0x2, 0x2, 0x2, 0x566, 0x567, 0x3, 0x2, 0x2, 0x2, 0x567, 0x568, 
       0x3, 0x2, 0x2, 0x2, 0x568, 0x581, 0x5, 0xae, 0x58, 0x2, 0x569, 0x56a, 
       0x5, 0x18, 0xd, 0x2, 0x56a, 0x56b, 0x7, 0x3f, 0x2, 0x2, 0x56b, 0x56c, 
       0x5, 0x180, 0xc1, 0x2, 0x56c, 0x581, 0x3, 0x2, 0x2, 0x2, 0x56d, 0x56f, 
       0x5, 0x18, 0xd, 0x2, 0x56e, 0x56d, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x56f, 
       0x3, 0x2, 0x2, 0x2, 0x56f, 0x570, 0x3, 0x2, 0x2, 0x2, 0x570, 0x581, 
       0x5, 0xc, 0x7, 0x2, 0x571, 0x581, 0x7, 0xf, 0x2, 0x2, 0x572, 0x581, 
       0x7, 0x10, 0x2, 0x2, 0x573, 0x581, 0x7, 0x11, 0x2, 0x2, 0x574, 0x581, 
       0x7, 0x4e, 0x2, 0x2, 0x575, 0x581, 0x7, 0xb, 0x2, 0x2, 0x576, 0x581, 
       0x7, 0x37, 0x2, 0x2, 0x577, 0x581, 0x7, 0x29, 0x2, 0x2, 0x578, 0x581, 
       0x7, 0x2a, 0x2, 0x2, 0x579, 0x581, 0x7, 0x38, 0x2, 0x2, 0x57a, 0x581, 
       0x7, 0x49, 0x2, 0x2, 0x57b, 0x581, 0x7, 0x23, 0x2, 0x2, 0x57c, 0x581, 
       0x7, 0x1b, 0x2, 0x2, 0x57d, 0x581, 0x7, 0x4c, 0x2, 0x2, 0x57e, 0x581, 
       0x7, 0xa, 0x2, 0x2, 0x57f, 0x581, 0x5, 0xb0, 0x59, 0x2, 0x580, 0x566, 
       0x3, 0x2, 0x2, 0x2, 0x580, 0x569, 0x3, 0x2, 0x2, 0x2, 0x580, 0x56e, 
       0x3, 0x2, 0x2, 0x2, 0x580, 0x571, 0x3, 0x2, 0x2, 0x2, 0x580, 0x572, 
       0x3, 0x2, 0x2, 0x2, 0x580, 0x573, 0x3, 0x2, 0x2, 0x2, 0x580, 0x574, 
       0x3, 0x2, 0x2, 0x2, 0x580, 0x575, 0x3, 0x2, 0x2, 0x2, 0x580, 0x576, 
       0x3, 0x2, 0x2, 0x2, 0x580, 0x577, 0x3, 0x2, 0x2, 0x2, 0x580, 0x578, 
       0x3, 0x2, 0x2, 0x2, 0x580, 0x579, 0x3, 0x2, 0x2, 0x2, 0x580, 0x57a, 
       0x3, 0x2, 0x2, 0x2, 0x580, 0x57b, 0x3, 0x2, 0x2, 0x2, 0x580, 0x57c, 
       0x3, 0x2, 0x2, 0x2, 0x580, 0x57d, 0x3, 0x2, 0x2, 0x2, 0x580, 0x57e, 
       0x3, 0x2, 0x2, 0x2, 0x580, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x581, 0xad, 
       0x3, 0x2, 0x2, 0x2, 0x582, 0x587, 0x5, 0x8, 0x5, 0x2, 0x583, 0x587, 
       0x5, 0xa, 0x6, 0x2, 0x584, 0x587, 0x5, 0x2, 0x2, 0x2, 0x585, 0x587, 
       0x5, 0x180, 0xc1, 0x2, 0x586, 0x582, 0x3, 0x2, 0x2, 0x2, 0x586, 0x583, 
       0x3, 0x2, 0x2, 0x2, 0x586, 0x584, 0x3, 0x2, 0x2, 0x2, 0x586, 0x585, 
       0x3, 0x2, 0x2, 0x2, 0x587, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x588, 0x589, 
       0x7, 0x17, 0x2, 0x2, 0x589, 0x58a, 0x7, 0x56, 0x2, 0x2, 0x58a, 0x58b, 
       0x5, 0x6a, 0x36, 0x2, 0x58b, 0x58c, 0x7, 0x57, 0x2, 0x2, 0x58c, 0x592, 
       0x3, 0x2, 0x2, 0x2, 0x58d, 0x58e, 0x7, 0x17, 0x2, 0x2, 0x58e, 0x58f, 
       0x7, 0x56, 0x2, 0x2, 0x58f, 0x590, 0x7, 0xa, 0x2, 0x2, 0x590, 0x592, 
       0x7, 0x57, 0x2, 0x2, 0x591, 0x588, 0x3, 0x2, 0x2, 0x2, 0x591, 0x58d, 
       0x3, 0x2, 0x2, 0x2, 0x592, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x593, 0x595, 
       0x5, 0x148, 0xa5, 0x2, 0x594, 0x596, 0x5, 0xe2, 0x72, 0x2, 0x595, 
       0x594, 0x3, 0x2, 0x2, 0x2, 0x595, 0x596, 0x3, 0x2, 0x2, 0x2, 0x596, 
       0x598, 0x3, 0x2, 0x2, 0x2, 0x597, 0x599, 0x5, 0x18, 0xd, 0x2, 0x598, 
       0x597, 0x3, 0x2, 0x2, 0x2, 0x598, 0x599, 0x3, 0x2, 0x2, 0x2, 0x599, 
       0x59a, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x59b, 0x7, 0x8c, 0x2, 0x2, 0x59b, 
       0x5ac, 0x3, 0x2, 0x2, 0x2, 0x59c, 0x59d, 0x5, 0x148, 0xa5, 0x2, 0x59d, 
       0x59e, 0x5, 0x180, 0xc1, 0x2, 0x59e, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0x59f, 
       0x5a0, 0x5, 0x148, 0xa5, 0x2, 0x5a0, 0x5a2, 0x5, 0x18, 0xd, 0x2, 
       0x5a1, 0x5a3, 0x7, 0x3f, 0x2, 0x2, 0x5a2, 0x5a1, 0x3, 0x2, 0x2, 0x2, 
       0x5a2, 0x5a3, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a4, 0x3, 0x2, 0x2, 0x2, 
       0x5a4, 0x5a5, 0x5, 0x180, 0xc1, 0x2, 0x5a5, 0x5ac, 0x3, 0x2, 0x2, 
       0x2, 0x5a6, 0x5a8, 0x7, 0x1e, 0x2, 0x2, 0x5a7, 0x5a9, 0x5, 0x18, 
       0xd, 0x2, 0x5a8, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a8, 0x5a9, 0x3, 0x2, 
       0x2, 0x2, 0x5a9, 0x5aa, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5ac, 0x7, 0x8c, 
       0x2, 0x2, 0x5ab, 0x593, 0x3, 0x2, 0x2, 0x2, 0x5ab, 0x59c, 0x3, 0x2, 
       0x2, 0x2, 0x5ab, 0x59f, 0x3, 0x2, 0x2, 0x2, 0x5ab, 0x5a6, 0x3, 0x2, 
       0x2, 0x2, 0x5ac, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x5ad, 0x5ae, 0x5, 0xb6, 
       0x5c, 0x2, 0x5ae, 0x5b0, 0x7, 0x52, 0x2, 0x2, 0x5af, 0x5b1, 0x5, 
       0xc0, 0x61, 0x2, 0x5b0, 0x5af, 0x3, 0x2, 0x2, 0x2, 0x5b0, 0x5b1, 
       0x3, 0x2, 0x2, 0x2, 0x5b1, 0x5b2, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5b3, 
       0x7, 0x53, 0x2, 0x2, 0x5b3, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5b4, 0x5b5, 
       0x5, 0xb6, 0x5c, 0x2, 0x5b5, 0x5b6, 0x7, 0x52, 0x2, 0x2, 0x5b6, 0x5b7, 
       0x5, 0xc0, 0x61, 0x2, 0x5b7, 0x5b8, 0x7, 0x80, 0x2, 0x2, 0x5b8, 0x5b9, 
       0x7, 0x53, 0x2, 0x2, 0x5b9, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5ad, 
       0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5b4, 0x3, 0x2, 0x2, 0x2, 0x5bb, 0xb5, 
       0x3, 0x2, 0x2, 0x2, 0x5bc, 0x5be, 0x5, 0xbc, 0x5f, 0x2, 0x5bd, 0x5bf, 
       0x5, 0xe2, 0x72, 0x2, 0x5be, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5be, 0x5bf, 
       0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5c1, 0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c2, 
       0x5, 0xb8, 0x5d, 0x2, 0x5c1, 0x5c0, 0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5c2, 
       0x3, 0x2, 0x2, 0x2, 0x5c2, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0x5c3, 0x5c5, 
       0x5, 0xbe, 0x60, 0x2, 0x5c4, 0x5c3, 0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5c5, 
       0x3, 0x2, 0x2, 0x2, 0x5c5, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c8, 
       0x5, 0x18, 0xd, 0x2, 0x5c7, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0x5c7, 0x5c8, 
       0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5ca, 
       0x7, 0x8c, 0x2, 0x2, 0x5ca, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5cd, 
       0x5, 0xbc, 0x5f, 0x2, 0x5cc, 0x5ce, 0x5, 0xe2, 0x72, 0x2, 0x5cd, 
       0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5ce, 0x3, 0x2, 0x2, 0x2, 0x5ce, 
       0x5d0, 0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5d1, 0x5, 0x18, 0xd, 0x2, 0x5d0, 
       0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5d1, 
       0x5d2, 0x3, 0x2, 0x2, 0x2, 0x5d2, 0x5d4, 0x7, 0x8c, 0x2, 0x2, 0x5d3, 
       0x5d5, 0x5, 0xbe, 0x60, 0x2, 0x5d4, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d4, 
       0x5d5, 0x3, 0x2, 0x2, 0x2, 0x5d5, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d6, 
       0x5d7, 0x7, 0x58, 0x2, 0x2, 0x5d7, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x5d8, 
       0x5de, 0x7, 0x1e, 0x2, 0x2, 0x5d9, 0x5da, 0x7, 0x1e, 0x2, 0x2, 0x5da, 
       0x5de, 0x7, 0x12, 0x2, 0x2, 0x5db, 0x5dc, 0x7, 0x1e, 0x2, 0x2, 0x5dc, 
       0x5de, 0x7, 0x3d, 0x2, 0x2, 0x5dd, 0x5d8, 0x3, 0x2, 0x2, 0x2, 0x5dd, 
       0x5d9, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5db, 0x3, 0x2, 0x2, 0x2, 0x5de, 
       0xbd, 0x3, 0x2, 0x2, 0x2, 0x5df, 0x5e0, 0x7, 0x59, 0x2, 0x2, 0x5e0, 
       0x5e1, 0x5, 0xa6, 0x54, 0x2, 0x5e1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x5e2, 
       0x5e3, 0x8, 0x61, 0x1, 0x2, 0x5e3, 0x5e4, 0x5, 0xc2, 0x62, 0x2, 0x5e4, 
       0x5ea, 0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e6, 0xc, 0x3, 0x2, 0x2, 0x5e6, 
       0x5e7, 0x7, 0x80, 0x2, 0x2, 0x5e7, 0x5e9, 0x5, 0xc2, 0x62, 0x2, 0x5e8, 
       0x5e5, 0x3, 0x2, 0x2, 0x2, 0x5e9, 0x5ec, 0x3, 0x2, 0x2, 0x2, 0x5ea, 
       0x5e8, 0x3, 0x2, 0x2, 0x2, 0x5ea, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0x5eb, 
       0xc1, 0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5ea, 0x3, 0x2, 0x2, 0x2, 0x5ed, 
       0x5f3, 0x5, 0xc4, 0x63, 0x2, 0x5ee, 0x5ef, 0x5, 0xc4, 0x63, 0x2, 
       0x5ef, 0x5f0, 0x7, 0x69, 0x2, 0x2, 0x5f0, 0x5f1, 0x5, 0x6c, 0x37, 
       0x2, 0x5f1, 0x5f3, 0x3, 0x2, 0x2, 0x2, 0x5f2, 0x5ed, 0x3, 0x2, 0x2, 
       0x2, 0x5f2, 0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5f3, 0xc3, 0x3, 0x2, 0x2, 
       0x2, 0x5f4, 0x5f6, 0x7, 0x8c, 0x2, 0x2, 0x5f5, 0x5f7, 0x5, 0xe2, 
       0x72, 0x2, 0x5f6, 0x5f5, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5f7, 0x3, 0x2, 
       0x2, 0x2, 0x5f7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5fc, 0x5, 0xc8, 
       0x65, 0x2, 0x5f9, 0x5fc, 0x5, 0xca, 0x66, 0x2, 0x5fa, 0x5fc, 0x5, 
       0xcc, 0x67, 0x2, 0x5fb, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5f9, 
       0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fc, 0xc7, 
       0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5ff, 0x7, 0x28, 0x2, 0x2, 0x5fe, 0x5fd, 
       0x3, 0x2, 0x2, 0x2, 0x5fe, 0x5ff, 0x3, 0x2, 0x2, 0x2, 0x5ff, 0x600, 
       0x3, 0x2, 0x2, 0x2, 0x600, 0x602, 0x7, 0x2c, 0x2, 0x2, 0x601, 0x603, 
       0x5, 0xe2, 0x72, 0x2, 0x602, 0x601, 0x3, 0x2, 0x2, 0x2, 0x602, 0x603, 
       0x3, 0x2, 0x2, 0x2, 0x603, 0x604, 0x3, 0x2, 0x2, 0x2, 0x604, 0x605, 
       0x7, 0x8c, 0x2, 0x2, 0x605, 0x606, 0x7, 0x52, 0x2, 0x2, 0x606, 0x607, 
       0x5, 0xd0, 0x69, 0x2, 0x607, 0x608, 0x7, 0x53, 0x2, 0x2, 0x608, 0xc9, 
       0x3, 0x2, 0x2, 0x2, 0x609, 0x60b, 0x7, 0x28, 0x2, 0x2, 0x60a, 0x609, 
       0x3, 0x2, 0x2, 0x2, 0x60a, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x60c, 
       0x3, 0x2, 0x2, 0x2, 0x60c, 0x60e, 0x7, 0x2c, 0x2, 0x2, 0x60d, 0x60f, 
       0x5, 0xe2, 0x72, 0x2, 0x60e, 0x60d, 0x3, 0x2, 0x2, 0x2, 0x60e, 0x60f, 
       0x3, 0x2, 0x2, 0x2, 0x60f, 0x610, 0x3, 0x2, 0x2, 0x2, 0x610, 0x611, 
       0x7, 0x52, 0x2, 0x2, 0x611, 0x612, 0x5, 0xd0, 0x69, 0x2, 0x612, 0x613, 
       0x7, 0x53, 0x2, 0x2, 0x613, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x614, 0x615, 
       0x7, 0x2c, 0x2, 0x2, 0x615, 0x616, 0x5, 0xce, 0x68, 0x2, 0x616, 0x617, 
       0x7, 0x5c, 0x2, 0x2, 0x617, 0x618, 0x7, 0x8c, 0x2, 0x2, 0x618, 0x619, 
       0x7, 0x52, 0x2, 0x2, 0x619, 0x61a, 0x5, 0xd0, 0x69, 0x2, 0x61a, 0x61b, 
       0x7, 0x53, 0x2, 0x2, 0x61b, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x61c, 0x61d, 
       0x7, 0x8c, 0x2, 0x2, 0x61d, 0x61e, 0x5, 0xce, 0x68, 0x2, 0x61e, 0x61f, 
       0x7, 0x5c, 0x2, 0x2, 0x61f, 0x620, 0x7, 0x8c, 0x2, 0x2, 0x620, 0xcf, 
       0x3, 0x2, 0x2, 0x2, 0x621, 0x623, 0x5, 0x8a, 0x46, 0x2, 0x622, 0x621, 
       0x3, 0x2, 0x2, 0x2, 0x622, 0x623, 0x3, 0x2, 0x2, 0x2, 0x623, 0xd1, 
       0x3, 0x2, 0x2, 0x2, 0x624, 0x625, 0x7, 0x2c, 0x2, 0x2, 0x625, 0x626, 
       0x7, 0x8c, 0x2, 0x2, 0x626, 0x627, 0x7, 0x69, 0x2, 0x2, 0x627, 0x628, 
       0x5, 0xd4, 0x6b, 0x2, 0x628, 0x629, 0x7, 0x58, 0x2, 0x2, 0x629, 0xd3, 
       0x3, 0x2, 0x2, 0x2, 0x62a, 0x62c, 0x5, 0x18, 0xd, 0x2, 0x62b, 0x62a, 
       0x3, 0x2, 0x2, 0x2, 0x62b, 0x62c, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x62d, 
       0x3, 0x2, 0x2, 0x2, 0x62d, 0x62e, 0x5, 0x4, 0x3, 0x2, 0x62e, 0xd5, 
       0x3, 0x2, 0x2, 0x2, 0x62f, 0x630, 0x7, 0x4a, 0x2, 0x2, 0x630, 0x631, 
       0x5, 0xd8, 0x6d, 0x2, 0x631, 0x632, 0x7, 0x58, 0x2, 0x2, 0x632, 0xd7, 
       0x3, 0x2, 0x2, 0x2, 0x633, 0x634, 0x8, 0x6d, 0x1, 0x2, 0x634, 0x636, 
       0x5, 0xda, 0x6e, 0x2, 0x635, 0x637, 0x7, 0x5a, 0x2, 0x2, 0x636, 0x635, 
       0x3, 0x2, 0x2, 0x2, 0x636, 0x637, 0x3, 0x2, 0x2, 0x2, 0x637, 0x640, 
       0x3, 0x2, 0x2, 0x2, 0x638, 0x639, 0xc, 0x3, 0x2, 0x2, 0x639, 0x63a, 
       0x7, 0x80, 0x2, 0x2, 0x63a, 0x63c, 0x5, 0xda, 0x6e, 0x2, 0x63b, 0x63d, 
       0x7, 0x5a, 0x2, 0x2, 0x63c, 0x63b, 0x3, 0x2, 0x2, 0x2, 0x63c, 0x63d, 
       0x3, 0x2, 0x2, 0x2, 0x63d, 0x63f, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x638, 
       0x3, 0x2, 0x2, 0x2, 0x63f, 0x642, 0x3, 0x2, 0x2, 0x2, 0x640, 0x63e, 
       0x3, 0x2, 0x2, 0x2, 0x640, 0x641, 0x3, 0x2, 0x2, 0x2, 0x641, 0xd9, 
       0x3, 0x2, 0x2, 0x2, 0x642, 0x640, 0x3, 0x2, 0x2, 0x2, 0x643, 0x645, 
       0x5, 0xae, 0x58, 0x2, 0x644, 0x643, 0x3, 0x2, 0x2, 0x2, 0x644, 0x645, 
       0x3, 0x2, 0x2, 0x2, 0x645, 0x646, 0x3, 0x2, 0x2, 0x2, 0x646, 0x647, 
       0x5, 0x18, 0xd, 0x2, 0x647, 0x648, 0x5, 0x14, 0xb, 0x2, 0x648, 0xdb, 
       0x3, 0x2, 0x2, 0x2, 0x649, 0x64b, 0x5, 0xe2, 0x72, 0x2, 0x64a, 0x649, 
       0x3, 0x2, 0x2, 0x2, 0x64a, 0x64b, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x64c, 
       0x3, 0x2, 0x2, 0x2, 0x64c, 0x64d, 0x7, 0x4a, 0x2, 0x2, 0x64d, 0x64f, 
       0x7, 0x2c, 0x2, 0x2, 0x64e, 0x650, 0x5, 0x18, 0xd, 0x2, 0x64f, 0x64e, 
       0x3, 0x2, 0x2, 0x2, 0x64f, 0x650, 0x3, 0x2, 0x2, 0x2, 0x650, 0x651, 
       0x3, 0x2, 0x2, 0x2, 0x651, 0x652, 0x5, 0x4, 0x3, 0x2, 0x652, 0x653, 
       0x7, 0x58, 0x2, 0x2, 0x653, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x654, 0x656, 
       0x5, 0xe2, 0x72, 0x2, 0x655, 0x654, 0x3, 0x2, 0x2, 0x2, 0x655, 0x656, 
       0x3, 0x2, 0x2, 0x2, 0x656, 0x657, 0x3, 0x2, 0x2, 0x2, 0x657, 0x658, 
       0x7, 0x9, 0x2, 0x2, 0x658, 0x659, 0x7, 0x56, 0x2, 0x2, 0x659, 0x65a, 
       0x7, 0x87, 0x2, 0x2, 0x65a, 0x65b, 0x7, 0x57, 0x2, 0x2, 0x65b, 0x65c, 
       0x7, 0x58, 0x2, 0x2, 0x65c, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x65e, 
       0x7, 0x21, 0x2, 0x2, 0x65e, 0x65f, 0x7, 0x87, 0x2, 0x2, 0x65f, 0x661, 
       0x7, 0x52, 0x2, 0x2, 0x660, 0x662, 0x5, 0x8a, 0x46, 0x2, 0x661, 0x660, 
       0x3, 0x2, 0x2, 0x2, 0x661, 0x662, 0x3, 0x2, 0x2, 0x2, 0x662, 0x663, 
       0x3, 0x2, 0x2, 0x2, 0x663, 0x668, 0x7, 0x53, 0x2, 0x2, 0x664, 0x665, 
       0x7, 0x21, 0x2, 0x2, 0x665, 0x666, 0x7, 0x87, 0x2, 0x2, 0x666, 0x668, 
       0x5, 0x8c, 0x47, 0x2, 0x667, 0x65d, 0x3, 0x2, 0x2, 0x2, 0x667, 0x664, 
       0x3, 0x2, 0x2, 0x2, 0x668, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x669, 0x66a, 
       0x8, 0x72, 0x1, 0x2, 0x66a, 0x66b, 0x5, 0xe4, 0x73, 0x2, 0x66b, 0x670, 
       0x3, 0x2, 0x2, 0x2, 0x66c, 0x66d, 0xc, 0x3, 0x2, 0x2, 0x66d, 0x66f, 
       0x5, 0xe4, 0x73, 0x2, 0x66e, 0x66c, 0x3, 0x2, 0x2, 0x2, 0x66f, 0x672, 
       0x3, 0x2, 0x2, 0x2, 0x670, 0x66e, 0x3, 0x2, 0x2, 0x2, 0x670, 0x671, 
       0x3, 0x2, 0x2, 0x2, 0x671, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x672, 0x670, 
       0x3, 0x2, 0x2, 0x2, 0x673, 0x674, 0x7, 0x54, 0x2, 0x2, 0x674, 0x676, 
       0x7, 0x54, 0x2, 0x2, 0x675, 0x677, 0x5, 0xe8, 0x75, 0x2, 0x676, 0x675, 
       0x3, 0x2, 0x2, 0x2, 0x676, 0x677, 0x3, 0x2, 0x2, 0x2, 0x677, 0x678, 
       0x3, 0x2, 0x2, 0x2, 0x678, 0x679, 0x5, 0xea, 0x76, 0x2, 0x679, 0x67a, 
       0x7, 0x55, 0x2, 0x2, 0x67a, 0x67b, 0x7, 0x55, 0x2, 0x2, 0x67b, 0x67e, 
       0x3, 0x2, 0x2, 0x2, 0x67c, 0x67e, 0x5, 0xe6, 0x74, 0x2, 0x67d, 0x673, 
       0x3, 0x2, 0x2, 0x2, 0x67d, 0x67c, 0x3, 0x2, 0x2, 0x2, 0x67e, 0xe5, 
       0x3, 0x2, 0x2, 0x2, 0x67f, 0x680, 0x7, 0x7, 0x2, 0x2, 0x680, 0x681, 
       0x7, 0x56, 0x2, 0x2, 0x681, 0x683, 0x5, 0x114, 0x8b, 0x2, 0x682, 
       0x684, 0x7, 0x5a, 0x2, 0x2, 0x683, 0x682, 0x3, 0x2, 0x2, 0x2, 0x683, 
       0x684, 0x3, 0x2, 0x2, 0x2, 0x684, 0x685, 0x3, 0x2, 0x2, 0x2, 0x685, 
       0x686, 0x7, 0x57, 0x2, 0x2, 0x686, 0x690, 0x3, 0x2, 0x2, 0x2, 0x687, 
       0x688, 0x7, 0x7, 0x2, 0x2, 0x688, 0x689, 0x7, 0x57, 0x2, 0x2, 0x689, 
       0x68b, 0x5, 0x6c, 0x37, 0x2, 0x68a, 0x68c, 0x7, 0x5a, 0x2, 0x2, 0x68b, 
       0x68a, 0x3, 0x2, 0x2, 0x2, 0x68b, 0x68c, 0x3, 0x2, 0x2, 0x2, 0x68c, 
       0x68d, 0x3, 0x2, 0x2, 0x2, 0x68d, 0x68e, 0x7, 0x57, 0x2, 0x2, 0x68e, 
       0x690, 0x3, 0x2, 0x2, 0x2, 0x68f, 0x67f, 0x3, 0x2, 0x2, 0x2, 0x68f, 
       0x687, 0x3, 0x2, 0x2, 0x2, 0x690, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x691, 
       0x692, 0x7, 0x4a, 0x2, 0x2, 0x692, 0x693, 0x5, 0xf2, 0x7a, 0x2, 0x693, 
       0x694, 0x7, 0x59, 0x2, 0x2, 0x694, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x695, 
       0x697, 0x8, 0x76, 0x1, 0x2, 0x696, 0x698, 0x5, 0xec, 0x77, 0x2, 0x697, 
       0x696, 0x3, 0x2, 0x2, 0x2, 0x697, 0x698, 0x3, 0x2, 0x2, 0x2, 0x698, 
       0x69d, 0x3, 0x2, 0x2, 0x2, 0x699, 0x69a, 0x5, 0xec, 0x77, 0x2, 0x69a, 
       0x69b, 0x7, 0x5a, 0x2, 0x2, 0x69b, 0x69d, 0x3, 0x2, 0x2, 0x2, 0x69c, 
       0x695, 0x3, 0x2, 0x2, 0x2, 0x69c, 0x699, 0x3, 0x2, 0x2, 0x2, 0x69d, 
       0x6aa, 0x3, 0x2, 0x2, 0x2, 0x69e, 0x69f, 0xc, 0x5, 0x2, 0x2, 0x69f, 
       0x6a1, 0x7, 0x80, 0x2, 0x2, 0x6a0, 0x6a2, 0x5, 0xec, 0x77, 0x2, 0x6a1, 
       0x6a0, 0x3, 0x2, 0x2, 0x2, 0x6a1, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x6a2, 
       0x6a9, 0x3, 0x2, 0x2, 0x2, 0x6a3, 0x6a4, 0xc, 0x3, 0x2, 0x2, 0x6a4, 
       0x6a5, 0x7, 0x80, 0x2, 0x2, 0x6a5, 0x6a6, 0x5, 0xec, 0x77, 0x2, 0x6a6, 
       0x6a7, 0x7, 0x5a, 0x2, 0x2, 0x6a7, 0x6a9, 0x3, 0x2, 0x2, 0x2, 0x6a8, 
       0x69e, 0x3, 0x2, 0x2, 0x2, 0x6a8, 0x6a3, 0x3, 0x2, 0x2, 0x2, 0x6a9, 
       0x6ac, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6a8, 0x3, 0x2, 0x2, 0x2, 0x6aa, 
       0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x6ac, 
       0x6aa, 0x3, 0x2, 0x2, 0x2, 0x6ad, 0x6af, 0x5, 0xee, 0x78, 0x2, 0x6ae, 
       0x6b0, 0x5, 0xf4, 0x7b, 0x2, 0x6af, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x6af, 
       0x6b0, 0x3, 0x2, 0x2, 0x2, 0x6b0, 0xed, 0x3, 0x2, 0x2, 0x2, 0x6b1, 
       0x6b4, 0x7, 0x8c, 0x2, 0x2, 0x6b2, 0x6b4, 0x5, 0xf0, 0x79, 0x2, 0x6b3, 
       0x6b1, 0x3, 0x2, 0x2, 0x2, 0x6b3, 0x6b2, 0x3, 0x2, 0x2, 0x2, 0x6b4, 
       0xef, 0x3, 0x2, 0x2, 0x2, 0x6b5, 0x6b6, 0x5, 0xf2, 0x7a, 0x2, 0x6b6, 
       0x6b7, 0x7, 0x5c, 0x2, 0x2, 0x6b7, 0x6b8, 0x7, 0x8c, 0x2, 0x2, 0x6b8, 
       0xf1, 0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6ba, 0x7, 0x8c, 0x2, 0x2, 0x6ba, 
       0xf3, 0x3, 0x2, 0x2, 0x2, 0x6bb, 0x6bd, 0x7, 0x56, 0x2, 0x2, 0x6bc, 
       0x6be, 0x5, 0xf6, 0x7c, 0x2, 0x6bd, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x6bd, 
       0x6be, 0x3, 0x2, 0x2, 0x2, 0x6be, 0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6bf, 
       0x6c0, 0x7, 0x57, 0x2, 0x2, 0x6c0, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x6c1, 
       0x6c2, 0x8, 0x7c, 0x1, 0x2, 0x6c2, 0x6c3, 0x5, 0xf8, 0x7d, 0x2, 0x6c3, 
       0x6c8, 0x3, 0x2, 0x2, 0x2, 0x6c4, 0x6c5, 0xc, 0x3, 0x2, 0x2, 0x6c5, 
       0x6c7, 0x5, 0xf8, 0x7d, 0x2, 0x6c6, 0x6c4, 0x3, 0x2, 0x2, 0x2, 0x6c7, 
       0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6c6, 0x3, 0x2, 0x2, 0x2, 0x6c8, 
       0x6c9, 0x3, 0x2, 0x2, 0x2, 0x6c9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x6ca, 
       0x6c8, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6cd, 0x7, 0x56, 0x2, 0x2, 0x6cc, 
       0x6ce, 0x5, 0xf6, 0x7c, 0x2, 0x6cd, 0x6cc, 0x3, 0x2, 0x2, 0x2, 0x6cd, 
       0x6ce, 0x3, 0x2, 0x2, 0x2, 0x6ce, 0x6cf, 0x3, 0x2, 0x2, 0x2, 0x6cf, 
       0x6dc, 0x7, 0x57, 0x2, 0x2, 0x6d0, 0x6d2, 0x7, 0x54, 0x2, 0x2, 0x6d1, 
       0x6d3, 0x5, 0xf6, 0x7c, 0x2, 0x6d2, 0x6d1, 0x3, 0x2, 0x2, 0x2, 0x6d2, 
       0x6d3, 0x3, 0x2, 0x2, 0x2, 0x6d3, 0x6d4, 0x3, 0x2, 0x2, 0x2, 0x6d4, 
       0x6dc, 0x7, 0x55, 0x2, 0x2, 0x6d5, 0x6d7, 0x7, 0x52, 0x2, 0x2, 0x6d6, 
       0x6d8, 0x5, 0xf6, 0x7c, 0x2, 0x6d7, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x6d7, 
       0x6d8, 0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6d9, 0x3, 0x2, 0x2, 0x2, 0x6d9, 
       0x6dc, 0x7, 0x53, 0x2, 0x2, 0x6da, 0x6dc, 0xa, 0x8, 0x2, 0x2, 0x6db, 
       0x6cb, 0x3, 0x2, 0x2, 0x2, 0x6db, 0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6db, 
       0x6d5, 0x3, 0x2, 0x2, 0x2, 0x6db, 0x6da, 0x3, 0x2, 0x2, 0x2, 0x6dc, 
       0xf9, 0x3, 0x2, 0x2, 0x2, 0x6dd, 0x6de, 0x8, 0x7e, 0x1, 0x2, 0x6de, 
       0x6df, 0x5, 0xfc, 0x7f, 0x2, 0x6df, 0x6e5, 0x3, 0x2, 0x2, 0x2, 0x6e0, 
       0x6e1, 0xc, 0x3, 0x2, 0x2, 0x6e1, 0x6e2, 0x7, 0x80, 0x2, 0x2, 0x6e2, 
       0x6e4, 0x5, 0xfc, 0x7f, 0x2, 0x6e3, 0x6e0, 0x3, 0x2, 0x2, 0x2, 0x6e4, 
       0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6e5, 0x6e3, 0x3, 0x2, 0x2, 0x2, 0x6e5, 
       0x6e6, 0x3, 0x2, 0x2, 0x2, 0x6e6, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x6e7, 
       0x6e5, 0x3, 0x2, 0x2, 0x2, 0x6e8, 0x6ea, 0x5, 0xfe, 0x80, 0x2, 0x6e9, 
       0x6eb, 0x5, 0x134, 0x9b, 0x2, 0x6ea, 0x6e9, 0x3, 0x2, 0x2, 0x2, 0x6ea, 
       0x6eb, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x6ec, 
       0x6ef, 0x5, 0x100, 0x81, 0x2, 0x6ed, 0x6ef, 0x5, 0x102, 0x82, 0x2, 
       0x6ee, 0x6ec, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x6ed, 0x3, 0x2, 0x2, 0x2, 
       0x6ef, 0xff, 0x3, 0x2, 0x2, 0x2, 0x6f0, 0x6f1, 0x5, 0x10c, 0x87, 
       0x2, 0x6f1, 0x6f2, 0x5, 0xfe, 0x80, 0x2, 0x6f2, 0x101, 0x3, 0x2, 
       0x2, 0x2, 0x6f3, 0x6f5, 0x8, 0x82, 0x1, 0x2, 0x6f4, 0x6f6, 0x7, 0x5a, 
       0x2, 0x2, 0x6f5, 0x6f4, 0x3, 0x2, 0x2, 0x2, 0x6f5, 0x6f6, 0x3, 0x2, 
       0x2, 0x2, 0x6f6, 0x6f7, 0x3, 0x2, 0x2, 0x2, 0x6f7, 0x6f9, 0x5, 0x12, 
       0xa, 0x2, 0x6f8, 0x6fa, 0x5, 0xe2, 0x72, 0x2, 0x6f9, 0x6f8, 0x3, 
       0x2, 0x2, 0x2, 0x6f9, 0x6fa, 0x3, 0x2, 0x2, 0x2, 0x6fa, 0x700, 0x3, 
       0x2, 0x2, 0x2, 0x6fb, 0x6fc, 0x7, 0x56, 0x2, 0x2, 0x6fc, 0x6fd, 0x5, 
       0x100, 0x81, 0x2, 0x6fd, 0x6fe, 0x7, 0x57, 0x2, 0x2, 0x6fe, 0x700, 
       0x3, 0x2, 0x2, 0x2, 0x6ff, 0x6f3, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x6fb, 
       0x3, 0x2, 0x2, 0x2, 0x700, 0x70e, 0x3, 0x2, 0x2, 0x2, 0x701, 0x702, 
       0xc, 0x5, 0x2, 0x2, 0x702, 0x704, 0x7, 0x54, 0x2, 0x2, 0x703, 0x705, 
       0x5, 0x6c, 0x37, 0x2, 0x704, 0x703, 0x3, 0x2, 0x2, 0x2, 0x704, 0x705, 
       0x3, 0x2, 0x2, 0x2, 0x705, 0x706, 0x3, 0x2, 0x2, 0x2, 0x706, 0x708, 
       0x7, 0x55, 0x2, 0x2, 0x707, 0x709, 0x5, 0xe2, 0x72, 0x2, 0x708, 0x707, 
       0x3, 0x2, 0x2, 0x2, 0x708, 0x709, 0x3, 0x2, 0x2, 0x2, 0x709, 0x70d, 
       0x3, 0x2, 0x2, 0x2, 0x70a, 0x70b, 0xc, 0x4, 0x2, 0x2, 0x70b, 0x70d, 
       0x5, 0x104, 0x83, 0x2, 0x70c, 0x701, 0x3, 0x2, 0x2, 0x2, 0x70c, 0x70a, 
       0x3, 0x2, 0x2, 0x2, 0x70d, 0x710, 0x3, 0x2, 0x2, 0x2, 0x70e, 0x70c, 
       0x3, 0x2, 0x2, 0x2, 0x70e, 0x70f, 0x3, 0x2, 0x2, 0x2, 0x70f, 0x103, 
       0x3, 0x2, 0x2, 0x2, 0x710, 0x70e, 0x3, 0x2, 0x2, 0x2, 0x711, 0x712, 
       0x5, 0x106, 0x84, 0x2, 0x712, 0x713, 0x5, 0x108, 0x85, 0x2, 0x713, 
       0x105, 0x3, 0x2, 0x2, 0x2, 0x714, 0x715, 0x7, 0x56, 0x2, 0x2, 0x715, 
       0x716, 0x5, 0x122, 0x92, 0x2, 0x716, 0x717, 0x7, 0x57, 0x2, 0x2, 
       0x717, 0x107, 0x3, 0x2, 0x2, 0x2, 0x718, 0x71a, 0x5, 0x10e, 0x88, 
       0x2, 0x719, 0x718, 0x3, 0x2, 0x2, 0x2, 0x719, 0x71a, 0x3, 0x2, 0x2, 
       0x2, 0x71a, 0x71c, 0x3, 0x2, 0x2, 0x2, 0x71b, 0x71d, 0x5, 0x112, 
       0x8a, 0x2, 0x71c, 0x71b, 0x3, 0x2, 0x2, 0x2, 0x71c, 0x71d, 0x3, 0x2, 
       0x2, 0x2, 0x71d, 0x71f, 0x3, 0x2, 0x2, 0x2, 0x71e, 0x720, 0x5, 0x19a, 
       0xce, 0x2, 0x71f, 0x71e, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x720, 0x3, 0x2, 
       0x2, 0x2, 0x720, 0x722, 0x3, 0x2, 0x2, 0x2, 0x721, 0x723, 0x5, 0xe2, 
       0x72, 0x2, 0x722, 0x721, 0x3, 0x2, 0x2, 0x2, 0x722, 0x723, 0x3, 0x2, 
       0x2, 0x2, 0x723, 0x109, 0x3, 0x2, 0x2, 0x2, 0x724, 0x725, 0x7, 0x82, 
       0x2, 0x2, 0x725, 0x726, 0x5, 0x114, 0x8b, 0x2, 0x726, 0x10b, 0x3, 
       0x2, 0x2, 0x2, 0x727, 0x729, 0x7, 0x61, 0x2, 0x2, 0x728, 0x72a, 0x5, 
       0xe2, 0x72, 0x2, 0x729, 0x728, 0x3, 0x2, 0x2, 0x2, 0x729, 0x72a, 
       0x3, 0x2, 0x2, 0x2, 0x72a, 0x72c, 0x3, 0x2, 0x2, 0x2, 0x72b, 0x72d, 
       0x5, 0x10e, 0x88, 0x2, 0x72c, 0x72b, 0x3, 0x2, 0x2, 0x2, 0x72c, 0x72d, 
       0x3, 0x2, 0x2, 0x2, 0x72d, 0x73f, 0x3, 0x2, 0x2, 0x2, 0x72e, 0x730, 
       0x7, 0x65, 0x2, 0x2, 0x72f, 0x731, 0x5, 0xe2, 0x72, 0x2, 0x730, 0x72f, 
       0x3, 0x2, 0x2, 0x2, 0x730, 0x731, 0x3, 0x2, 0x2, 0x2, 0x731, 0x73f, 
       0x3, 0x2, 0x2, 0x2, 0x732, 0x734, 0x7, 0x7c, 0x2, 0x2, 0x733, 0x735, 
       0x5, 0xe2, 0x72, 0x2, 0x734, 0x733, 0x3, 0x2, 0x2, 0x2, 0x734, 0x735, 
       0x3, 0x2, 0x2, 0x2, 0x735, 0x73f, 0x3, 0x2, 0x2, 0x2, 0x736, 0x737, 
       0x5, 0x18, 0xd, 0x2, 0x737, 0x739, 0x7, 0x61, 0x2, 0x2, 0x738, 0x73a, 
       0x5, 0xe2, 0x72, 0x2, 0x739, 0x738, 0x3, 0x2, 0x2, 0x2, 0x739, 0x73a, 
       0x3, 0x2, 0x2, 0x2, 0x73a, 0x73c, 0x3, 0x2, 0x2, 0x2, 0x73b, 0x73d, 
       0x5, 0x10e, 0x88, 0x2, 0x73c, 0x73b, 0x3, 0x2, 0x2, 0x2, 0x73c, 0x73d, 
       0x3, 0x2, 0x2, 0x2, 0x73d, 0x73f, 0x3, 0x2, 0x2, 0x2, 0x73e, 0x727, 
       0x3, 0x2, 0x2, 0x2, 0x73e, 0x72e, 0x3, 0x2, 0x2, 0x2, 0x73e, 0x732, 
       0x3, 0x2, 0x2, 0x2, 0x73e, 0x736, 0x3, 0x2, 0x2, 0x2, 0x73f, 0x10d, 
       0x3, 0x2, 0x2, 0x2, 0x740, 0x742, 0x5, 0x110, 0x89, 0x2, 0x741, 0x743, 
       0x5, 0x10e, 0x88, 0x2, 0x742, 0x741, 0x3, 0x2, 0x2, 0x2, 0x742, 0x743, 
       0x3, 0x2, 0x2, 0x2, 0x743, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x744, 0x745, 
       0x9, 0x9, 0x2, 0x2, 0x745, 0x111, 0x3, 0x2, 0x2, 0x2, 0x746, 0x747, 
       0x7, 0x65, 0x2, 0x2, 0x747, 0x748, 0x7, 0x7c, 0x2, 0x2, 0x748, 0x113, 
       0x3, 0x2, 0x2, 0x2, 0x749, 0x74b, 0x5, 0xa6, 0x54, 0x2, 0x74a, 0x74c, 
       0x5, 0x118, 0x8d, 0x2, 0x74b, 0x74a, 0x3, 0x2, 0x2, 0x2, 0x74b, 0x74c, 
       0x3, 0x2, 0x2, 0x2, 0x74c, 0x115, 0x3, 0x2, 0x2, 0x2, 0x74d, 0x74f, 
       0x5, 0xaa, 0x56, 0x2, 0x74e, 0x750, 0x5, 0x118, 0x8d, 0x2, 0x74f, 
       0x74e, 0x3, 0x2, 0x2, 0x2, 0x74f, 0x750, 0x3, 0x2, 0x2, 0x2, 0x750, 
       0x117, 0x3, 0x2, 0x2, 0x2, 0x751, 0x75a, 0x5, 0x11a, 0x8e, 0x2, 0x752, 
       0x754, 0x5, 0x11c, 0x8f, 0x2, 0x753, 0x752, 0x3, 0x2, 0x2, 0x2, 0x753, 
       0x754, 0x3, 0x2, 0x2, 0x2, 0x754, 0x755, 0x3, 0x2, 0x2, 0x2, 0x755, 
       0x756, 0x5, 0x104, 0x83, 0x2, 0x756, 0x757, 0x5, 0x10a, 0x86, 0x2, 
       0x757, 0x75a, 0x3, 0x2, 0x2, 0x2, 0x758, 0x75a, 0x5, 0x11e, 0x90, 
       0x2, 0x759, 0x751, 0x3, 0x2, 0x2, 0x2, 0x759, 0x753, 0x3, 0x2, 0x2, 
       0x2, 0x759, 0x758, 0x3, 0x2, 0x2, 0x2, 0x75a, 0x119, 0x3, 0x2, 0x2, 
       0x2, 0x75b, 0x761, 0x5, 0x11c, 0x8f, 0x2, 0x75c, 0x75e, 0x5, 0x10c, 
       0x87, 0x2, 0x75d, 0x75f, 0x5, 0x11a, 0x8e, 0x2, 0x75e, 0x75d, 0x3, 
       0x2, 0x2, 0x2, 0x75e, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x75f, 0x761, 0x3, 
       0x2, 0x2, 0x2, 0x760, 0x75b, 0x3, 0x2, 0x2, 0x2, 0x760, 0x75c, 0x3, 
       0x2, 0x2, 0x2, 0x761, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x762, 0x763, 0x8, 
       0x8f, 0x1, 0x2, 0x763, 0x771, 0x5, 0x104, 0x83, 0x2, 0x764, 0x766, 
       0x7, 0x54, 0x2, 0x2, 0x765, 0x767, 0x5, 0x6c, 0x37, 0x2, 0x766, 0x765, 
       0x3, 0x2, 0x2, 0x2, 0x766, 0x767, 0x3, 0x2, 0x2, 0x2, 0x767, 0x768, 
       0x3, 0x2, 0x2, 0x2, 0x768, 0x76a, 0x7, 0x55, 0x2, 0x2, 0x769, 0x76b, 
       0x5, 0xe2, 0x72, 0x2, 0x76a, 0x769, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x76b, 
       0x3, 0x2, 0x2, 0x2, 0x76b, 0x771, 0x3, 0x2, 0x2, 0x2, 0x76c, 0x76d, 
       0x7, 0x56, 0x2, 0x2, 0x76d, 0x76e, 0x5, 0x11a, 0x8e, 0x2, 0x76e, 
       0x76f, 0x7, 0x57, 0x2, 0x2, 0x76f, 0x771, 0x3, 0x2, 0x2, 0x2, 0x770, 
       0x762, 0x3, 0x2, 0x2, 0x2, 0x770, 0x764, 0x3, 0x2, 0x2, 0x2, 0x770, 
       0x76c, 0x3, 0x2, 0x2, 0x2, 0x771, 0x77f, 0x3, 0x2, 0x2, 0x2, 0x772, 
       0x773, 0xc, 0x6, 0x2, 0x2, 0x773, 0x77e, 0x5, 0x104, 0x83, 0x2, 0x774, 
       0x775, 0xc, 0x4, 0x2, 0x2, 0x775, 0x777, 0x7, 0x54, 0x2, 0x2, 0x776, 
       0x778, 0x5, 0x6c, 0x37, 0x2, 0x777, 0x776, 0x3, 0x2, 0x2, 0x2, 0x777, 
       0x778, 0x3, 0x2, 0x2, 0x2, 0x778, 0x779, 0x3, 0x2, 0x2, 0x2, 0x779, 
       0x77b, 0x7, 0x55, 0x2, 0x2, 0x77a, 0x77c, 0x5, 0xe2, 0x72, 0x2, 0x77b, 
       0x77a, 0x3, 0x2, 0x2, 0x2, 0x77b, 0x77c, 0x3, 0x2, 0x2, 0x2, 0x77c, 
       0x77e, 0x3, 0x2, 0x2, 0x2, 0x77d, 0x772, 0x3, 0x2, 0x2, 0x2, 0x77d, 
       0x774, 0x3, 0x2, 0x2, 0x2, 0x77e, 0x781, 0x3, 0x2, 0x2, 0x2, 0x77f, 
       0x77d, 0x3, 0x2, 0x2, 0x2, 0x77f, 0x780, 0x3, 0x2, 0x2, 0x2, 0x780, 
       0x11d, 0x3, 0x2, 0x2, 0x2, 0x781, 0x77f, 0x3, 0x2, 0x2, 0x2, 0x782, 
       0x787, 0x5, 0x120, 0x91, 0x2, 0x783, 0x784, 0x5, 0x10c, 0x87, 0x2, 
       0x784, 0x785, 0x5, 0x11e, 0x90, 0x2, 0x785, 0x787, 0x3, 0x2, 0x2, 
       0x2, 0x786, 0x782, 0x3, 0x2, 0x2, 0x2, 0x786, 0x783, 0x3, 0x2, 0x2, 
       0x2, 0x787, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x788, 0x789, 0x8, 0x91, 0x1, 
       0x2, 0x789, 0x78a, 0x7, 0x5a, 0x2, 0x2, 0x78a, 0x798, 0x3, 0x2, 0x2, 
       0x2, 0x78b, 0x78c, 0xc, 0x5, 0x2, 0x2, 0x78c, 0x797, 0x5, 0x104, 
       0x83, 0x2, 0x78d, 0x78e, 0xc, 0x4, 0x2, 0x2, 0x78e, 0x790, 0x7, 0x54, 
       0x2, 0x2, 0x78f, 0x791, 0x5, 0x6c, 0x37, 0x2, 0x790, 0x78f, 0x3, 
       0x2, 0x2, 0x2, 0x790, 0x791, 0x3, 0x2, 0x2, 0x2, 0x791, 0x792, 0x3, 
       0x2, 0x2, 0x2, 0x792, 0x794, 0x7, 0x55, 0x2, 0x2, 0x793, 0x795, 0x5, 
       0xe2, 0x72, 0x2, 0x794, 0x793, 0x3, 0x2, 0x2, 0x2, 0x794, 0x795, 
       0x3, 0x2, 0x2, 0x2, 0x795, 0x797, 0x3, 0x2, 0x2, 0x2, 0x796, 0x78b, 
       0x3, 0x2, 0x2, 0x2, 0x796, 0x78d, 0x3, 0x2, 0x2, 0x2, 0x797, 0x79a, 
       0x3, 0x2, 0x2, 0x2, 0x798, 0x796, 0x3, 0x2, 0x2, 0x2, 0x798, 0x799, 
       0x3, 0x2, 0x2, 0x2, 0x799, 0x121, 0x3, 0x2, 0x2, 0x2, 0x79a, 0x798, 
       0x3, 0x2, 0x2, 0x2, 0x79b, 0x79d, 0x5, 0x124, 0x93, 0x2, 0x79c, 0x79b, 
       0x3, 0x2, 0x2, 0x2, 0x79c, 0x79d, 0x3, 0x2, 0x2, 0x2, 0x79d, 0x79f, 
       0x3, 0x2, 0x2, 0x2, 0x79e, 0x7a0, 0x7, 0x5a, 0x2, 0x2, 0x79f, 0x79e, 
       0x3, 0x2, 0x2, 0x2, 0x79f, 0x7a0, 0x3, 0x2, 0x2, 0x2, 0x7a0, 0x7a6, 
       0x3, 0x2, 0x2, 0x2, 0x7a1, 0x7a2, 0x5, 0x124, 0x93, 0x2, 0x7a2, 0x7a3, 
       0x7, 0x80, 0x2, 0x2, 0x7a3, 0x7a4, 0x7, 0x5a, 0x2, 0x2, 0x7a4, 0x7a6, 
       0x3, 0x2, 0x2, 0x2, 0x7a5, 0x79c, 0x3, 0x2, 0x2, 0x2, 0x7a5, 0x7a1, 
       0x3, 0x2, 0x2, 0x2, 0x7a6, 0x123, 0x3, 0x2, 0x2, 0x2, 0x7a7, 0x7a8, 
       0x8, 0x93, 0x1, 0x2, 0x7a8, 0x7a9, 0x5, 0x126, 0x94, 0x2, 0x7a9, 
       0x7af, 0x3, 0x2, 0x2, 0x2, 0x7aa, 0x7ab, 0xc, 0x3, 0x2, 0x2, 0x7ab, 
       0x7ac, 0x7, 0x80, 0x2, 0x2, 0x7ac, 0x7ae, 0x5, 0x126, 0x94, 0x2, 
       0x7ad, 0x7aa, 0x3, 0x2, 0x2, 0x2, 0x7ae, 0x7b1, 0x3, 0x2, 0x2, 0x2, 
       0x7af, 0x7ad, 0x3, 0x2, 0x2, 0x2, 0x7af, 0x7b0, 0x3, 0x2, 0x2, 0x2, 
       0x7b0, 0x125, 0x3, 0x2, 0x2, 0x2, 0x7b1, 0x7af, 0x3, 0x2, 0x2, 0x2, 
       0x7b2, 0x7b4, 0x5, 0xe2, 0x72, 0x2, 0x7b3, 0x7b2, 0x3, 0x2, 0x2, 
       0x2, 0x7b3, 0x7b4, 0x3, 0x2, 0x2, 0x2, 0x7b4, 0x7b5, 0x3, 0x2, 0x2, 
       0x2, 0x7b5, 0x7b6, 0x5, 0x9e, 0x50, 0x2, 0x7b6, 0x7b7, 0x5, 0xfe, 
       0x80, 0x2, 0x7b7, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7b8, 0x7ba, 0x5, 0xe2, 
       0x72, 0x2, 0x7b9, 0x7b8, 0x3, 0x2, 0x2, 0x2, 0x7b9, 0x7ba, 0x3, 0x2, 
       0x2, 0x2, 0x7ba, 0x7bb, 0x3, 0x2, 0x2, 0x2, 0x7bb, 0x7bc, 0x5, 0x9e, 
       0x50, 0x2, 0x7bc, 0x7bd, 0x5, 0xfe, 0x80, 0x2, 0x7bd, 0x7be, 0x7, 
       0x69, 0x2, 0x2, 0x7be, 0x7bf, 0x5, 0x138, 0x9d, 0x2, 0x7bf, 0x7d2, 
       0x3, 0x2, 0x2, 0x2, 0x7c0, 0x7c2, 0x5, 0xe2, 0x72, 0x2, 0x7c1, 0x7c0, 
       0x3, 0x2, 0x2, 0x2, 0x7c1, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7c2, 0x7c3, 
       0x3, 0x2, 0x2, 0x2, 0x7c3, 0x7c5, 0x5, 0x9e, 0x50, 0x2, 0x7c4, 0x7c6, 
       0x5, 0x118, 0x8d, 0x2, 0x7c5, 0x7c4, 0x3, 0x2, 0x2, 0x2, 0x7c5, 0x7c6, 
       0x3, 0x2, 0x2, 0x2, 0x7c6, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7c7, 0x7c9, 
       0x5, 0xe2, 0x72, 0x2, 0x7c8, 0x7c7, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7c9, 
       0x3, 0x2, 0x2, 0x2, 0x7c9, 0x7ca, 0x3, 0x2, 0x2, 0x2, 0x7ca, 0x7cc, 
       0x5, 0x9e, 0x50, 0x2, 0x7cb, 0x7cd, 0x5, 0x118, 0x8d, 0x2, 0x7cc, 
       0x7cb, 0x3, 0x2, 0x2, 0x2, 0x7cc, 0x7cd, 0x3, 0x2, 0x2, 0x2, 0x7cd, 
       0x7ce, 0x3, 0x2, 0x2, 0x2, 0x7ce, 0x7cf, 0x7, 0x69, 0x2, 0x2, 0x7cf, 
       0x7d0, 0x5, 0x138, 0x9d, 0x2, 0x7d0, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x7d1, 
       0x7b3, 0x3, 0x2, 0x2, 0x2, 0x7d1, 0x7b9, 0x3, 0x2, 0x2, 0x2, 0x7d1, 
       0x7c1, 0x3, 0x2, 0x2, 0x2, 0x7d1, 0x7c8, 0x3, 0x2, 0x2, 0x2, 0x7d2, 
       0x127, 0x3, 0x2, 0x2, 0x2, 0x7d3, 0x7d5, 0x5, 0xe2, 0x72, 0x2, 0x7d4, 
       0x7d3, 0x3, 0x2, 0x2, 0x2, 0x7d4, 0x7d5, 0x3, 0x2, 0x2, 0x2, 0x7d5, 
       0x7d7, 0x3, 0x2, 0x2, 0x2, 0x7d6, 0x7d8, 0x5, 0x9e, 0x50, 0x2, 0x7d7, 
       0x7d6, 0x3, 0x2, 0x2, 0x2, 0x7d7, 0x7d8, 0x3, 0x2, 0x2, 0x2, 0x7d8, 
       0x7d9, 0x3, 0x2, 0x2, 0x2, 0x7d9, 0x7db, 0x5, 0x12a, 0x96, 0x2, 0x7da, 
       0x7dc, 0x5, 0x152, 0xaa, 0x2, 0x7db, 0x7da, 0x3, 0x2, 0x2, 0x2, 0x7db, 
       0x7dc, 0x3, 0x2, 0x2, 0x2, 0x7dc, 0x7dd, 0x3, 0x2, 0x2, 0x2, 0x7dd, 
       0x7de, 0x5, 0x12c, 0x97, 0x2, 0x7de, 0x129, 0x3, 0x2, 0x2, 0x2, 0x7df, 
       0x7e0, 0x5, 0x12, 0xa, 0x2, 0x7e0, 0x7e1, 0x5, 0x106, 0x84, 0x2, 
       0x7e1, 0x7e3, 0x5, 0x108, 0x85, 0x2, 0x7e2, 0x7e4, 0x5, 0x10a, 0x86, 
       0x2, 0x7e3, 0x7e2, 0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7e4, 0x3, 0x2, 0x2, 
       0x2, 0x7e4, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x7e5, 0x7ea, 0x5, 0x12e, 
       0x98, 0x2, 0x7e6, 0x7ea, 0x5, 0x192, 0xca, 0x2, 0x7e7, 0x7ea, 0x5, 
       0x130, 0x99, 0x2, 0x7e8, 0x7ea, 0x5, 0x132, 0x9a, 0x2, 0x7e9, 0x7e5, 
       0x3, 0x2, 0x2, 0x2, 0x7e9, 0x7e6, 0x3, 0x2, 0x2, 0x2, 0x7e9, 0x7e7, 
       0x3, 0x2, 0x2, 0x2, 0x7e9, 0x7e8, 0x3, 0x2, 0x2, 0x2, 0x7ea, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7ed, 0x5, 0x168, 0xb5, 0x2, 0x7ec, 0x7eb, 
       0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7ed, 0x3, 0x2, 0x2, 0x2, 0x7ed, 0x7ee, 
       0x3, 0x2, 0x2, 0x2, 0x7ee, 0x7ef, 0x5, 0x78, 0x3d, 0x2, 0x7ef, 0x12f, 
       0x3, 0x2, 0x2, 0x2, 0x7f0, 0x7f1, 0x7, 0x69, 0x2, 0x2, 0x7f1, 0x7f2, 
       0x7, 0x18, 0x2, 0x2, 0x7f2, 0x7f3, 0x7, 0x58, 0x2, 0x2, 0x7f3, 0x131, 
       0x3, 0x2, 0x2, 0x2, 0x7f4, 0x7f5, 0x7, 0x69, 0x2, 0x2, 0x7f5, 0x7f6, 
       0x7, 0x19, 0x2, 0x2, 0x7f6, 0x7f7, 0x7, 0x58, 0x2, 0x2, 0x7f7, 0x133, 
       0x3, 0x2, 0x2, 0x2, 0x7f8, 0x7f9, 0x5, 0x136, 0x9c, 0x2, 0x7f9, 0x135, 
       0x3, 0x2, 0x2, 0x2, 0x7fa, 0x7fb, 0x7, 0x69, 0x2, 0x2, 0x7fb, 0x7fe, 
       0x5, 0x138, 0x9d, 0x2, 0x7fc, 0x7fe, 0x5, 0x13c, 0x9f, 0x2, 0x7fd, 
       0x7fa, 0x3, 0x2, 0x2, 0x2, 0x7fd, 0x7fc, 0x3, 0x2, 0x2, 0x2, 0x7fe, 
       0x137, 0x3, 0x2, 0x2, 0x2, 0x7ff, 0x802, 0x5, 0x66, 0x34, 0x2, 0x800, 
       0x802, 0x5, 0x13c, 0x9f, 0x2, 0x801, 0x7ff, 0x3, 0x2, 0x2, 0x2, 0x801, 
       0x800, 0x3, 0x2, 0x2, 0x2, 0x802, 0x139, 0x3, 0x2, 0x2, 0x2, 0x803, 
       0x804, 0x8, 0x9e, 0x1, 0x2, 0x804, 0x806, 0x5, 0x138, 0x9d, 0x2, 
       0x805, 0x807, 0x7, 0x5a, 0x2, 0x2, 0x806, 0x805, 0x3, 0x2, 0x2, 0x2, 
       0x806, 0x807, 0x3, 0x2, 0x2, 0x2, 0x807, 0x810, 0x3, 0x2, 0x2, 0x2, 
       0x808, 0x809, 0xc, 0x3, 0x2, 0x2, 0x809, 0x80a, 0x7, 0x80, 0x2, 0x2, 
       0x80a, 0x80c, 0x5, 0x138, 0x9d, 0x2, 0x80b, 0x80d, 0x7, 0x5a, 0x2, 
       0x2, 0x80c, 0x80b, 0x3, 0x2, 0x2, 0x2, 0x80c, 0x80d, 0x3, 0x2, 0x2, 
       0x2, 0x80d, 0x80f, 0x3, 0x2, 0x2, 0x2, 0x80e, 0x808, 0x3, 0x2, 0x2, 
       0x2, 0x80f, 0x812, 0x3, 0x2, 0x2, 0x2, 0x810, 0x80e, 0x3, 0x2, 0x2, 
       0x2, 0x810, 0x811, 0x3, 0x2, 0x2, 0x2, 0x811, 0x13b, 0x3, 0x2, 0x2, 
       0x2, 0x812, 0x810, 0x3, 0x2, 0x2, 0x2, 0x813, 0x814, 0x7, 0x52, 0x2, 
       0x2, 0x814, 0x816, 0x5, 0x13a, 0x9e, 0x2, 0x815, 0x817, 0x7, 0x80, 
       0x2, 0x2, 0x816, 0x815, 0x3, 0x2, 0x2, 0x2, 0x816, 0x817, 0x3, 0x2, 
       0x2, 0x2, 0x817, 0x818, 0x3, 0x2, 0x2, 0x2, 0x818, 0x819, 0x7, 0x53, 
       0x2, 0x2, 0x819, 0x81d, 0x3, 0x2, 0x2, 0x2, 0x81a, 0x81b, 0x7, 0x52, 
       0x2, 0x2, 0x81b, 0x81d, 0x7, 0x53, 0x2, 0x2, 0x81c, 0x813, 0x3, 0x2, 
       0x2, 0x2, 0x81c, 0x81a, 0x3, 0x2, 0x2, 0x2, 0x81d, 0x13d, 0x3, 0x2, 
       0x2, 0x2, 0x81e, 0x821, 0x5, 0x6a, 0x36, 0x2, 0x81f, 0x821, 0x5, 
       0x13c, 0x9f, 0x2, 0x820, 0x81e, 0x3, 0x2, 0x2, 0x2, 0x820, 0x81f, 
       0x3, 0x2, 0x2, 0x2, 0x821, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x822, 0x823, 
       0x5, 0x142, 0xa2, 0x2, 0x823, 0x825, 0x7, 0x52, 0x2, 0x2, 0x824, 
       0x826, 0x5, 0x14a, 0xa6, 0x2, 0x825, 0x824, 0x3, 0x2, 0x2, 0x2, 0x825, 
       0x826, 0x3, 0x2, 0x2, 0x2, 0x826, 0x827, 0x3, 0x2, 0x2, 0x2, 0x827, 
       0x828, 0x7, 0x53, 0x2, 0x2, 0x828, 0x141, 0x3, 0x2, 0x2, 0x2, 0x829, 
       0x82b, 0x5, 0x148, 0xa5, 0x2, 0x82a, 0x82c, 0x5, 0xe2, 0x72, 0x2, 
       0x82b, 0x82a, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x82c, 0x3, 0x2, 0x2, 0x2, 
       0x82c, 0x82d, 0x3, 0x2, 0x2, 0x2, 0x82d, 0x82f, 0x5, 0x144, 0xa3, 
       0x2, 0x82e, 0x830, 0x5, 0x146, 0xa4, 0x2, 0x82f, 0x82e, 0x3, 0x2, 
       0x2, 0x2, 0x82f, 0x830, 0x3, 0x2, 0x2, 0x2, 0x830, 0x832, 0x3, 0x2, 
       0x2, 0x2, 0x831, 0x833, 0x5, 0x158, 0xad, 0x2, 0x832, 0x831, 0x3, 
       0x2, 0x2, 0x2, 0x832, 0x833, 0x3, 0x2, 0x2, 0x2, 0x833, 0x83c, 0x3, 
       0x2, 0x2, 0x2, 0x834, 0x836, 0x5, 0x148, 0xa5, 0x2, 0x835, 0x837, 
       0x5, 0xe4, 0x73, 0x2, 0x836, 0x835, 0x3, 0x2, 0x2, 0x2, 0x836, 0x837, 
       0x3, 0x2, 0x2, 0x2, 0x837, 0x839, 0x3, 0x2, 0x2, 0x2, 0x838, 0x83a, 
       0x5, 0x158, 0xad, 0x2, 0x839, 0x838, 0x3, 0x2, 0x2, 0x2, 0x839, 0x83a, 
       0x3, 0x2, 0x2, 0x2, 0x83a, 0x83c, 0x3, 0x2, 0x2, 0x2, 0x83b, 0x829, 
       0x3, 0x2, 0x2, 0x2, 0x83b, 0x834, 0x3, 0x2, 0x2, 0x2, 0x83c, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0x83d, 0x83f, 0x5, 0x18, 0xd, 0x2, 0x83e, 0x83d, 
       0x3, 0x2, 0x2, 0x2, 0x83e, 0x83f, 0x3, 0x2, 0x2, 0x2, 0x83f, 0x840, 
       0x3, 0x2, 0x2, 0x2, 0x840, 0x841, 0x5, 0x8, 0x5, 0x2, 0x841, 0x145, 
       0x3, 0x2, 0x2, 0x2, 0x842, 0x843, 0x7, 0x51, 0x2, 0x2, 0x843, 0x147, 
       0x3, 0x2, 0x2, 0x2, 0x844, 0x845, 0x9, 0xa, 0x2, 0x2, 0x845, 0x149, 
       0x3, 0x2, 0x2, 0x2, 0x846, 0x848, 0x5, 0x14c, 0xa7, 0x2, 0x847, 0x849, 
       0x5, 0x14a, 0xa6, 0x2, 0x848, 0x847, 0x3, 0x2, 0x2, 0x2, 0x848, 0x849, 
       0x3, 0x2, 0x2, 0x2, 0x849, 0x850, 0x3, 0x2, 0x2, 0x2, 0x84a, 0x84b, 
       0x5, 0x160, 0xb1, 0x2, 0x84b, 0x84d, 0x7, 0x59, 0x2, 0x2, 0x84c, 
       0x84e, 0x5, 0x14a, 0xa6, 0x2, 0x84d, 0x84c, 0x3, 0x2, 0x2, 0x2, 0x84d, 
       0x84e, 0x3, 0x2, 0x2, 0x2, 0x84e, 0x850, 0x3, 0x2, 0x2, 0x2, 0x84f, 
       0x846, 0x3, 0x2, 0x2, 0x2, 0x84f, 0x84a, 0x3, 0x2, 0x2, 0x2, 0x850, 
       0x14b, 0x3, 0x2, 0x2, 0x2, 0x851, 0x853, 0x5, 0xe2, 0x72, 0x2, 0x852, 
       0x851, 0x3, 0x2, 0x2, 0x2, 0x852, 0x853, 0x3, 0x2, 0x2, 0x2, 0x853, 
       0x855, 0x3, 0x2, 0x2, 0x2, 0x854, 0x856, 0x5, 0x9e, 0x50, 0x2, 0x855, 
       0x854, 0x3, 0x2, 0x2, 0x2, 0x855, 0x856, 0x3, 0x2, 0x2, 0x2, 0x856, 
       0x858, 0x3, 0x2, 0x2, 0x2, 0x857, 0x859, 0x5, 0x14e, 0xa8, 0x2, 0x858, 
       0x857, 0x3, 0x2, 0x2, 0x2, 0x858, 0x859, 0x3, 0x2, 0x2, 0x2, 0x859, 
       0x85a, 0x3, 0x2, 0x2, 0x2, 0x85a, 0x863, 0x7, 0x58, 0x2, 0x2, 0x85b, 
       0x863, 0x5, 0x128, 0x95, 0x2, 0x85c, 0x863, 0x5, 0xd6, 0x6c, 0x2, 
       0x85d, 0x863, 0x5, 0x96, 0x4c, 0x2, 0x85e, 0x863, 0x5, 0x176, 0xbc, 
       0x2, 0x85f, 0x863, 0x5, 0x18e, 0xc8, 0x2, 0x860, 0x863, 0x5, 0x92, 
       0x4a, 0x2, 0x861, 0x863, 0x5, 0x98, 0x4d, 0x2, 0x862, 0x852, 0x3, 
       0x2, 0x2, 0x2, 0x862, 0x85b, 0x3, 0x2, 0x2, 0x2, 0x862, 0x85c, 0x3, 
       0x2, 0x2, 0x2, 0x862, 0x85d, 0x3, 0x2, 0x2, 0x2, 0x862, 0x85e, 0x3, 
       0x2, 0x2, 0x2, 0x862, 0x85f, 0x3, 0x2, 0x2, 0x2, 0x862, 0x860, 0x3, 
       0x2, 0x2, 0x2, 0x862, 0x861, 0x3, 0x2, 0x2, 0x2, 0x863, 0x14d, 0x3, 
       0x2, 0x2, 0x2, 0x864, 0x865, 0x8, 0xa8, 0x1, 0x2, 0x865, 0x866, 0x5, 
       0x150, 0xa9, 0x2, 0x866, 0x86c, 0x3, 0x2, 0x2, 0x2, 0x867, 0x868, 
       0xc, 0x3, 0x2, 0x2, 0x868, 0x869, 0x7, 0x80, 0x2, 0x2, 0x869, 0x86b, 
       0x5, 0x150, 0xa9, 0x2, 0x86a, 0x867, 0x3, 0x2, 0x2, 0x2, 0x86b, 0x86e, 
       0x3, 0x2, 0x2, 0x2, 0x86c, 0x86a, 0x3, 0x2, 0x2, 0x2, 0x86c, 0x86d, 
       0x3, 0x2, 0x2, 0x2, 0x86d, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x86c, 
       0x3, 0x2, 0x2, 0x2, 0x86f, 0x871, 0x5, 0xfe, 0x80, 0x2, 0x870, 0x872, 
       0x5, 0x152, 0xaa, 0x2, 0x871, 0x870, 0x3, 0x2, 0x2, 0x2, 0x871, 0x872, 
       0x3, 0x2, 0x2, 0x2, 0x872, 0x874, 0x3, 0x2, 0x2, 0x2, 0x873, 0x875, 
       0x5, 0x156, 0xac, 0x2, 0x874, 0x873, 0x3, 0x2, 0x2, 0x2, 0x874, 0x875, 
       0x3, 0x2, 0x2, 0x2, 0x875, 0x883, 0x3, 0x2, 0x2, 0x2, 0x876, 0x878, 
       0x5, 0xfe, 0x80, 0x2, 0x877, 0x879, 0x5, 0x136, 0x9c, 0x2, 0x878, 
       0x877, 0x3, 0x2, 0x2, 0x2, 0x878, 0x879, 0x3, 0x2, 0x2, 0x2, 0x879, 
       0x883, 0x3, 0x2, 0x2, 0x2, 0x87a, 0x87c, 0x7, 0x8c, 0x2, 0x2, 0x87b, 
       0x87a, 0x3, 0x2, 0x2, 0x2, 0x87b, 0x87c, 0x3, 0x2, 0x2, 0x2, 0x87c, 
       0x87e, 0x3, 0x2, 0x2, 0x2, 0x87d, 0x87f, 0x5, 0xe2, 0x72, 0x2, 0x87e, 
       0x87d, 0x3, 0x2, 0x2, 0x2, 0x87e, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x87f, 
       0x880, 0x3, 0x2, 0x2, 0x2, 0x880, 0x881, 0x7, 0x59, 0x2, 0x2, 0x881, 
       0x883, 0x5, 0x6c, 0x37, 0x2, 0x882, 0x86f, 0x3, 0x2, 0x2, 0x2, 0x882, 
       0x876, 0x3, 0x2, 0x2, 0x2, 0x882, 0x87b, 0x3, 0x2, 0x2, 0x2, 0x883, 
       0x151, 0x3, 0x2, 0x2, 0x2, 0x884, 0x885, 0x8, 0xaa, 0x1, 0x2, 0x885, 
       0x886, 0x5, 0x154, 0xab, 0x2, 0x886, 0x88b, 0x3, 0x2, 0x2, 0x2, 0x887, 
       0x888, 0xc, 0x3, 0x2, 0x2, 0x888, 0x88a, 0x5, 0x154, 0xab, 0x2, 0x889, 
       0x887, 0x3, 0x2, 0x2, 0x2, 0x88a, 0x88d, 0x3, 0x2, 0x2, 0x2, 0x88b, 
       0x889, 0x3, 0x2, 0x2, 0x2, 0x88b, 0x88c, 0x3, 0x2, 0x2, 0x2, 0x88c, 
       0x153, 0x3, 0x2, 0x2, 0x2, 0x88d, 0x88b, 0x3, 0x2, 0x2, 0x2, 0x88e, 
       0x88f, 0x9, 0xb, 0x2, 0x2, 0x88f, 0x155, 0x3, 0x2, 0x2, 0x2, 0x890, 
       0x891, 0x7, 0x69, 0x2, 0x2, 0x891, 0x892, 0x7, 0x83, 0x2, 0x2, 0x892, 
       0x157, 0x3, 0x2, 0x2, 0x2, 0x893, 0x894, 0x7, 0x59, 0x2, 0x2, 0x894, 
       0x895, 0x5, 0x15a, 0xae, 0x2, 0x895, 0x159, 0x3, 0x2, 0x2, 0x2, 0x896, 
       0x897, 0x8, 0xae, 0x1, 0x2, 0x897, 0x899, 0x5, 0x15c, 0xaf, 0x2, 
       0x898, 0x89a, 0x7, 0x5a, 0x2, 0x2, 0x899, 0x898, 0x3, 0x2, 0x2, 0x2, 
       0x899, 0x89a, 0x3, 0x2, 0x2, 0x2, 0x89a, 0x8a3, 0x3, 0x2, 0x2, 0x2, 
       0x89b, 0x89c, 0xc, 0x3, 0x2, 0x2, 0x89c, 0x89d, 0x7, 0x80, 0x2, 0x2, 
       0x89d, 0x89f, 0x5, 0x15c, 0xaf, 0x2, 0x89e, 0x8a0, 0x7, 0x5a, 0x2, 
       0x2, 0x89f, 0x89e, 0x3, 0x2, 0x2, 0x2, 0x89f, 0x8a0, 0x3, 0x2, 0x2, 
       0x2, 0x8a0, 0x8a2, 0x3, 0x2, 0x2, 0x2, 0x8a1, 0x89b, 0x3, 0x2, 0x2, 
       0x2, 0x8a2, 0x8a5, 0x3, 0x2, 0x2, 0x2, 0x8a3, 0x8a1, 0x3, 0x2, 0x2, 
       0x2, 0x8a3, 0x8a4, 0x3, 0x2, 0x2, 0x2, 0x8a4, 0x15b, 0x3, 0x2, 0x2, 
       0x2, 0x8a5, 0x8a3, 0x3, 0x2, 0x2, 0x2, 0x8a6, 0x8a8, 0x5, 0xe2, 0x72, 
       0x2, 0x8a7, 0x8a6, 0x3, 0x2, 0x2, 0x2, 0x8a7, 0x8a8, 0x3, 0x2, 0x2, 
       0x2, 0x8a8, 0x8a9, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x8bc, 0x5, 0x15e, 
       0xb0, 0x2, 0x8aa, 0x8ac, 0x5, 0xe2, 0x72, 0x2, 0x8ab, 0x8aa, 0x3, 
       0x2, 0x2, 0x2, 0x8ab, 0x8ac, 0x3, 0x2, 0x2, 0x2, 0x8ac, 0x8ad, 0x3, 
       0x2, 0x2, 0x2, 0x8ad, 0x8af, 0x7, 0x4b, 0x2, 0x2, 0x8ae, 0x8b0, 0x5, 
       0x160, 0xb1, 0x2, 0x8af, 0x8ae, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x8b0, 
       0x3, 0x2, 0x2, 0x2, 0x8b0, 0x8b1, 0x3, 0x2, 0x2, 0x2, 0x8b1, 0x8bc, 
       0x5, 0x15e, 0xb0, 0x2, 0x8b2, 0x8b4, 0x5, 0xe2, 0x72, 0x2, 0x8b3, 
       0x8b2, 0x3, 0x2, 0x2, 0x2, 0x8b3, 0x8b4, 0x3, 0x2, 0x2, 0x2, 0x8b4, 
       0x8b5, 0x3, 0x2, 0x2, 0x2, 0x8b5, 0x8b7, 0x5, 0x160, 0xb1, 0x2, 0x8b6, 
       0x8b8, 0x7, 0x4b, 0x2, 0x2, 0x8b7, 0x8b6, 0x3, 0x2, 0x2, 0x2, 0x8b7, 
       0x8b8, 0x3, 0x2, 0x2, 0x2, 0x8b8, 0x8b9, 0x3, 0x2, 0x2, 0x2, 0x8b9, 
       0x8ba, 0x5, 0x15e, 0xb0, 0x2, 0x8ba, 0x8bc, 0x3, 0x2, 0x2, 0x2, 0x8bb, 
       0x8a7, 0x3, 0x2, 0x2, 0x2, 0x8bb, 0x8ab, 0x3, 0x2, 0x2, 0x2, 0x8bb, 
       0x8b3, 0x3, 0x2, 0x2, 0x2, 0x8bc, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x8bd, 
       0x8bf, 0x5, 0x18, 0xd, 0x2, 0x8be, 0x8bd, 0x3, 0x2, 0x2, 0x2, 0x8be, 
       0x8bf, 0x3, 0x2, 0x2, 0x2, 0x8bf, 0x8c0, 0x3, 0x2, 0x2, 0x2, 0x8c0, 
       0x8c7, 0x5, 0x8, 0x5, 0x2, 0x8c1, 0x8c2, 0x5, 0x18, 0xd, 0x2, 0x8c2, 
       0x8c3, 0x7, 0x3f, 0x2, 0x2, 0x8c3, 0x8c4, 0x5, 0x180, 0xc1, 0x2, 
       0x8c4, 0x8c7, 0x3, 0x2, 0x2, 0x2, 0x8c5, 0x8c7, 0x5, 0xb0, 0x59, 
       0x2, 0x8c6, 0x8be, 0x3, 0x2, 0x2, 0x2, 0x8c6, 0x8c1, 0x3, 0x2, 0x2, 
       0x2, 0x8c6, 0x8c5, 0x3, 0x2, 0x2, 0x2, 0x8c7, 0x15f, 0x3, 0x2, 0x2, 
       0x2, 0x8c8, 0x8c9, 0x9, 0xc, 0x2, 0x2, 0x8c9, 0x161, 0x3, 0x2, 0x2, 
       0x2, 0x8ca, 0x8cb, 0x7, 0x30, 0x2, 0x2, 0x8cb, 0x8cc, 0x5, 0x164, 
       0xb3, 0x2, 0x8cc, 0x163, 0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8cf, 0x5, 0xa6, 
       0x54, 0x2, 0x8ce, 0x8d0, 0x5, 0x166, 0xb4, 0x2, 0x8cf, 0x8ce, 0x3, 
       0x2, 0x2, 0x2, 0x8cf, 0x8d0, 0x3, 0x2, 0x2, 0x2, 0x8d0, 0x165, 0x3, 
       0x2, 0x2, 0x2, 0x8d1, 0x8d3, 0x5, 0x10c, 0x87, 0x2, 0x8d2, 0x8d4, 
       0x5, 0x166, 0xb4, 0x2, 0x8d3, 0x8d2, 0x3, 0x2, 0x2, 0x2, 0x8d3, 0x8d4, 
       0x3, 0x2, 0x2, 0x2, 0x8d4, 0x167, 0x3, 0x2, 0x2, 0x2, 0x8d5, 0x8d6, 
       0x7, 0x59, 0x2, 0x2, 0x8d6, 0x8d7, 0x5, 0x16a, 0xb6, 0x2, 0x8d7, 
       0x169, 0x3, 0x2, 0x2, 0x2, 0x8d8, 0x8d9, 0x8, 0xb6, 0x1, 0x2, 0x8d9, 
       0x8db, 0x5, 0x16c, 0xb7, 0x2, 0x8da, 0x8dc, 0x7, 0x5a, 0x2, 0x2, 
       0x8db, 0x8da, 0x3, 0x2, 0x2, 0x2, 0x8db, 0x8dc, 0x3, 0x2, 0x2, 0x2, 
       0x8dc, 0x8e5, 0x3, 0x2, 0x2, 0x2, 0x8dd, 0x8de, 0xc, 0x3, 0x2, 0x2, 
       0x8de, 0x8df, 0x7, 0x80, 0x2, 0x2, 0x8df, 0x8e1, 0x5, 0x16c, 0xb7, 
       0x2, 0x8e0, 0x8e2, 0x7, 0x5a, 0x2, 0x2, 0x8e1, 0x8e0, 0x3, 0x2, 0x2, 
       0x2, 0x8e1, 0x8e2, 0x3, 0x2, 0x2, 0x2, 0x8e2, 0x8e4, 0x3, 0x2, 0x2, 
       0x2, 0x8e3, 0x8dd, 0x3, 0x2, 0x2, 0x2, 0x8e4, 0x8e7, 0x3, 0x2, 0x2, 
       0x2, 0x8e5, 0x8e3, 0x3, 0x2, 0x2, 0x2, 0x8e5, 0x8e6, 0x3, 0x2, 0x2, 
       0x2, 0x8e6, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x8e7, 0x8e5, 0x3, 0x2, 0x2, 
       0x2, 0x8e8, 0x8e9, 0x5, 0x16e, 0xb8, 0x2, 0x8e9, 0x8eb, 0x7, 0x56, 
       0x2, 0x2, 0x8ea, 0x8ec, 0x5, 0x32, 0x1a, 0x2, 0x8eb, 0x8ea, 0x3, 
       0x2, 0x2, 0x2, 0x8eb, 0x8ec, 0x3, 0x2, 0x2, 0x2, 0x8ec, 0x8ed, 0x3, 
       0x2, 0x2, 0x2, 0x8ed, 0x8ee, 0x7, 0x57, 0x2, 0x2, 0x8ee, 0x8ef, 0x5, 
       0x16e, 0xb8, 0x2, 0x8ef, 0x8f0, 0x5, 0x13c, 0x9f, 0x2, 0x8f0, 0x16d, 
       0x3, 0x2, 0x2, 0x2, 0x8f1, 0x8f4, 0x5, 0x15e, 0xb0, 0x2, 0x8f2, 0x8f4, 
       0x7, 0x8c, 0x2, 0x2, 0x8f3, 0x8f1, 0x3, 0x2, 0x2, 0x2, 0x8f3, 0x8f2, 
       0x3, 0x2, 0x2, 0x2, 0x8f4, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x8f5, 0x8f6, 
       0x7, 0x30, 0x2, 0x2, 0x8f6, 0x8f7, 0x5, 0x172, 0xba, 0x2, 0x8f7, 
       0x171, 0x3, 0x2, 0x2, 0x2, 0x8f8, 0x929, 0x7, 0x2d, 0x2, 0x2, 0x8f9, 
       0x929, 0x7, 0x19, 0x2, 0x2, 0x8fa, 0x8fb, 0x7, 0x2d, 0x2, 0x2, 0x8fb, 
       0x8fc, 0x7, 0x52, 0x2, 0x2, 0x8fc, 0x929, 0x7, 0x55, 0x2, 0x2, 0x8fd, 
       0x8fe, 0x7, 0x19, 0x2, 0x2, 0x8fe, 0x8ff, 0x7, 0x52, 0x2, 0x2, 0x8ff, 
       0x929, 0x7, 0x55, 0x2, 0x2, 0x900, 0x929, 0x7, 0x5f, 0x2, 0x2, 0x901, 
       0x929, 0x7, 0x60, 0x2, 0x2, 0x902, 0x929, 0x7, 0x61, 0x2, 0x2, 0x903, 
       0x929, 0x7, 0x62, 0x2, 0x2, 0x904, 0x929, 0x7, 0x63, 0x2, 0x2, 0x905, 
       0x929, 0x7, 0x64, 0x2, 0x2, 0x906, 0x929, 0x7, 0x65, 0x2, 0x2, 0x907, 
       0x929, 0x7, 0x66, 0x2, 0x2, 0x908, 0x929, 0x7, 0x67, 0x2, 0x2, 0x909, 
       0x929, 0x7, 0x68, 0x2, 0x2, 0x90a, 0x929, 0x7, 0x69, 0x2, 0x2, 0x90b, 
       0x929, 0x7, 0x6a, 0x2, 0x2, 0x90c, 0x929, 0x7, 0x6b, 0x2, 0x2, 0x90d, 
       0x929, 0x7, 0x6c, 0x2, 0x2, 0x90e, 0x929, 0x7, 0x6d, 0x2, 0x2, 0x90f, 
       0x929, 0x7, 0x6e, 0x2, 0x2, 0x910, 0x929, 0x7, 0x6f, 0x2, 0x2, 0x911, 
       0x929, 0x7, 0x70, 0x2, 0x2, 0x912, 0x929, 0x7, 0x71, 0x2, 0x2, 0x913, 
       0x929, 0x7, 0x72, 0x2, 0x2, 0x914, 0x929, 0x7, 0x73, 0x2, 0x2, 0x915, 
       0x929, 0x7, 0x74, 0x2, 0x2, 0x916, 0x929, 0x7, 0x75, 0x2, 0x2, 0x917, 
       0x929, 0x7, 0x77, 0x2, 0x2, 0x918, 0x929, 0x7, 0x76, 0x2, 0x2, 0x919, 
       0x929, 0x7, 0x78, 0x2, 0x2, 0x91a, 0x929, 0x7, 0x79, 0x2, 0x2, 0x91b, 
       0x929, 0x7, 0x7a, 0x2, 0x2, 0x91c, 0x929, 0x7, 0x7b, 0x2, 0x2, 0x91d, 
       0x929, 0x7, 0x7c, 0x2, 0x2, 0x91e, 0x929, 0x7, 0x7d, 0x2, 0x2, 0x91f, 
       0x929, 0x7, 0x7e, 0x2, 0x2, 0x920, 0x929, 0x7, 0x7f, 0x2, 0x2, 0x921, 
       0x929, 0x7, 0x80, 0x2, 0x2, 0x922, 0x929, 0x7, 0x81, 0x2, 0x2, 0x923, 
       0x929, 0x7, 0x82, 0x2, 0x2, 0x924, 0x925, 0x7, 0x56, 0x2, 0x2, 0x925, 
       0x929, 0x7, 0x57, 0x2, 0x2, 0x926, 0x927, 0x7, 0x54, 0x2, 0x2, 0x927, 
       0x929, 0x7, 0x55, 0x2, 0x2, 0x928, 0x8f8, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x8f9, 0x3, 0x2, 0x2, 0x2, 0x928, 0x8fa, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x8fd, 0x3, 0x2, 0x2, 0x2, 0x928, 0x900, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x901, 0x3, 0x2, 0x2, 0x2, 0x928, 0x902, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x903, 0x3, 0x2, 0x2, 0x2, 0x928, 0x904, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x905, 0x3, 0x2, 0x2, 0x2, 0x928, 0x906, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x907, 0x3, 0x2, 0x2, 0x2, 0x928, 0x908, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x909, 0x3, 0x2, 0x2, 0x2, 0x928, 0x90a, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x90b, 0x3, 0x2, 0x2, 0x2, 0x928, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x90d, 0x3, 0x2, 0x2, 0x2, 0x928, 0x90e, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x90f, 0x3, 0x2, 0x2, 0x2, 0x928, 0x910, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x911, 0x3, 0x2, 0x2, 0x2, 0x928, 0x912, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x913, 0x3, 0x2, 0x2, 0x2, 0x928, 0x914, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x915, 0x3, 0x2, 0x2, 0x2, 0x928, 0x916, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x917, 0x3, 0x2, 0x2, 0x2, 0x928, 0x918, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x919, 0x3, 0x2, 0x2, 0x2, 0x928, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x91b, 0x3, 0x2, 0x2, 0x2, 0x928, 0x91c, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x91d, 0x3, 0x2, 0x2, 0x2, 0x928, 0x91e, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x91f, 0x3, 0x2, 0x2, 0x2, 0x928, 0x920, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x921, 0x3, 0x2, 0x2, 0x2, 0x928, 0x922, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x923, 0x3, 0x2, 0x2, 0x2, 0x928, 0x924, 0x3, 0x2, 0x2, 0x2, 0x928, 
       0x926, 0x3, 0x2, 0x2, 0x2, 0x929, 0x173, 0x3, 0x2, 0x2, 0x2, 0x92a, 
       0x92b, 0x7, 0x30, 0x2, 0x2, 0x92b, 0x92c, 0x7, 0x87, 0x2, 0x2, 0x92c, 
       0x930, 0x7, 0x8c, 0x2, 0x2, 0x92d, 0x92e, 0x7, 0x30, 0x2, 0x2, 0x92e, 
       0x930, 0x7, 0x8b, 0x2, 0x2, 0x92f, 0x92a, 0x3, 0x2, 0x2, 0x2, 0x92f, 
       0x92d, 0x3, 0x2, 0x2, 0x2, 0x930, 0x175, 0x3, 0x2, 0x2, 0x2, 0x931, 
       0x932, 0x7, 0x3f, 0x2, 0x2, 0x932, 0x933, 0x7, 0x6a, 0x2, 0x2, 0x933, 
       0x934, 0x5, 0x178, 0xbd, 0x2, 0x934, 0x935, 0x7, 0x6b, 0x2, 0x2, 
       0x935, 0x936, 0x5, 0x8c, 0x47, 0x2, 0x936, 0x177, 0x3, 0x2, 0x2, 
       0x2, 0x937, 0x938, 0x8, 0xbd, 0x1, 0x2, 0x938, 0x939, 0x5, 0x17a, 
       0xbe, 0x2, 0x939, 0x93f, 0x3, 0x2, 0x2, 0x2, 0x93a, 0x93b, 0xc, 0x3, 
       0x2, 0x2, 0x93b, 0x93c, 0x7, 0x80, 0x2, 0x2, 0x93c, 0x93e, 0x5, 0x17a, 
       0xbe, 0x2, 0x93d, 0x93a, 0x3, 0x2, 0x2, 0x2, 0x93e, 0x941, 0x3, 0x2, 
       0x2, 0x2, 0x93f, 0x93d, 0x3, 0x2, 0x2, 0x2, 0x93f, 0x940, 0x3, 0x2, 
       0x2, 0x2, 0x940, 0x179, 0x3, 0x2, 0x2, 0x2, 0x941, 0x93f, 0x3, 0x2, 
       0x2, 0x2, 0x942, 0x945, 0x5, 0x17c, 0xbf, 0x2, 0x943, 0x945, 0x5, 
       0x126, 0x94, 0x2, 0x944, 0x942, 0x3, 0x2, 0x2, 0x2, 0x944, 0x943, 
       0x3, 0x2, 0x2, 0x2, 0x945, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x946, 0x948, 
       0x5, 0x17e, 0xc0, 0x2, 0x947, 0x949, 0x7, 0x5a, 0x2, 0x2, 0x948, 
       0x947, 0x3, 0x2, 0x2, 0x2, 0x948, 0x949, 0x3, 0x2, 0x2, 0x2, 0x949, 
       0x94b, 0x3, 0x2, 0x2, 0x2, 0x94a, 0x94c, 0x7, 0x8c, 0x2, 0x2, 0x94b, 
       0x94a, 0x3, 0x2, 0x2, 0x2, 0x94b, 0x94c, 0x3, 0x2, 0x2, 0x2, 0x94c, 
       0x96b, 0x3, 0x2, 0x2, 0x2, 0x94d, 0x94f, 0x5, 0x17e, 0xc0, 0x2, 0x94e, 
       0x950, 0x7, 0x8c, 0x2, 0x2, 0x94f, 0x94e, 0x3, 0x2, 0x2, 0x2, 0x94f, 
       0x950, 0x3, 0x2, 0x2, 0x2, 0x950, 0x951, 0x3, 0x2, 0x2, 0x2, 0x951, 
       0x952, 0x7, 0x69, 0x2, 0x2, 0x952, 0x953, 0x5, 0x114, 0x8b, 0x2, 
       0x953, 0x96b, 0x3, 0x2, 0x2, 0x2, 0x954, 0x955, 0x7, 0x3f, 0x2, 0x2, 
       0x955, 0x956, 0x7, 0x6a, 0x2, 0x2, 0x956, 0x957, 0x5, 0x178, 0xbd, 
       0x2, 0x957, 0x958, 0x7, 0x6b, 0x2, 0x2, 0x958, 0x95a, 0x5, 0x17e, 
       0xc0, 0x2, 0x959, 0x95b, 0x7, 0x5a, 0x2, 0x2, 0x95a, 0x959, 0x3, 
       0x2, 0x2, 0x2, 0x95a, 0x95b, 0x3, 0x2, 0x2, 0x2, 0x95b, 0x95d, 0x3, 
       0x2, 0x2, 0x2, 0x95c, 0x95e, 0x7, 0x8c, 0x2, 0x2, 0x95d, 0x95c, 0x3, 
       0x2, 0x2, 0x2, 0x95d, 0x95e, 0x3, 0x2, 0x2, 0x2, 0x95e, 0x96b, 0x3, 
       0x2, 0x2, 0x2, 0x95f, 0x960, 0x7, 0x3f, 0x2, 0x2, 0x960, 0x961, 0x7, 
       0x6a, 0x2, 0x2, 0x961, 0x962, 0x5, 0x178, 0xbd, 0x2, 0x962, 0x963, 
       0x7, 0x6b, 0x2, 0x2, 0x963, 0x965, 0x5, 0x17e, 0xc0, 0x2, 0x964, 
       0x966, 0x7, 0x8c, 0x2, 0x2, 0x965, 0x964, 0x3, 0x2, 0x2, 0x2, 0x965, 
       0x966, 0x3, 0x2, 0x2, 0x2, 0x966, 0x967, 0x3, 0x2, 0x2, 0x2, 0x967, 
       0x968, 0x7, 0x69, 0x2, 0x2, 0x968, 0x969, 0x5, 0x12, 0xa, 0x2, 0x969, 
       0x96b, 0x3, 0x2, 0x2, 0x2, 0x96a, 0x946, 0x3, 0x2, 0x2, 0x2, 0x96a, 
       0x94d, 0x3, 0x2, 0x2, 0x2, 0x96a, 0x954, 0x3, 0x2, 0x2, 0x2, 0x96a, 
       0x95f, 0x3, 0x2, 0x2, 0x2, 0x96b, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x96c, 
       0x96d, 0x9, 0xd, 0x2, 0x2, 0x96d, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x96e, 
       0x96f, 0x5, 0xc, 0x7, 0x2, 0x96f, 0x971, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x7, 0x6a, 0x2, 0x2, 0x970, 0x972, 0x5, 0x184, 0xc3, 0x2, 0x971, 0x970, 
       0x3, 0x2, 0x2, 0x2, 0x971, 0x972, 0x3, 0x2, 0x2, 0x2, 0x972, 0x973, 
       0x3, 0x2, 0x2, 0x2, 0x973, 0x974, 0x7, 0x6b, 0x2, 0x2, 0x974, 0x181, 
       0x3, 0x2, 0x2, 0x2, 0x975, 0x985, 0x5, 0x180, 0xc1, 0x2, 0x976, 0x977, 
       0x5, 0x170, 0xb9, 0x2, 0x977, 0x979, 0x7, 0x6a, 0x2, 0x2, 0x978, 
       0x97a, 0x5, 0x184, 0xc3, 0x2, 0x979, 0x978, 0x3, 0x2, 0x2, 0x2, 0x979, 
       0x97a, 0x3, 0x2, 0x2, 0x2, 0x97a, 0x97b, 0x3, 0x2, 0x2, 0x2, 0x97b, 
       0x97c, 0x7, 0x6b, 0x2, 0x2, 0x97c, 0x985, 0x3, 0x2, 0x2, 0x2, 0x97d, 
       0x97e, 0x5, 0x174, 0xbb, 0x2, 0x97e, 0x980, 0x7, 0x6a, 0x2, 0x2, 
       0x97f, 0x981, 0x5, 0x184, 0xc3, 0x2, 0x980, 0x97f, 0x3, 0x2, 0x2, 
       0x2, 0x980, 0x981, 0x3, 0x2, 0x2, 0x2, 0x981, 0x982, 0x3, 0x2, 0x2, 
       0x2, 0x982, 0x983, 0x7, 0x6b, 0x2, 0x2, 0x983, 0x985, 0x3, 0x2, 0x2, 
       0x2, 0x984, 0x975, 0x3, 0x2, 0x2, 0x2, 0x984, 0x976, 0x3, 0x2, 0x2, 
       0x2, 0x984, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x985, 0x183, 0x3, 0x2, 0x2, 
       0x2, 0x986, 0x987, 0x8, 0xc3, 0x1, 0x2, 0x987, 0x989, 0x5, 0x186, 
       0xc4, 0x2, 0x988, 0x98a, 0x7, 0x5a, 0x2, 0x2, 0x989, 0x988, 0x3, 
       0x2, 0x2, 0x2, 0x989, 0x98a, 0x3, 0x2, 0x2, 0x2, 0x98a, 0x993, 0x3, 
       0x2, 0x2, 0x2, 0x98b, 0x98c, 0xc, 0x3, 0x2, 0x2, 0x98c, 0x98d, 0x7, 
       0x80, 0x2, 0x2, 0x98d, 0x98f, 0x5, 0x186, 0xc4, 0x2, 0x98e, 0x990, 
       0x7, 0x5a, 0x2, 0x2, 0x98f, 0x98e, 0x3, 0x2, 0x2, 0x2, 0x98f, 0x990, 
       0x3, 0x2, 0x2, 0x2, 0x990, 0x992, 0x3, 0x2, 0x2, 0x2, 0x991, 0x98b, 
       0x3, 0x2, 0x2, 0x2, 0x992, 0x995, 0x3, 0x2, 0x2, 0x2, 0x993, 0x991, 
       0x3, 0x2, 0x2, 0x2, 0x993, 0x994, 0x3, 0x2, 0x2, 0x2, 0x994, 0x185, 
       0x3, 0x2, 0x2, 0x2, 0x995, 0x993, 0x3, 0x2, 0x2, 0x2, 0x996, 0x99a, 
       0x5, 0x6c, 0x37, 0x2, 0x997, 0x99a, 0x5, 0x114, 0x8b, 0x2, 0x998, 
       0x99a, 0x5, 0x12, 0xa, 0x2, 0x999, 0x996, 0x3, 0x2, 0x2, 0x2, 0x999, 
       0x997, 0x3, 0x2, 0x2, 0x2, 0x999, 0x998, 0x3, 0x2, 0x2, 0x2, 0x99a, 
       0x187, 0x3, 0x2, 0x2, 0x2, 0x99b, 0x99c, 0x7, 0x47, 0x2, 0x2, 0x99c, 
       0x99d, 0x5, 0x18, 0xd, 0x2, 0x99d, 0x99e, 0x7, 0x8c, 0x2, 0x2, 0x99e, 
       0x9a7, 0x3, 0x2, 0x2, 0x2, 0x99f, 0x9a0, 0x7, 0x47, 0x2, 0x2, 0x9a0, 
       0x9a2, 0x5, 0x18, 0xd, 0x2, 0x9a1, 0x9a3, 0x7, 0x3f, 0x2, 0x2, 0x9a2, 
       0x9a1, 0x3, 0x2, 0x2, 0x2, 0x9a2, 0x9a3, 0x3, 0x2, 0x2, 0x2, 0x9a3, 
       0x9a4, 0x3, 0x2, 0x2, 0x2, 0x9a4, 0x9a5, 0x5, 0x180, 0xc1, 0x2, 0x9a5, 
       0x9a7, 0x3, 0x2, 0x2, 0x2, 0x9a6, 0x99b, 0x3, 0x2, 0x2, 0x2, 0x9a6, 
       0x99f, 0x3, 0x2, 0x2, 0x2, 0x9a7, 0x189, 0x3, 0x2, 0x2, 0x2, 0x9a8, 
       0x9aa, 0x7, 0x21, 0x2, 0x2, 0x9a9, 0x9a8, 0x3, 0x2, 0x2, 0x2, 0x9a9, 
       0x9aa, 0x3, 0x2, 0x2, 0x2, 0x9aa, 0x9ab, 0x3, 0x2, 0x2, 0x2, 0x9ab, 
       0x9ac, 0x7, 0x3f, 0x2, 0x2, 0x9ac, 0x9ad, 0x5, 0x8c, 0x47, 0x2, 0x9ad, 
       0x18b, 0x3, 0x2, 0x2, 0x2, 0x9ae, 0x9af, 0x7, 0x3f, 0x2, 0x2, 0x9af, 
       0x9b0, 0x7, 0x6a, 0x2, 0x2, 0x9b0, 0x9b1, 0x7, 0x6b, 0x2, 0x2, 0x9b1, 
       0x9b2, 0x5, 0x8c, 0x47, 0x2, 0x9b2, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x9b3, 
       0x9b5, 0x7, 0x1f, 0x2, 0x2, 0x9b4, 0x9b3, 0x3, 0x2, 0x2, 0x2, 0x9b4, 
       0x9b5, 0x3, 0x2, 0x2, 0x2, 0x9b5, 0x9b6, 0x3, 0x2, 0x2, 0x2, 0x9b6, 
       0x9b7, 0x5, 0xc, 0x7, 0x2, 0x9b7, 0x9b8, 0x7, 0x56, 0x2, 0x2, 0x9b8, 
       0x9b9, 0x5, 0x122, 0x92, 0x2, 0x9b9, 0x9ba, 0x7, 0x57, 0x2, 0x2, 
       0x9ba, 0x9bb, 0x7, 0x82, 0x2, 0x2, 0x9bb, 0x9bc, 0x5, 0x180, 0xc1, 
       0x2, 0x9bc, 0x9bd, 0x7, 0x58, 0x2, 0x2, 0x9bd, 0x18f, 0x3, 0x2, 0x2, 
       0x2, 0x9be, 0x9bf, 0x7, 0x44, 0x2, 0x2, 0x9bf, 0x9c0, 0x5, 0x78, 
       0x3d, 0x2, 0x9c0, 0x9c1, 0x5, 0x194, 0xcb, 0x2, 0x9c1, 0x191, 0x3, 
       0x2, 0x2, 0x2, 0x9c2, 0x9c4, 0x7, 0x44, 0x2, 0x2, 0x9c3, 0x9c5, 0x5, 
       0x168, 0xb5, 0x2, 0x9c4, 0x9c3, 0x3, 0x2, 0x2, 0x2, 0x9c4, 0x9c5, 
       0x3, 0x2, 0x2, 0x2, 0x9c5, 0x9c6, 0x3, 0x2, 0x2, 0x2, 0x9c6, 0x9c7, 
       0x5, 0x78, 0x3d, 0x2, 0x9c7, 0x9c8, 0x5, 0x194, 0xcb, 0x2, 0x9c8, 
       0x193, 0x3, 0x2, 0x2, 0x2, 0x9c9, 0x9cb, 0x5, 0x196, 0xcc, 0x2, 0x9ca, 
       0x9cc, 0x5, 0x194, 0xcb, 0x2, 0x9cb, 0x9ca, 0x3, 0x2, 0x2, 0x2, 0x9cb, 
       0x9cc, 0x3, 0x2, 0x2, 0x2, 0x9cc, 0x195, 0x3, 0x2, 0x2, 0x2, 0x9cd, 
       0x9ce, 0x7, 0xe, 0x2, 0x2, 0x9ce, 0x9cf, 0x7, 0x56, 0x2, 0x2, 0x9cf, 
       0x9d0, 0x5, 0x198, 0xcd, 0x2, 0x9d0, 0x9d1, 0x7, 0x57, 0x2, 0x2, 
       0x9d1, 0x9d2, 0x5, 0x78, 0x3d, 0x2, 0x9d2, 0x197, 0x3, 0x2, 0x2, 
       0x2, 0x9d3, 0x9d5, 0x5, 0xe2, 0x72, 0x2, 0x9d4, 0x9d3, 0x3, 0x2, 
       0x2, 0x2, 0x9d4, 0x9d5, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9d6, 0x3, 0x2, 
       0x2, 0x2, 0x9d6, 0x9d7, 0x5, 0xa6, 0x54, 0x2, 0x9d7, 0x9d8, 0x5, 
       0xfe, 0x80, 0x2, 0x9d8, 0x9e2, 0x3, 0x2, 0x2, 0x2, 0x9d9, 0x9db, 
       0x5, 0xe2, 0x72, 0x2, 0x9da, 0x9d9, 0x3, 0x2, 0x2, 0x2, 0x9da, 0x9db, 
       0x3, 0x2, 0x2, 0x2, 0x9db, 0x9dc, 0x3, 0x2, 0x2, 0x2, 0x9dc, 0x9de, 
       0x5, 0xa6, 0x54, 0x2, 0x9dd, 0x9df, 0x5, 0x118, 0x8d, 0x2, 0x9de, 
       0x9dd, 0x3, 0x2, 0x2, 0x2, 0x9de, 0x9df, 0x3, 0x2, 0x2, 0x2, 0x9df, 
       0x9e2, 0x3, 0x2, 0x2, 0x2, 0x9e0, 0x9e2, 0x7, 0x5a, 0x2, 0x2, 0x9e1, 
       0x9d4, 0x3, 0x2, 0x2, 0x2, 0x9e1, 0x9da, 0x3, 0x2, 0x2, 0x2, 0x9e1, 
       0x9e0, 0x3, 0x2, 0x2, 0x2, 0x9e2, 0x199, 0x3, 0x2, 0x2, 0x2, 0x9e3, 
       0x9e4, 0x7, 0x2e, 0x2, 0x2, 0x9e4, 0x9e5, 0x7, 0x56, 0x2, 0x2, 0x9e5, 
       0x9e6, 0x5, 0x6c, 0x37, 0x2, 0x9e6, 0x9e7, 0x7, 0x57, 0x2, 0x2, 0x9e7, 
       0x9ed, 0x3, 0x2, 0x2, 0x2, 0x9e8, 0x9ed, 0x7, 0x2e, 0x2, 0x2, 0x9e9, 
       0x9ea, 0x7, 0x42, 0x2, 0x2, 0x9ea, 0x9eb, 0x7, 0x56, 0x2, 0x2, 0x9eb, 
       0x9ed, 0x7, 0x57, 0x2, 0x2, 0x9ec, 0x9e3, 0x3, 0x2, 0x2, 0x2, 0x9ec, 
       0x9e8, 0x3, 0x2, 0x2, 0x2, 0x9ec, 0x9e9, 0x3, 0x2, 0x2, 0x2, 0x9ed, 
       0x19b, 0x3, 0x2, 0x2, 0x2, 0x9ee, 0x9ef, 0x8, 0xcf, 0x1, 0x2, 0x9ef, 
       0x9f0, 0x7, 0x8c, 0x2, 0x2, 0x9f0, 0x9f6, 0x3, 0x2, 0x2, 0x2, 0x9f1, 
       0x9f2, 0xc, 0x3, 0x2, 0x2, 0x9f2, 0x9f3, 0x7, 0x80, 0x2, 0x2, 0x9f3, 
       0x9f5, 0x7, 0x8c, 0x2, 0x2, 0x9f4, 0x9f1, 0x3, 0x2, 0x2, 0x2, 0x9f5, 
       0x9f8, 0x3, 0x2, 0x2, 0x2, 0x9f6, 0x9f4, 0x3, 0x2, 0x2, 0x2, 0x9f6, 
       0x9f7, 0x3, 0x2, 0x2, 0x2, 0x9f7, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x9f8, 
       0x9f6, 0x3, 0x2, 0x2, 0x2, 0x9f9, 0xa01, 0x5, 0x1a0, 0xd1, 0x2, 0x9fa, 
       0xa01, 0x7, 0x85, 0x2, 0x2, 0x9fb, 0xa01, 0x7, 0x86, 0x2, 0x2, 0x9fc, 
       0xa01, 0x7, 0x87, 0x2, 0x2, 0x9fd, 0xa01, 0x5, 0x1a2, 0xd2, 0x2, 
       0x9fe, 0xa01, 0x5, 0x1a4, 0xd3, 0x2, 0x9ff, 0xa01, 0x5, 0x1a6, 0xd4, 
       0x2, 0xa00, 0x9f9, 0x3, 0x2, 0x2, 0x2, 0xa00, 0x9fa, 0x3, 0x2, 0x2, 
       0x2, 0xa00, 0x9fb, 0x3, 0x2, 0x2, 0x2, 0xa00, 0x9fc, 0x3, 0x2, 0x2, 
       0x2, 0xa00, 0x9fd, 0x3, 0x2, 0x2, 0x2, 0xa00, 0x9fe, 0x3, 0x2, 0x2, 
       0x2, 0xa00, 0x9ff, 0x3, 0x2, 0x2, 0x2, 0xa01, 0x19f, 0x3, 0x2, 0x2, 
       0x2, 0xa02, 0xa03, 0x9, 0xe, 0x2, 0x2, 0xa03, 0x1a1, 0x3, 0x2, 0x2, 
       0x2, 0xa04, 0xa05, 0x9, 0xf, 0x2, 0x2, 0xa05, 0x1a3, 0x3, 0x2, 0x2, 
       0x2, 0xa06, 0xa07, 0x7, 0x2f, 0x2, 0x2, 0xa07, 0x1a5, 0x3, 0x2, 0x2, 
       0x2, 0xa08, 0xa09, 0x9, 0x10, 0x2, 0x2, 0xa09, 0x1a7, 0x3, 0x2, 0x2, 
       0x2, 0x145, 0x1ac, 0x1b2, 0x1b9, 0x1c6, 0x1ca, 0x1d5, 0x1d9, 0x1e8, 
       0x1ef, 0x1f4, 0x1f6, 0x1fb, 0x201, 0x209, 0x20c, 0x20f, 0x212, 0x21a, 
       0x221, 0x227, 0x22b, 0x232, 0x238, 0x23b, 0x254, 0x25d, 0x264, 0x294, 
       0x29e, 0x2a4, 0x2aa, 0x2b7, 0x2b9, 0x2bf, 0x2d1, 0x2ef, 0x2f4, 0x2f8, 
       0x2fc, 0x2ff, 0x303, 0x309, 0x30b, 0x313, 0x317, 0x320, 0x327, 0x32b, 
       0x330, 0x334, 0x337, 0x33c, 0x342, 0x34f, 0x35a, 0x35c, 0x36b, 0x36d, 
       0x379, 0x37b, 0x387, 0x389, 0x39b, 0x39d, 0x3a9, 0x3ab, 0x3b6, 0x3c1, 
       0x3cc, 0x3d7, 0x3e2, 0x3ec, 0x3f0, 0x3f8, 0x404, 0x40b, 0x40f, 0x413, 
       0x417, 0x41b, 0x420, 0x423, 0x427, 0x42b, 0x431, 0x434, 0x43a, 0x442, 
       0x447, 0x44a, 0x450, 0x45b, 0x460, 0x464, 0x46c, 0x470, 0x47b, 0x481, 
       0x495, 0x499, 0x4a6, 0x4a9, 0x4af, 0x4b3, 0x4b9, 0x4bc, 0x4c9, 0x4cf, 
       0x4da, 0x4e8, 0x4f2, 0x4f5, 0x4fd, 0x505, 0x50f, 0x513, 0x51b, 0x52b, 
       0x539, 0x53d, 0x542, 0x54c, 0x550, 0x555, 0x55a, 0x55e, 0x563, 0x566, 
       0x56e, 0x580, 0x586, 0x591, 0x595, 0x598, 0x5a2, 0x5a8, 0x5ab, 0x5b0, 
       0x5ba, 0x5be, 0x5c1, 0x5c4, 0x5c7, 0x5cd, 0x5d0, 0x5d4, 0x5dd, 0x5ea, 
       0x5f2, 0x5f6, 0x5fb, 0x5fe, 0x602, 0x60a, 0x60e, 0x622, 0x62b, 0x636, 
       0x63c, 0x640, 0x644, 0x64a, 0x64f, 0x655, 0x661, 0x667, 0x670, 0x676, 
       0x67d, 0x683, 0x68b, 0x68f, 0x697, 0x69c, 0x6a1, 0x6a8, 0x6aa, 0x6af, 
       0x6b3, 0x6bd, 0x6c8, 0x6cd, 0x6d2, 0x6d7, 0x6db, 0x6e5, 0x6ea, 0x6ee, 
       0x6f5, 0x6f9, 0x6ff, 0x704, 0x708, 0x70c, 0x70e, 0x719, 0x71c, 0x71f, 
       0x722, 0x729, 0x72c, 0x730, 0x734, 0x739, 0x73c, 0x73e, 0x742, 0x74b, 
       0x74f, 0x753, 0x759, 0x75e, 0x760, 0x766, 0x76a, 0x770, 0x777, 0x77b, 
       0x77d, 0x77f, 0x786, 0x790, 0x794, 0x796, 0x798, 0x79c, 0x79f, 0x7a5, 
       0x7af, 0x7b3, 0x7b9, 0x7c1, 0x7c5, 0x7c8, 0x7cc, 0x7d1, 0x7d4, 0x7d7, 
       0x7db, 0x7e3, 0x7e9, 0x7ec, 0x7fd, 0x801, 0x806, 0x80c, 0x810, 0x816, 
       0x81c, 0x820, 0x825, 0x82b, 0x82f, 0x832, 0x836, 0x839, 0x83b, 0x83e, 
       0x848, 0x84d, 0x84f, 0x852, 0x855, 0x858, 0x862, 0x86c, 0x871, 0x874, 
       0x878, 0x87b, 0x87e, 0x882, 0x88b, 0x899, 0x89f, 0x8a3, 0x8a7, 0x8ab, 
       0x8af, 0x8b3, 0x8b7, 0x8bb, 0x8be, 0x8c6, 0x8cf, 0x8d3, 0x8db, 0x8e1, 
       0x8e5, 0x8eb, 0x8f3, 0x928, 0x92f, 0x93f, 0x944, 0x948, 0x94b, 0x94f, 
       0x95a, 0x95d, 0x965, 0x96a, 0x971, 0x979, 0x980, 0x984, 0x989, 0x98f, 
       0x993, 0x999, 0x9a2, 0x9a6, 0x9a9, 0x9b4, 0x9c4, 0x9cb, 0x9d4, 0x9da, 
       0x9de, 0x9e1, 0x9ec, 0x9f6, 0xa00, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CppParser::Initializer CppParser::_init;
