
module SoupSyntax;


//#include "CppParserListener.h"
//#include "CppParserVisitor.h"

//#include "CppParser.h"


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


//----------------- DoubleGreaterThanContext ------------------------------------------------------------------

CppParser::DoubleGreaterThanContext::DoubleGreaterThanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CppParser::DoubleGreaterThanContext::GreaterThan() {
  return getTokens(CppParser::GreaterThan);
}

tree::TerminalNode* CppParser::DoubleGreaterThanContext::GreaterThan(size_t i) {
  return getToken(CppParser::GreaterThan, i);
}


size_t CppParser::DoubleGreaterThanContext::getRuleIndex() const {
  return CppParser::RuleDoubleGreaterThan;
}

void CppParser::DoubleGreaterThanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoubleGreaterThan(this);
}

void CppParser::DoubleGreaterThanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoubleGreaterThan(this);
}


antlrcpp::Any CppParser::DoubleGreaterThanContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDoubleGreaterThan(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DoubleGreaterThanContext* CppParser::doubleGreaterThan() {
  DoubleGreaterThanContext *_localctx = _tracker.createInstance<DoubleGreaterThanContext>(_ctx, getState());
  enterRule(_localctx, 0, CppParser::RuleDoubleGreaterThan);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(424);
    match(CppParser::GreaterThan);
    setState(425);
    match(CppParser::GreaterThan);
   
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


antlrcpp::Any CppParser::NamespaceNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceName(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NamespaceNameContext* CppParser::namespaceName() {
  NamespaceNameContext *_localctx = _tracker.createInstance<NamespaceNameContext>(_ctx, getState());
  enterRule(_localctx, 2, CppParser::RuleNamespaceName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(429);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(427);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(428);
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


antlrcpp::Any CppParser::NamespaceAliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceAlias(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NamespaceAliasContext* CppParser::namespaceAlias() {
  NamespaceAliasContext *_localctx = _tracker.createInstance<NamespaceAliasContext>(_ctx, getState());
  enterRule(_localctx, 4, CppParser::RuleNamespaceAlias);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
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


antlrcpp::Any CppParser::ClassNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitClassName(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ClassNameContext* CppParser::className() {
  ClassNameContext *_localctx = _tracker.createInstance<ClassNameContext>(_ctx, getState());
  enterRule(_localctx, 6, CppParser::RuleClassName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(435);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(433);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(434);
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


antlrcpp::Any CppParser::TemplateNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTemplateName(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TemplateNameContext* CppParser::templateName() {
  TemplateNameContext *_localctx = _tracker.createInstance<TemplateNameContext>(_ctx, getState());
  enterRule(_localctx, 8, CppParser::RuleTemplateName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(437);
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


antlrcpp::Any CppParser::TranslationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTranslationUnit(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TranslationUnitContext* CppParser::translationUnit() {
  TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, getState());
  enterRule(_localctx, 10, CppParser::RuleTranslationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
      | (1ULL << CppParser::Asm)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char8)
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
      | (1ULL << CppParser::Template))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CppParser::ThreadLocal - 65))
      | (1ULL << (CppParser::TypeDef - 65))
      | (1ULL << (CppParser::TypeName - 65))
      | (1ULL << (CppParser::Union - 65))
      | (1ULL << (CppParser::Unsigned - 65))
      | (1ULL << (CppParser::Using - 65))
      | (1ULL << (CppParser::Virtual - 65))
      | (1ULL << (CppParser::Void - 65))
      | (1ULL << (CppParser::Volatile - 65))
      | (1ULL << (CppParser::WChar - 65))
      | (1ULL << (CppParser::OpenBracket - 65))
      | (1ULL << (CppParser::OpenParenthesis - 65))
      | (1ULL << (CppParser::Semicolon - 65))
      | (1ULL << (CppParser::Ellipsis - 65))
      | (1ULL << (CppParser::DoubleColon - 65))
      | (1ULL << (CppParser::Asterisk - 65))
      | (1ULL << (CppParser::Ampersand - 65))
      | (1ULL << (CppParser::Tilde - 65))
      | (1ULL << (CppParser::DoubleAmpersand - 65)))) != 0) || _la == CppParser::Identifier) {
      setState(439);
      declarationSequence(0);
    }
    setState(442);
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

tree::TerminalNode* CppParser::PrimaryExpressionContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ExpressionContext* CppParser::PrimaryExpressionContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::PrimaryExpressionContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::PrimaryExpressionContext* CppParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 12, CppParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(453);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(444);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(445);
      match(CppParser::This);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(446);
      match(CppParser::OpenParenthesis);
      setState(447);
      expression(0);
      setState(448);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(450);
      identifierExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(451);
      lambdaExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(452);
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


antlrcpp::Any CppParser::IdentifierExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::IdentifierExpressionContext* CppParser::identifierExpression() {
  IdentifierExpressionContext *_localctx = _tracker.createInstance<IdentifierExpressionContext>(_ctx, getState());
  enterRule(_localctx, 14, CppParser::RuleIdentifierExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(457);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(455);
      unqualifiedIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(456);
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


antlrcpp::Any CppParser::UnqualifiedIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitUnqualifiedIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::UnqualifiedIdentifierContext* CppParser::unqualifiedIdentifier() {
  UnqualifiedIdentifierContext *_localctx = _tracker.createInstance<UnqualifiedIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 16, CppParser::RuleUnqualifiedIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(468);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(459);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(460);
      operatorFunctionIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(461);
      conversionFunctionIdentifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(462);
      literalOperatorIdentifier();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(463);
      match(CppParser::Tilde);
      setState(464);
      className();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(465);
      match(CppParser::Tilde);
      setState(466);
      declarationTypeSpecifier();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(467);
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


antlrcpp::Any CppParser::QualifiedIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitQualifiedIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::QualifiedIdentifierContext* CppParser::qualifiedIdentifier() {
  QualifiedIdentifierContext *_localctx = _tracker.createInstance<QualifiedIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 18, CppParser::RuleQualifiedIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    nestedNameSpecifier();
    setState(472);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Template) {
      setState(471);
      match(CppParser::Template);
    }
    setState(474);
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

CppParser::NestedNameSpecifierSequenceContext* CppParser::NestedNameSpecifierContext::nestedNameSpecifierSequence() {
  return getRuleContext<CppParser::NestedNameSpecifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::NestedNameSpecifierContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

CppParser::DeclarationTypeSpecifierContext* CppParser::NestedNameSpecifierContext::declarationTypeSpecifier() {
  return getRuleContext<CppParser::DeclarationTypeSpecifierContext>(0);
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


antlrcpp::Any CppParser::NestedNameSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNestedNameSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NestedNameSpecifierContext* CppParser::nestedNameSpecifier() {
  NestedNameSpecifierContext *_localctx = _tracker.createInstance<NestedNameSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 20, CppParser::RuleNestedNameSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(490);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::DoubleColon: {
        enterOuterAlt(_localctx, 1);
        setState(476);
        match(CppParser::DoubleColon);
        setState(478);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          setState(477);
          nestedNameSpecifierSequence();
          break;
        }

        }
        break;
      }

      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(480);
        match(CppParser::Identifier);
        setState(481);
        match(CppParser::DoubleColon);
        setState(483);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          setState(482);
          nestedNameSpecifierSequence();
          break;
        }

        }
        break;
      }

      case CppParser::DeclType: {
        enterOuterAlt(_localctx, 3);
        setState(485);
        declarationTypeSpecifier();
        setState(486);
        match(CppParser::DoubleColon);
        setState(488);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          setState(487);
          nestedNameSpecifierSequence();
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

//----------------- NestedNameSpecifierSequenceContext ------------------------------------------------------------------

CppParser::NestedNameSpecifierSequenceContext::NestedNameSpecifierSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NestedNameSpecifierSequenceContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::NestedNameSpecifierSequenceContext::DoubleColon() {
  return getToken(CppParser::DoubleColon, 0);
}

CppParser::NestedNameSpecifierSequenceContext* CppParser::NestedNameSpecifierSequenceContext::nestedNameSpecifierSequence() {
  return getRuleContext<CppParser::NestedNameSpecifierSequenceContext>(0);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::NestedNameSpecifierSequenceContext::simpleTemplateIdentifier() {
  return getRuleContext<CppParser::SimpleTemplateIdentifierContext>(0);
}

tree::TerminalNode* CppParser::NestedNameSpecifierSequenceContext::Template() {
  return getToken(CppParser::Template, 0);
}


size_t CppParser::NestedNameSpecifierSequenceContext::getRuleIndex() const {
  return CppParser::RuleNestedNameSpecifierSequence;
}

void CppParser::NestedNameSpecifierSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNestedNameSpecifierSequence(this);
}

void CppParser::NestedNameSpecifierSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNestedNameSpecifierSequence(this);
}


antlrcpp::Any CppParser::NestedNameSpecifierSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNestedNameSpecifierSequence(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NestedNameSpecifierSequenceContext* CppParser::nestedNameSpecifierSequence() {
  NestedNameSpecifierSequenceContext *_localctx = _tracker.createInstance<NestedNameSpecifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 22, CppParser::RuleNestedNameSpecifierSequence);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(505);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(492);
      match(CppParser::Identifier);
      setState(493);
      match(CppParser::DoubleColon);
      setState(495);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(494);
        nestedNameSpecifierSequence();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(498);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Template) {
        setState(497);
        match(CppParser::Template);
      }
      setState(500);
      simpleTemplateIdentifier();
      setState(501);
      match(CppParser::DoubleColon);
      setState(503);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(502);
        nestedNameSpecifierSequence();
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


antlrcpp::Any CppParser::LambdaExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitLambdaExpression(this);
  else
    return visitor->visitChildren(this);
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
    setState(507);
    lambdaIntroducer();
    setState(509);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::OpenParenthesis) {
      setState(508);
      lambdaDeclarator();
    }
    setState(511);
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

tree::TerminalNode* CppParser::LambdaIntroducerContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
}

tree::TerminalNode* CppParser::LambdaIntroducerContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
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


antlrcpp::Any CppParser::LambdaIntroducerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitLambdaIntroducer(this);
  else
    return visitor->visitChildren(this);
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
    setState(513);
    match(CppParser::OpenBracket);
    setState(515);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
      | (1ULL << (CppParser::Asterisk - 64))
      | (1ULL << (CppParser::Ampersand - 64))
      | (1ULL << (CppParser::Equal - 64)))) != 0) || _la == CppParser::Identifier) {
      setState(514);
      lambdaCapture();
    }
    setState(517);
    match(CppParser::CloseBracket);
   
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

tree::TerminalNode* CppParser::LambdaDeclaratorContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ParameterDeclarationClauseContext* CppParser::LambdaDeclaratorContext::parameterDeclarationClause() {
  return getRuleContext<CppParser::ParameterDeclarationClauseContext>(0);
}

tree::TerminalNode* CppParser::LambdaDeclaratorContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::LambdaDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitLambdaDeclarator(this);
  else
    return visitor->visitChildren(this);
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
    setState(519);
    match(CppParser::OpenParenthesis);
    setState(520);
    parameterDeclarationClause();
    setState(521);
    match(CppParser::CloseParenthesis);
    setState(523);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char8)
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
      | (1ULL << CppParser::Struct))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CppParser::ThreadLocal - 65))
      | (1ULL << (CppParser::TypeDef - 65))
      | (1ULL << (CppParser::TypeName - 65))
      | (1ULL << (CppParser::Union - 65))
      | (1ULL << (CppParser::Unsigned - 65))
      | (1ULL << (CppParser::Virtual - 65))
      | (1ULL << (CppParser::Void - 65))
      | (1ULL << (CppParser::Volatile - 65))
      | (1ULL << (CppParser::WChar - 65))
      | (1ULL << (CppParser::DoubleColon - 65)))) != 0) || _la == CppParser::Identifier) {
      setState(522);
      declarationSpecifierSequence();
    }
    setState(526);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::NoExcept

    || _la == CppParser::Throw) {
      setState(525);
      noExceptionSpecifier();
    }
    setState(529);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
      setState(528);
      attributeSpecifierSequence(0);
    }
    setState(532);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Arrow) {
      setState(531);
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


antlrcpp::Any CppParser::LambdaCaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitLambdaCapture(this);
  else
    return visitor->visitChildren(this);
}

CppParser::LambdaCaptureContext* CppParser::lambdaCapture() {
  LambdaCaptureContext *_localctx = _tracker.createInstance<LambdaCaptureContext>(_ctx, getState());
  enterRule(_localctx, 30, CppParser::RuleLambdaCapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(540);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(534);
      captureDefault();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(535);
      captureList(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(536);
      captureDefault();
      setState(537);
      match(CppParser::Comma);
      setState(538);
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


antlrcpp::Any CppParser::CaptureDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitCaptureDefault(this);
  else
    return visitor->visitChildren(this);
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
    setState(542);
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


antlrcpp::Any CppParser::CaptureListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitCaptureList(this);
  else
    return visitor->visitChildren(this);
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
    setState(545);
    capture();
    setState(547);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(546);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(557);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<CaptureListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleCaptureList);
        setState(549);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(550);
        match(CppParser::Comma);
        setState(551);
        capture();
        setState(553);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          setState(552);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(559);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
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


antlrcpp::Any CppParser::CaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitCapture(this);
  else
    return visitor->visitChildren(this);
}

CppParser::CaptureContext* CppParser::capture() {
  CaptureContext *_localctx = _tracker.createInstance<CaptureContext>(_ctx, getState());
  enterRule(_localctx, 36, CppParser::RuleCapture);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(560);
    simpleCapture();
    setState(561);
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


antlrcpp::Any CppParser::SimpleCaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitSimpleCapture(this);
  else
    return visitor->visitChildren(this);
}

CppParser::SimpleCaptureContext* CppParser::simpleCapture() {
  SimpleCaptureContext *_localctx = _tracker.createInstance<SimpleCaptureContext>(_ctx, getState());
  enterRule(_localctx, 38, CppParser::RuleSimpleCapture);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(570);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Ampersand:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(564);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CppParser::Ampersand) {
          setState(563);
          match(CppParser::Ampersand);
        }
        setState(566);
        match(CppParser::Identifier);
        break;
      }

      case CppParser::This: {
        enterOuterAlt(_localctx, 2);
        setState(567);
        match(CppParser::This);
        break;
      }

      case CppParser::Asterisk: {
        enterOuterAlt(_localctx, 3);
        setState(568);
        match(CppParser::Asterisk);
        setState(569);
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


antlrcpp::Any CppParser::InitializerCaptureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitInitializerCapture(this);
  else
    return visitor->visitChildren(this);
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
    setState(573);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Ampersand) {
      setState(572);
      match(CppParser::Ampersand);
    }
    setState(575);
    match(CppParser::Identifier);
    setState(576);
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

tree::TerminalNode* CppParser::FoldExpressionContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
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

tree::TerminalNode* CppParser::FoldExpressionContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::FoldExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitFoldExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::FoldExpressionContext* CppParser::foldExpression() {
  FoldExpressionContext *_localctx = _tracker.createInstance<FoldExpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, CppParser::RuleFoldExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(598);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(578);
      match(CppParser::OpenParenthesis);
      setState(579);
      castExpression();
      setState(580);
      foldOperator();
      setState(581);
      match(CppParser::Ellipsis);
      setState(582);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(584);
      match(CppParser::OpenParenthesis);
      setState(585);
      match(CppParser::Ellipsis);
      setState(586);
      foldOperator();
      setState(587);
      castExpression();
      setState(588);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(590);
      match(CppParser::OpenParenthesis);
      setState(591);
      castExpression();
      setState(592);
      foldOperator();
      setState(593);
      match(CppParser::Ellipsis);
      setState(594);
      foldOperator();
      setState(595);
      castExpression();
      setState(596);
      match(CppParser::CloseParenthesis);
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

CppParser::DoubleGreaterThanContext* CppParser::FoldOperatorContext::doubleGreaterThan() {
  return getRuleContext<CppParser::DoubleGreaterThanContext>(0);
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


antlrcpp::Any CppParser::FoldOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitFoldOperator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::FoldOperatorContext* CppParser::foldOperator() {
  FoldOperatorContext *_localctx = _tracker.createInstance<FoldOperatorContext>(_ctx, getState());
  enterRule(_localctx, 44, CppParser::RuleFoldOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(632);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(600);
      match(CppParser::Plus);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(601);
      match(CppParser::Minus);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(602);
      match(CppParser::Asterisk);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(603);
      match(CppParser::ForwardSlash);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(604);
      match(CppParser::Percent);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(605);
      match(CppParser::Caret);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(606);
      match(CppParser::Ampersand);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(607);
      match(CppParser::VerticalBar);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(608);
      match(CppParser::DoubleLessThan);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(609);
      doubleGreaterThan();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(610);
      match(CppParser::PlusEqual);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(611);
      match(CppParser::MinusEqual);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(612);
      match(CppParser::AsteriskEqual);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(613);
      match(CppParser::ForwardSlashEqual);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(614);
      match(CppParser::PercentEqual);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(615);
      match(CppParser::CaretEqual);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(616);
      match(CppParser::AmpersandEqual);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(617);
      match(CppParser::VerticalBarEqual);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(618);
      match(CppParser::DoubleLessThanEqual);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(619);
      match(CppParser::DoubleGreaterThanEqual);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(620);
      match(CppParser::Equal);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(621);
      match(CppParser::DoubleEqual);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(622);
      match(CppParser::ExclamationMarkEqual);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(623);
      match(CppParser::LessThan);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(624);
      match(CppParser::GreaterThan);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(625);
      match(CppParser::LessThanEqual);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(626);
      match(CppParser::GreaterThanEqual);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(627);
      match(CppParser::DoubleAmpersand);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(628);
      match(CppParser::DoubleVerticalBar);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(629);
      match(CppParser::Comma);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(630);
      match(CppParser::PeriodAsterisk);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(631);
      match(CppParser::ArrowAsterisk);
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

//----------------- ExplicitTypeCoversionOperatorExpressionContext ------------------------------------------------------------------

CppParser::ExplicitTypeCoversionOperatorExpressionContext::ExplicitTypeCoversionOperatorExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TypenameSpecifierContext* CppParser::ExplicitTypeCoversionOperatorExpressionContext::typenameSpecifier() {
  return getRuleContext<CppParser::TypenameSpecifierContext>(0);
}

tree::TerminalNode* CppParser::ExplicitTypeCoversionOperatorExpressionContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

tree::TerminalNode* CppParser::ExplicitTypeCoversionOperatorExpressionContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
}

CppParser::ExpressionListContext* CppParser::ExplicitTypeCoversionOperatorExpressionContext::expressionList() {
  return getRuleContext<CppParser::ExpressionListContext>(0);
}


size_t CppParser::ExplicitTypeCoversionOperatorExpressionContext::getRuleIndex() const {
  return CppParser::RuleExplicitTypeCoversionOperatorExpression;
}

void CppParser::ExplicitTypeCoversionOperatorExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitTypeCoversionOperatorExpression(this);
}

void CppParser::ExplicitTypeCoversionOperatorExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitTypeCoversionOperatorExpression(this);
}


antlrcpp::Any CppParser::ExplicitTypeCoversionOperatorExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitExplicitTypeCoversionOperatorExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ExplicitTypeCoversionOperatorExpressionContext* CppParser::explicitTypeCoversionOperatorExpression() {
  ExplicitTypeCoversionOperatorExpressionContext *_localctx = _tracker.createInstance<ExplicitTypeCoversionOperatorExpressionContext>(_ctx, getState());
  enterRule(_localctx, 46, CppParser::RuleExplicitTypeCoversionOperatorExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(634);
    typenameSpecifier();
    setState(635);
    match(CppParser::OpenParenthesis);
    setState(637);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char8)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::ConstCast)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Delete)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::DynamicCast)
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
      | (1ULL << CppParser::StaticCast))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
      | (1ULL << (CppParser::Throw - 64))
      | (1ULL << (CppParser::True - 64))
      | (1ULL << (CppParser::TypeId - 64))
      | (1ULL << (CppParser::TypeName - 64))
      | (1ULL << (CppParser::Unsigned - 64))
      | (1ULL << (CppParser::Void - 64))
      | (1ULL << (CppParser::WChar - 64))
      | (1ULL << (CppParser::OpenBrace - 64))
      | (1ULL << (CppParser::OpenBracket - 64))
      | (1ULL << (CppParser::OpenParenthesis - 64))
      | (1ULL << (CppParser::DoubleColon - 64))
      | (1ULL << (CppParser::Plus - 64))
      | (1ULL << (CppParser::Minus - 64))
      | (1ULL << (CppParser::Asterisk - 64))
      | (1ULL << (CppParser::Ampersand - 64))
      | (1ULL << (CppParser::VerticalBar - 64))
      | (1ULL << (CppParser::Tilde - 64))
      | (1ULL << (CppParser::ExclamationMark - 64))
      | (1ULL << (CppParser::DoublePlus - 64))
      | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
      | (1ULL << (CppParser::IntegerLiteral - 130))
      | (1ULL << (CppParser::FloatingPointLiteral - 130))
      | (1ULL << (CppParser::CharacterLiteral - 130))
      | (1ULL << (CppParser::StringLiteral - 130))
      | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
      | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
      | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
      | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
      | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
      setState(636);
      expressionList();
    }
    setState(639);
    match(CppParser::CloseParenthesis);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixOperatorContext ------------------------------------------------------------------

CppParser::PostfixOperatorContext::PostfixOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::PostfixOperatorContext::DoublePlus() {
  return getToken(CppParser::DoublePlus, 0);
}

tree::TerminalNode* CppParser::PostfixOperatorContext::DoubleMinus() {
  return getToken(CppParser::DoubleMinus, 0);
}


size_t CppParser::PostfixOperatorContext::getRuleIndex() const {
  return CppParser::RulePostfixOperator;
}

void CppParser::PostfixOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixOperator(this);
}

void CppParser::PostfixOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixOperator(this);
}


antlrcpp::Any CppParser::PostfixOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitPostfixOperator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::PostfixOperatorContext* CppParser::postfixOperator() {
  PostfixOperatorContext *_localctx = _tracker.createInstance<PostfixOperatorContext>(_ctx, getState());
  enterRule(_localctx, 48, CppParser::RulePostfixOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(641);
    _la = _input->LA(1);
    if (!(_la == CppParser::DoublePlus

    || _la == CppParser::DoubleMinus)) {
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

//----------------- NamedCastExpressionContext ------------------------------------------------------------------

CppParser::NamedCastExpressionContext::NamedCastExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::NamedCastTypeContext* CppParser::NamedCastExpressionContext::namedCastType() {
  return getRuleContext<CppParser::NamedCastTypeContext>(0);
}

tree::TerminalNode* CppParser::NamedCastExpressionContext::LessThan() {
  return getToken(CppParser::LessThan, 0);
}

CppParser::TypeIdentifierContext* CppParser::NamedCastExpressionContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* CppParser::NamedCastExpressionContext::GreaterThan() {
  return getToken(CppParser::GreaterThan, 0);
}

tree::TerminalNode* CppParser::NamedCastExpressionContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ExpressionContext* CppParser::NamedCastExpressionContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::NamedCastExpressionContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
}


size_t CppParser::NamedCastExpressionContext::getRuleIndex() const {
  return CppParser::RuleNamedCastExpression;
}

void CppParser::NamedCastExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamedCastExpression(this);
}

void CppParser::NamedCastExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamedCastExpression(this);
}


antlrcpp::Any CppParser::NamedCastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNamedCastExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NamedCastExpressionContext* CppParser::namedCastExpression() {
  NamedCastExpressionContext *_localctx = _tracker.createInstance<NamedCastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 50, CppParser::RuleNamedCastExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(643);
    namedCastType();
    setState(644);
    match(CppParser::LessThan);
    setState(645);
    typeIdentifier();
    setState(646);
    match(CppParser::GreaterThan);
    setState(647);
    match(CppParser::OpenParenthesis);
    setState(648);
    expression(0);
    setState(649);
    match(CppParser::CloseParenthesis);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberAccessOperatorContext ------------------------------------------------------------------

CppParser::MemberAccessOperatorContext::MemberAccessOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::MemberAccessOperatorContext::Period() {
  return getToken(CppParser::Period, 0);
}

tree::TerminalNode* CppParser::MemberAccessOperatorContext::Arrow() {
  return getToken(CppParser::Arrow, 0);
}


size_t CppParser::MemberAccessOperatorContext::getRuleIndex() const {
  return CppParser::RuleMemberAccessOperator;
}

void CppParser::MemberAccessOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccessOperator(this);
}

void CppParser::MemberAccessOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccessOperator(this);
}


antlrcpp::Any CppParser::MemberAccessOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitMemberAccessOperator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::MemberAccessOperatorContext* CppParser::memberAccessOperator() {
  MemberAccessOperatorContext *_localctx = _tracker.createInstance<MemberAccessOperatorContext>(_ctx, getState());
  enterRule(_localctx, 52, CppParser::RuleMemberAccessOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(651);
    _la = _input->LA(1);
    if (!(_la == CppParser::Period

    || _la == CppParser::Arrow)) {
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

//----------------- NamedCastTypeContext ------------------------------------------------------------------

CppParser::NamedCastTypeContext::NamedCastTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NamedCastTypeContext::DynamicCast() {
  return getToken(CppParser::DynamicCast, 0);
}

tree::TerminalNode* CppParser::NamedCastTypeContext::StaticCast() {
  return getToken(CppParser::StaticCast, 0);
}

tree::TerminalNode* CppParser::NamedCastTypeContext::ReinterpretCast() {
  return getToken(CppParser::ReinterpretCast, 0);
}

tree::TerminalNode* CppParser::NamedCastTypeContext::ConstCast() {
  return getToken(CppParser::ConstCast, 0);
}


size_t CppParser::NamedCastTypeContext::getRuleIndex() const {
  return CppParser::RuleNamedCastType;
}

void CppParser::NamedCastTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamedCastType(this);
}

void CppParser::NamedCastTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamedCastType(this);
}


antlrcpp::Any CppParser::NamedCastTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNamedCastType(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NamedCastTypeContext* CppParser::namedCastType() {
  NamedCastTypeContext *_localctx = _tracker.createInstance<NamedCastTypeContext>(_ctx, getState());
  enterRule(_localctx, 54, CppParser::RuleNamedCastType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(653);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::ConstCast)
      | (1ULL << CppParser::DynamicCast)
      | (1ULL << CppParser::ReinterpretCast)
      | (1ULL << CppParser::StaticCast))) != 0))) {
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

//----------------- TypeIdentificationExpressionContext ------------------------------------------------------------------

CppParser::TypeIdentificationExpressionContext::TypeIdentificationExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::TypeIdentificationExpressionContext::TypeId() {
  return getToken(CppParser::TypeId, 0);
}

tree::TerminalNode* CppParser::TypeIdentificationExpressionContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ExpressionContext* CppParser::TypeIdentificationExpressionContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::TypeIdentificationExpressionContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
}

CppParser::TypeIdentifierContext* CppParser::TypeIdentificationExpressionContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}


size_t CppParser::TypeIdentificationExpressionContext::getRuleIndex() const {
  return CppParser::RuleTypeIdentificationExpression;
}

void CppParser::TypeIdentificationExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeIdentificationExpression(this);
}

void CppParser::TypeIdentificationExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeIdentificationExpression(this);
}


antlrcpp::Any CppParser::TypeIdentificationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTypeIdentificationExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TypeIdentificationExpressionContext* CppParser::typeIdentificationExpression() {
  TypeIdentificationExpressionContext *_localctx = _tracker.createInstance<TypeIdentificationExpressionContext>(_ctx, getState());
  enterRule(_localctx, 56, CppParser::RuleTypeIdentificationExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(665);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(655);
      match(CppParser::TypeId);
      setState(656);
      match(CppParser::OpenParenthesis);
      setState(657);
      expression(0);
      setState(658);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(660);
      match(CppParser::TypeId);
      setState(661);
      match(CppParser::OpenParenthesis);
      setState(662);
      typeIdentifier();
      setState(663);
      match(CppParser::CloseParenthesis);
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

//----------------- PostfixExpressionContext ------------------------------------------------------------------

CppParser::PostfixExpressionContext::PostfixExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::PrimaryExpressionContext* CppParser::PostfixExpressionContext::primaryExpression() {
  return getRuleContext<CppParser::PrimaryExpressionContext>(0);
}

CppParser::ExplicitTypeCoversionOperatorExpressionContext* CppParser::PostfixExpressionContext::explicitTypeCoversionOperatorExpression() {
  return getRuleContext<CppParser::ExplicitTypeCoversionOperatorExpressionContext>(0);
}

CppParser::SimpleTypeSpecifierContext* CppParser::PostfixExpressionContext::simpleTypeSpecifier() {
  return getRuleContext<CppParser::SimpleTypeSpecifierContext>(0);
}

CppParser::BracedInitializerListContext* CppParser::PostfixExpressionContext::bracedInitializerList() {
  return getRuleContext<CppParser::BracedInitializerListContext>(0);
}

CppParser::TypenameSpecifierContext* CppParser::PostfixExpressionContext::typenameSpecifier() {
  return getRuleContext<CppParser::TypenameSpecifierContext>(0);
}

CppParser::NamedCastExpressionContext* CppParser::PostfixExpressionContext::namedCastExpression() {
  return getRuleContext<CppParser::NamedCastExpressionContext>(0);
}

CppParser::TypeIdentificationExpressionContext* CppParser::PostfixExpressionContext::typeIdentificationExpression() {
  return getRuleContext<CppParser::TypeIdentificationExpressionContext>(0);
}

CppParser::PostfixExpressionContext* CppParser::PostfixExpressionContext::postfixExpression() {
  return getRuleContext<CppParser::PostfixExpressionContext>(0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
}

CppParser::ExpressionOrBracedInitializerListContext* CppParser::PostfixExpressionContext::expressionOrBracedInitializerList() {
  return getRuleContext<CppParser::ExpressionOrBracedInitializerListContext>(0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
}

CppParser::ExpressionListContext* CppParser::PostfixExpressionContext::expressionList() {
  return getRuleContext<CppParser::ExpressionListContext>(0);
}

CppParser::MemberAccessOperatorContext* CppParser::PostfixExpressionContext::memberAccessOperator() {
  return getRuleContext<CppParser::MemberAccessOperatorContext>(0);
}

CppParser::IdentifierExpressionContext* CppParser::PostfixExpressionContext::identifierExpression() {
  return getRuleContext<CppParser::IdentifierExpressionContext>(0);
}

tree::TerminalNode* CppParser::PostfixExpressionContext::Template() {
  return getToken(CppParser::Template, 0);
}

CppParser::PseudoDestructorNameContext* CppParser::PostfixExpressionContext::pseudoDestructorName() {
  return getRuleContext<CppParser::PseudoDestructorNameContext>(0);
}

CppParser::PostfixOperatorContext* CppParser::PostfixExpressionContext::postfixOperator() {
  return getRuleContext<CppParser::PostfixOperatorContext>(0);
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


antlrcpp::Any CppParser::PostfixExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitPostfixExpression(this);
  else
    return visitor->visitChildren(this);
}


CppParser::PostfixExpressionContext* CppParser::postfixExpression() {
   return postfixExpression(0);
}

CppParser::PostfixExpressionContext* CppParser::postfixExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::PostfixExpressionContext *_localctx = _tracker.createInstance<PostfixExpressionContext>(_ctx, parentState);
  CppParser::PostfixExpressionContext *previousContext = _localctx;
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, CppParser::RulePostfixExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(678);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(668);
      primaryExpression();
      break;
    }

    case 2: {
      setState(669);
      explicitTypeCoversionOperatorExpression();
      break;
    }

    case 3: {
      setState(670);
      simpleTypeSpecifier();
      setState(671);
      bracedInitializerList();
      break;
    }

    case 4: {
      setState(673);
      typenameSpecifier();
      setState(674);
      bracedInitializerList();
      break;
    }

    case 5: {
      setState(676);
      namedCastExpression();
      break;
    }

    case 6: {
      setState(677);
      typeIdentificationExpression();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(706);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(704);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(680);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(681);
          match(CppParser::OpenBracket);
          setState(682);
          expressionOrBracedInitializerList();
          setState(683);
          match(CppParser::CloseBracket);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(685);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(686);
          match(CppParser::OpenParenthesis);
          setState(688);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
            | (1ULL << CppParser::Auto)
            | (1ULL << CppParser::Bool)
            | (1ULL << CppParser::Char)
            | (1ULL << CppParser::Char8)
            | (1ULL << CppParser::Char16)
            | (1ULL << CppParser::Char32)
            | (1ULL << CppParser::ConstCast)
            | (1ULL << CppParser::DeclType)
            | (1ULL << CppParser::Delete)
            | (1ULL << CppParser::Double)
            | (1ULL << CppParser::DynamicCast)
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
            | (1ULL << CppParser::StaticCast))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
            | (1ULL << (CppParser::Throw - 64))
            | (1ULL << (CppParser::True - 64))
            | (1ULL << (CppParser::TypeId - 64))
            | (1ULL << (CppParser::TypeName - 64))
            | (1ULL << (CppParser::Unsigned - 64))
            | (1ULL << (CppParser::Void - 64))
            | (1ULL << (CppParser::WChar - 64))
            | (1ULL << (CppParser::OpenBrace - 64))
            | (1ULL << (CppParser::OpenBracket - 64))
            | (1ULL << (CppParser::OpenParenthesis - 64))
            | (1ULL << (CppParser::DoubleColon - 64))
            | (1ULL << (CppParser::Plus - 64))
            | (1ULL << (CppParser::Minus - 64))
            | (1ULL << (CppParser::Asterisk - 64))
            | (1ULL << (CppParser::Ampersand - 64))
            | (1ULL << (CppParser::VerticalBar - 64))
            | (1ULL << (CppParser::Tilde - 64))
            | (1ULL << (CppParser::ExclamationMark - 64))
            | (1ULL << (CppParser::DoublePlus - 64))
            | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
            | (1ULL << (CppParser::IntegerLiteral - 130))
            | (1ULL << (CppParser::FloatingPointLiteral - 130))
            | (1ULL << (CppParser::CharacterLiteral - 130))
            | (1ULL << (CppParser::StringLiteral - 130))
            | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
            | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
            | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
            | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
            | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
            setState(687);
            expressionList();
          }
          setState(690);
          match(CppParser::CloseParenthesis);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(691);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(692);
          memberAccessOperator();
          setState(694);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CppParser::Template) {
            setState(693);
            match(CppParser::Template);
          }
          setState(696);
          identifierExpression();
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(698);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(699);
          memberAccessOperator();
          setState(700);
          pseudoDestructorName();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PostfixExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfixExpression);
          setState(702);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(703);
          postfixOperator();
          break;
        }

        } 
      }
      setState(708);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
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


antlrcpp::Any CppParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ExpressionListContext* CppParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 60, CppParser::RuleExpressionList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(709);
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


antlrcpp::Any CppParser::PseudoDestructorNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitPseudoDestructorName(this);
  else
    return visitor->visitChildren(this);
}

CppParser::PseudoDestructorNameContext* CppParser::pseudoDestructorName() {
  PseudoDestructorNameContext *_localctx = _tracker.createInstance<PseudoDestructorNameContext>(_ctx, getState());
  enterRule(_localctx, 62, CppParser::RulePseudoDestructorName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(730);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(712);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(711);
        nestedNameSpecifier();
        break;
      }

      }
      setState(714);
      typeName();
      setState(715);
      match(CppParser::DoubleColon);
      setState(716);
      match(CppParser::Tilde);
      setState(717);
      typeName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(719);
      nestedNameSpecifier();
      setState(720);
      match(CppParser::Template);
      setState(721);
      simpleTemplateIdentifier();
      setState(722);
      match(CppParser::DoubleColon);
      setState(723);
      match(CppParser::Tilde);
      setState(724);
      typeName();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(726);
      match(CppParser::Tilde);
      setState(727);
      typeName();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(728);
      match(CppParser::Tilde);
      setState(729);
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

tree::TerminalNode* CppParser::UnaryExpressionContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::TypeIdentifierContext* CppParser::UnaryExpressionContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* CppParser::UnaryExpressionContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::UnaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitUnaryExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::UnaryExpressionContext* CppParser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 64, CppParser::RuleUnaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(760);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(732);
      postfixExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(733);
      match(CppParser::DoublePlus);
      setState(734);
      castExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(735);
      match(CppParser::DoubleMinus);
      setState(736);
      castExpression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(737);
      unaryOperator();
      setState(738);
      castExpression();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(740);
      match(CppParser::SizeOf);
      setState(741);
      unaryExpression();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(742);
      match(CppParser::SizeOf);
      setState(743);
      match(CppParser::OpenParenthesis);
      setState(744);
      typeIdentifier();
      setState(745);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(747);
      match(CppParser::SizeOf);
      setState(748);
      match(CppParser::Ellipsis);
      setState(749);
      match(CppParser::OpenParenthesis);
      setState(750);
      match(CppParser::Identifier);
      setState(751);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(752);
      match(CppParser::AlignOf);
      setState(753);
      match(CppParser::OpenParenthesis);
      setState(754);
      typeIdentifier();
      setState(755);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(757);
      noExceptionExpression();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(758);
      newExpression();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(759);
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


antlrcpp::Any CppParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::UnaryOperatorContext* CppParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 66, CppParser::RuleUnaryOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(762);
    _la = _input->LA(1);
    if (!(((((_la - 95) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 95)) & ((1ULL << (CppParser::Plus - 95))
      | (1ULL << (CppParser::Minus - 95))
      | (1ULL << (CppParser::Asterisk - 95))
      | (1ULL << (CppParser::Ampersand - 95))
      | (1ULL << (CppParser::VerticalBar - 95))
      | (1ULL << (CppParser::Tilde - 95))
      | (1ULL << (CppParser::ExclamationMark - 95)))) != 0))) {
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

tree::TerminalNode* CppParser::NewExpressionContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::TypeIdentifierContext* CppParser::NewExpressionContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* CppParser::NewExpressionContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::NewExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNewExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NewExpressionContext* CppParser::newExpression() {
  NewExpressionContext *_localctx = _tracker.createInstance<NewExpressionContext>(_ctx, getState());
  enterRule(_localctx, 68, CppParser::RuleNewExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(788);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
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

      _la = _input->LA(1);
      if (_la == CppParser::OpenParenthesis) {
        setState(768);
        newPlacement();
      }
      setState(771);
      newTypeIdentifier();
      setState(773);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
      case 1: {
        setState(772);
        newInitializer();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(776);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DoubleColon) {
        setState(775);
        match(CppParser::DoubleColon);
      }
      setState(778);
      match(CppParser::New);
      setState(780);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
      case 1: {
        setState(779);
        newPlacement();
        break;
      }

      }
      setState(782);
      match(CppParser::OpenParenthesis);
      setState(783);
      typeIdentifier();
      setState(784);
      match(CppParser::CloseParenthesis);
      setState(786);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
      case 1: {
        setState(785);
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

tree::TerminalNode* CppParser::NewPlacementContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ExpressionListContext* CppParser::NewPlacementContext::expressionList() {
  return getRuleContext<CppParser::ExpressionListContext>(0);
}

tree::TerminalNode* CppParser::NewPlacementContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::NewPlacementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNewPlacement(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NewPlacementContext* CppParser::newPlacement() {
  NewPlacementContext *_localctx = _tracker.createInstance<NewPlacementContext>(_ctx, getState());
  enterRule(_localctx, 70, CppParser::RuleNewPlacement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(790);
    match(CppParser::OpenParenthesis);
    setState(791);
    expressionList();
    setState(792);
    match(CppParser::CloseParenthesis);
   
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


antlrcpp::Any CppParser::NewTypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNewTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NewTypeIdentifierContext* CppParser::newTypeIdentifier() {
  NewTypeIdentifierContext *_localctx = _tracker.createInstance<NewTypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 72, CppParser::RuleNewTypeIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(794);
    typeSpecifierSequence();
    setState(796);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(795);
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


antlrcpp::Any CppParser::NewDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNewDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NewDeclaratorContext* CppParser::newDeclarator() {
  NewDeclaratorContext *_localctx = _tracker.createInstance<NewDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 74, CppParser::RuleNewDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(798);
    pointerOperator();
    setState(800);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::DeclType || ((((_la - 92) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 92)) & ((1ULL << (CppParser::DoubleColon - 92))
      | (1ULL << (CppParser::Asterisk - 92))
      | (1ULL << (CppParser::Ampersand - 92))
      | (1ULL << (CppParser::DoubleAmpersand - 92))
      | (1ULL << (CppParser::Identifier - 92)))) != 0)) {
      setState(799);
      newDeclarator();
    }
    setState(802);
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

tree::TerminalNode* CppParser::NoPointerNewDeclaratorContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
}

CppParser::ExpressionContext* CppParser::NoPointerNewDeclaratorContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::NoPointerNewDeclaratorContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
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


antlrcpp::Any CppParser::NoPointerNewDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNoPointerNewDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CppParser::NoPointerNewDeclaratorContext* CppParser::noPointerNewDeclarator() {
   return noPointerNewDeclarator(0);
}

CppParser::NoPointerNewDeclaratorContext* CppParser::noPointerNewDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::NoPointerNewDeclaratorContext *_localctx = _tracker.createInstance<NoPointerNewDeclaratorContext>(_ctx, parentState);
  CppParser::NoPointerNewDeclaratorContext *previousContext = _localctx;
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, CppParser::RuleNoPointerNewDeclarator, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(805);
    match(CppParser::OpenBracket);
    setState(806);
    expression(0);
    setState(807);
    match(CppParser::CloseBracket);
    setState(809);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      setState(808);
      attributeSpecifierSequence(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(820);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<NoPointerNewDeclaratorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleNoPointerNewDeclarator);
        setState(811);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(812);
        match(CppParser::OpenBracket);
        setState(813);
        constantExpression();
        setState(814);
        match(CppParser::CloseBracket);
        setState(816);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
        case 1: {
          setState(815);
          attributeSpecifierSequence(0);
          break;
        }

        } 
      }
      setState(822);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
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

tree::TerminalNode* CppParser::NewInitializerContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

tree::TerminalNode* CppParser::NewInitializerContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::NewInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNewInitializer(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NewInitializerContext* CppParser::newInitializer() {
  NewInitializerContext *_localctx = _tracker.createInstance<NewInitializerContext>(_ctx, getState());
  enterRule(_localctx, 78, CppParser::RuleNewInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(829);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::OpenParenthesis: {
        enterOuterAlt(_localctx, 1);
        setState(823);
        match(CppParser::OpenParenthesis);
        setState(825);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
          | (1ULL << CppParser::Auto)
          | (1ULL << CppParser::Bool)
          | (1ULL << CppParser::Char)
          | (1ULL << CppParser::Char8)
          | (1ULL << CppParser::Char16)
          | (1ULL << CppParser::Char32)
          | (1ULL << CppParser::ConstCast)
          | (1ULL << CppParser::DeclType)
          | (1ULL << CppParser::Delete)
          | (1ULL << CppParser::Double)
          | (1ULL << CppParser::DynamicCast)
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
          | (1ULL << CppParser::StaticCast))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
          | (1ULL << (CppParser::Throw - 64))
          | (1ULL << (CppParser::True - 64))
          | (1ULL << (CppParser::TypeId - 64))
          | (1ULL << (CppParser::TypeName - 64))
          | (1ULL << (CppParser::Unsigned - 64))
          | (1ULL << (CppParser::Void - 64))
          | (1ULL << (CppParser::WChar - 64))
          | (1ULL << (CppParser::OpenBrace - 64))
          | (1ULL << (CppParser::OpenBracket - 64))
          | (1ULL << (CppParser::OpenParenthesis - 64))
          | (1ULL << (CppParser::DoubleColon - 64))
          | (1ULL << (CppParser::Plus - 64))
          | (1ULL << (CppParser::Minus - 64))
          | (1ULL << (CppParser::Asterisk - 64))
          | (1ULL << (CppParser::Ampersand - 64))
          | (1ULL << (CppParser::VerticalBar - 64))
          | (1ULL << (CppParser::Tilde - 64))
          | (1ULL << (CppParser::ExclamationMark - 64))
          | (1ULL << (CppParser::DoublePlus - 64))
          | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
          | (1ULL << (CppParser::IntegerLiteral - 130))
          | (1ULL << (CppParser::FloatingPointLiteral - 130))
          | (1ULL << (CppParser::CharacterLiteral - 130))
          | (1ULL << (CppParser::StringLiteral - 130))
          | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
          | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
          | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
          | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
          | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
          setState(824);
          expressionList();
        }
        setState(827);
        match(CppParser::CloseParenthesis);
        break;
      }

      case CppParser::OpenBrace: {
        enterOuterAlt(_localctx, 2);
        setState(828);
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

tree::TerminalNode* CppParser::DeleteExpressionContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
}

tree::TerminalNode* CppParser::DeleteExpressionContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
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


antlrcpp::Any CppParser::DeleteExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDeleteExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DeleteExpressionContext* CppParser::deleteExpression() {
  DeleteExpressionContext *_localctx = _tracker.createInstance<DeleteExpressionContext>(_ctx, getState());
  enterRule(_localctx, 80, CppParser::RuleDeleteExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(843);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(832);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DoubleColon) {
        setState(831);
        match(CppParser::DoubleColon);
      }
      setState(834);
      match(CppParser::Delete);
      setState(835);
      castExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(837);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DoubleColon) {
        setState(836);
        match(CppParser::DoubleColon);
      }
      setState(839);
      match(CppParser::Delete);
      setState(840);
      match(CppParser::OpenBracket);
      setState(841);
      match(CppParser::CloseBracket);
      setState(842);
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

tree::TerminalNode* CppParser::NoExceptionExpressionContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ExpressionContext* CppParser::NoExceptionExpressionContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::NoExceptionExpressionContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::NoExceptionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNoExceptionExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NoExceptionExpressionContext* CppParser::noExceptionExpression() {
  NoExceptionExpressionContext *_localctx = _tracker.createInstance<NoExceptionExpressionContext>(_ctx, getState());
  enterRule(_localctx, 82, CppParser::RuleNoExceptionExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(845);
    match(CppParser::NoExcept);
    setState(846);
    match(CppParser::OpenParenthesis);
    setState(847);
    expression(0);
    setState(848);
    match(CppParser::CloseParenthesis);
   
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

tree::TerminalNode* CppParser::CastExpressionContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::TypeIdentifierContext* CppParser::CastExpressionContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* CppParser::CastExpressionContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::CastExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitCastExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::CastExpressionContext* CppParser::castExpression() {
  CastExpressionContext *_localctx = _tracker.createInstance<CastExpressionContext>(_ctx, getState());
  enterRule(_localctx, 84, CppParser::RuleCastExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(856);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(850);
      unaryExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(851);
      match(CppParser::OpenParenthesis);
      setState(852);
      typeIdentifier();
      setState(853);
      match(CppParser::CloseParenthesis);
      setState(854);
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

//----------------- BinaryExpressionContext ------------------------------------------------------------------

CppParser::BinaryExpressionContext::BinaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::CastExpressionContext* CppParser::BinaryExpressionContext::castExpression() {
  return getRuleContext<CppParser::CastExpressionContext>(0);
}

CppParser::BinaryExpressionContext* CppParser::BinaryExpressionContext::binaryExpression() {
  return getRuleContext<CppParser::BinaryExpressionContext>(0);
}

CppParser::BinaryOperatorContext* CppParser::BinaryExpressionContext::binaryOperator() {
  return getRuleContext<CppParser::BinaryOperatorContext>(0);
}


size_t CppParser::BinaryExpressionContext::getRuleIndex() const {
  return CppParser::RuleBinaryExpression;
}

void CppParser::BinaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryExpression(this);
}

void CppParser::BinaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryExpression(this);
}


antlrcpp::Any CppParser::BinaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitBinaryExpression(this);
  else
    return visitor->visitChildren(this);
}


CppParser::BinaryExpressionContext* CppParser::binaryExpression() {
   return binaryExpression(0);
}

CppParser::BinaryExpressionContext* CppParser::binaryExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::BinaryExpressionContext *_localctx = _tracker.createInstance<BinaryExpressionContext>(_ctx, parentState);
  CppParser::BinaryExpressionContext *previousContext = _localctx;
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, CppParser::RuleBinaryExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(859);
    castExpression();
    _ctx->stop = _input->LT(-1);
    setState(867);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BinaryExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBinaryExpression);
        setState(861);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(862);
        binaryOperator();
        setState(863);
        castExpression(); 
      }
      setState(869);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BinaryOperatorContext ------------------------------------------------------------------

CppParser::BinaryOperatorContext::BinaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::BinaryOperatorContext::PeriodAsterisk() {
  return getToken(CppParser::PeriodAsterisk, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::ArrowAsterisk() {
  return getToken(CppParser::ArrowAsterisk, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::Asterisk() {
  return getToken(CppParser::Asterisk, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::ForwardSlash() {
  return getToken(CppParser::ForwardSlash, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::Percent() {
  return getToken(CppParser::Percent, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::Plus() {
  return getToken(CppParser::Plus, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::Minus() {
  return getToken(CppParser::Minus, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::DoubleLessThan() {
  return getToken(CppParser::DoubleLessThan, 0);
}

CppParser::DoubleGreaterThanContext* CppParser::BinaryOperatorContext::doubleGreaterThan() {
  return getRuleContext<CppParser::DoubleGreaterThanContext>(0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::LessThan() {
  return getToken(CppParser::LessThan, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::GreaterThan() {
  return getToken(CppParser::GreaterThan, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::LessThanEqual() {
  return getToken(CppParser::LessThanEqual, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::GreaterThanEqual() {
  return getToken(CppParser::GreaterThanEqual, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::DoubleEqual() {
  return getToken(CppParser::DoubleEqual, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::ExclamationMarkEqual() {
  return getToken(CppParser::ExclamationMarkEqual, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::Ampersand() {
  return getToken(CppParser::Ampersand, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::Caret() {
  return getToken(CppParser::Caret, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::VerticalBar() {
  return getToken(CppParser::VerticalBar, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::DoubleAmpersand() {
  return getToken(CppParser::DoubleAmpersand, 0);
}

tree::TerminalNode* CppParser::BinaryOperatorContext::DoubleVerticalBar() {
  return getToken(CppParser::DoubleVerticalBar, 0);
}


size_t CppParser::BinaryOperatorContext::getRuleIndex() const {
  return CppParser::RuleBinaryOperator;
}

void CppParser::BinaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOperator(this);
}

void CppParser::BinaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOperator(this);
}


antlrcpp::Any CppParser::BinaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitBinaryOperator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::BinaryOperatorContext* CppParser::binaryOperator() {
  BinaryOperatorContext *_localctx = _tracker.createInstance<BinaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 88, CppParser::RuleBinaryOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(890);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(870);
      match(CppParser::PeriodAsterisk);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(871);
      match(CppParser::ArrowAsterisk);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(872);
      match(CppParser::Asterisk);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(873);
      match(CppParser::ForwardSlash);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(874);
      match(CppParser::Percent);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(875);
      match(CppParser::Plus);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(876);
      match(CppParser::Minus);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(877);
      match(CppParser::DoubleLessThan);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(878);
      doubleGreaterThan();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(879);
      match(CppParser::LessThan);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(880);
      match(CppParser::GreaterThan);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(881);
      match(CppParser::LessThanEqual);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(882);
      match(CppParser::GreaterThanEqual);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(883);
      match(CppParser::DoubleEqual);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(884);
      match(CppParser::ExclamationMarkEqual);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(885);
      match(CppParser::Ampersand);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(886);
      match(CppParser::Caret);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(887);
      match(CppParser::VerticalBar);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(888);
      match(CppParser::DoubleAmpersand);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(889);
      match(CppParser::DoubleVerticalBar);
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

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

CppParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::BinaryExpressionContext* CppParser::ConditionalExpressionContext::binaryExpression() {
  return getRuleContext<CppParser::BinaryExpressionContext>(0);
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


antlrcpp::Any CppParser::ConditionalExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitConditionalExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ConditionalExpressionContext* CppParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 90, CppParser::RuleConditionalExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(899);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(892);
      binaryExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(893);
      binaryExpression(0);
      setState(894);
      match(CppParser::QuestionMark);
      setState(895);
      expression(0);
      setState(896);
      match(CppParser::Colon);
      setState(897);
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


antlrcpp::Any CppParser::ThrowExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitThrowExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ThrowExpressionContext* CppParser::throwExpression() {
  ThrowExpressionContext *_localctx = _tracker.createInstance<ThrowExpressionContext>(_ctx, getState());
  enterRule(_localctx, 92, CppParser::RuleThrowExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(901);
    match(CppParser::Throw);
    setState(903);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      setState(902);
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

CppParser::BinaryExpressionContext* CppParser::AssignmentExpressionContext::binaryExpression() {
  return getRuleContext<CppParser::BinaryExpressionContext>(0);
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


antlrcpp::Any CppParser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AssignmentExpressionContext* CppParser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 94, CppParser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(911);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(905);
      conditionalExpression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(906);
      binaryExpression(0);
      setState(907);
      assignmentOperator();
      setState(908);
      initializerClause();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(910);
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


antlrcpp::Any CppParser::AssignmentOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAssignmentOperator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AssignmentOperatorContext* CppParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 96, CppParser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(913);
    _la = _input->LA(1);
    if (!(((((_la - 105) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 105)) & ((1ULL << (CppParser::Equal - 105))
      | (1ULL << (CppParser::PlusEqual - 105))
      | (1ULL << (CppParser::MinusEqual - 105))
      | (1ULL << (CppParser::AsteriskEqual - 105))
      | (1ULL << (CppParser::ForwardSlashEqual - 105))
      | (1ULL << (CppParser::PercentEqual - 105))
      | (1ULL << (CppParser::CaretEqual - 105))
      | (1ULL << (CppParser::AmpersandEqual - 105))
      | (1ULL << (CppParser::VerticalBarEqual - 105))
      | (1ULL << (CppParser::DoubleLessThanEqual - 105))
      | (1ULL << (CppParser::DoubleGreaterThanEqual - 105)))) != 0))) {
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


antlrcpp::Any CppParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


CppParser::ExpressionContext* CppParser::expression() {
   return expression(0);
}

CppParser::ExpressionContext* CppParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  CppParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 98;
  enterRecursionRule(_localctx, 98, CppParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(916);
    assignmentExpression();
    _ctx->stop = _input->LT(-1);
    setState(923);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(918);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(919);
        match(CppParser::Comma);
        setState(920);
        assignmentExpression(); 
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


antlrcpp::Any CppParser::ConstantExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitConstantExpression(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ConstantExpressionContext* CppParser::constantExpression() {
  ConstantExpressionContext *_localctx = _tracker.createInstance<ConstantExpressionContext>(_ctx, getState());
  enterRule(_localctx, 100, CppParser::RuleConstantExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(926);
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


antlrcpp::Any CppParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CppParser::StatementContext* CppParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 102, CppParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(954);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(928);
      labeledStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(930);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
      case 1: {
        setState(929);
        attributeSpecifierSequence(0);
        break;
      }

      }
      setState(932);
      expressionStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(934);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(933);
        attributeSpecifierSequence(0);
      }
      setState(936);
      compoundStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(938);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(937);
        attributeSpecifierSequence(0);
      }
      setState(940);
      selectionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(942);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(941);
        attributeSpecifierSequence(0);
      }
      setState(944);
      iterationStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(946);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(945);
        attributeSpecifierSequence(0);
      }
      setState(948);
      jumpStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(949);
      declarationStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(951);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(950);
        attributeSpecifierSequence(0);
      }
      setState(953);
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


antlrcpp::Any CppParser::InitializerStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitInitializerStatement(this);
  else
    return visitor->visitChildren(this);
}

CppParser::InitializerStatementContext* CppParser::initializerStatement() {
  InitializerStatementContext *_localctx = _tracker.createInstance<InitializerStatementContext>(_ctx, getState());
  enterRule(_localctx, 104, CppParser::RuleInitializerStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(958);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(956);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(957);
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


antlrcpp::Any CppParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ConditionContext* CppParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 106, CppParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(968);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(960);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(962);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(961);
        attributeSpecifierSequence(0);
      }
      setState(964);
      declarationSpecifierSequence();
      setState(965);
      declarator();
      setState(966);
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


antlrcpp::Any CppParser::LabeledStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitLabeledStatement(this);
  else
    return visitor->visitChildren(this);
}

CppParser::LabeledStatementContext* CppParser::labeledStatement() {
  LabeledStatementContext *_localctx = _tracker.createInstance<LabeledStatementContext>(_ctx, getState());
  enterRule(_localctx, 108, CppParser::RuleLabeledStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(990);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(971);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(970);
        attributeSpecifierSequence(0);
      }
      setState(973);
      match(CppParser::Identifier);
      setState(974);
      match(CppParser::Colon);
      setState(975);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(977);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(976);
        attributeSpecifierSequence(0);
      }
      setState(979);
      match(CppParser::Case);
      setState(980);
      constantExpression();
      setState(981);
      match(CppParser::Colon);
      setState(982);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(985);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(984);
        attributeSpecifierSequence(0);
      }
      setState(987);
      match(CppParser::Default);
      setState(988);
      match(CppParser::Colon);
      setState(989);
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


antlrcpp::Any CppParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ExpressionStatementContext* CppParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 110, CppParser::RuleExpressionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(993);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char8)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::ConstCast)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Delete)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::DynamicCast)
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
      | (1ULL << CppParser::StaticCast))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
      | (1ULL << (CppParser::Throw - 64))
      | (1ULL << (CppParser::True - 64))
      | (1ULL << (CppParser::TypeId - 64))
      | (1ULL << (CppParser::TypeName - 64))
      | (1ULL << (CppParser::Unsigned - 64))
      | (1ULL << (CppParser::Void - 64))
      | (1ULL << (CppParser::WChar - 64))
      | (1ULL << (CppParser::OpenBracket - 64))
      | (1ULL << (CppParser::OpenParenthesis - 64))
      | (1ULL << (CppParser::DoubleColon - 64))
      | (1ULL << (CppParser::Plus - 64))
      | (1ULL << (CppParser::Minus - 64))
      | (1ULL << (CppParser::Asterisk - 64))
      | (1ULL << (CppParser::Ampersand - 64))
      | (1ULL << (CppParser::VerticalBar - 64))
      | (1ULL << (CppParser::Tilde - 64))
      | (1ULL << (CppParser::ExclamationMark - 64))
      | (1ULL << (CppParser::DoublePlus - 64))
      | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
      | (1ULL << (CppParser::IntegerLiteral - 130))
      | (1ULL << (CppParser::FloatingPointLiteral - 130))
      | (1ULL << (CppParser::CharacterLiteral - 130))
      | (1ULL << (CppParser::StringLiteral - 130))
      | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
      | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
      | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
      | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
      | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
      setState(992);
      expression(0);
    }
    setState(995);
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

tree::TerminalNode* CppParser::CompoundStatementContext::OpenBrace() {
  return getToken(CppParser::OpenBrace, 0);
}

tree::TerminalNode* CppParser::CompoundStatementContext::CloseBrace() {
  return getToken(CppParser::CloseBrace, 0);
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


antlrcpp::Any CppParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

CppParser::CompoundStatementContext* CppParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 112, CppParser::RuleCompoundStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(997);
    match(CppParser::OpenBrace);
    setState(999);
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
      | (1ULL << CppParser::Char8)
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
      | (1ULL << CppParser::Switch))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
      | (1ULL << (CppParser::ThreadLocal - 64))
      | (1ULL << (CppParser::Throw - 64))
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
      | (1ULL << (CppParser::OpenBrace - 64))
      | (1ULL << (CppParser::OpenBracket - 64))
      | (1ULL << (CppParser::OpenParenthesis - 64))
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
      | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
      | (1ULL << (CppParser::IntegerLiteral - 130))
      | (1ULL << (CppParser::FloatingPointLiteral - 130))
      | (1ULL << (CppParser::CharacterLiteral - 130))
      | (1ULL << (CppParser::StringLiteral - 130))
      | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
      | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
      | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
      | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
      | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
      setState(998);
      statementSequence(0);
    }
    setState(1001);
    match(CppParser::CloseBrace);
   
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


antlrcpp::Any CppParser::StatementSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitStatementSequence(this);
  else
    return visitor->visitChildren(this);
}


CppParser::StatementSequenceContext* CppParser::statementSequence() {
   return statementSequence(0);
}

CppParser::StatementSequenceContext* CppParser::statementSequence(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::StatementSequenceContext *_localctx = _tracker.createInstance<StatementSequenceContext>(_ctx, parentState);
  CppParser::StatementSequenceContext *previousContext = _localctx;
  size_t startState = 114;
  enterRecursionRule(_localctx, 114, CppParser::RuleStatementSequence, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1004);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(1010);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<StatementSequenceContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatementSequence);
        setState(1006);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1007);
        statement(); 
      }
      setState(1012);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
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

tree::TerminalNode* CppParser::SelectionStatementContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ConditionContext* CppParser::SelectionStatementContext::condition() {
  return getRuleContext<CppParser::ConditionContext>(0);
}

tree::TerminalNode* CppParser::SelectionStatementContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::SelectionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitSelectionStatement(this);
  else
    return visitor->visitChildren(this);
}

CppParser::SelectionStatementContext* CppParser::selectionStatement() {
  SelectionStatementContext *_localctx = _tracker.createInstance<SelectionStatementContext>(_ctx, getState());
  enterRule(_localctx, 116, CppParser::RuleSelectionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1048);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1013);
      match(CppParser::If);
      setState(1015);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::ConstExpr) {
        setState(1014);
        match(CppParser::ConstExpr);
      }
      setState(1017);
      match(CppParser::OpenParenthesis);
      setState(1019);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
      case 1: {
        setState(1018);
        initializerStatement();
        break;
      }

      }
      setState(1021);
      condition();
      setState(1022);
      match(CppParser::CloseParenthesis);
      setState(1023);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1025);
      match(CppParser::If);
      setState(1027);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::ConstExpr) {
        setState(1026);
        match(CppParser::ConstExpr);
      }
      setState(1029);
      match(CppParser::OpenParenthesis);
      setState(1031);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
      case 1: {
        setState(1030);
        initializerStatement();
        break;
      }

      }
      setState(1033);
      condition();
      setState(1034);
      match(CppParser::CloseParenthesis);
      setState(1035);
      statement();
      setState(1036);
      match(CppParser::Else);
      setState(1037);
      statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1039);
      match(CppParser::Switch);
      setState(1040);
      match(CppParser::OpenParenthesis);
      setState(1042);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
      case 1: {
        setState(1041);
        initializerStatement();
        break;
      }

      }
      setState(1044);
      condition();
      setState(1045);
      match(CppParser::CloseParenthesis);
      setState(1046);
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

tree::TerminalNode* CppParser::IterationStatementContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ConditionContext* CppParser::IterationStatementContext::condition() {
  return getRuleContext<CppParser::ConditionContext>(0);
}

tree::TerminalNode* CppParser::IterationStatementContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::IterationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitIterationStatement(this);
  else
    return visitor->visitChildren(this);
}

CppParser::IterationStatementContext* CppParser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 118, CppParser::RuleIterationStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1085);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1050);
      match(CppParser::While);
      setState(1051);
      match(CppParser::OpenParenthesis);
      setState(1052);
      condition();
      setState(1053);
      match(CppParser::CloseParenthesis);
      setState(1054);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1056);
      match(CppParser::Do);
      setState(1057);
      statement();
      setState(1058);
      match(CppParser::While);
      setState(1059);
      match(CppParser::OpenParenthesis);
      setState(1060);
      expression(0);
      setState(1061);
      match(CppParser::CloseParenthesis);
      setState(1062);
      match(CppParser::Semicolon);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1064);
      match(CppParser::For);
      setState(1065);
      match(CppParser::OpenParenthesis);
      setState(1066);
      initializerStatement();
      setState(1068);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
        | (1ULL << CppParser::AlignOf)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char8)
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
        | (1ULL << CppParser::Struct))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
        | (1ULL << (CppParser::ThreadLocal - 64))
        | (1ULL << (CppParser::Throw - 64))
        | (1ULL << (CppParser::True - 64))
        | (1ULL << (CppParser::TypeDef - 64))
        | (1ULL << (CppParser::TypeId - 64))
        | (1ULL << (CppParser::TypeName - 64))
        | (1ULL << (CppParser::Union - 64))
        | (1ULL << (CppParser::Unsigned - 64))
        | (1ULL << (CppParser::Virtual - 64))
        | (1ULL << (CppParser::Void - 64))
        | (1ULL << (CppParser::Volatile - 64))
        | (1ULL << (CppParser::WChar - 64))
        | (1ULL << (CppParser::OpenBracket - 64))
        | (1ULL << (CppParser::OpenParenthesis - 64))
        | (1ULL << (CppParser::DoubleColon - 64))
        | (1ULL << (CppParser::Plus - 64))
        | (1ULL << (CppParser::Minus - 64))
        | (1ULL << (CppParser::Asterisk - 64))
        | (1ULL << (CppParser::Ampersand - 64))
        | (1ULL << (CppParser::VerticalBar - 64))
        | (1ULL << (CppParser::Tilde - 64))
        | (1ULL << (CppParser::ExclamationMark - 64))
        | (1ULL << (CppParser::DoublePlus - 64))
        | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
        | (1ULL << (CppParser::IntegerLiteral - 130))
        | (1ULL << (CppParser::FloatingPointLiteral - 130))
        | (1ULL << (CppParser::CharacterLiteral - 130))
        | (1ULL << (CppParser::StringLiteral - 130))
        | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
        | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
        | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
        | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
        | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
        setState(1067);
        condition();
      }
      setState(1070);
      match(CppParser::Semicolon);
      setState(1072);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char8)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::ConstCast)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Delete)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::DynamicCast)
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
        | (1ULL << CppParser::StaticCast))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
        | (1ULL << (CppParser::Throw - 64))
        | (1ULL << (CppParser::True - 64))
        | (1ULL << (CppParser::TypeId - 64))
        | (1ULL << (CppParser::TypeName - 64))
        | (1ULL << (CppParser::Unsigned - 64))
        | (1ULL << (CppParser::Void - 64))
        | (1ULL << (CppParser::WChar - 64))
        | (1ULL << (CppParser::OpenBracket - 64))
        | (1ULL << (CppParser::OpenParenthesis - 64))
        | (1ULL << (CppParser::DoubleColon - 64))
        | (1ULL << (CppParser::Plus - 64))
        | (1ULL << (CppParser::Minus - 64))
        | (1ULL << (CppParser::Asterisk - 64))
        | (1ULL << (CppParser::Ampersand - 64))
        | (1ULL << (CppParser::VerticalBar - 64))
        | (1ULL << (CppParser::Tilde - 64))
        | (1ULL << (CppParser::ExclamationMark - 64))
        | (1ULL << (CppParser::DoublePlus - 64))
        | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
        | (1ULL << (CppParser::IntegerLiteral - 130))
        | (1ULL << (CppParser::FloatingPointLiteral - 130))
        | (1ULL << (CppParser::CharacterLiteral - 130))
        | (1ULL << (CppParser::StringLiteral - 130))
        | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
        | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
        | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
        | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
        | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
        setState(1071);
        expression(0);
      }
      setState(1074);
      match(CppParser::CloseParenthesis);
      setState(1075);
      statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1077);
      match(CppParser::For);
      setState(1078);
      match(CppParser::OpenParenthesis);
      setState(1079);
      forRangeDeclaration();
      setState(1080);
      match(CppParser::Colon);
      setState(1081);
      forRangeInitializer();
      setState(1082);
      match(CppParser::CloseParenthesis);
      setState(1083);
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

tree::TerminalNode* CppParser::ForInitializerStatementContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
}

CppParser::IdentifierListContext* CppParser::ForInitializerStatementContext::identifierList() {
  return getRuleContext<CppParser::IdentifierListContext>(0);
}

tree::TerminalNode* CppParser::ForInitializerStatementContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
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


antlrcpp::Any CppParser::ForInitializerStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitForInitializerStatement(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ForInitializerStatementContext* CppParser::forInitializerStatement() {
  ForInitializerStatementContext *_localctx = _tracker.createInstance<ForInitializerStatementContext>(_ctx, getState());
  enterRule(_localctx, 120, CppParser::RuleForInitializerStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1104);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1088);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(1087);
        attributeSpecifierSequence(0);
      }
      setState(1090);
      declarationSpecifierSequence();
      setState(1091);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1094);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(1093);
        attributeSpecifierSequence(0);
      }
      setState(1096);
      declarationSpecifierSequence();
      setState(1098);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Ampersand) {
        setState(1097);
        referenceQualifier();
      }
      setState(1100);
      match(CppParser::OpenBracket);
      setState(1101);
      identifierList(0);
      setState(1102);
      match(CppParser::CloseBracket);
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


antlrcpp::Any CppParser::ForRangeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitForRangeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ForRangeDeclarationContext* CppParser::forRangeDeclaration() {
  ForRangeDeclarationContext *_localctx = _tracker.createInstance<ForRangeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 122, CppParser::RuleForRangeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1107);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
      setState(1106);
      attributeSpecifierSequence(0);
    }
    setState(1109);
    declarationSpecifierSequence();
    setState(1110);
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


antlrcpp::Any CppParser::ForRangeInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitForRangeInitializer(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ForRangeInitializerContext* CppParser::forRangeInitializer() {
  ForRangeInitializerContext *_localctx = _tracker.createInstance<ForRangeInitializerContext>(_ctx, getState());
  enterRule(_localctx, 124, CppParser::RuleForRangeInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1112);
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


antlrcpp::Any CppParser::JumpStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitJumpStatement(this);
  else
    return visitor->visitChildren(this);
}

CppParser::JumpStatementContext* CppParser::jumpStatement() {
  JumpStatementContext *_localctx = _tracker.createInstance<JumpStatementContext>(_ctx, getState());
  enterRule(_localctx, 126, CppParser::RuleJumpStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Break: {
        enterOuterAlt(_localctx, 1);
        setState(1114);
        match(CppParser::Break);
        setState(1115);
        match(CppParser::Semicolon);
        break;
      }

      case CppParser::Continue: {
        enterOuterAlt(_localctx, 2);
        setState(1116);
        match(CppParser::Continue);
        setState(1117);
        match(CppParser::Semicolon);
        break;
      }

      case CppParser::Return: {
        enterOuterAlt(_localctx, 3);
        setState(1118);
        match(CppParser::Return);
        setState(1120);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
          | (1ULL << CppParser::Auto)
          | (1ULL << CppParser::Bool)
          | (1ULL << CppParser::Char)
          | (1ULL << CppParser::Char8)
          | (1ULL << CppParser::Char16)
          | (1ULL << CppParser::Char32)
          | (1ULL << CppParser::ConstCast)
          | (1ULL << CppParser::DeclType)
          | (1ULL << CppParser::Delete)
          | (1ULL << CppParser::Double)
          | (1ULL << CppParser::DynamicCast)
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
          | (1ULL << CppParser::StaticCast))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
          | (1ULL << (CppParser::Throw - 64))
          | (1ULL << (CppParser::True - 64))
          | (1ULL << (CppParser::TypeId - 64))
          | (1ULL << (CppParser::TypeName - 64))
          | (1ULL << (CppParser::Unsigned - 64))
          | (1ULL << (CppParser::Void - 64))
          | (1ULL << (CppParser::WChar - 64))
          | (1ULL << (CppParser::OpenBrace - 64))
          | (1ULL << (CppParser::OpenBracket - 64))
          | (1ULL << (CppParser::OpenParenthesis - 64))
          | (1ULL << (CppParser::DoubleColon - 64))
          | (1ULL << (CppParser::Plus - 64))
          | (1ULL << (CppParser::Minus - 64))
          | (1ULL << (CppParser::Asterisk - 64))
          | (1ULL << (CppParser::Ampersand - 64))
          | (1ULL << (CppParser::VerticalBar - 64))
          | (1ULL << (CppParser::Tilde - 64))
          | (1ULL << (CppParser::ExclamationMark - 64))
          | (1ULL << (CppParser::DoublePlus - 64))
          | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
          | (1ULL << (CppParser::IntegerLiteral - 130))
          | (1ULL << (CppParser::FloatingPointLiteral - 130))
          | (1ULL << (CppParser::CharacterLiteral - 130))
          | (1ULL << (CppParser::StringLiteral - 130))
          | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
          | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
          | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
          | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
          | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
          setState(1119);
          expressionOrBracedInitializerList();
        }
        setState(1122);
        match(CppParser::Semicolon);
        break;
      }

      case CppParser::GoTo: {
        enterOuterAlt(_localctx, 4);
        setState(1123);
        match(CppParser::GoTo);
        setState(1124);
        match(CppParser::Identifier);
        setState(1125);
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


antlrcpp::Any CppParser::DeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DeclarationStatementContext* CppParser::declarationStatement() {
  DeclarationStatementContext *_localctx = _tracker.createInstance<DeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 128, CppParser::RuleDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1128);
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


antlrcpp::Any CppParser::DeclarationSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationSequence(this);
  else
    return visitor->visitChildren(this);
}


CppParser::DeclarationSequenceContext* CppParser::declarationSequence() {
   return declarationSequence(0);
}

CppParser::DeclarationSequenceContext* CppParser::declarationSequence(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::DeclarationSequenceContext *_localctx = _tracker.createInstance<DeclarationSequenceContext>(_ctx, parentState);
  CppParser::DeclarationSequenceContext *previousContext = _localctx;
  size_t startState = 130;
  enterRecursionRule(_localctx, 130, CppParser::RuleDeclarationSequence, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1131);
    declaration();
    _ctx->stop = _input->LT(-1);
    setState(1137);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<DeclarationSequenceContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleDeclarationSequence);
        setState(1133);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1134);
        declaration(); 
      }
      setState(1139);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
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


antlrcpp::Any CppParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DeclarationContext* CppParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 132, CppParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1140);
      blockDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1141);
      noDeclarationSpecifierFunctionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1142);
      functionDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1143);
      templateDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1144);
      deductionGuide();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1145);
      explicitInstantiation();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1146);
      explicitSpecialization();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1147);
      linkageSpecification();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1148);
      namespaceDefinition();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1149);
      emptyDeclaration();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1150);
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

CppParser::OpaqueEnumSpecifierContext* CppParser::BlockDeclarationContext::opaqueEnumSpecifier() {
  return getRuleContext<CppParser::OpaqueEnumSpecifierContext>(0);
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


antlrcpp::Any CppParser::BlockDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitBlockDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::BlockDeclarationContext* CppParser::blockDeclaration() {
  BlockDeclarationContext *_localctx = _tracker.createInstance<BlockDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 134, CppParser::RuleBlockDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1153);
      simpleDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1154);
      asmDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1155);
      namespaceAliasDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1156);
      usingDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1157);
      usingDirective();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1158);
      staticAssertDeclaration();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1159);
      aliasDeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1160);
      opaqueEnumSpecifier();
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


antlrcpp::Any CppParser::NoDeclarationSpecifierFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNoDeclarationSpecifierFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NoDeclarationSpecifierFunctionDeclarationContext* CppParser::noDeclarationSpecifierFunctionDeclaration() {
  NoDeclarationSpecifierFunctionDeclarationContext *_localctx = _tracker.createInstance<NoDeclarationSpecifierFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 136, CppParser::RuleNoDeclarationSpecifierFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
      setState(1163);
      attributeSpecifierSequence(0);
    }
    setState(1166);
    declarator();
    setState(1167);
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


antlrcpp::Any CppParser::AliasDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAliasDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AliasDeclarationContext* CppParser::aliasDeclaration() {
  AliasDeclarationContext *_localctx = _tracker.createInstance<AliasDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 138, CppParser::RuleAliasDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1169);
    match(CppParser::Using);
    setState(1170);
    match(CppParser::Identifier);
    setState(1172);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
      setState(1171);
      attributeSpecifierSequence(0);
    }
    setState(1174);
    match(CppParser::Equal);
    setState(1175);
    definingTypeIdentifier();
    setState(1176);
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

tree::TerminalNode* CppParser::SimpleDeclarationContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
}

CppParser::IdentifierListContext* CppParser::SimpleDeclarationContext::identifierList() {
  return getRuleContext<CppParser::IdentifierListContext>(0);
}

tree::TerminalNode* CppParser::SimpleDeclarationContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
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


antlrcpp::Any CppParser::SimpleDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitSimpleDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::SimpleDeclarationContext* CppParser::simpleDeclaration() {
  SimpleDeclarationContext *_localctx = _tracker.createInstance<SimpleDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 140, CppParser::RuleSimpleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1202);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1178);
      declarationSpecifierSequence();
      setState(1180);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DeclType

      || _la == CppParser::Operator || ((((_la - 86) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 86)) & ((1ULL << (CppParser::OpenParenthesis - 86))
        | (1ULL << (CppParser::Ellipsis - 86))
        | (1ULL << (CppParser::DoubleColon - 86))
        | (1ULL << (CppParser::Asterisk - 86))
        | (1ULL << (CppParser::Ampersand - 86))
        | (1ULL << (CppParser::Tilde - 86))
        | (1ULL << (CppParser::DoubleAmpersand - 86))
        | (1ULL << (CppParser::Identifier - 86)))) != 0)) {
        setState(1179);
        initializerDeclaratorList(0);
      }
      setState(1182);
      match(CppParser::Semicolon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1184);
      attributeSpecifierSequence(0);
      setState(1185);
      declarationSpecifierSequence();
      setState(1186);
      initializerDeclaratorList(0);
      setState(1187);
      match(CppParser::Semicolon);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1190);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(1189);
        attributeSpecifierSequence(0);
      }
      setState(1192);
      declarationSpecifierSequence();
      setState(1194);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Ampersand) {
        setState(1193);
        referenceQualifier();
      }
      setState(1196);
      match(CppParser::OpenBracket);
      setState(1197);
      identifierList(0);
      setState(1198);
      match(CppParser::CloseBracket);
      setState(1199);
      initializer();
      setState(1200);
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

tree::TerminalNode* CppParser::StaticAssertDeclarationContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ConstantExpressionContext* CppParser::StaticAssertDeclarationContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CppParser::StaticAssertDeclarationContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::StaticAssertDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitStaticAssertDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::StaticAssertDeclarationContext* CppParser::staticAssertDeclaration() {
  StaticAssertDeclarationContext *_localctx = _tracker.createInstance<StaticAssertDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 142, CppParser::RuleStaticAssertDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1218);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1204);
      match(CppParser::StaticAssert);
      setState(1205);
      match(CppParser::OpenParenthesis);
      setState(1206);
      constantExpression();
      setState(1207);
      match(CppParser::CloseParenthesis);
      setState(1208);
      match(CppParser::Semicolon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1210);
      match(CppParser::StaticAssert);
      setState(1211);
      match(CppParser::OpenParenthesis);
      setState(1212);
      constantExpression();
      setState(1213);
      match(CppParser::Comma);
      setState(1214);
      match(CppParser::StringLiteral);
      setState(1215);
      match(CppParser::CloseParenthesis);
      setState(1216);
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


antlrcpp::Any CppParser::EmptyDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitEmptyDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::EmptyDeclarationContext* CppParser::emptyDeclaration() {
  EmptyDeclarationContext *_localctx = _tracker.createInstance<EmptyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 144, CppParser::RuleEmptyDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1220);
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


antlrcpp::Any CppParser::AttributeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAttributeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AttributeDeclarationContext* CppParser::attributeDeclaration() {
  AttributeDeclarationContext *_localctx = _tracker.createInstance<AttributeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 146, CppParser::RuleAttributeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1222);
    attributeSpecifierSequence(0);
    setState(1223);
    match(CppParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationModifierContext ------------------------------------------------------------------

CppParser::DeclarationModifierContext::DeclarationModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::ConstVolatileQualifierContext* CppParser::DeclarationModifierContext::constVolatileQualifier() {
  return getRuleContext<CppParser::ConstVolatileQualifierContext>(0);
}

CppParser::StorageClassSpecifierContext* CppParser::DeclarationModifierContext::storageClassSpecifier() {
  return getRuleContext<CppParser::StorageClassSpecifierContext>(0);
}

CppParser::FunctionSpecifierContext* CppParser::DeclarationModifierContext::functionSpecifier() {
  return getRuleContext<CppParser::FunctionSpecifierContext>(0);
}

tree::TerminalNode* CppParser::DeclarationModifierContext::Friend() {
  return getToken(CppParser::Friend, 0);
}

tree::TerminalNode* CppParser::DeclarationModifierContext::TypeDef() {
  return getToken(CppParser::TypeDef, 0);
}

tree::TerminalNode* CppParser::DeclarationModifierContext::ConstExpr() {
  return getToken(CppParser::ConstExpr, 0);
}

tree::TerminalNode* CppParser::DeclarationModifierContext::Inline() {
  return getToken(CppParser::Inline, 0);
}


size_t CppParser::DeclarationModifierContext::getRuleIndex() const {
  return CppParser::RuleDeclarationModifier;
}

void CppParser::DeclarationModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationModifier(this);
}

void CppParser::DeclarationModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationModifier(this);
}


antlrcpp::Any CppParser::DeclarationModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationModifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DeclarationModifierContext* CppParser::declarationModifier() {
  DeclarationModifierContext *_localctx = _tracker.createInstance<DeclarationModifierContext>(_ctx, getState());
  enterRule(_localctx, 148, CppParser::RuleDeclarationModifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1232);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Const:
      case CppParser::Volatile: {
        enterOuterAlt(_localctx, 1);
        setState(1225);
        constVolatileQualifier();
        break;
      }

      case CppParser::Extern:
      case CppParser::Mutable:
      case CppParser::Static:
      case CppParser::ThreadLocal: {
        enterOuterAlt(_localctx, 2);
        setState(1226);
        storageClassSpecifier();
        break;
      }

      case CppParser::Explicit:
      case CppParser::Virtual: {
        enterOuterAlt(_localctx, 3);
        setState(1227);
        functionSpecifier();
        break;
      }

      case CppParser::Friend: {
        enterOuterAlt(_localctx, 4);
        setState(1228);
        match(CppParser::Friend);
        break;
      }

      case CppParser::TypeDef: {
        enterOuterAlt(_localctx, 5);
        setState(1229);
        match(CppParser::TypeDef);
        break;
      }

      case CppParser::ConstExpr: {
        enterOuterAlt(_localctx, 6);
        setState(1230);
        match(CppParser::ConstExpr);
        break;
      }

      case CppParser::Inline: {
        enterOuterAlt(_localctx, 7);
        setState(1231);
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

CppParser::DefiningTypeSpecifierContext* CppParser::DeclarationSpecifierSequenceContext::definingTypeSpecifier() {
  return getRuleContext<CppParser::DefiningTypeSpecifierContext>(0);
}

CppParser::LeadingDeclarationModifierSequenceContext* CppParser::DeclarationSpecifierSequenceContext::leadingDeclarationModifierSequence() {
  return getRuleContext<CppParser::LeadingDeclarationModifierSequenceContext>(0);
}

CppParser::TrailingDeclarationModifierSequenceContext* CppParser::DeclarationSpecifierSequenceContext::trailingDeclarationModifierSequence() {
  return getRuleContext<CppParser::TrailingDeclarationModifierSequenceContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::DeclarationSpecifierSequenceContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
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


antlrcpp::Any CppParser::DeclarationSpecifierSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationSpecifierSequence(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DeclarationSpecifierSequenceContext* CppParser::declarationSpecifierSequence() {
  DeclarationSpecifierSequenceContext *_localctx = _tracker.createInstance<DeclarationSpecifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 150, CppParser::RuleDeclarationSpecifierSequence);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1235);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 19) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 19)) & ((1ULL << (CppParser::Const - 19))
      | (1ULL << (CppParser::ConstExpr - 19))
      | (1ULL << (CppParser::Explicit - 19))
      | (1ULL << (CppParser::Extern - 19))
      | (1ULL << (CppParser::Friend - 19))
      | (1ULL << (CppParser::Inline - 19))
      | (1ULL << (CppParser::Mutable - 19))
      | (1ULL << (CppParser::Static - 19))
      | (1ULL << (CppParser::ThreadLocal - 19))
      | (1ULL << (CppParser::TypeDef - 19))
      | (1ULL << (CppParser::Virtual - 19))
      | (1ULL << (CppParser::Volatile - 19)))) != 0)) {
      setState(1234);
      leadingDeclarationModifierSequence();
    }
    setState(1237);
    definingTypeSpecifier();
    setState(1239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 19) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 19)) & ((1ULL << (CppParser::Const - 19))
      | (1ULL << (CppParser::ConstExpr - 19))
      | (1ULL << (CppParser::Explicit - 19))
      | (1ULL << (CppParser::Extern - 19))
      | (1ULL << (CppParser::Friend - 19))
      | (1ULL << (CppParser::Inline - 19))
      | (1ULL << (CppParser::Mutable - 19))
      | (1ULL << (CppParser::Static - 19))
      | (1ULL << (CppParser::ThreadLocal - 19))
      | (1ULL << (CppParser::TypeDef - 19))
      | (1ULL << (CppParser::Virtual - 19))
      | (1ULL << (CppParser::Volatile - 19)))) != 0)) {
      setState(1238);
      trailingDeclarationModifierSequence();
    }
    setState(1242);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
    case 1: {
      setState(1241);
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

//----------------- LeadingDeclarationModifierSequenceContext ------------------------------------------------------------------

CppParser::LeadingDeclarationModifierSequenceContext::LeadingDeclarationModifierSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclarationModifierSequenceContext* CppParser::LeadingDeclarationModifierSequenceContext::declarationModifierSequence() {
  return getRuleContext<CppParser::DeclarationModifierSequenceContext>(0);
}


size_t CppParser::LeadingDeclarationModifierSequenceContext::getRuleIndex() const {
  return CppParser::RuleLeadingDeclarationModifierSequence;
}

void CppParser::LeadingDeclarationModifierSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeadingDeclarationModifierSequence(this);
}

void CppParser::LeadingDeclarationModifierSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeadingDeclarationModifierSequence(this);
}


antlrcpp::Any CppParser::LeadingDeclarationModifierSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitLeadingDeclarationModifierSequence(this);
  else
    return visitor->visitChildren(this);
}

CppParser::LeadingDeclarationModifierSequenceContext* CppParser::leadingDeclarationModifierSequence() {
  LeadingDeclarationModifierSequenceContext *_localctx = _tracker.createInstance<LeadingDeclarationModifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 152, CppParser::RuleLeadingDeclarationModifierSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1244);
    declarationModifierSequence();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrailingDeclarationModifierSequenceContext ------------------------------------------------------------------

CppParser::TrailingDeclarationModifierSequenceContext::TrailingDeclarationModifierSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclarationModifierSequenceContext* CppParser::TrailingDeclarationModifierSequenceContext::declarationModifierSequence() {
  return getRuleContext<CppParser::DeclarationModifierSequenceContext>(0);
}


size_t CppParser::TrailingDeclarationModifierSequenceContext::getRuleIndex() const {
  return CppParser::RuleTrailingDeclarationModifierSequence;
}

void CppParser::TrailingDeclarationModifierSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrailingDeclarationModifierSequence(this);
}

void CppParser::TrailingDeclarationModifierSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrailingDeclarationModifierSequence(this);
}


antlrcpp::Any CppParser::TrailingDeclarationModifierSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTrailingDeclarationModifierSequence(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TrailingDeclarationModifierSequenceContext* CppParser::trailingDeclarationModifierSequence() {
  TrailingDeclarationModifierSequenceContext *_localctx = _tracker.createInstance<TrailingDeclarationModifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 154, CppParser::RuleTrailingDeclarationModifierSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1246);
    declarationModifierSequence();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationModifierSequenceContext ------------------------------------------------------------------

CppParser::DeclarationModifierSequenceContext::DeclarationModifierSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::DeclarationModifierContext* CppParser::DeclarationModifierSequenceContext::declarationModifier() {
  return getRuleContext<CppParser::DeclarationModifierContext>(0);
}

CppParser::DeclarationModifierSequenceContext* CppParser::DeclarationModifierSequenceContext::declarationModifierSequence() {
  return getRuleContext<CppParser::DeclarationModifierSequenceContext>(0);
}


size_t CppParser::DeclarationModifierSequenceContext::getRuleIndex() const {
  return CppParser::RuleDeclarationModifierSequence;
}

void CppParser::DeclarationModifierSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationModifierSequence(this);
}

void CppParser::DeclarationModifierSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationModifierSequence(this);
}


antlrcpp::Any CppParser::DeclarationModifierSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationModifierSequence(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DeclarationModifierSequenceContext* CppParser::declarationModifierSequence() {
  DeclarationModifierSequenceContext *_localctx = _tracker.createInstance<DeclarationModifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 156, CppParser::RuleDeclarationModifierSequence);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1248);
    declarationModifier();
    setState(1250);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 19) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 19)) & ((1ULL << (CppParser::Const - 19))
      | (1ULL << (CppParser::ConstExpr - 19))
      | (1ULL << (CppParser::Explicit - 19))
      | (1ULL << (CppParser::Extern - 19))
      | (1ULL << (CppParser::Friend - 19))
      | (1ULL << (CppParser::Inline - 19))
      | (1ULL << (CppParser::Mutable - 19))
      | (1ULL << (CppParser::Static - 19))
      | (1ULL << (CppParser::ThreadLocal - 19))
      | (1ULL << (CppParser::TypeDef - 19))
      | (1ULL << (CppParser::Virtual - 19))
      | (1ULL << (CppParser::Volatile - 19)))) != 0)) {
      setState(1249);
      declarationModifierSequence();
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


antlrcpp::Any CppParser::StorageClassSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitStorageClassSpecifier(this);
  else
    return visitor->visitChildren(this);
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
    setState(1252);
    _la = _input->LA(1);
    if (!(((((_la - 33) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 33)) & ((1ULL << (CppParser::Extern - 33))
      | (1ULL << (CppParser::Mutable - 33))
      | (1ULL << (CppParser::Static - 33))
      | (1ULL << (CppParser::ThreadLocal - 33)))) != 0))) {
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


antlrcpp::Any CppParser::FunctionSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitFunctionSpecifier(this);
  else
    return visitor->visitChildren(this);
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
    setState(1254);
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


antlrcpp::Any CppParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TypeSpecifierContext* CppParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 162, CppParser::RuleTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1259);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Auto:
      case CppParser::Bool:
      case CppParser::Char:
      case CppParser::Char8:
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
        setState(1256);
        simpleTypeSpecifier();
        break;
      }

      case CppParser::Class:
      case CppParser::Enum:
      case CppParser::Struct:
      case CppParser::Union: {
        enterOuterAlt(_localctx, 2);
        setState(1257);
        elaboratedTypeSpecifier();
        break;
      }

      case CppParser::TypeName: {
        enterOuterAlt(_localctx, 3);
        setState(1258);
        typenameSpecifier();
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

CppParser::ConstVolatileQualifierContext* CppParser::TypeSpecifierSequenceContext::constVolatileQualifier() {
  return getRuleContext<CppParser::ConstVolatileQualifierContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::TypeSpecifierSequenceContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
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


antlrcpp::Any CppParser::TypeSpecifierSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifierSequence(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TypeSpecifierSequenceContext* CppParser::typeSpecifierSequence() {
  TypeSpecifierSequenceContext *_localctx = _tracker.createInstance<TypeSpecifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 164, CppParser::RuleTypeSpecifierSequence);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1262);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Const

    || _la == CppParser::Volatile) {
      setState(1261);
      constVolatileQualifier();
    }
    setState(1264);
    typeSpecifier();
    setState(1266);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      setState(1265);
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


antlrcpp::Any CppParser::DefiningTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDefiningTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DefiningTypeSpecifierContext* CppParser::definingTypeSpecifier() {
  DefiningTypeSpecifierContext *_localctx = _tracker.createInstance<DefiningTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 166, CppParser::RuleDefiningTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1268);
      typeSpecifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1269);
      classSpecifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1270);
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


antlrcpp::Any CppParser::DefiningTypeSpecifierSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDefiningTypeSpecifierSequence(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DefiningTypeSpecifierSequenceContext* CppParser::definingTypeSpecifierSequence() {
  DefiningTypeSpecifierSequenceContext *_localctx = _tracker.createInstance<DefiningTypeSpecifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 168, CppParser::RuleDefiningTypeSpecifierSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1280);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1273);
      definingTypeSpecifier();
      setState(1275);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
      case 1: {
        setState(1274);
        attributeSpecifierSequence(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1277);
      definingTypeSpecifier();
      setState(1278);
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

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Char() {
  return getToken(CppParser::Char, 0);
}

tree::TerminalNode* CppParser::SimpleTypeSpecifierContext::Char8() {
  return getToken(CppParser::Char8, 0);
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


antlrcpp::Any CppParser::SimpleTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitSimpleTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::SimpleTypeSpecifierContext* CppParser::simpleTypeSpecifier() {
  SimpleTypeSpecifierContext *_localctx = _tracker.createInstance<SimpleTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 170, CppParser::RuleSimpleTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1302);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1283);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
      case 1: {
        setState(1282);
        nestedNameSpecifier();
        break;
      }

      }
      setState(1285);
      typeName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1286);
      match(CppParser::Char);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1287);
      match(CppParser::Char8);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1288);
      match(CppParser::Char16);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1289);
      match(CppParser::Char32);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1290);
      match(CppParser::WChar);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1291);
      match(CppParser::Bool);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1292);
      match(CppParser::Short);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1293);
      match(CppParser::Int);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1294);
      match(CppParser::Long);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1295);
      match(CppParser::Signed);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1296);
      match(CppParser::Unsigned);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1297);
      match(CppParser::Float);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1298);
      match(CppParser::Double);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1299);
      match(CppParser::Void);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1300);
      match(CppParser::Auto);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1301);
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

tree::TerminalNode* CppParser::TypeNameContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
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


antlrcpp::Any CppParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TypeNameContext* CppParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 172, CppParser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1306);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1304);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1305);
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

tree::TerminalNode* CppParser::DeclarationTypeSpecifierContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ExpressionContext* CppParser::DeclarationTypeSpecifierContext::expression() {
  return getRuleContext<CppParser::ExpressionContext>(0);
}

tree::TerminalNode* CppParser::DeclarationTypeSpecifierContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::DeclarationTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDeclarationTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DeclarationTypeSpecifierContext* CppParser::declarationTypeSpecifier() {
  DeclarationTypeSpecifierContext *_localctx = _tracker.createInstance<DeclarationTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 174, CppParser::RuleDeclarationTypeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1317);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1308);
      match(CppParser::DeclType);
      setState(1309);
      match(CppParser::OpenParenthesis);
      setState(1310);
      expression(0);
      setState(1311);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1313);
      match(CppParser::DeclType);
      setState(1314);
      match(CppParser::OpenParenthesis);
      setState(1315);
      match(CppParser::Auto);
      setState(1316);
      match(CppParser::CloseParenthesis);
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


antlrcpp::Any CppParser::ElaboratedTypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitElaboratedTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ElaboratedTypeSpecifierContext* CppParser::elaboratedTypeSpecifier() {
  ElaboratedTypeSpecifierContext *_localctx = _tracker.createInstance<ElaboratedTypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 176, CppParser::RuleElaboratedTypeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1343);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 126, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1319);
      classKey();
      setState(1321);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(1320);
        attributeSpecifierSequence(0);
      }
      setState(1324);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx)) {
      case 1: {
        setState(1323);
        nestedNameSpecifier();
        break;
      }

      }
      setState(1326);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1328);
      classKey();
      setState(1329);
      simpleTemplateIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1331);
      classKey();
      setState(1332);
      nestedNameSpecifier();
      setState(1334);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Template) {
        setState(1333);
        match(CppParser::Template);
      }
      setState(1336);
      simpleTemplateIdentifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1338);
      match(CppParser::Enum);
      setState(1340);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 125, _ctx)) {
      case 1: {
        setState(1339);
        nestedNameSpecifier();
        break;
      }

      }
      setState(1342);
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

tree::TerminalNode* CppParser::EnumSpecifierContext::OpenBrace() {
  return getToken(CppParser::OpenBrace, 0);
}

tree::TerminalNode* CppParser::EnumSpecifierContext::CloseBrace() {
  return getToken(CppParser::CloseBrace, 0);
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


antlrcpp::Any CppParser::EnumSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitEnumSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::EnumSpecifierContext* CppParser::enumSpecifier() {
  EnumSpecifierContext *_localctx = _tracker.createInstance<EnumSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 178, CppParser::RuleEnumSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1358);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 128, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1345);
      enumHead();
      setState(1346);
      match(CppParser::OpenBrace);
      setState(1348);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Identifier) {
        setState(1347);
        enumeratorList(0);
      }
      setState(1350);
      match(CppParser::CloseBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1352);
      enumHead();
      setState(1353);
      match(CppParser::OpenBrace);
      setState(1354);
      enumeratorList(0);
      setState(1355);
      match(CppParser::Comma);
      setState(1356);
      match(CppParser::CloseBrace);
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


antlrcpp::Any CppParser::EnumHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitEnumHead(this);
  else
    return visitor->visitChildren(this);
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
    setState(1360);
    enumKey();
    setState(1362);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
      setState(1361);
      attributeSpecifierSequence(0);
    }
    setState(1365);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::DeclType || _la == CppParser::DoubleColon

    || _la == CppParser::Identifier) {
      setState(1364);
      enumHeadName();
    }
    setState(1368);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Colon) {
      setState(1367);
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


antlrcpp::Any CppParser::EnumHeadNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitEnumHeadName(this);
  else
    return visitor->visitChildren(this);
}

CppParser::EnumHeadNameContext* CppParser::enumHeadName() {
  EnumHeadNameContext *_localctx = _tracker.createInstance<EnumHeadNameContext>(_ctx, getState());
  enterRule(_localctx, 182, CppParser::RuleEnumHeadName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1371);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 132, _ctx)) {
    case 1: {
      setState(1370);
      nestedNameSpecifier();
      break;
    }

    }
    setState(1373);
    match(CppParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpaqueEnumSpecifierContext ------------------------------------------------------------------

CppParser::OpaqueEnumSpecifierContext::OpaqueEnumSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::EnumKeyContext* CppParser::OpaqueEnumSpecifierContext::enumKey() {
  return getRuleContext<CppParser::EnumKeyContext>(0);
}

tree::TerminalNode* CppParser::OpaqueEnumSpecifierContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
}

tree::TerminalNode* CppParser::OpaqueEnumSpecifierContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::OpaqueEnumSpecifierContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

CppParser::NestedNameSpecifierContext* CppParser::OpaqueEnumSpecifierContext::nestedNameSpecifier() {
  return getRuleContext<CppParser::NestedNameSpecifierContext>(0);
}

CppParser::EnumBaseContext* CppParser::OpaqueEnumSpecifierContext::enumBase() {
  return getRuleContext<CppParser::EnumBaseContext>(0);
}


size_t CppParser::OpaqueEnumSpecifierContext::getRuleIndex() const {
  return CppParser::RuleOpaqueEnumSpecifier;
}

void CppParser::OpaqueEnumSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpaqueEnumSpecifier(this);
}

void CppParser::OpaqueEnumSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpaqueEnumSpecifier(this);
}


antlrcpp::Any CppParser::OpaqueEnumSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitOpaqueEnumSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::OpaqueEnumSpecifierContext* CppParser::opaqueEnumSpecifier() {
  OpaqueEnumSpecifierContext *_localctx = _tracker.createInstance<OpaqueEnumSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 184, CppParser::RuleOpaqueEnumSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1375);
    enumKey();
    setState(1377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
      setState(1376);
      attributeSpecifierSequence(0);
    }
    setState(1380);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 134, _ctx)) {
    case 1: {
      setState(1379);
      nestedNameSpecifier();
      break;
    }

    }
    setState(1382);
    match(CppParser::Identifier);
    setState(1384);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Colon) {
      setState(1383);
      enumBase();
    }
    setState(1386);
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


antlrcpp::Any CppParser::EnumKeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitEnumKey(this);
  else
    return visitor->visitChildren(this);
}

CppParser::EnumKeyContext* CppParser::enumKey() {
  EnumKeyContext *_localctx = _tracker.createInstance<EnumKeyContext>(_ctx, getState());
  enterRule(_localctx, 186, CppParser::RuleEnumKey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1393);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 136, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1388);
      match(CppParser::Enum);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1389);
      match(CppParser::Enum);
      setState(1390);
      match(CppParser::Class);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1391);
      match(CppParser::Enum);
      setState(1392);
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


antlrcpp::Any CppParser::EnumBaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitEnumBase(this);
  else
    return visitor->visitChildren(this);
}

CppParser::EnumBaseContext* CppParser::enumBase() {
  EnumBaseContext *_localctx = _tracker.createInstance<EnumBaseContext>(_ctx, getState());
  enterRule(_localctx, 188, CppParser::RuleEnumBase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1395);
    match(CppParser::Colon);
    setState(1396);
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


antlrcpp::Any CppParser::EnumeratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitEnumeratorList(this);
  else
    return visitor->visitChildren(this);
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
    setState(1399);
    enumeratorDefinition();
    _ctx->stop = _input->LT(-1);
    setState(1406);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EnumeratorListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEnumeratorList);
        setState(1401);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1402);
        match(CppParser::Comma);
        setState(1403);
        enumeratorDefinition(); 
      }
      setState(1408);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 137, _ctx);
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


antlrcpp::Any CppParser::EnumeratorDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitEnumeratorDefinition(this);
  else
    return visitor->visitChildren(this);
}

CppParser::EnumeratorDefinitionContext* CppParser::enumeratorDefinition() {
  EnumeratorDefinitionContext *_localctx = _tracker.createInstance<EnumeratorDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 192, CppParser::RuleEnumeratorDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1414);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 138, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1409);
      enumerator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1410);
      enumerator();
      setState(1411);
      match(CppParser::Equal);
      setState(1412);
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


antlrcpp::Any CppParser::EnumeratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitEnumerator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::EnumeratorContext* CppParser::enumerator() {
  EnumeratorContext *_localctx = _tracker.createInstance<EnumeratorContext>(_ctx, getState());
  enterRule(_localctx, 194, CppParser::RuleEnumerator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1416);
    match(CppParser::Identifier);
    setState(1418);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 139, _ctx)) {
    case 1: {
      setState(1417);
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


antlrcpp::Any CppParser::NamespaceDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceDefinition(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NamespaceDefinitionContext* CppParser::namespaceDefinition() {
  NamespaceDefinitionContext *_localctx = _tracker.createInstance<NamespaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 196, CppParser::RuleNamespaceDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1423);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 140, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1420);
      namedNamespaceDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1421);
      unnamedNamespaceDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1422);
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

tree::TerminalNode* CppParser::NamedNamespaceDefinitionContext::OpenBrace() {
  return getToken(CppParser::OpenBrace, 0);
}

CppParser::NamespaceBodyContext* CppParser::NamedNamespaceDefinitionContext::namespaceBody() {
  return getRuleContext<CppParser::NamespaceBodyContext>(0);
}

tree::TerminalNode* CppParser::NamedNamespaceDefinitionContext::CloseBrace() {
  return getToken(CppParser::CloseBrace, 0);
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


antlrcpp::Any CppParser::NamedNamespaceDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNamedNamespaceDefinition(this);
  else
    return visitor->visitChildren(this);
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
    setState(1426);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Inline) {
      setState(1425);
      match(CppParser::Inline);
    }
    setState(1428);
    match(CppParser::Namespace);
    setState(1430);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
      setState(1429);
      attributeSpecifierSequence(0);
    }
    setState(1432);
    match(CppParser::Identifier);
    setState(1433);
    match(CppParser::OpenBrace);
    setState(1434);
    namespaceBody();
    setState(1435);
    match(CppParser::CloseBrace);
   
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

tree::TerminalNode* CppParser::UnnamedNamespaceDefinitionContext::OpenBrace() {
  return getToken(CppParser::OpenBrace, 0);
}

CppParser::NamespaceBodyContext* CppParser::UnnamedNamespaceDefinitionContext::namespaceBody() {
  return getRuleContext<CppParser::NamespaceBodyContext>(0);
}

tree::TerminalNode* CppParser::UnnamedNamespaceDefinitionContext::CloseBrace() {
  return getToken(CppParser::CloseBrace, 0);
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


antlrcpp::Any CppParser::UnnamedNamespaceDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitUnnamedNamespaceDefinition(this);
  else
    return visitor->visitChildren(this);
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
    setState(1438);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Inline) {
      setState(1437);
      match(CppParser::Inline);
    }
    setState(1440);
    match(CppParser::Namespace);
    setState(1442);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
      setState(1441);
      attributeSpecifierSequence(0);
    }
    setState(1444);
    match(CppParser::OpenBrace);
    setState(1445);
    namespaceBody();
    setState(1446);
    match(CppParser::CloseBrace);
   
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

tree::TerminalNode* CppParser::NestedNamespaceDefinitionContext::OpenBrace() {
  return getToken(CppParser::OpenBrace, 0);
}

CppParser::NamespaceBodyContext* CppParser::NestedNamespaceDefinitionContext::namespaceBody() {
  return getRuleContext<CppParser::NamespaceBodyContext>(0);
}

tree::TerminalNode* CppParser::NestedNamespaceDefinitionContext::CloseBrace() {
  return getToken(CppParser::CloseBrace, 0);
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


antlrcpp::Any CppParser::NestedNamespaceDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNestedNamespaceDefinition(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NestedNamespaceDefinitionContext* CppParser::nestedNamespaceDefinition() {
  NestedNamespaceDefinitionContext *_localctx = _tracker.createInstance<NestedNamespaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 202, CppParser::RuleNestedNamespaceDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1448);
    match(CppParser::Namespace);
    setState(1449);
    enclosingNamespaceSpecifier(0);
    setState(1450);
    match(CppParser::DoubleColon);
    setState(1451);
    match(CppParser::Identifier);
    setState(1452);
    match(CppParser::OpenBrace);
    setState(1453);
    namespaceBody();
    setState(1454);
    match(CppParser::CloseBrace);
   
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

tree::TerminalNode* CppParser::EnclosingNamespaceSpecifierContext::Identifier() {
  return getToken(CppParser::Identifier, 0);
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


antlrcpp::Any CppParser::EnclosingNamespaceSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitEnclosingNamespaceSpecifier(this);
  else
    return visitor->visitChildren(this);
}


CppParser::EnclosingNamespaceSpecifierContext* CppParser::enclosingNamespaceSpecifier() {
   return enclosingNamespaceSpecifier(0);
}

CppParser::EnclosingNamespaceSpecifierContext* CppParser::enclosingNamespaceSpecifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::EnclosingNamespaceSpecifierContext *_localctx = _tracker.createInstance<EnclosingNamespaceSpecifierContext>(_ctx, parentState);
  CppParser::EnclosingNamespaceSpecifierContext *previousContext = _localctx;
  size_t startState = 204;
  enterRecursionRule(_localctx, 204, CppParser::RuleEnclosingNamespaceSpecifier, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1457);
    match(CppParser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(1464);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EnclosingNamespaceSpecifierContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEnclosingNamespaceSpecifier);
        setState(1459);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1460);
        match(CppParser::DoubleColon);
        setState(1461);
        match(CppParser::Identifier); 
      }
      setState(1466);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 145, _ctx);
    }
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


antlrcpp::Any CppParser::NamespaceBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceBody(this);
  else
    return visitor->visitChildren(this);
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
    setState(1468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
      | (1ULL << CppParser::Asm)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char8)
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
      | (1ULL << CppParser::Template))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CppParser::ThreadLocal - 65))
      | (1ULL << (CppParser::TypeDef - 65))
      | (1ULL << (CppParser::TypeName - 65))
      | (1ULL << (CppParser::Union - 65))
      | (1ULL << (CppParser::Unsigned - 65))
      | (1ULL << (CppParser::Using - 65))
      | (1ULL << (CppParser::Virtual - 65))
      | (1ULL << (CppParser::Void - 65))
      | (1ULL << (CppParser::Volatile - 65))
      | (1ULL << (CppParser::WChar - 65))
      | (1ULL << (CppParser::OpenBracket - 65))
      | (1ULL << (CppParser::OpenParenthesis - 65))
      | (1ULL << (CppParser::Semicolon - 65))
      | (1ULL << (CppParser::Ellipsis - 65))
      | (1ULL << (CppParser::DoubleColon - 65))
      | (1ULL << (CppParser::Asterisk - 65))
      | (1ULL << (CppParser::Ampersand - 65))
      | (1ULL << (CppParser::Tilde - 65))
      | (1ULL << (CppParser::DoubleAmpersand - 65)))) != 0) || _la == CppParser::Identifier) {
      setState(1467);
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


antlrcpp::Any CppParser::NamespaceAliasDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceAliasDefinition(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NamespaceAliasDefinitionContext* CppParser::namespaceAliasDefinition() {
  NamespaceAliasDefinitionContext *_localctx = _tracker.createInstance<NamespaceAliasDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 208, CppParser::RuleNamespaceAliasDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1470);
    match(CppParser::Namespace);
    setState(1471);
    match(CppParser::Identifier);
    setState(1472);
    match(CppParser::Equal);
    setState(1473);
    qualifiedNamespaceSpecifier();
    setState(1474);
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


antlrcpp::Any CppParser::QualifiedNamespaceSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitQualifiedNamespaceSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::QualifiedNamespaceSpecifierContext* CppParser::qualifiedNamespaceSpecifier() {
  QualifiedNamespaceSpecifierContext *_localctx = _tracker.createInstance<QualifiedNamespaceSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 210, CppParser::RuleQualifiedNamespaceSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1477);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 147, _ctx)) {
    case 1: {
      setState(1476);
      nestedNameSpecifier();
      break;
    }

    }
    setState(1479);
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


antlrcpp::Any CppParser::UsingDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitUsingDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::UsingDeclarationContext* CppParser::usingDeclaration() {
  UsingDeclarationContext *_localctx = _tracker.createInstance<UsingDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 212, CppParser::RuleUsingDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1481);
    match(CppParser::Using);
    setState(1482);
    usingDeclaratorList(0);
    setState(1483);
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


antlrcpp::Any CppParser::UsingDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitUsingDeclaratorList(this);
  else
    return visitor->visitChildren(this);
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
    setState(1486);
    usingDeclarator();
    setState(1488);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 148, _ctx)) {
    case 1: {
      setState(1487);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1498);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<UsingDeclaratorListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleUsingDeclaratorList);
        setState(1490);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1491);
        match(CppParser::Comma);
        setState(1492);
        usingDeclarator();
        setState(1494);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 149, _ctx)) {
        case 1: {
          setState(1493);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(1500);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx);
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


antlrcpp::Any CppParser::UsingDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitUsingDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::UsingDeclaratorContext* CppParser::usingDeclarator() {
  UsingDeclaratorContext *_localctx = _tracker.createInstance<UsingDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 216, CppParser::RuleUsingDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1502);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 151, _ctx)) {
    case 1: {
      setState(1501);
      typeName();
      break;
    }

    }
    setState(1504);
    nestedNameSpecifier();
    setState(1505);
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


antlrcpp::Any CppParser::UsingDirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitUsingDirective(this);
  else
    return visitor->visitChildren(this);
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
    setState(1508);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
      setState(1507);
      attributeSpecifierSequence(0);
    }
    setState(1510);
    match(CppParser::Using);
    setState(1511);
    match(CppParser::Namespace);
    setState(1513);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 153, _ctx)) {
    case 1: {
      setState(1512);
      nestedNameSpecifier();
      break;
    }

    }
    setState(1515);
    namespaceName();
    setState(1516);
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

tree::TerminalNode* CppParser::AsmDefinitionContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

tree::TerminalNode* CppParser::AsmDefinitionContext::StringLiteral() {
  return getToken(CppParser::StringLiteral, 0);
}

tree::TerminalNode* CppParser::AsmDefinitionContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::AsmDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAsmDefinition(this);
  else
    return visitor->visitChildren(this);
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
    setState(1519);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
      setState(1518);
      attributeSpecifierSequence(0);
    }
    setState(1521);
    match(CppParser::Asm);
    setState(1522);
    match(CppParser::OpenParenthesis);
    setState(1523);
    match(CppParser::StringLiteral);
    setState(1524);
    match(CppParser::CloseParenthesis);
    setState(1525);
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

tree::TerminalNode* CppParser::LinkageSpecificationContext::OpenBrace() {
  return getToken(CppParser::OpenBrace, 0);
}

tree::TerminalNode* CppParser::LinkageSpecificationContext::CloseBrace() {
  return getToken(CppParser::CloseBrace, 0);
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


antlrcpp::Any CppParser::LinkageSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitLinkageSpecification(this);
  else
    return visitor->visitChildren(this);
}

CppParser::LinkageSpecificationContext* CppParser::linkageSpecification() {
  LinkageSpecificationContext *_localctx = _tracker.createInstance<LinkageSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 222, CppParser::RuleLinkageSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1537);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 156, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1527);
      match(CppParser::Extern);
      setState(1528);
      match(CppParser::StringLiteral);
      setState(1529);
      match(CppParser::OpenBrace);
      setState(1531);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
        | (1ULL << CppParser::Asm)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char8)
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
        | (1ULL << CppParser::Template))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (CppParser::ThreadLocal - 65))
        | (1ULL << (CppParser::TypeDef - 65))
        | (1ULL << (CppParser::TypeName - 65))
        | (1ULL << (CppParser::Union - 65))
        | (1ULL << (CppParser::Unsigned - 65))
        | (1ULL << (CppParser::Using - 65))
        | (1ULL << (CppParser::Virtual - 65))
        | (1ULL << (CppParser::Void - 65))
        | (1ULL << (CppParser::Volatile - 65))
        | (1ULL << (CppParser::WChar - 65))
        | (1ULL << (CppParser::OpenBracket - 65))
        | (1ULL << (CppParser::OpenParenthesis - 65))
        | (1ULL << (CppParser::Semicolon - 65))
        | (1ULL << (CppParser::Ellipsis - 65))
        | (1ULL << (CppParser::DoubleColon - 65))
        | (1ULL << (CppParser::Asterisk - 65))
        | (1ULL << (CppParser::Ampersand - 65))
        | (1ULL << (CppParser::Tilde - 65))
        | (1ULL << (CppParser::DoubleAmpersand - 65)))) != 0) || _la == CppParser::Identifier) {
        setState(1530);
        declarationSequence(0);
      }
      setState(1533);
      match(CppParser::CloseBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1534);
      match(CppParser::Extern);
      setState(1535);
      match(CppParser::StringLiteral);
      setState(1536);
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


antlrcpp::Any CppParser::AttributeSpecifierSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAttributeSpecifierSequence(this);
  else
    return visitor->visitChildren(this);
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
    setState(1540);
    attributeSpecifier();
    _ctx->stop = _input->LT(-1);
    setState(1546);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AttributeSpecifierSequenceContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAttributeSpecifierSequence);
        setState(1542);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1543);
        attributeSpecifier(); 
      }
      setState(1548);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx);
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

std::vector<tree::TerminalNode *> CppParser::AttributeSpecifierContext::OpenBracket() {
  return getTokens(CppParser::OpenBracket);
}

tree::TerminalNode* CppParser::AttributeSpecifierContext::OpenBracket(size_t i) {
  return getToken(CppParser::OpenBracket, i);
}

CppParser::AttributeListContext* CppParser::AttributeSpecifierContext::attributeList() {
  return getRuleContext<CppParser::AttributeListContext>(0);
}

std::vector<tree::TerminalNode *> CppParser::AttributeSpecifierContext::CloseBracket() {
  return getTokens(CppParser::CloseBracket);
}

tree::TerminalNode* CppParser::AttributeSpecifierContext::CloseBracket(size_t i) {
  return getToken(CppParser::CloseBracket, i);
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


antlrcpp::Any CppParser::AttributeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAttributeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AttributeSpecifierContext* CppParser::attributeSpecifier() {
  AttributeSpecifierContext *_localctx = _tracker.createInstance<AttributeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 226, CppParser::RuleAttributeSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1559);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::OpenBracket: {
        enterOuterAlt(_localctx, 1);
        setState(1549);
        match(CppParser::OpenBracket);
        setState(1550);
        match(CppParser::OpenBracket);
        setState(1552);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 158, _ctx)) {
        case 1: {
          setState(1551);
          attributeUsingPrefix();
          break;
        }

        }
        setState(1554);
        attributeList(0);
        setState(1555);
        match(CppParser::CloseBracket);
        setState(1556);
        match(CppParser::CloseBracket);
        break;
      }

      case CppParser::AlignAs: {
        enterOuterAlt(_localctx, 2);
        setState(1558);
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

tree::TerminalNode* CppParser::AlignmentSpecifierContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::TypeIdentifierContext* CppParser::AlignmentSpecifierContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
}

std::vector<tree::TerminalNode *> CppParser::AlignmentSpecifierContext::CloseParenthesis() {
  return getTokens(CppParser::CloseParenthesis);
}

tree::TerminalNode* CppParser::AlignmentSpecifierContext::CloseParenthesis(size_t i) {
  return getToken(CppParser::CloseParenthesis, i);
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


antlrcpp::Any CppParser::AlignmentSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAlignmentSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AlignmentSpecifierContext* CppParser::alignmentSpecifier() {
  AlignmentSpecifierContext *_localctx = _tracker.createInstance<AlignmentSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 228, CppParser::RuleAlignmentSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1577);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1561);
      match(CppParser::AlignAs);
      setState(1562);
      match(CppParser::OpenParenthesis);
      setState(1563);
      typeIdentifier();
      setState(1565);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Ellipsis) {
        setState(1564);
        match(CppParser::Ellipsis);
      }
      setState(1567);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1569);
      match(CppParser::AlignAs);
      setState(1570);
      match(CppParser::CloseParenthesis);
      setState(1571);
      constantExpression();
      setState(1573);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Ellipsis) {
        setState(1572);
        match(CppParser::Ellipsis);
      }
      setState(1575);
      match(CppParser::CloseParenthesis);
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


antlrcpp::Any CppParser::AttributeUsingPrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAttributeUsingPrefix(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AttributeUsingPrefixContext* CppParser::attributeUsingPrefix() {
  AttributeUsingPrefixContext *_localctx = _tracker.createInstance<AttributeUsingPrefixContext>(_ctx, getState());
  enterRule(_localctx, 230, CppParser::RuleAttributeUsingPrefix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1579);
    match(CppParser::Using);
    setState(1580);
    attributeNamespace();
    setState(1581);
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


antlrcpp::Any CppParser::AttributeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAttributeList(this);
  else
    return visitor->visitChildren(this);
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
    setState(1590);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx)) {
    case 1: {
      setState(1585);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 163, _ctx)) {
      case 1: {
        setState(1584);
        attribute();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(1587);
      attribute();
      setState(1588);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1604);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1602);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 166, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<AttributeListContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributeList);
          setState(1592);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1593);
          match(CppParser::Comma);
          setState(1595);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 165, _ctx)) {
          case 1: {
            setState(1594);
            attribute();
            break;
          }

          }
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<AttributeListContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAttributeList);
          setState(1597);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(1598);
          match(CppParser::Comma);
          setState(1599);
          attribute();
          setState(1600);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(1606);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 167, _ctx);
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


antlrcpp::Any CppParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AttributeContext* CppParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 234, CppParser::RuleAttribute);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1607);
    attributeToken();
    setState(1609);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 168, _ctx)) {
    case 1: {
      setState(1608);
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


antlrcpp::Any CppParser::AttributeTokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAttributeToken(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AttributeTokenContext* CppParser::attributeToken() {
  AttributeTokenContext *_localctx = _tracker.createInstance<AttributeTokenContext>(_ctx, getState());
  enterRule(_localctx, 236, CppParser::RuleAttributeToken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1613);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1611);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1612);
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


antlrcpp::Any CppParser::AttributeScopedTokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAttributeScopedToken(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AttributeScopedTokenContext* CppParser::attributeScopedToken() {
  AttributeScopedTokenContext *_localctx = _tracker.createInstance<AttributeScopedTokenContext>(_ctx, getState());
  enterRule(_localctx, 238, CppParser::RuleAttributeScopedToken);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1615);
    attributeNamespace();
    setState(1616);
    match(CppParser::DoubleColon);
    setState(1617);
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


antlrcpp::Any CppParser::AttributeNamespaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAttributeNamespace(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AttributeNamespaceContext* CppParser::attributeNamespace() {
  AttributeNamespaceContext *_localctx = _tracker.createInstance<AttributeNamespaceContext>(_ctx, getState());
  enterRule(_localctx, 240, CppParser::RuleAttributeNamespace);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1619);
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

tree::TerminalNode* CppParser::AttributeArgumentClauseContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

tree::TerminalNode* CppParser::AttributeArgumentClauseContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::AttributeArgumentClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAttributeArgumentClause(this);
  else
    return visitor->visitChildren(this);
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
    setState(1621);
    match(CppParser::OpenParenthesis);
    setState(1623);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::BlockComment)
      | (1ULL << CppParser::LineComment)
      | (1ULL << CppParser::Whitespace)
      | (1ULL << CppParser::Preprocessor)
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
      | (1ULL << CppParser::Char8)
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
      | (1ULL << CppParser::Template))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
      | (1ULL << (CppParser::ThreadLocal - 64))
      | (1ULL << (CppParser::Throw - 64))
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
      | (1ULL << (CppParser::OpenBrace - 64))
      | (1ULL << (CppParser::OpenBracket - 64))
      | (1ULL << (CppParser::OpenParenthesis - 64))
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
      | (1ULL << (CppParser::Comma - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (CppParser::ArrowAsterisk - 128))
      | (1ULL << (CppParser::Arrow - 128))
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
      setState(1622);
      balancedTokenSequence(0);
    }
    setState(1625);
    match(CppParser::CloseParenthesis);
   
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


antlrcpp::Any CppParser::BalancedTokenSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitBalancedTokenSequence(this);
  else
    return visitor->visitChildren(this);
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
    setState(1628);
    balancedToken();
    _ctx->stop = _input->LT(-1);
    setState(1634);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BalancedTokenSequenceContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBalancedTokenSequence);
        setState(1630);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1631);
        balancedToken(); 
      }
      setState(1636);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx);
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

tree::TerminalNode* CppParser::BalancedTokenContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

tree::TerminalNode* CppParser::BalancedTokenContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
}

CppParser::BalancedTokenSequenceContext* CppParser::BalancedTokenContext::balancedTokenSequence() {
  return getRuleContext<CppParser::BalancedTokenSequenceContext>(0);
}

tree::TerminalNode* CppParser::BalancedTokenContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
}

tree::TerminalNode* CppParser::BalancedTokenContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
}

tree::TerminalNode* CppParser::BalancedTokenContext::OpenBrace() {
  return getToken(CppParser::OpenBrace, 0);
}

tree::TerminalNode* CppParser::BalancedTokenContext::CloseBrace() {
  return getToken(CppParser::CloseBrace, 0);
}

CppParser::NonBalancedTokenContext* CppParser::BalancedTokenContext::nonBalancedToken() {
  return getRuleContext<CppParser::NonBalancedTokenContext>(0);
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


antlrcpp::Any CppParser::BalancedTokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitBalancedToken(this);
  else
    return visitor->visitChildren(this);
}

CppParser::BalancedTokenContext* CppParser::balancedToken() {
  BalancedTokenContext *_localctx = _tracker.createInstance<BalancedTokenContext>(_ctx, getState());
  enterRule(_localctx, 246, CppParser::RuleBalancedToken);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1653);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::OpenParenthesis: {
        enterOuterAlt(_localctx, 1);
        setState(1637);
        match(CppParser::OpenParenthesis);
        setState(1639);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::BlockComment)
          | (1ULL << CppParser::LineComment)
          | (1ULL << CppParser::Whitespace)
          | (1ULL << CppParser::Preprocessor)
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
          | (1ULL << CppParser::Char8)
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
          | (1ULL << CppParser::Template))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
          | (1ULL << (CppParser::ThreadLocal - 64))
          | (1ULL << (CppParser::Throw - 64))
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
          | (1ULL << (CppParser::OpenBrace - 64))
          | (1ULL << (CppParser::OpenBracket - 64))
          | (1ULL << (CppParser::OpenParenthesis - 64))
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
          | (1ULL << (CppParser::Comma - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (CppParser::ArrowAsterisk - 128))
          | (1ULL << (CppParser::Arrow - 128))
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
          setState(1638);
          balancedTokenSequence(0);
        }
        setState(1641);
        match(CppParser::CloseParenthesis);
        break;
      }

      case CppParser::OpenBracket: {
        enterOuterAlt(_localctx, 2);
        setState(1642);
        match(CppParser::OpenBracket);
        setState(1644);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::BlockComment)
          | (1ULL << CppParser::LineComment)
          | (1ULL << CppParser::Whitespace)
          | (1ULL << CppParser::Preprocessor)
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
          | (1ULL << CppParser::Char8)
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
          | (1ULL << CppParser::Template))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
          | (1ULL << (CppParser::ThreadLocal - 64))
          | (1ULL << (CppParser::Throw - 64))
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
          | (1ULL << (CppParser::OpenBrace - 64))
          | (1ULL << (CppParser::OpenBracket - 64))
          | (1ULL << (CppParser::OpenParenthesis - 64))
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
          | (1ULL << (CppParser::Comma - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (CppParser::ArrowAsterisk - 128))
          | (1ULL << (CppParser::Arrow - 128))
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
          setState(1643);
          balancedTokenSequence(0);
        }
        setState(1646);
        match(CppParser::CloseBracket);
        break;
      }

      case CppParser::OpenBrace: {
        enterOuterAlt(_localctx, 3);
        setState(1647);
        match(CppParser::OpenBrace);
        setState(1649);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::BlockComment)
          | (1ULL << CppParser::LineComment)
          | (1ULL << CppParser::Whitespace)
          | (1ULL << CppParser::Preprocessor)
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
          | (1ULL << CppParser::Char8)
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
          | (1ULL << CppParser::Template))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
          | (1ULL << (CppParser::ThreadLocal - 64))
          | (1ULL << (CppParser::Throw - 64))
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
          | (1ULL << (CppParser::OpenBrace - 64))
          | (1ULL << (CppParser::OpenBracket - 64))
          | (1ULL << (CppParser::OpenParenthesis - 64))
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
          | (1ULL << (CppParser::Comma - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 128)) & ((1ULL << (CppParser::ArrowAsterisk - 128))
          | (1ULL << (CppParser::Arrow - 128))
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
          setState(1648);
          balancedTokenSequence(0);
        }
        setState(1651);
        match(CppParser::CloseBrace);
        break;
      }

      case CppParser::BlockComment:
      case CppParser::LineComment:
      case CppParser::Whitespace:
      case CppParser::Preprocessor:
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
      case CppParser::Char8:
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
        setState(1652);
        nonBalancedToken();
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

//----------------- NonBalancedTokenContext ------------------------------------------------------------------

CppParser::NonBalancedTokenContext::NonBalancedTokenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CppParser::NonBalancedTokenContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

tree::TerminalNode* CppParser::NonBalancedTokenContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
}

tree::TerminalNode* CppParser::NonBalancedTokenContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
}

tree::TerminalNode* CppParser::NonBalancedTokenContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
}

tree::TerminalNode* CppParser::NonBalancedTokenContext::OpenBrace() {
  return getToken(CppParser::OpenBrace, 0);
}

tree::TerminalNode* CppParser::NonBalancedTokenContext::CloseBrace() {
  return getToken(CppParser::CloseBrace, 0);
}


size_t CppParser::NonBalancedTokenContext::getRuleIndex() const {
  return CppParser::RuleNonBalancedToken;
}

void CppParser::NonBalancedTokenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNonBalancedToken(this);
}

void CppParser::NonBalancedTokenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CppParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNonBalancedToken(this);
}


antlrcpp::Any CppParser::NonBalancedTokenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNonBalancedToken(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NonBalancedTokenContext* CppParser::nonBalancedToken() {
  NonBalancedTokenContext *_localctx = _tracker.createInstance<NonBalancedTokenContext>(_ctx, getState());
  enterRule(_localctx, 248, CppParser::RuleNonBalancedToken);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1655);
    _la = _input->LA(1);
    if (_la == 0 || _la == Token::EOF || (((((_la - 82) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 82)) & ((1ULL << (CppParser::OpenBrace - 82))
      | (1ULL << (CppParser::CloseBrace - 82))
      | (1ULL << (CppParser::OpenBracket - 82))
      | (1ULL << (CppParser::CloseBracket - 82))
      | (1ULL << (CppParser::OpenParenthesis - 82))
      | (1ULL << (CppParser::CloseParenthesis - 82)))) != 0))) {
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


antlrcpp::Any CppParser::InitializerDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitInitializerDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}


CppParser::InitializerDeclaratorListContext* CppParser::initializerDeclaratorList() {
   return initializerDeclaratorList(0);
}

CppParser::InitializerDeclaratorListContext* CppParser::initializerDeclaratorList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::InitializerDeclaratorListContext *_localctx = _tracker.createInstance<InitializerDeclaratorListContext>(_ctx, parentState);
  CppParser::InitializerDeclaratorListContext *previousContext = _localctx;
  size_t startState = 250;
  enterRecursionRule(_localctx, 250, CppParser::RuleInitializerDeclaratorList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1658);
    initializerDeclarator();
    _ctx->stop = _input->LT(-1);
    setState(1665);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 176, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerDeclaratorListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerDeclaratorList);
        setState(1660);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1661);
        match(CppParser::Comma);
        setState(1662);
        initializerDeclarator(); 
      }
      setState(1667);
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


antlrcpp::Any CppParser::InitializerDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitInitializerDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::InitializerDeclaratorContext* CppParser::initializerDeclarator() {
  InitializerDeclaratorContext *_localctx = _tracker.createInstance<InitializerDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 252, CppParser::RuleInitializerDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1668);
    declarator();
    setState(1670);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 177, _ctx)) {
    case 1: {
      setState(1669);
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


antlrcpp::Any CppParser::DeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DeclaratorContext* CppParser::declarator() {
  DeclaratorContext *_localctx = _tracker.createInstance<DeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 254, CppParser::RuleDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1674);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 178, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1672);
      pointerDeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1673);
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


antlrcpp::Any CppParser::PointerDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitPointerDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::PointerDeclaratorContext* CppParser::pointerDeclarator() {
  PointerDeclaratorContext *_localctx = _tracker.createInstance<PointerDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 256, CppParser::RulePointerDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1676);
    pointerOperator();
    setState(1677);
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

tree::TerminalNode* CppParser::NoPointerDeclaratorContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::PointerDeclaratorContext* CppParser::NoPointerDeclaratorContext::pointerDeclarator() {
  return getRuleContext<CppParser::PointerDeclaratorContext>(0);
}

tree::TerminalNode* CppParser::NoPointerDeclaratorContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
}

CppParser::NoPointerDeclaratorContext* CppParser::NoPointerDeclaratorContext::noPointerDeclarator() {
  return getRuleContext<CppParser::NoPointerDeclaratorContext>(0);
}

tree::TerminalNode* CppParser::NoPointerDeclaratorContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
}

tree::TerminalNode* CppParser::NoPointerDeclaratorContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
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


antlrcpp::Any CppParser::NoPointerDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNoPointerDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CppParser::NoPointerDeclaratorContext* CppParser::noPointerDeclarator() {
   return noPointerDeclarator(0);
}

CppParser::NoPointerDeclaratorContext* CppParser::noPointerDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::NoPointerDeclaratorContext *_localctx = _tracker.createInstance<NoPointerDeclaratorContext>(_ctx, parentState);
  CppParser::NoPointerDeclaratorContext *previousContext = _localctx;
  size_t startState = 258;
  enterRecursionRule(_localctx, 258, CppParser::RuleNoPointerDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1691);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::DeclType:
      case CppParser::Operator:
      case CppParser::Ellipsis:
      case CppParser::DoubleColon:
      case CppParser::Tilde:
      case CppParser::Identifier: {
        setState(1681);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CppParser::Ellipsis) {
          setState(1680);
          match(CppParser::Ellipsis);
        }
        setState(1683);
        identifierExpression();
        setState(1685);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 180, _ctx)) {
        case 1: {
          setState(1684);
          attributeSpecifierSequence(0);
          break;
        }

        }
        break;
      }

      case CppParser::OpenParenthesis: {
        setState(1687);
        match(CppParser::OpenParenthesis);
        setState(1688);
        pointerDeclarator();
        setState(1689);
        match(CppParser::CloseParenthesis);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(1706);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 185, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1704);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 184, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoPointerDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerDeclarator);
          setState(1693);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1694);
          match(CppParser::OpenBracket);
          setState(1696);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
            | (1ULL << CppParser::Auto)
            | (1ULL << CppParser::Bool)
            | (1ULL << CppParser::Char)
            | (1ULL << CppParser::Char8)
            | (1ULL << CppParser::Char16)
            | (1ULL << CppParser::Char32)
            | (1ULL << CppParser::ConstCast)
            | (1ULL << CppParser::DeclType)
            | (1ULL << CppParser::Delete)
            | (1ULL << CppParser::Double)
            | (1ULL << CppParser::DynamicCast)
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
            | (1ULL << CppParser::StaticCast))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
            | (1ULL << (CppParser::True - 64))
            | (1ULL << (CppParser::TypeId - 64))
            | (1ULL << (CppParser::TypeName - 64))
            | (1ULL << (CppParser::Unsigned - 64))
            | (1ULL << (CppParser::Void - 64))
            | (1ULL << (CppParser::WChar - 64))
            | (1ULL << (CppParser::OpenBracket - 64))
            | (1ULL << (CppParser::OpenParenthesis - 64))
            | (1ULL << (CppParser::DoubleColon - 64))
            | (1ULL << (CppParser::Plus - 64))
            | (1ULL << (CppParser::Minus - 64))
            | (1ULL << (CppParser::Asterisk - 64))
            | (1ULL << (CppParser::Ampersand - 64))
            | (1ULL << (CppParser::VerticalBar - 64))
            | (1ULL << (CppParser::Tilde - 64))
            | (1ULL << (CppParser::ExclamationMark - 64))
            | (1ULL << (CppParser::DoublePlus - 64))
            | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
            | (1ULL << (CppParser::IntegerLiteral - 130))
            | (1ULL << (CppParser::FloatingPointLiteral - 130))
            | (1ULL << (CppParser::CharacterLiteral - 130))
            | (1ULL << (CppParser::StringLiteral - 130))
            | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
            | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
            | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
            | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
            | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
            setState(1695);
            constantExpression();
          }
          setState(1698);
          match(CppParser::CloseBracket);
          setState(1700);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 183, _ctx)) {
          case 1: {
            setState(1699);
            attributeSpecifierSequence(0);
            break;
          }

          }
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoPointerDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerDeclarator);
          setState(1702);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1703);
          parametersAndQualifiers();
          break;
        }

        } 
      }
      setState(1708);
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


antlrcpp::Any CppParser::ParametersAndQualifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitParametersAndQualifiers(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ParametersAndQualifiersContext* CppParser::parametersAndQualifiers() {
  ParametersAndQualifiersContext *_localctx = _tracker.createInstance<ParametersAndQualifiersContext>(_ctx, getState());
  enterRule(_localctx, 260, CppParser::RuleParametersAndQualifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1709);
    functionParameters();
    setState(1710);
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

tree::TerminalNode* CppParser::FunctionParametersContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ParameterDeclarationClauseContext* CppParser::FunctionParametersContext::parameterDeclarationClause() {
  return getRuleContext<CppParser::ParameterDeclarationClauseContext>(0);
}

tree::TerminalNode* CppParser::FunctionParametersContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::FunctionParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitFunctionParameters(this);
  else
    return visitor->visitChildren(this);
}

CppParser::FunctionParametersContext* CppParser::functionParameters() {
  FunctionParametersContext *_localctx = _tracker.createInstance<FunctionParametersContext>(_ctx, getState());
  enterRule(_localctx, 262, CppParser::RuleFunctionParameters);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1712);
    match(CppParser::OpenParenthesis);
    setState(1713);
    parameterDeclarationClause();
    setState(1714);
    match(CppParser::CloseParenthesis);
   
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


antlrcpp::Any CppParser::FunctionQualifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitFunctionQualifiers(this);
  else
    return visitor->visitChildren(this);
}

CppParser::FunctionQualifiersContext* CppParser::functionQualifiers() {
  FunctionQualifiersContext *_localctx = _tracker.createInstance<FunctionQualifiersContext>(_ctx, getState());
  enterRule(_localctx, 264, CppParser::RuleFunctionQualifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1717);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 186, _ctx)) {
    case 1: {
      setState(1716);
      constVolatileQualifierSequence();
      break;
    }

    }
    setState(1720);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 187, _ctx)) {
    case 1: {
      setState(1719);
      referenceQualifier();
      break;
    }

    }
    setState(1723);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 188, _ctx)) {
    case 1: {
      setState(1722);
      noExceptionSpecifier();
      break;
    }

    }
    setState(1726);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 189, _ctx)) {
    case 1: {
      setState(1725);
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


antlrcpp::Any CppParser::TrailingReturnTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTrailingReturnType(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TrailingReturnTypeContext* CppParser::trailingReturnType() {
  TrailingReturnTypeContext *_localctx = _tracker.createInstance<TrailingReturnTypeContext>(_ctx, getState());
  enterRule(_localctx, 266, CppParser::RuleTrailingReturnType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1728);
    match(CppParser::Arrow);
    setState(1729);
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


antlrcpp::Any CppParser::PointerOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitPointerOperator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::PointerOperatorContext* CppParser::pointerOperator() {
  PointerOperatorContext *_localctx = _tracker.createInstance<PointerOperatorContext>(_ctx, getState());
  enterRule(_localctx, 268, CppParser::RulePointerOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1754);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Asterisk: {
        enterOuterAlt(_localctx, 1);
        setState(1731);
        match(CppParser::Asterisk);
        setState(1733);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 190, _ctx)) {
        case 1: {
          setState(1732);
          attributeSpecifierSequence(0);
          break;
        }

        }
        setState(1736);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 191, _ctx)) {
        case 1: {
          setState(1735);
          constVolatileQualifierSequence();
          break;
        }

        }
        break;
      }

      case CppParser::Ampersand: {
        enterOuterAlt(_localctx, 2);
        setState(1738);
        match(CppParser::Ampersand);
        setState(1740);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 192, _ctx)) {
        case 1: {
          setState(1739);
          attributeSpecifierSequence(0);
          break;
        }

        }
        break;
      }

      case CppParser::DoubleAmpersand: {
        enterOuterAlt(_localctx, 3);
        setState(1742);
        match(CppParser::DoubleAmpersand);
        setState(1744);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 193, _ctx)) {
        case 1: {
          setState(1743);
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
        setState(1746);
        nestedNameSpecifier();
        setState(1747);
        match(CppParser::Asterisk);
        setState(1749);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 194, _ctx)) {
        case 1: {
          setState(1748);
          attributeSpecifierSequence(0);
          break;
        }

        }
        setState(1752);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 195, _ctx)) {
        case 1: {
          setState(1751);
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


antlrcpp::Any CppParser::ConstVolatileQualifierSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitConstVolatileQualifierSequence(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ConstVolatileQualifierSequenceContext* CppParser::constVolatileQualifierSequence() {
  ConstVolatileQualifierSequenceContext *_localctx = _tracker.createInstance<ConstVolatileQualifierSequenceContext>(_ctx, getState());
  enterRule(_localctx, 270, CppParser::RuleConstVolatileQualifierSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1756);
    constVolatileQualifier();
    setState(1758);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 197, _ctx)) {
    case 1: {
      setState(1757);
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


antlrcpp::Any CppParser::ConstVolatileQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitConstVolatileQualifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ConstVolatileQualifierContext* CppParser::constVolatileQualifier() {
  ConstVolatileQualifierContext *_localctx = _tracker.createInstance<ConstVolatileQualifierContext>(_ctx, getState());
  enterRule(_localctx, 272, CppParser::RuleConstVolatileQualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1760);
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


antlrcpp::Any CppParser::ReferenceQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitReferenceQualifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ReferenceQualifierContext* CppParser::referenceQualifier() {
  ReferenceQualifierContext *_localctx = _tracker.createInstance<ReferenceQualifierContext>(_ctx, getState());
  enterRule(_localctx, 274, CppParser::RuleReferenceQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1762);
    match(CppParser::Ampersand);
    setState(1763);
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


antlrcpp::Any CppParser::TypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TypeIdentifierContext* CppParser::typeIdentifier() {
  TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 276, CppParser::RuleTypeIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1765);
    typeSpecifierSequence();
    setState(1767);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 198, _ctx)) {
    case 1: {
      setState(1766);
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


antlrcpp::Any CppParser::DefiningTypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDefiningTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DefiningTypeIdentifierContext* CppParser::definingTypeIdentifier() {
  DefiningTypeIdentifierContext *_localctx = _tracker.createInstance<DefiningTypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 278, CppParser::RuleDefiningTypeIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1769);
    definingTypeSpecifierSequence();
    setState(1771);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::DeclType || ((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & ((1ULL << (CppParser::OpenBracket - 84))
      | (1ULL << (CppParser::OpenParenthesis - 84))
      | (1ULL << (CppParser::Ellipsis - 84))
      | (1ULL << (CppParser::DoubleColon - 84))
      | (1ULL << (CppParser::Asterisk - 84))
      | (1ULL << (CppParser::Ampersand - 84))
      | (1ULL << (CppParser::DoubleAmpersand - 84))
      | (1ULL << (CppParser::Identifier - 84)))) != 0)) {
      setState(1770);
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


antlrcpp::Any CppParser::AbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AbstractDeclaratorContext* CppParser::abstractDeclarator() {
  AbstractDeclaratorContext *_localctx = _tracker.createInstance<AbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 280, CppParser::RuleAbstractDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1781);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 201, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1773);
      pointerAbstractDeclarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1775);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 200, _ctx)) {
      case 1: {
        setState(1774);
        noPointerAbstractDeclarator(0);
        break;
      }

      }
      setState(1777);
      parametersAndQualifiers();
      setState(1778);
      trailingReturnType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1780);
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


antlrcpp::Any CppParser::PointerAbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitPointerAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::PointerAbstractDeclaratorContext* CppParser::pointerAbstractDeclarator() {
  PointerAbstractDeclaratorContext *_localctx = _tracker.createInstance<PointerAbstractDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 282, CppParser::RulePointerAbstractDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1788);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::OpenBracket:
      case CppParser::OpenParenthesis: {
        enterOuterAlt(_localctx, 1);
        setState(1783);
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
        setState(1784);
        pointerOperator();
        setState(1786);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 202, _ctx)) {
        case 1: {
          setState(1785);
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

tree::TerminalNode* CppParser::NoPointerAbstractDeclaratorContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
}

tree::TerminalNode* CppParser::NoPointerAbstractDeclaratorContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
}

CppParser::ConstantExpressionContext* CppParser::NoPointerAbstractDeclaratorContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::NoPointerAbstractDeclaratorContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
}

tree::TerminalNode* CppParser::NoPointerAbstractDeclaratorContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::PointerAbstractDeclaratorContext* CppParser::NoPointerAbstractDeclaratorContext::pointerAbstractDeclarator() {
  return getRuleContext<CppParser::PointerAbstractDeclaratorContext>(0);
}

tree::TerminalNode* CppParser::NoPointerAbstractDeclaratorContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::NoPointerAbstractDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNoPointerAbstractDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CppParser::NoPointerAbstractDeclaratorContext* CppParser::noPointerAbstractDeclarator() {
   return noPointerAbstractDeclarator(0);
}

CppParser::NoPointerAbstractDeclaratorContext* CppParser::noPointerAbstractDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::NoPointerAbstractDeclaratorContext *_localctx = _tracker.createInstance<NoPointerAbstractDeclaratorContext>(_ctx, parentState);
  CppParser::NoPointerAbstractDeclaratorContext *previousContext = _localctx;
  size_t startState = 284;
  enterRecursionRule(_localctx, 284, CppParser::RuleNoPointerAbstractDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1804);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 206, _ctx)) {
    case 1: {
      setState(1791);
      parametersAndQualifiers();
      break;
    }

    case 2: {
      setState(1792);
      match(CppParser::OpenBracket);
      setState(1794);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char8)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::ConstCast)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Delete)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::DynamicCast)
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
        | (1ULL << CppParser::StaticCast))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
        | (1ULL << (CppParser::True - 64))
        | (1ULL << (CppParser::TypeId - 64))
        | (1ULL << (CppParser::TypeName - 64))
        | (1ULL << (CppParser::Unsigned - 64))
        | (1ULL << (CppParser::Void - 64))
        | (1ULL << (CppParser::WChar - 64))
        | (1ULL << (CppParser::OpenBracket - 64))
        | (1ULL << (CppParser::OpenParenthesis - 64))
        | (1ULL << (CppParser::DoubleColon - 64))
        | (1ULL << (CppParser::Plus - 64))
        | (1ULL << (CppParser::Minus - 64))
        | (1ULL << (CppParser::Asterisk - 64))
        | (1ULL << (CppParser::Ampersand - 64))
        | (1ULL << (CppParser::VerticalBar - 64))
        | (1ULL << (CppParser::Tilde - 64))
        | (1ULL << (CppParser::ExclamationMark - 64))
        | (1ULL << (CppParser::DoublePlus - 64))
        | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
        | (1ULL << (CppParser::IntegerLiteral - 130))
        | (1ULL << (CppParser::FloatingPointLiteral - 130))
        | (1ULL << (CppParser::CharacterLiteral - 130))
        | (1ULL << (CppParser::StringLiteral - 130))
        | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
        | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
        | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
        | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
        | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
        setState(1793);
        constantExpression();
      }
      setState(1796);
      match(CppParser::CloseBracket);
      setState(1798);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 205, _ctx)) {
      case 1: {
        setState(1797);
        attributeSpecifierSequence(0);
        break;
      }

      }
      break;
    }

    case 3: {
      setState(1800);
      match(CppParser::OpenParenthesis);
      setState(1801);
      pointerAbstractDeclarator();
      setState(1802);
      match(CppParser::CloseParenthesis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1819);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 210, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1817);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 209, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoPointerAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractDeclarator);
          setState(1806);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(1807);
          parametersAndQualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoPointerAbstractDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractDeclarator);
          setState(1808);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1809);
          match(CppParser::OpenBracket);
          setState(1811);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
            | (1ULL << CppParser::Auto)
            | (1ULL << CppParser::Bool)
            | (1ULL << CppParser::Char)
            | (1ULL << CppParser::Char8)
            | (1ULL << CppParser::Char16)
            | (1ULL << CppParser::Char32)
            | (1ULL << CppParser::ConstCast)
            | (1ULL << CppParser::DeclType)
            | (1ULL << CppParser::Delete)
            | (1ULL << CppParser::Double)
            | (1ULL << CppParser::DynamicCast)
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
            | (1ULL << CppParser::StaticCast))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
            | (1ULL << (CppParser::True - 64))
            | (1ULL << (CppParser::TypeId - 64))
            | (1ULL << (CppParser::TypeName - 64))
            | (1ULL << (CppParser::Unsigned - 64))
            | (1ULL << (CppParser::Void - 64))
            | (1ULL << (CppParser::WChar - 64))
            | (1ULL << (CppParser::OpenBracket - 64))
            | (1ULL << (CppParser::OpenParenthesis - 64))
            | (1ULL << (CppParser::DoubleColon - 64))
            | (1ULL << (CppParser::Plus - 64))
            | (1ULL << (CppParser::Minus - 64))
            | (1ULL << (CppParser::Asterisk - 64))
            | (1ULL << (CppParser::Ampersand - 64))
            | (1ULL << (CppParser::VerticalBar - 64))
            | (1ULL << (CppParser::Tilde - 64))
            | (1ULL << (CppParser::ExclamationMark - 64))
            | (1ULL << (CppParser::DoublePlus - 64))
            | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
            | (1ULL << (CppParser::IntegerLiteral - 130))
            | (1ULL << (CppParser::FloatingPointLiteral - 130))
            | (1ULL << (CppParser::CharacterLiteral - 130))
            | (1ULL << (CppParser::StringLiteral - 130))
            | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
            | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
            | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
            | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
            | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
            setState(1810);
            constantExpression();
          }
          setState(1813);
          match(CppParser::CloseBracket);
          setState(1815);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 208, _ctx)) {
          case 1: {
            setState(1814);
            attributeSpecifierSequence(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1821);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 210, _ctx);
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


antlrcpp::Any CppParser::AbstractPackDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAbstractPackDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AbstractPackDeclaratorContext* CppParser::abstractPackDeclarator() {
  AbstractPackDeclaratorContext *_localctx = _tracker.createInstance<AbstractPackDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 286, CppParser::RuleAbstractPackDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1826);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Ellipsis: {
        enterOuterAlt(_localctx, 1);
        setState(1822);
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
        setState(1823);
        pointerOperator();
        setState(1824);
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

tree::TerminalNode* CppParser::NoPointerAbstractPackDeclaratorContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
}

tree::TerminalNode* CppParser::NoPointerAbstractPackDeclaratorContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
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


antlrcpp::Any CppParser::NoPointerAbstractPackDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNoPointerAbstractPackDeclarator(this);
  else
    return visitor->visitChildren(this);
}


CppParser::NoPointerAbstractPackDeclaratorContext* CppParser::noPointerAbstractPackDeclarator() {
   return noPointerAbstractPackDeclarator(0);
}

CppParser::NoPointerAbstractPackDeclaratorContext* CppParser::noPointerAbstractPackDeclarator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::NoPointerAbstractPackDeclaratorContext *_localctx = _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(_ctx, parentState);
  CppParser::NoPointerAbstractPackDeclaratorContext *previousContext = _localctx;
  size_t startState = 288;
  enterRecursionRule(_localctx, 288, CppParser::RuleNoPointerAbstractPackDeclarator, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1829);
    match(CppParser::Ellipsis);
    _ctx->stop = _input->LT(-1);
    setState(1844);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 215, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(1842);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 214, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractPackDeclarator);
          setState(1831);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(1832);
          parametersAndQualifiers();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<NoPointerAbstractPackDeclaratorContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleNoPointerAbstractPackDeclarator);
          setState(1833);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(1834);
          match(CppParser::OpenBracket);
          setState(1836);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
            | (1ULL << CppParser::Auto)
            | (1ULL << CppParser::Bool)
            | (1ULL << CppParser::Char)
            | (1ULL << CppParser::Char8)
            | (1ULL << CppParser::Char16)
            | (1ULL << CppParser::Char32)
            | (1ULL << CppParser::ConstCast)
            | (1ULL << CppParser::DeclType)
            | (1ULL << CppParser::Delete)
            | (1ULL << CppParser::Double)
            | (1ULL << CppParser::DynamicCast)
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
            | (1ULL << CppParser::StaticCast))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
            | (1ULL << (CppParser::True - 64))
            | (1ULL << (CppParser::TypeId - 64))
            | (1ULL << (CppParser::TypeName - 64))
            | (1ULL << (CppParser::Unsigned - 64))
            | (1ULL << (CppParser::Void - 64))
            | (1ULL << (CppParser::WChar - 64))
            | (1ULL << (CppParser::OpenBracket - 64))
            | (1ULL << (CppParser::OpenParenthesis - 64))
            | (1ULL << (CppParser::DoubleColon - 64))
            | (1ULL << (CppParser::Plus - 64))
            | (1ULL << (CppParser::Minus - 64))
            | (1ULL << (CppParser::Asterisk - 64))
            | (1ULL << (CppParser::Ampersand - 64))
            | (1ULL << (CppParser::VerticalBar - 64))
            | (1ULL << (CppParser::Tilde - 64))
            | (1ULL << (CppParser::ExclamationMark - 64))
            | (1ULL << (CppParser::DoublePlus - 64))
            | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
            | (1ULL << (CppParser::IntegerLiteral - 130))
            | (1ULL << (CppParser::FloatingPointLiteral - 130))
            | (1ULL << (CppParser::CharacterLiteral - 130))
            | (1ULL << (CppParser::StringLiteral - 130))
            | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
            | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
            | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
            | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
            | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
            setState(1835);
            constantExpression();
          }
          setState(1838);
          match(CppParser::CloseBracket);
          setState(1840);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 213, _ctx)) {
          case 1: {
            setState(1839);
            attributeSpecifierSequence(0);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(1846);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 215, _ctx);
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


antlrcpp::Any CppParser::ParameterDeclarationClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitParameterDeclarationClause(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ParameterDeclarationClauseContext* CppParser::parameterDeclarationClause() {
  ParameterDeclarationClauseContext *_localctx = _tracker.createInstance<ParameterDeclarationClauseContext>(_ctx, getState());
  enterRule(_localctx, 290, CppParser::RuleParameterDeclarationClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1857);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 218, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1848);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char8)
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
        | (1ULL << CppParser::Struct))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (CppParser::ThreadLocal - 65))
        | (1ULL << (CppParser::TypeDef - 65))
        | (1ULL << (CppParser::TypeName - 65))
        | (1ULL << (CppParser::Union - 65))
        | (1ULL << (CppParser::Unsigned - 65))
        | (1ULL << (CppParser::Virtual - 65))
        | (1ULL << (CppParser::Void - 65))
        | (1ULL << (CppParser::Volatile - 65))
        | (1ULL << (CppParser::WChar - 65))
        | (1ULL << (CppParser::OpenBracket - 65))
        | (1ULL << (CppParser::DoubleColon - 65)))) != 0) || _la == CppParser::Identifier) {
        setState(1847);
        parameterDeclarationList(0);
      }
      setState(1851);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Ellipsis) {
        setState(1850);
        match(CppParser::Ellipsis);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1853);
      parameterDeclarationList(0);
      setState(1854);
      match(CppParser::Comma);
      setState(1855);
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


antlrcpp::Any CppParser::ParameterDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitParameterDeclarationList(this);
  else
    return visitor->visitChildren(this);
}


CppParser::ParameterDeclarationListContext* CppParser::parameterDeclarationList() {
   return parameterDeclarationList(0);
}

CppParser::ParameterDeclarationListContext* CppParser::parameterDeclarationList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::ParameterDeclarationListContext *_localctx = _tracker.createInstance<ParameterDeclarationListContext>(_ctx, parentState);
  CppParser::ParameterDeclarationListContext *previousContext = _localctx;
  size_t startState = 292;
  enterRecursionRule(_localctx, 292, CppParser::RuleParameterDeclarationList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1860);
    parameterDeclaration();
    _ctx->stop = _input->LT(-1);
    setState(1867);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 219, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ParameterDeclarationListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleParameterDeclarationList);
        setState(1862);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1863);
        match(CppParser::Comma);
        setState(1864);
        parameterDeclaration(); 
      }
      setState(1869);
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


antlrcpp::Any CppParser::ParameterDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitParameterDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ParameterDeclarationContext* CppParser::parameterDeclaration() {
  ParameterDeclarationContext *_localctx = _tracker.createInstance<ParameterDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 294, CppParser::RuleParameterDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1884);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 222, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1871);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(1870);
        attributeSpecifierSequence(0);
      }
      setState(1873);
      declarationSpecifierSequence();
      setState(1874);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1877);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(1876);
        attributeSpecifierSequence(0);
      }
      setState(1879);
      declarationSpecifierSequence();
      setState(1880);
      declarator();
      setState(1881);
      match(CppParser::Equal);
      setState(1882);
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


antlrcpp::Any CppParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

CppParser::FunctionDefinitionContext* CppParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 296, CppParser::RuleFunctionDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1887);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
      setState(1886);
      attributeSpecifierSequence(0);
    }
    setState(1890);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 224, _ctx)) {
    case 1: {
      setState(1889);
      declarationSpecifierSequence();
      break;
    }

    }
    setState(1892);
    functionDeclarator();
    setState(1894);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Override

    || _la == CppParser::Final) {
      setState(1893);
      virtualSpecifierSequence(0);
    }
    setState(1896);
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


antlrcpp::Any CppParser::FunctionDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::FunctionDeclaratorContext* CppParser::functionDeclarator() {
  FunctionDeclaratorContext *_localctx = _tracker.createInstance<FunctionDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 298, CppParser::RuleFunctionDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1898);
    identifierExpression();
    setState(1899);
    functionParameters();
    setState(1900);
    functionQualifiers();
    setState(1902);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Arrow) {
      setState(1901);
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


antlrcpp::Any CppParser::FunctionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitFunctionBody(this);
  else
    return visitor->visitChildren(this);
}

CppParser::FunctionBodyContext* CppParser::functionBody() {
  FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 300, CppParser::RuleFunctionBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1908);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 227, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1904);
      regularFunctionBody();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1905);
      functionTryBlock();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1906);
      explicitlyDefaultedFunction();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1907);
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


antlrcpp::Any CppParser::RegularFunctionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitRegularFunctionBody(this);
  else
    return visitor->visitChildren(this);
}

CppParser::RegularFunctionBodyContext* CppParser::regularFunctionBody() {
  RegularFunctionBodyContext *_localctx = _tracker.createInstance<RegularFunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 302, CppParser::RuleRegularFunctionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1911);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Colon) {
      setState(1910);
      constructorInitializer();
    }
    setState(1913);
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


antlrcpp::Any CppParser::ExplicitlyDefaultedFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitExplicitlyDefaultedFunction(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ExplicitlyDefaultedFunctionContext* CppParser::explicitlyDefaultedFunction() {
  ExplicitlyDefaultedFunctionContext *_localctx = _tracker.createInstance<ExplicitlyDefaultedFunctionContext>(_ctx, getState());
  enterRule(_localctx, 304, CppParser::RuleExplicitlyDefaultedFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1915);
    match(CppParser::Equal);
    setState(1916);
    match(CppParser::Default);
    setState(1917);
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


antlrcpp::Any CppParser::DeletedFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDeletedFunction(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DeletedFunctionContext* CppParser::deletedFunction() {
  DeletedFunctionContext *_localctx = _tracker.createInstance<DeletedFunctionContext>(_ctx, getState());
  enterRule(_localctx, 306, CppParser::RuleDeletedFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1919);
    match(CppParser::Equal);
    setState(1920);
    match(CppParser::Delete);
    setState(1921);
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


antlrcpp::Any CppParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

CppParser::InitializerContext* CppParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 308, CppParser::RuleInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1923);
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


antlrcpp::Any CppParser::BraceOrEqualInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitBraceOrEqualInitializer(this);
  else
    return visitor->visitChildren(this);
}

CppParser::BraceOrEqualInitializerContext* CppParser::braceOrEqualInitializer() {
  BraceOrEqualInitializerContext *_localctx = _tracker.createInstance<BraceOrEqualInitializerContext>(_ctx, getState());
  enterRule(_localctx, 310, CppParser::RuleBraceOrEqualInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1928);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Equal: {
        enterOuterAlt(_localctx, 1);
        setState(1925);
        match(CppParser::Equal);
        setState(1926);
        initializerClause();
        break;
      }

      case CppParser::OpenBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1927);
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


antlrcpp::Any CppParser::InitializerClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitInitializerClause(this);
  else
    return visitor->visitChildren(this);
}

CppParser::InitializerClauseContext* CppParser::initializerClause() {
  InitializerClauseContext *_localctx = _tracker.createInstance<InitializerClauseContext>(_ctx, getState());
  enterRule(_localctx, 312, CppParser::RuleInitializerClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1932);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::AlignOf:
      case CppParser::Auto:
      case CppParser::Bool:
      case CppParser::Char:
      case CppParser::Char8:
      case CppParser::Char16:
      case CppParser::Char32:
      case CppParser::ConstCast:
      case CppParser::DeclType:
      case CppParser::Delete:
      case CppParser::Double:
      case CppParser::DynamicCast:
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
      case CppParser::This:
      case CppParser::Throw:
      case CppParser::True:
      case CppParser::TypeId:
      case CppParser::TypeName:
      case CppParser::Unsigned:
      case CppParser::Void:
      case CppParser::WChar:
      case CppParser::OpenBracket:
      case CppParser::OpenParenthesis:
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
        setState(1930);
        assignmentExpression();
        break;
      }

      case CppParser::OpenBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1931);
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


antlrcpp::Any CppParser::InitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitInitializerList(this);
  else
    return visitor->visitChildren(this);
}


CppParser::InitializerListContext* CppParser::initializerList() {
   return initializerList(0);
}

CppParser::InitializerListContext* CppParser::initializerList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, parentState);
  CppParser::InitializerListContext *previousContext = _localctx;
  size_t startState = 314;
  enterRecursionRule(_localctx, 314, CppParser::RuleInitializerList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1935);
    initializerClause();
    setState(1937);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 231, _ctx)) {
    case 1: {
      setState(1936);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(1947);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<InitializerListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleInitializerList);
        setState(1939);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(1940);
        match(CppParser::Comma);
        setState(1941);
        initializerClause();
        setState(1943);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 232, _ctx)) {
        case 1: {
          setState(1942);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(1949);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 233, _ctx);
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

tree::TerminalNode* CppParser::BracedInitializerListContext::OpenBrace() {
  return getToken(CppParser::OpenBrace, 0);
}

CppParser::InitializerListContext* CppParser::BracedInitializerListContext::initializerList() {
  return getRuleContext<CppParser::InitializerListContext>(0);
}

tree::TerminalNode* CppParser::BracedInitializerListContext::CloseBrace() {
  return getToken(CppParser::CloseBrace, 0);
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


antlrcpp::Any CppParser::BracedInitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitBracedInitializerList(this);
  else
    return visitor->visitChildren(this);
}

CppParser::BracedInitializerListContext* CppParser::bracedInitializerList() {
  BracedInitializerListContext *_localctx = _tracker.createInstance<BracedInitializerListContext>(_ctx, getState());
  enterRule(_localctx, 316, CppParser::RuleBracedInitializerList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1959);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 235, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1950);
      match(CppParser::OpenBrace);
      setState(1951);
      initializerList(0);
      setState(1953);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Comma) {
        setState(1952);
        match(CppParser::Comma);
      }
      setState(1955);
      match(CppParser::CloseBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1957);
      match(CppParser::OpenBrace);
      setState(1958);
      match(CppParser::CloseBrace);
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


antlrcpp::Any CppParser::ExpressionOrBracedInitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitExpressionOrBracedInitializerList(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ExpressionOrBracedInitializerListContext* CppParser::expressionOrBracedInitializerList() {
  ExpressionOrBracedInitializerListContext *_localctx = _tracker.createInstance<ExpressionOrBracedInitializerListContext>(_ctx, getState());
  enterRule(_localctx, 318, CppParser::RuleExpressionOrBracedInitializerList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1963);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::AlignOf:
      case CppParser::Auto:
      case CppParser::Bool:
      case CppParser::Char:
      case CppParser::Char8:
      case CppParser::Char16:
      case CppParser::Char32:
      case CppParser::ConstCast:
      case CppParser::DeclType:
      case CppParser::Delete:
      case CppParser::Double:
      case CppParser::DynamicCast:
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
      case CppParser::This:
      case CppParser::Throw:
      case CppParser::True:
      case CppParser::TypeId:
      case CppParser::TypeName:
      case CppParser::Unsigned:
      case CppParser::Void:
      case CppParser::WChar:
      case CppParser::OpenBracket:
      case CppParser::OpenParenthesis:
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
        setState(1961);
        expression(0);
        break;
      }

      case CppParser::OpenBrace: {
        enterOuterAlt(_localctx, 2);
        setState(1962);
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

tree::TerminalNode* CppParser::ClassSpecifierContext::OpenBrace() {
  return getToken(CppParser::OpenBrace, 0);
}

tree::TerminalNode* CppParser::ClassSpecifierContext::CloseBrace() {
  return getToken(CppParser::CloseBrace, 0);
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


antlrcpp::Any CppParser::ClassSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitClassSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ClassSpecifierContext* CppParser::classSpecifier() {
  ClassSpecifierContext *_localctx = _tracker.createInstance<ClassSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 320, CppParser::RuleClassSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1965);
    classHead();
    setState(1966);
    match(CppParser::OpenBrace);
    setState(1968);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
      | (1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char8)
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
      | (1ULL << CppParser::Template))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (CppParser::ThreadLocal - 65))
      | (1ULL << (CppParser::TypeDef - 65))
      | (1ULL << (CppParser::TypeName - 65))
      | (1ULL << (CppParser::Union - 65))
      | (1ULL << (CppParser::Unsigned - 65))
      | (1ULL << (CppParser::Using - 65))
      | (1ULL << (CppParser::Virtual - 65))
      | (1ULL << (CppParser::Void - 65))
      | (1ULL << (CppParser::Volatile - 65))
      | (1ULL << (CppParser::WChar - 65))
      | (1ULL << (CppParser::OpenBracket - 65))
      | (1ULL << (CppParser::Semicolon - 65))
      | (1ULL << (CppParser::DoubleColon - 65))
      | (1ULL << (CppParser::Tilde - 65)))) != 0) || _la == CppParser::Identifier) {
      setState(1967);
      memberSpecification();
    }
    setState(1970);
    match(CppParser::CloseBrace);
   
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


antlrcpp::Any CppParser::ClassHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitClassHead(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ClassHeadContext* CppParser::classHead() {
  ClassHeadContext *_localctx = _tracker.createInstance<ClassHeadContext>(_ctx, getState());
  enterRule(_localctx, 322, CppParser::RuleClassHead);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1990);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 243, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1972);
      classKey();
      setState(1974);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(1973);
        attributeSpecifierSequence(0);
      }
      setState(1976);
      classHeadName();
      setState(1978);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Final) {
        setState(1977);
        classVirtualSpecifier();
      }
      setState(1981);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Colon) {
        setState(1980);
        baseClause();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1983);
      classKey();
      setState(1985);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(1984);
        attributeSpecifier();
      }
      setState(1988);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Colon) {
        setState(1987);
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


antlrcpp::Any CppParser::ClassHeadNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitClassHeadName(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ClassHeadNameContext* CppParser::classHeadName() {
  ClassHeadNameContext *_localctx = _tracker.createInstance<ClassHeadNameContext>(_ctx, getState());
  enterRule(_localctx, 324, CppParser::RuleClassHeadName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1993);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 244, _ctx)) {
    case 1: {
      setState(1992);
      nestedNameSpecifier();
      break;
    }

    }
    setState(1995);
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


antlrcpp::Any CppParser::ClassVirtualSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitClassVirtualSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ClassVirtualSpecifierContext* CppParser::classVirtualSpecifier() {
  ClassVirtualSpecifierContext *_localctx = _tracker.createInstance<ClassVirtualSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 326, CppParser::RuleClassVirtualSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1997);
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


antlrcpp::Any CppParser::ClassKeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitClassKey(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ClassKeyContext* CppParser::classKey() {
  ClassKeyContext *_localctx = _tracker.createInstance<ClassKeyContext>(_ctx, getState());
  enterRule(_localctx, 328, CppParser::RuleClassKey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1999);
    _la = _input->LA(1);
    if (!(((((_la - 18) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 18)) & ((1ULL << (CppParser::Class - 18))
      | (1ULL << (CppParser::Struct - 18))
      | (1ULL << (CppParser::Union - 18)))) != 0))) {
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


antlrcpp::Any CppParser::MemberSpecificationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitMemberSpecification(this);
  else
    return visitor->visitChildren(this);
}

CppParser::MemberSpecificationContext* CppParser::memberSpecification() {
  MemberSpecificationContext *_localctx = _tracker.createInstance<MemberSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 330, CppParser::RuleMemberSpecification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2010);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::AlignAs:
      case CppParser::Auto:
      case CppParser::Bool:
      case CppParser::Char:
      case CppParser::Char8:
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
      case CppParser::OpenBracket:
      case CppParser::Semicolon:
      case CppParser::DoubleColon:
      case CppParser::Tilde:
      case CppParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(2001);
        memberDeclaration();
        setState(2003);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
          | (1ULL << CppParser::Auto)
          | (1ULL << CppParser::Bool)
          | (1ULL << CppParser::Char)
          | (1ULL << CppParser::Char8)
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
          | (1ULL << CppParser::Template))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (CppParser::ThreadLocal - 65))
          | (1ULL << (CppParser::TypeDef - 65))
          | (1ULL << (CppParser::TypeName - 65))
          | (1ULL << (CppParser::Union - 65))
          | (1ULL << (CppParser::Unsigned - 65))
          | (1ULL << (CppParser::Using - 65))
          | (1ULL << (CppParser::Virtual - 65))
          | (1ULL << (CppParser::Void - 65))
          | (1ULL << (CppParser::Volatile - 65))
          | (1ULL << (CppParser::WChar - 65))
          | (1ULL << (CppParser::OpenBracket - 65))
          | (1ULL << (CppParser::Semicolon - 65))
          | (1ULL << (CppParser::DoubleColon - 65))
          | (1ULL << (CppParser::Tilde - 65)))) != 0) || _la == CppParser::Identifier) {
          setState(2002);
          memberSpecification();
        }
        break;
      }

      case CppParser::Private:
      case CppParser::Protected:
      case CppParser::Public: {
        enterOuterAlt(_localctx, 2);
        setState(2005);
        accessSpecifier();
        setState(2006);
        match(CppParser::Colon);
        setState(2008);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << CppParser::AlignAs)
          | (1ULL << CppParser::Auto)
          | (1ULL << CppParser::Bool)
          | (1ULL << CppParser::Char)
          | (1ULL << CppParser::Char8)
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
          | (1ULL << CppParser::Template))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 65)) & ((1ULL << (CppParser::ThreadLocal - 65))
          | (1ULL << (CppParser::TypeDef - 65))
          | (1ULL << (CppParser::TypeName - 65))
          | (1ULL << (CppParser::Union - 65))
          | (1ULL << (CppParser::Unsigned - 65))
          | (1ULL << (CppParser::Using - 65))
          | (1ULL << (CppParser::Virtual - 65))
          | (1ULL << (CppParser::Void - 65))
          | (1ULL << (CppParser::Volatile - 65))
          | (1ULL << (CppParser::WChar - 65))
          | (1ULL << (CppParser::OpenBracket - 65))
          | (1ULL << (CppParser::Semicolon - 65))
          | (1ULL << (CppParser::DoubleColon - 65))
          | (1ULL << (CppParser::Tilde - 65)))) != 0) || _la == CppParser::Identifier) {
          setState(2007);
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

CppParser::DeclarationSpecifierSequenceContext* CppParser::MemberDeclarationContext::declarationSpecifierSequence() {
  return getRuleContext<CppParser::DeclarationSpecifierSequenceContext>(0);
}

CppParser::MemberDeclaratorListContext* CppParser::MemberDeclarationContext::memberDeclaratorList() {
  return getRuleContext<CppParser::MemberDeclaratorListContext>(0);
}

tree::TerminalNode* CppParser::MemberDeclarationContext::Semicolon() {
  return getToken(CppParser::Semicolon, 0);
}

CppParser::AttributeSpecifierSequenceContext* CppParser::MemberDeclarationContext::attributeSpecifierSequence() {
  return getRuleContext<CppParser::AttributeSpecifierSequenceContext>(0);
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


antlrcpp::Any CppParser::MemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::MemberDeclarationContext* CppParser::memberDeclaration() {
  MemberDeclarationContext *_localctx = _tracker.createInstance<MemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 332, CppParser::RuleMemberDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2026);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 249, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2013);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(2012);
        attributeSpecifierSequence(0);
      }
      setState(2015);
      declarationSpecifierSequence();
      setState(2016);
      memberDeclaratorList(0);
      setState(2017);
      match(CppParser::Semicolon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2019);
      functionDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2020);
      usingDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2021);
      staticAssertDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2022);
      templateDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2023);
      deductionGuide();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2024);
      aliasDeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2025);
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


antlrcpp::Any CppParser::MemberDeclaratorListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitMemberDeclaratorList(this);
  else
    return visitor->visitChildren(this);
}


CppParser::MemberDeclaratorListContext* CppParser::memberDeclaratorList() {
   return memberDeclaratorList(0);
}

CppParser::MemberDeclaratorListContext* CppParser::memberDeclaratorList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::MemberDeclaratorListContext *_localctx = _tracker.createInstance<MemberDeclaratorListContext>(_ctx, parentState);
  CppParser::MemberDeclaratorListContext *previousContext = _localctx;
  size_t startState = 334;
  enterRecursionRule(_localctx, 334, CppParser::RuleMemberDeclaratorList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2029);
    memberDeclarator();
    _ctx->stop = _input->LT(-1);
    setState(2036);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MemberDeclaratorListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMemberDeclaratorList);
        setState(2031);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2032);
        match(CppParser::Comma);
        setState(2033);
        memberDeclarator(); 
      }
      setState(2038);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 250, _ctx);
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


antlrcpp::Any CppParser::MemberDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitMemberDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::MemberDeclaratorContext* CppParser::memberDeclarator() {
  MemberDeclaratorContext *_localctx = _tracker.createInstance<MemberDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 336, CppParser::RuleMemberDeclarator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2054);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 254, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2039);
      declarator();
      setState(2041);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 251, _ctx)) {
      case 1: {
        setState(2040);
        virtualSpecifierSequence(0);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2043);
      declarator();
      setState(2044);
      braceOrEqualInitializer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2047);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Identifier) {
        setState(2046);
        match(CppParser::Identifier);
      }
      setState(2050);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(2049);
        attributeSpecifierSequence(0);
      }
      setState(2052);
      match(CppParser::Colon);
      setState(2053);
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


antlrcpp::Any CppParser::VirtualSpecifierSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitVirtualSpecifierSequence(this);
  else
    return visitor->visitChildren(this);
}


CppParser::VirtualSpecifierSequenceContext* CppParser::virtualSpecifierSequence() {
   return virtualSpecifierSequence(0);
}

CppParser::VirtualSpecifierSequenceContext* CppParser::virtualSpecifierSequence(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::VirtualSpecifierSequenceContext *_localctx = _tracker.createInstance<VirtualSpecifierSequenceContext>(_ctx, parentState);
  CppParser::VirtualSpecifierSequenceContext *previousContext = _localctx;
  size_t startState = 338;
  enterRecursionRule(_localctx, 338, CppParser::RuleVirtualSpecifierSequence, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2057);
    virtualSpecifier();
    _ctx->stop = _input->LT(-1);
    setState(2063);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 255, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<VirtualSpecifierSequenceContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleVirtualSpecifierSequence);
        setState(2059);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2060);
        virtualSpecifier(); 
      }
      setState(2065);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 255, _ctx);
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


antlrcpp::Any CppParser::VirtualSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitVirtualSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::VirtualSpecifierContext* CppParser::virtualSpecifier() {
  VirtualSpecifierContext *_localctx = _tracker.createInstance<VirtualSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 340, CppParser::RuleVirtualSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2066);
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


antlrcpp::Any CppParser::PureSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitPureSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::PureSpecifierContext* CppParser::pureSpecifier() {
  PureSpecifierContext *_localctx = _tracker.createInstance<PureSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 342, CppParser::RulePureSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2068);
    match(CppParser::Equal);
    setState(2069);
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


antlrcpp::Any CppParser::BaseClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitBaseClause(this);
  else
    return visitor->visitChildren(this);
}

CppParser::BaseClauseContext* CppParser::baseClause() {
  BaseClauseContext *_localctx = _tracker.createInstance<BaseClauseContext>(_ctx, getState());
  enterRule(_localctx, 344, CppParser::RuleBaseClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2071);
    match(CppParser::Colon);
    setState(2072);
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


antlrcpp::Any CppParser::BaseSpecifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitBaseSpecifierList(this);
  else
    return visitor->visitChildren(this);
}


CppParser::BaseSpecifierListContext* CppParser::baseSpecifierList() {
   return baseSpecifierList(0);
}

CppParser::BaseSpecifierListContext* CppParser::baseSpecifierList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::BaseSpecifierListContext *_localctx = _tracker.createInstance<BaseSpecifierListContext>(_ctx, parentState);
  CppParser::BaseSpecifierListContext *previousContext = _localctx;
  size_t startState = 346;
  enterRecursionRule(_localctx, 346, CppParser::RuleBaseSpecifierList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2075);
    baseSpecifier();
    setState(2077);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 256, _ctx)) {
    case 1: {
      setState(2076);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2087);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 258, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BaseSpecifierListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBaseSpecifierList);
        setState(2079);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2080);
        match(CppParser::Comma);
        setState(2081);
        baseSpecifier();
        setState(2083);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 257, _ctx)) {
        case 1: {
          setState(2082);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2089);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 258, _ctx);
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


antlrcpp::Any CppParser::BaseSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitBaseSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::BaseSpecifierContext* CppParser::baseSpecifier() {
  BaseSpecifierContext *_localctx = _tracker.createInstance<BaseSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 348, CppParser::RuleBaseSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 264, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2091);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(2090);
        attributeSpecifierSequence(0);
      }
      setState(2093);
      classOrDecltype();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2095);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(2094);
        attributeSpecifierSequence(0);
      }
      setState(2097);
      match(CppParser::Virtual);
      setState(2099);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::Private)
        | (1ULL << CppParser::Protected)
        | (1ULL << CppParser::Public))) != 0)) {
        setState(2098);
        accessSpecifier();
      }
      setState(2101);
      classOrDecltype();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2103);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(2102);
        attributeSpecifierSequence(0);
      }
      setState(2105);
      accessSpecifier();
      setState(2107);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Virtual) {
        setState(2106);
        match(CppParser::Virtual);
      }
      setState(2109);
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


antlrcpp::Any CppParser::ClassOrDecltypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitClassOrDecltype(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ClassOrDecltypeContext* CppParser::classOrDecltype() {
  ClassOrDecltypeContext *_localctx = _tracker.createInstance<ClassOrDecltypeContext>(_ctx, getState());
  enterRule(_localctx, 350, CppParser::RuleClassOrDecltype);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 266, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2114);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 265, _ctx)) {
      case 1: {
        setState(2113);
        nestedNameSpecifier();
        break;
      }

      }
      setState(2116);
      className();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2117);
      nestedNameSpecifier();
      setState(2118);
      match(CppParser::Template);
      setState(2119);
      simpleTemplateIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2121);
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


antlrcpp::Any CppParser::AccessSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAccessSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AccessSpecifierContext* CppParser::accessSpecifier() {
  AccessSpecifierContext *_localctx = _tracker.createInstance<AccessSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 352, CppParser::RuleAccessSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2124);
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


antlrcpp::Any CppParser::ConversionFunctionIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitConversionFunctionIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ConversionFunctionIdentifierContext* CppParser::conversionFunctionIdentifier() {
  ConversionFunctionIdentifierContext *_localctx = _tracker.createInstance<ConversionFunctionIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 354, CppParser::RuleConversionFunctionIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2126);
    match(CppParser::Operator);
    setState(2127);
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


antlrcpp::Any CppParser::ConversionTypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitConversionTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ConversionTypeIdentifierContext* CppParser::conversionTypeIdentifier() {
  ConversionTypeIdentifierContext *_localctx = _tracker.createInstance<ConversionTypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 356, CppParser::RuleConversionTypeIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2129);
    typeSpecifierSequence();
    setState(2131);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 267, _ctx)) {
    case 1: {
      setState(2130);
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


antlrcpp::Any CppParser::ConversionDeclaratorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitConversionDeclarator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ConversionDeclaratorContext* CppParser::conversionDeclarator() {
  ConversionDeclaratorContext *_localctx = _tracker.createInstance<ConversionDeclaratorContext>(_ctx, getState());
  enterRule(_localctx, 358, CppParser::RuleConversionDeclarator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2133);
    pointerOperator();
    setState(2135);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 268, _ctx)) {
    case 1: {
      setState(2134);
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


antlrcpp::Any CppParser::ConstructorInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitConstructorInitializer(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ConstructorInitializerContext* CppParser::constructorInitializer() {
  ConstructorInitializerContext *_localctx = _tracker.createInstance<ConstructorInitializerContext>(_ctx, getState());
  enterRule(_localctx, 360, CppParser::RuleConstructorInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2137);
    match(CppParser::Colon);
    setState(2138);
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


antlrcpp::Any CppParser::MemberInitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitMemberInitializerList(this);
  else
    return visitor->visitChildren(this);
}


CppParser::MemberInitializerListContext* CppParser::memberInitializerList() {
   return memberInitializerList(0);
}

CppParser::MemberInitializerListContext* CppParser::memberInitializerList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::MemberInitializerListContext *_localctx = _tracker.createInstance<MemberInitializerListContext>(_ctx, parentState);
  CppParser::MemberInitializerListContext *previousContext = _localctx;
  size_t startState = 362;
  enterRecursionRule(_localctx, 362, CppParser::RuleMemberInitializerList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2141);
    memberInitializer();
    setState(2143);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 269, _ctx)) {
    case 1: {
      setState(2142);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2153);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 271, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MemberInitializerListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMemberInitializerList);
        setState(2145);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2146);
        match(CppParser::Comma);
        setState(2147);
        memberInitializer();
        setState(2149);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 270, _ctx)) {
        case 1: {
          setState(2148);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2155);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 271, _ctx);
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

CppParser::MemberInitializerIdentifierContext* CppParser::MemberInitializerContext::memberInitializerIdentifier() {
  return getRuleContext<CppParser::MemberInitializerIdentifierContext>(0);
}

tree::TerminalNode* CppParser::MemberInitializerContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

tree::TerminalNode* CppParser::MemberInitializerContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
}

CppParser::ExpressionListContext* CppParser::MemberInitializerContext::expressionList() {
  return getRuleContext<CppParser::ExpressionListContext>(0);
}

CppParser::BracedInitializerListContext* CppParser::MemberInitializerContext::bracedInitializerList() {
  return getRuleContext<CppParser::BracedInitializerListContext>(0);
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


antlrcpp::Any CppParser::MemberInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitMemberInitializer(this);
  else
    return visitor->visitChildren(this);
}

CppParser::MemberInitializerContext* CppParser::memberInitializer() {
  MemberInitializerContext *_localctx = _tracker.createInstance<MemberInitializerContext>(_ctx, getState());
  enterRule(_localctx, 364, CppParser::RuleMemberInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2166);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 273, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2156);
      memberInitializerIdentifier();
      setState(2157);
      match(CppParser::OpenParenthesis);
      setState(2159);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::AlignOf)
        | (1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char8)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::ConstCast)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Delete)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::DynamicCast)
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
        | (1ULL << CppParser::StaticCast))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (CppParser::This - 64))
        | (1ULL << (CppParser::Throw - 64))
        | (1ULL << (CppParser::True - 64))
        | (1ULL << (CppParser::TypeId - 64))
        | (1ULL << (CppParser::TypeName - 64))
        | (1ULL << (CppParser::Unsigned - 64))
        | (1ULL << (CppParser::Void - 64))
        | (1ULL << (CppParser::WChar - 64))
        | (1ULL << (CppParser::OpenBrace - 64))
        | (1ULL << (CppParser::OpenBracket - 64))
        | (1ULL << (CppParser::OpenParenthesis - 64))
        | (1ULL << (CppParser::DoubleColon - 64))
        | (1ULL << (CppParser::Plus - 64))
        | (1ULL << (CppParser::Minus - 64))
        | (1ULL << (CppParser::Asterisk - 64))
        | (1ULL << (CppParser::Ampersand - 64))
        | (1ULL << (CppParser::VerticalBar - 64))
        | (1ULL << (CppParser::Tilde - 64))
        | (1ULL << (CppParser::ExclamationMark - 64))
        | (1ULL << (CppParser::DoublePlus - 64))
        | (1ULL << (CppParser::DoubleMinus - 64)))) != 0) || ((((_la - 130) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 130)) & ((1ULL << (CppParser::Zero - 130))
        | (1ULL << (CppParser::IntegerLiteral - 130))
        | (1ULL << (CppParser::FloatingPointLiteral - 130))
        | (1ULL << (CppParser::CharacterLiteral - 130))
        | (1ULL << (CppParser::StringLiteral - 130))
        | (1ULL << (CppParser::UserDefinedIntegerLiteral - 130))
        | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 130))
        | (1ULL << (CppParser::UserDefinedCharacterLiteral - 130))
        | (1ULL << (CppParser::UserDefinedStringLiteral - 130))
        | (1ULL << (CppParser::Identifier - 130)))) != 0)) {
        setState(2158);
        expressionList();
      }
      setState(2161);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2163);
      memberInitializerIdentifier();
      setState(2164);
      bracedInitializerList();
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

//----------------- MemberInitializerIdentifierContext ------------------------------------------------------------------

CppParser::MemberInitializerIdentifierContext::MemberInitializerIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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


antlrcpp::Any CppParser::MemberInitializerIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitMemberInitializerIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::MemberInitializerIdentifierContext* CppParser::memberInitializerIdentifier() {
  MemberInitializerIdentifierContext *_localctx = _tracker.createInstance<MemberInitializerIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 366, CppParser::RuleMemberInitializerIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2168);
    match(CppParser::Identifier);
   
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


antlrcpp::Any CppParser::OperatorFunctionIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitOperatorFunctionIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::OperatorFunctionIdentifierContext* CppParser::operatorFunctionIdentifier() {
  OperatorFunctionIdentifierContext *_localctx = _tracker.createInstance<OperatorFunctionIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 368, CppParser::RuleOperatorFunctionIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2170);
    match(CppParser::Operator);
    setState(2171);
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

tree::TerminalNode* CppParser::AnyOperatorContext::OpenBrace() {
  return getToken(CppParser::OpenBrace, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::CloseBracket() {
  return getToken(CppParser::CloseBracket, 0);
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

CppParser::DoubleGreaterThanContext* CppParser::AnyOperatorContext::doubleGreaterThan() {
  return getRuleContext<CppParser::DoubleGreaterThanContext>(0);
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

tree::TerminalNode* CppParser::AnyOperatorContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
}

tree::TerminalNode* CppParser::AnyOperatorContext::OpenBracket() {
  return getToken(CppParser::OpenBracket, 0);
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


antlrcpp::Any CppParser::AnyOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitAnyOperator(this);
  else
    return visitor->visitChildren(this);
}

CppParser::AnyOperatorContext* CppParser::anyOperator() {
  AnyOperatorContext *_localctx = _tracker.createInstance<AnyOperatorContext>(_ctx, getState());
  enterRule(_localctx, 370, CppParser::RuleAnyOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2221);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 274, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2173);
      match(CppParser::New);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2174);
      match(CppParser::Delete);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2175);
      match(CppParser::New);
      setState(2176);
      match(CppParser::OpenBrace);
      setState(2177);
      match(CppParser::CloseBracket);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2178);
      match(CppParser::Delete);
      setState(2179);
      match(CppParser::OpenBrace);
      setState(2180);
      match(CppParser::CloseBracket);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2181);
      match(CppParser::Plus);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2182);
      match(CppParser::Minus);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2183);
      match(CppParser::Asterisk);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2184);
      match(CppParser::ForwardSlash);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2185);
      match(CppParser::Percent);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2186);
      match(CppParser::Caret);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2187);
      match(CppParser::Ampersand);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2188);
      match(CppParser::VerticalBar);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2189);
      match(CppParser::Tilde);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2190);
      match(CppParser::ExclamationMark);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2191);
      match(CppParser::Equal);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2192);
      match(CppParser::LessThan);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2193);
      match(CppParser::GreaterThan);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2194);
      match(CppParser::PlusEqual);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2195);
      match(CppParser::MinusEqual);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2196);
      match(CppParser::AsteriskEqual);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2197);
      match(CppParser::ForwardSlashEqual);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2198);
      match(CppParser::PercentEqual);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2199);
      match(CppParser::CaretEqual);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2200);
      match(CppParser::AmpersandEqual);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2201);
      match(CppParser::VerticalBarEqual);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2202);
      match(CppParser::DoubleLessThan);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2203);
      doubleGreaterThan();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2204);
      match(CppParser::DoubleGreaterThanEqual);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2205);
      match(CppParser::DoubleLessThanEqual);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2206);
      match(CppParser::DoubleEqual);
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2207);
      match(CppParser::ExclamationMarkEqual);
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2208);
      match(CppParser::LessThanEqual);
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2209);
      match(CppParser::GreaterThanEqual);
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2210);
      match(CppParser::DoubleAmpersand);
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2211);
      match(CppParser::DoubleVerticalBar);
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2212);
      match(CppParser::DoublePlus);
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2213);
      match(CppParser::DoubleMinus);
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2214);
      match(CppParser::Comma);
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2215);
      match(CppParser::ArrowAsterisk);
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(2216);
      match(CppParser::Arrow);
      break;
    }

    case 41: {
      enterOuterAlt(_localctx, 41);
      setState(2217);
      match(CppParser::OpenParenthesis);
      setState(2218);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 42: {
      enterOuterAlt(_localctx, 42);
      setState(2219);
      match(CppParser::OpenBracket);
      setState(2220);
      match(CppParser::CloseBracket);
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


antlrcpp::Any CppParser::LiteralOperatorIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitLiteralOperatorIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::LiteralOperatorIdentifierContext* CppParser::literalOperatorIdentifier() {
  LiteralOperatorIdentifierContext *_localctx = _tracker.createInstance<LiteralOperatorIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 372, CppParser::RuleLiteralOperatorIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2228);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 275, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2223);
      match(CppParser::Operator);
      setState(2224);
      match(CppParser::StringLiteral);
      setState(2225);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2226);
      match(CppParser::Operator);
      setState(2227);
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


antlrcpp::Any CppParser::TemplateDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTemplateDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TemplateDeclarationContext* CppParser::templateDeclaration() {
  TemplateDeclarationContext *_localctx = _tracker.createInstance<TemplateDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 374, CppParser::RuleTemplateDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2230);
    match(CppParser::Template);
    setState(2231);
    match(CppParser::LessThan);
    setState(2232);
    templateParameterList(0);
    setState(2233);
    match(CppParser::GreaterThan);
    setState(2234);
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


antlrcpp::Any CppParser::TemplateParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTemplateParameterList(this);
  else
    return visitor->visitChildren(this);
}


CppParser::TemplateParameterListContext* CppParser::templateParameterList() {
   return templateParameterList(0);
}

CppParser::TemplateParameterListContext* CppParser::templateParameterList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::TemplateParameterListContext *_localctx = _tracker.createInstance<TemplateParameterListContext>(_ctx, parentState);
  CppParser::TemplateParameterListContext *previousContext = _localctx;
  size_t startState = 376;
  enterRecursionRule(_localctx, 376, CppParser::RuleTemplateParameterList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2237);
    templateParameter();
    _ctx->stop = _input->LT(-1);
    setState(2244);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 276, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateParameterListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateParameterList);
        setState(2239);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2240);
        match(CppParser::Comma);
        setState(2241);
        templateParameter(); 
      }
      setState(2246);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 276, _ctx);
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


antlrcpp::Any CppParser::TemplateParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTemplateParameter(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TemplateParameterContext* CppParser::templateParameter() {
  TemplateParameterContext *_localctx = _tracker.createInstance<TemplateParameterContext>(_ctx, getState());
  enterRule(_localctx, 378, CppParser::RuleTemplateParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2249);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 277, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2247);
      typeParameter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2248);
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


antlrcpp::Any CppParser::TypeParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameter(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TypeParameterContext* CppParser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 380, CppParser::RuleTypeParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2287);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 284, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2251);
      typeParameterKey();
      setState(2253);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 278, _ctx)) {
      case 1: {
        setState(2252);
        match(CppParser::Ellipsis);
        break;
      }

      }
      setState(2256);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 279, _ctx)) {
      case 1: {
        setState(2255);
        match(CppParser::Identifier);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2258);
      typeParameterKey();
      setState(2260);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Identifier) {
        setState(2259);
        match(CppParser::Identifier);
      }
      setState(2262);
      match(CppParser::Equal);
      setState(2263);
      typeIdentifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2265);
      match(CppParser::Template);
      setState(2266);
      match(CppParser::LessThan);
      setState(2267);
      templateParameterList(0);
      setState(2268);
      match(CppParser::GreaterThan);
      setState(2269);
      typeParameterKey();
      setState(2271);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 281, _ctx)) {
      case 1: {
        setState(2270);
        match(CppParser::Ellipsis);
        break;
      }

      }
      setState(2274);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 282, _ctx)) {
      case 1: {
        setState(2273);
        match(CppParser::Identifier);
        break;
      }

      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2276);
      match(CppParser::Template);
      setState(2277);
      match(CppParser::LessThan);
      setState(2278);
      templateParameterList(0);
      setState(2279);
      match(CppParser::GreaterThan);
      setState(2280);
      typeParameterKey();
      setState(2282);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Identifier) {
        setState(2281);
        match(CppParser::Identifier);
      }
      setState(2284);
      match(CppParser::Equal);
      setState(2285);
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


antlrcpp::Any CppParser::TypeParameterKeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameterKey(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TypeParameterKeyContext* CppParser::typeParameterKey() {
  TypeParameterKeyContext *_localctx = _tracker.createInstance<TypeParameterKeyContext>(_ctx, getState());
  enterRule(_localctx, 382, CppParser::RuleTypeParameterKey);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2289);
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


antlrcpp::Any CppParser::SimpleTemplateIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitSimpleTemplateIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::SimpleTemplateIdentifierContext* CppParser::simpleTemplateIdentifier() {
  SimpleTemplateIdentifierContext *_localctx = _tracker.createInstance<SimpleTemplateIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 384, CppParser::RuleSimpleTemplateIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2291);
    templateName();
    setState(2292);
    match(CppParser::LessThan);
    setState(2294);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CppParser::Auto)
      | (1ULL << CppParser::Bool)
      | (1ULL << CppParser::Char)
      | (1ULL << CppParser::Char8)
      | (1ULL << CppParser::Char16)
      | (1ULL << CppParser::Char32)
      | (1ULL << CppParser::Class)
      | (1ULL << CppParser::Const)
      | (1ULL << CppParser::DeclType)
      | (1ULL << CppParser::Double)
      | (1ULL << CppParser::Enum)
      | (1ULL << CppParser::Float)
      | (1ULL << CppParser::Int)
      | (1ULL << CppParser::Long)
      | (1ULL << CppParser::Short)
      | (1ULL << CppParser::Signed)
      | (1ULL << CppParser::Struct))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (CppParser::TypeName - 71))
      | (1ULL << (CppParser::Union - 71))
      | (1ULL << (CppParser::Unsigned - 71))
      | (1ULL << (CppParser::Void - 71))
      | (1ULL << (CppParser::Volatile - 71))
      | (1ULL << (CppParser::WChar - 71))
      | (1ULL << (CppParser::DoubleColon - 71)))) != 0) || _la == CppParser::Identifier) {
      setState(2293);
      templateArgumentList(0);
    }
    setState(2296);
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


antlrcpp::Any CppParser::TemplateIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTemplateIdentifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TemplateIdentifierContext* CppParser::templateIdentifier() {
  TemplateIdentifierContext *_localctx = _tracker.createInstance<TemplateIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 386, CppParser::RuleTemplateIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2313);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 288, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2298);
      simpleTemplateIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2299);
      operatorFunctionIdentifier();
      setState(2300);
      match(CppParser::LessThan);
      setState(2302);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char8)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::Class)
        | (1ULL << CppParser::Const)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::Enum)
        | (1ULL << CppParser::Float)
        | (1ULL << CppParser::Int)
        | (1ULL << CppParser::Long)
        | (1ULL << CppParser::Short)
        | (1ULL << CppParser::Signed)
        | (1ULL << CppParser::Struct))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CppParser::TypeName - 71))
        | (1ULL << (CppParser::Union - 71))
        | (1ULL << (CppParser::Unsigned - 71))
        | (1ULL << (CppParser::Void - 71))
        | (1ULL << (CppParser::Volatile - 71))
        | (1ULL << (CppParser::WChar - 71))
        | (1ULL << (CppParser::DoubleColon - 71)))) != 0) || _la == CppParser::Identifier) {
        setState(2301);
        templateArgumentList(0);
      }
      setState(2304);
      match(CppParser::GreaterThan);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2306);
      literalOperatorIdentifier();
      setState(2307);
      match(CppParser::LessThan);
      setState(2309);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CppParser::Auto)
        | (1ULL << CppParser::Bool)
        | (1ULL << CppParser::Char)
        | (1ULL << CppParser::Char8)
        | (1ULL << CppParser::Char16)
        | (1ULL << CppParser::Char32)
        | (1ULL << CppParser::Class)
        | (1ULL << CppParser::Const)
        | (1ULL << CppParser::DeclType)
        | (1ULL << CppParser::Double)
        | (1ULL << CppParser::Enum)
        | (1ULL << CppParser::Float)
        | (1ULL << CppParser::Int)
        | (1ULL << CppParser::Long)
        | (1ULL << CppParser::Short)
        | (1ULL << CppParser::Signed)
        | (1ULL << CppParser::Struct))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 71)) & ((1ULL << (CppParser::TypeName - 71))
        | (1ULL << (CppParser::Union - 71))
        | (1ULL << (CppParser::Unsigned - 71))
        | (1ULL << (CppParser::Void - 71))
        | (1ULL << (CppParser::Volatile - 71))
        | (1ULL << (CppParser::WChar - 71))
        | (1ULL << (CppParser::DoubleColon - 71)))) != 0) || _la == CppParser::Identifier) {
        setState(2308);
        templateArgumentList(0);
      }
      setState(2311);
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


antlrcpp::Any CppParser::TemplateArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTemplateArgumentList(this);
  else
    return visitor->visitChildren(this);
}


CppParser::TemplateArgumentListContext* CppParser::templateArgumentList() {
   return templateArgumentList(0);
}

CppParser::TemplateArgumentListContext* CppParser::templateArgumentList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::TemplateArgumentListContext *_localctx = _tracker.createInstance<TemplateArgumentListContext>(_ctx, parentState);
  CppParser::TemplateArgumentListContext *previousContext = _localctx;
  size_t startState = 388;
  enterRecursionRule(_localctx, 388, CppParser::RuleTemplateArgumentList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2316);
    templateArgument();
    setState(2318);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 289, _ctx)) {
    case 1: {
      setState(2317);
      match(CppParser::Ellipsis);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2328);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 291, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TemplateArgumentListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTemplateArgumentList);
        setState(2320);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2321);
        match(CppParser::Comma);
        setState(2322);
        templateArgument();
        setState(2324);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 290, _ctx)) {
        case 1: {
          setState(2323);
          match(CppParser::Ellipsis);
          break;
        }

        } 
      }
      setState(2330);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 291, _ctx);
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

CppParser::TypeIdentifierContext* CppParser::TemplateArgumentContext::typeIdentifier() {
  return getRuleContext<CppParser::TypeIdentifierContext>(0);
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


antlrcpp::Any CppParser::TemplateArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTemplateArgument(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TemplateArgumentContext* CppParser::templateArgument() {
  TemplateArgumentContext *_localctx = _tracker.createInstance<TemplateArgumentContext>(_ctx, getState());
  enterRule(_localctx, 390, CppParser::RuleTemplateArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2331);
    typeIdentifier();
   
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


antlrcpp::Any CppParser::TypenameSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTypenameSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TypenameSpecifierContext* CppParser::typenameSpecifier() {
  TypenameSpecifierContext *_localctx = _tracker.createInstance<TypenameSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 392, CppParser::RuleTypenameSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2344);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 293, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2333);
      match(CppParser::TypeName);
      setState(2334);
      nestedNameSpecifier();
      setState(2335);
      match(CppParser::Identifier);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2337);
      match(CppParser::TypeName);
      setState(2338);
      nestedNameSpecifier();
      setState(2340);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::Template) {
        setState(2339);
        match(CppParser::Template);
      }
      setState(2342);
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


antlrcpp::Any CppParser::ExplicitInstantiationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitExplicitInstantiation(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ExplicitInstantiationContext* CppParser::explicitInstantiation() {
  ExplicitInstantiationContext *_localctx = _tracker.createInstance<ExplicitInstantiationContext>(_ctx, getState());
  enterRule(_localctx, 394, CppParser::RuleExplicitInstantiation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2347);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Extern) {
      setState(2346);
      match(CppParser::Extern);
    }
    setState(2349);
    match(CppParser::Template);
    setState(2350);
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


antlrcpp::Any CppParser::ExplicitSpecializationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitExplicitSpecialization(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ExplicitSpecializationContext* CppParser::explicitSpecialization() {
  ExplicitSpecializationContext *_localctx = _tracker.createInstance<ExplicitSpecializationContext>(_ctx, getState());
  enterRule(_localctx, 396, CppParser::RuleExplicitSpecialization);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2352);
    match(CppParser::Template);
    setState(2353);
    match(CppParser::LessThan);
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

//----------------- DeductionGuideContext ------------------------------------------------------------------

CppParser::DeductionGuideContext::DeductionGuideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CppParser::TemplateNameContext* CppParser::DeductionGuideContext::templateName() {
  return getRuleContext<CppParser::TemplateNameContext>(0);
}

tree::TerminalNode* CppParser::DeductionGuideContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ParameterDeclarationClauseContext* CppParser::DeductionGuideContext::parameterDeclarationClause() {
  return getRuleContext<CppParser::ParameterDeclarationClauseContext>(0);
}

tree::TerminalNode* CppParser::DeductionGuideContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::DeductionGuideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitDeductionGuide(this);
  else
    return visitor->visitChildren(this);
}

CppParser::DeductionGuideContext* CppParser::deductionGuide() {
  DeductionGuideContext *_localctx = _tracker.createInstance<DeductionGuideContext>(_ctx, getState());
  enterRule(_localctx, 398, CppParser::RuleDeductionGuide);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2358);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Explicit) {
      setState(2357);
      match(CppParser::Explicit);
    }
    setState(2360);
    templateName();
    setState(2361);
    match(CppParser::OpenParenthesis);
    setState(2362);
    parameterDeclarationClause();
    setState(2363);
    match(CppParser::CloseParenthesis);
    setState(2364);
    match(CppParser::Arrow);
    setState(2365);
    simpleTemplateIdentifier();
    setState(2366);
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


antlrcpp::Any CppParser::TryBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitTryBlock(this);
  else
    return visitor->visitChildren(this);
}

CppParser::TryBlockContext* CppParser::tryBlock() {
  TryBlockContext *_localctx = _tracker.createInstance<TryBlockContext>(_ctx, getState());
  enterRule(_localctx, 400, CppParser::RuleTryBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2368);
    match(CppParser::Try);
    setState(2369);
    compoundStatement();
    setState(2370);
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


antlrcpp::Any CppParser::FunctionTryBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitFunctionTryBlock(this);
  else
    return visitor->visitChildren(this);
}

CppParser::FunctionTryBlockContext* CppParser::functionTryBlock() {
  FunctionTryBlockContext *_localctx = _tracker.createInstance<FunctionTryBlockContext>(_ctx, getState());
  enterRule(_localctx, 402, CppParser::RuleFunctionTryBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2372);
    match(CppParser::Try);
    setState(2374);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CppParser::Colon) {
      setState(2373);
      constructorInitializer();
    }
    setState(2376);
    compoundStatement();
    setState(2377);
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


antlrcpp::Any CppParser::HandlerSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitHandlerSequence(this);
  else
    return visitor->visitChildren(this);
}

CppParser::HandlerSequenceContext* CppParser::handlerSequence() {
  HandlerSequenceContext *_localctx = _tracker.createInstance<HandlerSequenceContext>(_ctx, getState());
  enterRule(_localctx, 404, CppParser::RuleHandlerSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2379);
    handler();
    setState(2381);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 297, _ctx)) {
    case 1: {
      setState(2380);
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

tree::TerminalNode* CppParser::HandlerContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ExceptionDeclarationContext* CppParser::HandlerContext::exceptionDeclaration() {
  return getRuleContext<CppParser::ExceptionDeclarationContext>(0);
}

tree::TerminalNode* CppParser::HandlerContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::HandlerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitHandler(this);
  else
    return visitor->visitChildren(this);
}

CppParser::HandlerContext* CppParser::handler() {
  HandlerContext *_localctx = _tracker.createInstance<HandlerContext>(_ctx, getState());
  enterRule(_localctx, 406, CppParser::RuleHandler);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2383);
    match(CppParser::Catch);
    setState(2384);
    match(CppParser::OpenParenthesis);
    setState(2385);
    exceptionDeclaration();
    setState(2386);
    match(CppParser::CloseParenthesis);
    setState(2387);
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


antlrcpp::Any CppParser::ExceptionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitExceptionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CppParser::ExceptionDeclarationContext* CppParser::exceptionDeclaration() {
  ExceptionDeclarationContext *_localctx = _tracker.createInstance<ExceptionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 408, CppParser::RuleExceptionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2403);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 301, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2390);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(2389);
        attributeSpecifierSequence(0);
      }
      setState(2392);
      typeSpecifierSequence();
      setState(2393);
      declarator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2396);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::AlignAs || _la == CppParser::OpenBracket) {
        setState(2395);
        attributeSpecifierSequence(0);
      }
      setState(2398);
      typeSpecifierSequence();
      setState(2400);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CppParser::DeclType || ((((_la - 84) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 84)) & ((1ULL << (CppParser::OpenBracket - 84))
        | (1ULL << (CppParser::OpenParenthesis - 84))
        | (1ULL << (CppParser::Ellipsis - 84))
        | (1ULL << (CppParser::DoubleColon - 84))
        | (1ULL << (CppParser::Asterisk - 84))
        | (1ULL << (CppParser::Ampersand - 84))
        | (1ULL << (CppParser::DoubleAmpersand - 84))
        | (1ULL << (CppParser::Identifier - 84)))) != 0)) {
        setState(2399);
        abstractDeclarator();
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2402);
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

tree::TerminalNode* CppParser::NoExceptionSpecifierContext::OpenParenthesis() {
  return getToken(CppParser::OpenParenthesis, 0);
}

CppParser::ConstantExpressionContext* CppParser::NoExceptionSpecifierContext::constantExpression() {
  return getRuleContext<CppParser::ConstantExpressionContext>(0);
}

tree::TerminalNode* CppParser::NoExceptionSpecifierContext::CloseParenthesis() {
  return getToken(CppParser::CloseParenthesis, 0);
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


antlrcpp::Any CppParser::NoExceptionSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitNoExceptionSpecifier(this);
  else
    return visitor->visitChildren(this);
}

CppParser::NoExceptionSpecifierContext* CppParser::noExceptionSpecifier() {
  NoExceptionSpecifierContext *_localctx = _tracker.createInstance<NoExceptionSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 410, CppParser::RuleNoExceptionSpecifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2414);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 302, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2405);
      match(CppParser::NoExcept);
      setState(2406);
      match(CppParser::OpenParenthesis);
      setState(2407);
      constantExpression();
      setState(2408);
      match(CppParser::CloseParenthesis);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2410);
      match(CppParser::NoExcept);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2411);
      match(CppParser::Throw);
      setState(2412);
      match(CppParser::OpenParenthesis);
      setState(2413);
      match(CppParser::CloseParenthesis);
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


antlrcpp::Any CppParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}


CppParser::IdentifierListContext* CppParser::identifierList() {
   return identifierList(0);
}

CppParser::IdentifierListContext* CppParser::identifierList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CppParser::IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, parentState);
  CppParser::IdentifierListContext *previousContext = _localctx;
  size_t startState = 412;
  enterRecursionRule(_localctx, 412, CppParser::RuleIdentifierList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2417);
    match(CppParser::Identifier);
    _ctx->stop = _input->LT(-1);
    setState(2424);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 303, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<IdentifierListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIdentifierList);
        setState(2419);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2420);
        match(CppParser::Comma);
        setState(2421);
        match(CppParser::Identifier); 
      }
      setState(2426);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 303, _ctx);
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


antlrcpp::Any CppParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

CppParser::LiteralContext* CppParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 414, CppParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2434);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CppParser::Zero:
      case CppParser::IntegerLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(2427);
        integerLiteral();
        break;
      }

      case CppParser::FloatingPointLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(2428);
        match(CppParser::FloatingPointLiteral);
        break;
      }

      case CppParser::CharacterLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(2429);
        match(CppParser::CharacterLiteral);
        break;
      }

      case CppParser::StringLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(2430);
        match(CppParser::StringLiteral);
        break;
      }

      case CppParser::False:
      case CppParser::True: {
        enterOuterAlt(_localctx, 5);
        setState(2431);
        booleanLiteral();
        break;
      }

      case CppParser::Nullptr: {
        enterOuterAlt(_localctx, 6);
        setState(2432);
        pointerLiteral();
        break;
      }

      case CppParser::UserDefinedIntegerLiteral:
      case CppParser::UserDefinedFloatingPointLiteral:
      case CppParser::UserDefinedCharacterLiteral:
      case CppParser::UserDefinedStringLiteral: {
        enterOuterAlt(_localctx, 7);
        setState(2433);
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


antlrcpp::Any CppParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

CppParser::IntegerLiteralContext* CppParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 416, CppParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2436);
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


antlrcpp::Any CppParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

CppParser::BooleanLiteralContext* CppParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 418, CppParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2438);
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


antlrcpp::Any CppParser::PointerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitPointerLiteral(this);
  else
    return visitor->visitChildren(this);
}

CppParser::PointerLiteralContext* CppParser::pointerLiteral() {
  PointerLiteralContext *_localctx = _tracker.createInstance<PointerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 420, CppParser::RulePointerLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2440);
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


antlrcpp::Any CppParser::UserDefinedLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CppParserVisitor*>(visitor))
    return parserVisitor->visitUserDefinedLiteral(this);
  else
    return visitor->visitChildren(this);
}

CppParser::UserDefinedLiteralContext* CppParser::userDefinedLiteral() {
  UserDefinedLiteralContext *_localctx = _tracker.createInstance<UserDefinedLiteralContext>(_ctx, getState());
  enterRule(_localctx, 422, CppParser::RuleUserDefinedLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2442);
    _la = _input->LA(1);
    if (!(((((_la - 135) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 135)) & ((1ULL << (CppParser::UserDefinedIntegerLiteral - 135))
      | (1ULL << (CppParser::UserDefinedFloatingPointLiteral - 135))
      | (1ULL << (CppParser::UserDefinedCharacterLiteral - 135))
      | (1ULL << (CppParser::UserDefinedStringLiteral - 135)))) != 0))) {
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
    case 17: return captureListSempred(dynamic_cast<CaptureListContext *>(context), predicateIndex);
    case 29: return postfixExpressionSempred(dynamic_cast<PostfixExpressionContext *>(context), predicateIndex);
    case 38: return noPointerNewDeclaratorSempred(dynamic_cast<NoPointerNewDeclaratorContext *>(context), predicateIndex);
    case 43: return binaryExpressionSempred(dynamic_cast<BinaryExpressionContext *>(context), predicateIndex);
    case 49: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 57: return statementSequenceSempred(dynamic_cast<StatementSequenceContext *>(context), predicateIndex);
    case 65: return declarationSequenceSempred(dynamic_cast<DeclarationSequenceContext *>(context), predicateIndex);
    case 95: return enumeratorListSempred(dynamic_cast<EnumeratorListContext *>(context), predicateIndex);
    case 102: return enclosingNamespaceSpecifierSempred(dynamic_cast<EnclosingNamespaceSpecifierContext *>(context), predicateIndex);
    case 107: return usingDeclaratorListSempred(dynamic_cast<UsingDeclaratorListContext *>(context), predicateIndex);
    case 112: return attributeSpecifierSequenceSempred(dynamic_cast<AttributeSpecifierSequenceContext *>(context), predicateIndex);
    case 116: return attributeListSempred(dynamic_cast<AttributeListContext *>(context), predicateIndex);
    case 122: return balancedTokenSequenceSempred(dynamic_cast<BalancedTokenSequenceContext *>(context), predicateIndex);
    case 125: return initializerDeclaratorListSempred(dynamic_cast<InitializerDeclaratorListContext *>(context), predicateIndex);
    case 129: return noPointerDeclaratorSempred(dynamic_cast<NoPointerDeclaratorContext *>(context), predicateIndex);
    case 142: return noPointerAbstractDeclaratorSempred(dynamic_cast<NoPointerAbstractDeclaratorContext *>(context), predicateIndex);
    case 144: return noPointerAbstractPackDeclaratorSempred(dynamic_cast<NoPointerAbstractPackDeclaratorContext *>(context), predicateIndex);
    case 146: return parameterDeclarationListSempred(dynamic_cast<ParameterDeclarationListContext *>(context), predicateIndex);
    case 157: return initializerListSempred(dynamic_cast<InitializerListContext *>(context), predicateIndex);
    case 167: return memberDeclaratorListSempred(dynamic_cast<MemberDeclaratorListContext *>(context), predicateIndex);
    case 169: return virtualSpecifierSequenceSempred(dynamic_cast<VirtualSpecifierSequenceContext *>(context), predicateIndex);
    case 173: return baseSpecifierListSempred(dynamic_cast<BaseSpecifierListContext *>(context), predicateIndex);
    case 181: return memberInitializerListSempred(dynamic_cast<MemberInitializerListContext *>(context), predicateIndex);
    case 188: return templateParameterListSempred(dynamic_cast<TemplateParameterListContext *>(context), predicateIndex);
    case 194: return templateArgumentListSempred(dynamic_cast<TemplateArgumentListContext *>(context), predicateIndex);
    case 206: return identifierListSempred(dynamic_cast<IdentifierListContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CppParser::captureListSempred(CaptureListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool CppParser::noPointerNewDeclaratorSempred(NoPointerNewDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::binaryExpressionSempred(BinaryExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::statementSequenceSempred(StatementSequenceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::declarationSequenceSempred(DeclarationSequenceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::enumeratorListSempred(EnumeratorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::enclosingNamespaceSpecifierSempred(EnclosingNamespaceSpecifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::usingDeclaratorListSempred(UsingDeclaratorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::attributeSpecifierSequenceSempred(AttributeSpecifierSequenceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::attributeListSempred(AttributeListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 3);
    case 16: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::balancedTokenSequenceSempred(BalancedTokenSequenceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 17: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::initializerDeclaratorListSempred(InitializerDeclaratorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 18: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::noPointerDeclaratorSempred(NoPointerDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 19: return precpred(_ctx, 3);
    case 20: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CppParser::noPointerAbstractDeclaratorSempred(NoPointerAbstractDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 21: return precpred(_ctx, 4);
    case 22: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CppParser::noPointerAbstractPackDeclaratorSempred(NoPointerAbstractPackDeclaratorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 23: return precpred(_ctx, 3);
    case 24: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CppParser::parameterDeclarationListSempred(ParameterDeclarationListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 25: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::initializerListSempred(InitializerListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 26: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::memberDeclaratorListSempred(MemberDeclaratorListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 27: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::virtualSpecifierSequenceSempred(VirtualSpecifierSequenceContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 28: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::baseSpecifierListSempred(BaseSpecifierListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 29: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::memberInitializerListSempred(MemberInitializerListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 30: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::templateParameterListSempred(TemplateParameterListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 31: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::templateArgumentListSempred(TemplateArgumentListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 32: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CppParser::identifierListSempred(IdentifierListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 33: return precpred(_ctx, 1);

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
  "doubleGreaterThan", "namespaceName", "namespaceAlias", "className", "templateName", 
  "translationUnit", "primaryExpression", "identifierExpression", "unqualifiedIdentifier", 
  "qualifiedIdentifier", "nestedNameSpecifier", "nestedNameSpecifierSequence", 
  "lambdaExpression", "lambdaIntroducer", "lambdaDeclarator", "lambdaCapture", 
  "captureDefault", "captureList", "capture", "simpleCapture", "initializerCapture", 
  "foldExpression", "foldOperator", "explicitTypeCoversionOperatorExpression", 
  "postfixOperator", "namedCastExpression", "memberAccessOperator", "namedCastType", 
  "typeIdentificationExpression", "postfixExpression", "expressionList", 
  "pseudoDestructorName", "unaryExpression", "unaryOperator", "newExpression", 
  "newPlacement", "newTypeIdentifier", "newDeclarator", "noPointerNewDeclarator", 
  "newInitializer", "deleteExpression", "noExceptionExpression", "castExpression", 
  "binaryExpression", "binaryOperator", "conditionalExpression", "throwExpression", 
  "assignmentExpression", "assignmentOperator", "expression", "constantExpression", 
  "statement", "initializerStatement", "condition", "labeledStatement", 
  "expressionStatement", "compoundStatement", "statementSequence", "selectionStatement", 
  "iterationStatement", "forInitializerStatement", "forRangeDeclaration", 
  "forRangeInitializer", "jumpStatement", "declarationStatement", "declarationSequence", 
  "declaration", "blockDeclaration", "noDeclarationSpecifierFunctionDeclaration", 
  "aliasDeclaration", "simpleDeclaration", "staticAssertDeclaration", "emptyDeclaration", 
  "attributeDeclaration", "declarationModifier", "declarationSpecifierSequence", 
  "leadingDeclarationModifierSequence", "trailingDeclarationModifierSequence", 
  "declarationModifierSequence", "storageClassSpecifier", "functionSpecifier", 
  "typeSpecifier", "typeSpecifierSequence", "definingTypeSpecifier", "definingTypeSpecifierSequence", 
  "simpleTypeSpecifier", "typeName", "declarationTypeSpecifier", "elaboratedTypeSpecifier", 
  "enumSpecifier", "enumHead", "enumHeadName", "opaqueEnumSpecifier", "enumKey", 
  "enumBase", "enumeratorList", "enumeratorDefinition", "enumerator", "namespaceDefinition", 
  "namedNamespaceDefinition", "unnamedNamespaceDefinition", "nestedNamespaceDefinition", 
  "enclosingNamespaceSpecifier", "namespaceBody", "namespaceAliasDefinition", 
  "qualifiedNamespaceSpecifier", "usingDeclaration", "usingDeclaratorList", 
  "usingDeclarator", "usingDirective", "asmDefinition", "linkageSpecification", 
  "attributeSpecifierSequence", "attributeSpecifier", "alignmentSpecifier", 
  "attributeUsingPrefix", "attributeList", "attribute", "attributeToken", 
  "attributeScopedToken", "attributeNamespace", "attributeArgumentClause", 
  "balancedTokenSequence", "balancedToken", "nonBalancedToken", "initializerDeclaratorList", 
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
  "", "", "", "", "", "", "'alignas'", "'alignof'", "'asm'", "'auto'", "'bool'", 
  "'break'", "'case'", "'catch'", "'char'", "'char8_t'", "'char16_t'", "'char32_t'", 
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
  "'<<'", "'<<='", "'>>='", "'=='", "'!='", "'<='", "'>='", "'&&'", "'||'", 
  "'++'", "'--'", "','", "'->*'", "'->'", "'0'"
};

std::vector<std::string> CppParser::_symbolicNames = {
  "", "BlockComment", "LineComment", "Whitespace", "Preprocessor", "Newline", 
  "AlignAs", "AlignOf", "Asm", "Auto", "Bool", "Break", "Case", "Catch", 
  "Char", "Char8", "Char16", "Char32", "Class", "Const", "ConstExpr", "ConstCast", 
  "Continue", "DeclType", "Default", "Delete", "Do", "Double", "DynamicCast", 
  "Else", "Enum", "Explicit", "Export", "Extern", "False", "Float", "For", 
  "Friend", "GoTo", "If", "Inline", "Int", "Long", "Mutable", "Namespace", 
  "New", "NoExcept", "Nullptr", "Operator", "Private", "Protected", "Public", 
  "Register", "ReinterpretCast", "Return", "Short", "Signed", "SizeOf", 
  "Static", "StaticAssert", "StaticCast", "Struct", "Switch", "Template", 
  "This", "ThreadLocal", "Throw", "True", "Try", "TypeDef", "TypeId", "TypeName", 
  "Union", "Unsigned", "Using", "Virtual", "Void", "Volatile", "WChar", 
  "While", "Override", "Final", "OpenBrace", "CloseBrace", "OpenBracket", 
  "CloseBracket", "OpenParenthesis", "CloseParenthesis", "Semicolon", "Colon", 
  "Ellipsis", "QuestionMark", "DoubleColon", "Period", "PeriodAsterisk", 
  "Plus", "Minus", "Asterisk", "ForwardSlash", "Percent", "Caret", "Ampersand", 
  "VerticalBar", "Tilde", "ExclamationMark", "Equal", "LessThan", "GreaterThan", 
  "PlusEqual", "MinusEqual", "AsteriskEqual", "ForwardSlashEqual", "PercentEqual", 
  "CaretEqual", "AmpersandEqual", "VerticalBarEqual", "DoubleLessThan", 
  "DoubleLessThanEqual", "DoubleGreaterThanEqual", "DoubleEqual", "ExclamationMarkEqual", 
  "LessThanEqual", "GreaterThanEqual", "DoubleAmpersand", "DoubleVerticalBar", 
  "DoublePlus", "DoubleMinus", "Comma", "ArrowAsterisk", "Arrow", "Zero", 
  "IntegerLiteral", "FloatingPointLiteral", "CharacterLiteral", "StringLiteral", 
  "UserDefinedIntegerLiteral", "UserDefinedFloatingPointLiteral", "UserDefinedCharacterLiteral", 
  "UserDefinedStringLiteral", "Identifier"
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
       0x3, 0x8d, 0x98f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0xd4, 0x4, 0xd5, 0x9, 0xd5, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x3, 0x3, 0x3, 0x5, 0x3, 0x1b0, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x5, 0x3, 0x5, 0x5, 0x5, 0x1b6, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x7, 0x5, 0x7, 0x1bb, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x5, 0x8, 0x1c8, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
       0x1cc, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x1d7, 0xa, 0xa, 
       0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x1db, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x1e1, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x5, 0xc, 0x1e6, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x5, 0xc, 0x1eb, 0xa, 0xc, 0x5, 0xc, 0x1ed, 0xa, 0xc, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x5, 0xd, 0x1f2, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1f5, 
       0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1fa, 0xa, 0xd, 
       0x5, 0xd, 0x1fc, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x200, 0xa, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x206, 0xa, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x5, 0x10, 0x20e, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x211, 0xa, 0x10, 
       0x3, 0x10, 0x5, 0x10, 0x214, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 0x217, 
       0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x5, 0x11, 0x21f, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x226, 0xa, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x22c, 0xa, 0x13, 0x7, 
       0x13, 0x22e, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x231, 0xb, 0x13, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x5, 0x15, 0x237, 0xa, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x23d, 0xa, 
       0x15, 0x3, 0x16, 0x5, 0x16, 0x240, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x259, 0xa, 0x17, 0x3, 
       0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
       0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
       0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
       0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
       0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
       0x18, 0x3, 0x18, 0x5, 0x18, 0x27b, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x5, 0x19, 0x280, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 
       0x1e, 0x29c, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x5, 0x1f, 0x2a9, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 
       0x1f, 0x2b3, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x5, 0x1f, 0x2b9, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x2c3, 
       0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x2c6, 0xb, 0x1f, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x21, 0x5, 0x21, 0x2cb, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x2dd, 0xa, 0x21, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x2fb, 0xa, 0x22, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x24, 0x5, 0x24, 0x300, 0xa, 0x24, 0x3, 0x24, 0x3, 
       0x24, 0x5, 0x24, 0x304, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 
       0x308, 0xa, 0x24, 0x3, 0x24, 0x5, 0x24, 0x30b, 0xa, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x5, 0x24, 0x30f, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
       0x24, 0x3, 0x24, 0x5, 0x24, 0x315, 0xa, 0x24, 0x5, 0x24, 0x317, 0xa, 
       0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 
       0x26, 0x5, 0x26, 0x31f, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 
       0x323, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x32c, 0xa, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x333, 0xa, 
       0x28, 0x7, 0x28, 0x335, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x338, 0xb, 
       0x28, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x33c, 0xa, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x5, 0x29, 0x340, 0xa, 0x29, 0x3, 0x2a, 0x5, 0x2a, 0x343, 
       0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x348, 0xa, 
       0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x34e, 
       0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x5, 0x2c, 0x35b, 0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x7, 0x2d, 0x364, 0xa, 0x2d, 
       0xc, 0x2d, 0xe, 0x2d, 0x367, 0xb, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 
       0x2e, 0x37d, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x386, 0xa, 0x2f, 0x3, 
       0x30, 0x3, 0x30, 0x5, 0x30, 0x38a, 0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x392, 0xa, 
       0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x3, 0x33, 0x3, 0x33, 0x7, 0x33, 0x39c, 0xa, 0x33, 0xc, 0x33, 
       0xe, 0x33, 0x39f, 0xb, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 
       0x35, 0x5, 0x35, 0x3a5, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 
       0x3a9, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x3ad, 0xa, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x3b1, 0xa, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x5, 0x35, 0x3b5, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x5, 0x35, 0x3ba, 0xa, 0x35, 0x3, 0x35, 0x5, 0x35, 0x3bd, 0xa, 0x35, 
       0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x3c1, 0xa, 0x36, 0x3, 0x37, 0x3, 
       0x37, 0x5, 0x37, 0x3c5, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
       0x3, 0x37, 0x5, 0x37, 0x3cb, 0xa, 0x37, 0x3, 0x38, 0x5, 0x38, 0x3ce, 
       0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 
       0x3d4, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
       0x38, 0x3, 0x38, 0x5, 0x38, 0x3dc, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x3, 0x38, 0x5, 0x38, 0x3e1, 0xa, 0x38, 0x3, 0x39, 0x5, 0x39, 0x3e4, 
       0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 
       0x3ea, 0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
       0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x3f3, 0xa, 0x3b, 0xc, 0x3b, 
       0xe, 0x3b, 0x3f6, 0xb, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x3fa, 
       0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x3fe, 0xa, 0x3c, 0x3, 
       0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 
       0x3c, 0x406, 0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x40a, 0xa, 
       0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
       0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x415, 0xa, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x41b, 0xa, 
       0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x5, 0x3d, 0x42f, 0xa, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 
       0x433, 0xa, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x5, 0x3d, 0x440, 0xa, 0x3d, 0x3, 0x3e, 0x5, 0x3e, 0x443, 0xa, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x449, 
       0xa, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x44d, 0xa, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x453, 0xa, 0x3e, 
       0x3, 0x3f, 0x5, 0x3f, 0x456, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
       0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
       0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x463, 0xa, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x469, 0xa, 0x41, 0x3, 
       0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
       0x43, 0x7, 0x43, 0x472, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 0x475, 0xb, 
       0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
       0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 
       0x44, 0x482, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
       0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x48c, 0xa, 
       0x45, 0x3, 0x46, 0x5, 0x46, 0x48f, 0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x497, 0xa, 
       0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 
       0x48, 0x5, 0x48, 0x49f, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
       0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 
       0x4a9, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x4ad, 0xa, 0x48, 
       0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
       0x5, 0x48, 0x4b5, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x4c5, 
       0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
       0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
       0x3, 0x4c, 0x5, 0x4c, 0x4d3, 0xa, 0x4c, 0x3, 0x4d, 0x5, 0x4d, 0x4d6, 
       0xa, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x4da, 0xa, 0x4d, 0x3, 
       0x4d, 0x5, 0x4d, 0x4dd, 0xa, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 
       0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x4e5, 0xa, 0x50, 0x3, 
       0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 
       0x53, 0x5, 0x53, 0x4ee, 0xa, 0x53, 0x3, 0x54, 0x5, 0x54, 0x4f1, 0xa, 
       0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x4f5, 0xa, 0x54, 0x3, 0x55, 
       0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x4fa, 0xa, 0x55, 0x3, 0x56, 0x3, 
       0x56, 0x5, 0x56, 0x4fe, 0xa, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x5, 0x56, 0x503, 0xa, 0x56, 0x3, 0x57, 0x5, 0x57, 0x506, 0xa, 0x57, 
       0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
       0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
       0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 
       0x519, 0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x51d, 0xa, 0x58, 
       0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 
       0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x5, 0x59, 0x528, 0xa, 0x59, 0x3, 
       0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x52c, 0xa, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 
       0x52f, 0xa, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x539, 0xa, 0x5a, 
       0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x53f, 0xa, 
       0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x542, 0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 
       0x3, 0x5b, 0x5, 0x5b, 0x547, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
       0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x5, 
       0x5b, 0x551, 0xa, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x555, 0xa, 
       0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x558, 0xa, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 
       0x55b, 0xa, 0x5c, 0x3, 0x5d, 0x5, 0x5d, 0x55e, 0xa, 0x5d, 0x3, 0x5d, 
       0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x564, 0xa, 0x5e, 0x3, 
       0x5e, 0x5, 0x5e, 0x567, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 
       0x56b, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x574, 0xa, 0x5f, 0x3, 0x60, 
       0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 
       0x3, 0x61, 0x3, 0x61, 0x7, 0x61, 0x57f, 0xa, 0x61, 0xc, 0x61, 0xe, 
       0x61, 0x582, 0xb, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
       0x3, 0x62, 0x5, 0x62, 0x589, 0xa, 0x62, 0x3, 0x63, 0x3, 0x63, 0x5, 
       0x63, 0x58d, 0xa, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 
       0x592, 0xa, 0x64, 0x3, 0x65, 0x5, 0x65, 0x595, 0xa, 0x65, 0x3, 0x65, 
       0x3, 0x65, 0x5, 0x65, 0x599, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
       0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x5, 0x66, 0x5a1, 0xa, 0x66, 
       0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x5a5, 0xa, 0x66, 0x3, 0x66, 0x3, 
       0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
       0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x68, 0x3, 
       0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x7, 0x68, 0x5b9, 
       0xa, 0x68, 0xc, 0x68, 0xe, 0x68, 0x5bc, 0xb, 0x68, 0x3, 0x69, 0x5, 
       0x69, 0x5bf, 0xa, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
       0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x5, 0x6b, 0x5c8, 0xa, 0x6b, 0x3, 
       0x6b, 0x3, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 
       0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x5d3, 0xa, 0x6d, 0x3, 0x6d, 
       0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x5d9, 0xa, 0x6d, 0x7, 
       0x6d, 0x5db, 0xa, 0x6d, 0xc, 0x6d, 0xe, 0x6d, 0x5de, 0xb, 0x6d, 0x3, 
       0x6e, 0x5, 0x6e, 0x5e1, 0xa, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
       0x3, 0x6f, 0x5, 0x6f, 0x5e7, 0xa, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
       0x6f, 0x5, 0x6f, 0x5ec, 0xa, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
       0x3, 0x70, 0x5, 0x70, 0x5f2, 0xa, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 
       0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 
       0x71, 0x3, 0x71, 0x5, 0x71, 0x5fe, 0xa, 0x71, 0x3, 0x71, 0x3, 0x71, 
       0x3, 0x71, 0x3, 0x71, 0x5, 0x71, 0x604, 0xa, 0x71, 0x3, 0x72, 0x3, 
       0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x7, 0x72, 0x60b, 0xa, 0x72, 
       0xc, 0x72, 0xe, 0x72, 0x60e, 0xb, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 
       0x73, 0x5, 0x73, 0x613, 0xa, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
       0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 0x61a, 0xa, 0x73, 0x3, 0x74, 0x3, 
       0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x620, 0xa, 0x74, 0x3, 0x74, 
       0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 
       0x628, 0xa, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x62c, 0xa, 0x74, 
       0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x76, 0x3, 0x76, 
       0x5, 0x76, 0x634, 0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 
       0x76, 0x639, 0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 
       0x63e, 0xa, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 
       0x76, 0x7, 0x76, 0x645, 0xa, 0x76, 0xc, 0x76, 0xe, 0x76, 0x648, 0xb, 
       0x76, 0x3, 0x77, 0x3, 0x77, 0x5, 0x77, 0x64c, 0xa, 0x77, 0x3, 0x78, 
       0x3, 0x78, 0x5, 0x78, 0x650, 0xa, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 
       0x79, 0x3, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x5, 
       0x7b, 0x65a, 0xa, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 
       0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x7, 0x7c, 0x663, 0xa, 0x7c, 0xc, 
       0x7c, 0xe, 0x7c, 0x666, 0xb, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 
       0x66a, 0xa, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x66f, 
       0xa, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x674, 0xa, 
       0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x678, 0xa, 0x7d, 0x3, 0x7e, 
       0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 
       0x3, 0x7f, 0x7, 0x7f, 0x682, 0xa, 0x7f, 0xc, 0x7f, 0xe, 0x7f, 0x685, 
       0xb, 0x7f, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x689, 0xa, 0x80, 0x3, 
       0x81, 0x3, 0x81, 0x5, 0x81, 0x68d, 0xa, 0x81, 0x3, 0x82, 0x3, 0x82, 
       0x3, 0x82, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x694, 0xa, 0x83, 0x3, 
       0x83, 0x3, 0x83, 0x5, 0x83, 0x698, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 
       0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x69e, 0xa, 0x83, 0x3, 0x83, 0x3, 
       0x83, 0x3, 0x83, 0x5, 0x83, 0x6a3, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 
       0x5, 0x83, 0x6a7, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x7, 0x83, 0x6ab, 
       0xa, 0x83, 0xc, 0x83, 0xe, 0x83, 0x6ae, 0xb, 0x83, 0x3, 0x84, 0x3, 
       0x84, 0x3, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
       0x86, 0x5, 0x86, 0x6b8, 0xa, 0x86, 0x3, 0x86, 0x5, 0x86, 0x6bb, 0xa, 
       0x86, 0x3, 0x86, 0x5, 0x86, 0x6be, 0xa, 0x86, 0x3, 0x86, 0x5, 0x86, 
       0x6c1, 0xa, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x88, 0x3, 
       0x88, 0x5, 0x88, 0x6c8, 0xa, 0x88, 0x3, 0x88, 0x5, 0x88, 0x6cb, 0xa, 
       0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x6cf, 0xa, 0x88, 0x3, 0x88, 
       0x3, 0x88, 0x5, 0x88, 0x6d3, 0xa, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 
       0x88, 0x5, 0x88, 0x6d8, 0xa, 0x88, 0x3, 0x88, 0x5, 0x88, 0x6db, 0xa, 
       0x88, 0x5, 0x88, 0x6dd, 0xa, 0x88, 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 
       0x6e1, 0xa, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x3, 
       0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x6ea, 0xa, 0x8c, 0x3, 0x8d, 
       0x3, 0x8d, 0x5, 0x8d, 0x6ee, 0xa, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x5, 
       0x8e, 0x6f2, 0xa, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 
       0x5, 0x8e, 0x6f8, 0xa, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 
       0x8f, 0x6fd, 0xa, 0x8f, 0x5, 0x8f, 0x6ff, 0xa, 0x8f, 0x3, 0x90, 0x3, 
       0x90, 0x3, 0x90, 0x3, 0x90, 0x5, 0x90, 0x705, 0xa, 0x90, 0x3, 0x90, 
       0x3, 0x90, 0x5, 0x90, 0x709, 0xa, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 
       0x90, 0x3, 0x90, 0x5, 0x90, 0x70f, 0xa, 0x90, 0x3, 0x90, 0x3, 0x90, 
       0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x5, 0x90, 0x716, 0xa, 0x90, 0x3, 
       0x90, 0x3, 0x90, 0x5, 0x90, 0x71a, 0xa, 0x90, 0x7, 0x90, 0x71c, 0xa, 
       0x90, 0xc, 0x90, 0xe, 0x90, 0x71f, 0xb, 0x90, 0x3, 0x91, 0x3, 0x91, 
       0x3, 0x91, 0x3, 0x91, 0x5, 0x91, 0x725, 0xa, 0x91, 0x3, 0x92, 0x3, 
       0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 
       0x92, 0x5, 0x92, 0x72f, 0xa, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 
       0x733, 0xa, 0x92, 0x7, 0x92, 0x735, 0xa, 0x92, 0xc, 0x92, 0xe, 0x92, 
       0x738, 0xb, 0x92, 0x3, 0x93, 0x5, 0x93, 0x73b, 0xa, 0x93, 0x3, 0x93, 
       0x5, 0x93, 0x73e, 0xa, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 
       0x93, 0x5, 0x93, 0x744, 0xa, 0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 
       0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x7, 0x94, 0x74c, 0xa, 0x94, 0xc, 
       0x94, 0xe, 0x94, 0x74f, 0xb, 0x94, 0x3, 0x95, 0x5, 0x95, 0x752, 0xa, 
       0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x758, 
       0xa, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
       0x5, 0x95, 0x75f, 0xa, 0x95, 0x3, 0x96, 0x5, 0x96, 0x762, 0xa, 0x96, 
       0x3, 0x96, 0x5, 0x96, 0x765, 0xa, 0x96, 0x3, 0x96, 0x3, 0x96, 0x5, 
       0x96, 0x769, 0xa, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 0x97, 
       0x3, 0x97, 0x3, 0x97, 0x5, 0x97, 0x771, 0xa, 0x97, 0x3, 0x98, 0x3, 
       0x98, 0x3, 0x98, 0x3, 0x98, 0x5, 0x98, 0x777, 0xa, 0x98, 0x3, 0x99, 
       0x5, 0x99, 0x77a, 0xa, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x9a, 0x3, 
       0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 
       0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x5, 
       0x9d, 0x78b, 0xa, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x5, 0x9e, 0x78f, 0xa, 
       0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x5, 0x9f, 0x794, 0xa, 0x9f, 
       0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x5, 0x9f, 0x79a, 0xa, 
       0x9f, 0x7, 0x9f, 0x79c, 0xa, 0x9f, 0xc, 0x9f, 0xe, 0x9f, 0x79f, 0xb, 
       0x9f, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x5, 0xa0, 0x7a4, 0xa, 0xa0, 
       0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x5, 0xa0, 0x7aa, 0xa, 
       0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x7ae, 0xa, 0xa1, 0x3, 0xa2, 
       0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x7b3, 0xa, 0xa2, 0x3, 0xa2, 0x3, 
       0xa2, 0x3, 0xa3, 0x3, 0xa3, 0x5, 0xa3, 0x7b9, 0xa, 0xa3, 0x3, 0xa3, 
       0x3, 0xa3, 0x5, 0xa3, 0x7bd, 0xa, 0xa3, 0x3, 0xa3, 0x5, 0xa3, 0x7c0, 
       0xa, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x5, 0xa3, 0x7c4, 0xa, 0xa3, 0x3, 
       0xa3, 0x5, 0xa3, 0x7c7, 0xa, 0xa3, 0x5, 0xa3, 0x7c9, 0xa, 0xa3, 0x3, 
       0xa4, 0x5, 0xa4, 0x7cc, 0xa, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa5, 
       0x3, 0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x5, 0xa7, 
       0x7d6, 0xa, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x5, 0xa7, 0x7db, 
       0xa, 0xa7, 0x5, 0xa7, 0x7dd, 0xa, 0xa7, 0x3, 0xa8, 0x5, 0xa8, 0x7e0, 
       0xa, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 
       0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 
       0x5, 0xa8, 0x7ed, 0xa, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 
       0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x7, 0xa9, 0x7f5, 0xa, 0xa9, 0xc, 0xa9, 
       0xe, 0xa9, 0x7f8, 0xb, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x7fc, 
       0xa, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 
       0x802, 0xa, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x805, 0xa, 0xaa, 0x3, 0xaa, 
       0x3, 0xaa, 0x5, 0xaa, 0x809, 0xa, 0xaa, 0x3, 0xab, 0x3, 0xab, 0x3, 
       0xab, 0x3, 0xab, 0x3, 0xab, 0x7, 0xab, 0x810, 0xa, 0xab, 0xc, 0xab, 
       0xe, 0xab, 0x813, 0xb, 0xab, 0x3, 0xac, 0x3, 0xac, 0x3, 0xad, 0x3, 
       0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xaf, 0x3, 
       0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x820, 0xa, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 
       0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x826, 0xa, 0xaf, 0x7, 0xaf, 0x828, 
       0xa, 0xaf, 0xc, 0xaf, 0xe, 0xaf, 0x82b, 0xb, 0xaf, 0x3, 0xb0, 0x5, 
       0xb0, 0x82e, 0xa, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x832, 0xa, 
       0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x836, 0xa, 0xb0, 0x3, 0xb0, 
       0x3, 0xb0, 0x5, 0xb0, 0x83a, 0xa, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x5, 
       0xb0, 0x83e, 0xa, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x842, 0xa, 
       0xb0, 0x3, 0xb1, 0x5, 0xb1, 0x845, 0xa, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 
       0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x5, 0xb1, 0x84d, 0xa, 
       0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 
       0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x856, 0xa, 0xb4, 0x3, 0xb5, 0x3, 0xb5, 
       0x5, 0xb5, 0x85a, 0xa, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 
       0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x862, 0xa, 0xb7, 0x3, 0xb7, 
       0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x868, 0xa, 0xb7, 0x7, 
       0xb7, 0x86a, 0xa, 0xb7, 0xc, 0xb7, 0xe, 0xb7, 0x86d, 0xb, 0xb7, 0x3, 
       0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 0x872, 0xa, 0xb8, 0x3, 0xb8, 
       0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 0x879, 0xa, 
       0xb8, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
       0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 
       0xbb, 0x8b0, 0xa, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 
       0x3, 0xbc, 0x5, 0xbc, 0x8b7, 0xa, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 
       0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x3, 
       0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x7, 0xbe, 0x8c5, 0xa, 0xbe, 
       0xc, 0xbe, 0xe, 0xbe, 0x8c8, 0xb, 0xbe, 0x3, 0xbf, 0x3, 0xbf, 0x5, 
       0xbf, 0x8cc, 0xa, 0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x8d0, 0xa, 
       0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x8d3, 0xa, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 
       0x5, 0xc0, 0x8d7, 0xa, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 
       0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 
       0xc0, 0x8e2, 0xa, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x8e5, 0xa, 0xc0, 0x3, 
       0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 
       0xc0, 0x8ed, 0xa, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 
       0x8f2, 0xa, 0xc0, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 
       0xc2, 0x5, 0xc2, 0x8f9, 0xa, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc3, 
       0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x901, 0xa, 0xc3, 0x3, 
       0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x908, 
       0xa, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x90c, 0xa, 0xc3, 0x3, 
       0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 0x911, 0xa, 0xc4, 0x3, 0xc4, 
       0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 0x917, 0xa, 0xc4, 0x7, 
       0xc4, 0x919, 0xa, 0xc4, 0xc, 0xc4, 0xe, 0xc4, 0x91c, 0xb, 0xc4, 0x3, 
       0xc5, 0x3, 0xc5, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 
       0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 0xc6, 0x927, 0xa, 0xc6, 0x3, 0xc6, 
       0x3, 0xc6, 0x5, 0xc6, 0x92b, 0xa, 0xc6, 0x3, 0xc7, 0x5, 0xc7, 0x92e, 
       0xa, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc8, 0x3, 0xc8, 
       0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc9, 0x5, 0xc9, 0x939, 0xa, 
       0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 
       0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 
       0xca, 0x3, 0xcb, 0x3, 0xcb, 0x5, 0xcb, 0x949, 0xa, 0xcb, 0x3, 0xcb, 
       0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x950, 0xa, 
       0xcc, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 
       0xcd, 0x3, 0xce, 0x5, 0xce, 0x959, 0xa, 0xce, 0x3, 0xce, 0x3, 0xce, 
       0x3, 0xce, 0x3, 0xce, 0x5, 0xce, 0x95f, 0xa, 0xce, 0x3, 0xce, 0x3, 
       0xce, 0x5, 0xce, 0x963, 0xa, 0xce, 0x3, 0xce, 0x5, 0xce, 0x966, 0xa, 
       0xce, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 
       0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x5, 0xcf, 0x971, 0xa, 0xcf, 
       0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 
       0x7, 0xd0, 0x979, 0xa, 0xd0, 0xc, 0xd0, 0xe, 0xd0, 0x97c, 0xb, 0xd0, 
       0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 
       0x3, 0xd1, 0x5, 0xd1, 0x985, 0xa, 0xd1, 0x3, 0xd2, 0x3, 0xd2, 0x3, 
       0xd3, 0x3, 0xd3, 0x3, 0xd4, 0x3, 0xd4, 0x3, 0xd5, 0x3, 0xd5, 0x3, 
       0xd5, 0x2, 0x1c, 0x24, 0x3c, 0x4e, 0x58, 0x64, 0x74, 0x84, 0xc0, 
       0xce, 0xd8, 0xe2, 0xea, 0xf6, 0xfc, 0x104, 0x11e, 0x122, 0x126, 0x13c, 
       0x150, 0x154, 0x15c, 0x16c, 0x17a, 0x186, 0x19e, 0xd6, 0x2, 0x4, 
       0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
       0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
       0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
       0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 
       0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 
       0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 
       0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 
       0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 
       0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 
       0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 
       0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 
       0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 
       0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 
       0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 
       0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 
       0x14a, 0x14c, 0x14e, 0x150, 0x152, 0x154, 0x156, 0x158, 0x15a, 0x15c, 
       0x15e, 0x160, 0x162, 0x164, 0x166, 0x168, 0x16a, 0x16c, 0x16e, 0x170, 
       0x172, 0x174, 0x176, 0x178, 0x17a, 0x17c, 0x17e, 0x180, 0x182, 0x184, 
       0x186, 0x188, 0x18a, 0x18c, 0x18e, 0x190, 0x192, 0x194, 0x196, 0x198, 
       0x19a, 0x19c, 0x19e, 0x1a0, 0x1a2, 0x1a4, 0x1a6, 0x1a8, 0x2, 0x13, 
       0x4, 0x2, 0x67, 0x67, 0x6b, 0x6b, 0x3, 0x2, 0x7f, 0x80, 0x4, 0x2, 
       0x5f, 0x5f, 0x83, 0x83, 0x6, 0x2, 0x17, 0x17, 0x1e, 0x1e, 0x37, 0x37, 
       0x3e, 0x3e, 0x4, 0x2, 0x61, 0x63, 0x67, 0x6a, 0x5, 0x2, 0x6b, 0x6b, 
       0x6e, 0x75, 0x77, 0x78, 0x6, 0x2, 0x23, 0x23, 0x2d, 0x2d, 0x3c, 0x3c, 
       0x43, 0x43, 0x4, 0x2, 0x21, 0x21, 0x4d, 0x4d, 0x3, 0x2, 0x54, 0x59, 
       0x4, 0x2, 0x15, 0x15, 0x4f, 0x4f, 0x5, 0x2, 0x14, 0x14, 0x3f, 0x3f, 
       0x4a, 0x4a, 0x3, 0x2, 0x52, 0x53, 0x3, 0x2, 0x33, 0x35, 0x4, 0x2, 
       0x14, 0x14, 0x49, 0x49, 0x3, 0x2, 0x84, 0x85, 0x4, 0x2, 0x24, 0x24, 
       0x45, 0x45, 0x3, 0x2, 0x89, 0x8c, 0x2, 0xab4, 0x2, 0x1aa, 0x3, 0x2, 
       0x2, 0x2, 0x4, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1b1, 0x3, 0x2, 0x2, 
       0x2, 0x8, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0xa, 0x1b7, 0x3, 0x2, 0x2, 0x2, 
       0xc, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x10, 
       0x1cb, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x14, 
       0x1d8, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1c, 
       0x203, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x21e, 0x3, 0x2, 0x2, 0x2, 0x22, 0x220, 0x3, 0x2, 0x2, 0x2, 0x24, 
       0x222, 0x3, 0x2, 0x2, 0x2, 0x26, 0x232, 0x3, 0x2, 0x2, 0x2, 0x28, 
       0x23c, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x2c, 
       0x258, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x30, 
       0x27c, 0x3, 0x2, 0x2, 0x2, 0x32, 0x283, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x285, 0x3, 0x2, 0x2, 0x2, 0x36, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x38, 
       0x28f, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x3c, 
       0x2a8, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x40, 
       0x2dc, 0x3, 0x2, 0x2, 0x2, 0x42, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x44, 
       0x2fc, 0x3, 0x2, 0x2, 0x2, 0x46, 0x316, 0x3, 0x2, 0x2, 0x2, 0x48, 
       0x318, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x320, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x326, 0x3, 0x2, 0x2, 0x2, 0x50, 
       0x33f, 0x3, 0x2, 0x2, 0x2, 0x52, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x54, 
       0x34f, 0x3, 0x2, 0x2, 0x2, 0x56, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x58, 
       0x35c, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x5c, 
       0x385, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x387, 0x3, 0x2, 0x2, 0x2, 0x60, 
       0x391, 0x3, 0x2, 0x2, 0x2, 0x62, 0x393, 0x3, 0x2, 0x2, 0x2, 0x64, 
       0x395, 0x3, 0x2, 0x2, 0x2, 0x66, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x68, 
       0x3bc, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x6c, 
       0x3ca, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x70, 
       0x3e3, 0x3, 0x2, 0x2, 0x2, 0x72, 0x3e7, 0x3, 0x2, 0x2, 0x2, 0x74, 
       0x3ed, 0x3, 0x2, 0x2, 0x2, 0x76, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x78, 
       0x43f, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x452, 0x3, 0x2, 0x2, 0x2, 0x7c, 
       0x455, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x45a, 0x3, 0x2, 0x2, 0x2, 0x80, 
       0x468, 0x3, 0x2, 0x2, 0x2, 0x82, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x84, 
       0x46c, 0x3, 0x2, 0x2, 0x2, 0x86, 0x481, 0x3, 0x2, 0x2, 0x2, 0x88, 
       0x48b, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x8c, 
       0x493, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0x90, 
       0x4c4, 0x3, 0x2, 0x2, 0x2, 0x92, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0x94, 
       0x4c8, 0x3, 0x2, 0x2, 0x2, 0x96, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x98, 
       0x4d5, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x4de, 0x3, 0x2, 0x2, 0x2, 0x9c, 
       0x4e0, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0xa0, 
       0x4e6, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0xa4, 
       0x4ed, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0xa8, 
       0x4f9, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x502, 0x3, 0x2, 0x2, 0x2, 0xac, 
       0x518, 0x3, 0x2, 0x2, 0x2, 0xae, 0x51c, 0x3, 0x2, 0x2, 0x2, 0xb0, 
       0x527, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x541, 0x3, 0x2, 0x2, 0x2, 0xb4, 
       0x550, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x552, 0x3, 0x2, 0x2, 0x2, 0xb8, 
       0x55d, 0x3, 0x2, 0x2, 0x2, 0xba, 0x561, 0x3, 0x2, 0x2, 0x2, 0xbc, 
       0x573, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x575, 0x3, 0x2, 0x2, 0x2, 0xc0, 
       0x578, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x588, 0x3, 0x2, 0x2, 0x2, 0xc4, 
       0x58a, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x591, 0x3, 0x2, 0x2, 0x2, 0xc8, 
       0x594, 0x3, 0x2, 0x2, 0x2, 0xca, 0x5a0, 0x3, 0x2, 0x2, 0x2, 0xcc, 
       0x5aa, 0x3, 0x2, 0x2, 0x2, 0xce, 0x5b2, 0x3, 0x2, 0x2, 0x2, 0xd0, 
       0x5be, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x5c0, 0x3, 0x2, 0x2, 0x2, 0xd4, 
       0x5c7, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x5cb, 0x3, 0x2, 0x2, 0x2, 0xd8, 
       0x5cf, 0x3, 0x2, 0x2, 0x2, 0xda, 0x5e0, 0x3, 0x2, 0x2, 0x2, 0xdc, 
       0x5e6, 0x3, 0x2, 0x2, 0x2, 0xde, 0x5f1, 0x3, 0x2, 0x2, 0x2, 0xe0, 
       0x603, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x605, 0x3, 0x2, 0x2, 0x2, 0xe4, 
       0x619, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x62b, 0x3, 0x2, 0x2, 0x2, 0xe8, 
       0x62d, 0x3, 0x2, 0x2, 0x2, 0xea, 0x638, 0x3, 0x2, 0x2, 0x2, 0xec, 
       0x649, 0x3, 0x2, 0x2, 0x2, 0xee, 0x64f, 0x3, 0x2, 0x2, 0x2, 0xf0, 
       0x651, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x655, 0x3, 0x2, 0x2, 0x2, 0xf4, 
       0x657, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x65d, 0x3, 0x2, 0x2, 0x2, 0xf8, 
       0x677, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x679, 0x3, 0x2, 0x2, 0x2, 0xfc, 
       0x67b, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x686, 0x3, 0x2, 0x2, 0x2, 0x100, 
       0x68c, 0x3, 0x2, 0x2, 0x2, 0x102, 0x68e, 0x3, 0x2, 0x2, 0x2, 0x104, 
       0x69d, 0x3, 0x2, 0x2, 0x2, 0x106, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x108, 
       0x6b2, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x6b7, 0x3, 0x2, 0x2, 0x2, 0x10c, 
       0x6c2, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x6dc, 0x3, 0x2, 0x2, 0x2, 0x110, 
       0x6de, 0x3, 0x2, 0x2, 0x2, 0x112, 0x6e2, 0x3, 0x2, 0x2, 0x2, 0x114, 
       0x6e4, 0x3, 0x2, 0x2, 0x2, 0x116, 0x6e7, 0x3, 0x2, 0x2, 0x2, 0x118, 
       0x6eb, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x6f7, 0x3, 0x2, 0x2, 0x2, 0x11c, 
       0x6fe, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x70e, 0x3, 0x2, 0x2, 0x2, 0x120, 
       0x724, 0x3, 0x2, 0x2, 0x2, 0x122, 0x726, 0x3, 0x2, 0x2, 0x2, 0x124, 
       0x743, 0x3, 0x2, 0x2, 0x2, 0x126, 0x745, 0x3, 0x2, 0x2, 0x2, 0x128, 
       0x75e, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x761, 0x3, 0x2, 0x2, 0x2, 0x12c, 
       0x76c, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x776, 0x3, 0x2, 0x2, 0x2, 0x130, 
       0x779, 0x3, 0x2, 0x2, 0x2, 0x132, 0x77d, 0x3, 0x2, 0x2, 0x2, 0x134, 
       0x781, 0x3, 0x2, 0x2, 0x2, 0x136, 0x785, 0x3, 0x2, 0x2, 0x2, 0x138, 
       0x78a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x78e, 0x3, 0x2, 0x2, 0x2, 0x13c, 
       0x790, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x7a9, 0x3, 0x2, 0x2, 0x2, 0x140, 
       0x7ad, 0x3, 0x2, 0x2, 0x2, 0x142, 0x7af, 0x3, 0x2, 0x2, 0x2, 0x144, 
       0x7c8, 0x3, 0x2, 0x2, 0x2, 0x146, 0x7cb, 0x3, 0x2, 0x2, 0x2, 0x148, 
       0x7cf, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x7d1, 0x3, 0x2, 0x2, 0x2, 0x14c, 
       0x7dc, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x7ec, 0x3, 0x2, 0x2, 0x2, 0x150, 
       0x7ee, 0x3, 0x2, 0x2, 0x2, 0x152, 0x808, 0x3, 0x2, 0x2, 0x2, 0x154, 
       0x80a, 0x3, 0x2, 0x2, 0x2, 0x156, 0x814, 0x3, 0x2, 0x2, 0x2, 0x158, 
       0x816, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x819, 0x3, 0x2, 0x2, 0x2, 0x15c, 
       0x81c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x841, 0x3, 0x2, 0x2, 0x2, 0x160, 
       0x84c, 0x3, 0x2, 0x2, 0x2, 0x162, 0x84e, 0x3, 0x2, 0x2, 0x2, 0x164, 
       0x850, 0x3, 0x2, 0x2, 0x2, 0x166, 0x853, 0x3, 0x2, 0x2, 0x2, 0x168, 
       0x857, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x85b, 0x3, 0x2, 0x2, 0x2, 0x16c, 
       0x85e, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x878, 0x3, 0x2, 0x2, 0x2, 0x170, 
       0x87a, 0x3, 0x2, 0x2, 0x2, 0x172, 0x87c, 0x3, 0x2, 0x2, 0x2, 0x174, 
       0x8af, 0x3, 0x2, 0x2, 0x2, 0x176, 0x8b6, 0x3, 0x2, 0x2, 0x2, 0x178, 
       0x8b8, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x8be, 0x3, 0x2, 0x2, 0x2, 0x17c, 
       0x8cb, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x8f1, 0x3, 0x2, 0x2, 0x2, 0x180, 
       0x8f3, 0x3, 0x2, 0x2, 0x2, 0x182, 0x8f5, 0x3, 0x2, 0x2, 0x2, 0x184, 
       0x90b, 0x3, 0x2, 0x2, 0x2, 0x186, 0x90d, 0x3, 0x2, 0x2, 0x2, 0x188, 
       0x91d, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x92a, 0x3, 0x2, 0x2, 0x2, 0x18c, 
       0x92d, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x932, 0x3, 0x2, 0x2, 0x2, 0x190, 
       0x938, 0x3, 0x2, 0x2, 0x2, 0x192, 0x942, 0x3, 0x2, 0x2, 0x2, 0x194, 
       0x946, 0x3, 0x2, 0x2, 0x2, 0x196, 0x94d, 0x3, 0x2, 0x2, 0x2, 0x198, 
       0x951, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x965, 0x3, 0x2, 0x2, 0x2, 0x19c, 
       0x970, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x972, 0x3, 0x2, 0x2, 0x2, 0x1a0, 
       0x984, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x986, 0x3, 0x2, 0x2, 0x2, 0x1a4, 
       0x988, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x98a, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
       0x98c, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x7, 0x6d, 0x2, 0x2, 0x1ab, 
       0x1ac, 0x7, 0x6d, 0x2, 0x2, 0x1ac, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1ad, 
       0x1b0, 0x7, 0x8d, 0x2, 0x2, 0x1ae, 0x1b0, 0x5, 0x6, 0x4, 0x2, 0x1af, 
       0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1b0, 
       0x5, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x8d, 0x2, 0x2, 0x1b2, 
       0x7, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b6, 0x7, 0x8d, 0x2, 0x2, 0x1b4, 
       0x1b6, 0x5, 0x182, 0xc2, 0x2, 0x1b5, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b5, 
       0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1b7, 
       0x1b8, 0x7, 0x8d, 0x2, 0x2, 0x1b8, 0xb, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
       0x1bb, 0x5, 0x84, 0x43, 0x2, 0x1ba, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1ba, 
       0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 
       0x1bd, 0x7, 0x2, 0x2, 0x3, 0x1bd, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1be, 
       0x1c8, 0x5, 0x1a0, 0xd1, 0x2, 0x1bf, 0x1c8, 0x7, 0x42, 0x2, 0x2, 
       0x1c0, 0x1c1, 0x7, 0x58, 0x2, 0x2, 0x1c1, 0x1c2, 0x5, 0x64, 0x33, 
       0x2, 0x1c2, 0x1c3, 0x7, 0x59, 0x2, 0x2, 0x1c3, 0x1c8, 0x3, 0x2, 0x2, 
       0x2, 0x1c4, 0x1c8, 0x5, 0x10, 0x9, 0x2, 0x1c5, 0x1c8, 0x5, 0x1a, 
       0xe, 0x2, 0x1c6, 0x1c8, 0x5, 0x2c, 0x17, 0x2, 0x1c7, 0x1be, 0x3, 
       0x2, 0x2, 0x2, 0x1c7, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c0, 0x3, 
       0x2, 0x2, 0x2, 0x1c7, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c5, 0x3, 
       0x2, 0x2, 0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0xf, 0x3, 
       0x2, 0x2, 0x2, 0x1c9, 0x1cc, 0x5, 0x12, 0xa, 0x2, 0x1ca, 0x1cc, 0x5, 
       0x14, 0xb, 0x2, 0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1ca, 0x3, 
       0x2, 0x2, 0x2, 0x1cc, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1d7, 0x7, 
       0x8d, 0x2, 0x2, 0x1ce, 0x1d7, 0x5, 0x172, 0xba, 0x2, 0x1cf, 0x1d7, 
       0x5, 0x164, 0xb3, 0x2, 0x1d0, 0x1d7, 0x5, 0x176, 0xbc, 0x2, 0x1d1, 
       0x1d2, 0x7, 0x69, 0x2, 0x2, 0x1d2, 0x1d7, 0x5, 0x8, 0x5, 0x2, 0x1d3, 
       0x1d4, 0x7, 0x69, 0x2, 0x2, 0x1d4, 0x1d7, 0x5, 0xb0, 0x59, 0x2, 0x1d5, 
       0x1d7, 0x5, 0x184, 0xc3, 0x2, 0x1d6, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d6, 
       0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d6, 
       0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d6, 
       0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d7, 
       0x13, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1da, 0x5, 0x16, 0xc, 0x2, 0x1d9, 
       0x1db, 0x7, 0x41, 0x2, 0x2, 0x1da, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1da, 
       0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1dc, 
       0x1dd, 0x5, 0x12, 0xa, 0x2, 0x1dd, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1de, 
       0x1e0, 0x7, 0x5e, 0x2, 0x2, 0x1df, 0x1e1, 0x5, 0x18, 0xd, 0x2, 0x1e0, 
       0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e1, 
       0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x7, 0x8d, 0x2, 0x2, 0x1e3, 
       0x1e5, 0x7, 0x5e, 0x2, 0x2, 0x1e4, 0x1e6, 0x5, 0x18, 0xd, 0x2, 0x1e5, 
       0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
       0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x5, 0xb0, 0x59, 0x2, 0x1e8, 
       0x1ea, 0x7, 0x5e, 0x2, 0x2, 0x1e9, 0x1eb, 0x5, 0x18, 0xd, 0x2, 0x1ea, 
       0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1eb, 
       0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1ec, 
       0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1ed, 
       0x17, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0x8d, 0x2, 0x2, 0x1ef, 
       0x1f1, 0x7, 0x5e, 0x2, 0x2, 0x1f0, 0x1f2, 0x5, 0x18, 0xd, 0x2, 0x1f1, 
       0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
       0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f5, 0x7, 0x41, 0x2, 0x2, 0x1f4, 
       0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f5, 
       0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x5, 0x182, 0xc2, 0x2, 0x1f7, 
       0x1f9, 0x7, 0x5e, 0x2, 0x2, 0x1f8, 0x1fa, 0x5, 0x18, 0xd, 0x2, 0x1f9, 
       0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fa, 
       0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1fb, 
       0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1fd, 
       0x1ff, 0x5, 0x1c, 0xf, 0x2, 0x1fe, 0x200, 0x5, 0x1e, 0x10, 0x2, 0x1ff, 
       0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 0x3, 0x2, 0x2, 0x2, 0x200, 
       0x201, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 0x5, 0x72, 0x3a, 0x2, 0x202, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x203, 0x205, 0x7, 0x56, 0x2, 0x2, 0x204, 
       0x206, 0x5, 0x20, 0x11, 0x2, 0x205, 0x204, 0x3, 0x2, 0x2, 0x2, 0x205, 
       0x206, 0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 0x3, 0x2, 0x2, 0x2, 0x207, 
       0x208, 0x7, 0x57, 0x2, 0x2, 0x208, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x209, 
       0x20a, 0x7, 0x58, 0x2, 0x2, 0x20a, 0x20b, 0x5, 0x124, 0x93, 0x2, 
       0x20b, 0x20d, 0x7, 0x59, 0x2, 0x2, 0x20c, 0x20e, 0x5, 0x98, 0x4d, 
       0x2, 0x20d, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 0x2, 0x2, 
       0x2, 0x20e, 0x210, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x211, 0x5, 0x19c, 
       0xcf, 0x2, 0x210, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x3, 0x2, 
       0x2, 0x2, 0x211, 0x213, 0x3, 0x2, 0x2, 0x2, 0x212, 0x214, 0x5, 0xe2, 
       0x72, 0x2, 0x213, 0x212, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x3, 0x2, 
       0x2, 0x2, 0x214, 0x216, 0x3, 0x2, 0x2, 0x2, 0x215, 0x217, 0x5, 0x10c, 
       0x87, 0x2, 0x216, 0x215, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x3, 0x2, 
       0x2, 0x2, 0x217, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x218, 0x21f, 0x5, 0x22, 
       0x12, 0x2, 0x219, 0x21f, 0x5, 0x24, 0x13, 0x2, 0x21a, 0x21b, 0x5, 
       0x22, 0x12, 0x2, 0x21b, 0x21c, 0x7, 0x81, 0x2, 0x2, 0x21c, 0x21d, 
       0x5, 0x24, 0x13, 0x2, 0x21d, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x218, 
       0x3, 0x2, 0x2, 0x2, 0x21e, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21a, 
       0x3, 0x2, 0x2, 0x2, 0x21f, 0x21, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 
       0x9, 0x2, 0x2, 0x2, 0x221, 0x23, 0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 
       0x8, 0x13, 0x1, 0x2, 0x223, 0x225, 0x5, 0x26, 0x14, 0x2, 0x224, 0x226, 
       0x7, 0x5c, 0x2, 0x2, 0x225, 0x224, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 
       0x3, 0x2, 0x2, 0x2, 0x226, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 
       0xc, 0x3, 0x2, 0x2, 0x228, 0x229, 0x7, 0x81, 0x2, 0x2, 0x229, 0x22b, 
       0x5, 0x26, 0x14, 0x2, 0x22a, 0x22c, 0x7, 0x5c, 0x2, 0x2, 0x22b, 0x22a, 
       0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22e, 
       0x3, 0x2, 0x2, 0x2, 0x22d, 0x227, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x231, 
       0x3, 0x2, 0x2, 0x2, 0x22f, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 
       0x3, 0x2, 0x2, 0x2, 0x230, 0x25, 0x3, 0x2, 0x2, 0x2, 0x231, 0x22f, 
       0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x5, 0x28, 0x15, 0x2, 0x233, 0x234, 
       0x5, 0x2a, 0x16, 0x2, 0x234, 0x27, 0x3, 0x2, 0x2, 0x2, 0x235, 0x237, 
       0x7, 0x67, 0x2, 0x2, 0x236, 0x235, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 
       0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 0x238, 0x23d, 
       0x7, 0x8d, 0x2, 0x2, 0x239, 0x23d, 0x7, 0x42, 0x2, 0x2, 0x23a, 0x23b, 
       0x7, 0x63, 0x2, 0x2, 0x23b, 0x23d, 0x7, 0x42, 0x2, 0x2, 0x23c, 0x236, 
       0x3, 0x2, 0x2, 0x2, 0x23c, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23a, 
       0x3, 0x2, 0x2, 0x2, 0x23d, 0x29, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x240, 
       0x7, 0x67, 0x2, 0x2, 0x23f, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x240, 
       0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 
       0x7, 0x8d, 0x2, 0x2, 0x242, 0x243, 0x5, 0x136, 0x9c, 0x2, 0x243, 
       0x2b, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x7, 0x58, 0x2, 0x2, 0x245, 
       0x246, 0x5, 0x56, 0x2c, 0x2, 0x246, 0x247, 0x5, 0x2e, 0x18, 0x2, 
       0x247, 0x248, 0x7, 0x5c, 0x2, 0x2, 0x248, 0x249, 0x7, 0x59, 0x2, 
       0x2, 0x249, 0x259, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 0x7, 0x58, 0x2, 
       0x2, 0x24b, 0x24c, 0x7, 0x5c, 0x2, 0x2, 0x24c, 0x24d, 0x5, 0x2e, 
       0x18, 0x2, 0x24d, 0x24e, 0x5, 0x56, 0x2c, 0x2, 0x24e, 0x24f, 0x7, 
       0x59, 0x2, 0x2, 0x24f, 0x259, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x7, 
       0x58, 0x2, 0x2, 0x251, 0x252, 0x5, 0x56, 0x2c, 0x2, 0x252, 0x253, 
       0x5, 0x2e, 0x18, 0x2, 0x253, 0x254, 0x7, 0x5c, 0x2, 0x2, 0x254, 0x255, 
       0x5, 0x2e, 0x18, 0x2, 0x255, 0x256, 0x5, 0x56, 0x2c, 0x2, 0x256, 
       0x257, 0x7, 0x59, 0x2, 0x2, 0x257, 0x259, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x244, 0x3, 0x2, 0x2, 0x2, 0x258, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x258, 
       0x250, 0x3, 0x2, 0x2, 0x2, 0x259, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x27b, 0x7, 0x61, 0x2, 0x2, 0x25b, 0x27b, 0x7, 0x62, 0x2, 0x2, 0x25c, 
       0x27b, 0x7, 0x63, 0x2, 0x2, 0x25d, 0x27b, 0x7, 0x64, 0x2, 0x2, 0x25e, 
       0x27b, 0x7, 0x65, 0x2, 0x2, 0x25f, 0x27b, 0x7, 0x66, 0x2, 0x2, 0x260, 
       0x27b, 0x7, 0x67, 0x2, 0x2, 0x261, 0x27b, 0x7, 0x68, 0x2, 0x2, 0x262, 
       0x27b, 0x7, 0x76, 0x2, 0x2, 0x263, 0x27b, 0x5, 0x2, 0x2, 0x2, 0x264, 
       0x27b, 0x7, 0x6e, 0x2, 0x2, 0x265, 0x27b, 0x7, 0x6f, 0x2, 0x2, 0x266, 
       0x27b, 0x7, 0x70, 0x2, 0x2, 0x267, 0x27b, 0x7, 0x71, 0x2, 0x2, 0x268, 
       0x27b, 0x7, 0x72, 0x2, 0x2, 0x269, 0x27b, 0x7, 0x73, 0x2, 0x2, 0x26a, 
       0x27b, 0x7, 0x74, 0x2, 0x2, 0x26b, 0x27b, 0x7, 0x75, 0x2, 0x2, 0x26c, 
       0x27b, 0x7, 0x77, 0x2, 0x2, 0x26d, 0x27b, 0x7, 0x78, 0x2, 0x2, 0x26e, 
       0x27b, 0x7, 0x6b, 0x2, 0x2, 0x26f, 0x27b, 0x7, 0x79, 0x2, 0x2, 0x270, 
       0x27b, 0x7, 0x7a, 0x2, 0x2, 0x271, 0x27b, 0x7, 0x6c, 0x2, 0x2, 0x272, 
       0x27b, 0x7, 0x6d, 0x2, 0x2, 0x273, 0x27b, 0x7, 0x7b, 0x2, 0x2, 0x274, 
       0x27b, 0x7, 0x7c, 0x2, 0x2, 0x275, 0x27b, 0x7, 0x7d, 0x2, 0x2, 0x276, 
       0x27b, 0x7, 0x7e, 0x2, 0x2, 0x277, 0x27b, 0x7, 0x81, 0x2, 0x2, 0x278, 
       0x27b, 0x7, 0x60, 0x2, 0x2, 0x279, 0x27b, 0x7, 0x82, 0x2, 0x2, 0x27a, 
       0x25a, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x25c, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x25e, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x260, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x261, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x262, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x263, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x264, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x265, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x266, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x267, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x268, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x269, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x26a, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x26c, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x26e, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x270, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x271, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x272, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x273, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x274, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x275, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x276, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x277, 0x3, 0x2, 0x2, 0x2, 0x27a, 
       0x278, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27b, 
       0x2f, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 0x5, 0x18a, 0xc6, 0x2, 0x27d, 
       0x27f, 0x7, 0x58, 0x2, 0x2, 0x27e, 0x280, 0x5, 0x3e, 0x20, 0x2, 0x27f, 
       0x27e, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x3, 0x2, 0x2, 0x2, 0x280, 
       0x281, 0x3, 0x2, 0x2, 0x2, 0x281, 0x282, 0x7, 0x59, 0x2, 0x2, 0x282, 
       0x31, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x9, 0x3, 0x2, 0x2, 0x284, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x285, 0x286, 0x5, 0x38, 0x1d, 0x2, 0x286, 
       0x287, 0x7, 0x6c, 0x2, 0x2, 0x287, 0x288, 0x5, 0x116, 0x8c, 0x2, 
       0x288, 0x289, 0x7, 0x6d, 0x2, 0x2, 0x289, 0x28a, 0x7, 0x58, 0x2, 
       0x2, 0x28a, 0x28b, 0x5, 0x64, 0x33, 0x2, 0x28b, 0x28c, 0x7, 0x59, 
       0x2, 0x2, 0x28c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x9, 0x4, 
       0x2, 0x2, 0x28e, 0x37, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x9, 0x5, 
       0x2, 0x2, 0x290, 0x39, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x7, 0x48, 
       0x2, 0x2, 0x292, 0x293, 0x7, 0x58, 0x2, 0x2, 0x293, 0x294, 0x5, 0x64, 
       0x33, 0x2, 0x294, 0x295, 0x7, 0x59, 0x2, 0x2, 0x295, 0x29c, 0x3, 
       0x2, 0x2, 0x2, 0x296, 0x297, 0x7, 0x48, 0x2, 0x2, 0x297, 0x298, 0x7, 
       0x58, 0x2, 0x2, 0x298, 0x299, 0x5, 0x116, 0x8c, 0x2, 0x299, 0x29a, 
       0x7, 0x59, 0x2, 0x2, 0x29a, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x291, 
       0x3, 0x2, 0x2, 0x2, 0x29b, 0x296, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x3b, 
       0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0x8, 0x1f, 0x1, 0x2, 0x29e, 0x2a9, 
       0x5, 0xe, 0x8, 0x2, 0x29f, 0x2a9, 0x5, 0x30, 0x19, 0x2, 0x2a0, 0x2a1, 
       0x5, 0xac, 0x57, 0x2, 0x2a1, 0x2a2, 0x5, 0x13e, 0xa0, 0x2, 0x2a2, 
       0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 0x5, 0x18a, 0xc6, 0x2, 0x2a4, 
       0x2a5, 0x5, 0x13e, 0xa0, 0x2, 0x2a5, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a6, 
       0x2a9, 0x5, 0x34, 0x1b, 0x2, 0x2a7, 0x2a9, 0x5, 0x3a, 0x1e, 0x2, 
       0x2a8, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x29f, 0x3, 0x2, 0x2, 0x2, 
       0x2a8, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a3, 0x3, 0x2, 0x2, 0x2, 
       0x2a8, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a7, 0x3, 0x2, 0x2, 0x2, 
       0x2a9, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0xc, 0xc, 0x2, 0x2, 
       0x2ab, 0x2ac, 0x7, 0x56, 0x2, 0x2, 0x2ac, 0x2ad, 0x5, 0x140, 0xa1, 
       0x2, 0x2ad, 0x2ae, 0x7, 0x57, 0x2, 0x2, 0x2ae, 0x2c3, 0x3, 0x2, 0x2, 
       0x2, 0x2af, 0x2b0, 0xc, 0xb, 0x2, 0x2, 0x2b0, 0x2b2, 0x7, 0x58, 0x2, 
       0x2, 0x2b1, 0x2b3, 0x5, 0x3e, 0x20, 0x2, 0x2b2, 0x2b1, 0x3, 0x2, 
       0x2, 0x2, 0x2b2, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x3, 0x2, 
       0x2, 0x2, 0x2b4, 0x2c3, 0x7, 0x59, 0x2, 0x2, 0x2b5, 0x2b6, 0xc, 0x7, 
       0x2, 0x2, 0x2b6, 0x2b8, 0x5, 0x36, 0x1c, 0x2, 0x2b7, 0x2b9, 0x7, 
       0x41, 0x2, 0x2, 0x2b8, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2b9, 0x3, 
       0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 0x5, 
       0x10, 0x9, 0x2, 0x2bb, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2bd, 0xc, 
       0x6, 0x2, 0x2, 0x2bd, 0x2be, 0x5, 0x36, 0x1c, 0x2, 0x2be, 0x2bf, 
       0x5, 0x40, 0x21, 0x2, 0x2bf, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 
       0xc, 0x5, 0x2, 0x2, 0x2c1, 0x2c3, 0x5, 0x32, 0x1a, 0x2, 0x2c2, 0x2aa, 
       0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2b5, 
       0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c0, 
       0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c2, 
       0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x3d, 
       0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 
       0x5, 0x13c, 0x9f, 0x2, 0x2c8, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2cb, 
       0x5, 0x16, 0xc, 0x2, 0x2ca, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 
       0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 
       0x5, 0xae, 0x58, 0x2, 0x2cd, 0x2ce, 0x7, 0x5e, 0x2, 0x2, 0x2ce, 0x2cf, 
       0x7, 0x69, 0x2, 0x2, 0x2cf, 0x2d0, 0x5, 0xae, 0x58, 0x2, 0x2d0, 0x2dd, 
       0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 0x5, 0x16, 0xc, 0x2, 0x2d2, 0x2d3, 
       0x7, 0x41, 0x2, 0x2, 0x2d3, 0x2d4, 0x5, 0x182, 0xc2, 0x2, 0x2d4, 
       0x2d5, 0x7, 0x5e, 0x2, 0x2, 0x2d5, 0x2d6, 0x7, 0x69, 0x2, 0x2, 0x2d6, 
       0x2d7, 0x5, 0xae, 0x58, 0x2, 0x2d7, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2d8, 
       0x2d9, 0x7, 0x69, 0x2, 0x2, 0x2d9, 0x2dd, 0x5, 0xae, 0x58, 0x2, 0x2da, 
       0x2db, 0x7, 0x69, 0x2, 0x2, 0x2db, 0x2dd, 0x5, 0xb0, 0x59, 0x2, 0x2dc, 
       0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2dc, 
       0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2dd, 
       0x41, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2fb, 0x5, 0x3c, 0x1f, 0x2, 0x2df, 
       0x2e0, 0x7, 0x7f, 0x2, 0x2, 0x2e0, 0x2fb, 0x5, 0x56, 0x2c, 0x2, 0x2e1, 
       0x2e2, 0x7, 0x80, 0x2, 0x2, 0x2e2, 0x2fb, 0x5, 0x56, 0x2c, 0x2, 0x2e3, 
       0x2e4, 0x5, 0x44, 0x23, 0x2, 0x2e4, 0x2e5, 0x5, 0x56, 0x2c, 0x2, 
       0x2e5, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 0x7, 0x3b, 0x2, 0x2, 
       0x2e7, 0x2fb, 0x5, 0x42, 0x22, 0x2, 0x2e8, 0x2e9, 0x7, 0x3b, 0x2, 
       0x2, 0x2e9, 0x2ea, 0x7, 0x58, 0x2, 0x2, 0x2ea, 0x2eb, 0x5, 0x116, 
       0x8c, 0x2, 0x2eb, 0x2ec, 0x7, 0x59, 0x2, 0x2, 0x2ec, 0x2fb, 0x3, 
       0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0x7, 0x3b, 0x2, 0x2, 0x2ee, 0x2ef, 0x7, 
       0x5c, 0x2, 0x2, 0x2ef, 0x2f0, 0x7, 0x58, 0x2, 0x2, 0x2f0, 0x2f1, 
       0x7, 0x8d, 0x2, 0x2, 0x2f1, 0x2fb, 0x7, 0x59, 0x2, 0x2, 0x2f2, 0x2f3, 
       0x7, 0x9, 0x2, 0x2, 0x2f3, 0x2f4, 0x7, 0x58, 0x2, 0x2, 0x2f4, 0x2f5, 
       0x5, 0x116, 0x8c, 0x2, 0x2f5, 0x2f6, 0x7, 0x59, 0x2, 0x2, 0x2f6, 
       0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2fb, 0x5, 0x54, 0x2b, 0x2, 0x2f8, 
       0x2fb, 0x5, 0x46, 0x24, 0x2, 0x2f9, 0x2fb, 0x5, 0x52, 0x2a, 0x2, 
       0x2fa, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2df, 0x3, 0x2, 0x2, 0x2, 
       0x2fa, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2e3, 0x3, 0x2, 0x2, 0x2, 
       0x2fa, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2e8, 0x3, 0x2, 0x2, 0x2, 
       0x2fa, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f2, 0x3, 0x2, 0x2, 0x2, 
       0x2fa, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f8, 0x3, 0x2, 0x2, 0x2, 
       0x2fa, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x43, 0x3, 0x2, 0x2, 0x2, 
       0x2fc, 0x2fd, 0x9, 0x6, 0x2, 0x2, 0x2fd, 0x45, 0x3, 0x2, 0x2, 0x2, 
       0x2fe, 0x300, 0x7, 0x5e, 0x2, 0x2, 0x2ff, 0x2fe, 0x3, 0x2, 0x2, 0x2, 
       0x2ff, 0x300, 0x3, 0x2, 0x2, 0x2, 0x300, 0x301, 0x3, 0x2, 0x2, 0x2, 
       0x301, 0x303, 0x7, 0x2f, 0x2, 0x2, 0x302, 0x304, 0x5, 0x48, 0x25, 
       0x2, 0x303, 0x302, 0x3, 0x2, 0x2, 0x2, 0x303, 0x304, 0x3, 0x2, 0x2, 
       0x2, 0x304, 0x305, 0x3, 0x2, 0x2, 0x2, 0x305, 0x307, 0x5, 0x4a, 0x26, 
       0x2, 0x306, 0x308, 0x5, 0x50, 0x29, 0x2, 0x307, 0x306, 0x3, 0x2, 
       0x2, 0x2, 0x307, 0x308, 0x3, 0x2, 0x2, 0x2, 0x308, 0x317, 0x3, 0x2, 
       0x2, 0x2, 0x309, 0x30b, 0x7, 0x5e, 0x2, 0x2, 0x30a, 0x309, 0x3, 0x2, 
       0x2, 0x2, 0x30a, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30c, 0x3, 0x2, 
       0x2, 0x2, 0x30c, 0x30e, 0x7, 0x2f, 0x2, 0x2, 0x30d, 0x30f, 0x5, 0x48, 
       0x25, 0x2, 0x30e, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x3, 0x2, 
       0x2, 0x2, 0x30f, 0x310, 0x3, 0x2, 0x2, 0x2, 0x310, 0x311, 0x7, 0x58, 
       0x2, 0x2, 0x311, 0x312, 0x5, 0x116, 0x8c, 0x2, 0x312, 0x314, 0x7, 
       0x59, 0x2, 0x2, 0x313, 0x315, 0x5, 0x50, 0x29, 0x2, 0x314, 0x313, 
       0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x3, 0x2, 0x2, 0x2, 0x315, 0x317, 
       0x3, 0x2, 0x2, 0x2, 0x316, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x316, 0x30a, 
       0x3, 0x2, 0x2, 0x2, 0x317, 0x47, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 
       0x7, 0x58, 0x2, 0x2, 0x319, 0x31a, 0x5, 0x3e, 0x20, 0x2, 0x31a, 0x31b, 
       0x7, 0x59, 0x2, 0x2, 0x31b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31e, 
       0x5, 0xa6, 0x54, 0x2, 0x31d, 0x31f, 0x5, 0x4c, 0x27, 0x2, 0x31e, 
       0x31d, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x31f, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x320, 0x322, 0x5, 0x10e, 0x88, 0x2, 0x321, 
       0x323, 0x5, 0x4c, 0x27, 0x2, 0x322, 0x321, 0x3, 0x2, 0x2, 0x2, 0x322, 
       0x323, 0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 0x3, 0x2, 0x2, 0x2, 0x324, 
       0x325, 0x5, 0x4e, 0x28, 0x2, 0x325, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x326, 
       0x327, 0x8, 0x28, 0x1, 0x2, 0x327, 0x328, 0x7, 0x56, 0x2, 0x2, 0x328, 
       0x329, 0x5, 0x64, 0x33, 0x2, 0x329, 0x32b, 0x7, 0x57, 0x2, 0x2, 0x32a, 
       0x32c, 0x5, 0xe2, 0x72, 0x2, 0x32b, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32b, 
       0x32c, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x336, 0x3, 0x2, 0x2, 0x2, 0x32d, 
       0x32e, 0xc, 0x3, 0x2, 0x2, 0x32e, 0x32f, 0x7, 0x56, 0x2, 0x2, 0x32f, 
       0x330, 0x5, 0x66, 0x34, 0x2, 0x330, 0x332, 0x7, 0x57, 0x2, 0x2, 0x331, 
       0x333, 0x5, 0xe2, 0x72, 0x2, 0x332, 0x331, 0x3, 0x2, 0x2, 0x2, 0x332, 
       0x333, 0x3, 0x2, 0x2, 0x2, 0x333, 0x335, 0x3, 0x2, 0x2, 0x2, 0x334, 
       0x32d, 0x3, 0x2, 0x2, 0x2, 0x335, 0x338, 0x3, 0x2, 0x2, 0x2, 0x336, 
       0x334, 0x3, 0x2, 0x2, 0x2, 0x336, 0x337, 0x3, 0x2, 0x2, 0x2, 0x337, 
       0x4f, 0x3, 0x2, 0x2, 0x2, 0x338, 0x336, 0x3, 0x2, 0x2, 0x2, 0x339, 
       0x33b, 0x7, 0x58, 0x2, 0x2, 0x33a, 0x33c, 0x5, 0x3e, 0x20, 0x2, 0x33b, 
       0x33a, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x33c, 
       0x33d, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x340, 0x7, 0x59, 0x2, 0x2, 0x33e, 
       0x340, 0x5, 0x13e, 0xa0, 0x2, 0x33f, 0x339, 0x3, 0x2, 0x2, 0x2, 0x33f, 
       0x33e, 0x3, 0x2, 0x2, 0x2, 0x340, 0x51, 0x3, 0x2, 0x2, 0x2, 0x341, 
       0x343, 0x7, 0x5e, 0x2, 0x2, 0x342, 0x341, 0x3, 0x2, 0x2, 0x2, 0x342, 
       0x343, 0x3, 0x2, 0x2, 0x2, 0x343, 0x344, 0x3, 0x2, 0x2, 0x2, 0x344, 
       0x345, 0x7, 0x1b, 0x2, 0x2, 0x345, 0x34e, 0x5, 0x56, 0x2c, 0x2, 0x346, 
       0x348, 0x7, 0x5e, 0x2, 0x2, 0x347, 0x346, 0x3, 0x2, 0x2, 0x2, 0x347, 
       0x348, 0x3, 0x2, 0x2, 0x2, 0x348, 0x349, 0x3, 0x2, 0x2, 0x2, 0x349, 
       0x34a, 0x7, 0x1b, 0x2, 0x2, 0x34a, 0x34b, 0x7, 0x56, 0x2, 0x2, 0x34b, 
       0x34c, 0x7, 0x57, 0x2, 0x2, 0x34c, 0x34e, 0x5, 0x56, 0x2c, 0x2, 0x34d, 
       0x342, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x347, 0x3, 0x2, 0x2, 0x2, 0x34e, 
       0x53, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x350, 0x7, 0x30, 0x2, 0x2, 0x350, 
       0x351, 0x7, 0x58, 0x2, 0x2, 0x351, 0x352, 0x5, 0x64, 0x33, 0x2, 0x352, 
       0x353, 0x7, 0x59, 0x2, 0x2, 0x353, 0x55, 0x3, 0x2, 0x2, 0x2, 0x354, 
       0x35b, 0x5, 0x42, 0x22, 0x2, 0x355, 0x356, 0x7, 0x58, 0x2, 0x2, 0x356, 
       0x357, 0x5, 0x116, 0x8c, 0x2, 0x357, 0x358, 0x7, 0x59, 0x2, 0x2, 
       0x358, 0x359, 0x5, 0x56, 0x2c, 0x2, 0x359, 0x35b, 0x3, 0x2, 0x2, 
       0x2, 0x35a, 0x354, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x355, 0x3, 0x2, 0x2, 
       0x2, 0x35b, 0x57, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 0x8, 0x2d, 0x1, 
       0x2, 0x35d, 0x35e, 0x5, 0x56, 0x2c, 0x2, 0x35e, 0x365, 0x3, 0x2, 
       0x2, 0x2, 0x35f, 0x360, 0xc, 0x3, 0x2, 0x2, 0x360, 0x361, 0x5, 0x5a, 
       0x2e, 0x2, 0x361, 0x362, 0x5, 0x56, 0x2c, 0x2, 0x362, 0x364, 0x3, 
       0x2, 0x2, 0x2, 0x363, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x364, 0x367, 0x3, 
       0x2, 0x2, 0x2, 0x365, 0x363, 0x3, 0x2, 0x2, 0x2, 0x365, 0x366, 0x3, 
       0x2, 0x2, 0x2, 0x366, 0x59, 0x3, 0x2, 0x2, 0x2, 0x367, 0x365, 0x3, 
       0x2, 0x2, 0x2, 0x368, 0x37d, 0x7, 0x60, 0x2, 0x2, 0x369, 0x37d, 0x7, 
       0x82, 0x2, 0x2, 0x36a, 0x37d, 0x7, 0x63, 0x2, 0x2, 0x36b, 0x37d, 
       0x7, 0x64, 0x2, 0x2, 0x36c, 0x37d, 0x7, 0x65, 0x2, 0x2, 0x36d, 0x37d, 
       0x7, 0x61, 0x2, 0x2, 0x36e, 0x37d, 0x7, 0x62, 0x2, 0x2, 0x36f, 0x37d, 
       0x7, 0x76, 0x2, 0x2, 0x370, 0x37d, 0x5, 0x2, 0x2, 0x2, 0x371, 0x37d, 
       0x7, 0x6c, 0x2, 0x2, 0x372, 0x37d, 0x7, 0x6d, 0x2, 0x2, 0x373, 0x37d, 
       0x7, 0x7b, 0x2, 0x2, 0x374, 0x37d, 0x7, 0x7c, 0x2, 0x2, 0x375, 0x37d, 
       0x7, 0x79, 0x2, 0x2, 0x376, 0x37d, 0x7, 0x7a, 0x2, 0x2, 0x377, 0x37d, 
       0x7, 0x67, 0x2, 0x2, 0x378, 0x37d, 0x7, 0x66, 0x2, 0x2, 0x379, 0x37d, 
       0x7, 0x68, 0x2, 0x2, 0x37a, 0x37d, 0x7, 0x7d, 0x2, 0x2, 0x37b, 0x37d, 
       0x7, 0x7e, 0x2, 0x2, 0x37c, 0x368, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x369, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x36b, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x36d, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x36f, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x370, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x371, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x372, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x373, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x374, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x375, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x376, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x377, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x378, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x379, 
       0x3, 0x2, 0x2, 0x2, 0x37c, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37b, 
       0x3, 0x2, 0x2, 0x2, 0x37d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x386, 
       0x5, 0x58, 0x2d, 0x2, 0x37f, 0x380, 0x5, 0x58, 0x2d, 0x2, 0x380, 
       0x381, 0x7, 0x5d, 0x2, 0x2, 0x381, 0x382, 0x5, 0x64, 0x33, 0x2, 0x382, 
       0x383, 0x7, 0x5b, 0x2, 0x2, 0x383, 0x384, 0x5, 0x60, 0x31, 0x2, 0x384, 
       0x386, 0x3, 0x2, 0x2, 0x2, 0x385, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x385, 
       0x37f, 0x3, 0x2, 0x2, 0x2, 0x386, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x387, 
       0x389, 0x7, 0x44, 0x2, 0x2, 0x388, 0x38a, 0x5, 0x60, 0x31, 0x2, 0x389, 
       0x388, 0x3, 0x2, 0x2, 0x2, 0x389, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x38a, 
       0x5f, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x392, 0x5, 0x5c, 0x2f, 0x2, 0x38c, 
       0x38d, 0x5, 0x58, 0x2d, 0x2, 0x38d, 0x38e, 0x5, 0x62, 0x32, 0x2, 
       0x38e, 0x38f, 0x5, 0x13a, 0x9e, 0x2, 0x38f, 0x392, 0x3, 0x2, 0x2, 
       0x2, 0x390, 0x392, 0x5, 0x5e, 0x30, 0x2, 0x391, 0x38b, 0x3, 0x2, 
       0x2, 0x2, 0x391, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x391, 0x390, 0x3, 0x2, 
       0x2, 0x2, 0x392, 0x61, 0x3, 0x2, 0x2, 0x2, 0x393, 0x394, 0x9, 0x7, 
       0x2, 0x2, 0x394, 0x63, 0x3, 0x2, 0x2, 0x2, 0x395, 0x396, 0x8, 0x33, 
       0x1, 0x2, 0x396, 0x397, 0x5, 0x60, 0x31, 0x2, 0x397, 0x39d, 0x3, 
       0x2, 0x2, 0x2, 0x398, 0x399, 0xc, 0x3, 0x2, 0x2, 0x399, 0x39a, 0x7, 
       0x81, 0x2, 0x2, 0x39a, 0x39c, 0x5, 0x60, 0x31, 0x2, 0x39b, 0x398, 
       0x3, 0x2, 0x2, 0x2, 0x39c, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x39b, 
       0x3, 0x2, 0x2, 0x2, 0x39d, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x65, 
       0x3, 0x2, 0x2, 0x2, 0x39f, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x3a1, 
       0x5, 0x5c, 0x2f, 0x2, 0x3a1, 0x67, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3bd, 
       0x5, 0x6e, 0x38, 0x2, 0x3a3, 0x3a5, 0x5, 0xe2, 0x72, 0x2, 0x3a4, 
       0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a5, 
       0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3bd, 0x5, 0x70, 0x39, 0x2, 0x3a7, 
       0x3a9, 0x5, 0xe2, 0x72, 0x2, 0x3a8, 0x3a7, 0x3, 0x2, 0x2, 0x2, 0x3a8, 
       0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3aa, 
       0x3bd, 0x5, 0x72, 0x3a, 0x2, 0x3ab, 0x3ad, 0x5, 0xe2, 0x72, 0x2, 
       0x3ac, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3ad, 0x3, 0x2, 0x2, 0x2, 
       0x3ad, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3bd, 0x5, 0x76, 0x3c, 
       0x2, 0x3af, 0x3b1, 0x5, 0xe2, 0x72, 0x2, 0x3b0, 0x3af, 0x3, 0x2, 
       0x2, 0x2, 0x3b0, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b2, 0x3, 0x2, 
       0x2, 0x2, 0x3b2, 0x3bd, 0x5, 0x78, 0x3d, 0x2, 0x3b3, 0x3b5, 0x5, 
       0xe2, 0x72, 0x2, 0x3b4, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b5, 
       0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3bd, 
       0x5, 0x80, 0x41, 0x2, 0x3b7, 0x3bd, 0x5, 0x82, 0x42, 0x2, 0x3b8, 
       0x3ba, 0x5, 0xe2, 0x72, 0x2, 0x3b9, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3b9, 
       0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3bb, 
       0x3bd, 0x5, 0x192, 0xca, 0x2, 0x3bc, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3bc, 
       0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3bc, 
       0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3bc, 
       0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3bc, 
       0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x69, 0x3, 0x2, 0x2, 0x2, 0x3be, 
       0x3c1, 0x5, 0x70, 0x39, 0x2, 0x3bf, 0x3c1, 0x5, 0x8e, 0x48, 0x2, 
       0x3c0, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3bf, 0x3, 0x2, 0x2, 0x2, 
       0x3c1, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3cb, 0x5, 0x64, 0x33, 0x2, 
       0x3c3, 0x3c5, 0x5, 0xe2, 0x72, 0x2, 0x3c4, 0x3c3, 0x3, 0x2, 0x2, 
       0x2, 0x3c4, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 0x3, 0x2, 0x2, 
       0x2, 0x3c6, 0x3c7, 0x5, 0x98, 0x4d, 0x2, 0x3c7, 0x3c8, 0x5, 0x100, 
       0x81, 0x2, 0x3c8, 0x3c9, 0x5, 0x138, 0x9d, 0x2, 0x3c9, 0x3cb, 0x3, 
       0x2, 0x2, 0x2, 0x3ca, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3c4, 0x3, 
       0x2, 0x2, 0x2, 0x3cb, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3ce, 0x5, 
       0xe2, 0x72, 0x2, 0x3cd, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3ce, 
       0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 
       0x7, 0x8d, 0x2, 0x2, 0x3d0, 0x3d1, 0x7, 0x5b, 0x2, 0x2, 0x3d1, 0x3e1, 
       0x5, 0x68, 0x35, 0x2, 0x3d2, 0x3d4, 0x5, 0xe2, 0x72, 0x2, 0x3d3, 
       0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d4, 
       0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d6, 0x7, 0xe, 0x2, 0x2, 0x3d6, 
       0x3d7, 0x5, 0x66, 0x34, 0x2, 0x3d7, 0x3d8, 0x7, 0x5b, 0x2, 0x2, 0x3d8, 
       0x3d9, 0x5, 0x68, 0x35, 0x2, 0x3d9, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3da, 
       0x3dc, 0x5, 0xe2, 0x72, 0x2, 0x3db, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x3db, 
       0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3dd, 
       0x3de, 0x7, 0x1a, 0x2, 0x2, 0x3de, 0x3df, 0x7, 0x5b, 0x2, 0x2, 0x3df, 
       0x3e1, 0x5, 0x68, 0x35, 0x2, 0x3e0, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3e0, 
       0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3e1, 
       0x6f, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e4, 0x5, 0x64, 0x33, 0x2, 0x3e3, 
       0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
       0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 0x7, 0x5a, 0x2, 0x2, 0x3e6, 
       0x71, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e9, 0x7, 0x54, 0x2, 0x2, 0x3e8, 
       0x3ea, 0x5, 0x74, 0x3b, 0x2, 0x3e9, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e9, 
       0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3eb, 
       0x3ec, 0x7, 0x55, 0x2, 0x2, 0x3ec, 0x73, 0x3, 0x2, 0x2, 0x2, 0x3ed, 
       0x3ee, 0x8, 0x3b, 0x1, 0x2, 0x3ee, 0x3ef, 0x5, 0x68, 0x35, 0x2, 0x3ef, 
       0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f1, 0xc, 0x3, 0x2, 0x2, 0x3f1, 
       0x3f3, 0x5, 0x68, 0x35, 0x2, 0x3f2, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0x3f3, 
       0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f4, 
       0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x75, 0x3, 0x2, 0x2, 0x2, 0x3f6, 
       0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f9, 0x7, 0x29, 0x2, 0x2, 0x3f8, 
       0x3fa, 0x7, 0x16, 0x2, 0x2, 0x3f9, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f9, 
       0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fb, 
       0x3fd, 0x7, 0x58, 0x2, 0x2, 0x3fc, 0x3fe, 0x5, 0x6a, 0x36, 0x2, 0x3fd, 
       0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3fe, 0x3, 0x2, 0x2, 0x2, 0x3fe, 
       0x3ff, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 0x5, 0x6c, 0x37, 0x2, 0x400, 
       0x401, 0x7, 0x59, 0x2, 0x2, 0x401, 0x402, 0x5, 0x68, 0x35, 0x2, 0x402, 
       0x41b, 0x3, 0x2, 0x2, 0x2, 0x403, 0x405, 0x7, 0x29, 0x2, 0x2, 0x404, 
       0x406, 0x7, 0x16, 0x2, 0x2, 0x405, 0x404, 0x3, 0x2, 0x2, 0x2, 0x405, 
       0x406, 0x3, 0x2, 0x2, 0x2, 0x406, 0x407, 0x3, 0x2, 0x2, 0x2, 0x407, 
       0x409, 0x7, 0x58, 0x2, 0x2, 0x408, 0x40a, 0x5, 0x6a, 0x36, 0x2, 0x409, 
       0x408, 0x3, 0x2, 0x2, 0x2, 0x409, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x40a, 
       0x40b, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40c, 0x5, 0x6c, 0x37, 0x2, 0x40c, 
       0x40d, 0x7, 0x59, 0x2, 0x2, 0x40d, 0x40e, 0x5, 0x68, 0x35, 0x2, 0x40e, 
       0x40f, 0x7, 0x1f, 0x2, 0x2, 0x40f, 0x410, 0x5, 0x68, 0x35, 0x2, 0x410, 
       0x41b, 0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 0x7, 0x40, 0x2, 0x2, 0x412, 
       0x414, 0x7, 0x58, 0x2, 0x2, 0x413, 0x415, 0x5, 0x6a, 0x36, 0x2, 0x414, 
       0x413, 0x3, 0x2, 0x2, 0x2, 0x414, 0x415, 0x3, 0x2, 0x2, 0x2, 0x415, 
       0x416, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 0x5, 0x6c, 0x37, 0x2, 0x417, 
       0x418, 0x7, 0x59, 0x2, 0x2, 0x418, 0x419, 0x5, 0x68, 0x35, 0x2, 0x419, 
       0x41b, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x41a, 
       0x403, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x411, 0x3, 0x2, 0x2, 0x2, 0x41b, 
       0x77, 0x3, 0x2, 0x2, 0x2, 0x41c, 0x41d, 0x7, 0x51, 0x2, 0x2, 0x41d, 
       0x41e, 0x7, 0x58, 0x2, 0x2, 0x41e, 0x41f, 0x5, 0x6c, 0x37, 0x2, 0x41f, 
       0x420, 0x7, 0x59, 0x2, 0x2, 0x420, 0x421, 0x5, 0x68, 0x35, 0x2, 0x421, 
       0x440, 0x3, 0x2, 0x2, 0x2, 0x422, 0x423, 0x7, 0x1c, 0x2, 0x2, 0x423, 
       0x424, 0x5, 0x68, 0x35, 0x2, 0x424, 0x425, 0x7, 0x51, 0x2, 0x2, 0x425, 
       0x426, 0x7, 0x58, 0x2, 0x2, 0x426, 0x427, 0x5, 0x64, 0x33, 0x2, 0x427, 
       0x428, 0x7, 0x59, 0x2, 0x2, 0x428, 0x429, 0x7, 0x5a, 0x2, 0x2, 0x429, 
       0x440, 0x3, 0x2, 0x2, 0x2, 0x42a, 0x42b, 0x7, 0x26, 0x2, 0x2, 0x42b, 
       0x42c, 0x7, 0x58, 0x2, 0x2, 0x42c, 0x42e, 0x5, 0x6a, 0x36, 0x2, 0x42d, 
       0x42f, 0x5, 0x6c, 0x37, 0x2, 0x42e, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x42e, 
       0x42f, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x430, 0x3, 0x2, 0x2, 0x2, 0x430, 
       0x432, 0x7, 0x5a, 0x2, 0x2, 0x431, 0x433, 0x5, 0x64, 0x33, 0x2, 0x432, 
       0x431, 0x3, 0x2, 0x2, 0x2, 0x432, 0x433, 0x3, 0x2, 0x2, 0x2, 0x433, 
       0x434, 0x3, 0x2, 0x2, 0x2, 0x434, 0x435, 0x7, 0x59, 0x2, 0x2, 0x435, 
       0x436, 0x5, 0x68, 0x35, 0x2, 0x436, 0x440, 0x3, 0x2, 0x2, 0x2, 0x437, 
       0x438, 0x7, 0x26, 0x2, 0x2, 0x438, 0x439, 0x7, 0x58, 0x2, 0x2, 0x439, 
       0x43a, 0x5, 0x7c, 0x3f, 0x2, 0x43a, 0x43b, 0x7, 0x5b, 0x2, 0x2, 0x43b, 
       0x43c, 0x5, 0x7e, 0x40, 0x2, 0x43c, 0x43d, 0x7, 0x59, 0x2, 0x2, 0x43d, 
       0x43e, 0x5, 0x68, 0x35, 0x2, 0x43e, 0x440, 0x3, 0x2, 0x2, 0x2, 0x43f, 
       0x41c, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x422, 0x3, 0x2, 0x2, 0x2, 0x43f, 
       0x42a, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x437, 0x3, 0x2, 0x2, 0x2, 0x440, 
       0x79, 0x3, 0x2, 0x2, 0x2, 0x441, 0x443, 0x5, 0xe2, 0x72, 0x2, 0x442, 
       0x441, 0x3, 0x2, 0x2, 0x2, 0x442, 0x443, 0x3, 0x2, 0x2, 0x2, 0x443, 
       0x444, 0x3, 0x2, 0x2, 0x2, 0x444, 0x445, 0x5, 0x98, 0x4d, 0x2, 0x445, 
       0x446, 0x5, 0x100, 0x81, 0x2, 0x446, 0x453, 0x3, 0x2, 0x2, 0x2, 0x447, 
       0x449, 0x5, 0xe2, 0x72, 0x2, 0x448, 0x447, 0x3, 0x2, 0x2, 0x2, 0x448, 
       0x449, 0x3, 0x2, 0x2, 0x2, 0x449, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x44a, 
       0x44c, 0x5, 0x98, 0x4d, 0x2, 0x44b, 0x44d, 0x5, 0x114, 0x8b, 0x2, 
       0x44c, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x44d, 0x3, 0x2, 0x2, 0x2, 
       0x44d, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x44f, 0x7, 0x56, 0x2, 0x2, 
       0x44f, 0x450, 0x5, 0x19e, 0xd0, 0x2, 0x450, 0x451, 0x7, 0x57, 0x2, 
       0x2, 0x451, 0x453, 0x3, 0x2, 0x2, 0x2, 0x452, 0x442, 0x3, 0x2, 0x2, 
       0x2, 0x452, 0x448, 0x3, 0x2, 0x2, 0x2, 0x453, 0x7b, 0x3, 0x2, 0x2, 
       0x2, 0x454, 0x456, 0x5, 0xe2, 0x72, 0x2, 0x455, 0x454, 0x3, 0x2, 
       0x2, 0x2, 0x455, 0x456, 0x3, 0x2, 0x2, 0x2, 0x456, 0x457, 0x3, 0x2, 
       0x2, 0x2, 0x457, 0x458, 0x5, 0x98, 0x4d, 0x2, 0x458, 0x459, 0x5, 
       0x100, 0x81, 0x2, 0x459, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x45a, 0x45b, 
       0x5, 0x140, 0xa1, 0x2, 0x45b, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x45d, 
       0x7, 0xd, 0x2, 0x2, 0x45d, 0x469, 0x7, 0x5a, 0x2, 0x2, 0x45e, 0x45f, 
       0x7, 0x18, 0x2, 0x2, 0x45f, 0x469, 0x7, 0x5a, 0x2, 0x2, 0x460, 0x462, 
       0x7, 0x38, 0x2, 0x2, 0x461, 0x463, 0x5, 0x140, 0xa1, 0x2, 0x462, 
       0x461, 0x3, 0x2, 0x2, 0x2, 0x462, 0x463, 0x3, 0x2, 0x2, 0x2, 0x463, 
       0x464, 0x3, 0x2, 0x2, 0x2, 0x464, 0x469, 0x7, 0x5a, 0x2, 0x2, 0x465, 
       0x466, 0x7, 0x28, 0x2, 0x2, 0x466, 0x467, 0x7, 0x8d, 0x2, 0x2, 0x467, 
       0x469, 0x7, 0x5a, 0x2, 0x2, 0x468, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x468, 
       0x45e, 0x3, 0x2, 0x2, 0x2, 0x468, 0x460, 0x3, 0x2, 0x2, 0x2, 0x468, 
       0x465, 0x3, 0x2, 0x2, 0x2, 0x469, 0x81, 0x3, 0x2, 0x2, 0x2, 0x46a, 
       0x46b, 0x5, 0x88, 0x45, 0x2, 0x46b, 0x83, 0x3, 0x2, 0x2, 0x2, 0x46c, 
       0x46d, 0x8, 0x43, 0x1, 0x2, 0x46d, 0x46e, 0x5, 0x86, 0x44, 0x2, 0x46e, 
       0x473, 0x3, 0x2, 0x2, 0x2, 0x46f, 0x470, 0xc, 0x3, 0x2, 0x2, 0x470, 
       0x472, 0x5, 0x86, 0x44, 0x2, 0x471, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x472, 
       0x475, 0x3, 0x2, 0x2, 0x2, 0x473, 0x471, 0x3, 0x2, 0x2, 0x2, 0x473, 
       0x474, 0x3, 0x2, 0x2, 0x2, 0x474, 0x85, 0x3, 0x2, 0x2, 0x2, 0x475, 
       0x473, 0x3, 0x2, 0x2, 0x2, 0x476, 0x482, 0x5, 0x88, 0x45, 0x2, 0x477, 
       0x482, 0x5, 0x8a, 0x46, 0x2, 0x478, 0x482, 0x5, 0x12a, 0x96, 0x2, 
       0x479, 0x482, 0x5, 0x178, 0xbd, 0x2, 0x47a, 0x482, 0x5, 0x190, 0xc9, 
       0x2, 0x47b, 0x482, 0x5, 0x18c, 0xc7, 0x2, 0x47c, 0x482, 0x5, 0x18e, 
       0xc8, 0x2, 0x47d, 0x482, 0x5, 0xe0, 0x71, 0x2, 0x47e, 0x482, 0x5, 
       0xc6, 0x64, 0x2, 0x47f, 0x482, 0x5, 0x92, 0x4a, 0x2, 0x480, 0x482, 
       0x5, 0x94, 0x4b, 0x2, 0x481, 0x476, 0x3, 0x2, 0x2, 0x2, 0x481, 0x477, 
       0x3, 0x2, 0x2, 0x2, 0x481, 0x478, 0x3, 0x2, 0x2, 0x2, 0x481, 0x479, 
       0x3, 0x2, 0x2, 0x2, 0x481, 0x47a, 0x3, 0x2, 0x2, 0x2, 0x481, 0x47b, 
       0x3, 0x2, 0x2, 0x2, 0x481, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x481, 0x47d, 
       0x3, 0x2, 0x2, 0x2, 0x481, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x481, 0x47f, 
       0x3, 0x2, 0x2, 0x2, 0x481, 0x480, 0x3, 0x2, 0x2, 0x2, 0x482, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x483, 0x48c, 0x5, 0x8e, 0x48, 0x2, 0x484, 0x48c, 
       0x5, 0xde, 0x70, 0x2, 0x485, 0x48c, 0x5, 0xd2, 0x6a, 0x2, 0x486, 
       0x48c, 0x5, 0xd6, 0x6c, 0x2, 0x487, 0x48c, 0x5, 0xdc, 0x6f, 0x2, 
       0x488, 0x48c, 0x5, 0x90, 0x49, 0x2, 0x489, 0x48c, 0x5, 0x8c, 0x47, 
       0x2, 0x48a, 0x48c, 0x5, 0xba, 0x5e, 0x2, 0x48b, 0x483, 0x3, 0x2, 
       0x2, 0x2, 0x48b, 0x484, 0x3, 0x2, 0x2, 0x2, 0x48b, 0x485, 0x3, 0x2, 
       0x2, 0x2, 0x48b, 0x486, 0x3, 0x2, 0x2, 0x2, 0x48b, 0x487, 0x3, 0x2, 
       0x2, 0x2, 0x48b, 0x488, 0x3, 0x2, 0x2, 0x2, 0x48b, 0x489, 0x3, 0x2, 
       0x2, 0x2, 0x48b, 0x48a, 0x3, 0x2, 0x2, 0x2, 0x48c, 0x89, 0x3, 0x2, 
       0x2, 0x2, 0x48d, 0x48f, 0x5, 0xe2, 0x72, 0x2, 0x48e, 0x48d, 0x3, 
       0x2, 0x2, 0x2, 0x48e, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x490, 0x3, 
       0x2, 0x2, 0x2, 0x490, 0x491, 0x5, 0x100, 0x81, 0x2, 0x491, 0x492, 
       0x7, 0x5a, 0x2, 0x2, 0x492, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x493, 0x494, 
       0x7, 0x4c, 0x2, 0x2, 0x494, 0x496, 0x7, 0x8d, 0x2, 0x2, 0x495, 0x497, 
       0x5, 0xe2, 0x72, 0x2, 0x496, 0x495, 0x3, 0x2, 0x2, 0x2, 0x496, 0x497, 
       0x3, 0x2, 0x2, 0x2, 0x497, 0x498, 0x3, 0x2, 0x2, 0x2, 0x498, 0x499, 
       0x7, 0x6b, 0x2, 0x2, 0x499, 0x49a, 0x5, 0x118, 0x8d, 0x2, 0x49a, 
       0x49b, 0x7, 0x5a, 0x2, 0x2, 0x49b, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x49c, 
       0x49e, 0x5, 0x98, 0x4d, 0x2, 0x49d, 0x49f, 0x5, 0xfc, 0x7f, 0x2, 
       0x49e, 0x49d, 0x3, 0x2, 0x2, 0x2, 0x49e, 0x49f, 0x3, 0x2, 0x2, 0x2, 
       0x49f, 0x4a0, 0x3, 0x2, 0x2, 0x2, 0x4a0, 0x4a1, 0x7, 0x5a, 0x2, 0x2, 
       0x4a1, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0x4a3, 0x5, 0xe2, 0x72, 
       0x2, 0x4a3, 0x4a4, 0x5, 0x98, 0x4d, 0x2, 0x4a4, 0x4a5, 0x5, 0xfc, 
       0x7f, 0x2, 0x4a5, 0x4a6, 0x7, 0x5a, 0x2, 0x2, 0x4a6, 0x4b5, 0x3, 
       0x2, 0x2, 0x2, 0x4a7, 0x4a9, 0x5, 0xe2, 0x72, 0x2, 0x4a8, 0x4a7, 
       0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4a9, 0x3, 0x2, 0x2, 0x2, 0x4a9, 0x4aa, 
       0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4ac, 0x5, 0x98, 0x4d, 0x2, 0x4ab, 0x4ad, 
       0x5, 0x114, 0x8b, 0x2, 0x4ac, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ac, 0x4ad, 
       0x3, 0x2, 0x2, 0x2, 0x4ad, 0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4af, 
       0x7, 0x56, 0x2, 0x2, 0x4af, 0x4b0, 0x5, 0x19e, 0xd0, 0x2, 0x4b0, 
       0x4b1, 0x7, 0x57, 0x2, 0x2, 0x4b1, 0x4b2, 0x5, 0x136, 0x9c, 0x2, 
       0x4b2, 0x4b3, 0x7, 0x5a, 0x2, 0x2, 0x4b3, 0x4b5, 0x3, 0x2, 0x2, 0x2, 
       0x4b4, 0x49c, 0x3, 0x2, 0x2, 0x2, 0x4b4, 0x4a2, 0x3, 0x2, 0x2, 0x2, 
       0x4b4, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x8f, 0x3, 0x2, 0x2, 0x2, 
       0x4b6, 0x4b7, 0x7, 0x3d, 0x2, 0x2, 0x4b7, 0x4b8, 0x7, 0x58, 0x2, 
       0x2, 0x4b8, 0x4b9, 0x5, 0x66, 0x34, 0x2, 0x4b9, 0x4ba, 0x7, 0x59, 
       0x2, 0x2, 0x4ba, 0x4bb, 0x7, 0x5a, 0x2, 0x2, 0x4bb, 0x4c5, 0x3, 0x2, 
       0x2, 0x2, 0x4bc, 0x4bd, 0x7, 0x3d, 0x2, 0x2, 0x4bd, 0x4be, 0x7, 0x58, 
       0x2, 0x2, 0x4be, 0x4bf, 0x5, 0x66, 0x34, 0x2, 0x4bf, 0x4c0, 0x7, 
       0x81, 0x2, 0x2, 0x4c0, 0x4c1, 0x7, 0x88, 0x2, 0x2, 0x4c1, 0x4c2, 
       0x7, 0x59, 0x2, 0x2, 0x4c2, 0x4c3, 0x7, 0x5a, 0x2, 0x2, 0x4c3, 0x4c5, 
       0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4b6, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4bc, 
       0x3, 0x2, 0x2, 0x2, 0x4c5, 0x91, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c7, 
       0x7, 0x5a, 0x2, 0x2, 0x4c7, 0x93, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c9, 
       0x5, 0xe2, 0x72, 0x2, 0x4c9, 0x4ca, 0x7, 0x5a, 0x2, 0x2, 0x4ca, 0x95, 
       0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4d3, 0x5, 0x112, 0x8a, 0x2, 0x4cc, 0x4d3, 
       0x5, 0xa0, 0x51, 0x2, 0x4cd, 0x4d3, 0x5, 0xa2, 0x52, 0x2, 0x4ce, 
       0x4d3, 0x7, 0x27, 0x2, 0x2, 0x4cf, 0x4d3, 0x7, 0x47, 0x2, 0x2, 0x4d0, 
       0x4d3, 0x7, 0x16, 0x2, 0x2, 0x4d1, 0x4d3, 0x7, 0x2a, 0x2, 0x2, 0x4d2, 
       0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4d2, 
       0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4d2, 
       0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4d2, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d2, 
       0x4d1, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x97, 0x3, 0x2, 0x2, 0x2, 0x4d4, 
       0x4d6, 0x5, 0x9a, 0x4e, 0x2, 0x4d5, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4d5, 
       0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d6, 0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4d7, 
       0x4d9, 0x5, 0xa8, 0x55, 0x2, 0x4d8, 0x4da, 0x5, 0x9c, 0x4f, 0x2, 
       0x4d9, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4d9, 0x4da, 0x3, 0x2, 0x2, 0x2, 
       0x4da, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4dd, 0x5, 0xe2, 0x72, 
       0x2, 0x4dc, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4dd, 0x3, 0x2, 0x2, 
       0x2, 0x4dd, 0x99, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4df, 0x5, 0x9e, 0x50, 
       0x2, 0x4df, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x4e0, 0x4e1, 0x5, 0x9e, 0x50, 
       0x2, 0x4e1, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e4, 0x5, 0x96, 0x4c, 
       0x2, 0x4e3, 0x4e5, 0x5, 0x9e, 0x50, 0x2, 0x4e4, 0x4e3, 0x3, 0x2, 
       0x2, 0x2, 0x4e4, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0x9f, 0x3, 0x2, 
       0x2, 0x2, 0x4e6, 0x4e7, 0x9, 0x8, 0x2, 0x2, 0x4e7, 0xa1, 0x3, 0x2, 
       0x2, 0x2, 0x4e8, 0x4e9, 0x9, 0x9, 0x2, 0x2, 0x4e9, 0xa3, 0x3, 0x2, 
       0x2, 0x2, 0x4ea, 0x4ee, 0x5, 0xac, 0x57, 0x2, 0x4eb, 0x4ee, 0x5, 
       0xb2, 0x5a, 0x2, 0x4ec, 0x4ee, 0x5, 0x18a, 0xc6, 0x2, 0x4ed, 0x4ea, 
       0x3, 0x2, 0x2, 0x2, 0x4ed, 0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4ed, 0x4ec, 
       0x3, 0x2, 0x2, 0x2, 0x4ee, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x4ef, 0x4f1, 
       0x5, 0x112, 0x8a, 0x2, 0x4f0, 0x4ef, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4f1, 
       0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f2, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f4, 
       0x5, 0xa4, 0x53, 0x2, 0x4f3, 0x4f5, 0x5, 0xe2, 0x72, 0x2, 0x4f4, 
       0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f5, 
       0xa7, 0x3, 0x2, 0x2, 0x2, 0x4f6, 0x4fa, 0x5, 0xa4, 0x53, 0x2, 0x4f7, 
       0x4fa, 0x5, 0x142, 0xa2, 0x2, 0x4f8, 0x4fa, 0x5, 0xb4, 0x5b, 0x2, 
       0x4f9, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4f9, 0x4f7, 0x3, 0x2, 0x2, 0x2, 
       0x4f9, 0x4f8, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0xa9, 0x3, 0x2, 0x2, 0x2, 
       0x4fb, 0x4fd, 0x5, 0xa8, 0x55, 0x2, 0x4fc, 0x4fe, 0x5, 0xe2, 0x72, 
       0x2, 0x4fd, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4fd, 0x4fe, 0x3, 0x2, 0x2, 
       0x2, 0x4fe, 0x503, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x500, 0x5, 0xa8, 0x55, 
       0x2, 0x500, 0x501, 0x5, 0xaa, 0x56, 0x2, 0x501, 0x503, 0x3, 0x2, 
       0x2, 0x2, 0x502, 0x4fb, 0x3, 0x2, 0x2, 0x2, 0x502, 0x4ff, 0x3, 0x2, 
       0x2, 0x2, 0x503, 0xab, 0x3, 0x2, 0x2, 0x2, 0x504, 0x506, 0x5, 0x16, 
       0xc, 0x2, 0x505, 0x504, 0x3, 0x2, 0x2, 0x2, 0x505, 0x506, 0x3, 0x2, 
       0x2, 0x2, 0x506, 0x507, 0x3, 0x2, 0x2, 0x2, 0x507, 0x519, 0x5, 0xae, 
       0x58, 0x2, 0x508, 0x519, 0x7, 0x10, 0x2, 0x2, 0x509, 0x519, 0x7, 
       0x11, 0x2, 0x2, 0x50a, 0x519, 0x7, 0x12, 0x2, 0x2, 0x50b, 0x519, 
       0x7, 0x13, 0x2, 0x2, 0x50c, 0x519, 0x7, 0x50, 0x2, 0x2, 0x50d, 0x519, 
       0x7, 0xc, 0x2, 0x2, 0x50e, 0x519, 0x7, 0x39, 0x2, 0x2, 0x50f, 0x519, 
       0x7, 0x2b, 0x2, 0x2, 0x510, 0x519, 0x7, 0x2c, 0x2, 0x2, 0x511, 0x519, 
       0x7, 0x3a, 0x2, 0x2, 0x512, 0x519, 0x7, 0x4b, 0x2, 0x2, 0x513, 0x519, 
       0x7, 0x25, 0x2, 0x2, 0x514, 0x519, 0x7, 0x1d, 0x2, 0x2, 0x515, 0x519, 
       0x7, 0x4e, 0x2, 0x2, 0x516, 0x519, 0x7, 0xb, 0x2, 0x2, 0x517, 0x519, 
       0x5, 0xb0, 0x59, 0x2, 0x518, 0x505, 0x3, 0x2, 0x2, 0x2, 0x518, 0x508, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x509, 0x3, 0x2, 0x2, 0x2, 0x518, 0x50a, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x50b, 0x3, 0x2, 0x2, 0x2, 0x518, 0x50c, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x518, 0x50e, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x518, 0x510, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x511, 0x3, 0x2, 0x2, 0x2, 0x518, 0x512, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x513, 0x3, 0x2, 0x2, 0x2, 0x518, 0x514, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x515, 0x3, 0x2, 0x2, 0x2, 0x518, 0x516, 
       0x3, 0x2, 0x2, 0x2, 0x518, 0x517, 0x3, 0x2, 0x2, 0x2, 0x519, 0xad, 
       0x3, 0x2, 0x2, 0x2, 0x51a, 0x51d, 0x7, 0x8d, 0x2, 0x2, 0x51b, 0x51d, 
       0x5, 0x182, 0xc2, 0x2, 0x51c, 0x51a, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51b, 
       0x3, 0x2, 0x2, 0x2, 0x51d, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x51f, 
       0x7, 0x19, 0x2, 0x2, 0x51f, 0x520, 0x7, 0x58, 0x2, 0x2, 0x520, 0x521, 
       0x5, 0x64, 0x33, 0x2, 0x521, 0x522, 0x7, 0x59, 0x2, 0x2, 0x522, 0x528, 
       0x3, 0x2, 0x2, 0x2, 0x523, 0x524, 0x7, 0x19, 0x2, 0x2, 0x524, 0x525, 
       0x7, 0x58, 0x2, 0x2, 0x525, 0x526, 0x7, 0xb, 0x2, 0x2, 0x526, 0x528, 
       0x7, 0x59, 0x2, 0x2, 0x527, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x527, 0x523, 
       0x3, 0x2, 0x2, 0x2, 0x528, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x529, 0x52b, 
       0x5, 0x14a, 0xa6, 0x2, 0x52a, 0x52c, 0x5, 0xe2, 0x72, 0x2, 0x52b, 
       0x52a, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x52c, 0x3, 0x2, 0x2, 0x2, 0x52c, 
       0x52e, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52f, 0x5, 0x16, 0xc, 0x2, 0x52e, 
       0x52d, 0x3, 0x2, 0x2, 0x2, 0x52e, 0x52f, 0x3, 0x2, 0x2, 0x2, 0x52f, 
       0x530, 0x3, 0x2, 0x2, 0x2, 0x530, 0x531, 0x7, 0x8d, 0x2, 0x2, 0x531, 
       0x542, 0x3, 0x2, 0x2, 0x2, 0x532, 0x533, 0x5, 0x14a, 0xa6, 0x2, 0x533, 
       0x534, 0x5, 0x182, 0xc2, 0x2, 0x534, 0x542, 0x3, 0x2, 0x2, 0x2, 0x535, 
       0x536, 0x5, 0x14a, 0xa6, 0x2, 0x536, 0x538, 0x5, 0x16, 0xc, 0x2, 
       0x537, 0x539, 0x7, 0x41, 0x2, 0x2, 0x538, 0x537, 0x3, 0x2, 0x2, 0x2, 
       0x538, 0x539, 0x3, 0x2, 0x2, 0x2, 0x539, 0x53a, 0x3, 0x2, 0x2, 0x2, 
       0x53a, 0x53b, 0x5, 0x182, 0xc2, 0x2, 0x53b, 0x542, 0x3, 0x2, 0x2, 
       0x2, 0x53c, 0x53e, 0x7, 0x20, 0x2, 0x2, 0x53d, 0x53f, 0x5, 0x16, 
       0xc, 0x2, 0x53e, 0x53d, 0x3, 0x2, 0x2, 0x2, 0x53e, 0x53f, 0x3, 0x2, 
       0x2, 0x2, 0x53f, 0x540, 0x3, 0x2, 0x2, 0x2, 0x540, 0x542, 0x7, 0x8d, 
       0x2, 0x2, 0x541, 0x529, 0x3, 0x2, 0x2, 0x2, 0x541, 0x532, 0x3, 0x2, 
       0x2, 0x2, 0x541, 0x535, 0x3, 0x2, 0x2, 0x2, 0x541, 0x53c, 0x3, 0x2, 
       0x2, 0x2, 0x542, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x543, 0x544, 0x5, 0xb6, 
       0x5c, 0x2, 0x544, 0x546, 0x7, 0x54, 0x2, 0x2, 0x545, 0x547, 0x5, 
       0xc0, 0x61, 0x2, 0x546, 0x545, 0x3, 0x2, 0x2, 0x2, 0x546, 0x547, 
       0x3, 0x2, 0x2, 0x2, 0x547, 0x548, 0x3, 0x2, 0x2, 0x2, 0x548, 0x549, 
       0x7, 0x55, 0x2, 0x2, 0x549, 0x551, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x54b, 
       0x5, 0xb6, 0x5c, 0x2, 0x54b, 0x54c, 0x7, 0x54, 0x2, 0x2, 0x54c, 0x54d, 
       0x5, 0xc0, 0x61, 0x2, 0x54d, 0x54e, 0x7, 0x81, 0x2, 0x2, 0x54e, 0x54f, 
       0x7, 0x55, 0x2, 0x2, 0x54f, 0x551, 0x3, 0x2, 0x2, 0x2, 0x550, 0x543, 
       0x3, 0x2, 0x2, 0x2, 0x550, 0x54a, 0x3, 0x2, 0x2, 0x2, 0x551, 0xb5, 
       0x3, 0x2, 0x2, 0x2, 0x552, 0x554, 0x5, 0xbc, 0x5f, 0x2, 0x553, 0x555, 
       0x5, 0xe2, 0x72, 0x2, 0x554, 0x553, 0x3, 0x2, 0x2, 0x2, 0x554, 0x555, 
       0x3, 0x2, 0x2, 0x2, 0x555, 0x557, 0x3, 0x2, 0x2, 0x2, 0x556, 0x558, 
       0x5, 0xb8, 0x5d, 0x2, 0x557, 0x556, 0x3, 0x2, 0x2, 0x2, 0x557, 0x558, 
       0x3, 0x2, 0x2, 0x2, 0x558, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x559, 0x55b, 
       0x5, 0xbe, 0x60, 0x2, 0x55a, 0x559, 0x3, 0x2, 0x2, 0x2, 0x55a, 0x55b, 
       0x3, 0x2, 0x2, 0x2, 0x55b, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x55c, 0x55e, 
       0x5, 0x16, 0xc, 0x2, 0x55d, 0x55c, 0x3, 0x2, 0x2, 0x2, 0x55d, 0x55e, 
       0x3, 0x2, 0x2, 0x2, 0x55e, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x55f, 0x560, 
       0x7, 0x8d, 0x2, 0x2, 0x560, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x561, 0x563, 
       0x5, 0xbc, 0x5f, 0x2, 0x562, 0x564, 0x5, 0xe2, 0x72, 0x2, 0x563, 
       0x562, 0x3, 0x2, 0x2, 0x2, 0x563, 0x564, 0x3, 0x2, 0x2, 0x2, 0x564, 
       0x566, 0x3, 0x2, 0x2, 0x2, 0x565, 0x567, 0x5, 0x16, 0xc, 0x2, 0x566, 
       0x565, 0x3, 0x2, 0x2, 0x2, 0x566, 0x567, 0x3, 0x2, 0x2, 0x2, 0x567, 
       0x568, 0x3, 0x2, 0x2, 0x2, 0x568, 0x56a, 0x7, 0x8d, 0x2, 0x2, 0x569, 
       0x56b, 0x5, 0xbe, 0x60, 0x2, 0x56a, 0x569, 0x3, 0x2, 0x2, 0x2, 0x56a, 
       0x56b, 0x3, 0x2, 0x2, 0x2, 0x56b, 0x56c, 0x3, 0x2, 0x2, 0x2, 0x56c, 
       0x56d, 0x7, 0x5a, 0x2, 0x2, 0x56d, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x56e, 
       0x574, 0x7, 0x20, 0x2, 0x2, 0x56f, 0x570, 0x7, 0x20, 0x2, 0x2, 0x570, 
       0x574, 0x7, 0x14, 0x2, 0x2, 0x571, 0x572, 0x7, 0x20, 0x2, 0x2, 0x572, 
       0x574, 0x7, 0x3f, 0x2, 0x2, 0x573, 0x56e, 0x3, 0x2, 0x2, 0x2, 0x573, 
       0x56f, 0x3, 0x2, 0x2, 0x2, 0x573, 0x571, 0x3, 0x2, 0x2, 0x2, 0x574, 
       0xbd, 0x3, 0x2, 0x2, 0x2, 0x575, 0x576, 0x7, 0x5b, 0x2, 0x2, 0x576, 
       0x577, 0x5, 0xa6, 0x54, 0x2, 0x577, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x578, 
       0x579, 0x8, 0x61, 0x1, 0x2, 0x579, 0x57a, 0x5, 0xc2, 0x62, 0x2, 0x57a, 
       0x580, 0x3, 0x2, 0x2, 0x2, 0x57b, 0x57c, 0xc, 0x3, 0x2, 0x2, 0x57c, 
       0x57d, 0x7, 0x81, 0x2, 0x2, 0x57d, 0x57f, 0x5, 0xc2, 0x62, 0x2, 0x57e, 
       0x57b, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x582, 0x3, 0x2, 0x2, 0x2, 0x580, 
       0x57e, 0x3, 0x2, 0x2, 0x2, 0x580, 0x581, 0x3, 0x2, 0x2, 0x2, 0x581, 
       0xc1, 0x3, 0x2, 0x2, 0x2, 0x582, 0x580, 0x3, 0x2, 0x2, 0x2, 0x583, 
       0x589, 0x5, 0xc4, 0x63, 0x2, 0x584, 0x585, 0x5, 0xc4, 0x63, 0x2, 
       0x585, 0x586, 0x7, 0x6b, 0x2, 0x2, 0x586, 0x587, 0x5, 0x66, 0x34, 
       0x2, 0x587, 0x589, 0x3, 0x2, 0x2, 0x2, 0x588, 0x583, 0x3, 0x2, 0x2, 
       0x2, 0x588, 0x584, 0x3, 0x2, 0x2, 0x2, 0x589, 0xc3, 0x3, 0x2, 0x2, 
       0x2, 0x58a, 0x58c, 0x7, 0x8d, 0x2, 0x2, 0x58b, 0x58d, 0x5, 0xe2, 
       0x72, 0x2, 0x58c, 0x58b, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58d, 0x3, 0x2, 
       0x2, 0x2, 0x58d, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x58e, 0x592, 0x5, 0xc8, 
       0x65, 0x2, 0x58f, 0x592, 0x5, 0xca, 0x66, 0x2, 0x590, 0x592, 0x5, 
       0xcc, 0x67, 0x2, 0x591, 0x58e, 0x3, 0x2, 0x2, 0x2, 0x591, 0x58f, 
       0x3, 0x2, 0x2, 0x2, 0x591, 0x590, 0x3, 0x2, 0x2, 0x2, 0x592, 0xc7, 
       0x3, 0x2, 0x2, 0x2, 0x593, 0x595, 0x7, 0x2a, 0x2, 0x2, 0x594, 0x593, 
       0x3, 0x2, 0x2, 0x2, 0x594, 0x595, 0x3, 0x2, 0x2, 0x2, 0x595, 0x596, 
       0x3, 0x2, 0x2, 0x2, 0x596, 0x598, 0x7, 0x2e, 0x2, 0x2, 0x597, 0x599, 
       0x5, 0xe2, 0x72, 0x2, 0x598, 0x597, 0x3, 0x2, 0x2, 0x2, 0x598, 0x599, 
       0x3, 0x2, 0x2, 0x2, 0x599, 0x59a, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x59b, 
       0x7, 0x8d, 0x2, 0x2, 0x59b, 0x59c, 0x7, 0x54, 0x2, 0x2, 0x59c, 0x59d, 
       0x5, 0xd0, 0x69, 0x2, 0x59d, 0x59e, 0x7, 0x55, 0x2, 0x2, 0x59e, 0xc9, 
       0x3, 0x2, 0x2, 0x2, 0x59f, 0x5a1, 0x7, 0x2a, 0x2, 0x2, 0x5a0, 0x59f, 
       0x3, 0x2, 0x2, 0x2, 0x5a0, 0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a1, 0x5a2, 
       0x3, 0x2, 0x2, 0x2, 0x5a2, 0x5a4, 0x7, 0x2e, 0x2, 0x2, 0x5a3, 0x5a5, 
       0x5, 0xe2, 0x72, 0x2, 0x5a4, 0x5a3, 0x3, 0x2, 0x2, 0x2, 0x5a4, 0x5a5, 
       0x3, 0x2, 0x2, 0x2, 0x5a5, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0x5a7, 
       0x7, 0x54, 0x2, 0x2, 0x5a7, 0x5a8, 0x5, 0xd0, 0x69, 0x2, 0x5a8, 0x5a9, 
       0x7, 0x55, 0x2, 0x2, 0x5a9, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x5aa, 0x5ab, 
       0x7, 0x2e, 0x2, 0x2, 0x5ab, 0x5ac, 0x5, 0xce, 0x68, 0x2, 0x5ac, 0x5ad, 
       0x7, 0x5e, 0x2, 0x2, 0x5ad, 0x5ae, 0x7, 0x8d, 0x2, 0x2, 0x5ae, 0x5af, 
       0x7, 0x54, 0x2, 0x2, 0x5af, 0x5b0, 0x5, 0xd0, 0x69, 0x2, 0x5b0, 0x5b1, 
       0x7, 0x55, 0x2, 0x2, 0x5b1, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5b3, 
       0x8, 0x68, 0x1, 0x2, 0x5b3, 0x5b4, 0x7, 0x8d, 0x2, 0x2, 0x5b4, 0x5ba, 
       0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b6, 0xc, 0x3, 0x2, 0x2, 0x5b6, 0x5b7, 
       0x7, 0x5e, 0x2, 0x2, 0x5b7, 0x5b9, 0x7, 0x8d, 0x2, 0x2, 0x5b8, 0x5b5, 
       0x3, 0x2, 0x2, 0x2, 0x5b9, 0x5bc, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5b8, 
       0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5bb, 0xcf, 
       0x3, 0x2, 0x2, 0x2, 0x5bc, 0x5ba, 0x3, 0x2, 0x2, 0x2, 0x5bd, 0x5bf, 
       0x5, 0x84, 0x43, 0x2, 0x5be, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5be, 0x5bf, 
       0x3, 0x2, 0x2, 0x2, 0x5bf, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x5c0, 0x5c1, 
       0x7, 0x2e, 0x2, 0x2, 0x5c1, 0x5c2, 0x7, 0x8d, 0x2, 0x2, 0x5c2, 0x5c3, 
       0x7, 0x6b, 0x2, 0x2, 0x5c3, 0x5c4, 0x5, 0xd4, 0x6b, 0x2, 0x5c4, 0x5c5, 
       0x7, 0x5a, 0x2, 0x2, 0x5c5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c8, 
       0x5, 0x16, 0xc, 0x2, 0x5c7, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0x5c7, 0x5c8, 
       0x3, 0x2, 0x2, 0x2, 0x5c8, 0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5ca, 
       0x5, 0x4, 0x3, 0x2, 0x5ca, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5cc, 
       0x7, 0x4c, 0x2, 0x2, 0x5cc, 0x5cd, 0x5, 0xd8, 0x6d, 0x2, 0x5cd, 0x5ce, 
       0x7, 0x5a, 0x2, 0x2, 0x5ce, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x5cf, 0x5d0, 
       0x8, 0x6d, 0x1, 0x2, 0x5d0, 0x5d2, 0x5, 0xda, 0x6e, 0x2, 0x5d1, 0x5d3, 
       0x7, 0x5c, 0x2, 0x2, 0x5d2, 0x5d1, 0x3, 0x2, 0x2, 0x2, 0x5d2, 0x5d3, 
       0x3, 0x2, 0x2, 0x2, 0x5d3, 0x5dc, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d5, 
       0xc, 0x3, 0x2, 0x2, 0x5d5, 0x5d6, 0x7, 0x81, 0x2, 0x2, 0x5d6, 0x5d8, 
       0x5, 0xda, 0x6e, 0x2, 0x5d7, 0x5d9, 0x7, 0x5c, 0x2, 0x2, 0x5d8, 0x5d7, 
       0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d9, 0x3, 0x2, 0x2, 0x2, 0x5d9, 0x5db, 
       0x3, 0x2, 0x2, 0x2, 0x5da, 0x5d4, 0x3, 0x2, 0x2, 0x2, 0x5db, 0x5de, 
       0x3, 0x2, 0x2, 0x2, 0x5dc, 0x5da, 0x3, 0x2, 0x2, 0x2, 0x5dc, 0x5dd, 
       0x3, 0x2, 0x2, 0x2, 0x5dd, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x5de, 0x5dc, 
       0x3, 0x2, 0x2, 0x2, 0x5df, 0x5e1, 0x5, 0xae, 0x58, 0x2, 0x5e0, 0x5df, 
       0x3, 0x2, 0x2, 0x2, 0x5e0, 0x5e1, 0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5e2, 
       0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5e3, 0x5, 0x16, 0xc, 0x2, 0x5e3, 0x5e4, 
       0x5, 0x12, 0xa, 0x2, 0x5e4, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x5e5, 0x5e7, 
       0x5, 0xe2, 0x72, 0x2, 0x5e6, 0x5e5, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5e7, 
       0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5e8, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0x5e9, 
       0x7, 0x4c, 0x2, 0x2, 0x5e9, 0x5eb, 0x7, 0x2e, 0x2, 0x2, 0x5ea, 0x5ec, 
       0x5, 0x16, 0xc, 0x2, 0x5eb, 0x5ea, 0x3, 0x2, 0x2, 0x2, 0x5eb, 0x5ec, 
       0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5ee, 
       0x5, 0x4, 0x3, 0x2, 0x5ee, 0x5ef, 0x7, 0x5a, 0x2, 0x2, 0x5ef, 0xdd, 
       0x3, 0x2, 0x2, 0x2, 0x5f0, 0x5f2, 0x5, 0xe2, 0x72, 0x2, 0x5f1, 0x5f0, 
       0x3, 0x2, 0x2, 0x2, 0x5f1, 0x5f2, 0x3, 0x2, 0x2, 0x2, 0x5f2, 0x5f3, 
       0x3, 0x2, 0x2, 0x2, 0x5f3, 0x5f4, 0x7, 0xa, 0x2, 0x2, 0x5f4, 0x5f5, 
       0x7, 0x58, 0x2, 0x2, 0x5f5, 0x5f6, 0x7, 0x88, 0x2, 0x2, 0x5f6, 0x5f7, 
       0x7, 0x59, 0x2, 0x2, 0x5f7, 0x5f8, 0x7, 0x5a, 0x2, 0x2, 0x5f8, 0xdf, 
       0x3, 0x2, 0x2, 0x2, 0x5f9, 0x5fa, 0x7, 0x23, 0x2, 0x2, 0x5fa, 0x5fb, 
       0x7, 0x88, 0x2, 0x2, 0x5fb, 0x5fd, 0x7, 0x54, 0x2, 0x2, 0x5fc, 0x5fe, 
       0x5, 0x84, 0x43, 0x2, 0x5fd, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x5fe, 
       0x3, 0x2, 0x2, 0x2, 0x5fe, 0x5ff, 0x3, 0x2, 0x2, 0x2, 0x5ff, 0x604, 
       0x7, 0x55, 0x2, 0x2, 0x600, 0x601, 0x7, 0x23, 0x2, 0x2, 0x601, 0x602, 
       0x7, 0x88, 0x2, 0x2, 0x602, 0x604, 0x5, 0x86, 0x44, 0x2, 0x603, 0x5f9, 
       0x3, 0x2, 0x2, 0x2, 0x603, 0x600, 0x3, 0x2, 0x2, 0x2, 0x604, 0xe1, 
       0x3, 0x2, 0x2, 0x2, 0x605, 0x606, 0x8, 0x72, 0x1, 0x2, 0x606, 0x607, 
       0x5, 0xe4, 0x73, 0x2, 0x607, 0x60c, 0x3, 0x2, 0x2, 0x2, 0x608, 0x609, 
       0xc, 0x3, 0x2, 0x2, 0x609, 0x60b, 0x5, 0xe4, 0x73, 0x2, 0x60a, 0x608, 
       0x3, 0x2, 0x2, 0x2, 0x60b, 0x60e, 0x3, 0x2, 0x2, 0x2, 0x60c, 0x60a, 
       0x3, 0x2, 0x2, 0x2, 0x60c, 0x60d, 0x3, 0x2, 0x2, 0x2, 0x60d, 0xe3, 
       0x3, 0x2, 0x2, 0x2, 0x60e, 0x60c, 0x3, 0x2, 0x2, 0x2, 0x60f, 0x610, 
       0x7, 0x56, 0x2, 0x2, 0x610, 0x612, 0x7, 0x56, 0x2, 0x2, 0x611, 0x613, 
       0x5, 0xe8, 0x75, 0x2, 0x612, 0x611, 0x3, 0x2, 0x2, 0x2, 0x612, 0x613, 
       0x3, 0x2, 0x2, 0x2, 0x613, 0x614, 0x3, 0x2, 0x2, 0x2, 0x614, 0x615, 
       0x5, 0xea, 0x76, 0x2, 0x615, 0x616, 0x7, 0x57, 0x2, 0x2, 0x616, 0x617, 
       0x7, 0x57, 0x2, 0x2, 0x617, 0x61a, 0x3, 0x2, 0x2, 0x2, 0x618, 0x61a, 
       0x5, 0xe6, 0x74, 0x2, 0x619, 0x60f, 0x3, 0x2, 0x2, 0x2, 0x619, 0x618, 
       0x3, 0x2, 0x2, 0x2, 0x61a, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x61b, 0x61c, 
       0x7, 0x8, 0x2, 0x2, 0x61c, 0x61d, 0x7, 0x58, 0x2, 0x2, 0x61d, 0x61f, 
       0x5, 0x116, 0x8c, 0x2, 0x61e, 0x620, 0x7, 0x5c, 0x2, 0x2, 0x61f, 
       0x61e, 0x3, 0x2, 0x2, 0x2, 0x61f, 0x620, 0x3, 0x2, 0x2, 0x2, 0x620, 
       0x621, 0x3, 0x2, 0x2, 0x2, 0x621, 0x622, 0x7, 0x59, 0x2, 0x2, 0x622, 
       0x62c, 0x3, 0x2, 0x2, 0x2, 0x623, 0x624, 0x7, 0x8, 0x2, 0x2, 0x624, 
       0x625, 0x7, 0x59, 0x2, 0x2, 0x625, 0x627, 0x5, 0x66, 0x34, 0x2, 0x626, 
       0x628, 0x7, 0x5c, 0x2, 0x2, 0x627, 0x626, 0x3, 0x2, 0x2, 0x2, 0x627, 
       0x628, 0x3, 0x2, 0x2, 0x2, 0x628, 0x629, 0x3, 0x2, 0x2, 0x2, 0x629, 
       0x62a, 0x7, 0x59, 0x2, 0x2, 0x62a, 0x62c, 0x3, 0x2, 0x2, 0x2, 0x62b, 
       0x61b, 0x3, 0x2, 0x2, 0x2, 0x62b, 0x623, 0x3, 0x2, 0x2, 0x2, 0x62c, 
       0xe7, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x62e, 0x7, 0x4c, 0x2, 0x2, 0x62e, 
       0x62f, 0x5, 0xf2, 0x7a, 0x2, 0x62f, 0x630, 0x7, 0x5b, 0x2, 0x2, 0x630, 
       0xe9, 0x3, 0x2, 0x2, 0x2, 0x631, 0x633, 0x8, 0x76, 0x1, 0x2, 0x632, 
       0x634, 0x5, 0xec, 0x77, 0x2, 0x633, 0x632, 0x3, 0x2, 0x2, 0x2, 0x633, 
       0x634, 0x3, 0x2, 0x2, 0x2, 0x634, 0x639, 0x3, 0x2, 0x2, 0x2, 0x635, 
       0x636, 0x5, 0xec, 0x77, 0x2, 0x636, 0x637, 0x7, 0x5c, 0x2, 0x2, 0x637, 
       0x639, 0x3, 0x2, 0x2, 0x2, 0x638, 0x631, 0x3, 0x2, 0x2, 0x2, 0x638, 
       0x635, 0x3, 0x2, 0x2, 0x2, 0x639, 0x646, 0x3, 0x2, 0x2, 0x2, 0x63a, 
       0x63b, 0xc, 0x5, 0x2, 0x2, 0x63b, 0x63d, 0x7, 0x81, 0x2, 0x2, 0x63c, 
       0x63e, 0x5, 0xec, 0x77, 0x2, 0x63d, 0x63c, 0x3, 0x2, 0x2, 0x2, 0x63d, 
       0x63e, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x645, 0x3, 0x2, 0x2, 0x2, 0x63f, 
       0x640, 0xc, 0x3, 0x2, 0x2, 0x640, 0x641, 0x7, 0x81, 0x2, 0x2, 0x641, 
       0x642, 0x5, 0xec, 0x77, 0x2, 0x642, 0x643, 0x7, 0x5c, 0x2, 0x2, 0x643, 
       0x645, 0x3, 0x2, 0x2, 0x2, 0x644, 0x63a, 0x3, 0x2, 0x2, 0x2, 0x644, 
       0x63f, 0x3, 0x2, 0x2, 0x2, 0x645, 0x648, 0x3, 0x2, 0x2, 0x2, 0x646, 
       0x644, 0x3, 0x2, 0x2, 0x2, 0x646, 0x647, 0x3, 0x2, 0x2, 0x2, 0x647, 
       0xeb, 0x3, 0x2, 0x2, 0x2, 0x648, 0x646, 0x3, 0x2, 0x2, 0x2, 0x649, 
       0x64b, 0x5, 0xee, 0x78, 0x2, 0x64a, 0x64c, 0x5, 0xf4, 0x7b, 0x2, 
       0x64b, 0x64a, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x64c, 0x3, 0x2, 0x2, 0x2, 
       0x64c, 0xed, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x650, 0x7, 0x8d, 0x2, 0x2, 
       0x64e, 0x650, 0x5, 0xf0, 0x79, 0x2, 0x64f, 0x64d, 0x3, 0x2, 0x2, 
       0x2, 0x64f, 0x64e, 0x3, 0x2, 0x2, 0x2, 0x650, 0xef, 0x3, 0x2, 0x2, 
       0x2, 0x651, 0x652, 0x5, 0xf2, 0x7a, 0x2, 0x652, 0x653, 0x7, 0x5e, 
       0x2, 0x2, 0x653, 0x654, 0x7, 0x8d, 0x2, 0x2, 0x654, 0xf1, 0x3, 0x2, 
       0x2, 0x2, 0x655, 0x656, 0x7, 0x8d, 0x2, 0x2, 0x656, 0xf3, 0x3, 0x2, 
       0x2, 0x2, 0x657, 0x659, 0x7, 0x58, 0x2, 0x2, 0x658, 0x65a, 0x5, 0xf6, 
       0x7c, 0x2, 0x659, 0x658, 0x3, 0x2, 0x2, 0x2, 0x659, 0x65a, 0x3, 0x2, 
       0x2, 0x2, 0x65a, 0x65b, 0x3, 0x2, 0x2, 0x2, 0x65b, 0x65c, 0x7, 0x59, 
       0x2, 0x2, 0x65c, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x65e, 0x8, 0x7c, 
       0x1, 0x2, 0x65e, 0x65f, 0x5, 0xf8, 0x7d, 0x2, 0x65f, 0x664, 0x3, 
       0x2, 0x2, 0x2, 0x660, 0x661, 0xc, 0x3, 0x2, 0x2, 0x661, 0x663, 0x5, 
       0xf8, 0x7d, 0x2, 0x662, 0x660, 0x3, 0x2, 0x2, 0x2, 0x663, 0x666, 
       0x3, 0x2, 0x2, 0x2, 0x664, 0x662, 0x3, 0x2, 0x2, 0x2, 0x664, 0x665, 
       0x3, 0x2, 0x2, 0x2, 0x665, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x666, 0x664, 
       0x3, 0x2, 0x2, 0x2, 0x667, 0x669, 0x7, 0x58, 0x2, 0x2, 0x668, 0x66a, 
       0x5, 0xf6, 0x7c, 0x2, 0x669, 0x668, 0x3, 0x2, 0x2, 0x2, 0x669, 0x66a, 
       0x3, 0x2, 0x2, 0x2, 0x66a, 0x66b, 0x3, 0x2, 0x2, 0x2, 0x66b, 0x678, 
       0x7, 0x59, 0x2, 0x2, 0x66c, 0x66e, 0x7, 0x56, 0x2, 0x2, 0x66d, 0x66f, 
       0x5, 0xf6, 0x7c, 0x2, 0x66e, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x66e, 0x66f, 
       0x3, 0x2, 0x2, 0x2, 0x66f, 0x670, 0x3, 0x2, 0x2, 0x2, 0x670, 0x678, 
       0x7, 0x57, 0x2, 0x2, 0x671, 0x673, 0x7, 0x54, 0x2, 0x2, 0x672, 0x674, 
       0x5, 0xf6, 0x7c, 0x2, 0x673, 0x672, 0x3, 0x2, 0x2, 0x2, 0x673, 0x674, 
       0x3, 0x2, 0x2, 0x2, 0x674, 0x675, 0x3, 0x2, 0x2, 0x2, 0x675, 0x678, 
       0x7, 0x55, 0x2, 0x2, 0x676, 0x678, 0x5, 0xfa, 0x7e, 0x2, 0x677, 0x667, 
       0x3, 0x2, 0x2, 0x2, 0x677, 0x66c, 0x3, 0x2, 0x2, 0x2, 0x677, 0x671, 
       0x3, 0x2, 0x2, 0x2, 0x677, 0x676, 0x3, 0x2, 0x2, 0x2, 0x678, 0xf9, 
       0x3, 0x2, 0x2, 0x2, 0x679, 0x67a, 0xa, 0xa, 0x2, 0x2, 0x67a, 0xfb, 
       0x3, 0x2, 0x2, 0x2, 0x67b, 0x67c, 0x8, 0x7f, 0x1, 0x2, 0x67c, 0x67d, 
       0x5, 0xfe, 0x80, 0x2, 0x67d, 0x683, 0x3, 0x2, 0x2, 0x2, 0x67e, 0x67f, 
       0xc, 0x3, 0x2, 0x2, 0x67f, 0x680, 0x7, 0x81, 0x2, 0x2, 0x680, 0x682, 
       0x5, 0xfe, 0x80, 0x2, 0x681, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x682, 0x685, 
       0x3, 0x2, 0x2, 0x2, 0x683, 0x681, 0x3, 0x2, 0x2, 0x2, 0x683, 0x684, 
       0x3, 0x2, 0x2, 0x2, 0x684, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x685, 0x683, 
       0x3, 0x2, 0x2, 0x2, 0x686, 0x688, 0x5, 0x100, 0x81, 0x2, 0x687, 0x689, 
       0x5, 0x136, 0x9c, 0x2, 0x688, 0x687, 0x3, 0x2, 0x2, 0x2, 0x688, 0x689, 
       0x3, 0x2, 0x2, 0x2, 0x689, 0xff, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x68d, 
       0x5, 0x102, 0x82, 0x2, 0x68b, 0x68d, 0x5, 0x104, 0x83, 0x2, 0x68c, 
       0x68a, 0x3, 0x2, 0x2, 0x2, 0x68c, 0x68b, 0x3, 0x2, 0x2, 0x2, 0x68d, 
       0x101, 0x3, 0x2, 0x2, 0x2, 0x68e, 0x68f, 0x5, 0x10e, 0x88, 0x2, 0x68f, 
       0x690, 0x5, 0x100, 0x81, 0x2, 0x690, 0x103, 0x3, 0x2, 0x2, 0x2, 0x691, 
       0x693, 0x8, 0x83, 0x1, 0x2, 0x692, 0x694, 0x7, 0x5c, 0x2, 0x2, 0x693, 
       0x692, 0x3, 0x2, 0x2, 0x2, 0x693, 0x694, 0x3, 0x2, 0x2, 0x2, 0x694, 
       0x695, 0x3, 0x2, 0x2, 0x2, 0x695, 0x697, 0x5, 0x10, 0x9, 0x2, 0x696, 
       0x698, 0x5, 0xe2, 0x72, 0x2, 0x697, 0x696, 0x3, 0x2, 0x2, 0x2, 0x697, 
       0x698, 0x3, 0x2, 0x2, 0x2, 0x698, 0x69e, 0x3, 0x2, 0x2, 0x2, 0x699, 
       0x69a, 0x7, 0x58, 0x2, 0x2, 0x69a, 0x69b, 0x5, 0x102, 0x82, 0x2, 
       0x69b, 0x69c, 0x7, 0x59, 0x2, 0x2, 0x69c, 0x69e, 0x3, 0x2, 0x2, 0x2, 
       0x69d, 0x691, 0x3, 0x2, 0x2, 0x2, 0x69d, 0x699, 0x3, 0x2, 0x2, 0x2, 
       0x69e, 0x6ac, 0x3, 0x2, 0x2, 0x2, 0x69f, 0x6a0, 0xc, 0x5, 0x2, 0x2, 
       0x6a0, 0x6a2, 0x7, 0x56, 0x2, 0x2, 0x6a1, 0x6a3, 0x5, 0x66, 0x34, 
       0x2, 0x6a2, 0x6a1, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a3, 0x3, 0x2, 0x2, 
       0x2, 0x6a3, 0x6a4, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x6a6, 0x7, 0x57, 0x2, 
       0x2, 0x6a5, 0x6a7, 0x5, 0xe2, 0x72, 0x2, 0x6a6, 0x6a5, 0x3, 0x2, 
       0x2, 0x2, 0x6a6, 0x6a7, 0x3, 0x2, 0x2, 0x2, 0x6a7, 0x6ab, 0x3, 0x2, 
       0x2, 0x2, 0x6a8, 0x6a9, 0xc, 0x4, 0x2, 0x2, 0x6a9, 0x6ab, 0x5, 0x106, 
       0x84, 0x2, 0x6aa, 0x69f, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6a8, 0x3, 0x2, 
       0x2, 0x2, 0x6ab, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x6ac, 0x6aa, 0x3, 0x2, 
       0x2, 0x2, 0x6ac, 0x6ad, 0x3, 0x2, 0x2, 0x2, 0x6ad, 0x105, 0x3, 0x2, 
       0x2, 0x2, 0x6ae, 0x6ac, 0x3, 0x2, 0x2, 0x2, 0x6af, 0x6b0, 0x5, 0x108, 
       0x85, 0x2, 0x6b0, 0x6b1, 0x5, 0x10a, 0x86, 0x2, 0x6b1, 0x107, 0x3, 
       0x2, 0x2, 0x2, 0x6b2, 0x6b3, 0x7, 0x58, 0x2, 0x2, 0x6b3, 0x6b4, 0x5, 
       0x124, 0x93, 0x2, 0x6b4, 0x6b5, 0x7, 0x59, 0x2, 0x2, 0x6b5, 0x109, 
       0x3, 0x2, 0x2, 0x2, 0x6b6, 0x6b8, 0x5, 0x110, 0x89, 0x2, 0x6b7, 0x6b6, 
       0x3, 0x2, 0x2, 0x2, 0x6b7, 0x6b8, 0x3, 0x2, 0x2, 0x2, 0x6b8, 0x6ba, 
       0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6bb, 0x5, 0x114, 0x8b, 0x2, 0x6ba, 0x6b9, 
       0x3, 0x2, 0x2, 0x2, 0x6ba, 0x6bb, 0x3, 0x2, 0x2, 0x2, 0x6bb, 0x6bd, 
       0x3, 0x2, 0x2, 0x2, 0x6bc, 0x6be, 0x5, 0x19c, 0xcf, 0x2, 0x6bd, 0x6bc, 
       0x3, 0x2, 0x2, 0x2, 0x6bd, 0x6be, 0x3, 0x2, 0x2, 0x2, 0x6be, 0x6c0, 
       0x3, 0x2, 0x2, 0x2, 0x6bf, 0x6c1, 0x5, 0xe2, 0x72, 0x2, 0x6c0, 0x6bf, 
       0x3, 0x2, 0x2, 0x2, 0x6c0, 0x6c1, 0x3, 0x2, 0x2, 0x2, 0x6c1, 0x10b, 
       0x3, 0x2, 0x2, 0x2, 0x6c2, 0x6c3, 0x7, 0x83, 0x2, 0x2, 0x6c3, 0x6c4, 
       0x5, 0x116, 0x8c, 0x2, 0x6c4, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x6c5, 0x6c7, 
       0x7, 0x63, 0x2, 0x2, 0x6c6, 0x6c8, 0x5, 0xe2, 0x72, 0x2, 0x6c7, 0x6c6, 
       0x3, 0x2, 0x2, 0x2, 0x6c7, 0x6c8, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6ca, 
       0x3, 0x2, 0x2, 0x2, 0x6c9, 0x6cb, 0x5, 0x110, 0x89, 0x2, 0x6ca, 0x6c9, 
       0x3, 0x2, 0x2, 0x2, 0x6ca, 0x6cb, 0x3, 0x2, 0x2, 0x2, 0x6cb, 0x6dd, 
       0x3, 0x2, 0x2, 0x2, 0x6cc, 0x6ce, 0x7, 0x67, 0x2, 0x2, 0x6cd, 0x6cf, 
       0x5, 0xe2, 0x72, 0x2, 0x6ce, 0x6cd, 0x3, 0x2, 0x2, 0x2, 0x6ce, 0x6cf, 
       0x3, 0x2, 0x2, 0x2, 0x6cf, 0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6d0, 0x6d2, 
       0x7, 0x7d, 0x2, 0x2, 0x6d1, 0x6d3, 0x5, 0xe2, 0x72, 0x2, 0x6d2, 0x6d1, 
       0x3, 0x2, 0x2, 0x2, 0x6d2, 0x6d3, 0x3, 0x2, 0x2, 0x2, 0x6d3, 0x6dd, 
       0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6d5, 0x5, 0x16, 0xc, 0x2, 0x6d5, 0x6d7, 
       0x7, 0x63, 0x2, 0x2, 0x6d6, 0x6d8, 0x5, 0xe2, 0x72, 0x2, 0x6d7, 0x6d6, 
       0x3, 0x2, 0x2, 0x2, 0x6d7, 0x6d8, 0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6da, 
       0x3, 0x2, 0x2, 0x2, 0x6d9, 0x6db, 0x5, 0x110, 0x89, 0x2, 0x6da, 0x6d9, 
       0x3, 0x2, 0x2, 0x2, 0x6da, 0x6db, 0x3, 0x2, 0x2, 0x2, 0x6db, 0x6dd, 
       0x3, 0x2, 0x2, 0x2, 0x6dc, 0x6c5, 0x3, 0x2, 0x2, 0x2, 0x6dc, 0x6cc, 
       0x3, 0x2, 0x2, 0x2, 0x6dc, 0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6dc, 0x6d4, 
       0x3, 0x2, 0x2, 0x2, 0x6dd, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x6de, 0x6e0, 
       0x5, 0x112, 0x8a, 0x2, 0x6df, 0x6e1, 0x5, 0x110, 0x89, 0x2, 0x6e0, 
       0x6df, 0x3, 0x2, 0x2, 0x2, 0x6e0, 0x6e1, 0x3, 0x2, 0x2, 0x2, 0x6e1, 
       0x111, 0x3, 0x2, 0x2, 0x2, 0x6e2, 0x6e3, 0x9, 0xb, 0x2, 0x2, 0x6e3, 
       0x113, 0x3, 0x2, 0x2, 0x2, 0x6e4, 0x6e5, 0x7, 0x67, 0x2, 0x2, 0x6e5, 
       0x6e6, 0x7, 0x7d, 0x2, 0x2, 0x6e6, 0x115, 0x3, 0x2, 0x2, 0x2, 0x6e7, 
       0x6e9, 0x5, 0xa6, 0x54, 0x2, 0x6e8, 0x6ea, 0x5, 0x11a, 0x8e, 0x2, 
       0x6e9, 0x6e8, 0x3, 0x2, 0x2, 0x2, 0x6e9, 0x6ea, 0x3, 0x2, 0x2, 0x2, 
       0x6ea, 0x117, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6ed, 0x5, 0xaa, 0x56, 
       0x2, 0x6ec, 0x6ee, 0x5, 0x11a, 0x8e, 0x2, 0x6ed, 0x6ec, 0x3, 0x2, 
       0x2, 0x2, 0x6ed, 0x6ee, 0x3, 0x2, 0x2, 0x2, 0x6ee, 0x119, 0x3, 0x2, 
       0x2, 0x2, 0x6ef, 0x6f8, 0x5, 0x11c, 0x8f, 0x2, 0x6f0, 0x6f2, 0x5, 
       0x11e, 0x90, 0x2, 0x6f1, 0x6f0, 0x3, 0x2, 0x2, 0x2, 0x6f1, 0x6f2, 
       0x3, 0x2, 0x2, 0x2, 0x6f2, 0x6f3, 0x3, 0x2, 0x2, 0x2, 0x6f3, 0x6f4, 
       0x5, 0x106, 0x84, 0x2, 0x6f4, 0x6f5, 0x5, 0x10c, 0x87, 0x2, 0x6f5, 
       0x6f8, 0x3, 0x2, 0x2, 0x2, 0x6f6, 0x6f8, 0x5, 0x120, 0x91, 0x2, 0x6f7, 
       0x6ef, 0x3, 0x2, 0x2, 0x2, 0x6f7, 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6f7, 
       0x6f6, 0x3, 0x2, 0x2, 0x2, 0x6f8, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x6f9, 
       0x6ff, 0x5, 0x11e, 0x90, 0x2, 0x6fa, 0x6fc, 0x5, 0x10e, 0x88, 0x2, 
       0x6fb, 0x6fd, 0x5, 0x11c, 0x8f, 0x2, 0x6fc, 0x6fb, 0x3, 0x2, 0x2, 
       0x2, 0x6fc, 0x6fd, 0x3, 0x2, 0x2, 0x2, 0x6fd, 0x6ff, 0x3, 0x2, 0x2, 
       0x2, 0x6fe, 0x6f9, 0x3, 0x2, 0x2, 0x2, 0x6fe, 0x6fa, 0x3, 0x2, 0x2, 
       0x2, 0x6ff, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x700, 0x701, 0x8, 0x90, 0x1, 
       0x2, 0x701, 0x70f, 0x5, 0x106, 0x84, 0x2, 0x702, 0x704, 0x7, 0x56, 
       0x2, 0x2, 0x703, 0x705, 0x5, 0x66, 0x34, 0x2, 0x704, 0x703, 0x3, 
       0x2, 0x2, 0x2, 0x704, 0x705, 0x3, 0x2, 0x2, 0x2, 0x705, 0x706, 0x3, 
       0x2, 0x2, 0x2, 0x706, 0x708, 0x7, 0x57, 0x2, 0x2, 0x707, 0x709, 0x5, 
       0xe2, 0x72, 0x2, 0x708, 0x707, 0x3, 0x2, 0x2, 0x2, 0x708, 0x709, 
       0x3, 0x2, 0x2, 0x2, 0x709, 0x70f, 0x3, 0x2, 0x2, 0x2, 0x70a, 0x70b, 
       0x7, 0x58, 0x2, 0x2, 0x70b, 0x70c, 0x5, 0x11c, 0x8f, 0x2, 0x70c, 
       0x70d, 0x7, 0x59, 0x2, 0x2, 0x70d, 0x70f, 0x3, 0x2, 0x2, 0x2, 0x70e, 
       0x700, 0x3, 0x2, 0x2, 0x2, 0x70e, 0x702, 0x3, 0x2, 0x2, 0x2, 0x70e, 
       0x70a, 0x3, 0x2, 0x2, 0x2, 0x70f, 0x71d, 0x3, 0x2, 0x2, 0x2, 0x710, 
       0x711, 0xc, 0x6, 0x2, 0x2, 0x711, 0x71c, 0x5, 0x106, 0x84, 0x2, 0x712, 
       0x713, 0xc, 0x4, 0x2, 0x2, 0x713, 0x715, 0x7, 0x56, 0x2, 0x2, 0x714, 
       0x716, 0x5, 0x66, 0x34, 0x2, 0x715, 0x714, 0x3, 0x2, 0x2, 0x2, 0x715, 
       0x716, 0x3, 0x2, 0x2, 0x2, 0x716, 0x717, 0x3, 0x2, 0x2, 0x2, 0x717, 
       0x719, 0x7, 0x57, 0x2, 0x2, 0x718, 0x71a, 0x5, 0xe2, 0x72, 0x2, 0x719, 
       0x718, 0x3, 0x2, 0x2, 0x2, 0x719, 0x71a, 0x3, 0x2, 0x2, 0x2, 0x71a, 
       0x71c, 0x3, 0x2, 0x2, 0x2, 0x71b, 0x710, 0x3, 0x2, 0x2, 0x2, 0x71b, 
       0x712, 0x3, 0x2, 0x2, 0x2, 0x71c, 0x71f, 0x3, 0x2, 0x2, 0x2, 0x71d, 
       0x71b, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71e, 0x3, 0x2, 0x2, 0x2, 0x71e, 
       0x11f, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x71d, 0x3, 0x2, 0x2, 0x2, 0x720, 
       0x725, 0x5, 0x122, 0x92, 0x2, 0x721, 0x722, 0x5, 0x10e, 0x88, 0x2, 
       0x722, 0x723, 0x5, 0x120, 0x91, 0x2, 0x723, 0x725, 0x3, 0x2, 0x2, 
       0x2, 0x724, 0x720, 0x3, 0x2, 0x2, 0x2, 0x724, 0x721, 0x3, 0x2, 0x2, 
       0x2, 0x725, 0x121, 0x3, 0x2, 0x2, 0x2, 0x726, 0x727, 0x8, 0x92, 0x1, 
       0x2, 0x727, 0x728, 0x7, 0x5c, 0x2, 0x2, 0x728, 0x736, 0x3, 0x2, 0x2, 
       0x2, 0x729, 0x72a, 0xc, 0x5, 0x2, 0x2, 0x72a, 0x735, 0x5, 0x106, 
       0x84, 0x2, 0x72b, 0x72c, 0xc, 0x4, 0x2, 0x2, 0x72c, 0x72e, 0x7, 0x56, 
       0x2, 0x2, 0x72d, 0x72f, 0x5, 0x66, 0x34, 0x2, 0x72e, 0x72d, 0x3, 
       0x2, 0x2, 0x2, 0x72e, 0x72f, 0x3, 0x2, 0x2, 0x2, 0x72f, 0x730, 0x3, 
       0x2, 0x2, 0x2, 0x730, 0x732, 0x7, 0x57, 0x2, 0x2, 0x731, 0x733, 0x5, 
       0xe2, 0x72, 0x2, 0x732, 0x731, 0x3, 0x2, 0x2, 0x2, 0x732, 0x733, 
       0x3, 0x2, 0x2, 0x2, 0x733, 0x735, 0x3, 0x2, 0x2, 0x2, 0x734, 0x729, 
       0x3, 0x2, 0x2, 0x2, 0x734, 0x72b, 0x3, 0x2, 0x2, 0x2, 0x735, 0x738, 
       0x3, 0x2, 0x2, 0x2, 0x736, 0x734, 0x3, 0x2, 0x2, 0x2, 0x736, 0x737, 
       0x3, 0x2, 0x2, 0x2, 0x737, 0x123, 0x3, 0x2, 0x2, 0x2, 0x738, 0x736, 
       0x3, 0x2, 0x2, 0x2, 0x739, 0x73b, 0x5, 0x126, 0x94, 0x2, 0x73a, 0x739, 
       0x3, 0x2, 0x2, 0x2, 0x73a, 0x73b, 0x3, 0x2, 0x2, 0x2, 0x73b, 0x73d, 
       0x3, 0x2, 0x2, 0x2, 0x73c, 0x73e, 0x7, 0x5c, 0x2, 0x2, 0x73d, 0x73c, 
       0x3, 0x2, 0x2, 0x2, 0x73d, 0x73e, 0x3, 0x2, 0x2, 0x2, 0x73e, 0x744, 
       0x3, 0x2, 0x2, 0x2, 0x73f, 0x740, 0x5, 0x126, 0x94, 0x2, 0x740, 0x741, 
       0x7, 0x81, 0x2, 0x2, 0x741, 0x742, 0x7, 0x5c, 0x2, 0x2, 0x742, 0x744, 
       0x3, 0x2, 0x2, 0x2, 0x743, 0x73a, 0x3, 0x2, 0x2, 0x2, 0x743, 0x73f, 
       0x3, 0x2, 0x2, 0x2, 0x744, 0x125, 0x3, 0x2, 0x2, 0x2, 0x745, 0x746, 
       0x8, 0x94, 0x1, 0x2, 0x746, 0x747, 0x5, 0x128, 0x95, 0x2, 0x747, 
       0x74d, 0x3, 0x2, 0x2, 0x2, 0x748, 0x749, 0xc, 0x3, 0x2, 0x2, 0x749, 
       0x74a, 0x7, 0x81, 0x2, 0x2, 0x74a, 0x74c, 0x5, 0x128, 0x95, 0x2, 
       0x74b, 0x748, 0x3, 0x2, 0x2, 0x2, 0x74c, 0x74f, 0x3, 0x2, 0x2, 0x2, 
       0x74d, 0x74b, 0x3, 0x2, 0x2, 0x2, 0x74d, 0x74e, 0x3, 0x2, 0x2, 0x2, 
       0x74e, 0x127, 0x3, 0x2, 0x2, 0x2, 0x74f, 0x74d, 0x3, 0x2, 0x2, 0x2, 
       0x750, 0x752, 0x5, 0xe2, 0x72, 0x2, 0x751, 0x750, 0x3, 0x2, 0x2, 
       0x2, 0x751, 0x752, 0x3, 0x2, 0x2, 0x2, 0x752, 0x753, 0x3, 0x2, 0x2, 
       0x2, 0x753, 0x754, 0x5, 0x98, 0x4d, 0x2, 0x754, 0x755, 0x5, 0x100, 
       0x81, 0x2, 0x755, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x756, 0x758, 0x5, 0xe2, 
       0x72, 0x2, 0x757, 0x756, 0x3, 0x2, 0x2, 0x2, 0x757, 0x758, 0x3, 0x2, 
       0x2, 0x2, 0x758, 0x759, 0x3, 0x2, 0x2, 0x2, 0x759, 0x75a, 0x5, 0x98, 
       0x4d, 0x2, 0x75a, 0x75b, 0x5, 0x100, 0x81, 0x2, 0x75b, 0x75c, 0x7, 
       0x6b, 0x2, 0x2, 0x75c, 0x75d, 0x5, 0x13a, 0x9e, 0x2, 0x75d, 0x75f, 
       0x3, 0x2, 0x2, 0x2, 0x75e, 0x751, 0x3, 0x2, 0x2, 0x2, 0x75e, 0x757, 
       0x3, 0x2, 0x2, 0x2, 0x75f, 0x129, 0x3, 0x2, 0x2, 0x2, 0x760, 0x762, 
       0x5, 0xe2, 0x72, 0x2, 0x761, 0x760, 0x3, 0x2, 0x2, 0x2, 0x761, 0x762, 
       0x3, 0x2, 0x2, 0x2, 0x762, 0x764, 0x3, 0x2, 0x2, 0x2, 0x763, 0x765, 
       0x5, 0x98, 0x4d, 0x2, 0x764, 0x763, 0x3, 0x2, 0x2, 0x2, 0x764, 0x765, 
       0x3, 0x2, 0x2, 0x2, 0x765, 0x766, 0x3, 0x2, 0x2, 0x2, 0x766, 0x768, 
       0x5, 0x12c, 0x97, 0x2, 0x767, 0x769, 0x5, 0x154, 0xab, 0x2, 0x768, 
       0x767, 0x3, 0x2, 0x2, 0x2, 0x768, 0x769, 0x3, 0x2, 0x2, 0x2, 0x769, 
       0x76a, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x76b, 0x5, 0x12e, 0x98, 0x2, 0x76b, 
       0x12b, 0x3, 0x2, 0x2, 0x2, 0x76c, 0x76d, 0x5, 0x10, 0x9, 0x2, 0x76d, 
       0x76e, 0x5, 0x108, 0x85, 0x2, 0x76e, 0x770, 0x5, 0x10a, 0x86, 0x2, 
       0x76f, 0x771, 0x5, 0x10c, 0x87, 0x2, 0x770, 0x76f, 0x3, 0x2, 0x2, 
       0x2, 0x770, 0x771, 0x3, 0x2, 0x2, 0x2, 0x771, 0x12d, 0x3, 0x2, 0x2, 
       0x2, 0x772, 0x777, 0x5, 0x130, 0x99, 0x2, 0x773, 0x777, 0x5, 0x194, 
       0xcb, 0x2, 0x774, 0x777, 0x5, 0x132, 0x9a, 0x2, 0x775, 0x777, 0x5, 
       0x134, 0x9b, 0x2, 0x776, 0x772, 0x3, 0x2, 0x2, 0x2, 0x776, 0x773, 
       0x3, 0x2, 0x2, 0x2, 0x776, 0x774, 0x3, 0x2, 0x2, 0x2, 0x776, 0x775, 
       0x3, 0x2, 0x2, 0x2, 0x777, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x778, 0x77a, 
       0x5, 0x16a, 0xb6, 0x2, 0x779, 0x778, 0x3, 0x2, 0x2, 0x2, 0x779, 0x77a, 
       0x3, 0x2, 0x2, 0x2, 0x77a, 0x77b, 0x3, 0x2, 0x2, 0x2, 0x77b, 0x77c, 
       0x5, 0x72, 0x3a, 0x2, 0x77c, 0x131, 0x3, 0x2, 0x2, 0x2, 0x77d, 0x77e, 
       0x7, 0x6b, 0x2, 0x2, 0x77e, 0x77f, 0x7, 0x1a, 0x2, 0x2, 0x77f, 0x780, 
       0x7, 0x5a, 0x2, 0x2, 0x780, 0x133, 0x3, 0x2, 0x2, 0x2, 0x781, 0x782, 
       0x7, 0x6b, 0x2, 0x2, 0x782, 0x783, 0x7, 0x1b, 0x2, 0x2, 0x783, 0x784, 
       0x7, 0x5a, 0x2, 0x2, 0x784, 0x135, 0x3, 0x2, 0x2, 0x2, 0x785, 0x786, 
       0x5, 0x138, 0x9d, 0x2, 0x786, 0x137, 0x3, 0x2, 0x2, 0x2, 0x787, 0x788, 
       0x7, 0x6b, 0x2, 0x2, 0x788, 0x78b, 0x5, 0x13a, 0x9e, 0x2, 0x789, 
       0x78b, 0x5, 0x13e, 0xa0, 0x2, 0x78a, 0x787, 0x3, 0x2, 0x2, 0x2, 0x78a, 
       0x789, 0x3, 0x2, 0x2, 0x2, 0x78b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x78c, 
       0x78f, 0x5, 0x60, 0x31, 0x2, 0x78d, 0x78f, 0x5, 0x13e, 0xa0, 0x2, 
       0x78e, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x78e, 0x78d, 0x3, 0x2, 0x2, 0x2, 
       0x78f, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x790, 0x791, 0x8, 0x9f, 0x1, 0x2, 
       0x791, 0x793, 0x5, 0x13a, 0x9e, 0x2, 0x792, 0x794, 0x7, 0x5c, 0x2, 
       0x2, 0x793, 0x792, 0x3, 0x2, 0x2, 0x2, 0x793, 0x794, 0x3, 0x2, 0x2, 
       0x2, 0x794, 0x79d, 0x3, 0x2, 0x2, 0x2, 0x795, 0x796, 0xc, 0x3, 0x2, 
       0x2, 0x796, 0x797, 0x7, 0x81, 0x2, 0x2, 0x797, 0x799, 0x5, 0x13a, 
       0x9e, 0x2, 0x798, 0x79a, 0x7, 0x5c, 0x2, 0x2, 0x799, 0x798, 0x3, 
       0x2, 0x2, 0x2, 0x799, 0x79a, 0x3, 0x2, 0x2, 0x2, 0x79a, 0x79c, 0x3, 
       0x2, 0x2, 0x2, 0x79b, 0x795, 0x3, 0x2, 0x2, 0x2, 0x79c, 0x79f, 0x3, 
       0x2, 0x2, 0x2, 0x79d, 0x79b, 0x3, 0x2, 0x2, 0x2, 0x79d, 0x79e, 0x3, 
       0x2, 0x2, 0x2, 0x79e, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x79f, 0x79d, 0x3, 
       0x2, 0x2, 0x2, 0x7a0, 0x7a1, 0x7, 0x54, 0x2, 0x2, 0x7a1, 0x7a3, 0x5, 
       0x13c, 0x9f, 0x2, 0x7a2, 0x7a4, 0x7, 0x81, 0x2, 0x2, 0x7a3, 0x7a2, 
       0x3, 0x2, 0x2, 0x2, 0x7a3, 0x7a4, 0x3, 0x2, 0x2, 0x2, 0x7a4, 0x7a5, 
       0x3, 0x2, 0x2, 0x2, 0x7a5, 0x7a6, 0x7, 0x55, 0x2, 0x2, 0x7a6, 0x7aa, 
       0x3, 0x2, 0x2, 0x2, 0x7a7, 0x7a8, 0x7, 0x54, 0x2, 0x2, 0x7a8, 0x7aa, 
       0x7, 0x55, 0x2, 0x2, 0x7a9, 0x7a0, 0x3, 0x2, 0x2, 0x2, 0x7a9, 0x7a7, 
       0x3, 0x2, 0x2, 0x2, 0x7aa, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x7ab, 0x7ae, 
       0x5, 0x64, 0x33, 0x2, 0x7ac, 0x7ae, 0x5, 0x13e, 0xa0, 0x2, 0x7ad, 
       0x7ab, 0x3, 0x2, 0x2, 0x2, 0x7ad, 0x7ac, 0x3, 0x2, 0x2, 0x2, 0x7ae, 
       0x141, 0x3, 0x2, 0x2, 0x2, 0x7af, 0x7b0, 0x5, 0x144, 0xa3, 0x2, 0x7b0, 
       0x7b2, 0x7, 0x54, 0x2, 0x2, 0x7b1, 0x7b3, 0x5, 0x14c, 0xa7, 0x2, 
       0x7b2, 0x7b1, 0x3, 0x2, 0x2, 0x2, 0x7b2, 0x7b3, 0x3, 0x2, 0x2, 0x2, 
       0x7b3, 0x7b4, 0x3, 0x2, 0x2, 0x2, 0x7b4, 0x7b5, 0x7, 0x55, 0x2, 0x2, 
       0x7b5, 0x143, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7b8, 0x5, 0x14a, 0xa6, 
       0x2, 0x7b7, 0x7b9, 0x5, 0xe2, 0x72, 0x2, 0x7b8, 0x7b7, 0x3, 0x2, 
       0x2, 0x2, 0x7b8, 0x7b9, 0x3, 0x2, 0x2, 0x2, 0x7b9, 0x7ba, 0x3, 0x2, 
       0x2, 0x2, 0x7ba, 0x7bc, 0x5, 0x146, 0xa4, 0x2, 0x7bb, 0x7bd, 0x5, 
       0x148, 0xa5, 0x2, 0x7bc, 0x7bb, 0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7bd, 
       0x3, 0x2, 0x2, 0x2, 0x7bd, 0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7be, 0x7c0, 
       0x5, 0x15a, 0xae, 0x2, 0x7bf, 0x7be, 0x3, 0x2, 0x2, 0x2, 0x7bf, 0x7c0, 
       0x3, 0x2, 0x2, 0x2, 0x7c0, 0x7c9, 0x3, 0x2, 0x2, 0x2, 0x7c1, 0x7c3, 
       0x5, 0x14a, 0xa6, 0x2, 0x7c2, 0x7c4, 0x5, 0xe4, 0x73, 0x2, 0x7c3, 
       0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7c3, 0x7c4, 0x3, 0x2, 0x2, 0x2, 0x7c4, 
       0x7c6, 0x3, 0x2, 0x2, 0x2, 0x7c5, 0x7c7, 0x5, 0x15a, 0xae, 0x2, 0x7c6, 
       0x7c5, 0x3, 0x2, 0x2, 0x2, 0x7c6, 0x7c7, 0x3, 0x2, 0x2, 0x2, 0x7c7, 
       0x7c9, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7b6, 0x3, 0x2, 0x2, 0x2, 0x7c8, 
       0x7c1, 0x3, 0x2, 0x2, 0x2, 0x7c9, 0x145, 0x3, 0x2, 0x2, 0x2, 0x7ca, 
       0x7cc, 0x5, 0x16, 0xc, 0x2, 0x7cb, 0x7ca, 0x3, 0x2, 0x2, 0x2, 0x7cb, 
       0x7cc, 0x3, 0x2, 0x2, 0x2, 0x7cc, 0x7cd, 0x3, 0x2, 0x2, 0x2, 0x7cd, 
       0x7ce, 0x5, 0x8, 0x5, 0x2, 0x7ce, 0x147, 0x3, 0x2, 0x2, 0x2, 0x7cf, 
       0x7d0, 0x7, 0x53, 0x2, 0x2, 0x7d0, 0x149, 0x3, 0x2, 0x2, 0x2, 0x7d1, 
       0x7d2, 0x9, 0xc, 0x2, 0x2, 0x7d2, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x7d3, 
       0x7d5, 0x5, 0x14e, 0xa8, 0x2, 0x7d4, 0x7d6, 0x5, 0x14c, 0xa7, 0x2, 
       0x7d5, 0x7d4, 0x3, 0x2, 0x2, 0x2, 0x7d5, 0x7d6, 0x3, 0x2, 0x2, 0x2, 
       0x7d6, 0x7dd, 0x3, 0x2, 0x2, 0x2, 0x7d7, 0x7d8, 0x5, 0x162, 0xb2, 
       0x2, 0x7d8, 0x7da, 0x7, 0x5b, 0x2, 0x2, 0x7d9, 0x7db, 0x5, 0x14c, 
       0xa7, 0x2, 0x7da, 0x7d9, 0x3, 0x2, 0x2, 0x2, 0x7da, 0x7db, 0x3, 0x2, 
       0x2, 0x2, 0x7db, 0x7dd, 0x3, 0x2, 0x2, 0x2, 0x7dc, 0x7d3, 0x3, 0x2, 
       0x2, 0x2, 0x7dc, 0x7d7, 0x3, 0x2, 0x2, 0x2, 0x7dd, 0x14d, 0x3, 0x2, 
       0x2, 0x2, 0x7de, 0x7e0, 0x5, 0xe2, 0x72, 0x2, 0x7df, 0x7de, 0x3, 
       0x2, 0x2, 0x2, 0x7df, 0x7e0, 0x3, 0x2, 0x2, 0x2, 0x7e0, 0x7e1, 0x3, 
       0x2, 0x2, 0x2, 0x7e1, 0x7e2, 0x5, 0x98, 0x4d, 0x2, 0x7e2, 0x7e3, 
       0x5, 0x150, 0xa9, 0x2, 0x7e3, 0x7e4, 0x7, 0x5a, 0x2, 0x2, 0x7e4, 
       0x7ed, 0x3, 0x2, 0x2, 0x2, 0x7e5, 0x7ed, 0x5, 0x12a, 0x96, 0x2, 0x7e6, 
       0x7ed, 0x5, 0xd6, 0x6c, 0x2, 0x7e7, 0x7ed, 0x5, 0x90, 0x49, 0x2, 
       0x7e8, 0x7ed, 0x5, 0x178, 0xbd, 0x2, 0x7e9, 0x7ed, 0x5, 0x190, 0xc9, 
       0x2, 0x7ea, 0x7ed, 0x5, 0x8c, 0x47, 0x2, 0x7eb, 0x7ed, 0x5, 0x92, 
       0x4a, 0x2, 0x7ec, 0x7df, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7e5, 0x3, 0x2, 
       0x2, 0x2, 0x7ec, 0x7e6, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7e7, 0x3, 0x2, 
       0x2, 0x2, 0x7ec, 0x7e8, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7e9, 0x3, 0x2, 
       0x2, 0x2, 0x7ec, 0x7ea, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0x7eb, 0x3, 0x2, 
       0x2, 0x2, 0x7ed, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x7ee, 0x7ef, 0x8, 0xa9, 
       0x1, 0x2, 0x7ef, 0x7f0, 0x5, 0x152, 0xaa, 0x2, 0x7f0, 0x7f6, 0x3, 
       0x2, 0x2, 0x2, 0x7f1, 0x7f2, 0xc, 0x3, 0x2, 0x2, 0x7f2, 0x7f3, 0x7, 
       0x81, 0x2, 0x2, 0x7f3, 0x7f5, 0x5, 0x152, 0xaa, 0x2, 0x7f4, 0x7f1, 
       0x3, 0x2, 0x2, 0x2, 0x7f5, 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7f4, 
       0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7f7, 0x3, 0x2, 0x2, 0x2, 0x7f7, 0x151, 
       0x3, 0x2, 0x2, 0x2, 0x7f8, 0x7f6, 0x3, 0x2, 0x2, 0x2, 0x7f9, 0x7fb, 
       0x5, 0x100, 0x81, 0x2, 0x7fa, 0x7fc, 0x5, 0x154, 0xab, 0x2, 0x7fb, 
       0x7fa, 0x3, 0x2, 0x2, 0x2, 0x7fb, 0x7fc, 0x3, 0x2, 0x2, 0x2, 0x7fc, 
       0x809, 0x3, 0x2, 0x2, 0x2, 0x7fd, 0x7fe, 0x5, 0x100, 0x81, 0x2, 0x7fe, 
       0x7ff, 0x5, 0x138, 0x9d, 0x2, 0x7ff, 0x809, 0x3, 0x2, 0x2, 0x2, 0x800, 
       0x802, 0x7, 0x8d, 0x2, 0x2, 0x801, 0x800, 0x3, 0x2, 0x2, 0x2, 0x801, 
       0x802, 0x3, 0x2, 0x2, 0x2, 0x802, 0x804, 0x3, 0x2, 0x2, 0x2, 0x803, 
       0x805, 0x5, 0xe2, 0x72, 0x2, 0x804, 0x803, 0x3, 0x2, 0x2, 0x2, 0x804, 
       0x805, 0x3, 0x2, 0x2, 0x2, 0x805, 0x806, 0x3, 0x2, 0x2, 0x2, 0x806, 
       0x807, 0x7, 0x5b, 0x2, 0x2, 0x807, 0x809, 0x5, 0x66, 0x34, 0x2, 0x808, 
       0x7f9, 0x3, 0x2, 0x2, 0x2, 0x808, 0x7fd, 0x3, 0x2, 0x2, 0x2, 0x808, 
       0x801, 0x3, 0x2, 0x2, 0x2, 0x809, 0x153, 0x3, 0x2, 0x2, 0x2, 0x80a, 
       0x80b, 0x8, 0xab, 0x1, 0x2, 0x80b, 0x80c, 0x5, 0x156, 0xac, 0x2, 
       0x80c, 0x811, 0x3, 0x2, 0x2, 0x2, 0x80d, 0x80e, 0xc, 0x3, 0x2, 0x2, 
       0x80e, 0x810, 0x5, 0x156, 0xac, 0x2, 0x80f, 0x80d, 0x3, 0x2, 0x2, 
       0x2, 0x810, 0x813, 0x3, 0x2, 0x2, 0x2, 0x811, 0x80f, 0x3, 0x2, 0x2, 
       0x2, 0x811, 0x812, 0x3, 0x2, 0x2, 0x2, 0x812, 0x155, 0x3, 0x2, 0x2, 
       0x2, 0x813, 0x811, 0x3, 0x2, 0x2, 0x2, 0x814, 0x815, 0x9, 0xd, 0x2, 
       0x2, 0x815, 0x157, 0x3, 0x2, 0x2, 0x2, 0x816, 0x817, 0x7, 0x6b, 0x2, 
       0x2, 0x817, 0x818, 0x7, 0x84, 0x2, 0x2, 0x818, 0x159, 0x3, 0x2, 0x2, 
       0x2, 0x819, 0x81a, 0x7, 0x5b, 0x2, 0x2, 0x81a, 0x81b, 0x5, 0x15c, 
       0xaf, 0x2, 0x81b, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x81c, 0x81d, 0x8, 0xaf, 
       0x1, 0x2, 0x81d, 0x81f, 0x5, 0x15e, 0xb0, 0x2, 0x81e, 0x820, 0x7, 
       0x5c, 0x2, 0x2, 0x81f, 0x81e, 0x3, 0x2, 0x2, 0x2, 0x81f, 0x820, 0x3, 
       0x2, 0x2, 0x2, 0x820, 0x829, 0x3, 0x2, 0x2, 0x2, 0x821, 0x822, 0xc, 
       0x3, 0x2, 0x2, 0x822, 0x823, 0x7, 0x81, 0x2, 0x2, 0x823, 0x825, 0x5, 
       0x15e, 0xb0, 0x2, 0x824, 0x826, 0x7, 0x5c, 0x2, 0x2, 0x825, 0x824, 
       0x3, 0x2, 0x2, 0x2, 0x825, 0x826, 0x3, 0x2, 0x2, 0x2, 0x826, 0x828, 
       0x3, 0x2, 0x2, 0x2, 0x827, 0x821, 0x3, 0x2, 0x2, 0x2, 0x828, 0x82b, 
       0x3, 0x2, 0x2, 0x2, 0x829, 0x827, 0x3, 0x2, 0x2, 0x2, 0x829, 0x82a, 
       0x3, 0x2, 0x2, 0x2, 0x82a, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x829, 
       0x3, 0x2, 0x2, 0x2, 0x82c, 0x82e, 0x5, 0xe2, 0x72, 0x2, 0x82d, 0x82c, 
       0x3, 0x2, 0x2, 0x2, 0x82d, 0x82e, 0x3, 0x2, 0x2, 0x2, 0x82e, 0x82f, 
       0x3, 0x2, 0x2, 0x2, 0x82f, 0x842, 0x5, 0x160, 0xb1, 0x2, 0x830, 0x832, 
       0x5, 0xe2, 0x72, 0x2, 0x831, 0x830, 0x3, 0x2, 0x2, 0x2, 0x831, 0x832, 
       0x3, 0x2, 0x2, 0x2, 0x832, 0x833, 0x3, 0x2, 0x2, 0x2, 0x833, 0x835, 
       0x7, 0x4d, 0x2, 0x2, 0x834, 0x836, 0x5, 0x162, 0xb2, 0x2, 0x835, 
       0x834, 0x3, 0x2, 0x2, 0x2, 0x835, 0x836, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x837, 0x3, 0x2, 0x2, 0x2, 0x837, 0x842, 0x5, 0x160, 0xb1, 0x2, 0x838, 
       0x83a, 0x5, 0xe2, 0x72, 0x2, 0x839, 0x838, 0x3, 0x2, 0x2, 0x2, 0x839, 
       0x83a, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x83b, 0x3, 0x2, 0x2, 0x2, 0x83b, 
       0x83d, 0x5, 0x162, 0xb2, 0x2, 0x83c, 0x83e, 0x7, 0x4d, 0x2, 0x2, 
       0x83d, 0x83c, 0x3, 0x2, 0x2, 0x2, 0x83d, 0x83e, 0x3, 0x2, 0x2, 0x2, 
       0x83e, 0x83f, 0x3, 0x2, 0x2, 0x2, 0x83f, 0x840, 0x5, 0x160, 0xb1, 
       0x2, 0x840, 0x842, 0x3, 0x2, 0x2, 0x2, 0x841, 0x82d, 0x3, 0x2, 0x2, 
       0x2, 0x841, 0x831, 0x3, 0x2, 0x2, 0x2, 0x841, 0x839, 0x3, 0x2, 0x2, 
       0x2, 0x842, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x843, 0x845, 0x5, 0x16, 0xc, 
       0x2, 0x844, 0x843, 0x3, 0x2, 0x2, 0x2, 0x844, 0x845, 0x3, 0x2, 0x2, 
       0x2, 0x845, 0x846, 0x3, 0x2, 0x2, 0x2, 0x846, 0x84d, 0x5, 0x8, 0x5, 
       0x2, 0x847, 0x848, 0x5, 0x16, 0xc, 0x2, 0x848, 0x849, 0x7, 0x41, 
       0x2, 0x2, 0x849, 0x84a, 0x5, 0x182, 0xc2, 0x2, 0x84a, 0x84d, 0x3, 
       0x2, 0x2, 0x2, 0x84b, 0x84d, 0x5, 0xb0, 0x59, 0x2, 0x84c, 0x844, 
       0x3, 0x2, 0x2, 0x2, 0x84c, 0x847, 0x3, 0x2, 0x2, 0x2, 0x84c, 0x84b, 
       0x3, 0x2, 0x2, 0x2, 0x84d, 0x161, 0x3, 0x2, 0x2, 0x2, 0x84e, 0x84f, 
       0x9, 0xe, 0x2, 0x2, 0x84f, 0x163, 0x3, 0x2, 0x2, 0x2, 0x850, 0x851, 
       0x7, 0x32, 0x2, 0x2, 0x851, 0x852, 0x5, 0x166, 0xb4, 0x2, 0x852, 
       0x165, 0x3, 0x2, 0x2, 0x2, 0x853, 0x855, 0x5, 0xa6, 0x54, 0x2, 0x854, 
       0x856, 0x5, 0x168, 0xb5, 0x2, 0x855, 0x854, 0x3, 0x2, 0x2, 0x2, 0x855, 
       0x856, 0x3, 0x2, 0x2, 0x2, 0x856, 0x167, 0x3, 0x2, 0x2, 0x2, 0x857, 
       0x859, 0x5, 0x10e, 0x88, 0x2, 0x858, 0x85a, 0x5, 0x168, 0xb5, 0x2, 
       0x859, 0x858, 0x3, 0x2, 0x2, 0x2, 0x859, 0x85a, 0x3, 0x2, 0x2, 0x2, 
       0x85a, 0x169, 0x3, 0x2, 0x2, 0x2, 0x85b, 0x85c, 0x7, 0x5b, 0x2, 0x2, 
       0x85c, 0x85d, 0x5, 0x16c, 0xb7, 0x2, 0x85d, 0x16b, 0x3, 0x2, 0x2, 
       0x2, 0x85e, 0x85f, 0x8, 0xb7, 0x1, 0x2, 0x85f, 0x861, 0x5, 0x16e, 
       0xb8, 0x2, 0x860, 0x862, 0x7, 0x5c, 0x2, 0x2, 0x861, 0x860, 0x3, 
       0x2, 0x2, 0x2, 0x861, 0x862, 0x3, 0x2, 0x2, 0x2, 0x862, 0x86b, 0x3, 
       0x2, 0x2, 0x2, 0x863, 0x864, 0xc, 0x3, 0x2, 0x2, 0x864, 0x865, 0x7, 
       0x81, 0x2, 0x2, 0x865, 0x867, 0x5, 0x16e, 0xb8, 0x2, 0x866, 0x868, 
       0x7, 0x5c, 0x2, 0x2, 0x867, 0x866, 0x3, 0x2, 0x2, 0x2, 0x867, 0x868, 
       0x3, 0x2, 0x2, 0x2, 0x868, 0x86a, 0x3, 0x2, 0x2, 0x2, 0x869, 0x863, 
       0x3, 0x2, 0x2, 0x2, 0x86a, 0x86d, 0x3, 0x2, 0x2, 0x2, 0x86b, 0x869, 
       0x3, 0x2, 0x2, 0x2, 0x86b, 0x86c, 0x3, 0x2, 0x2, 0x2, 0x86c, 0x16d, 
       0x3, 0x2, 0x2, 0x2, 0x86d, 0x86b, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x86f, 
       0x5, 0x170, 0xb9, 0x2, 0x86f, 0x871, 0x7, 0x58, 0x2, 0x2, 0x870, 
       0x872, 0x5, 0x3e, 0x20, 0x2, 0x871, 0x870, 0x3, 0x2, 0x2, 0x2, 0x871, 
       0x872, 0x3, 0x2, 0x2, 0x2, 0x872, 0x873, 0x3, 0x2, 0x2, 0x2, 0x873, 
       0x874, 0x7, 0x59, 0x2, 0x2, 0x874, 0x879, 0x3, 0x2, 0x2, 0x2, 0x875, 
       0x876, 0x5, 0x170, 0xb9, 0x2, 0x876, 0x877, 0x5, 0x13e, 0xa0, 0x2, 
       0x877, 0x879, 0x3, 0x2, 0x2, 0x2, 0x878, 0x86e, 0x3, 0x2, 0x2, 0x2, 
       0x878, 0x875, 0x3, 0x2, 0x2, 0x2, 0x879, 0x16f, 0x3, 0x2, 0x2, 0x2, 
       0x87a, 0x87b, 0x7, 0x8d, 0x2, 0x2, 0x87b, 0x171, 0x3, 0x2, 0x2, 0x2, 
       0x87c, 0x87d, 0x7, 0x32, 0x2, 0x2, 0x87d, 0x87e, 0x5, 0x174, 0xbb, 
       0x2, 0x87e, 0x173, 0x3, 0x2, 0x2, 0x2, 0x87f, 0x8b0, 0x7, 0x2f, 0x2, 
       0x2, 0x880, 0x8b0, 0x7, 0x1b, 0x2, 0x2, 0x881, 0x882, 0x7, 0x2f, 
       0x2, 0x2, 0x882, 0x883, 0x7, 0x54, 0x2, 0x2, 0x883, 0x8b0, 0x7, 0x57, 
       0x2, 0x2, 0x884, 0x885, 0x7, 0x1b, 0x2, 0x2, 0x885, 0x886, 0x7, 0x54, 
       0x2, 0x2, 0x886, 0x8b0, 0x7, 0x57, 0x2, 0x2, 0x887, 0x8b0, 0x7, 0x61, 
       0x2, 0x2, 0x888, 0x8b0, 0x7, 0x62, 0x2, 0x2, 0x889, 0x8b0, 0x7, 0x63, 
       0x2, 0x2, 0x88a, 0x8b0, 0x7, 0x64, 0x2, 0x2, 0x88b, 0x8b0, 0x7, 0x65, 
       0x2, 0x2, 0x88c, 0x8b0, 0x7, 0x66, 0x2, 0x2, 0x88d, 0x8b0, 0x7, 0x67, 
       0x2, 0x2, 0x88e, 0x8b0, 0x7, 0x68, 0x2, 0x2, 0x88f, 0x8b0, 0x7, 0x69, 
       0x2, 0x2, 0x890, 0x8b0, 0x7, 0x6a, 0x2, 0x2, 0x891, 0x8b0, 0x7, 0x6b, 
       0x2, 0x2, 0x892, 0x8b0, 0x7, 0x6c, 0x2, 0x2, 0x893, 0x8b0, 0x7, 0x6d, 
       0x2, 0x2, 0x894, 0x8b0, 0x7, 0x6e, 0x2, 0x2, 0x895, 0x8b0, 0x7, 0x6f, 
       0x2, 0x2, 0x896, 0x8b0, 0x7, 0x70, 0x2, 0x2, 0x897, 0x8b0, 0x7, 0x71, 
       0x2, 0x2, 0x898, 0x8b0, 0x7, 0x72, 0x2, 0x2, 0x899, 0x8b0, 0x7, 0x73, 
       0x2, 0x2, 0x89a, 0x8b0, 0x7, 0x74, 0x2, 0x2, 0x89b, 0x8b0, 0x7, 0x75, 
       0x2, 0x2, 0x89c, 0x8b0, 0x7, 0x76, 0x2, 0x2, 0x89d, 0x8b0, 0x5, 0x2, 
       0x2, 0x2, 0x89e, 0x8b0, 0x7, 0x78, 0x2, 0x2, 0x89f, 0x8b0, 0x7, 0x77, 
       0x2, 0x2, 0x8a0, 0x8b0, 0x7, 0x79, 0x2, 0x2, 0x8a1, 0x8b0, 0x7, 0x7a, 
       0x2, 0x2, 0x8a2, 0x8b0, 0x7, 0x7b, 0x2, 0x2, 0x8a3, 0x8b0, 0x7, 0x7c, 
       0x2, 0x2, 0x8a4, 0x8b0, 0x7, 0x7d, 0x2, 0x2, 0x8a5, 0x8b0, 0x7, 0x7e, 
       0x2, 0x2, 0x8a6, 0x8b0, 0x7, 0x7f, 0x2, 0x2, 0x8a7, 0x8b0, 0x7, 0x80, 
       0x2, 0x2, 0x8a8, 0x8b0, 0x7, 0x81, 0x2, 0x2, 0x8a9, 0x8b0, 0x7, 0x82, 
       0x2, 0x2, 0x8aa, 0x8b0, 0x7, 0x83, 0x2, 0x2, 0x8ab, 0x8ac, 0x7, 0x58, 
       0x2, 0x2, 0x8ac, 0x8b0, 0x7, 0x59, 0x2, 0x2, 0x8ad, 0x8ae, 0x7, 0x56, 
       0x2, 0x2, 0x8ae, 0x8b0, 0x7, 0x57, 0x2, 0x2, 0x8af, 0x87f, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x880, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x881, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x884, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x887, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x888, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x889, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x88a, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x88b, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x88c, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x88d, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x88e, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x88f, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x890, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x891, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x892, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x893, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x894, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x895, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x896, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x897, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x898, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x899, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x89a, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x89b, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x89c, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x89d, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x89e, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x89f, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x8a0, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x8a1, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x8a2, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x8a3, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x8a4, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x8a5, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x8a6, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x8a7, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x8a8, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x8a9, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x8aa, 0x3, 0x2, 0x2, 0x2, 0x8af, 0x8ab, 0x3, 0x2, 
       0x2, 0x2, 0x8af, 0x8ad, 0x3, 0x2, 0x2, 0x2, 0x8b0, 0x175, 0x3, 0x2, 
       0x2, 0x2, 0x8b1, 0x8b2, 0x7, 0x32, 0x2, 0x2, 0x8b2, 0x8b3, 0x7, 0x88, 
       0x2, 0x2, 0x8b3, 0x8b7, 0x7, 0x8d, 0x2, 0x2, 0x8b4, 0x8b5, 0x7, 0x32, 
       0x2, 0x2, 0x8b5, 0x8b7, 0x7, 0x8c, 0x2, 0x2, 0x8b6, 0x8b1, 0x3, 0x2, 
       0x2, 0x2, 0x8b6, 0x8b4, 0x3, 0x2, 0x2, 0x2, 0x8b7, 0x177, 0x3, 0x2, 
       0x2, 0x2, 0x8b8, 0x8b9, 0x7, 0x41, 0x2, 0x2, 0x8b9, 0x8ba, 0x7, 0x6c, 
       0x2, 0x2, 0x8ba, 0x8bb, 0x5, 0x17a, 0xbe, 0x2, 0x8bb, 0x8bc, 0x7, 
       0x6d, 0x2, 0x2, 0x8bc, 0x8bd, 0x5, 0x86, 0x44, 0x2, 0x8bd, 0x179, 
       0x3, 0x2, 0x2, 0x2, 0x8be, 0x8bf, 0x8, 0xbe, 0x1, 0x2, 0x8bf, 0x8c0, 
       0x5, 0x17c, 0xbf, 0x2, 0x8c0, 0x8c6, 0x3, 0x2, 0x2, 0x2, 0x8c1, 0x8c2, 
       0xc, 0x3, 0x2, 0x2, 0x8c2, 0x8c3, 0x7, 0x81, 0x2, 0x2, 0x8c3, 0x8c5, 
       0x5, 0x17c, 0xbf, 0x2, 0x8c4, 0x8c1, 0x3, 0x2, 0x2, 0x2, 0x8c5, 0x8c8, 
       0x3, 0x2, 0x2, 0x2, 0x8c6, 0x8c4, 0x3, 0x2, 0x2, 0x2, 0x8c6, 0x8c7, 
       0x3, 0x2, 0x2, 0x2, 0x8c7, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8c6, 
       0x3, 0x2, 0x2, 0x2, 0x8c9, 0x8cc, 0x5, 0x17e, 0xc0, 0x2, 0x8ca, 0x8cc, 
       0x5, 0x128, 0x95, 0x2, 0x8cb, 0x8c9, 0x3, 0x2, 0x2, 0x2, 0x8cb, 0x8ca, 
       0x3, 0x2, 0x2, 0x2, 0x8cc, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8cf, 
       0x5, 0x180, 0xc1, 0x2, 0x8ce, 0x8d0, 0x7, 0x5c, 0x2, 0x2, 0x8cf, 
       0x8ce, 0x3, 0x2, 0x2, 0x2, 0x8cf, 0x8d0, 0x3, 0x2, 0x2, 0x2, 0x8d0, 
       0x8d2, 0x3, 0x2, 0x2, 0x2, 0x8d1, 0x8d3, 0x7, 0x8d, 0x2, 0x2, 0x8d2, 
       0x8d1, 0x3, 0x2, 0x2, 0x2, 0x8d2, 0x8d3, 0x3, 0x2, 0x2, 0x2, 0x8d3, 
       0x8f2, 0x3, 0x2, 0x2, 0x2, 0x8d4, 0x8d6, 0x5, 0x180, 0xc1, 0x2, 0x8d5, 
       0x8d7, 0x7, 0x8d, 0x2, 0x2, 0x8d6, 0x8d5, 0x3, 0x2, 0x2, 0x2, 0x8d6, 
       0x8d7, 0x3, 0x2, 0x2, 0x2, 0x8d7, 0x8d8, 0x3, 0x2, 0x2, 0x2, 0x8d8, 
       0x8d9, 0x7, 0x6b, 0x2, 0x2, 0x8d9, 0x8da, 0x5, 0x116, 0x8c, 0x2, 
       0x8da, 0x8f2, 0x3, 0x2, 0x2, 0x2, 0x8db, 0x8dc, 0x7, 0x41, 0x2, 0x2, 
       0x8dc, 0x8dd, 0x7, 0x6c, 0x2, 0x2, 0x8dd, 0x8de, 0x5, 0x17a, 0xbe, 
       0x2, 0x8de, 0x8df, 0x7, 0x6d, 0x2, 0x2, 0x8df, 0x8e1, 0x5, 0x180, 
       0xc1, 0x2, 0x8e0, 0x8e2, 0x7, 0x5c, 0x2, 0x2, 0x8e1, 0x8e0, 0x3, 
       0x2, 0x2, 0x2, 0x8e1, 0x8e2, 0x3, 0x2, 0x2, 0x2, 0x8e2, 0x8e4, 0x3, 
       0x2, 0x2, 0x2, 0x8e3, 0x8e5, 0x7, 0x8d, 0x2, 0x2, 0x8e4, 0x8e3, 0x3, 
       0x2, 0x2, 0x2, 0x8e4, 0x8e5, 0x3, 0x2, 0x2, 0x2, 0x8e5, 0x8f2, 0x3, 
       0x2, 0x2, 0x2, 0x8e6, 0x8e7, 0x7, 0x41, 0x2, 0x2, 0x8e7, 0x8e8, 0x7, 
       0x6c, 0x2, 0x2, 0x8e8, 0x8e9, 0x5, 0x17a, 0xbe, 0x2, 0x8e9, 0x8ea, 
       0x7, 0x6d, 0x2, 0x2, 0x8ea, 0x8ec, 0x5, 0x180, 0xc1, 0x2, 0x8eb, 
       0x8ed, 0x7, 0x8d, 0x2, 0x2, 0x8ec, 0x8eb, 0x3, 0x2, 0x2, 0x2, 0x8ec, 
       0x8ed, 0x3, 0x2, 0x2, 0x2, 0x8ed, 0x8ee, 0x3, 0x2, 0x2, 0x2, 0x8ee, 
       0x8ef, 0x7, 0x6b, 0x2, 0x2, 0x8ef, 0x8f0, 0x5, 0x10, 0x9, 0x2, 0x8f0, 
       0x8f2, 0x3, 0x2, 0x2, 0x2, 0x8f1, 0x8cd, 0x3, 0x2, 0x2, 0x2, 0x8f1, 
       0x8d4, 0x3, 0x2, 0x2, 0x2, 0x8f1, 0x8db, 0x3, 0x2, 0x2, 0x2, 0x8f1, 
       0x8e6, 0x3, 0x2, 0x2, 0x2, 0x8f2, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x8f3, 
       0x8f4, 0x9, 0xf, 0x2, 0x2, 0x8f4, 0x181, 0x3, 0x2, 0x2, 0x2, 0x8f5, 
       0x8f6, 0x5, 0xa, 0x6, 0x2, 0x8f6, 0x8f8, 0x7, 0x6c, 0x2, 0x2, 0x8f7, 
       0x8f9, 0x5, 0x186, 0xc4, 0x2, 0x8f8, 0x8f7, 0x3, 0x2, 0x2, 0x2, 0x8f8, 
       0x8f9, 0x3, 0x2, 0x2, 0x2, 0x8f9, 0x8fa, 0x3, 0x2, 0x2, 0x2, 0x8fa, 
       0x8fb, 0x7, 0x6d, 0x2, 0x2, 0x8fb, 0x183, 0x3, 0x2, 0x2, 0x2, 0x8fc, 
       0x90c, 0x5, 0x182, 0xc2, 0x2, 0x8fd, 0x8fe, 0x5, 0x172, 0xba, 0x2, 
       0x8fe, 0x900, 0x7, 0x6c, 0x2, 0x2, 0x8ff, 0x901, 0x5, 0x186, 0xc4, 
       0x2, 0x900, 0x8ff, 0x3, 0x2, 0x2, 0x2, 0x900, 0x901, 0x3, 0x2, 0x2, 
       0x2, 0x901, 0x902, 0x3, 0x2, 0x2, 0x2, 0x902, 0x903, 0x7, 0x6d, 0x2, 
       0x2, 0x903, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x904, 0x905, 0x5, 0x176, 
       0xbc, 0x2, 0x905, 0x907, 0x7, 0x6c, 0x2, 0x2, 0x906, 0x908, 0x5, 
       0x186, 0xc4, 0x2, 0x907, 0x906, 0x3, 0x2, 0x2, 0x2, 0x907, 0x908, 
       0x3, 0x2, 0x2, 0x2, 0x908, 0x909, 0x3, 0x2, 0x2, 0x2, 0x909, 0x90a, 
       0x7, 0x6d, 0x2, 0x2, 0x90a, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x90b, 0x8fc, 
       0x3, 0x2, 0x2, 0x2, 0x90b, 0x8fd, 0x3, 0x2, 0x2, 0x2, 0x90b, 0x904, 
       0x3, 0x2, 0x2, 0x2, 0x90c, 0x185, 0x3, 0x2, 0x2, 0x2, 0x90d, 0x90e, 
       0x8, 0xc4, 0x1, 0x2, 0x90e, 0x910, 0x5, 0x188, 0xc5, 0x2, 0x90f, 
       0x911, 0x7, 0x5c, 0x2, 0x2, 0x910, 0x90f, 0x3, 0x2, 0x2, 0x2, 0x910, 
       0x911, 0x3, 0x2, 0x2, 0x2, 0x911, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x912, 
       0x913, 0xc, 0x3, 0x2, 0x2, 0x913, 0x914, 0x7, 0x81, 0x2, 0x2, 0x914, 
       0x916, 0x5, 0x188, 0xc5, 0x2, 0x915, 0x917, 0x7, 0x5c, 0x2, 0x2, 
       0x916, 0x915, 0x3, 0x2, 0x2, 0x2, 0x916, 0x917, 0x3, 0x2, 0x2, 0x2, 
       0x917, 0x919, 0x3, 0x2, 0x2, 0x2, 0x918, 0x912, 0x3, 0x2, 0x2, 0x2, 
       0x919, 0x91c, 0x3, 0x2, 0x2, 0x2, 0x91a, 0x918, 0x3, 0x2, 0x2, 0x2, 
       0x91a, 0x91b, 0x3, 0x2, 0x2, 0x2, 0x91b, 0x187, 0x3, 0x2, 0x2, 0x2, 
       0x91c, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x91d, 0x91e, 0x5, 0x116, 0x8c, 
       0x2, 0x91e, 0x189, 0x3, 0x2, 0x2, 0x2, 0x91f, 0x920, 0x7, 0x49, 0x2, 
       0x2, 0x920, 0x921, 0x5, 0x16, 0xc, 0x2, 0x921, 0x922, 0x7, 0x8d, 
       0x2, 0x2, 0x922, 0x92b, 0x3, 0x2, 0x2, 0x2, 0x923, 0x924, 0x7, 0x49, 
       0x2, 0x2, 0x924, 0x926, 0x5, 0x16, 0xc, 0x2, 0x925, 0x927, 0x7, 0x41, 
       0x2, 0x2, 0x926, 0x925, 0x3, 0x2, 0x2, 0x2, 0x926, 0x927, 0x3, 0x2, 
       0x2, 0x2, 0x927, 0x928, 0x3, 0x2, 0x2, 0x2, 0x928, 0x929, 0x5, 0x182, 
       0xc2, 0x2, 0x929, 0x92b, 0x3, 0x2, 0x2, 0x2, 0x92a, 0x91f, 0x3, 0x2, 
       0x2, 0x2, 0x92a, 0x923, 0x3, 0x2, 0x2, 0x2, 0x92b, 0x18b, 0x3, 0x2, 
       0x2, 0x2, 0x92c, 0x92e, 0x7, 0x23, 0x2, 0x2, 0x92d, 0x92c, 0x3, 0x2, 
       0x2, 0x2, 0x92d, 0x92e, 0x3, 0x2, 0x2, 0x2, 0x92e, 0x92f, 0x3, 0x2, 
       0x2, 0x2, 0x92f, 0x930, 0x7, 0x41, 0x2, 0x2, 0x930, 0x931, 0x5, 0x86, 
       0x44, 0x2, 0x931, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x932, 0x933, 0x7, 0x41, 
       0x2, 0x2, 0x933, 0x934, 0x7, 0x6c, 0x2, 0x2, 0x934, 0x935, 0x7, 0x6d, 
       0x2, 0x2, 0x935, 0x936, 0x5, 0x86, 0x44, 0x2, 0x936, 0x18f, 0x3, 
       0x2, 0x2, 0x2, 0x937, 0x939, 0x7, 0x21, 0x2, 0x2, 0x938, 0x937, 0x3, 
       0x2, 0x2, 0x2, 0x938, 0x939, 0x3, 0x2, 0x2, 0x2, 0x939, 0x93a, 0x3, 
       0x2, 0x2, 0x2, 0x93a, 0x93b, 0x5, 0xa, 0x6, 0x2, 0x93b, 0x93c, 0x7, 
       0x58, 0x2, 0x2, 0x93c, 0x93d, 0x5, 0x124, 0x93, 0x2, 0x93d, 0x93e, 
       0x7, 0x59, 0x2, 0x2, 0x93e, 0x93f, 0x7, 0x83, 0x2, 0x2, 0x93f, 0x940, 
       0x5, 0x182, 0xc2, 0x2, 0x940, 0x941, 0x7, 0x5a, 0x2, 0x2, 0x941, 
       0x191, 0x3, 0x2, 0x2, 0x2, 0x942, 0x943, 0x7, 0x46, 0x2, 0x2, 0x943, 
       0x944, 0x5, 0x72, 0x3a, 0x2, 0x944, 0x945, 0x5, 0x196, 0xcc, 0x2, 
       0x945, 0x193, 0x3, 0x2, 0x2, 0x2, 0x946, 0x948, 0x7, 0x46, 0x2, 0x2, 
       0x947, 0x949, 0x5, 0x16a, 0xb6, 0x2, 0x948, 0x947, 0x3, 0x2, 0x2, 
       0x2, 0x948, 0x949, 0x3, 0x2, 0x2, 0x2, 0x949, 0x94a, 0x3, 0x2, 0x2, 
       0x2, 0x94a, 0x94b, 0x5, 0x72, 0x3a, 0x2, 0x94b, 0x94c, 0x5, 0x196, 
       0xcc, 0x2, 0x94c, 0x195, 0x3, 0x2, 0x2, 0x2, 0x94d, 0x94f, 0x5, 0x198, 
       0xcd, 0x2, 0x94e, 0x950, 0x5, 0x196, 0xcc, 0x2, 0x94f, 0x94e, 0x3, 
       0x2, 0x2, 0x2, 0x94f, 0x950, 0x3, 0x2, 0x2, 0x2, 0x950, 0x197, 0x3, 
       0x2, 0x2, 0x2, 0x951, 0x952, 0x7, 0xf, 0x2, 0x2, 0x952, 0x953, 0x7, 
       0x58, 0x2, 0x2, 0x953, 0x954, 0x5, 0x19a, 0xce, 0x2, 0x954, 0x955, 
       0x7, 0x59, 0x2, 0x2, 0x955, 0x956, 0x5, 0x72, 0x3a, 0x2, 0x956, 0x199, 
       0x3, 0x2, 0x2, 0x2, 0x957, 0x959, 0x5, 0xe2, 0x72, 0x2, 0x958, 0x957, 
       0x3, 0x2, 0x2, 0x2, 0x958, 0x959, 0x3, 0x2, 0x2, 0x2, 0x959, 0x95a, 
       0x3, 0x2, 0x2, 0x2, 0x95a, 0x95b, 0x5, 0xa6, 0x54, 0x2, 0x95b, 0x95c, 
       0x5, 0x100, 0x81, 0x2, 0x95c, 0x966, 0x3, 0x2, 0x2, 0x2, 0x95d, 0x95f, 
       0x5, 0xe2, 0x72, 0x2, 0x95e, 0x95d, 0x3, 0x2, 0x2, 0x2, 0x95e, 0x95f, 
       0x3, 0x2, 0x2, 0x2, 0x95f, 0x960, 0x3, 0x2, 0x2, 0x2, 0x960, 0x962, 
       0x5, 0xa6, 0x54, 0x2, 0x961, 0x963, 0x5, 0x11a, 0x8e, 0x2, 0x962, 
       0x961, 0x3, 0x2, 0x2, 0x2, 0x962, 0x963, 0x3, 0x2, 0x2, 0x2, 0x963, 
       0x966, 0x3, 0x2, 0x2, 0x2, 0x964, 0x966, 0x7, 0x5c, 0x2, 0x2, 0x965, 
       0x958, 0x3, 0x2, 0x2, 0x2, 0x965, 0x95e, 0x3, 0x2, 0x2, 0x2, 0x965, 
       0x964, 0x3, 0x2, 0x2, 0x2, 0x966, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x967, 
       0x968, 0x7, 0x30, 0x2, 0x2, 0x968, 0x969, 0x7, 0x58, 0x2, 0x2, 0x969, 
       0x96a, 0x5, 0x66, 0x34, 0x2, 0x96a, 0x96b, 0x7, 0x59, 0x2, 0x2, 0x96b, 
       0x971, 0x3, 0x2, 0x2, 0x2, 0x96c, 0x971, 0x7, 0x30, 0x2, 0x2, 0x96d, 
       0x96e, 0x7, 0x44, 0x2, 0x2, 0x96e, 0x96f, 0x7, 0x58, 0x2, 0x2, 0x96f, 
       0x971, 0x7, 0x59, 0x2, 0x2, 0x970, 0x967, 0x3, 0x2, 0x2, 0x2, 0x970, 
       0x96c, 0x3, 0x2, 0x2, 0x2, 0x970, 0x96d, 0x3, 0x2, 0x2, 0x2, 0x971, 
       0x19d, 0x3, 0x2, 0x2, 0x2, 0x972, 0x973, 0x8, 0xd0, 0x1, 0x2, 0x973, 
       0x974, 0x7, 0x8d, 0x2, 0x2, 0x974, 0x97a, 0x3, 0x2, 0x2, 0x2, 0x975, 
       0x976, 0xc, 0x3, 0x2, 0x2, 0x976, 0x977, 0x7, 0x81, 0x2, 0x2, 0x977, 
       0x979, 0x7, 0x8d, 0x2, 0x2, 0x978, 0x975, 0x3, 0x2, 0x2, 0x2, 0x979, 
       0x97c, 0x3, 0x2, 0x2, 0x2, 0x97a, 0x978, 0x3, 0x2, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x2, 0x2, 0x97a, 0x97b, 0x3, 0x2, 0x2, 0x2, 0x97b, 0x19f, 0x3, 0x2, 
       0x2, 0x2, 0x97c, 0x97a, 0x3, 0x2, 0x2, 0x2, 0x97d, 0x985, 0x5, 0x1a2, 
       0xd2, 0x2, 0x97e, 0x985, 0x7, 0x86, 0x2, 0x2, 0x97f, 0x985, 0x7, 
       0x87, 0x2, 0x2, 0x980, 0x985, 0x7, 0x88, 0x2, 0x2, 0x981, 0x985, 
       0x5, 0x1a4, 0xd3, 0x2, 0x982, 0x985, 0x5, 0x1a6, 0xd4, 0x2, 0x983, 
       0x985, 0x5, 0x1a8, 0xd5, 0x2, 0x984, 0x97d, 0x3, 0x2, 0x2, 0x2, 0x984, 
       0x97e, 0x3, 0x2, 0x2, 0x2, 0x984, 0x97f, 0x3, 0x2, 0x2, 0x2, 0x984, 
       0x980, 0x3, 0x2, 0x2, 0x2, 0x984, 0x981, 0x3, 0x2, 0x2, 0x2, 0x984, 
       0x982, 0x3, 0x2, 0x2, 0x2, 0x984, 0x983, 0x3, 0x2, 0x2, 0x2, 0x985, 
       0x1a1, 0x3, 0x2, 0x2, 0x2, 0x986, 0x987, 0x9, 0x10, 0x2, 0x2, 0x987, 
       0x1a3, 0x3, 0x2, 0x2, 0x2, 0x988, 0x989, 0x9, 0x11, 0x2, 0x2, 0x989, 
       0x1a5, 0x3, 0x2, 0x2, 0x2, 0x98a, 0x98b, 0x7, 0x31, 0x2, 0x2, 0x98b, 
       0x1a7, 0x3, 0x2, 0x2, 0x2, 0x98c, 0x98d, 0x9, 0x12, 0x2, 0x2, 0x98d, 
       0x1a9, 0x3, 0x2, 0x2, 0x2, 0x133, 0x1af, 0x1b5, 0x1ba, 0x1c7, 0x1cb, 
       0x1d6, 0x1da, 0x1e0, 0x1e5, 0x1ea, 0x1ec, 0x1f1, 0x1f4, 0x1f9, 0x1fb, 
       0x1ff, 0x205, 0x20d, 0x210, 0x213, 0x216, 0x21e, 0x225, 0x22b, 0x22f, 
       0x236, 0x23c, 0x23f, 0x258, 0x27a, 0x27f, 0x29b, 0x2a8, 0x2b2, 0x2b8, 
       0x2c2, 0x2c4, 0x2ca, 0x2dc, 0x2fa, 0x2ff, 0x303, 0x307, 0x30a, 0x30e, 
       0x314, 0x316, 0x31e, 0x322, 0x32b, 0x332, 0x336, 0x33b, 0x33f, 0x342, 
       0x347, 0x34d, 0x35a, 0x365, 0x37c, 0x385, 0x389, 0x391, 0x39d, 0x3a4, 
       0x3a8, 0x3ac, 0x3b0, 0x3b4, 0x3b9, 0x3bc, 0x3c0, 0x3c4, 0x3ca, 0x3cd, 
       0x3d3, 0x3db, 0x3e0, 0x3e3, 0x3e9, 0x3f4, 0x3f9, 0x3fd, 0x405, 0x409, 
       0x414, 0x41a, 0x42e, 0x432, 0x43f, 0x442, 0x448, 0x44c, 0x452, 0x455, 
       0x462, 0x468, 0x473, 0x481, 0x48b, 0x48e, 0x496, 0x49e, 0x4a8, 0x4ac, 
       0x4b4, 0x4c4, 0x4d2, 0x4d5, 0x4d9, 0x4dc, 0x4e4, 0x4ed, 0x4f0, 0x4f4, 
       0x4f9, 0x4fd, 0x502, 0x505, 0x518, 0x51c, 0x527, 0x52b, 0x52e, 0x538, 
       0x53e, 0x541, 0x546, 0x550, 0x554, 0x557, 0x55a, 0x55d, 0x563, 0x566, 
       0x56a, 0x573, 0x580, 0x588, 0x58c, 0x591, 0x594, 0x598, 0x5a0, 0x5a4, 
       0x5ba, 0x5be, 0x5c7, 0x5d2, 0x5d8, 0x5dc, 0x5e0, 0x5e6, 0x5eb, 0x5f1, 
       0x5fd, 0x603, 0x60c, 0x612, 0x619, 0x61f, 0x627, 0x62b, 0x633, 0x638, 
       0x63d, 0x644, 0x646, 0x64b, 0x64f, 0x659, 0x664, 0x669, 0x66e, 0x673, 
       0x677, 0x683, 0x688, 0x68c, 0x693, 0x697, 0x69d, 0x6a2, 0x6a6, 0x6aa, 
       0x6ac, 0x6b7, 0x6ba, 0x6bd, 0x6c0, 0x6c7, 0x6ca, 0x6ce, 0x6d2, 0x6d7, 
       0x6da, 0x6dc, 0x6e0, 0x6e9, 0x6ed, 0x6f1, 0x6f7, 0x6fc, 0x6fe, 0x704, 
       0x708, 0x70e, 0x715, 0x719, 0x71b, 0x71d, 0x724, 0x72e, 0x732, 0x734, 
       0x736, 0x73a, 0x73d, 0x743, 0x74d, 0x751, 0x757, 0x75e, 0x761, 0x764, 
       0x768, 0x770, 0x776, 0x779, 0x78a, 0x78e, 0x793, 0x799, 0x79d, 0x7a3, 
       0x7a9, 0x7ad, 0x7b2, 0x7b8, 0x7bc, 0x7bf, 0x7c3, 0x7c6, 0x7c8, 0x7cb, 
       0x7d5, 0x7da, 0x7dc, 0x7df, 0x7ec, 0x7f6, 0x7fb, 0x801, 0x804, 0x808, 
       0x811, 0x81f, 0x825, 0x829, 0x82d, 0x831, 0x835, 0x839, 0x83d, 0x841, 
       0x844, 0x84c, 0x855, 0x859, 0x861, 0x867, 0x86b, 0x871, 0x878, 0x8af, 
       0x8b6, 0x8c6, 0x8cb, 0x8cf, 0x8d2, 0x8d6, 0x8e1, 0x8e4, 0x8ec, 0x8f1, 
       0x8f8, 0x900, 0x907, 0x90b, 0x910, 0x916, 0x91a, 0x926, 0x92a, 0x92d, 
       0x938, 0x948, 0x94f, 0x958, 0x95e, 0x962, 0x965, 0x970, 0x97a, 0x984, 
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
