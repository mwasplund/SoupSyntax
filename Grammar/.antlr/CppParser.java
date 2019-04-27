// Generated from d:\Repos\SoupSyntax\Grammar\CppParser.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CppParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		BlockComment=1, LineComment=2, Whitespace=3, Preprocessor=4, Newline=5, 
		AlignAs=6, AlignOf=7, Asm=8, Auto=9, Bool=10, Break=11, Case=12, Catch=13, 
		Char=14, Char8=15, Char16=16, Char32=17, Class=18, Const=19, ConstExpr=20, 
		ConstCast=21, Continue=22, DeclType=23, Default=24, Delete=25, Do=26, 
		Double=27, DynamicCast=28, Else=29, Enum=30, Explicit=31, Export=32, Extern=33, 
		False=34, Float=35, For=36, Friend=37, GoTo=38, If=39, Inline=40, Int=41, 
		Long=42, Mutable=43, Namespace=44, New=45, NoExcept=46, Nullptr=47, Operator=48, 
		Private=49, Protected=50, Public=51, Register=52, ReinterpretCast=53, 
		Return=54, Short=55, Signed=56, SizeOf=57, Static=58, StaticAssert=59, 
		StaticCast=60, Struct=61, Switch=62, Template=63, This=64, ThreadLocal=65, 
		Throw=66, True=67, Try=68, TypeDef=69, TypeId=70, TypeName=71, Union=72, 
		Unsigned=73, Using=74, Virtual=75, Void=76, Volatile=77, WChar=78, While=79, 
		Override=80, Final=81, OpenBrace=82, CloseBrace=83, OpenBracket=84, CloseBracket=85, 
		OpenParenthesis=86, CloseParenthesis=87, Semicolon=88, Colon=89, Ellipsis=90, 
		QuestionMark=91, DoubleColon=92, Period=93, PeriodAsterisk=94, Plus=95, 
		Minus=96, Asterisk=97, ForwardSlash=98, Percent=99, Caret=100, Ampersand=101, 
		VerticalBar=102, Tilde=103, ExclamationMark=104, Equal=105, LessThan=106, 
		GreaterThan=107, PlusEqual=108, MinusEqual=109, AsteriskEqual=110, ForwardSlashEqual=111, 
		PercentEqual=112, CaretEqual=113, AmpersandEqual=114, VerticalBarEqual=115, 
		DoubleLessThan=116, DoubleLessThanEqual=117, DoubleGreaterThanEqual=118, 
		DoubleEqual=119, ExclamationMarkEqual=120, LessThanEqual=121, GreaterThanEqual=122, 
		DoubleAmpersand=123, DoubleVerticalBar=124, DoublePlus=125, DoubleMinus=126, 
		Comma=127, ArrowAsterisk=128, Arrow=129, Zero=130, IntegerLiteral=131, 
		FloatingPointLiteral=132, CharacterLiteral=133, StringLiteral=134, UserDefinedIntegerLiteral=135, 
		UserDefinedFloatingPointLiteral=136, UserDefinedCharacterLiteral=137, 
		UserDefinedStringLiteral=138, Identifier=139;
	public static final int
		RULE_doubleGreaterThan = 0, RULE_namespaceName = 1, RULE_namespaceAlias = 2, 
		RULE_className = 3, RULE_templateName = 4, RULE_translationUnit = 5, RULE_primaryExpression = 6, 
		RULE_identifierExpression = 7, RULE_unqualifiedIdentifier = 8, RULE_qualifiedIdentifier = 9, 
		RULE_nestedNameSpecifier = 10, RULE_nestedNameSpecifierSequence = 11, 
		RULE_lambdaExpression = 12, RULE_lambdaIntroducer = 13, RULE_lambdaDeclarator = 14, 
		RULE_lambdaCapture = 15, RULE_captureDefault = 16, RULE_captureList = 17, 
		RULE_capture = 18, RULE_simpleCapture = 19, RULE_initializerCapture = 20, 
		RULE_foldExpression = 21, RULE_foldOperator = 22, RULE_explicitTypeCoversionOperatorExpression = 23, 
		RULE_postfixOperator = 24, RULE_namedCastExpression = 25, RULE_memberAccessOperator = 26, 
		RULE_namedCastType = 27, RULE_typeIdentificationExpression = 28, RULE_postfixExpression = 29, 
		RULE_expressionList = 30, RULE_pseudoDestructorName = 31, RULE_unaryExpression = 32, 
		RULE_unaryOperator = 33, RULE_newExpression = 34, RULE_newPlacement = 35, 
		RULE_newTypeIdentifier = 36, RULE_newDeclarator = 37, RULE_noPointerNewDeclarator = 38, 
		RULE_newInitializer = 39, RULE_deleteExpression = 40, RULE_noExceptionExpression = 41, 
		RULE_castExpression = 42, RULE_binaryExpression = 43, RULE_binaryOperator = 44, 
		RULE_conditionalExpression = 45, RULE_throwExpression = 46, RULE_assignmentExpression = 47, 
		RULE_assignmentOperator = 48, RULE_expression = 49, RULE_constantExpression = 50, 
		RULE_statement = 51, RULE_initializerStatement = 52, RULE_condition = 53, 
		RULE_labeledStatement = 54, RULE_expressionStatement = 55, RULE_compoundStatement = 56, 
		RULE_statementSequence = 57, RULE_selectionStatement = 58, RULE_iterationStatement = 59, 
		RULE_forInitializerStatement = 60, RULE_forRangeDeclaration = 61, RULE_forRangeInitializer = 62, 
		RULE_jumpStatement = 63, RULE_declarationStatement = 64, RULE_declarationSequence = 65, 
		RULE_declaration = 66, RULE_blockDeclaration = 67, RULE_noDeclarationSpecifierFunctionDeclaration = 68, 
		RULE_aliasDeclaration = 69, RULE_simpleDeclaration = 70, RULE_staticAssertDeclaration = 71, 
		RULE_emptyDeclaration = 72, RULE_attributeDeclaration = 73, RULE_declarationModifier = 74, 
		RULE_declarationSpecifierSequence = 75, RULE_leadingDeclarationModifierSequence = 76, 
		RULE_trailingDeclarationModifierSequence = 77, RULE_declarationModifierSequence = 78, 
		RULE_storageClassSpecifier = 79, RULE_functionSpecifier = 80, RULE_typeSpecifier = 81, 
		RULE_typeSpecifierSequence = 82, RULE_definingTypeSpecifier = 83, RULE_definingTypeSpecifierSequence = 84, 
		RULE_simpleTypeSpecifier = 85, RULE_typeName = 86, RULE_declarationTypeSpecifier = 87, 
		RULE_elaboratedTypeSpecifier = 88, RULE_enumSpecifier = 89, RULE_enumHead = 90, 
		RULE_enumHeadName = 91, RULE_opaqueEnumSpecifier = 92, RULE_enumKey = 93, 
		RULE_enumBase = 94, RULE_enumeratorList = 95, RULE_enumeratorDefinition = 96, 
		RULE_enumerator = 97, RULE_namespaceDefinition = 98, RULE_namedNamespaceDefinition = 99, 
		RULE_unnamedNamespaceDefinition = 100, RULE_nestedNamespaceDefinition = 101, 
		RULE_enclosingNamespaceSpecifier = 102, RULE_namespaceBody = 103, RULE_namespaceAliasDefinition = 104, 
		RULE_qualifiedNamespaceSpecifier = 105, RULE_usingDeclaration = 106, RULE_usingDeclaratorList = 107, 
		RULE_usingDeclarator = 108, RULE_usingDirective = 109, RULE_asmDefinition = 110, 
		RULE_linkageSpecification = 111, RULE_attributeSpecifierSequence = 112, 
		RULE_attributeSpecifier = 113, RULE_alignmentSpecifier = 114, RULE_attributeUsingPrefix = 115, 
		RULE_attributeList = 116, RULE_attribute = 117, RULE_attributeToken = 118, 
		RULE_attributeScopedToken = 119, RULE_attributeNamespace = 120, RULE_attributeArgumentClause = 121, 
		RULE_balancedTokenSequence = 122, RULE_balancedToken = 123, RULE_nonBalancedToken = 124, 
		RULE_initializerDeclaratorList = 125, RULE_initializerDeclarator = 126, 
		RULE_declarator = 127, RULE_pointerDeclarator = 128, RULE_noPointerDeclarator = 129, 
		RULE_parametersAndQualifiers = 130, RULE_functionParameters = 131, RULE_functionQualifiers = 132, 
		RULE_trailingReturnType = 133, RULE_pointerOperator = 134, RULE_constVolatileQualifierSequence = 135, 
		RULE_constVolatileQualifier = 136, RULE_referenceQualifier = 137, RULE_typeIdentifier = 138, 
		RULE_definingTypeIdentifier = 139, RULE_abstractDeclarator = 140, RULE_pointerAbstractDeclarator = 141, 
		RULE_noPointerAbstractDeclarator = 142, RULE_abstractPackDeclarator = 143, 
		RULE_noPointerAbstractPackDeclarator = 144, RULE_parameterDeclarationClause = 145, 
		RULE_parameterDeclarationList = 146, RULE_parameterDeclaration = 147, 
		RULE_functionDefinition = 148, RULE_functionDeclarator = 149, RULE_functionBody = 150, 
		RULE_regularFunctionBody = 151, RULE_explicitlyDefaultedFunction = 152, 
		RULE_deletedFunction = 153, RULE_initializer = 154, RULE_braceOrEqualInitializer = 155, 
		RULE_initializerClause = 156, RULE_initializerList = 157, RULE_bracedInitializerList = 158, 
		RULE_expressionOrBracedInitializerList = 159, RULE_classSpecifier = 160, 
		RULE_classHead = 161, RULE_classHeadName = 162, RULE_classVirtualSpecifier = 163, 
		RULE_classKey = 164, RULE_memberSpecification = 165, RULE_memberDeclaration = 166, 
		RULE_memberDeclaratorList = 167, RULE_memberDeclarator = 168, RULE_virtualSpecifierSequence = 169, 
		RULE_virtualSpecifier = 170, RULE_pureSpecifier = 171, RULE_baseClause = 172, 
		RULE_baseSpecifierList = 173, RULE_baseSpecifier = 174, RULE_classOrDecltype = 175, 
		RULE_accessSpecifier = 176, RULE_conversionFunctionIdentifier = 177, RULE_conversionTypeIdentifier = 178, 
		RULE_conversionDeclarator = 179, RULE_constructorInitializer = 180, RULE_memberInitializerList = 181, 
		RULE_memberInitializer = 182, RULE_memberInitializerIdentifier = 183, 
		RULE_operatorFunctionIdentifier = 184, RULE_anyOperator = 185, RULE_literalOperatorIdentifier = 186, 
		RULE_templateDeclaration = 187, RULE_templateParameterList = 188, RULE_templateParameter = 189, 
		RULE_typeParameter = 190, RULE_typeParameterKey = 191, RULE_simpleTemplateIdentifier = 192, 
		RULE_templateIdentifier = 193, RULE_templateArgumentList = 194, RULE_templateArgument = 195, 
		RULE_typenameSpecifier = 196, RULE_explicitInstantiation = 197, RULE_explicitSpecialization = 198, 
		RULE_deductionGuide = 199, RULE_tryBlock = 200, RULE_functionTryBlock = 201, 
		RULE_handlerSequence = 202, RULE_handler = 203, RULE_exceptionDeclaration = 204, 
		RULE_noExceptionSpecifier = 205, RULE_identifierList = 206, RULE_literal = 207, 
		RULE_integerLiteral = 208, RULE_booleanLiteral = 209, RULE_pointerLiteral = 210, 
		RULE_userDefinedLiteral = 211;
	public static final String[] ruleNames = {
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

	private static final String[] _LITERAL_NAMES = {
		null, null, null, null, null, null, "'alignas'", "'alignof'", "'asm'", 
		"'auto'", "'bool'", "'break'", "'case'", "'catch'", "'char'", "'char8_t'", 
		"'char16_t'", "'char32_t'", "'class'", "'const'", "'constexpr'", "'const_cast'", 
		"'continue'", "'decltype'", "'default'", "'delete'", "'do'", "'double'", 
		"'dynamic_cast'", "'else'", "'enum'", "'explicit'", "'export'", "'extern'", 
		"'false'", "'float'", "'for'", "'friend'", "'goto'", "'if'", "'inline'", 
		"'int'", "'long'", "'mutable'", "'namespace'", "'new'", "'noexcept'", 
		"'nullptr'", "'operator'", "'private'", "'protected'", "'public'", "'register'", 
		"'reinterpret_cast'", "'return'", "'short'", "'signed'", "'sizeof'", "'static'", 
		"'static_assert'", "'static_cast'", "'struct'", "'switch'", "'template'", 
		"'this'", "'thread_local'", "'throw'", "'true'", "'try'", "'typedef'", 
		"'typeid'", "'typename'", "'union'", "'unsigned'", "'using'", "'virtual'", 
		"'void'", "'volatile'", "'wchar_t'", "'while'", "'override'", "'final'", 
		"'{'", "'}'", "'['", "']'", "'('", "')'", "';'", "':'", "'...'", "'?'", 
		"'::'", "'.'", "'.*'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'&'", 
		"'|'", "'~'", "'!'", "'='", "'<'", "'>'", "'+='", "'-='", "'*='", "'/='", 
		"'%='", "'^='", "'&='", "'|='", "'<<'", "'<<='", "'>>='", "'=='", "'!='", 
		"'<='", "'>='", "'&&'", "'||'", "'++'", "'--'", "','", "'->*'", "'->'", 
		"'0'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "BlockComment", "LineComment", "Whitespace", "Preprocessor", "Newline", 
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
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "CppParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public CppParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class DoubleGreaterThanContext extends ParserRuleContext {
		public List<TerminalNode> GreaterThan() { return getTokens(CppParser.GreaterThan); }
		public TerminalNode GreaterThan(int i) {
			return getToken(CppParser.GreaterThan, i);
		}
		public DoubleGreaterThanContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_doubleGreaterThan; }
	}

	public final DoubleGreaterThanContext doubleGreaterThan() throws RecognitionException {
		DoubleGreaterThanContext _localctx = new DoubleGreaterThanContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_doubleGreaterThan);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(424);
			match(GreaterThan);
			setState(425);
			match(GreaterThan);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamespaceNameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public NamespaceAliasContext namespaceAlias() {
			return getRuleContext(NamespaceAliasContext.class,0);
		}
		public NamespaceNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespaceName; }
	}

	public final NamespaceNameContext namespaceName() throws RecognitionException {
		NamespaceNameContext _localctx = new NamespaceNameContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_namespaceName);
		try {
			setState(429);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(427);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(428);
				namespaceAlias();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamespaceAliasContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public NamespaceAliasContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespaceAlias; }
	}

	public final NamespaceAliasContext namespaceAlias() throws RecognitionException {
		NamespaceAliasContext _localctx = new NamespaceAliasContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_namespaceAlias);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(431);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassNameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public SimpleTemplateIdentifierContext simpleTemplateIdentifier() {
			return getRuleContext(SimpleTemplateIdentifierContext.class,0);
		}
		public ClassNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_className; }
	}

	public final ClassNameContext className() throws RecognitionException {
		ClassNameContext _localctx = new ClassNameContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_className);
		try {
			setState(435);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(433);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(434);
				simpleTemplateIdentifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TemplateNameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TemplateNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateName; }
	}

	public final TemplateNameContext templateName() throws RecognitionException {
		TemplateNameContext _localctx = new TemplateNameContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_templateName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(437);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TranslationUnitContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(CppParser.EOF, 0); }
		public DeclarationSequenceContext declarationSequence() {
			return getRuleContext(DeclarationSequenceContext.class,0);
		}
		public TranslationUnitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_translationUnit; }
	}

	public final TranslationUnitContext translationUnit() throws RecognitionException {
		TranslationUnitContext _localctx = new TranslationUnitContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_translationUnit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(440);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (OpenParenthesis - 65)) | (1L << (Semicolon - 65)) | (1L << (Ellipsis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (Tilde - 65)) | (1L << (DoubleAmpersand - 65)))) != 0) || _la==Identifier) {
				{
				setState(439);
				declarationSequence(0);
				}
			}

			setState(442);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrimaryExpressionContext extends ParserRuleContext {
		public LiteralContext literal() {
			return getRuleContext(LiteralContext.class,0);
		}
		public TerminalNode This() { return getToken(CppParser.This, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public IdentifierExpressionContext identifierExpression() {
			return getRuleContext(IdentifierExpressionContext.class,0);
		}
		public LambdaExpressionContext lambdaExpression() {
			return getRuleContext(LambdaExpressionContext.class,0);
		}
		public FoldExpressionContext foldExpression() {
			return getRuleContext(FoldExpressionContext.class,0);
		}
		public PrimaryExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primaryExpression; }
	}

	public final PrimaryExpressionContext primaryExpression() throws RecognitionException {
		PrimaryExpressionContext _localctx = new PrimaryExpressionContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_primaryExpression);
		try {
			setState(453);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(444);
				literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(445);
				match(This);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(446);
				match(OpenParenthesis);
				setState(447);
				expression(0);
				setState(448);
				match(CloseParenthesis);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(450);
				identifierExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(451);
				lambdaExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(452);
				foldExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierExpressionContext extends ParserRuleContext {
		public UnqualifiedIdentifierContext unqualifiedIdentifier() {
			return getRuleContext(UnqualifiedIdentifierContext.class,0);
		}
		public QualifiedIdentifierContext qualifiedIdentifier() {
			return getRuleContext(QualifiedIdentifierContext.class,0);
		}
		public IdentifierExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierExpression; }
	}

	public final IdentifierExpressionContext identifierExpression() throws RecognitionException {
		IdentifierExpressionContext _localctx = new IdentifierExpressionContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_identifierExpression);
		try {
			setState(457);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(455);
				unqualifiedIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(456);
				qualifiedIdentifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnqualifiedIdentifierContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public OperatorFunctionIdentifierContext operatorFunctionIdentifier() {
			return getRuleContext(OperatorFunctionIdentifierContext.class,0);
		}
		public ConversionFunctionIdentifierContext conversionFunctionIdentifier() {
			return getRuleContext(ConversionFunctionIdentifierContext.class,0);
		}
		public LiteralOperatorIdentifierContext literalOperatorIdentifier() {
			return getRuleContext(LiteralOperatorIdentifierContext.class,0);
		}
		public TerminalNode Tilde() { return getToken(CppParser.Tilde, 0); }
		public ClassNameContext className() {
			return getRuleContext(ClassNameContext.class,0);
		}
		public DeclarationTypeSpecifierContext declarationTypeSpecifier() {
			return getRuleContext(DeclarationTypeSpecifierContext.class,0);
		}
		public TemplateIdentifierContext templateIdentifier() {
			return getRuleContext(TemplateIdentifierContext.class,0);
		}
		public UnqualifiedIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unqualifiedIdentifier; }
	}

	public final UnqualifiedIdentifierContext unqualifiedIdentifier() throws RecognitionException {
		UnqualifiedIdentifierContext _localctx = new UnqualifiedIdentifierContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_unqualifiedIdentifier);
		try {
			setState(468);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(459);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(460);
				operatorFunctionIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(461);
				conversionFunctionIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(462);
				literalOperatorIdentifier();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(463);
				match(Tilde);
				setState(464);
				className();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(465);
				match(Tilde);
				setState(466);
				declarationTypeSpecifier();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(467);
				templateIdentifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QualifiedIdentifierContext extends ParserRuleContext {
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public UnqualifiedIdentifierContext unqualifiedIdentifier() {
			return getRuleContext(UnqualifiedIdentifierContext.class,0);
		}
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public QualifiedIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qualifiedIdentifier; }
	}

	public final QualifiedIdentifierContext qualifiedIdentifier() throws RecognitionException {
		QualifiedIdentifierContext _localctx = new QualifiedIdentifierContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_qualifiedIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(470);
			nestedNameSpecifier();
			setState(472);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Template) {
				{
				setState(471);
				match(Template);
				}
			}

			setState(474);
			unqualifiedIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NestedNameSpecifierContext extends ParserRuleContext {
		public TerminalNode DoubleColon() { return getToken(CppParser.DoubleColon, 0); }
		public NestedNameSpecifierSequenceContext nestedNameSpecifierSequence() {
			return getRuleContext(NestedNameSpecifierSequenceContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public DeclarationTypeSpecifierContext declarationTypeSpecifier() {
			return getRuleContext(DeclarationTypeSpecifierContext.class,0);
		}
		public NestedNameSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nestedNameSpecifier; }
	}

	public final NestedNameSpecifierContext nestedNameSpecifier() throws RecognitionException {
		NestedNameSpecifierContext _localctx = new NestedNameSpecifierContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_nestedNameSpecifier);
		try {
			setState(490);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DoubleColon:
				enterOuterAlt(_localctx, 1);
				{
				setState(476);
				match(DoubleColon);
				setState(478);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
				case 1:
					{
					setState(477);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(480);
				match(Identifier);
				setState(481);
				match(DoubleColon);
				setState(483);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
				case 1:
					{
					setState(482);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case DeclType:
				enterOuterAlt(_localctx, 3);
				{
				setState(485);
				declarationTypeSpecifier();
				setState(486);
				match(DoubleColon);
				setState(488);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
				case 1:
					{
					setState(487);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NestedNameSpecifierSequenceContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode DoubleColon() { return getToken(CppParser.DoubleColon, 0); }
		public NestedNameSpecifierSequenceContext nestedNameSpecifierSequence() {
			return getRuleContext(NestedNameSpecifierSequenceContext.class,0);
		}
		public SimpleTemplateIdentifierContext simpleTemplateIdentifier() {
			return getRuleContext(SimpleTemplateIdentifierContext.class,0);
		}
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public NestedNameSpecifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nestedNameSpecifierSequence; }
	}

	public final NestedNameSpecifierSequenceContext nestedNameSpecifierSequence() throws RecognitionException {
		NestedNameSpecifierSequenceContext _localctx = new NestedNameSpecifierSequenceContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_nestedNameSpecifierSequence);
		int _la;
		try {
			setState(505);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(492);
				match(Identifier);
				setState(493);
				match(DoubleColon);
				setState(495);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
				case 1:
					{
					setState(494);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(498);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(497);
					match(Template);
					}
				}

				setState(500);
				simpleTemplateIdentifier();
				setState(501);
				match(DoubleColon);
				setState(503);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
				case 1:
					{
					setState(502);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LambdaExpressionContext extends ParserRuleContext {
		public LambdaIntroducerContext lambdaIntroducer() {
			return getRuleContext(LambdaIntroducerContext.class,0);
		}
		public CompoundStatementContext compoundStatement() {
			return getRuleContext(CompoundStatementContext.class,0);
		}
		public LambdaDeclaratorContext lambdaDeclarator() {
			return getRuleContext(LambdaDeclaratorContext.class,0);
		}
		public LambdaExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lambdaExpression; }
	}

	public final LambdaExpressionContext lambdaExpression() throws RecognitionException {
		LambdaExpressionContext _localctx = new LambdaExpressionContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_lambdaExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(507);
			lambdaIntroducer();
			setState(509);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OpenParenthesis) {
				{
				setState(508);
				lambdaDeclarator();
				}
			}

			setState(511);
			compoundStatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LambdaIntroducerContext extends ParserRuleContext {
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public LambdaCaptureContext lambdaCapture() {
			return getRuleContext(LambdaCaptureContext.class,0);
		}
		public LambdaIntroducerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lambdaIntroducer; }
	}

	public final LambdaIntroducerContext lambdaIntroducer() throws RecognitionException {
		LambdaIntroducerContext _localctx = new LambdaIntroducerContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_lambdaIntroducer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(513);
			match(OpenBracket);
			setState(515);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (Equal - 64)))) != 0) || _la==Identifier) {
				{
				setState(514);
				lambdaCapture();
				}
			}

			setState(517);
			match(CloseBracket);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LambdaDeclaratorContext extends ParserRuleContext {
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ParameterDeclarationClauseContext parameterDeclarationClause() {
			return getRuleContext(ParameterDeclarationClauseContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public DeclarationSpecifierSequenceContext declarationSpecifierSequence() {
			return getRuleContext(DeclarationSpecifierSequenceContext.class,0);
		}
		public NoExceptionSpecifierContext noExceptionSpecifier() {
			return getRuleContext(NoExceptionSpecifierContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TrailingReturnTypeContext trailingReturnType() {
			return getRuleContext(TrailingReturnTypeContext.class,0);
		}
		public LambdaDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lambdaDeclarator; }
	}

	public final LambdaDeclaratorContext lambdaDeclarator() throws RecognitionException {
		LambdaDeclaratorContext _localctx = new LambdaDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_lambdaDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(519);
			match(OpenParenthesis);
			setState(520);
			parameterDeclarationClause();
			setState(521);
			match(CloseParenthesis);
			setState(523);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << Struct))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (DoubleColon - 65)))) != 0) || _la==Identifier) {
				{
				setState(522);
				declarationSpecifierSequence();
				}
			}

			setState(526);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NoExcept || _la==Throw) {
				{
				setState(525);
				noExceptionSpecifier();
				}
			}

			setState(529);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(528);
				attributeSpecifierSequence(0);
				}
			}

			setState(532);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(531);
				trailingReturnType();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LambdaCaptureContext extends ParserRuleContext {
		public CaptureDefaultContext captureDefault() {
			return getRuleContext(CaptureDefaultContext.class,0);
		}
		public CaptureListContext captureList() {
			return getRuleContext(CaptureListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public LambdaCaptureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lambdaCapture; }
	}

	public final LambdaCaptureContext lambdaCapture() throws RecognitionException {
		LambdaCaptureContext _localctx = new LambdaCaptureContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_lambdaCapture);
		try {
			setState(540);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(534);
				captureDefault();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(535);
				captureList(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(536);
				captureDefault();
				setState(537);
				match(Comma);
				setState(538);
				captureList(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CaptureDefaultContext extends ParserRuleContext {
		public TerminalNode Ampersand() { return getToken(CppParser.Ampersand, 0); }
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public CaptureDefaultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_captureDefault; }
	}

	public final CaptureDefaultContext captureDefault() throws RecognitionException {
		CaptureDefaultContext _localctx = new CaptureDefaultContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_captureDefault);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(542);
			_la = _input.LA(1);
			if ( !(_la==Ampersand || _la==Equal) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CaptureListContext extends ParserRuleContext {
		public CaptureContext capture() {
			return getRuleContext(CaptureContext.class,0);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public CaptureListContext captureList() {
			return getRuleContext(CaptureListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public CaptureListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_captureList; }
	}

	public final CaptureListContext captureList() throws RecognitionException {
		return captureList(0);
	}

	private CaptureListContext captureList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		CaptureListContext _localctx = new CaptureListContext(_ctx, _parentState);
		CaptureListContext _prevctx = _localctx;
		int _startState = 34;
		enterRecursionRule(_localctx, 34, RULE_captureList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(545);
			capture();
			setState(547);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				{
				setState(546);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(557);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new CaptureListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_captureList);
					setState(549);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(550);
					match(Comma);
					setState(551);
					capture();
					setState(553);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
					case 1:
						{
						setState(552);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(559);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class CaptureContext extends ParserRuleContext {
		public SimpleCaptureContext simpleCapture() {
			return getRuleContext(SimpleCaptureContext.class,0);
		}
		public InitializerCaptureContext initializerCapture() {
			return getRuleContext(InitializerCaptureContext.class,0);
		}
		public CaptureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_capture; }
	}

	public final CaptureContext capture() throws RecognitionException {
		CaptureContext _localctx = new CaptureContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_capture);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(560);
			simpleCapture();
			setState(561);
			initializerCapture();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpleCaptureContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode Ampersand() { return getToken(CppParser.Ampersand, 0); }
		public TerminalNode This() { return getToken(CppParser.This, 0); }
		public TerminalNode Asterisk() { return getToken(CppParser.Asterisk, 0); }
		public SimpleCaptureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleCapture; }
	}

	public final SimpleCaptureContext simpleCapture() throws RecognitionException {
		SimpleCaptureContext _localctx = new SimpleCaptureContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_simpleCapture);
		int _la;
		try {
			setState(570);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ampersand:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(564);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(563);
					match(Ampersand);
					}
				}

				setState(566);
				match(Identifier);
				}
				break;
			case This:
				enterOuterAlt(_localctx, 2);
				{
				setState(567);
				match(This);
				}
				break;
			case Asterisk:
				enterOuterAlt(_localctx, 3);
				{
				setState(568);
				match(Asterisk);
				setState(569);
				match(This);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerCaptureContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public TerminalNode Ampersand() { return getToken(CppParser.Ampersand, 0); }
		public InitializerCaptureContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializerCapture; }
	}

	public final InitializerCaptureContext initializerCapture() throws RecognitionException {
		InitializerCaptureContext _localctx = new InitializerCaptureContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_initializerCapture);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(573);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Ampersand) {
				{
				setState(572);
				match(Ampersand);
				}
			}

			setState(575);
			match(Identifier);
			setState(576);
			initializer();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FoldExpressionContext extends ParserRuleContext {
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public List<CastExpressionContext> castExpression() {
			return getRuleContexts(CastExpressionContext.class);
		}
		public CastExpressionContext castExpression(int i) {
			return getRuleContext(CastExpressionContext.class,i);
		}
		public List<FoldOperatorContext> foldOperator() {
			return getRuleContexts(FoldOperatorContext.class);
		}
		public FoldOperatorContext foldOperator(int i) {
			return getRuleContext(FoldOperatorContext.class,i);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public FoldExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_foldExpression; }
	}

	public final FoldExpressionContext foldExpression() throws RecognitionException {
		FoldExpressionContext _localctx = new FoldExpressionContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_foldExpression);
		try {
			setState(598);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(578);
				match(OpenParenthesis);
				setState(579);
				castExpression();
				setState(580);
				foldOperator();
				setState(581);
				match(Ellipsis);
				setState(582);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(584);
				match(OpenParenthesis);
				setState(585);
				match(Ellipsis);
				setState(586);
				foldOperator();
				setState(587);
				castExpression();
				setState(588);
				match(CloseParenthesis);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(590);
				match(OpenParenthesis);
				setState(591);
				castExpression();
				setState(592);
				foldOperator();
				setState(593);
				match(Ellipsis);
				setState(594);
				foldOperator();
				setState(595);
				castExpression();
				setState(596);
				match(CloseParenthesis);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FoldOperatorContext extends ParserRuleContext {
		public TerminalNode Plus() { return getToken(CppParser.Plus, 0); }
		public TerminalNode Minus() { return getToken(CppParser.Minus, 0); }
		public TerminalNode Asterisk() { return getToken(CppParser.Asterisk, 0); }
		public TerminalNode ForwardSlash() { return getToken(CppParser.ForwardSlash, 0); }
		public TerminalNode Percent() { return getToken(CppParser.Percent, 0); }
		public TerminalNode Caret() { return getToken(CppParser.Caret, 0); }
		public TerminalNode Ampersand() { return getToken(CppParser.Ampersand, 0); }
		public TerminalNode VerticalBar() { return getToken(CppParser.VerticalBar, 0); }
		public TerminalNode DoubleLessThan() { return getToken(CppParser.DoubleLessThan, 0); }
		public DoubleGreaterThanContext doubleGreaterThan() {
			return getRuleContext(DoubleGreaterThanContext.class,0);
		}
		public TerminalNode PlusEqual() { return getToken(CppParser.PlusEqual, 0); }
		public TerminalNode MinusEqual() { return getToken(CppParser.MinusEqual, 0); }
		public TerminalNode AsteriskEqual() { return getToken(CppParser.AsteriskEqual, 0); }
		public TerminalNode ForwardSlashEqual() { return getToken(CppParser.ForwardSlashEqual, 0); }
		public TerminalNode PercentEqual() { return getToken(CppParser.PercentEqual, 0); }
		public TerminalNode CaretEqual() { return getToken(CppParser.CaretEqual, 0); }
		public TerminalNode AmpersandEqual() { return getToken(CppParser.AmpersandEqual, 0); }
		public TerminalNode VerticalBarEqual() { return getToken(CppParser.VerticalBarEqual, 0); }
		public TerminalNode DoubleLessThanEqual() { return getToken(CppParser.DoubleLessThanEqual, 0); }
		public TerminalNode DoubleGreaterThanEqual() { return getToken(CppParser.DoubleGreaterThanEqual, 0); }
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public TerminalNode DoubleEqual() { return getToken(CppParser.DoubleEqual, 0); }
		public TerminalNode ExclamationMarkEqual() { return getToken(CppParser.ExclamationMarkEqual, 0); }
		public TerminalNode LessThan() { return getToken(CppParser.LessThan, 0); }
		public TerminalNode GreaterThan() { return getToken(CppParser.GreaterThan, 0); }
		public TerminalNode LessThanEqual() { return getToken(CppParser.LessThanEqual, 0); }
		public TerminalNode GreaterThanEqual() { return getToken(CppParser.GreaterThanEqual, 0); }
		public TerminalNode DoubleAmpersand() { return getToken(CppParser.DoubleAmpersand, 0); }
		public TerminalNode DoubleVerticalBar() { return getToken(CppParser.DoubleVerticalBar, 0); }
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public TerminalNode PeriodAsterisk() { return getToken(CppParser.PeriodAsterisk, 0); }
		public TerminalNode ArrowAsterisk() { return getToken(CppParser.ArrowAsterisk, 0); }
		public FoldOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_foldOperator; }
	}

	public final FoldOperatorContext foldOperator() throws RecognitionException {
		FoldOperatorContext _localctx = new FoldOperatorContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_foldOperator);
		try {
			setState(632);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(600);
				match(Plus);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(601);
				match(Minus);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(602);
				match(Asterisk);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(603);
				match(ForwardSlash);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(604);
				match(Percent);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(605);
				match(Caret);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(606);
				match(Ampersand);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(607);
				match(VerticalBar);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(608);
				match(DoubleLessThan);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(609);
				doubleGreaterThan();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(610);
				match(PlusEqual);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(611);
				match(MinusEqual);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(612);
				match(AsteriskEqual);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(613);
				match(ForwardSlashEqual);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(614);
				match(PercentEqual);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(615);
				match(CaretEqual);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(616);
				match(AmpersandEqual);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(617);
				match(VerticalBarEqual);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(618);
				match(DoubleLessThanEqual);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(619);
				match(DoubleGreaterThanEqual);
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(620);
				match(Equal);
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(621);
				match(DoubleEqual);
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(622);
				match(ExclamationMarkEqual);
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(623);
				match(LessThan);
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(624);
				match(GreaterThan);
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(625);
				match(LessThanEqual);
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(626);
				match(GreaterThanEqual);
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(627);
				match(DoubleAmpersand);
				}
				break;
			case 29:
				enterOuterAlt(_localctx, 29);
				{
				setState(628);
				match(DoubleVerticalBar);
				}
				break;
			case 30:
				enterOuterAlt(_localctx, 30);
				{
				setState(629);
				match(Comma);
				}
				break;
			case 31:
				enterOuterAlt(_localctx, 31);
				{
				setState(630);
				match(PeriodAsterisk);
				}
				break;
			case 32:
				enterOuterAlt(_localctx, 32);
				{
				setState(631);
				match(ArrowAsterisk);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExplicitTypeCoversionOperatorExpressionContext extends ParserRuleContext {
		public TypenameSpecifierContext typenameSpecifier() {
			return getRuleContext(TypenameSpecifierContext.class,0);
		}
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public ExplicitTypeCoversionOperatorExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_explicitTypeCoversionOperatorExpression; }
	}

	public final ExplicitTypeCoversionOperatorExpressionContext explicitTypeCoversionOperatorExpression() throws RecognitionException {
		ExplicitTypeCoversionOperatorExpressionContext _localctx = new ExplicitTypeCoversionOperatorExpressionContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_explicitTypeCoversionOperatorExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(634);
			typenameSpecifier();
			setState(635);
			match(OpenParenthesis);
			setState(637);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
				{
				setState(636);
				expressionList();
				}
			}

			setState(639);
			match(CloseParenthesis);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PostfixOperatorContext extends ParserRuleContext {
		public TerminalNode DoublePlus() { return getToken(CppParser.DoublePlus, 0); }
		public TerminalNode DoubleMinus() { return getToken(CppParser.DoubleMinus, 0); }
		public PostfixOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfixOperator; }
	}

	public final PostfixOperatorContext postfixOperator() throws RecognitionException {
		PostfixOperatorContext _localctx = new PostfixOperatorContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_postfixOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(641);
			_la = _input.LA(1);
			if ( !(_la==DoublePlus || _la==DoubleMinus) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamedCastExpressionContext extends ParserRuleContext {
		public NamedCastTypeContext namedCastType() {
			return getRuleContext(NamedCastTypeContext.class,0);
		}
		public TerminalNode LessThan() { return getToken(CppParser.LessThan, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TerminalNode GreaterThan() { return getToken(CppParser.GreaterThan, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public NamedCastExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedCastExpression; }
	}

	public final NamedCastExpressionContext namedCastExpression() throws RecognitionException {
		NamedCastExpressionContext _localctx = new NamedCastExpressionContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_namedCastExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(643);
			namedCastType();
			setState(644);
			match(LessThan);
			setState(645);
			typeIdentifier();
			setState(646);
			match(GreaterThan);
			setState(647);
			match(OpenParenthesis);
			setState(648);
			expression(0);
			setState(649);
			match(CloseParenthesis);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MemberAccessOperatorContext extends ParserRuleContext {
		public TerminalNode Period() { return getToken(CppParser.Period, 0); }
		public TerminalNode Arrow() { return getToken(CppParser.Arrow, 0); }
		public MemberAccessOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberAccessOperator; }
	}

	public final MemberAccessOperatorContext memberAccessOperator() throws RecognitionException {
		MemberAccessOperatorContext _localctx = new MemberAccessOperatorContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_memberAccessOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(651);
			_la = _input.LA(1);
			if ( !(_la==Period || _la==Arrow) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamedCastTypeContext extends ParserRuleContext {
		public TerminalNode DynamicCast() { return getToken(CppParser.DynamicCast, 0); }
		public TerminalNode StaticCast() { return getToken(CppParser.StaticCast, 0); }
		public TerminalNode ReinterpretCast() { return getToken(CppParser.ReinterpretCast, 0); }
		public TerminalNode ConstCast() { return getToken(CppParser.ConstCast, 0); }
		public NamedCastTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedCastType; }
	}

	public final NamedCastTypeContext namedCastType() throws RecognitionException {
		NamedCastTypeContext _localctx = new NamedCastTypeContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_namedCastType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(653);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ConstCast) | (1L << DynamicCast) | (1L << ReinterpretCast) | (1L << StaticCast))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeIdentificationExpressionContext extends ParserRuleContext {
		public TerminalNode TypeId() { return getToken(CppParser.TypeId, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TypeIdentificationExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeIdentificationExpression; }
	}

	public final TypeIdentificationExpressionContext typeIdentificationExpression() throws RecognitionException {
		TypeIdentificationExpressionContext _localctx = new TypeIdentificationExpressionContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_typeIdentificationExpression);
		try {
			setState(665);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(655);
				match(TypeId);
				setState(656);
				match(OpenParenthesis);
				setState(657);
				expression(0);
				setState(658);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(660);
				match(TypeId);
				setState(661);
				match(OpenParenthesis);
				setState(662);
				typeIdentifier();
				setState(663);
				match(CloseParenthesis);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PostfixExpressionContext extends ParserRuleContext {
		public PrimaryExpressionContext primaryExpression() {
			return getRuleContext(PrimaryExpressionContext.class,0);
		}
		public ExplicitTypeCoversionOperatorExpressionContext explicitTypeCoversionOperatorExpression() {
			return getRuleContext(ExplicitTypeCoversionOperatorExpressionContext.class,0);
		}
		public SimpleTypeSpecifierContext simpleTypeSpecifier() {
			return getRuleContext(SimpleTypeSpecifierContext.class,0);
		}
		public BracedInitializerListContext bracedInitializerList() {
			return getRuleContext(BracedInitializerListContext.class,0);
		}
		public TypenameSpecifierContext typenameSpecifier() {
			return getRuleContext(TypenameSpecifierContext.class,0);
		}
		public NamedCastExpressionContext namedCastExpression() {
			return getRuleContext(NamedCastExpressionContext.class,0);
		}
		public TypeIdentificationExpressionContext typeIdentificationExpression() {
			return getRuleContext(TypeIdentificationExpressionContext.class,0);
		}
		public PostfixExpressionContext postfixExpression() {
			return getRuleContext(PostfixExpressionContext.class,0);
		}
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public ExpressionOrBracedInitializerListContext expressionOrBracedInitializerList() {
			return getRuleContext(ExpressionOrBracedInitializerListContext.class,0);
		}
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public MemberAccessOperatorContext memberAccessOperator() {
			return getRuleContext(MemberAccessOperatorContext.class,0);
		}
		public IdentifierExpressionContext identifierExpression() {
			return getRuleContext(IdentifierExpressionContext.class,0);
		}
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public PseudoDestructorNameContext pseudoDestructorName() {
			return getRuleContext(PseudoDestructorNameContext.class,0);
		}
		public PostfixOperatorContext postfixOperator() {
			return getRuleContext(PostfixOperatorContext.class,0);
		}
		public PostfixExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_postfixExpression; }
	}

	public final PostfixExpressionContext postfixExpression() throws RecognitionException {
		return postfixExpression(0);
	}

	private PostfixExpressionContext postfixExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		PostfixExpressionContext _localctx = new PostfixExpressionContext(_ctx, _parentState);
		PostfixExpressionContext _prevctx = _localctx;
		int _startState = 58;
		enterRecursionRule(_localctx, 58, RULE_postfixExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(678);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				{
				setState(668);
				primaryExpression();
				}
				break;
			case 2:
				{
				setState(669);
				explicitTypeCoversionOperatorExpression();
				}
				break;
			case 3:
				{
				setState(670);
				simpleTypeSpecifier();
				setState(671);
				bracedInitializerList();
				}
				break;
			case 4:
				{
				setState(673);
				typenameSpecifier();
				setState(674);
				bracedInitializerList();
				}
				break;
			case 5:
				{
				setState(676);
				namedCastExpression();
				}
				break;
			case 6:
				{
				setState(677);
				typeIdentificationExpression();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(706);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(704);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
					case 1:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(680);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(681);
						match(OpenBracket);
						setState(682);
						expressionOrBracedInitializerList();
						setState(683);
						match(CloseBracket);
						}
						break;
					case 2:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(685);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(686);
						match(OpenParenthesis);
						setState(688);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
							{
							setState(687);
							expressionList();
							}
						}

						setState(690);
						match(CloseParenthesis);
						}
						break;
					case 3:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(691);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(692);
						memberAccessOperator();
						setState(694);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(693);
							match(Template);
							}
						}

						setState(696);
						identifierExpression();
						}
						break;
					case 4:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(698);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(699);
						memberAccessOperator();
						setState(700);
						pseudoDestructorName();
						}
						break;
					case 5:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(702);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(703);
						postfixOperator();
						}
						break;
					}
					} 
				}
				setState(708);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ExpressionListContext extends ParserRuleContext {
		public InitializerListContext initializerList() {
			return getRuleContext(InitializerListContext.class,0);
		}
		public ExpressionListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionList; }
	}

	public final ExpressionListContext expressionList() throws RecognitionException {
		ExpressionListContext _localctx = new ExpressionListContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_expressionList);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(709);
			initializerList(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PseudoDestructorNameContext extends ParserRuleContext {
		public List<TypeNameContext> typeName() {
			return getRuleContexts(TypeNameContext.class);
		}
		public TypeNameContext typeName(int i) {
			return getRuleContext(TypeNameContext.class,i);
		}
		public TerminalNode DoubleColon() { return getToken(CppParser.DoubleColon, 0); }
		public TerminalNode Tilde() { return getToken(CppParser.Tilde, 0); }
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public SimpleTemplateIdentifierContext simpleTemplateIdentifier() {
			return getRuleContext(SimpleTemplateIdentifierContext.class,0);
		}
		public DeclarationTypeSpecifierContext declarationTypeSpecifier() {
			return getRuleContext(DeclarationTypeSpecifierContext.class,0);
		}
		public PseudoDestructorNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pseudoDestructorName; }
	}

	public final PseudoDestructorNameContext pseudoDestructorName() throws RecognitionException {
		PseudoDestructorNameContext _localctx = new PseudoDestructorNameContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_pseudoDestructorName);
		try {
			setState(730);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(712);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
				case 1:
					{
					setState(711);
					nestedNameSpecifier();
					}
					break;
				}
				setState(714);
				typeName();
				setState(715);
				match(DoubleColon);
				setState(716);
				match(Tilde);
				setState(717);
				typeName();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(719);
				nestedNameSpecifier();
				setState(720);
				match(Template);
				setState(721);
				simpleTemplateIdentifier();
				setState(722);
				match(DoubleColon);
				setState(723);
				match(Tilde);
				setState(724);
				typeName();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(726);
				match(Tilde);
				setState(727);
				typeName();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(728);
				match(Tilde);
				setState(729);
				declarationTypeSpecifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnaryExpressionContext extends ParserRuleContext {
		public PostfixExpressionContext postfixExpression() {
			return getRuleContext(PostfixExpressionContext.class,0);
		}
		public TerminalNode DoublePlus() { return getToken(CppParser.DoublePlus, 0); }
		public CastExpressionContext castExpression() {
			return getRuleContext(CastExpressionContext.class,0);
		}
		public TerminalNode DoubleMinus() { return getToken(CppParser.DoubleMinus, 0); }
		public UnaryOperatorContext unaryOperator() {
			return getRuleContext(UnaryOperatorContext.class,0);
		}
		public TerminalNode SizeOf() { return getToken(CppParser.SizeOf, 0); }
		public UnaryExpressionContext unaryExpression() {
			return getRuleContext(UnaryExpressionContext.class,0);
		}
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode AlignOf() { return getToken(CppParser.AlignOf, 0); }
		public NoExceptionExpressionContext noExceptionExpression() {
			return getRuleContext(NoExceptionExpressionContext.class,0);
		}
		public NewExpressionContext newExpression() {
			return getRuleContext(NewExpressionContext.class,0);
		}
		public DeleteExpressionContext deleteExpression() {
			return getRuleContext(DeleteExpressionContext.class,0);
		}
		public UnaryExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unaryExpression; }
	}

	public final UnaryExpressionContext unaryExpression() throws RecognitionException {
		UnaryExpressionContext _localctx = new UnaryExpressionContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_unaryExpression);
		try {
			setState(760);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,39,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(732);
				postfixExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(733);
				match(DoublePlus);
				setState(734);
				castExpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(735);
				match(DoubleMinus);
				setState(736);
				castExpression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(737);
				unaryOperator();
				setState(738);
				castExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(740);
				match(SizeOf);
				setState(741);
				unaryExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(742);
				match(SizeOf);
				setState(743);
				match(OpenParenthesis);
				setState(744);
				typeIdentifier();
				setState(745);
				match(CloseParenthesis);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(747);
				match(SizeOf);
				setState(748);
				match(Ellipsis);
				setState(749);
				match(OpenParenthesis);
				setState(750);
				match(Identifier);
				setState(751);
				match(CloseParenthesis);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(752);
				match(AlignOf);
				setState(753);
				match(OpenParenthesis);
				setState(754);
				typeIdentifier();
				setState(755);
				match(CloseParenthesis);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(757);
				noExceptionExpression();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(758);
				newExpression();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(759);
				deleteExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnaryOperatorContext extends ParserRuleContext {
		public TerminalNode VerticalBar() { return getToken(CppParser.VerticalBar, 0); }
		public TerminalNode Asterisk() { return getToken(CppParser.Asterisk, 0); }
		public TerminalNode Ampersand() { return getToken(CppParser.Ampersand, 0); }
		public TerminalNode Plus() { return getToken(CppParser.Plus, 0); }
		public TerminalNode Minus() { return getToken(CppParser.Minus, 0); }
		public TerminalNode ExclamationMark() { return getToken(CppParser.ExclamationMark, 0); }
		public TerminalNode Tilde() { return getToken(CppParser.Tilde, 0); }
		public UnaryOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unaryOperator; }
	}

	public final UnaryOperatorContext unaryOperator() throws RecognitionException {
		UnaryOperatorContext _localctx = new UnaryOperatorContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_unaryOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(762);
			_la = _input.LA(1);
			if ( !(((((_la - 95)) & ~0x3f) == 0 && ((1L << (_la - 95)) & ((1L << (Plus - 95)) | (1L << (Minus - 95)) | (1L << (Asterisk - 95)) | (1L << (Ampersand - 95)) | (1L << (VerticalBar - 95)) | (1L << (Tilde - 95)) | (1L << (ExclamationMark - 95)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NewExpressionContext extends ParserRuleContext {
		public TerminalNode New() { return getToken(CppParser.New, 0); }
		public NewTypeIdentifierContext newTypeIdentifier() {
			return getRuleContext(NewTypeIdentifierContext.class,0);
		}
		public TerminalNode DoubleColon() { return getToken(CppParser.DoubleColon, 0); }
		public NewPlacementContext newPlacement() {
			return getRuleContext(NewPlacementContext.class,0);
		}
		public NewInitializerContext newInitializer() {
			return getRuleContext(NewInitializerContext.class,0);
		}
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public NewExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newExpression; }
	}

	public final NewExpressionContext newExpression() throws RecognitionException {
		NewExpressionContext _localctx = new NewExpressionContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_newExpression);
		int _la;
		try {
			setState(788);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(765);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(764);
					match(DoubleColon);
					}
				}

				setState(767);
				match(New);
				setState(769);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OpenParenthesis) {
					{
					setState(768);
					newPlacement();
					}
				}

				setState(771);
				newTypeIdentifier();
				setState(773);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
				case 1:
					{
					setState(772);
					newInitializer();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(776);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(775);
					match(DoubleColon);
					}
				}

				setState(778);
				match(New);
				setState(780);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
				case 1:
					{
					setState(779);
					newPlacement();
					}
					break;
				}
				setState(782);
				match(OpenParenthesis);
				setState(783);
				typeIdentifier();
				setState(784);
				match(CloseParenthesis);
				setState(786);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
				case 1:
					{
					setState(785);
					newInitializer();
					}
					break;
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NewPlacementContext extends ParserRuleContext {
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public NewPlacementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newPlacement; }
	}

	public final NewPlacementContext newPlacement() throws RecognitionException {
		NewPlacementContext _localctx = new NewPlacementContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_newPlacement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(790);
			match(OpenParenthesis);
			setState(791);
			expressionList();
			setState(792);
			match(CloseParenthesis);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NewTypeIdentifierContext extends ParserRuleContext {
		public TypeSpecifierSequenceContext typeSpecifierSequence() {
			return getRuleContext(TypeSpecifierSequenceContext.class,0);
		}
		public NewDeclaratorContext newDeclarator() {
			return getRuleContext(NewDeclaratorContext.class,0);
		}
		public NewTypeIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newTypeIdentifier; }
	}

	public final NewTypeIdentifierContext newTypeIdentifier() throws RecognitionException {
		NewTypeIdentifierContext _localctx = new NewTypeIdentifierContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_newTypeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(794);
			typeSpecifierSequence();
			setState(796);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				{
				setState(795);
				newDeclarator();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NewDeclaratorContext extends ParserRuleContext {
		public PointerOperatorContext pointerOperator() {
			return getRuleContext(PointerOperatorContext.class,0);
		}
		public NoPointerNewDeclaratorContext noPointerNewDeclarator() {
			return getRuleContext(NoPointerNewDeclaratorContext.class,0);
		}
		public NewDeclaratorContext newDeclarator() {
			return getRuleContext(NewDeclaratorContext.class,0);
		}
		public NewDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newDeclarator; }
	}

	public final NewDeclaratorContext newDeclarator() throws RecognitionException {
		NewDeclaratorContext _localctx = new NewDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_newDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(798);
			pointerOperator();
			setState(800);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || ((((_la - 92)) & ~0x3f) == 0 && ((1L << (_la - 92)) & ((1L << (DoubleColon - 92)) | (1L << (Asterisk - 92)) | (1L << (Ampersand - 92)) | (1L << (DoubleAmpersand - 92)) | (1L << (Identifier - 92)))) != 0)) {
				{
				setState(799);
				newDeclarator();
				}
			}

			setState(802);
			noPointerNewDeclarator(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoPointerNewDeclaratorContext extends ParserRuleContext {
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public NoPointerNewDeclaratorContext noPointerNewDeclarator() {
			return getRuleContext(NoPointerNewDeclaratorContext.class,0);
		}
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public NoPointerNewDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noPointerNewDeclarator; }
	}

	public final NoPointerNewDeclaratorContext noPointerNewDeclarator() throws RecognitionException {
		return noPointerNewDeclarator(0);
	}

	private NoPointerNewDeclaratorContext noPointerNewDeclarator(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		NoPointerNewDeclaratorContext _localctx = new NoPointerNewDeclaratorContext(_ctx, _parentState);
		NoPointerNewDeclaratorContext _prevctx = _localctx;
		int _startState = 76;
		enterRecursionRule(_localctx, 76, RULE_noPointerNewDeclarator, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(805);
			match(OpenBracket);
			setState(806);
			expression(0);
			setState(807);
			match(CloseBracket);
			setState(809);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				{
				setState(808);
				attributeSpecifierSequence(0);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(820);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new NoPointerNewDeclaratorContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_noPointerNewDeclarator);
					setState(811);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(812);
					match(OpenBracket);
					setState(813);
					constantExpression();
					setState(814);
					match(CloseBracket);
					setState(816);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
					case 1:
						{
						setState(815);
						attributeSpecifierSequence(0);
						}
						break;
					}
					}
					} 
				}
				setState(822);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class NewInitializerContext extends ParserRuleContext {
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public BracedInitializerListContext bracedInitializerList() {
			return getRuleContext(BracedInitializerListContext.class,0);
		}
		public NewInitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newInitializer; }
	}

	public final NewInitializerContext newInitializer() throws RecognitionException {
		NewInitializerContext _localctx = new NewInitializerContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_newInitializer);
		int _la;
		try {
			setState(829);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(823);
				match(OpenParenthesis);
				setState(825);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(824);
					expressionList();
					}
				}

				setState(827);
				match(CloseParenthesis);
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(828);
				bracedInitializerList();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeleteExpressionContext extends ParserRuleContext {
		public TerminalNode Delete() { return getToken(CppParser.Delete, 0); }
		public CastExpressionContext castExpression() {
			return getRuleContext(CastExpressionContext.class,0);
		}
		public TerminalNode DoubleColon() { return getToken(CppParser.DoubleColon, 0); }
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public DeleteExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_deleteExpression; }
	}

	public final DeleteExpressionContext deleteExpression() throws RecognitionException {
		DeleteExpressionContext _localctx = new DeleteExpressionContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_deleteExpression);
		int _la;
		try {
			setState(843);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(832);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(831);
					match(DoubleColon);
					}
				}

				setState(834);
				match(Delete);
				setState(835);
				castExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(837);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(836);
					match(DoubleColon);
					}
				}

				setState(839);
				match(Delete);
				setState(840);
				match(OpenBracket);
				setState(841);
				match(CloseBracket);
				setState(842);
				castExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoExceptionExpressionContext extends ParserRuleContext {
		public TerminalNode NoExcept() { return getToken(CppParser.NoExcept, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public NoExceptionExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noExceptionExpression; }
	}

	public final NoExceptionExpressionContext noExceptionExpression() throws RecognitionException {
		NoExceptionExpressionContext _localctx = new NoExceptionExpressionContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_noExceptionExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(845);
			match(NoExcept);
			setState(846);
			match(OpenParenthesis);
			setState(847);
			expression(0);
			setState(848);
			match(CloseParenthesis);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CastExpressionContext extends ParserRuleContext {
		public UnaryExpressionContext unaryExpression() {
			return getRuleContext(UnaryExpressionContext.class,0);
		}
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public CastExpressionContext castExpression() {
			return getRuleContext(CastExpressionContext.class,0);
		}
		public CastExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_castExpression; }
	}

	public final CastExpressionContext castExpression() throws RecognitionException {
		CastExpressionContext _localctx = new CastExpressionContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_castExpression);
		try {
			setState(856);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(850);
				unaryExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(851);
				match(OpenParenthesis);
				setState(852);
				typeIdentifier();
				setState(853);
				match(CloseParenthesis);
				setState(854);
				castExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BinaryExpressionContext extends ParserRuleContext {
		public CastExpressionContext castExpression() {
			return getRuleContext(CastExpressionContext.class,0);
		}
		public BinaryExpressionContext binaryExpression() {
			return getRuleContext(BinaryExpressionContext.class,0);
		}
		public BinaryOperatorContext binaryOperator() {
			return getRuleContext(BinaryOperatorContext.class,0);
		}
		public BinaryExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_binaryExpression; }
	}

	public final BinaryExpressionContext binaryExpression() throws RecognitionException {
		return binaryExpression(0);
	}

	private BinaryExpressionContext binaryExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BinaryExpressionContext _localctx = new BinaryExpressionContext(_ctx, _parentState);
		BinaryExpressionContext _prevctx = _localctx;
		int _startState = 86;
		enterRecursionRule(_localctx, 86, RULE_binaryExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(859);
			castExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(867);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BinaryExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_binaryExpression);
					setState(861);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(862);
					binaryOperator();
					setState(863);
					castExpression();
					}
					} 
				}
				setState(869);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class BinaryOperatorContext extends ParserRuleContext {
		public TerminalNode PeriodAsterisk() { return getToken(CppParser.PeriodAsterisk, 0); }
		public TerminalNode ArrowAsterisk() { return getToken(CppParser.ArrowAsterisk, 0); }
		public TerminalNode Asterisk() { return getToken(CppParser.Asterisk, 0); }
		public TerminalNode ForwardSlash() { return getToken(CppParser.ForwardSlash, 0); }
		public TerminalNode Percent() { return getToken(CppParser.Percent, 0); }
		public TerminalNode Plus() { return getToken(CppParser.Plus, 0); }
		public TerminalNode Minus() { return getToken(CppParser.Minus, 0); }
		public TerminalNode DoubleLessThan() { return getToken(CppParser.DoubleLessThan, 0); }
		public DoubleGreaterThanContext doubleGreaterThan() {
			return getRuleContext(DoubleGreaterThanContext.class,0);
		}
		public TerminalNode LessThan() { return getToken(CppParser.LessThan, 0); }
		public TerminalNode GreaterThan() { return getToken(CppParser.GreaterThan, 0); }
		public TerminalNode LessThanEqual() { return getToken(CppParser.LessThanEqual, 0); }
		public TerminalNode GreaterThanEqual() { return getToken(CppParser.GreaterThanEqual, 0); }
		public TerminalNode DoubleEqual() { return getToken(CppParser.DoubleEqual, 0); }
		public TerminalNode ExclamationMarkEqual() { return getToken(CppParser.ExclamationMarkEqual, 0); }
		public TerminalNode Ampersand() { return getToken(CppParser.Ampersand, 0); }
		public TerminalNode Caret() { return getToken(CppParser.Caret, 0); }
		public TerminalNode VerticalBar() { return getToken(CppParser.VerticalBar, 0); }
		public TerminalNode DoubleAmpersand() { return getToken(CppParser.DoubleAmpersand, 0); }
		public TerminalNode DoubleVerticalBar() { return getToken(CppParser.DoubleVerticalBar, 0); }
		public BinaryOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_binaryOperator; }
	}

	public final BinaryOperatorContext binaryOperator() throws RecognitionException {
		BinaryOperatorContext _localctx = new BinaryOperatorContext(_ctx, getState());
		enterRule(_localctx, 88, RULE_binaryOperator);
		try {
			setState(890);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(870);
				match(PeriodAsterisk);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(871);
				match(ArrowAsterisk);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(872);
				match(Asterisk);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(873);
				match(ForwardSlash);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(874);
				match(Percent);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(875);
				match(Plus);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(876);
				match(Minus);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(877);
				match(DoubleLessThan);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(878);
				doubleGreaterThan();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(879);
				match(LessThan);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(880);
				match(GreaterThan);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(881);
				match(LessThanEqual);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(882);
				match(GreaterThanEqual);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(883);
				match(DoubleEqual);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(884);
				match(ExclamationMarkEqual);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(885);
				match(Ampersand);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(886);
				match(Caret);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(887);
				match(VerticalBar);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(888);
				match(DoubleAmpersand);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(889);
				match(DoubleVerticalBar);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionalExpressionContext extends ParserRuleContext {
		public BinaryExpressionContext binaryExpression() {
			return getRuleContext(BinaryExpressionContext.class,0);
		}
		public TerminalNode QuestionMark() { return getToken(CppParser.QuestionMark, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode Colon() { return getToken(CppParser.Colon, 0); }
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public ConditionalExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditionalExpression; }
	}

	public final ConditionalExpressionContext conditionalExpression() throws RecognitionException {
		ConditionalExpressionContext _localctx = new ConditionalExpressionContext(_ctx, getState());
		enterRule(_localctx, 90, RULE_conditionalExpression);
		try {
			setState(899);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,60,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(892);
				binaryExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(893);
				binaryExpression(0);
				setState(894);
				match(QuestionMark);
				setState(895);
				expression(0);
				setState(896);
				match(Colon);
				setState(897);
				assignmentExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ThrowExpressionContext extends ParserRuleContext {
		public TerminalNode Throw() { return getToken(CppParser.Throw, 0); }
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public ThrowExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_throwExpression; }
	}

	public final ThrowExpressionContext throwExpression() throws RecognitionException {
		ThrowExpressionContext _localctx = new ThrowExpressionContext(_ctx, getState());
		enterRule(_localctx, 92, RULE_throwExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(901);
			match(Throw);
			setState(903);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,61,_ctx) ) {
			case 1:
				{
				setState(902);
				assignmentExpression();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentExpressionContext extends ParserRuleContext {
		public ConditionalExpressionContext conditionalExpression() {
			return getRuleContext(ConditionalExpressionContext.class,0);
		}
		public BinaryExpressionContext binaryExpression() {
			return getRuleContext(BinaryExpressionContext.class,0);
		}
		public AssignmentOperatorContext assignmentOperator() {
			return getRuleContext(AssignmentOperatorContext.class,0);
		}
		public InitializerClauseContext initializerClause() {
			return getRuleContext(InitializerClauseContext.class,0);
		}
		public ThrowExpressionContext throwExpression() {
			return getRuleContext(ThrowExpressionContext.class,0);
		}
		public AssignmentExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentExpression; }
	}

	public final AssignmentExpressionContext assignmentExpression() throws RecognitionException {
		AssignmentExpressionContext _localctx = new AssignmentExpressionContext(_ctx, getState());
		enterRule(_localctx, 94, RULE_assignmentExpression);
		try {
			setState(911);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(905);
				conditionalExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(906);
				binaryExpression(0);
				setState(907);
				assignmentOperator();
				setState(908);
				initializerClause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(910);
				throwExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentOperatorContext extends ParserRuleContext {
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public TerminalNode AsteriskEqual() { return getToken(CppParser.AsteriskEqual, 0); }
		public TerminalNode ForwardSlashEqual() { return getToken(CppParser.ForwardSlashEqual, 0); }
		public TerminalNode PercentEqual() { return getToken(CppParser.PercentEqual, 0); }
		public TerminalNode PlusEqual() { return getToken(CppParser.PlusEqual, 0); }
		public TerminalNode MinusEqual() { return getToken(CppParser.MinusEqual, 0); }
		public TerminalNode DoubleGreaterThanEqual() { return getToken(CppParser.DoubleGreaterThanEqual, 0); }
		public TerminalNode DoubleLessThanEqual() { return getToken(CppParser.DoubleLessThanEqual, 0); }
		public TerminalNode AmpersandEqual() { return getToken(CppParser.AmpersandEqual, 0); }
		public TerminalNode CaretEqual() { return getToken(CppParser.CaretEqual, 0); }
		public TerminalNode VerticalBarEqual() { return getToken(CppParser.VerticalBarEqual, 0); }
		public AssignmentOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignmentOperator; }
	}

	public final AssignmentOperatorContext assignmentOperator() throws RecognitionException {
		AssignmentOperatorContext _localctx = new AssignmentOperatorContext(_ctx, getState());
		enterRule(_localctx, 96, RULE_assignmentOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(913);
			_la = _input.LA(1);
			if ( !(((((_la - 105)) & ~0x3f) == 0 && ((1L << (_la - 105)) & ((1L << (Equal - 105)) | (1L << (PlusEqual - 105)) | (1L << (MinusEqual - 105)) | (1L << (AsteriskEqual - 105)) | (1L << (ForwardSlashEqual - 105)) | (1L << (PercentEqual - 105)) | (1L << (CaretEqual - 105)) | (1L << (AmpersandEqual - 105)) | (1L << (VerticalBarEqual - 105)) | (1L << (DoubleLessThanEqual - 105)) | (1L << (DoubleGreaterThanEqual - 105)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 98;
		enterRecursionRule(_localctx, 98, RULE_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(916);
			assignmentExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(923);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expression);
					setState(918);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(919);
					match(Comma);
					setState(920);
					assignmentExpression();
					}
					} 
				}
				setState(925);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ConstantExpressionContext extends ParserRuleContext {
		public ConditionalExpressionContext conditionalExpression() {
			return getRuleContext(ConditionalExpressionContext.class,0);
		}
		public ConstantExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constantExpression; }
	}

	public final ConstantExpressionContext constantExpression() throws RecognitionException {
		ConstantExpressionContext _localctx = new ConstantExpressionContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_constantExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(926);
			conditionalExpression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public LabeledStatementContext labeledStatement() {
			return getRuleContext(LabeledStatementContext.class,0);
		}
		public ExpressionStatementContext expressionStatement() {
			return getRuleContext(ExpressionStatementContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public CompoundStatementContext compoundStatement() {
			return getRuleContext(CompoundStatementContext.class,0);
		}
		public SelectionStatementContext selectionStatement() {
			return getRuleContext(SelectionStatementContext.class,0);
		}
		public IterationStatementContext iterationStatement() {
			return getRuleContext(IterationStatementContext.class,0);
		}
		public JumpStatementContext jumpStatement() {
			return getRuleContext(JumpStatementContext.class,0);
		}
		public DeclarationStatementContext declarationStatement() {
			return getRuleContext(DeclarationStatementContext.class,0);
		}
		public TryBlockContext tryBlock() {
			return getRuleContext(TryBlockContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 102, RULE_statement);
		int _la;
		try {
			setState(954);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,70,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(928);
				labeledStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(930);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,64,_ctx) ) {
				case 1:
					{
					setState(929);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(932);
				expressionStatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(934);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(933);
					attributeSpecifierSequence(0);
					}
				}

				setState(936);
				compoundStatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(938);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(937);
					attributeSpecifierSequence(0);
					}
				}

				setState(940);
				selectionStatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(942);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(941);
					attributeSpecifierSequence(0);
					}
				}

				setState(944);
				iterationStatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(946);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(945);
					attributeSpecifierSequence(0);
					}
				}

				setState(948);
				jumpStatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(949);
				declarationStatement();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(951);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(950);
					attributeSpecifierSequence(0);
					}
				}

				setState(953);
				tryBlock();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerStatementContext extends ParserRuleContext {
		public ExpressionStatementContext expressionStatement() {
			return getRuleContext(ExpressionStatementContext.class,0);
		}
		public SimpleDeclarationContext simpleDeclaration() {
			return getRuleContext(SimpleDeclarationContext.class,0);
		}
		public InitializerStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializerStatement; }
	}

	public final InitializerStatementContext initializerStatement() throws RecognitionException {
		InitializerStatementContext _localctx = new InitializerStatementContext(_ctx, getState());
		enterRule(_localctx, 104, RULE_initializerStatement);
		try {
			setState(958);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,71,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(956);
				expressionStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(957);
				simpleDeclaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public DeclarationSpecifierSequenceContext declarationSpecifierSequence() {
			return getRuleContext(DeclarationSpecifierSequenceContext.class,0);
		}
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public BraceOrEqualInitializerContext braceOrEqualInitializer() {
			return getRuleContext(BraceOrEqualInitializerContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public ConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition; }
	}

	public final ConditionContext condition() throws RecognitionException {
		ConditionContext _localctx = new ConditionContext(_ctx, getState());
		enterRule(_localctx, 106, RULE_condition);
		int _la;
		try {
			setState(968);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(960);
				expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(962);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(961);
					attributeSpecifierSequence(0);
					}
				}

				setState(964);
				declarationSpecifierSequence();
				setState(965);
				declarator();
				setState(966);
				braceOrEqualInitializer();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LabeledStatementContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode Colon() { return getToken(CppParser.Colon, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TerminalNode Case() { return getToken(CppParser.Case, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public TerminalNode Default() { return getToken(CppParser.Default, 0); }
		public LabeledStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_labeledStatement; }
	}

	public final LabeledStatementContext labeledStatement() throws RecognitionException {
		LabeledStatementContext _localctx = new LabeledStatementContext(_ctx, getState());
		enterRule(_localctx, 108, RULE_labeledStatement);
		int _la;
		try {
			setState(990);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,77,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(971);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(970);
					attributeSpecifierSequence(0);
					}
				}

				setState(973);
				match(Identifier);
				setState(974);
				match(Colon);
				setState(975);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(977);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(976);
					attributeSpecifierSequence(0);
					}
				}

				setState(979);
				match(Case);
				setState(980);
				constantExpression();
				setState(981);
				match(Colon);
				setState(982);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(985);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(984);
					attributeSpecifierSequence(0);
					}
				}

				setState(987);
				match(Default);
				setState(988);
				match(Colon);
				setState(989);
				statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionStatementContext extends ParserRuleContext {
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ExpressionStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionStatement; }
	}

	public final ExpressionStatementContext expressionStatement() throws RecognitionException {
		ExpressionStatementContext _localctx = new ExpressionStatementContext(_ctx, getState());
		enterRule(_localctx, 110, RULE_expressionStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(993);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
				{
				setState(992);
				expression(0);
				}
			}

			setState(995);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CompoundStatementContext extends ParserRuleContext {
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public TerminalNode CloseBrace() { return getToken(CppParser.CloseBrace, 0); }
		public StatementSequenceContext statementSequence() {
			return getRuleContext(StatementSequenceContext.class,0);
		}
		public CompoundStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compoundStatement; }
	}

	public final CompoundStatementContext compoundStatement() throws RecognitionException {
		CompoundStatementContext _localctx = new CompoundStatementContext(_ctx, getState());
		enterRule(_localctx, 112, RULE_compoundStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(997);
			match(OpenBrace);
			setState(999);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
				{
				setState(998);
				statementSequence(0);
				}
			}

			setState(1001);
			match(CloseBrace);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementSequenceContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public StatementSequenceContext statementSequence() {
			return getRuleContext(StatementSequenceContext.class,0);
		}
		public StatementSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statementSequence; }
	}

	public final StatementSequenceContext statementSequence() throws RecognitionException {
		return statementSequence(0);
	}

	private StatementSequenceContext statementSequence(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		StatementSequenceContext _localctx = new StatementSequenceContext(_ctx, _parentState);
		StatementSequenceContext _prevctx = _localctx;
		int _startState = 114;
		enterRecursionRule(_localctx, 114, RULE_statementSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1004);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(1010);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,80,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StatementSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_statementSequence);
					setState(1006);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1007);
					statement();
					}
					} 
				}
				setState(1012);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,80,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class SelectionStatementContext extends ParserRuleContext {
		public TerminalNode If() { return getToken(CppParser.If, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public TerminalNode ConstExpr() { return getToken(CppParser.ConstExpr, 0); }
		public InitializerStatementContext initializerStatement() {
			return getRuleContext(InitializerStatementContext.class,0);
		}
		public TerminalNode Else() { return getToken(CppParser.Else, 0); }
		public TerminalNode Switch() { return getToken(CppParser.Switch, 0); }
		public SelectionStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectionStatement; }
	}

	public final SelectionStatementContext selectionStatement() throws RecognitionException {
		SelectionStatementContext _localctx = new SelectionStatementContext(_ctx, getState());
		enterRule(_localctx, 116, RULE_selectionStatement);
		int _la;
		try {
			setState(1048);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,86,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1013);
				match(If);
				setState(1015);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ConstExpr) {
					{
					setState(1014);
					match(ConstExpr);
					}
				}

				setState(1017);
				match(OpenParenthesis);
				setState(1019);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,82,_ctx) ) {
				case 1:
					{
					setState(1018);
					initializerStatement();
					}
					break;
				}
				setState(1021);
				condition();
				setState(1022);
				match(CloseParenthesis);
				setState(1023);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1025);
				match(If);
				setState(1027);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ConstExpr) {
					{
					setState(1026);
					match(ConstExpr);
					}
				}

				setState(1029);
				match(OpenParenthesis);
				setState(1031);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
				case 1:
					{
					setState(1030);
					initializerStatement();
					}
					break;
				}
				setState(1033);
				condition();
				setState(1034);
				match(CloseParenthesis);
				setState(1035);
				statement();
				setState(1036);
				match(Else);
				setState(1037);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1039);
				match(Switch);
				setState(1040);
				match(OpenParenthesis);
				setState(1042);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,85,_ctx) ) {
				case 1:
					{
					setState(1041);
					initializerStatement();
					}
					break;
				}
				setState(1044);
				condition();
				setState(1045);
				match(CloseParenthesis);
				setState(1046);
				statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IterationStatementContext extends ParserRuleContext {
		public TerminalNode While() { return getToken(CppParser.While, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public TerminalNode Do() { return getToken(CppParser.Do, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public TerminalNode For() { return getToken(CppParser.For, 0); }
		public InitializerStatementContext initializerStatement() {
			return getRuleContext(InitializerStatementContext.class,0);
		}
		public ForRangeDeclarationContext forRangeDeclaration() {
			return getRuleContext(ForRangeDeclarationContext.class,0);
		}
		public TerminalNode Colon() { return getToken(CppParser.Colon, 0); }
		public ForRangeInitializerContext forRangeInitializer() {
			return getRuleContext(ForRangeInitializerContext.class,0);
		}
		public IterationStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_iterationStatement; }
	}

	public final IterationStatementContext iterationStatement() throws RecognitionException {
		IterationStatementContext _localctx = new IterationStatementContext(_ctx, getState());
		enterRule(_localctx, 118, RULE_iterationStatement);
		int _la;
		try {
			setState(1085);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,89,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1050);
				match(While);
				setState(1051);
				match(OpenParenthesis);
				setState(1052);
				condition();
				setState(1053);
				match(CloseParenthesis);
				setState(1054);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1056);
				match(Do);
				setState(1057);
				statement();
				setState(1058);
				match(While);
				setState(1059);
				match(OpenParenthesis);
				setState(1060);
				expression(0);
				setState(1061);
				match(CloseParenthesis);
				setState(1062);
				match(Semicolon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1064);
				match(For);
				setState(1065);
				match(OpenParenthesis);
				setState(1066);
				initializerStatement();
				setState(1068);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticCast) | (1L << Struct))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(1067);
					condition();
					}
				}

				setState(1070);
				match(Semicolon);
				setState(1072);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(1071);
					expression(0);
					}
				}

				setState(1074);
				match(CloseParenthesis);
				setState(1075);
				statement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1077);
				match(For);
				setState(1078);
				match(OpenParenthesis);
				setState(1079);
				forRangeDeclaration();
				setState(1080);
				match(Colon);
				setState(1081);
				forRangeInitializer();
				setState(1082);
				match(CloseParenthesis);
				setState(1083);
				statement();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForInitializerStatementContext extends ParserRuleContext {
		public DeclarationSpecifierSequenceContext declarationSpecifierSequence() {
			return getRuleContext(DeclarationSpecifierSequenceContext.class,0);
		}
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public ReferenceQualifierContext referenceQualifier() {
			return getRuleContext(ReferenceQualifierContext.class,0);
		}
		public ForInitializerStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forInitializerStatement; }
	}

	public final ForInitializerStatementContext forInitializerStatement() throws RecognitionException {
		ForInitializerStatementContext _localctx = new ForInitializerStatementContext(_ctx, getState());
		enterRule(_localctx, 120, RULE_forInitializerStatement);
		int _la;
		try {
			setState(1104);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1088);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1087);
					attributeSpecifierSequence(0);
					}
				}

				setState(1090);
				declarationSpecifierSequence();
				setState(1091);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1094);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1093);
					attributeSpecifierSequence(0);
					}
				}

				setState(1096);
				declarationSpecifierSequence();
				setState(1098);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(1097);
					referenceQualifier();
					}
				}

				setState(1100);
				match(OpenBracket);
				setState(1101);
				identifierList(0);
				setState(1102);
				match(CloseBracket);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForRangeDeclarationContext extends ParserRuleContext {
		public DeclarationSpecifierSequenceContext declarationSpecifierSequence() {
			return getRuleContext(DeclarationSpecifierSequenceContext.class,0);
		}
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public ForRangeDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forRangeDeclaration; }
	}

	public final ForRangeDeclarationContext forRangeDeclaration() throws RecognitionException {
		ForRangeDeclarationContext _localctx = new ForRangeDeclarationContext(_ctx, getState());
		enterRule(_localctx, 122, RULE_forRangeDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1107);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1106);
				attributeSpecifierSequence(0);
				}
			}

			setState(1109);
			declarationSpecifierSequence();
			setState(1110);
			declarator();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForRangeInitializerContext extends ParserRuleContext {
		public ExpressionOrBracedInitializerListContext expressionOrBracedInitializerList() {
			return getRuleContext(ExpressionOrBracedInitializerListContext.class,0);
		}
		public ForRangeInitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forRangeInitializer; }
	}

	public final ForRangeInitializerContext forRangeInitializer() throws RecognitionException {
		ForRangeInitializerContext _localctx = new ForRangeInitializerContext(_ctx, getState());
		enterRule(_localctx, 124, RULE_forRangeInitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1112);
			expressionOrBracedInitializerList();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class JumpStatementContext extends ParserRuleContext {
		public TerminalNode Break() { return getToken(CppParser.Break, 0); }
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public TerminalNode Continue() { return getToken(CppParser.Continue, 0); }
		public TerminalNode Return() { return getToken(CppParser.Return, 0); }
		public ExpressionOrBracedInitializerListContext expressionOrBracedInitializerList() {
			return getRuleContext(ExpressionOrBracedInitializerListContext.class,0);
		}
		public TerminalNode GoTo() { return getToken(CppParser.GoTo, 0); }
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public JumpStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_jumpStatement; }
	}

	public final JumpStatementContext jumpStatement() throws RecognitionException {
		JumpStatementContext _localctx = new JumpStatementContext(_ctx, getState());
		enterRule(_localctx, 126, RULE_jumpStatement);
		int _la;
		try {
			setState(1126);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Break:
				enterOuterAlt(_localctx, 1);
				{
				setState(1114);
				match(Break);
				setState(1115);
				match(Semicolon);
				}
				break;
			case Continue:
				enterOuterAlt(_localctx, 2);
				{
				setState(1116);
				match(Continue);
				setState(1117);
				match(Semicolon);
				}
				break;
			case Return:
				enterOuterAlt(_localctx, 3);
				{
				setState(1118);
				match(Return);
				setState(1120);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(1119);
					expressionOrBracedInitializerList();
					}
				}

				setState(1122);
				match(Semicolon);
				}
				break;
			case GoTo:
				enterOuterAlt(_localctx, 4);
				{
				setState(1123);
				match(GoTo);
				setState(1124);
				match(Identifier);
				setState(1125);
				match(Semicolon);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationStatementContext extends ParserRuleContext {
		public BlockDeclarationContext blockDeclaration() {
			return getRuleContext(BlockDeclarationContext.class,0);
		}
		public DeclarationStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationStatement; }
	}

	public final DeclarationStatementContext declarationStatement() throws RecognitionException {
		DeclarationStatementContext _localctx = new DeclarationStatementContext(_ctx, getState());
		enterRule(_localctx, 128, RULE_declarationStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1128);
			blockDeclaration();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationSequenceContext extends ParserRuleContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public DeclarationSequenceContext declarationSequence() {
			return getRuleContext(DeclarationSequenceContext.class,0);
		}
		public DeclarationSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationSequence; }
	}

	public final DeclarationSequenceContext declarationSequence() throws RecognitionException {
		return declarationSequence(0);
	}

	private DeclarationSequenceContext declarationSequence(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		DeclarationSequenceContext _localctx = new DeclarationSequenceContext(_ctx, _parentState);
		DeclarationSequenceContext _prevctx = _localctx;
		int _startState = 130;
		enterRecursionRule(_localctx, 130, RULE_declarationSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1131);
			declaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1137);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,97,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new DeclarationSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_declarationSequence);
					setState(1133);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1134);
					declaration();
					}
					} 
				}
				setState(1139);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,97,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class DeclarationContext extends ParserRuleContext {
		public BlockDeclarationContext blockDeclaration() {
			return getRuleContext(BlockDeclarationContext.class,0);
		}
		public NoDeclarationSpecifierFunctionDeclarationContext noDeclarationSpecifierFunctionDeclaration() {
			return getRuleContext(NoDeclarationSpecifierFunctionDeclarationContext.class,0);
		}
		public FunctionDefinitionContext functionDefinition() {
			return getRuleContext(FunctionDefinitionContext.class,0);
		}
		public TemplateDeclarationContext templateDeclaration() {
			return getRuleContext(TemplateDeclarationContext.class,0);
		}
		public DeductionGuideContext deductionGuide() {
			return getRuleContext(DeductionGuideContext.class,0);
		}
		public ExplicitInstantiationContext explicitInstantiation() {
			return getRuleContext(ExplicitInstantiationContext.class,0);
		}
		public ExplicitSpecializationContext explicitSpecialization() {
			return getRuleContext(ExplicitSpecializationContext.class,0);
		}
		public LinkageSpecificationContext linkageSpecification() {
			return getRuleContext(LinkageSpecificationContext.class,0);
		}
		public NamespaceDefinitionContext namespaceDefinition() {
			return getRuleContext(NamespaceDefinitionContext.class,0);
		}
		public EmptyDeclarationContext emptyDeclaration() {
			return getRuleContext(EmptyDeclarationContext.class,0);
		}
		public AttributeDeclarationContext attributeDeclaration() {
			return getRuleContext(AttributeDeclarationContext.class,0);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 132, RULE_declaration);
		try {
			setState(1151);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,98,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1140);
				blockDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1141);
				noDeclarationSpecifierFunctionDeclaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1142);
				functionDefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1143);
				templateDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1144);
				deductionGuide();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1145);
				explicitInstantiation();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1146);
				explicitSpecialization();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1147);
				linkageSpecification();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1148);
				namespaceDefinition();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1149);
				emptyDeclaration();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1150);
				attributeDeclaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockDeclarationContext extends ParserRuleContext {
		public SimpleDeclarationContext simpleDeclaration() {
			return getRuleContext(SimpleDeclarationContext.class,0);
		}
		public AsmDefinitionContext asmDefinition() {
			return getRuleContext(AsmDefinitionContext.class,0);
		}
		public NamespaceAliasDefinitionContext namespaceAliasDefinition() {
			return getRuleContext(NamespaceAliasDefinitionContext.class,0);
		}
		public UsingDeclarationContext usingDeclaration() {
			return getRuleContext(UsingDeclarationContext.class,0);
		}
		public UsingDirectiveContext usingDirective() {
			return getRuleContext(UsingDirectiveContext.class,0);
		}
		public StaticAssertDeclarationContext staticAssertDeclaration() {
			return getRuleContext(StaticAssertDeclarationContext.class,0);
		}
		public AliasDeclarationContext aliasDeclaration() {
			return getRuleContext(AliasDeclarationContext.class,0);
		}
		public OpaqueEnumSpecifierContext opaqueEnumSpecifier() {
			return getRuleContext(OpaqueEnumSpecifierContext.class,0);
		}
		public BlockDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockDeclaration; }
	}

	public final BlockDeclarationContext blockDeclaration() throws RecognitionException {
		BlockDeclarationContext _localctx = new BlockDeclarationContext(_ctx, getState());
		enterRule(_localctx, 134, RULE_blockDeclaration);
		try {
			setState(1161);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,99,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1153);
				simpleDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1154);
				asmDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1155);
				namespaceAliasDefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1156);
				usingDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1157);
				usingDirective();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1158);
				staticAssertDeclaration();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1159);
				aliasDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1160);
				opaqueEnumSpecifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoDeclarationSpecifierFunctionDeclarationContext extends ParserRuleContext {
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public NoDeclarationSpecifierFunctionDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noDeclarationSpecifierFunctionDeclaration; }
	}

	public final NoDeclarationSpecifierFunctionDeclarationContext noDeclarationSpecifierFunctionDeclaration() throws RecognitionException {
		NoDeclarationSpecifierFunctionDeclarationContext _localctx = new NoDeclarationSpecifierFunctionDeclarationContext(_ctx, getState());
		enterRule(_localctx, 136, RULE_noDeclarationSpecifierFunctionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1164);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1163);
				attributeSpecifierSequence(0);
				}
			}

			setState(1166);
			declarator();
			setState(1167);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AliasDeclarationContext extends ParserRuleContext {
		public TerminalNode Using() { return getToken(CppParser.Using, 0); }
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public DefiningTypeIdentifierContext definingTypeIdentifier() {
			return getRuleContext(DefiningTypeIdentifierContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public AliasDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_aliasDeclaration; }
	}

	public final AliasDeclarationContext aliasDeclaration() throws RecognitionException {
		AliasDeclarationContext _localctx = new AliasDeclarationContext(_ctx, getState());
		enterRule(_localctx, 138, RULE_aliasDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1169);
			match(Using);
			setState(1170);
			match(Identifier);
			setState(1172);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1171);
				attributeSpecifierSequence(0);
				}
			}

			setState(1174);
			match(Equal);
			setState(1175);
			definingTypeIdentifier();
			setState(1176);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpleDeclarationContext extends ParserRuleContext {
		public DeclarationSpecifierSequenceContext declarationSpecifierSequence() {
			return getRuleContext(DeclarationSpecifierSequenceContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public InitializerDeclaratorListContext initializerDeclaratorList() {
			return getRuleContext(InitializerDeclaratorListContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public ReferenceQualifierContext referenceQualifier() {
			return getRuleContext(ReferenceQualifierContext.class,0);
		}
		public SimpleDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleDeclaration; }
	}

	public final SimpleDeclarationContext simpleDeclaration() throws RecognitionException {
		SimpleDeclarationContext _localctx = new SimpleDeclarationContext(_ctx, getState());
		enterRule(_localctx, 140, RULE_simpleDeclaration);
		int _la;
		try {
			setState(1202);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,105,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1178);
				declarationSpecifierSequence();
				setState(1180);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || _la==Operator || ((((_la - 86)) & ~0x3f) == 0 && ((1L << (_la - 86)) & ((1L << (OpenParenthesis - 86)) | (1L << (Ellipsis - 86)) | (1L << (DoubleColon - 86)) | (1L << (Asterisk - 86)) | (1L << (Ampersand - 86)) | (1L << (Tilde - 86)) | (1L << (DoubleAmpersand - 86)) | (1L << (Identifier - 86)))) != 0)) {
					{
					setState(1179);
					initializerDeclaratorList(0);
					}
				}

				setState(1182);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1184);
				attributeSpecifierSequence(0);
				setState(1185);
				declarationSpecifierSequence();
				setState(1186);
				initializerDeclaratorList(0);
				setState(1187);
				match(Semicolon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1190);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1189);
					attributeSpecifierSequence(0);
					}
				}

				setState(1192);
				declarationSpecifierSequence();
				setState(1194);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(1193);
					referenceQualifier();
					}
				}

				setState(1196);
				match(OpenBracket);
				setState(1197);
				identifierList(0);
				setState(1198);
				match(CloseBracket);
				setState(1199);
				initializer();
				setState(1200);
				match(Semicolon);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StaticAssertDeclarationContext extends ParserRuleContext {
		public TerminalNode StaticAssert() { return getToken(CppParser.StaticAssert, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public TerminalNode StringLiteral() { return getToken(CppParser.StringLiteral, 0); }
		public StaticAssertDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_staticAssertDeclaration; }
	}

	public final StaticAssertDeclarationContext staticAssertDeclaration() throws RecognitionException {
		StaticAssertDeclarationContext _localctx = new StaticAssertDeclarationContext(_ctx, getState());
		enterRule(_localctx, 142, RULE_staticAssertDeclaration);
		try {
			setState(1218);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,106,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1204);
				match(StaticAssert);
				setState(1205);
				match(OpenParenthesis);
				setState(1206);
				constantExpression();
				setState(1207);
				match(CloseParenthesis);
				setState(1208);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1210);
				match(StaticAssert);
				setState(1211);
				match(OpenParenthesis);
				setState(1212);
				constantExpression();
				setState(1213);
				match(Comma);
				setState(1214);
				match(StringLiteral);
				setState(1215);
				match(CloseParenthesis);
				setState(1216);
				match(Semicolon);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EmptyDeclarationContext extends ParserRuleContext {
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public EmptyDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_emptyDeclaration; }
	}

	public final EmptyDeclarationContext emptyDeclaration() throws RecognitionException {
		EmptyDeclarationContext _localctx = new EmptyDeclarationContext(_ctx, getState());
		enterRule(_localctx, 144, RULE_emptyDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1220);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributeDeclarationContext extends ParserRuleContext {
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public AttributeDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeDeclaration; }
	}

	public final AttributeDeclarationContext attributeDeclaration() throws RecognitionException {
		AttributeDeclarationContext _localctx = new AttributeDeclarationContext(_ctx, getState());
		enterRule(_localctx, 146, RULE_attributeDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1222);
			attributeSpecifierSequence(0);
			setState(1223);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationModifierContext extends ParserRuleContext {
		public ConstVolatileQualifierContext constVolatileQualifier() {
			return getRuleContext(ConstVolatileQualifierContext.class,0);
		}
		public StorageClassSpecifierContext storageClassSpecifier() {
			return getRuleContext(StorageClassSpecifierContext.class,0);
		}
		public FunctionSpecifierContext functionSpecifier() {
			return getRuleContext(FunctionSpecifierContext.class,0);
		}
		public TerminalNode Friend() { return getToken(CppParser.Friend, 0); }
		public TerminalNode TypeDef() { return getToken(CppParser.TypeDef, 0); }
		public TerminalNode ConstExpr() { return getToken(CppParser.ConstExpr, 0); }
		public TerminalNode Inline() { return getToken(CppParser.Inline, 0); }
		public DeclarationModifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationModifier; }
	}

	public final DeclarationModifierContext declarationModifier() throws RecognitionException {
		DeclarationModifierContext _localctx = new DeclarationModifierContext(_ctx, getState());
		enterRule(_localctx, 148, RULE_declarationModifier);
		try {
			setState(1232);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Const:
			case Volatile:
				enterOuterAlt(_localctx, 1);
				{
				setState(1225);
				constVolatileQualifier();
				}
				break;
			case Extern:
			case Mutable:
			case Static:
			case ThreadLocal:
				enterOuterAlt(_localctx, 2);
				{
				setState(1226);
				storageClassSpecifier();
				}
				break;
			case Explicit:
			case Virtual:
				enterOuterAlt(_localctx, 3);
				{
				setState(1227);
				functionSpecifier();
				}
				break;
			case Friend:
				enterOuterAlt(_localctx, 4);
				{
				setState(1228);
				match(Friend);
				}
				break;
			case TypeDef:
				enterOuterAlt(_localctx, 5);
				{
				setState(1229);
				match(TypeDef);
				}
				break;
			case ConstExpr:
				enterOuterAlt(_localctx, 6);
				{
				setState(1230);
				match(ConstExpr);
				}
				break;
			case Inline:
				enterOuterAlt(_localctx, 7);
				{
				setState(1231);
				match(Inline);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationSpecifierSequenceContext extends ParserRuleContext {
		public DefiningTypeSpecifierContext definingTypeSpecifier() {
			return getRuleContext(DefiningTypeSpecifierContext.class,0);
		}
		public LeadingDeclarationModifierSequenceContext leadingDeclarationModifierSequence() {
			return getRuleContext(LeadingDeclarationModifierSequenceContext.class,0);
		}
		public TrailingDeclarationModifierSequenceContext trailingDeclarationModifierSequence() {
			return getRuleContext(TrailingDeclarationModifierSequenceContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public DeclarationSpecifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationSpecifierSequence; }
	}

	public final DeclarationSpecifierSequenceContext declarationSpecifierSequence() throws RecognitionException {
		DeclarationSpecifierSequenceContext _localctx = new DeclarationSpecifierSequenceContext(_ctx, getState());
		enterRule(_localctx, 150, RULE_declarationSpecifierSequence);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1235);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 19)) & ~0x3f) == 0 && ((1L << (_la - 19)) & ((1L << (Const - 19)) | (1L << (ConstExpr - 19)) | (1L << (Explicit - 19)) | (1L << (Extern - 19)) | (1L << (Friend - 19)) | (1L << (Inline - 19)) | (1L << (Mutable - 19)) | (1L << (Static - 19)) | (1L << (ThreadLocal - 19)) | (1L << (TypeDef - 19)) | (1L << (Virtual - 19)) | (1L << (Volatile - 19)))) != 0)) {
				{
				setState(1234);
				leadingDeclarationModifierSequence();
				}
			}

			setState(1237);
			definingTypeSpecifier();
			setState(1239);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 19)) & ~0x3f) == 0 && ((1L << (_la - 19)) & ((1L << (Const - 19)) | (1L << (ConstExpr - 19)) | (1L << (Explicit - 19)) | (1L << (Extern - 19)) | (1L << (Friend - 19)) | (1L << (Inline - 19)) | (1L << (Mutable - 19)) | (1L << (Static - 19)) | (1L << (ThreadLocal - 19)) | (1L << (TypeDef - 19)) | (1L << (Virtual - 19)) | (1L << (Volatile - 19)))) != 0)) {
				{
				setState(1238);
				trailingDeclarationModifierSequence();
				}
			}

			setState(1242);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,110,_ctx) ) {
			case 1:
				{
				setState(1241);
				attributeSpecifierSequence(0);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LeadingDeclarationModifierSequenceContext extends ParserRuleContext {
		public DeclarationModifierSequenceContext declarationModifierSequence() {
			return getRuleContext(DeclarationModifierSequenceContext.class,0);
		}
		public LeadingDeclarationModifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_leadingDeclarationModifierSequence; }
	}

	public final LeadingDeclarationModifierSequenceContext leadingDeclarationModifierSequence() throws RecognitionException {
		LeadingDeclarationModifierSequenceContext _localctx = new LeadingDeclarationModifierSequenceContext(_ctx, getState());
		enterRule(_localctx, 152, RULE_leadingDeclarationModifierSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1244);
			declarationModifierSequence();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TrailingDeclarationModifierSequenceContext extends ParserRuleContext {
		public DeclarationModifierSequenceContext declarationModifierSequence() {
			return getRuleContext(DeclarationModifierSequenceContext.class,0);
		}
		public TrailingDeclarationModifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trailingDeclarationModifierSequence; }
	}

	public final TrailingDeclarationModifierSequenceContext trailingDeclarationModifierSequence() throws RecognitionException {
		TrailingDeclarationModifierSequenceContext _localctx = new TrailingDeclarationModifierSequenceContext(_ctx, getState());
		enterRule(_localctx, 154, RULE_trailingDeclarationModifierSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1246);
			declarationModifierSequence();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationModifierSequenceContext extends ParserRuleContext {
		public DeclarationModifierContext declarationModifier() {
			return getRuleContext(DeclarationModifierContext.class,0);
		}
		public DeclarationModifierSequenceContext declarationModifierSequence() {
			return getRuleContext(DeclarationModifierSequenceContext.class,0);
		}
		public DeclarationModifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationModifierSequence; }
	}

	public final DeclarationModifierSequenceContext declarationModifierSequence() throws RecognitionException {
		DeclarationModifierSequenceContext _localctx = new DeclarationModifierSequenceContext(_ctx, getState());
		enterRule(_localctx, 156, RULE_declarationModifierSequence);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1248);
			declarationModifier();
			setState(1250);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 19)) & ~0x3f) == 0 && ((1L << (_la - 19)) & ((1L << (Const - 19)) | (1L << (ConstExpr - 19)) | (1L << (Explicit - 19)) | (1L << (Extern - 19)) | (1L << (Friend - 19)) | (1L << (Inline - 19)) | (1L << (Mutable - 19)) | (1L << (Static - 19)) | (1L << (ThreadLocal - 19)) | (1L << (TypeDef - 19)) | (1L << (Virtual - 19)) | (1L << (Volatile - 19)))) != 0)) {
				{
				setState(1249);
				declarationModifierSequence();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StorageClassSpecifierContext extends ParserRuleContext {
		public TerminalNode Static() { return getToken(CppParser.Static, 0); }
		public TerminalNode ThreadLocal() { return getToken(CppParser.ThreadLocal, 0); }
		public TerminalNode Extern() { return getToken(CppParser.Extern, 0); }
		public TerminalNode Mutable() { return getToken(CppParser.Mutable, 0); }
		public StorageClassSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_storageClassSpecifier; }
	}

	public final StorageClassSpecifierContext storageClassSpecifier() throws RecognitionException {
		StorageClassSpecifierContext _localctx = new StorageClassSpecifierContext(_ctx, getState());
		enterRule(_localctx, 158, RULE_storageClassSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1252);
			_la = _input.LA(1);
			if ( !(((((_la - 33)) & ~0x3f) == 0 && ((1L << (_la - 33)) & ((1L << (Extern - 33)) | (1L << (Mutable - 33)) | (1L << (Static - 33)) | (1L << (ThreadLocal - 33)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionSpecifierContext extends ParserRuleContext {
		public TerminalNode Virtual() { return getToken(CppParser.Virtual, 0); }
		public TerminalNode Explicit() { return getToken(CppParser.Explicit, 0); }
		public FunctionSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionSpecifier; }
	}

	public final FunctionSpecifierContext functionSpecifier() throws RecognitionException {
		FunctionSpecifierContext _localctx = new FunctionSpecifierContext(_ctx, getState());
		enterRule(_localctx, 160, RULE_functionSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1254);
			_la = _input.LA(1);
			if ( !(_la==Explicit || _la==Virtual) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeSpecifierContext extends ParserRuleContext {
		public SimpleTypeSpecifierContext simpleTypeSpecifier() {
			return getRuleContext(SimpleTypeSpecifierContext.class,0);
		}
		public ElaboratedTypeSpecifierContext elaboratedTypeSpecifier() {
			return getRuleContext(ElaboratedTypeSpecifierContext.class,0);
		}
		public TypenameSpecifierContext typenameSpecifier() {
			return getRuleContext(TypenameSpecifierContext.class,0);
		}
		public TypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeSpecifier; }
	}

	public final TypeSpecifierContext typeSpecifier() throws RecognitionException {
		TypeSpecifierContext _localctx = new TypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 162, RULE_typeSpecifier);
		try {
			setState(1259);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Auto:
			case Bool:
			case Char:
			case Char8:
			case Char16:
			case Char32:
			case DeclType:
			case Double:
			case Float:
			case Int:
			case Long:
			case Short:
			case Signed:
			case Unsigned:
			case Void:
			case WChar:
			case DoubleColon:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(1256);
				simpleTypeSpecifier();
				}
				break;
			case Class:
			case Enum:
			case Struct:
			case Union:
				enterOuterAlt(_localctx, 2);
				{
				setState(1257);
				elaboratedTypeSpecifier();
				}
				break;
			case TypeName:
				enterOuterAlt(_localctx, 3);
				{
				setState(1258);
				typenameSpecifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeSpecifierSequenceContext extends ParserRuleContext {
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public ConstVolatileQualifierContext constVolatileQualifier() {
			return getRuleContext(ConstVolatileQualifierContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TypeSpecifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeSpecifierSequence; }
	}

	public final TypeSpecifierSequenceContext typeSpecifierSequence() throws RecognitionException {
		TypeSpecifierSequenceContext _localctx = new TypeSpecifierSequenceContext(_ctx, getState());
		enterRule(_localctx, 164, RULE_typeSpecifierSequence);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1262);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Const || _la==Volatile) {
				{
				setState(1261);
				constVolatileQualifier();
				}
			}

			setState(1264);
			typeSpecifier();
			setState(1266);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,114,_ctx) ) {
			case 1:
				{
				setState(1265);
				attributeSpecifierSequence(0);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DefiningTypeSpecifierContext extends ParserRuleContext {
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public ClassSpecifierContext classSpecifier() {
			return getRuleContext(ClassSpecifierContext.class,0);
		}
		public EnumSpecifierContext enumSpecifier() {
			return getRuleContext(EnumSpecifierContext.class,0);
		}
		public DefiningTypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definingTypeSpecifier; }
	}

	public final DefiningTypeSpecifierContext definingTypeSpecifier() throws RecognitionException {
		DefiningTypeSpecifierContext _localctx = new DefiningTypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 166, RULE_definingTypeSpecifier);
		try {
			setState(1271);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,115,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1268);
				typeSpecifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1269);
				classSpecifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1270);
				enumSpecifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DefiningTypeSpecifierSequenceContext extends ParserRuleContext {
		public DefiningTypeSpecifierContext definingTypeSpecifier() {
			return getRuleContext(DefiningTypeSpecifierContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public DefiningTypeSpecifierSequenceContext definingTypeSpecifierSequence() {
			return getRuleContext(DefiningTypeSpecifierSequenceContext.class,0);
		}
		public DefiningTypeSpecifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definingTypeSpecifierSequence; }
	}

	public final DefiningTypeSpecifierSequenceContext definingTypeSpecifierSequence() throws RecognitionException {
		DefiningTypeSpecifierSequenceContext _localctx = new DefiningTypeSpecifierSequenceContext(_ctx, getState());
		enterRule(_localctx, 168, RULE_definingTypeSpecifierSequence);
		try {
			setState(1280);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,117,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1273);
				definingTypeSpecifier();
				setState(1275);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,116,_ctx) ) {
				case 1:
					{
					setState(1274);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1277);
				definingTypeSpecifier();
				setState(1278);
				definingTypeSpecifierSequence();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpleTypeSpecifierContext extends ParserRuleContext {
		public TypeNameContext typeName() {
			return getRuleContext(TypeNameContext.class,0);
		}
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public TerminalNode Char() { return getToken(CppParser.Char, 0); }
		public TerminalNode Char8() { return getToken(CppParser.Char8, 0); }
		public TerminalNode Char16() { return getToken(CppParser.Char16, 0); }
		public TerminalNode Char32() { return getToken(CppParser.Char32, 0); }
		public TerminalNode WChar() { return getToken(CppParser.WChar, 0); }
		public TerminalNode Bool() { return getToken(CppParser.Bool, 0); }
		public TerminalNode Short() { return getToken(CppParser.Short, 0); }
		public TerminalNode Int() { return getToken(CppParser.Int, 0); }
		public TerminalNode Long() { return getToken(CppParser.Long, 0); }
		public TerminalNode Signed() { return getToken(CppParser.Signed, 0); }
		public TerminalNode Unsigned() { return getToken(CppParser.Unsigned, 0); }
		public TerminalNode Float() { return getToken(CppParser.Float, 0); }
		public TerminalNode Double() { return getToken(CppParser.Double, 0); }
		public TerminalNode Void() { return getToken(CppParser.Void, 0); }
		public TerminalNode Auto() { return getToken(CppParser.Auto, 0); }
		public DeclarationTypeSpecifierContext declarationTypeSpecifier() {
			return getRuleContext(DeclarationTypeSpecifierContext.class,0);
		}
		public SimpleTypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleTypeSpecifier; }
	}

	public final SimpleTypeSpecifierContext simpleTypeSpecifier() throws RecognitionException {
		SimpleTypeSpecifierContext _localctx = new SimpleTypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 170, RULE_simpleTypeSpecifier);
		try {
			setState(1302);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,119,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1283);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,118,_ctx) ) {
				case 1:
					{
					setState(1282);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1285);
				typeName();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1286);
				match(Char);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1287);
				match(Char8);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1288);
				match(Char16);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1289);
				match(Char32);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1290);
				match(WChar);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1291);
				match(Bool);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1292);
				match(Short);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1293);
				match(Int);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1294);
				match(Long);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1295);
				match(Signed);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(1296);
				match(Unsigned);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(1297);
				match(Float);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(1298);
				match(Double);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(1299);
				match(Void);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(1300);
				match(Auto);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(1301);
				declarationTypeSpecifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeNameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public SimpleTemplateIdentifierContext simpleTemplateIdentifier() {
			return getRuleContext(SimpleTemplateIdentifierContext.class,0);
		}
		public TypeNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeName; }
	}

	public final TypeNameContext typeName() throws RecognitionException {
		TypeNameContext _localctx = new TypeNameContext(_ctx, getState());
		enterRule(_localctx, 172, RULE_typeName);
		try {
			setState(1306);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,120,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1304);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1305);
				simpleTemplateIdentifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationTypeSpecifierContext extends ParserRuleContext {
		public TerminalNode DeclType() { return getToken(CppParser.DeclType, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public TerminalNode Auto() { return getToken(CppParser.Auto, 0); }
		public DeclarationTypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationTypeSpecifier; }
	}

	public final DeclarationTypeSpecifierContext declarationTypeSpecifier() throws RecognitionException {
		DeclarationTypeSpecifierContext _localctx = new DeclarationTypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 174, RULE_declarationTypeSpecifier);
		try {
			setState(1317);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,121,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1308);
				match(DeclType);
				setState(1309);
				match(OpenParenthesis);
				setState(1310);
				expression(0);
				setState(1311);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1313);
				match(DeclType);
				setState(1314);
				match(OpenParenthesis);
				setState(1315);
				match(Auto);
				setState(1316);
				match(CloseParenthesis);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElaboratedTypeSpecifierContext extends ParserRuleContext {
		public ClassKeyContext classKey() {
			return getRuleContext(ClassKeyContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public SimpleTemplateIdentifierContext simpleTemplateIdentifier() {
			return getRuleContext(SimpleTemplateIdentifierContext.class,0);
		}
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public TerminalNode Enum() { return getToken(CppParser.Enum, 0); }
		public ElaboratedTypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elaboratedTypeSpecifier; }
	}

	public final ElaboratedTypeSpecifierContext elaboratedTypeSpecifier() throws RecognitionException {
		ElaboratedTypeSpecifierContext _localctx = new ElaboratedTypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 176, RULE_elaboratedTypeSpecifier);
		int _la;
		try {
			setState(1343);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,126,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1319);
				classKey();
				setState(1321);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1320);
					attributeSpecifierSequence(0);
					}
				}

				setState(1324);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,123,_ctx) ) {
				case 1:
					{
					setState(1323);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1326);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1328);
				classKey();
				setState(1329);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1331);
				classKey();
				setState(1332);
				nestedNameSpecifier();
				setState(1334);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(1333);
					match(Template);
					}
				}

				setState(1336);
				simpleTemplateIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1338);
				match(Enum);
				setState(1340);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,125,_ctx) ) {
				case 1:
					{
					setState(1339);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1342);
				match(Identifier);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumSpecifierContext extends ParserRuleContext {
		public EnumHeadContext enumHead() {
			return getRuleContext(EnumHeadContext.class,0);
		}
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public TerminalNode CloseBrace() { return getToken(CppParser.CloseBrace, 0); }
		public EnumeratorListContext enumeratorList() {
			return getRuleContext(EnumeratorListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public EnumSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumSpecifier; }
	}

	public final EnumSpecifierContext enumSpecifier() throws RecognitionException {
		EnumSpecifierContext _localctx = new EnumSpecifierContext(_ctx, getState());
		enterRule(_localctx, 178, RULE_enumSpecifier);
		int _la;
		try {
			setState(1358);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,128,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1345);
				enumHead();
				setState(1346);
				match(OpenBrace);
				setState(1348);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1347);
					enumeratorList(0);
					}
				}

				setState(1350);
				match(CloseBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1352);
				enumHead();
				setState(1353);
				match(OpenBrace);
				setState(1354);
				enumeratorList(0);
				setState(1355);
				match(Comma);
				setState(1356);
				match(CloseBrace);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumHeadContext extends ParserRuleContext {
		public EnumKeyContext enumKey() {
			return getRuleContext(EnumKeyContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public EnumHeadNameContext enumHeadName() {
			return getRuleContext(EnumHeadNameContext.class,0);
		}
		public EnumBaseContext enumBase() {
			return getRuleContext(EnumBaseContext.class,0);
		}
		public EnumHeadContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumHead; }
	}

	public final EnumHeadContext enumHead() throws RecognitionException {
		EnumHeadContext _localctx = new EnumHeadContext(_ctx, getState());
		enterRule(_localctx, 180, RULE_enumHead);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1360);
			enumKey();
			setState(1362);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1361);
				attributeSpecifierSequence(0);
				}
			}

			setState(1365);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || _la==DoubleColon || _la==Identifier) {
				{
				setState(1364);
				enumHeadName();
				}
			}

			setState(1368);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1367);
				enumBase();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumHeadNameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public EnumHeadNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumHeadName; }
	}

	public final EnumHeadNameContext enumHeadName() throws RecognitionException {
		EnumHeadNameContext _localctx = new EnumHeadNameContext(_ctx, getState());
		enterRule(_localctx, 182, RULE_enumHeadName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1371);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,132,_ctx) ) {
			case 1:
				{
				setState(1370);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1373);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OpaqueEnumSpecifierContext extends ParserRuleContext {
		public EnumKeyContext enumKey() {
			return getRuleContext(EnumKeyContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public EnumBaseContext enumBase() {
			return getRuleContext(EnumBaseContext.class,0);
		}
		public OpaqueEnumSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_opaqueEnumSpecifier; }
	}

	public final OpaqueEnumSpecifierContext opaqueEnumSpecifier() throws RecognitionException {
		OpaqueEnumSpecifierContext _localctx = new OpaqueEnumSpecifierContext(_ctx, getState());
		enterRule(_localctx, 184, RULE_opaqueEnumSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1375);
			enumKey();
			setState(1377);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1376);
				attributeSpecifierSequence(0);
				}
			}

			setState(1380);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,134,_ctx) ) {
			case 1:
				{
				setState(1379);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1382);
			match(Identifier);
			setState(1384);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1383);
				enumBase();
				}
			}

			setState(1386);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumKeyContext extends ParserRuleContext {
		public TerminalNode Enum() { return getToken(CppParser.Enum, 0); }
		public TerminalNode Class() { return getToken(CppParser.Class, 0); }
		public TerminalNode Struct() { return getToken(CppParser.Struct, 0); }
		public EnumKeyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumKey; }
	}

	public final EnumKeyContext enumKey() throws RecognitionException {
		EnumKeyContext _localctx = new EnumKeyContext(_ctx, getState());
		enterRule(_localctx, 186, RULE_enumKey);
		try {
			setState(1393);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,136,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1388);
				match(Enum);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1389);
				match(Enum);
				setState(1390);
				match(Class);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1391);
				match(Enum);
				setState(1392);
				match(Struct);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumBaseContext extends ParserRuleContext {
		public TerminalNode Colon() { return getToken(CppParser.Colon, 0); }
		public TypeSpecifierSequenceContext typeSpecifierSequence() {
			return getRuleContext(TypeSpecifierSequenceContext.class,0);
		}
		public EnumBaseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumBase; }
	}

	public final EnumBaseContext enumBase() throws RecognitionException {
		EnumBaseContext _localctx = new EnumBaseContext(_ctx, getState());
		enterRule(_localctx, 188, RULE_enumBase);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1395);
			match(Colon);
			setState(1396);
			typeSpecifierSequence();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumeratorListContext extends ParserRuleContext {
		public EnumeratorDefinitionContext enumeratorDefinition() {
			return getRuleContext(EnumeratorDefinitionContext.class,0);
		}
		public EnumeratorListContext enumeratorList() {
			return getRuleContext(EnumeratorListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public EnumeratorListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumeratorList; }
	}

	public final EnumeratorListContext enumeratorList() throws RecognitionException {
		return enumeratorList(0);
	}

	private EnumeratorListContext enumeratorList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		EnumeratorListContext _localctx = new EnumeratorListContext(_ctx, _parentState);
		EnumeratorListContext _prevctx = _localctx;
		int _startState = 190;
		enterRecursionRule(_localctx, 190, RULE_enumeratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1399);
			enumeratorDefinition();
			}
			_ctx.stop = _input.LT(-1);
			setState(1406);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,137,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new EnumeratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_enumeratorList);
					setState(1401);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1402);
					match(Comma);
					setState(1403);
					enumeratorDefinition();
					}
					} 
				}
				setState(1408);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,137,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class EnumeratorDefinitionContext extends ParserRuleContext {
		public EnumeratorContext enumerator() {
			return getRuleContext(EnumeratorContext.class,0);
		}
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public EnumeratorDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumeratorDefinition; }
	}

	public final EnumeratorDefinitionContext enumeratorDefinition() throws RecognitionException {
		EnumeratorDefinitionContext _localctx = new EnumeratorDefinitionContext(_ctx, getState());
		enterRule(_localctx, 192, RULE_enumeratorDefinition);
		try {
			setState(1414);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,138,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1409);
				enumerator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1410);
				enumerator();
				setState(1411);
				match(Equal);
				setState(1412);
				constantExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnumeratorContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public EnumeratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumerator; }
	}

	public final EnumeratorContext enumerator() throws RecognitionException {
		EnumeratorContext _localctx = new EnumeratorContext(_ctx, getState());
		enterRule(_localctx, 194, RULE_enumerator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1416);
			match(Identifier);
			setState(1418);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,139,_ctx) ) {
			case 1:
				{
				setState(1417);
				attributeSpecifierSequence(0);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamespaceDefinitionContext extends ParserRuleContext {
		public NamedNamespaceDefinitionContext namedNamespaceDefinition() {
			return getRuleContext(NamedNamespaceDefinitionContext.class,0);
		}
		public UnnamedNamespaceDefinitionContext unnamedNamespaceDefinition() {
			return getRuleContext(UnnamedNamespaceDefinitionContext.class,0);
		}
		public NestedNamespaceDefinitionContext nestedNamespaceDefinition() {
			return getRuleContext(NestedNamespaceDefinitionContext.class,0);
		}
		public NamespaceDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespaceDefinition; }
	}

	public final NamespaceDefinitionContext namespaceDefinition() throws RecognitionException {
		NamespaceDefinitionContext _localctx = new NamespaceDefinitionContext(_ctx, getState());
		enterRule(_localctx, 196, RULE_namespaceDefinition);
		try {
			setState(1423);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,140,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1420);
				namedNamespaceDefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1421);
				unnamedNamespaceDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1422);
				nestedNamespaceDefinition();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamedNamespaceDefinitionContext extends ParserRuleContext {
		public TerminalNode Namespace() { return getToken(CppParser.Namespace, 0); }
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public NamespaceBodyContext namespaceBody() {
			return getRuleContext(NamespaceBodyContext.class,0);
		}
		public TerminalNode CloseBrace() { return getToken(CppParser.CloseBrace, 0); }
		public TerminalNode Inline() { return getToken(CppParser.Inline, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public NamedNamespaceDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedNamespaceDefinition; }
	}

	public final NamedNamespaceDefinitionContext namedNamespaceDefinition() throws RecognitionException {
		NamedNamespaceDefinitionContext _localctx = new NamedNamespaceDefinitionContext(_ctx, getState());
		enterRule(_localctx, 198, RULE_namedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1426);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1425);
				match(Inline);
				}
			}

			setState(1428);
			match(Namespace);
			setState(1430);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1429);
				attributeSpecifierSequence(0);
				}
			}

			setState(1432);
			match(Identifier);
			setState(1433);
			match(OpenBrace);
			setState(1434);
			namespaceBody();
			setState(1435);
			match(CloseBrace);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UnnamedNamespaceDefinitionContext extends ParserRuleContext {
		public TerminalNode Namespace() { return getToken(CppParser.Namespace, 0); }
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public NamespaceBodyContext namespaceBody() {
			return getRuleContext(NamespaceBodyContext.class,0);
		}
		public TerminalNode CloseBrace() { return getToken(CppParser.CloseBrace, 0); }
		public TerminalNode Inline() { return getToken(CppParser.Inline, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public UnnamedNamespaceDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unnamedNamespaceDefinition; }
	}

	public final UnnamedNamespaceDefinitionContext unnamedNamespaceDefinition() throws RecognitionException {
		UnnamedNamespaceDefinitionContext _localctx = new UnnamedNamespaceDefinitionContext(_ctx, getState());
		enterRule(_localctx, 200, RULE_unnamedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1438);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1437);
				match(Inline);
				}
			}

			setState(1440);
			match(Namespace);
			setState(1442);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1441);
				attributeSpecifierSequence(0);
				}
			}

			setState(1444);
			match(OpenBrace);
			setState(1445);
			namespaceBody();
			setState(1446);
			match(CloseBrace);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NestedNamespaceDefinitionContext extends ParserRuleContext {
		public TerminalNode Namespace() { return getToken(CppParser.Namespace, 0); }
		public EnclosingNamespaceSpecifierContext enclosingNamespaceSpecifier() {
			return getRuleContext(EnclosingNamespaceSpecifierContext.class,0);
		}
		public TerminalNode DoubleColon() { return getToken(CppParser.DoubleColon, 0); }
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public NamespaceBodyContext namespaceBody() {
			return getRuleContext(NamespaceBodyContext.class,0);
		}
		public TerminalNode CloseBrace() { return getToken(CppParser.CloseBrace, 0); }
		public NestedNamespaceDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nestedNamespaceDefinition; }
	}

	public final NestedNamespaceDefinitionContext nestedNamespaceDefinition() throws RecognitionException {
		NestedNamespaceDefinitionContext _localctx = new NestedNamespaceDefinitionContext(_ctx, getState());
		enterRule(_localctx, 202, RULE_nestedNamespaceDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1448);
			match(Namespace);
			setState(1449);
			enclosingNamespaceSpecifier(0);
			setState(1450);
			match(DoubleColon);
			setState(1451);
			match(Identifier);
			setState(1452);
			match(OpenBrace);
			setState(1453);
			namespaceBody();
			setState(1454);
			match(CloseBrace);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class EnclosingNamespaceSpecifierContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public EnclosingNamespaceSpecifierContext enclosingNamespaceSpecifier() {
			return getRuleContext(EnclosingNamespaceSpecifierContext.class,0);
		}
		public TerminalNode DoubleColon() { return getToken(CppParser.DoubleColon, 0); }
		public EnclosingNamespaceSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enclosingNamespaceSpecifier; }
	}

	public final EnclosingNamespaceSpecifierContext enclosingNamespaceSpecifier() throws RecognitionException {
		return enclosingNamespaceSpecifier(0);
	}

	private EnclosingNamespaceSpecifierContext enclosingNamespaceSpecifier(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		EnclosingNamespaceSpecifierContext _localctx = new EnclosingNamespaceSpecifierContext(_ctx, _parentState);
		EnclosingNamespaceSpecifierContext _prevctx = _localctx;
		int _startState = 204;
		enterRecursionRule(_localctx, 204, RULE_enclosingNamespaceSpecifier, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1457);
			match(Identifier);
			}
			_ctx.stop = _input.LT(-1);
			setState(1464);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,145,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new EnclosingNamespaceSpecifierContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_enclosingNamespaceSpecifier);
					setState(1459);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1460);
					match(DoubleColon);
					setState(1461);
					match(Identifier);
					}
					} 
				}
				setState(1466);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,145,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class NamespaceBodyContext extends ParserRuleContext {
		public DeclarationSequenceContext declarationSequence() {
			return getRuleContext(DeclarationSequenceContext.class,0);
		}
		public NamespaceBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespaceBody; }
	}

	public final NamespaceBodyContext namespaceBody() throws RecognitionException {
		NamespaceBodyContext _localctx = new NamespaceBodyContext(_ctx, getState());
		enterRule(_localctx, 206, RULE_namespaceBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1468);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (OpenParenthesis - 65)) | (1L << (Semicolon - 65)) | (1L << (Ellipsis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (Tilde - 65)) | (1L << (DoubleAmpersand - 65)))) != 0) || _la==Identifier) {
				{
				setState(1467);
				declarationSequence(0);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamespaceAliasDefinitionContext extends ParserRuleContext {
		public TerminalNode Namespace() { return getToken(CppParser.Namespace, 0); }
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public QualifiedNamespaceSpecifierContext qualifiedNamespaceSpecifier() {
			return getRuleContext(QualifiedNamespaceSpecifierContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public NamespaceAliasDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespaceAliasDefinition; }
	}

	public final NamespaceAliasDefinitionContext namespaceAliasDefinition() throws RecognitionException {
		NamespaceAliasDefinitionContext _localctx = new NamespaceAliasDefinitionContext(_ctx, getState());
		enterRule(_localctx, 208, RULE_namespaceAliasDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1470);
			match(Namespace);
			setState(1471);
			match(Identifier);
			setState(1472);
			match(Equal);
			setState(1473);
			qualifiedNamespaceSpecifier();
			setState(1474);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QualifiedNamespaceSpecifierContext extends ParserRuleContext {
		public NamespaceNameContext namespaceName() {
			return getRuleContext(NamespaceNameContext.class,0);
		}
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public QualifiedNamespaceSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qualifiedNamespaceSpecifier; }
	}

	public final QualifiedNamespaceSpecifierContext qualifiedNamespaceSpecifier() throws RecognitionException {
		QualifiedNamespaceSpecifierContext _localctx = new QualifiedNamespaceSpecifierContext(_ctx, getState());
		enterRule(_localctx, 210, RULE_qualifiedNamespaceSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1477);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,147,_ctx) ) {
			case 1:
				{
				setState(1476);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1479);
			namespaceName();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UsingDeclarationContext extends ParserRuleContext {
		public TerminalNode Using() { return getToken(CppParser.Using, 0); }
		public UsingDeclaratorListContext usingDeclaratorList() {
			return getRuleContext(UsingDeclaratorListContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public UsingDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_usingDeclaration; }
	}

	public final UsingDeclarationContext usingDeclaration() throws RecognitionException {
		UsingDeclarationContext _localctx = new UsingDeclarationContext(_ctx, getState());
		enterRule(_localctx, 212, RULE_usingDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1481);
			match(Using);
			setState(1482);
			usingDeclaratorList(0);
			setState(1483);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UsingDeclaratorListContext extends ParserRuleContext {
		public UsingDeclaratorContext usingDeclarator() {
			return getRuleContext(UsingDeclaratorContext.class,0);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public UsingDeclaratorListContext usingDeclaratorList() {
			return getRuleContext(UsingDeclaratorListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public UsingDeclaratorListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_usingDeclaratorList; }
	}

	public final UsingDeclaratorListContext usingDeclaratorList() throws RecognitionException {
		return usingDeclaratorList(0);
	}

	private UsingDeclaratorListContext usingDeclaratorList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		UsingDeclaratorListContext _localctx = new UsingDeclaratorListContext(_ctx, _parentState);
		UsingDeclaratorListContext _prevctx = _localctx;
		int _startState = 214;
		enterRecursionRule(_localctx, 214, RULE_usingDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1486);
			usingDeclarator();
			setState(1488);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,148,_ctx) ) {
			case 1:
				{
				setState(1487);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(1498);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,150,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new UsingDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_usingDeclaratorList);
					setState(1490);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1491);
					match(Comma);
					setState(1492);
					usingDeclarator();
					setState(1494);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,149,_ctx) ) {
					case 1:
						{
						setState(1493);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(1500);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,150,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class UsingDeclaratorContext extends ParserRuleContext {
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public UnqualifiedIdentifierContext unqualifiedIdentifier() {
			return getRuleContext(UnqualifiedIdentifierContext.class,0);
		}
		public TypeNameContext typeName() {
			return getRuleContext(TypeNameContext.class,0);
		}
		public UsingDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_usingDeclarator; }
	}

	public final UsingDeclaratorContext usingDeclarator() throws RecognitionException {
		UsingDeclaratorContext _localctx = new UsingDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 216, RULE_usingDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1502);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,151,_ctx) ) {
			case 1:
				{
				setState(1501);
				typeName();
				}
				break;
			}
			setState(1504);
			nestedNameSpecifier();
			setState(1505);
			unqualifiedIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UsingDirectiveContext extends ParserRuleContext {
		public TerminalNode Using() { return getToken(CppParser.Using, 0); }
		public TerminalNode Namespace() { return getToken(CppParser.Namespace, 0); }
		public NamespaceNameContext namespaceName() {
			return getRuleContext(NamespaceNameContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public UsingDirectiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_usingDirective; }
	}

	public final UsingDirectiveContext usingDirective() throws RecognitionException {
		UsingDirectiveContext _localctx = new UsingDirectiveContext(_ctx, getState());
		enterRule(_localctx, 218, RULE_usingDirective);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1508);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1507);
				attributeSpecifierSequence(0);
				}
			}

			setState(1510);
			match(Using);
			setState(1511);
			match(Namespace);
			setState(1513);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,153,_ctx) ) {
			case 1:
				{
				setState(1512);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1515);
			namespaceName();
			setState(1516);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AsmDefinitionContext extends ParserRuleContext {
		public TerminalNode Asm() { return getToken(CppParser.Asm, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TerminalNode StringLiteral() { return getToken(CppParser.StringLiteral, 0); }
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public AsmDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_asmDefinition; }
	}

	public final AsmDefinitionContext asmDefinition() throws RecognitionException {
		AsmDefinitionContext _localctx = new AsmDefinitionContext(_ctx, getState());
		enterRule(_localctx, 220, RULE_asmDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1519);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1518);
				attributeSpecifierSequence(0);
				}
			}

			setState(1521);
			match(Asm);
			setState(1522);
			match(OpenParenthesis);
			setState(1523);
			match(StringLiteral);
			setState(1524);
			match(CloseParenthesis);
			setState(1525);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LinkageSpecificationContext extends ParserRuleContext {
		public TerminalNode Extern() { return getToken(CppParser.Extern, 0); }
		public TerminalNode StringLiteral() { return getToken(CppParser.StringLiteral, 0); }
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public TerminalNode CloseBrace() { return getToken(CppParser.CloseBrace, 0); }
		public DeclarationSequenceContext declarationSequence() {
			return getRuleContext(DeclarationSequenceContext.class,0);
		}
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public LinkageSpecificationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_linkageSpecification; }
	}

	public final LinkageSpecificationContext linkageSpecification() throws RecognitionException {
		LinkageSpecificationContext _localctx = new LinkageSpecificationContext(_ctx, getState());
		enterRule(_localctx, 222, RULE_linkageSpecification);
		int _la;
		try {
			setState(1537);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,156,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1527);
				match(Extern);
				setState(1528);
				match(StringLiteral);
				setState(1529);
				match(OpenBrace);
				setState(1531);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (OpenParenthesis - 65)) | (1L << (Semicolon - 65)) | (1L << (Ellipsis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (Tilde - 65)) | (1L << (DoubleAmpersand - 65)))) != 0) || _la==Identifier) {
					{
					setState(1530);
					declarationSequence(0);
					}
				}

				setState(1533);
				match(CloseBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1534);
				match(Extern);
				setState(1535);
				match(StringLiteral);
				setState(1536);
				declaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributeSpecifierSequenceContext extends ParserRuleContext {
		public AttributeSpecifierContext attributeSpecifier() {
			return getRuleContext(AttributeSpecifierContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public AttributeSpecifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeSpecifierSequence; }
	}

	public final AttributeSpecifierSequenceContext attributeSpecifierSequence() throws RecognitionException {
		return attributeSpecifierSequence(0);
	}

	private AttributeSpecifierSequenceContext attributeSpecifierSequence(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		AttributeSpecifierSequenceContext _localctx = new AttributeSpecifierSequenceContext(_ctx, _parentState);
		AttributeSpecifierSequenceContext _prevctx = _localctx;
		int _startState = 224;
		enterRecursionRule(_localctx, 224, RULE_attributeSpecifierSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1540);
			attributeSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(1546);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,157,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AttributeSpecifierSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_attributeSpecifierSequence);
					setState(1542);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1543);
					attributeSpecifier();
					}
					} 
				}
				setState(1548);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,157,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class AttributeSpecifierContext extends ParserRuleContext {
		public List<TerminalNode> OpenBracket() { return getTokens(CppParser.OpenBracket); }
		public TerminalNode OpenBracket(int i) {
			return getToken(CppParser.OpenBracket, i);
		}
		public AttributeListContext attributeList() {
			return getRuleContext(AttributeListContext.class,0);
		}
		public List<TerminalNode> CloseBracket() { return getTokens(CppParser.CloseBracket); }
		public TerminalNode CloseBracket(int i) {
			return getToken(CppParser.CloseBracket, i);
		}
		public AttributeUsingPrefixContext attributeUsingPrefix() {
			return getRuleContext(AttributeUsingPrefixContext.class,0);
		}
		public AlignmentSpecifierContext alignmentSpecifier() {
			return getRuleContext(AlignmentSpecifierContext.class,0);
		}
		public AttributeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeSpecifier; }
	}

	public final AttributeSpecifierContext attributeSpecifier() throws RecognitionException {
		AttributeSpecifierContext _localctx = new AttributeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 226, RULE_attributeSpecifier);
		try {
			setState(1559);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1549);
				match(OpenBracket);
				setState(1550);
				match(OpenBracket);
				setState(1552);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,158,_ctx) ) {
				case 1:
					{
					setState(1551);
					attributeUsingPrefix();
					}
					break;
				}
				setState(1554);
				attributeList(0);
				setState(1555);
				match(CloseBracket);
				setState(1556);
				match(CloseBracket);
				}
				break;
			case AlignAs:
				enterOuterAlt(_localctx, 2);
				{
				setState(1558);
				alignmentSpecifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AlignmentSpecifierContext extends ParserRuleContext {
		public TerminalNode AlignAs() { return getToken(CppParser.AlignAs, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public List<TerminalNode> CloseParenthesis() { return getTokens(CppParser.CloseParenthesis); }
		public TerminalNode CloseParenthesis(int i) {
			return getToken(CppParser.CloseParenthesis, i);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public AlignmentSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_alignmentSpecifier; }
	}

	public final AlignmentSpecifierContext alignmentSpecifier() throws RecognitionException {
		AlignmentSpecifierContext _localctx = new AlignmentSpecifierContext(_ctx, getState());
		enterRule(_localctx, 228, RULE_alignmentSpecifier);
		int _la;
		try {
			setState(1577);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,162,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1561);
				match(AlignAs);
				setState(1562);
				match(OpenParenthesis);
				setState(1563);
				typeIdentifier();
				setState(1565);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1564);
					match(Ellipsis);
					}
				}

				setState(1567);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1569);
				match(AlignAs);
				setState(1570);
				match(CloseParenthesis);
				setState(1571);
				constantExpression();
				setState(1573);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1572);
					match(Ellipsis);
					}
				}

				setState(1575);
				match(CloseParenthesis);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributeUsingPrefixContext extends ParserRuleContext {
		public TerminalNode Using() { return getToken(CppParser.Using, 0); }
		public AttributeNamespaceContext attributeNamespace() {
			return getRuleContext(AttributeNamespaceContext.class,0);
		}
		public TerminalNode Colon() { return getToken(CppParser.Colon, 0); }
		public AttributeUsingPrefixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeUsingPrefix; }
	}

	public final AttributeUsingPrefixContext attributeUsingPrefix() throws RecognitionException {
		AttributeUsingPrefixContext _localctx = new AttributeUsingPrefixContext(_ctx, getState());
		enterRule(_localctx, 230, RULE_attributeUsingPrefix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1579);
			match(Using);
			setState(1580);
			attributeNamespace();
			setState(1581);
			match(Colon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributeListContext extends ParserRuleContext {
		public AttributeContext attribute() {
			return getRuleContext(AttributeContext.class,0);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public AttributeListContext attributeList() {
			return getRuleContext(AttributeListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public AttributeListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeList; }
	}

	public final AttributeListContext attributeList() throws RecognitionException {
		return attributeList(0);
	}

	private AttributeListContext attributeList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		AttributeListContext _localctx = new AttributeListContext(_ctx, _parentState);
		AttributeListContext _prevctx = _localctx;
		int _startState = 232;
		enterRecursionRule(_localctx, 232, RULE_attributeList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1590);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,164,_ctx) ) {
			case 1:
				{
				setState(1585);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,163,_ctx) ) {
				case 1:
					{
					setState(1584);
					attribute();
					}
					break;
				}
				}
				break;
			case 2:
				{
				setState(1587);
				attribute();
				setState(1588);
				match(Ellipsis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1604);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,167,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1602);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,166,_ctx) ) {
					case 1:
						{
						_localctx = new AttributeListContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_attributeList);
						setState(1592);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1593);
						match(Comma);
						setState(1595);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,165,_ctx) ) {
						case 1:
							{
							setState(1594);
							attribute();
							}
							break;
						}
						}
						break;
					case 2:
						{
						_localctx = new AttributeListContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_attributeList);
						setState(1597);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1598);
						match(Comma);
						setState(1599);
						attribute();
						setState(1600);
						match(Ellipsis);
						}
						break;
					}
					} 
				}
				setState(1606);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,167,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class AttributeContext extends ParserRuleContext {
		public AttributeTokenContext attributeToken() {
			return getRuleContext(AttributeTokenContext.class,0);
		}
		public AttributeArgumentClauseContext attributeArgumentClause() {
			return getRuleContext(AttributeArgumentClauseContext.class,0);
		}
		public AttributeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attribute; }
	}

	public final AttributeContext attribute() throws RecognitionException {
		AttributeContext _localctx = new AttributeContext(_ctx, getState());
		enterRule(_localctx, 234, RULE_attribute);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1607);
			attributeToken();
			setState(1609);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,168,_ctx) ) {
			case 1:
				{
				setState(1608);
				attributeArgumentClause();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributeTokenContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public AttributeScopedTokenContext attributeScopedToken() {
			return getRuleContext(AttributeScopedTokenContext.class,0);
		}
		public AttributeTokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeToken; }
	}

	public final AttributeTokenContext attributeToken() throws RecognitionException {
		AttributeTokenContext _localctx = new AttributeTokenContext(_ctx, getState());
		enterRule(_localctx, 236, RULE_attributeToken);
		try {
			setState(1613);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,169,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1611);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1612);
				attributeScopedToken();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributeScopedTokenContext extends ParserRuleContext {
		public AttributeNamespaceContext attributeNamespace() {
			return getRuleContext(AttributeNamespaceContext.class,0);
		}
		public TerminalNode DoubleColon() { return getToken(CppParser.DoubleColon, 0); }
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public AttributeScopedTokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeScopedToken; }
	}

	public final AttributeScopedTokenContext attributeScopedToken() throws RecognitionException {
		AttributeScopedTokenContext _localctx = new AttributeScopedTokenContext(_ctx, getState());
		enterRule(_localctx, 238, RULE_attributeScopedToken);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1615);
			attributeNamespace();
			setState(1616);
			match(DoubleColon);
			setState(1617);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributeNamespaceContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public AttributeNamespaceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeNamespace; }
	}

	public final AttributeNamespaceContext attributeNamespace() throws RecognitionException {
		AttributeNamespaceContext _localctx = new AttributeNamespaceContext(_ctx, getState());
		enterRule(_localctx, 240, RULE_attributeNamespace);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1619);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributeArgumentClauseContext extends ParserRuleContext {
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public BalancedTokenSequenceContext balancedTokenSequence() {
			return getRuleContext(BalancedTokenSequenceContext.class,0);
		}
		public AttributeArgumentClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeArgumentClause; }
	}

	public final AttributeArgumentClauseContext attributeArgumentClause() throws RecognitionException {
		AttributeArgumentClauseContext _localctx = new AttributeArgumentClauseContext(_ctx, getState());
		enterRule(_localctx, 242, RULE_attributeArgumentClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1621);
			match(OpenParenthesis);
			setState(1623);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Preprocessor) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (ArrowAsterisk - 128)) | (1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
				{
				setState(1622);
				balancedTokenSequence(0);
				}
			}

			setState(1625);
			match(CloseParenthesis);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BalancedTokenSequenceContext extends ParserRuleContext {
		public BalancedTokenContext balancedToken() {
			return getRuleContext(BalancedTokenContext.class,0);
		}
		public BalancedTokenSequenceContext balancedTokenSequence() {
			return getRuleContext(BalancedTokenSequenceContext.class,0);
		}
		public BalancedTokenSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_balancedTokenSequence; }
	}

	public final BalancedTokenSequenceContext balancedTokenSequence() throws RecognitionException {
		return balancedTokenSequence(0);
	}

	private BalancedTokenSequenceContext balancedTokenSequence(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BalancedTokenSequenceContext _localctx = new BalancedTokenSequenceContext(_ctx, _parentState);
		BalancedTokenSequenceContext _prevctx = _localctx;
		int _startState = 244;
		enterRecursionRule(_localctx, 244, RULE_balancedTokenSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1628);
			balancedToken();
			}
			_ctx.stop = _input.LT(-1);
			setState(1634);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,171,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BalancedTokenSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_balancedTokenSequence);
					setState(1630);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1631);
					balancedToken();
					}
					} 
				}
				setState(1636);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,171,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class BalancedTokenContext extends ParserRuleContext {
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public BalancedTokenSequenceContext balancedTokenSequence() {
			return getRuleContext(BalancedTokenSequenceContext.class,0);
		}
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public TerminalNode CloseBrace() { return getToken(CppParser.CloseBrace, 0); }
		public NonBalancedTokenContext nonBalancedToken() {
			return getRuleContext(NonBalancedTokenContext.class,0);
		}
		public BalancedTokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_balancedToken; }
	}

	public final BalancedTokenContext balancedToken() throws RecognitionException {
		BalancedTokenContext _localctx = new BalancedTokenContext(_ctx, getState());
		enterRule(_localctx, 246, RULE_balancedToken);
		int _la;
		try {
			setState(1653);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1637);
				match(OpenParenthesis);
				setState(1639);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Preprocessor) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (ArrowAsterisk - 128)) | (1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1638);
					balancedTokenSequence(0);
					}
				}

				setState(1641);
				match(CloseParenthesis);
				}
				break;
			case OpenBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1642);
				match(OpenBracket);
				setState(1644);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Preprocessor) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (ArrowAsterisk - 128)) | (1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1643);
					balancedTokenSequence(0);
					}
				}

				setState(1646);
				match(CloseBracket);
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 3);
				{
				setState(1647);
				match(OpenBrace);
				setState(1649);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Preprocessor) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (ArrowAsterisk - 128)) | (1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1648);
					balancedTokenSequence(0);
					}
				}

				setState(1651);
				match(CloseBrace);
				}
				break;
			case BlockComment:
			case LineComment:
			case Whitespace:
			case Preprocessor:
			case Newline:
			case AlignAs:
			case AlignOf:
			case Asm:
			case Auto:
			case Bool:
			case Break:
			case Case:
			case Catch:
			case Char:
			case Char8:
			case Char16:
			case Char32:
			case Class:
			case Const:
			case ConstExpr:
			case ConstCast:
			case Continue:
			case DeclType:
			case Default:
			case Delete:
			case Do:
			case Double:
			case DynamicCast:
			case Else:
			case Enum:
			case Explicit:
			case Export:
			case Extern:
			case False:
			case Float:
			case For:
			case Friend:
			case GoTo:
			case If:
			case Inline:
			case Int:
			case Long:
			case Mutable:
			case Namespace:
			case New:
			case NoExcept:
			case Nullptr:
			case Operator:
			case Private:
			case Protected:
			case Public:
			case Register:
			case ReinterpretCast:
			case Return:
			case Short:
			case Signed:
			case SizeOf:
			case Static:
			case StaticAssert:
			case StaticCast:
			case Struct:
			case Switch:
			case Template:
			case This:
			case ThreadLocal:
			case Throw:
			case True:
			case Try:
			case TypeDef:
			case TypeId:
			case TypeName:
			case Union:
			case Unsigned:
			case Using:
			case Virtual:
			case Void:
			case Volatile:
			case WChar:
			case While:
			case Override:
			case Final:
			case Semicolon:
			case Colon:
			case Ellipsis:
			case QuestionMark:
			case DoubleColon:
			case Period:
			case PeriodAsterisk:
			case Plus:
			case Minus:
			case Asterisk:
			case ForwardSlash:
			case Percent:
			case Caret:
			case Ampersand:
			case VerticalBar:
			case Tilde:
			case ExclamationMark:
			case Equal:
			case LessThan:
			case GreaterThan:
			case PlusEqual:
			case MinusEqual:
			case AsteriskEqual:
			case ForwardSlashEqual:
			case PercentEqual:
			case CaretEqual:
			case AmpersandEqual:
			case VerticalBarEqual:
			case DoubleLessThan:
			case DoubleLessThanEqual:
			case DoubleGreaterThanEqual:
			case DoubleEqual:
			case ExclamationMarkEqual:
			case LessThanEqual:
			case GreaterThanEqual:
			case DoubleAmpersand:
			case DoubleVerticalBar:
			case DoublePlus:
			case DoubleMinus:
			case Comma:
			case ArrowAsterisk:
			case Arrow:
			case Zero:
			case IntegerLiteral:
			case FloatingPointLiteral:
			case CharacterLiteral:
			case StringLiteral:
			case UserDefinedIntegerLiteral:
			case UserDefinedFloatingPointLiteral:
			case UserDefinedCharacterLiteral:
			case UserDefinedStringLiteral:
			case Identifier:
				enterOuterAlt(_localctx, 4);
				{
				setState(1652);
				nonBalancedToken();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NonBalancedTokenContext extends ParserRuleContext {
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public TerminalNode CloseBrace() { return getToken(CppParser.CloseBrace, 0); }
		public NonBalancedTokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nonBalancedToken; }
	}

	public final NonBalancedTokenContext nonBalancedToken() throws RecognitionException {
		NonBalancedTokenContext _localctx = new NonBalancedTokenContext(_ctx, getState());
		enterRule(_localctx, 248, RULE_nonBalancedToken);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1655);
			_la = _input.LA(1);
			if ( _la <= 0 || (((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (OpenBrace - 82)) | (1L << (CloseBrace - 82)) | (1L << (OpenBracket - 82)) | (1L << (CloseBracket - 82)) | (1L << (OpenParenthesis - 82)) | (1L << (CloseParenthesis - 82)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerDeclaratorListContext extends ParserRuleContext {
		public InitializerDeclaratorContext initializerDeclarator() {
			return getRuleContext(InitializerDeclaratorContext.class,0);
		}
		public InitializerDeclaratorListContext initializerDeclaratorList() {
			return getRuleContext(InitializerDeclaratorListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public InitializerDeclaratorListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializerDeclaratorList; }
	}

	public final InitializerDeclaratorListContext initializerDeclaratorList() throws RecognitionException {
		return initializerDeclaratorList(0);
	}

	private InitializerDeclaratorListContext initializerDeclaratorList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		InitializerDeclaratorListContext _localctx = new InitializerDeclaratorListContext(_ctx, _parentState);
		InitializerDeclaratorListContext _prevctx = _localctx;
		int _startState = 250;
		enterRecursionRule(_localctx, 250, RULE_initializerDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1658);
			initializerDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(1665);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,176,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerDeclaratorList);
					setState(1660);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1661);
					match(Comma);
					setState(1662);
					initializerDeclarator();
					}
					} 
				}
				setState(1667);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,176,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class InitializerDeclaratorContext extends ParserRuleContext {
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public InitializerContext initializer() {
			return getRuleContext(InitializerContext.class,0);
		}
		public InitializerDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializerDeclarator; }
	}

	public final InitializerDeclaratorContext initializerDeclarator() throws RecognitionException {
		InitializerDeclaratorContext _localctx = new InitializerDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 252, RULE_initializerDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1668);
			declarator();
			setState(1670);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,177,_ctx) ) {
			case 1:
				{
				setState(1669);
				initializer();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclaratorContext extends ParserRuleContext {
		public PointerDeclaratorContext pointerDeclarator() {
			return getRuleContext(PointerDeclaratorContext.class,0);
		}
		public NoPointerDeclaratorContext noPointerDeclarator() {
			return getRuleContext(NoPointerDeclaratorContext.class,0);
		}
		public DeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarator; }
	}

	public final DeclaratorContext declarator() throws RecognitionException {
		DeclaratorContext _localctx = new DeclaratorContext(_ctx, getState());
		enterRule(_localctx, 254, RULE_declarator);
		try {
			setState(1674);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,178,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1672);
				pointerDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1673);
				noPointerDeclarator(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PointerDeclaratorContext extends ParserRuleContext {
		public PointerOperatorContext pointerOperator() {
			return getRuleContext(PointerOperatorContext.class,0);
		}
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public PointerDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pointerDeclarator; }
	}

	public final PointerDeclaratorContext pointerDeclarator() throws RecognitionException {
		PointerDeclaratorContext _localctx = new PointerDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 256, RULE_pointerDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1676);
			pointerOperator();
			setState(1677);
			declarator();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoPointerDeclaratorContext extends ParserRuleContext {
		public IdentifierExpressionContext identifierExpression() {
			return getRuleContext(IdentifierExpressionContext.class,0);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public PointerDeclaratorContext pointerDeclarator() {
			return getRuleContext(PointerDeclaratorContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public NoPointerDeclaratorContext noPointerDeclarator() {
			return getRuleContext(NoPointerDeclaratorContext.class,0);
		}
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public ParametersAndQualifiersContext parametersAndQualifiers() {
			return getRuleContext(ParametersAndQualifiersContext.class,0);
		}
		public NoPointerDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noPointerDeclarator; }
	}

	public final NoPointerDeclaratorContext noPointerDeclarator() throws RecognitionException {
		return noPointerDeclarator(0);
	}

	private NoPointerDeclaratorContext noPointerDeclarator(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		NoPointerDeclaratorContext _localctx = new NoPointerDeclaratorContext(_ctx, _parentState);
		NoPointerDeclaratorContext _prevctx = _localctx;
		int _startState = 258;
		enterRecursionRule(_localctx, 258, RULE_noPointerDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1691);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DeclType:
			case Operator:
			case Ellipsis:
			case DoubleColon:
			case Tilde:
			case Identifier:
				{
				setState(1681);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1680);
					match(Ellipsis);
					}
				}

				setState(1683);
				identifierExpression();
				setState(1685);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,180,_ctx) ) {
				case 1:
					{
					setState(1684);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case OpenParenthesis:
				{
				setState(1687);
				match(OpenParenthesis);
				setState(1688);
				pointerDeclarator();
				setState(1689);
				match(CloseParenthesis);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1706);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,185,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1704);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,184,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerDeclarator);
						setState(1693);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1694);
						match(OpenBracket);
						setState(1696);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
							{
							setState(1695);
							constantExpression();
							}
						}

						setState(1698);
						match(CloseBracket);
						setState(1700);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,183,_ctx) ) {
						case 1:
							{
							setState(1699);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					case 2:
						{
						_localctx = new NoPointerDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerDeclarator);
						setState(1702);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1703);
						parametersAndQualifiers();
						}
						break;
					}
					} 
				}
				setState(1708);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,185,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ParametersAndQualifiersContext extends ParserRuleContext {
		public FunctionParametersContext functionParameters() {
			return getRuleContext(FunctionParametersContext.class,0);
		}
		public FunctionQualifiersContext functionQualifiers() {
			return getRuleContext(FunctionQualifiersContext.class,0);
		}
		public ParametersAndQualifiersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parametersAndQualifiers; }
	}

	public final ParametersAndQualifiersContext parametersAndQualifiers() throws RecognitionException {
		ParametersAndQualifiersContext _localctx = new ParametersAndQualifiersContext(_ctx, getState());
		enterRule(_localctx, 260, RULE_parametersAndQualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1709);
			functionParameters();
			setState(1710);
			functionQualifiers();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionParametersContext extends ParserRuleContext {
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ParameterDeclarationClauseContext parameterDeclarationClause() {
			return getRuleContext(ParameterDeclarationClauseContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public FunctionParametersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionParameters; }
	}

	public final FunctionParametersContext functionParameters() throws RecognitionException {
		FunctionParametersContext _localctx = new FunctionParametersContext(_ctx, getState());
		enterRule(_localctx, 262, RULE_functionParameters);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1712);
			match(OpenParenthesis);
			setState(1713);
			parameterDeclarationClause();
			setState(1714);
			match(CloseParenthesis);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionQualifiersContext extends ParserRuleContext {
		public ConstVolatileQualifierSequenceContext constVolatileQualifierSequence() {
			return getRuleContext(ConstVolatileQualifierSequenceContext.class,0);
		}
		public ReferenceQualifierContext referenceQualifier() {
			return getRuleContext(ReferenceQualifierContext.class,0);
		}
		public NoExceptionSpecifierContext noExceptionSpecifier() {
			return getRuleContext(NoExceptionSpecifierContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public FunctionQualifiersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionQualifiers; }
	}

	public final FunctionQualifiersContext functionQualifiers() throws RecognitionException {
		FunctionQualifiersContext _localctx = new FunctionQualifiersContext(_ctx, getState());
		enterRule(_localctx, 264, RULE_functionQualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1717);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,186,_ctx) ) {
			case 1:
				{
				setState(1716);
				constVolatileQualifierSequence();
				}
				break;
			}
			setState(1720);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,187,_ctx) ) {
			case 1:
				{
				setState(1719);
				referenceQualifier();
				}
				break;
			}
			setState(1723);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,188,_ctx) ) {
			case 1:
				{
				setState(1722);
				noExceptionSpecifier();
				}
				break;
			}
			setState(1726);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,189,_ctx) ) {
			case 1:
				{
				setState(1725);
				attributeSpecifierSequence(0);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TrailingReturnTypeContext extends ParserRuleContext {
		public TerminalNode Arrow() { return getToken(CppParser.Arrow, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TrailingReturnTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_trailingReturnType; }
	}

	public final TrailingReturnTypeContext trailingReturnType() throws RecognitionException {
		TrailingReturnTypeContext _localctx = new TrailingReturnTypeContext(_ctx, getState());
		enterRule(_localctx, 266, RULE_trailingReturnType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1728);
			match(Arrow);
			setState(1729);
			typeIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PointerOperatorContext extends ParserRuleContext {
		public TerminalNode Asterisk() { return getToken(CppParser.Asterisk, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public ConstVolatileQualifierSequenceContext constVolatileQualifierSequence() {
			return getRuleContext(ConstVolatileQualifierSequenceContext.class,0);
		}
		public TerminalNode Ampersand() { return getToken(CppParser.Ampersand, 0); }
		public TerminalNode DoubleAmpersand() { return getToken(CppParser.DoubleAmpersand, 0); }
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public PointerOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pointerOperator; }
	}

	public final PointerOperatorContext pointerOperator() throws RecognitionException {
		PointerOperatorContext _localctx = new PointerOperatorContext(_ctx, getState());
		enterRule(_localctx, 268, RULE_pointerOperator);
		try {
			setState(1754);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Asterisk:
				enterOuterAlt(_localctx, 1);
				{
				setState(1731);
				match(Asterisk);
				setState(1733);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,190,_ctx) ) {
				case 1:
					{
					setState(1732);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1736);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,191,_ctx) ) {
				case 1:
					{
					setState(1735);
					constVolatileQualifierSequence();
					}
					break;
				}
				}
				break;
			case Ampersand:
				enterOuterAlt(_localctx, 2);
				{
				setState(1738);
				match(Ampersand);
				setState(1740);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,192,_ctx) ) {
				case 1:
					{
					setState(1739);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case DoubleAmpersand:
				enterOuterAlt(_localctx, 3);
				{
				setState(1742);
				match(DoubleAmpersand);
				setState(1744);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,193,_ctx) ) {
				case 1:
					{
					setState(1743);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case DeclType:
			case DoubleColon:
			case Identifier:
				enterOuterAlt(_localctx, 4);
				{
				setState(1746);
				nestedNameSpecifier();
				setState(1747);
				match(Asterisk);
				setState(1749);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,194,_ctx) ) {
				case 1:
					{
					setState(1748);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1752);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,195,_ctx) ) {
				case 1:
					{
					setState(1751);
					constVolatileQualifierSequence();
					}
					break;
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstVolatileQualifierSequenceContext extends ParserRuleContext {
		public ConstVolatileQualifierContext constVolatileQualifier() {
			return getRuleContext(ConstVolatileQualifierContext.class,0);
		}
		public ConstVolatileQualifierSequenceContext constVolatileQualifierSequence() {
			return getRuleContext(ConstVolatileQualifierSequenceContext.class,0);
		}
		public ConstVolatileQualifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constVolatileQualifierSequence; }
	}

	public final ConstVolatileQualifierSequenceContext constVolatileQualifierSequence() throws RecognitionException {
		ConstVolatileQualifierSequenceContext _localctx = new ConstVolatileQualifierSequenceContext(_ctx, getState());
		enterRule(_localctx, 270, RULE_constVolatileQualifierSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1756);
			constVolatileQualifier();
			setState(1758);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,197,_ctx) ) {
			case 1:
				{
				setState(1757);
				constVolatileQualifierSequence();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstVolatileQualifierContext extends ParserRuleContext {
		public TerminalNode Const() { return getToken(CppParser.Const, 0); }
		public TerminalNode Volatile() { return getToken(CppParser.Volatile, 0); }
		public ConstVolatileQualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constVolatileQualifier; }
	}

	public final ConstVolatileQualifierContext constVolatileQualifier() throws RecognitionException {
		ConstVolatileQualifierContext _localctx = new ConstVolatileQualifierContext(_ctx, getState());
		enterRule(_localctx, 272, RULE_constVolatileQualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1760);
			_la = _input.LA(1);
			if ( !(_la==Const || _la==Volatile) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ReferenceQualifierContext extends ParserRuleContext {
		public TerminalNode Ampersand() { return getToken(CppParser.Ampersand, 0); }
		public TerminalNode DoubleAmpersand() { return getToken(CppParser.DoubleAmpersand, 0); }
		public ReferenceQualifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_referenceQualifier; }
	}

	public final ReferenceQualifierContext referenceQualifier() throws RecognitionException {
		ReferenceQualifierContext _localctx = new ReferenceQualifierContext(_ctx, getState());
		enterRule(_localctx, 274, RULE_referenceQualifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1762);
			match(Ampersand);
			setState(1763);
			match(DoubleAmpersand);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeIdentifierContext extends ParserRuleContext {
		public TypeSpecifierSequenceContext typeSpecifierSequence() {
			return getRuleContext(TypeSpecifierSequenceContext.class,0);
		}
		public AbstractDeclaratorContext abstractDeclarator() {
			return getRuleContext(AbstractDeclaratorContext.class,0);
		}
		public TypeIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeIdentifier; }
	}

	public final TypeIdentifierContext typeIdentifier() throws RecognitionException {
		TypeIdentifierContext _localctx = new TypeIdentifierContext(_ctx, getState());
		enterRule(_localctx, 276, RULE_typeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1765);
			typeSpecifierSequence();
			setState(1767);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,198,_ctx) ) {
			case 1:
				{
				setState(1766);
				abstractDeclarator();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DefiningTypeIdentifierContext extends ParserRuleContext {
		public DefiningTypeSpecifierSequenceContext definingTypeSpecifierSequence() {
			return getRuleContext(DefiningTypeSpecifierSequenceContext.class,0);
		}
		public AbstractDeclaratorContext abstractDeclarator() {
			return getRuleContext(AbstractDeclaratorContext.class,0);
		}
		public DefiningTypeIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definingTypeIdentifier; }
	}

	public final DefiningTypeIdentifierContext definingTypeIdentifier() throws RecognitionException {
		DefiningTypeIdentifierContext _localctx = new DefiningTypeIdentifierContext(_ctx, getState());
		enterRule(_localctx, 278, RULE_definingTypeIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1769);
			definingTypeSpecifierSequence();
			setState(1771);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || ((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (OpenBracket - 84)) | (1L << (OpenParenthesis - 84)) | (1L << (Ellipsis - 84)) | (1L << (DoubleColon - 84)) | (1L << (Asterisk - 84)) | (1L << (Ampersand - 84)) | (1L << (DoubleAmpersand - 84)) | (1L << (Identifier - 84)))) != 0)) {
				{
				setState(1770);
				abstractDeclarator();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AbstractDeclaratorContext extends ParserRuleContext {
		public PointerAbstractDeclaratorContext pointerAbstractDeclarator() {
			return getRuleContext(PointerAbstractDeclaratorContext.class,0);
		}
		public ParametersAndQualifiersContext parametersAndQualifiers() {
			return getRuleContext(ParametersAndQualifiersContext.class,0);
		}
		public TrailingReturnTypeContext trailingReturnType() {
			return getRuleContext(TrailingReturnTypeContext.class,0);
		}
		public NoPointerAbstractDeclaratorContext noPointerAbstractDeclarator() {
			return getRuleContext(NoPointerAbstractDeclaratorContext.class,0);
		}
		public AbstractPackDeclaratorContext abstractPackDeclarator() {
			return getRuleContext(AbstractPackDeclaratorContext.class,0);
		}
		public AbstractDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_abstractDeclarator; }
	}

	public final AbstractDeclaratorContext abstractDeclarator() throws RecognitionException {
		AbstractDeclaratorContext _localctx = new AbstractDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 280, RULE_abstractDeclarator);
		try {
			setState(1781);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,201,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1773);
				pointerAbstractDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1775);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,200,_ctx) ) {
				case 1:
					{
					setState(1774);
					noPointerAbstractDeclarator(0);
					}
					break;
				}
				setState(1777);
				parametersAndQualifiers();
				setState(1778);
				trailingReturnType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1780);
				abstractPackDeclarator();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PointerAbstractDeclaratorContext extends ParserRuleContext {
		public NoPointerAbstractDeclaratorContext noPointerAbstractDeclarator() {
			return getRuleContext(NoPointerAbstractDeclaratorContext.class,0);
		}
		public PointerOperatorContext pointerOperator() {
			return getRuleContext(PointerOperatorContext.class,0);
		}
		public PointerAbstractDeclaratorContext pointerAbstractDeclarator() {
			return getRuleContext(PointerAbstractDeclaratorContext.class,0);
		}
		public PointerAbstractDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pointerAbstractDeclarator; }
	}

	public final PointerAbstractDeclaratorContext pointerAbstractDeclarator() throws RecognitionException {
		PointerAbstractDeclaratorContext _localctx = new PointerAbstractDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 282, RULE_pointerAbstractDeclarator);
		try {
			setState(1788);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenBracket:
			case OpenParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1783);
				noPointerAbstractDeclarator(0);
				}
				break;
			case DeclType:
			case DoubleColon:
			case Asterisk:
			case Ampersand:
			case DoubleAmpersand:
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(1784);
				pointerOperator();
				setState(1786);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,202,_ctx) ) {
				case 1:
					{
					setState(1785);
					pointerAbstractDeclarator();
					}
					break;
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoPointerAbstractDeclaratorContext extends ParserRuleContext {
		public ParametersAndQualifiersContext parametersAndQualifiers() {
			return getRuleContext(ParametersAndQualifiersContext.class,0);
		}
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public PointerAbstractDeclaratorContext pointerAbstractDeclarator() {
			return getRuleContext(PointerAbstractDeclaratorContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public NoPointerAbstractDeclaratorContext noPointerAbstractDeclarator() {
			return getRuleContext(NoPointerAbstractDeclaratorContext.class,0);
		}
		public NoPointerAbstractDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noPointerAbstractDeclarator; }
	}

	public final NoPointerAbstractDeclaratorContext noPointerAbstractDeclarator() throws RecognitionException {
		return noPointerAbstractDeclarator(0);
	}

	private NoPointerAbstractDeclaratorContext noPointerAbstractDeclarator(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		NoPointerAbstractDeclaratorContext _localctx = new NoPointerAbstractDeclaratorContext(_ctx, _parentState);
		NoPointerAbstractDeclaratorContext _prevctx = _localctx;
		int _startState = 284;
		enterRecursionRule(_localctx, 284, RULE_noPointerAbstractDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1804);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,206,_ctx) ) {
			case 1:
				{
				setState(1791);
				parametersAndQualifiers();
				}
				break;
			case 2:
				{
				setState(1792);
				match(OpenBracket);
				setState(1794);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(1793);
					constantExpression();
					}
				}

				setState(1796);
				match(CloseBracket);
				setState(1798);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,205,_ctx) ) {
				case 1:
					{
					setState(1797);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 3:
				{
				setState(1800);
				match(OpenParenthesis);
				setState(1801);
				pointerAbstractDeclarator();
				setState(1802);
				match(CloseParenthesis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1819);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,210,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1817);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,209,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1806);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1807);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1808);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1809);
						match(OpenBracket);
						setState(1811);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
							{
							setState(1810);
							constantExpression();
							}
						}

						setState(1813);
						match(CloseBracket);
						setState(1815);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,208,_ctx) ) {
						case 1:
							{
							setState(1814);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1821);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,210,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class AbstractPackDeclaratorContext extends ParserRuleContext {
		public NoPointerAbstractPackDeclaratorContext noPointerAbstractPackDeclarator() {
			return getRuleContext(NoPointerAbstractPackDeclaratorContext.class,0);
		}
		public PointerOperatorContext pointerOperator() {
			return getRuleContext(PointerOperatorContext.class,0);
		}
		public AbstractPackDeclaratorContext abstractPackDeclarator() {
			return getRuleContext(AbstractPackDeclaratorContext.class,0);
		}
		public AbstractPackDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_abstractPackDeclarator; }
	}

	public final AbstractPackDeclaratorContext abstractPackDeclarator() throws RecognitionException {
		AbstractPackDeclaratorContext _localctx = new AbstractPackDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 286, RULE_abstractPackDeclarator);
		try {
			setState(1826);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ellipsis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1822);
				noPointerAbstractPackDeclarator(0);
				}
				break;
			case DeclType:
			case DoubleColon:
			case Asterisk:
			case Ampersand:
			case DoubleAmpersand:
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(1823);
				pointerOperator();
				setState(1824);
				abstractPackDeclarator();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoPointerAbstractPackDeclaratorContext extends ParserRuleContext {
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public NoPointerAbstractPackDeclaratorContext noPointerAbstractPackDeclarator() {
			return getRuleContext(NoPointerAbstractPackDeclaratorContext.class,0);
		}
		public ParametersAndQualifiersContext parametersAndQualifiers() {
			return getRuleContext(ParametersAndQualifiersContext.class,0);
		}
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public NoPointerAbstractPackDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noPointerAbstractPackDeclarator; }
	}

	public final NoPointerAbstractPackDeclaratorContext noPointerAbstractPackDeclarator() throws RecognitionException {
		return noPointerAbstractPackDeclarator(0);
	}

	private NoPointerAbstractPackDeclaratorContext noPointerAbstractPackDeclarator(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		NoPointerAbstractPackDeclaratorContext _localctx = new NoPointerAbstractPackDeclaratorContext(_ctx, _parentState);
		NoPointerAbstractPackDeclaratorContext _prevctx = _localctx;
		int _startState = 288;
		enterRecursionRule(_localctx, 288, RULE_noPointerAbstractPackDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1829);
			match(Ellipsis);
			}
			_ctx.stop = _input.LT(-1);
			setState(1844);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,215,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1842);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,214,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1831);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1832);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1833);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1834);
						match(OpenBracket);
						setState(1836);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
							{
							setState(1835);
							constantExpression();
							}
						}

						setState(1838);
						match(CloseBracket);
						setState(1840);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,213,_ctx) ) {
						case 1:
							{
							setState(1839);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1846);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,215,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ParameterDeclarationClauseContext extends ParserRuleContext {
		public ParameterDeclarationListContext parameterDeclarationList() {
			return getRuleContext(ParameterDeclarationListContext.class,0);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public ParameterDeclarationClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterDeclarationClause; }
	}

	public final ParameterDeclarationClauseContext parameterDeclarationClause() throws RecognitionException {
		ParameterDeclarationClauseContext _localctx = new ParameterDeclarationClauseContext(_ctx, getState());
		enterRule(_localctx, 290, RULE_parameterDeclarationClause);
		int _la;
		try {
			setState(1857);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,218,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1848);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << Struct))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (DoubleColon - 65)))) != 0) || _la==Identifier) {
					{
					setState(1847);
					parameterDeclarationList(0);
					}
				}

				setState(1851);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1850);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1853);
				parameterDeclarationList(0);
				setState(1854);
				match(Comma);
				setState(1855);
				match(Ellipsis);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterDeclarationListContext extends ParserRuleContext {
		public ParameterDeclarationContext parameterDeclaration() {
			return getRuleContext(ParameterDeclarationContext.class,0);
		}
		public ParameterDeclarationListContext parameterDeclarationList() {
			return getRuleContext(ParameterDeclarationListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public ParameterDeclarationListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterDeclarationList; }
	}

	public final ParameterDeclarationListContext parameterDeclarationList() throws RecognitionException {
		return parameterDeclarationList(0);
	}

	private ParameterDeclarationListContext parameterDeclarationList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ParameterDeclarationListContext _localctx = new ParameterDeclarationListContext(_ctx, _parentState);
		ParameterDeclarationListContext _prevctx = _localctx;
		int _startState = 292;
		enterRecursionRule(_localctx, 292, RULE_parameterDeclarationList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1860);
			parameterDeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1867);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,219,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ParameterDeclarationListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_parameterDeclarationList);
					setState(1862);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1863);
					match(Comma);
					setState(1864);
					parameterDeclaration();
					}
					} 
				}
				setState(1869);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,219,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ParameterDeclarationContext extends ParserRuleContext {
		public DeclarationSpecifierSequenceContext declarationSpecifierSequence() {
			return getRuleContext(DeclarationSpecifierSequenceContext.class,0);
		}
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public InitializerClauseContext initializerClause() {
			return getRuleContext(InitializerClauseContext.class,0);
		}
		public ParameterDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterDeclaration; }
	}

	public final ParameterDeclarationContext parameterDeclaration() throws RecognitionException {
		ParameterDeclarationContext _localctx = new ParameterDeclarationContext(_ctx, getState());
		enterRule(_localctx, 294, RULE_parameterDeclaration);
		int _la;
		try {
			setState(1884);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,222,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1871);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1870);
					attributeSpecifierSequence(0);
					}
				}

				setState(1873);
				declarationSpecifierSequence();
				setState(1874);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1877);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1876);
					attributeSpecifierSequence(0);
					}
				}

				setState(1879);
				declarationSpecifierSequence();
				setState(1880);
				declarator();
				setState(1881);
				match(Equal);
				setState(1882);
				initializerClause();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionDefinitionContext extends ParserRuleContext {
		public FunctionDeclaratorContext functionDeclarator() {
			return getRuleContext(FunctionDeclaratorContext.class,0);
		}
		public FunctionBodyContext functionBody() {
			return getRuleContext(FunctionBodyContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public DeclarationSpecifierSequenceContext declarationSpecifierSequence() {
			return getRuleContext(DeclarationSpecifierSequenceContext.class,0);
		}
		public VirtualSpecifierSequenceContext virtualSpecifierSequence() {
			return getRuleContext(VirtualSpecifierSequenceContext.class,0);
		}
		public FunctionDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDefinition; }
	}

	public final FunctionDefinitionContext functionDefinition() throws RecognitionException {
		FunctionDefinitionContext _localctx = new FunctionDefinitionContext(_ctx, getState());
		enterRule(_localctx, 296, RULE_functionDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1887);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1886);
				attributeSpecifierSequence(0);
				}
			}

			setState(1890);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,224,_ctx) ) {
			case 1:
				{
				setState(1889);
				declarationSpecifierSequence();
				}
				break;
			}
			setState(1892);
			functionDeclarator();
			setState(1894);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Override || _la==Final) {
				{
				setState(1893);
				virtualSpecifierSequence(0);
				}
			}

			setState(1896);
			functionBody();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionDeclaratorContext extends ParserRuleContext {
		public IdentifierExpressionContext identifierExpression() {
			return getRuleContext(IdentifierExpressionContext.class,0);
		}
		public FunctionParametersContext functionParameters() {
			return getRuleContext(FunctionParametersContext.class,0);
		}
		public FunctionQualifiersContext functionQualifiers() {
			return getRuleContext(FunctionQualifiersContext.class,0);
		}
		public TrailingReturnTypeContext trailingReturnType() {
			return getRuleContext(TrailingReturnTypeContext.class,0);
		}
		public FunctionDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDeclarator; }
	}

	public final FunctionDeclaratorContext functionDeclarator() throws RecognitionException {
		FunctionDeclaratorContext _localctx = new FunctionDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 298, RULE_functionDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1898);
			identifierExpression();
			setState(1899);
			functionParameters();
			setState(1900);
			functionQualifiers();
			setState(1902);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(1901);
				trailingReturnType();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionBodyContext extends ParserRuleContext {
		public RegularFunctionBodyContext regularFunctionBody() {
			return getRuleContext(RegularFunctionBodyContext.class,0);
		}
		public FunctionTryBlockContext functionTryBlock() {
			return getRuleContext(FunctionTryBlockContext.class,0);
		}
		public ExplicitlyDefaultedFunctionContext explicitlyDefaultedFunction() {
			return getRuleContext(ExplicitlyDefaultedFunctionContext.class,0);
		}
		public DeletedFunctionContext deletedFunction() {
			return getRuleContext(DeletedFunctionContext.class,0);
		}
		public FunctionBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionBody; }
	}

	public final FunctionBodyContext functionBody() throws RecognitionException {
		FunctionBodyContext _localctx = new FunctionBodyContext(_ctx, getState());
		enterRule(_localctx, 300, RULE_functionBody);
		try {
			setState(1908);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,227,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1904);
				regularFunctionBody();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1905);
				functionTryBlock();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1906);
				explicitlyDefaultedFunction();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1907);
				deletedFunction();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RegularFunctionBodyContext extends ParserRuleContext {
		public CompoundStatementContext compoundStatement() {
			return getRuleContext(CompoundStatementContext.class,0);
		}
		public ConstructorInitializerContext constructorInitializer() {
			return getRuleContext(ConstructorInitializerContext.class,0);
		}
		public RegularFunctionBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_regularFunctionBody; }
	}

	public final RegularFunctionBodyContext regularFunctionBody() throws RecognitionException {
		RegularFunctionBodyContext _localctx = new RegularFunctionBodyContext(_ctx, getState());
		enterRule(_localctx, 302, RULE_regularFunctionBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1911);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1910);
				constructorInitializer();
				}
			}

			setState(1913);
			compoundStatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExplicitlyDefaultedFunctionContext extends ParserRuleContext {
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public TerminalNode Default() { return getToken(CppParser.Default, 0); }
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public ExplicitlyDefaultedFunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_explicitlyDefaultedFunction; }
	}

	public final ExplicitlyDefaultedFunctionContext explicitlyDefaultedFunction() throws RecognitionException {
		ExplicitlyDefaultedFunctionContext _localctx = new ExplicitlyDefaultedFunctionContext(_ctx, getState());
		enterRule(_localctx, 304, RULE_explicitlyDefaultedFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1915);
			match(Equal);
			setState(1916);
			match(Default);
			setState(1917);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeletedFunctionContext extends ParserRuleContext {
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public TerminalNode Delete() { return getToken(CppParser.Delete, 0); }
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public DeletedFunctionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_deletedFunction; }
	}

	public final DeletedFunctionContext deletedFunction() throws RecognitionException {
		DeletedFunctionContext _localctx = new DeletedFunctionContext(_ctx, getState());
		enterRule(_localctx, 306, RULE_deletedFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1919);
			match(Equal);
			setState(1920);
			match(Delete);
			setState(1921);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerContext extends ParserRuleContext {
		public BraceOrEqualInitializerContext braceOrEqualInitializer() {
			return getRuleContext(BraceOrEqualInitializerContext.class,0);
		}
		public InitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializer; }
	}

	public final InitializerContext initializer() throws RecognitionException {
		InitializerContext _localctx = new InitializerContext(_ctx, getState());
		enterRule(_localctx, 308, RULE_initializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1923);
			braceOrEqualInitializer();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BraceOrEqualInitializerContext extends ParserRuleContext {
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public InitializerClauseContext initializerClause() {
			return getRuleContext(InitializerClauseContext.class,0);
		}
		public BracedInitializerListContext bracedInitializerList() {
			return getRuleContext(BracedInitializerListContext.class,0);
		}
		public BraceOrEqualInitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_braceOrEqualInitializer; }
	}

	public final BraceOrEqualInitializerContext braceOrEqualInitializer() throws RecognitionException {
		BraceOrEqualInitializerContext _localctx = new BraceOrEqualInitializerContext(_ctx, getState());
		enterRule(_localctx, 310, RULE_braceOrEqualInitializer);
		try {
			setState(1928);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Equal:
				enterOuterAlt(_localctx, 1);
				{
				setState(1925);
				match(Equal);
				setState(1926);
				initializerClause();
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(1927);
				bracedInitializerList();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerClauseContext extends ParserRuleContext {
		public AssignmentExpressionContext assignmentExpression() {
			return getRuleContext(AssignmentExpressionContext.class,0);
		}
		public BracedInitializerListContext bracedInitializerList() {
			return getRuleContext(BracedInitializerListContext.class,0);
		}
		public InitializerClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializerClause; }
	}

	public final InitializerClauseContext initializerClause() throws RecognitionException {
		InitializerClauseContext _localctx = new InitializerClauseContext(_ctx, getState());
		enterRule(_localctx, 312, RULE_initializerClause);
		try {
			setState(1932);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AlignOf:
			case Auto:
			case Bool:
			case Char:
			case Char8:
			case Char16:
			case Char32:
			case ConstCast:
			case DeclType:
			case Delete:
			case Double:
			case DynamicCast:
			case False:
			case Float:
			case Int:
			case Long:
			case New:
			case NoExcept:
			case Nullptr:
			case Operator:
			case ReinterpretCast:
			case Short:
			case Signed:
			case SizeOf:
			case StaticCast:
			case This:
			case Throw:
			case True:
			case TypeId:
			case TypeName:
			case Unsigned:
			case Void:
			case WChar:
			case OpenBracket:
			case OpenParenthesis:
			case DoubleColon:
			case Plus:
			case Minus:
			case Asterisk:
			case Ampersand:
			case VerticalBar:
			case Tilde:
			case ExclamationMark:
			case DoublePlus:
			case DoubleMinus:
			case Zero:
			case IntegerLiteral:
			case FloatingPointLiteral:
			case CharacterLiteral:
			case StringLiteral:
			case UserDefinedIntegerLiteral:
			case UserDefinedFloatingPointLiteral:
			case UserDefinedCharacterLiteral:
			case UserDefinedStringLiteral:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(1930);
				assignmentExpression();
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(1931);
				bracedInitializerList();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InitializerListContext extends ParserRuleContext {
		public InitializerClauseContext initializerClause() {
			return getRuleContext(InitializerClauseContext.class,0);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public InitializerListContext initializerList() {
			return getRuleContext(InitializerListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public InitializerListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_initializerList; }
	}

	public final InitializerListContext initializerList() throws RecognitionException {
		return initializerList(0);
	}

	private InitializerListContext initializerList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		InitializerListContext _localctx = new InitializerListContext(_ctx, _parentState);
		InitializerListContext _prevctx = _localctx;
		int _startState = 314;
		enterRecursionRule(_localctx, 314, RULE_initializerList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1935);
			initializerClause();
			setState(1937);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,231,_ctx) ) {
			case 1:
				{
				setState(1936);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(1947);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,233,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerList);
					setState(1939);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1940);
					match(Comma);
					setState(1941);
					initializerClause();
					setState(1943);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,232,_ctx) ) {
					case 1:
						{
						setState(1942);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(1949);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,233,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class BracedInitializerListContext extends ParserRuleContext {
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public InitializerListContext initializerList() {
			return getRuleContext(InitializerListContext.class,0);
		}
		public TerminalNode CloseBrace() { return getToken(CppParser.CloseBrace, 0); }
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public BracedInitializerListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bracedInitializerList; }
	}

	public final BracedInitializerListContext bracedInitializerList() throws RecognitionException {
		BracedInitializerListContext _localctx = new BracedInitializerListContext(_ctx, getState());
		enterRule(_localctx, 316, RULE_bracedInitializerList);
		int _la;
		try {
			setState(1959);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,235,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1950);
				match(OpenBrace);
				setState(1951);
				initializerList(0);
				setState(1953);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(1952);
					match(Comma);
					}
				}

				setState(1955);
				match(CloseBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1957);
				match(OpenBrace);
				setState(1958);
				match(CloseBrace);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionOrBracedInitializerListContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public BracedInitializerListContext bracedInitializerList() {
			return getRuleContext(BracedInitializerListContext.class,0);
		}
		public ExpressionOrBracedInitializerListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionOrBracedInitializerList; }
	}

	public final ExpressionOrBracedInitializerListContext expressionOrBracedInitializerList() throws RecognitionException {
		ExpressionOrBracedInitializerListContext _localctx = new ExpressionOrBracedInitializerListContext(_ctx, getState());
		enterRule(_localctx, 318, RULE_expressionOrBracedInitializerList);
		try {
			setState(1963);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AlignOf:
			case Auto:
			case Bool:
			case Char:
			case Char8:
			case Char16:
			case Char32:
			case ConstCast:
			case DeclType:
			case Delete:
			case Double:
			case DynamicCast:
			case False:
			case Float:
			case Int:
			case Long:
			case New:
			case NoExcept:
			case Nullptr:
			case Operator:
			case ReinterpretCast:
			case Short:
			case Signed:
			case SizeOf:
			case StaticCast:
			case This:
			case Throw:
			case True:
			case TypeId:
			case TypeName:
			case Unsigned:
			case Void:
			case WChar:
			case OpenBracket:
			case OpenParenthesis:
			case DoubleColon:
			case Plus:
			case Minus:
			case Asterisk:
			case Ampersand:
			case VerticalBar:
			case Tilde:
			case ExclamationMark:
			case DoublePlus:
			case DoubleMinus:
			case Zero:
			case IntegerLiteral:
			case FloatingPointLiteral:
			case CharacterLiteral:
			case StringLiteral:
			case UserDefinedIntegerLiteral:
			case UserDefinedFloatingPointLiteral:
			case UserDefinedCharacterLiteral:
			case UserDefinedStringLiteral:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(1961);
				expression(0);
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(1962);
				bracedInitializerList();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassSpecifierContext extends ParserRuleContext {
		public ClassHeadContext classHead() {
			return getRuleContext(ClassHeadContext.class,0);
		}
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public TerminalNode CloseBrace() { return getToken(CppParser.CloseBrace, 0); }
		public MemberSpecificationContext memberSpecification() {
			return getRuleContext(MemberSpecificationContext.class,0);
		}
		public ClassSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classSpecifier; }
	}

	public final ClassSpecifierContext classSpecifier() throws RecognitionException {
		ClassSpecifierContext _localctx = new ClassSpecifierContext(_ctx, getState());
		enterRule(_localctx, 320, RULE_classSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1965);
			classHead();
			setState(1966);
			match(OpenBrace);
			setState(1968);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (Semicolon - 65)) | (1L << (DoubleColon - 65)) | (1L << (Tilde - 65)))) != 0) || _la==Identifier) {
				{
				setState(1967);
				memberSpecification();
				}
			}

			setState(1970);
			match(CloseBrace);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassHeadContext extends ParserRuleContext {
		public ClassKeyContext classKey() {
			return getRuleContext(ClassKeyContext.class,0);
		}
		public ClassHeadNameContext classHeadName() {
			return getRuleContext(ClassHeadNameContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public ClassVirtualSpecifierContext classVirtualSpecifier() {
			return getRuleContext(ClassVirtualSpecifierContext.class,0);
		}
		public BaseClauseContext baseClause() {
			return getRuleContext(BaseClauseContext.class,0);
		}
		public AttributeSpecifierContext attributeSpecifier() {
			return getRuleContext(AttributeSpecifierContext.class,0);
		}
		public ClassHeadContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classHead; }
	}

	public final ClassHeadContext classHead() throws RecognitionException {
		ClassHeadContext _localctx = new ClassHeadContext(_ctx, getState());
		enterRule(_localctx, 322, RULE_classHead);
		int _la;
		try {
			setState(1990);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,243,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1972);
				classKey();
				setState(1974);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1973);
					attributeSpecifierSequence(0);
					}
				}

				setState(1976);
				classHeadName();
				setState(1978);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Final) {
					{
					setState(1977);
					classVirtualSpecifier();
					}
				}

				setState(1981);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(1980);
					baseClause();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1983);
				classKey();
				setState(1985);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1984);
					attributeSpecifier();
					}
				}

				setState(1988);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(1987);
					baseClause();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassHeadNameContext extends ParserRuleContext {
		public ClassNameContext className() {
			return getRuleContext(ClassNameContext.class,0);
		}
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public ClassHeadNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classHeadName; }
	}

	public final ClassHeadNameContext classHeadName() throws RecognitionException {
		ClassHeadNameContext _localctx = new ClassHeadNameContext(_ctx, getState());
		enterRule(_localctx, 324, RULE_classHeadName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1993);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,244,_ctx) ) {
			case 1:
				{
				setState(1992);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1995);
			className();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassVirtualSpecifierContext extends ParserRuleContext {
		public TerminalNode Final() { return getToken(CppParser.Final, 0); }
		public ClassVirtualSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classVirtualSpecifier; }
	}

	public final ClassVirtualSpecifierContext classVirtualSpecifier() throws RecognitionException {
		ClassVirtualSpecifierContext _localctx = new ClassVirtualSpecifierContext(_ctx, getState());
		enterRule(_localctx, 326, RULE_classVirtualSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1997);
			match(Final);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassKeyContext extends ParserRuleContext {
		public TerminalNode Class() { return getToken(CppParser.Class, 0); }
		public TerminalNode Struct() { return getToken(CppParser.Struct, 0); }
		public TerminalNode Union() { return getToken(CppParser.Union, 0); }
		public ClassKeyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classKey; }
	}

	public final ClassKeyContext classKey() throws RecognitionException {
		ClassKeyContext _localctx = new ClassKeyContext(_ctx, getState());
		enterRule(_localctx, 328, RULE_classKey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1999);
			_la = _input.LA(1);
			if ( !(((((_la - 18)) & ~0x3f) == 0 && ((1L << (_la - 18)) & ((1L << (Class - 18)) | (1L << (Struct - 18)) | (1L << (Union - 18)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MemberSpecificationContext extends ParserRuleContext {
		public MemberDeclarationContext memberDeclaration() {
			return getRuleContext(MemberDeclarationContext.class,0);
		}
		public MemberSpecificationContext memberSpecification() {
			return getRuleContext(MemberSpecificationContext.class,0);
		}
		public AccessSpecifierContext accessSpecifier() {
			return getRuleContext(AccessSpecifierContext.class,0);
		}
		public TerminalNode Colon() { return getToken(CppParser.Colon, 0); }
		public MemberSpecificationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberSpecification; }
	}

	public final MemberSpecificationContext memberSpecification() throws RecognitionException {
		MemberSpecificationContext _localctx = new MemberSpecificationContext(_ctx, getState());
		enterRule(_localctx, 330, RULE_memberSpecification);
		int _la;
		try {
			setState(2010);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AlignAs:
			case Auto:
			case Bool:
			case Char:
			case Char8:
			case Char16:
			case Char32:
			case Class:
			case Const:
			case ConstExpr:
			case DeclType:
			case Double:
			case Enum:
			case Explicit:
			case Extern:
			case Float:
			case Friend:
			case Inline:
			case Int:
			case Long:
			case Mutable:
			case Operator:
			case Short:
			case Signed:
			case Static:
			case StaticAssert:
			case Struct:
			case Template:
			case ThreadLocal:
			case TypeDef:
			case TypeName:
			case Union:
			case Unsigned:
			case Using:
			case Virtual:
			case Void:
			case Volatile:
			case WChar:
			case OpenBracket:
			case Semicolon:
			case DoubleColon:
			case Tilde:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(2001);
				memberDeclaration();
				setState(2003);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (Semicolon - 65)) | (1L << (DoubleColon - 65)) | (1L << (Tilde - 65)))) != 0) || _la==Identifier) {
					{
					setState(2002);
					memberSpecification();
					}
				}

				}
				break;
			case Private:
			case Protected:
			case Public:
				enterOuterAlt(_localctx, 2);
				{
				setState(2005);
				accessSpecifier();
				setState(2006);
				match(Colon);
				setState(2008);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (Semicolon - 65)) | (1L << (DoubleColon - 65)) | (1L << (Tilde - 65)))) != 0) || _la==Identifier) {
					{
					setState(2007);
					memberSpecification();
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MemberDeclarationContext extends ParserRuleContext {
		public DeclarationSpecifierSequenceContext declarationSpecifierSequence() {
			return getRuleContext(DeclarationSpecifierSequenceContext.class,0);
		}
		public MemberDeclaratorListContext memberDeclaratorList() {
			return getRuleContext(MemberDeclaratorListContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public FunctionDefinitionContext functionDefinition() {
			return getRuleContext(FunctionDefinitionContext.class,0);
		}
		public UsingDeclarationContext usingDeclaration() {
			return getRuleContext(UsingDeclarationContext.class,0);
		}
		public StaticAssertDeclarationContext staticAssertDeclaration() {
			return getRuleContext(StaticAssertDeclarationContext.class,0);
		}
		public TemplateDeclarationContext templateDeclaration() {
			return getRuleContext(TemplateDeclarationContext.class,0);
		}
		public DeductionGuideContext deductionGuide() {
			return getRuleContext(DeductionGuideContext.class,0);
		}
		public AliasDeclarationContext aliasDeclaration() {
			return getRuleContext(AliasDeclarationContext.class,0);
		}
		public EmptyDeclarationContext emptyDeclaration() {
			return getRuleContext(EmptyDeclarationContext.class,0);
		}
		public MemberDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberDeclaration; }
	}

	public final MemberDeclarationContext memberDeclaration() throws RecognitionException {
		MemberDeclarationContext _localctx = new MemberDeclarationContext(_ctx, getState());
		enterRule(_localctx, 332, RULE_memberDeclaration);
		int _la;
		try {
			setState(2026);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,249,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2013);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2012);
					attributeSpecifierSequence(0);
					}
				}

				setState(2015);
				declarationSpecifierSequence();
				setState(2016);
				memberDeclaratorList(0);
				setState(2017);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2019);
				functionDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2020);
				usingDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2021);
				staticAssertDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2022);
				templateDeclaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2023);
				deductionGuide();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2024);
				aliasDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2025);
				emptyDeclaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MemberDeclaratorListContext extends ParserRuleContext {
		public MemberDeclaratorContext memberDeclarator() {
			return getRuleContext(MemberDeclaratorContext.class,0);
		}
		public MemberDeclaratorListContext memberDeclaratorList() {
			return getRuleContext(MemberDeclaratorListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public MemberDeclaratorListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberDeclaratorList; }
	}

	public final MemberDeclaratorListContext memberDeclaratorList() throws RecognitionException {
		return memberDeclaratorList(0);
	}

	private MemberDeclaratorListContext memberDeclaratorList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		MemberDeclaratorListContext _localctx = new MemberDeclaratorListContext(_ctx, _parentState);
		MemberDeclaratorListContext _prevctx = _localctx;
		int _startState = 334;
		enterRecursionRule(_localctx, 334, RULE_memberDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2029);
			memberDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(2036);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,250,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberDeclaratorList);
					setState(2031);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2032);
					match(Comma);
					setState(2033);
					memberDeclarator();
					}
					} 
				}
				setState(2038);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,250,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class MemberDeclaratorContext extends ParserRuleContext {
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public VirtualSpecifierSequenceContext virtualSpecifierSequence() {
			return getRuleContext(VirtualSpecifierSequenceContext.class,0);
		}
		public BraceOrEqualInitializerContext braceOrEqualInitializer() {
			return getRuleContext(BraceOrEqualInitializerContext.class,0);
		}
		public TerminalNode Colon() { return getToken(CppParser.Colon, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public MemberDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberDeclarator; }
	}

	public final MemberDeclaratorContext memberDeclarator() throws RecognitionException {
		MemberDeclaratorContext _localctx = new MemberDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 336, RULE_memberDeclarator);
		int _la;
		try {
			setState(2054);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,254,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2039);
				declarator();
				setState(2041);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,251,_ctx) ) {
				case 1:
					{
					setState(2040);
					virtualSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2043);
				declarator();
				setState(2044);
				braceOrEqualInitializer();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2047);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2046);
					match(Identifier);
					}
				}

				setState(2050);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2049);
					attributeSpecifierSequence(0);
					}
				}

				setState(2052);
				match(Colon);
				setState(2053);
				constantExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VirtualSpecifierSequenceContext extends ParserRuleContext {
		public VirtualSpecifierContext virtualSpecifier() {
			return getRuleContext(VirtualSpecifierContext.class,0);
		}
		public VirtualSpecifierSequenceContext virtualSpecifierSequence() {
			return getRuleContext(VirtualSpecifierSequenceContext.class,0);
		}
		public VirtualSpecifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_virtualSpecifierSequence; }
	}

	public final VirtualSpecifierSequenceContext virtualSpecifierSequence() throws RecognitionException {
		return virtualSpecifierSequence(0);
	}

	private VirtualSpecifierSequenceContext virtualSpecifierSequence(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		VirtualSpecifierSequenceContext _localctx = new VirtualSpecifierSequenceContext(_ctx, _parentState);
		VirtualSpecifierSequenceContext _prevctx = _localctx;
		int _startState = 338;
		enterRecursionRule(_localctx, 338, RULE_virtualSpecifierSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2057);
			virtualSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(2063);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,255,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new VirtualSpecifierSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_virtualSpecifierSequence);
					setState(2059);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2060);
					virtualSpecifier();
					}
					} 
				}
				setState(2065);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,255,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class VirtualSpecifierContext extends ParserRuleContext {
		public TerminalNode Override() { return getToken(CppParser.Override, 0); }
		public TerminalNode Final() { return getToken(CppParser.Final, 0); }
		public VirtualSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_virtualSpecifier; }
	}

	public final VirtualSpecifierContext virtualSpecifier() throws RecognitionException {
		VirtualSpecifierContext _localctx = new VirtualSpecifierContext(_ctx, getState());
		enterRule(_localctx, 340, RULE_virtualSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2066);
			_la = _input.LA(1);
			if ( !(_la==Override || _la==Final) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PureSpecifierContext extends ParserRuleContext {
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public TerminalNode Zero() { return getToken(CppParser.Zero, 0); }
		public PureSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pureSpecifier; }
	}

	public final PureSpecifierContext pureSpecifier() throws RecognitionException {
		PureSpecifierContext _localctx = new PureSpecifierContext(_ctx, getState());
		enterRule(_localctx, 342, RULE_pureSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2068);
			match(Equal);
			setState(2069);
			match(Zero);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BaseClauseContext extends ParserRuleContext {
		public TerminalNode Colon() { return getToken(CppParser.Colon, 0); }
		public BaseSpecifierListContext baseSpecifierList() {
			return getRuleContext(BaseSpecifierListContext.class,0);
		}
		public BaseClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_baseClause; }
	}

	public final BaseClauseContext baseClause() throws RecognitionException {
		BaseClauseContext _localctx = new BaseClauseContext(_ctx, getState());
		enterRule(_localctx, 344, RULE_baseClause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2071);
			match(Colon);
			setState(2072);
			baseSpecifierList(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BaseSpecifierListContext extends ParserRuleContext {
		public BaseSpecifierContext baseSpecifier() {
			return getRuleContext(BaseSpecifierContext.class,0);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public BaseSpecifierListContext baseSpecifierList() {
			return getRuleContext(BaseSpecifierListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public BaseSpecifierListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_baseSpecifierList; }
	}

	public final BaseSpecifierListContext baseSpecifierList() throws RecognitionException {
		return baseSpecifierList(0);
	}

	private BaseSpecifierListContext baseSpecifierList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BaseSpecifierListContext _localctx = new BaseSpecifierListContext(_ctx, _parentState);
		BaseSpecifierListContext _prevctx = _localctx;
		int _startState = 346;
		enterRecursionRule(_localctx, 346, RULE_baseSpecifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2075);
			baseSpecifier();
			setState(2077);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,256,_ctx) ) {
			case 1:
				{
				setState(2076);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2087);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,258,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BaseSpecifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_baseSpecifierList);
					setState(2079);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2080);
					match(Comma);
					setState(2081);
					baseSpecifier();
					setState(2083);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,257,_ctx) ) {
					case 1:
						{
						setState(2082);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2089);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,258,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class BaseSpecifierContext extends ParserRuleContext {
		public ClassOrDecltypeContext classOrDecltype() {
			return getRuleContext(ClassOrDecltypeContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TerminalNode Virtual() { return getToken(CppParser.Virtual, 0); }
		public AccessSpecifierContext accessSpecifier() {
			return getRuleContext(AccessSpecifierContext.class,0);
		}
		public BaseSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_baseSpecifier; }
	}

	public final BaseSpecifierContext baseSpecifier() throws RecognitionException {
		BaseSpecifierContext _localctx = new BaseSpecifierContext(_ctx, getState());
		enterRule(_localctx, 348, RULE_baseSpecifier);
		int _la;
		try {
			setState(2111);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,264,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2091);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2090);
					attributeSpecifierSequence(0);
					}
				}

				setState(2093);
				classOrDecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2095);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2094);
					attributeSpecifierSequence(0);
					}
				}

				setState(2097);
				match(Virtual);
				setState(2099);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Private) | (1L << Protected) | (1L << Public))) != 0)) {
					{
					setState(2098);
					accessSpecifier();
					}
				}

				setState(2101);
				classOrDecltype();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2103);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2102);
					attributeSpecifierSequence(0);
					}
				}

				setState(2105);
				accessSpecifier();
				setState(2107);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Virtual) {
					{
					setState(2106);
					match(Virtual);
					}
				}

				setState(2109);
				classOrDecltype();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClassOrDecltypeContext extends ParserRuleContext {
		public ClassNameContext className() {
			return getRuleContext(ClassNameContext.class,0);
		}
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public SimpleTemplateIdentifierContext simpleTemplateIdentifier() {
			return getRuleContext(SimpleTemplateIdentifierContext.class,0);
		}
		public DeclarationTypeSpecifierContext declarationTypeSpecifier() {
			return getRuleContext(DeclarationTypeSpecifierContext.class,0);
		}
		public ClassOrDecltypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classOrDecltype; }
	}

	public final ClassOrDecltypeContext classOrDecltype() throws RecognitionException {
		ClassOrDecltypeContext _localctx = new ClassOrDecltypeContext(_ctx, getState());
		enterRule(_localctx, 350, RULE_classOrDecltype);
		try {
			setState(2122);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,266,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2114);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,265,_ctx) ) {
				case 1:
					{
					setState(2113);
					nestedNameSpecifier();
					}
					break;
				}
				setState(2116);
				className();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2117);
				nestedNameSpecifier();
				setState(2118);
				match(Template);
				setState(2119);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2121);
				declarationTypeSpecifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AccessSpecifierContext extends ParserRuleContext {
		public TerminalNode Private() { return getToken(CppParser.Private, 0); }
		public TerminalNode Protected() { return getToken(CppParser.Protected, 0); }
		public TerminalNode Public() { return getToken(CppParser.Public, 0); }
		public AccessSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_accessSpecifier; }
	}

	public final AccessSpecifierContext accessSpecifier() throws RecognitionException {
		AccessSpecifierContext _localctx = new AccessSpecifierContext(_ctx, getState());
		enterRule(_localctx, 352, RULE_accessSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2124);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Private) | (1L << Protected) | (1L << Public))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConversionFunctionIdentifierContext extends ParserRuleContext {
		public TerminalNode Operator() { return getToken(CppParser.Operator, 0); }
		public ConversionTypeIdentifierContext conversionTypeIdentifier() {
			return getRuleContext(ConversionTypeIdentifierContext.class,0);
		}
		public ConversionFunctionIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conversionFunctionIdentifier; }
	}

	public final ConversionFunctionIdentifierContext conversionFunctionIdentifier() throws RecognitionException {
		ConversionFunctionIdentifierContext _localctx = new ConversionFunctionIdentifierContext(_ctx, getState());
		enterRule(_localctx, 354, RULE_conversionFunctionIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2126);
			match(Operator);
			setState(2127);
			conversionTypeIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConversionTypeIdentifierContext extends ParserRuleContext {
		public TypeSpecifierSequenceContext typeSpecifierSequence() {
			return getRuleContext(TypeSpecifierSequenceContext.class,0);
		}
		public ConversionDeclaratorContext conversionDeclarator() {
			return getRuleContext(ConversionDeclaratorContext.class,0);
		}
		public ConversionTypeIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conversionTypeIdentifier; }
	}

	public final ConversionTypeIdentifierContext conversionTypeIdentifier() throws RecognitionException {
		ConversionTypeIdentifierContext _localctx = new ConversionTypeIdentifierContext(_ctx, getState());
		enterRule(_localctx, 356, RULE_conversionTypeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2129);
			typeSpecifierSequence();
			setState(2131);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,267,_ctx) ) {
			case 1:
				{
				setState(2130);
				conversionDeclarator();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConversionDeclaratorContext extends ParserRuleContext {
		public PointerOperatorContext pointerOperator() {
			return getRuleContext(PointerOperatorContext.class,0);
		}
		public ConversionDeclaratorContext conversionDeclarator() {
			return getRuleContext(ConversionDeclaratorContext.class,0);
		}
		public ConversionDeclaratorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conversionDeclarator; }
	}

	public final ConversionDeclaratorContext conversionDeclarator() throws RecognitionException {
		ConversionDeclaratorContext _localctx = new ConversionDeclaratorContext(_ctx, getState());
		enterRule(_localctx, 358, RULE_conversionDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2133);
			pointerOperator();
			setState(2135);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,268,_ctx) ) {
			case 1:
				{
				setState(2134);
				conversionDeclarator();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstructorInitializerContext extends ParserRuleContext {
		public TerminalNode Colon() { return getToken(CppParser.Colon, 0); }
		public MemberInitializerListContext memberInitializerList() {
			return getRuleContext(MemberInitializerListContext.class,0);
		}
		public ConstructorInitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constructorInitializer; }
	}

	public final ConstructorInitializerContext constructorInitializer() throws RecognitionException {
		ConstructorInitializerContext _localctx = new ConstructorInitializerContext(_ctx, getState());
		enterRule(_localctx, 360, RULE_constructorInitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2137);
			match(Colon);
			setState(2138);
			memberInitializerList(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MemberInitializerListContext extends ParserRuleContext {
		public MemberInitializerContext memberInitializer() {
			return getRuleContext(MemberInitializerContext.class,0);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public MemberInitializerListContext memberInitializerList() {
			return getRuleContext(MemberInitializerListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public MemberInitializerListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberInitializerList; }
	}

	public final MemberInitializerListContext memberInitializerList() throws RecognitionException {
		return memberInitializerList(0);
	}

	private MemberInitializerListContext memberInitializerList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		MemberInitializerListContext _localctx = new MemberInitializerListContext(_ctx, _parentState);
		MemberInitializerListContext _prevctx = _localctx;
		int _startState = 362;
		enterRecursionRule(_localctx, 362, RULE_memberInitializerList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2141);
			memberInitializer();
			setState(2143);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,269,_ctx) ) {
			case 1:
				{
				setState(2142);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2153);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,271,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberInitializerListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberInitializerList);
					setState(2145);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2146);
					match(Comma);
					setState(2147);
					memberInitializer();
					setState(2149);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,270,_ctx) ) {
					case 1:
						{
						setState(2148);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2155);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,271,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class MemberInitializerContext extends ParserRuleContext {
		public MemberInitializerIdentifierContext memberInitializerIdentifier() {
			return getRuleContext(MemberInitializerIdentifierContext.class,0);
		}
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public BracedInitializerListContext bracedInitializerList() {
			return getRuleContext(BracedInitializerListContext.class,0);
		}
		public MemberInitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberInitializer; }
	}

	public final MemberInitializerContext memberInitializer() throws RecognitionException {
		MemberInitializerContext _localctx = new MemberInitializerContext(_ctx, getState());
		enterRule(_localctx, 364, RULE_memberInitializer);
		int _la;
		try {
			setState(2166);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,273,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2156);
				memberInitializerIdentifier();
				setState(2157);
				match(OpenParenthesis);
				setState(2159);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(2158);
					expressionList();
					}
				}

				setState(2161);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2163);
				memberInitializerIdentifier();
				setState(2164);
				bracedInitializerList();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MemberInitializerIdentifierContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public MemberInitializerIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberInitializerIdentifier; }
	}

	public final MemberInitializerIdentifierContext memberInitializerIdentifier() throws RecognitionException {
		MemberInitializerIdentifierContext _localctx = new MemberInitializerIdentifierContext(_ctx, getState());
		enterRule(_localctx, 366, RULE_memberInitializerIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2168);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OperatorFunctionIdentifierContext extends ParserRuleContext {
		public TerminalNode Operator() { return getToken(CppParser.Operator, 0); }
		public AnyOperatorContext anyOperator() {
			return getRuleContext(AnyOperatorContext.class,0);
		}
		public OperatorFunctionIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operatorFunctionIdentifier; }
	}

	public final OperatorFunctionIdentifierContext operatorFunctionIdentifier() throws RecognitionException {
		OperatorFunctionIdentifierContext _localctx = new OperatorFunctionIdentifierContext(_ctx, getState());
		enterRule(_localctx, 368, RULE_operatorFunctionIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2170);
			match(Operator);
			setState(2171);
			anyOperator();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AnyOperatorContext extends ParserRuleContext {
		public TerminalNode New() { return getToken(CppParser.New, 0); }
		public TerminalNode Delete() { return getToken(CppParser.Delete, 0); }
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public TerminalNode Plus() { return getToken(CppParser.Plus, 0); }
		public TerminalNode Minus() { return getToken(CppParser.Minus, 0); }
		public TerminalNode Asterisk() { return getToken(CppParser.Asterisk, 0); }
		public TerminalNode ForwardSlash() { return getToken(CppParser.ForwardSlash, 0); }
		public TerminalNode Percent() { return getToken(CppParser.Percent, 0); }
		public TerminalNode Caret() { return getToken(CppParser.Caret, 0); }
		public TerminalNode Ampersand() { return getToken(CppParser.Ampersand, 0); }
		public TerminalNode VerticalBar() { return getToken(CppParser.VerticalBar, 0); }
		public TerminalNode Tilde() { return getToken(CppParser.Tilde, 0); }
		public TerminalNode ExclamationMark() { return getToken(CppParser.ExclamationMark, 0); }
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public TerminalNode LessThan() { return getToken(CppParser.LessThan, 0); }
		public TerminalNode GreaterThan() { return getToken(CppParser.GreaterThan, 0); }
		public TerminalNode PlusEqual() { return getToken(CppParser.PlusEqual, 0); }
		public TerminalNode MinusEqual() { return getToken(CppParser.MinusEqual, 0); }
		public TerminalNode AsteriskEqual() { return getToken(CppParser.AsteriskEqual, 0); }
		public TerminalNode ForwardSlashEqual() { return getToken(CppParser.ForwardSlashEqual, 0); }
		public TerminalNode PercentEqual() { return getToken(CppParser.PercentEqual, 0); }
		public TerminalNode CaretEqual() { return getToken(CppParser.CaretEqual, 0); }
		public TerminalNode AmpersandEqual() { return getToken(CppParser.AmpersandEqual, 0); }
		public TerminalNode VerticalBarEqual() { return getToken(CppParser.VerticalBarEqual, 0); }
		public TerminalNode DoubleLessThan() { return getToken(CppParser.DoubleLessThan, 0); }
		public DoubleGreaterThanContext doubleGreaterThan() {
			return getRuleContext(DoubleGreaterThanContext.class,0);
		}
		public TerminalNode DoubleGreaterThanEqual() { return getToken(CppParser.DoubleGreaterThanEqual, 0); }
		public TerminalNode DoubleLessThanEqual() { return getToken(CppParser.DoubleLessThanEqual, 0); }
		public TerminalNode DoubleEqual() { return getToken(CppParser.DoubleEqual, 0); }
		public TerminalNode ExclamationMarkEqual() { return getToken(CppParser.ExclamationMarkEqual, 0); }
		public TerminalNode LessThanEqual() { return getToken(CppParser.LessThanEqual, 0); }
		public TerminalNode GreaterThanEqual() { return getToken(CppParser.GreaterThanEqual, 0); }
		public TerminalNode DoubleAmpersand() { return getToken(CppParser.DoubleAmpersand, 0); }
		public TerminalNode DoubleVerticalBar() { return getToken(CppParser.DoubleVerticalBar, 0); }
		public TerminalNode DoublePlus() { return getToken(CppParser.DoublePlus, 0); }
		public TerminalNode DoubleMinus() { return getToken(CppParser.DoubleMinus, 0); }
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public TerminalNode ArrowAsterisk() { return getToken(CppParser.ArrowAsterisk, 0); }
		public TerminalNode Arrow() { return getToken(CppParser.Arrow, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public AnyOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_anyOperator; }
	}

	public final AnyOperatorContext anyOperator() throws RecognitionException {
		AnyOperatorContext _localctx = new AnyOperatorContext(_ctx, getState());
		enterRule(_localctx, 370, RULE_anyOperator);
		try {
			setState(2221);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,274,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2173);
				match(New);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2174);
				match(Delete);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2175);
				match(New);
				setState(2176);
				match(OpenBrace);
				setState(2177);
				match(CloseBracket);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2178);
				match(Delete);
				setState(2179);
				match(OpenBrace);
				setState(2180);
				match(CloseBracket);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2181);
				match(Plus);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2182);
				match(Minus);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2183);
				match(Asterisk);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2184);
				match(ForwardSlash);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2185);
				match(Percent);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2186);
				match(Caret);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2187);
				match(Ampersand);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(2188);
				match(VerticalBar);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(2189);
				match(Tilde);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(2190);
				match(ExclamationMark);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(2191);
				match(Equal);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(2192);
				match(LessThan);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(2193);
				match(GreaterThan);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(2194);
				match(PlusEqual);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(2195);
				match(MinusEqual);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(2196);
				match(AsteriskEqual);
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(2197);
				match(ForwardSlashEqual);
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(2198);
				match(PercentEqual);
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(2199);
				match(CaretEqual);
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(2200);
				match(AmpersandEqual);
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(2201);
				match(VerticalBarEqual);
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(2202);
				match(DoubleLessThan);
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(2203);
				doubleGreaterThan();
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(2204);
				match(DoubleGreaterThanEqual);
				}
				break;
			case 29:
				enterOuterAlt(_localctx, 29);
				{
				setState(2205);
				match(DoubleLessThanEqual);
				}
				break;
			case 30:
				enterOuterAlt(_localctx, 30);
				{
				setState(2206);
				match(DoubleEqual);
				}
				break;
			case 31:
				enterOuterAlt(_localctx, 31);
				{
				setState(2207);
				match(ExclamationMarkEqual);
				}
				break;
			case 32:
				enterOuterAlt(_localctx, 32);
				{
				setState(2208);
				match(LessThanEqual);
				}
				break;
			case 33:
				enterOuterAlt(_localctx, 33);
				{
				setState(2209);
				match(GreaterThanEqual);
				}
				break;
			case 34:
				enterOuterAlt(_localctx, 34);
				{
				setState(2210);
				match(DoubleAmpersand);
				}
				break;
			case 35:
				enterOuterAlt(_localctx, 35);
				{
				setState(2211);
				match(DoubleVerticalBar);
				}
				break;
			case 36:
				enterOuterAlt(_localctx, 36);
				{
				setState(2212);
				match(DoublePlus);
				}
				break;
			case 37:
				enterOuterAlt(_localctx, 37);
				{
				setState(2213);
				match(DoubleMinus);
				}
				break;
			case 38:
				enterOuterAlt(_localctx, 38);
				{
				setState(2214);
				match(Comma);
				}
				break;
			case 39:
				enterOuterAlt(_localctx, 39);
				{
				setState(2215);
				match(ArrowAsterisk);
				}
				break;
			case 40:
				enterOuterAlt(_localctx, 40);
				{
				setState(2216);
				match(Arrow);
				}
				break;
			case 41:
				enterOuterAlt(_localctx, 41);
				{
				setState(2217);
				match(OpenParenthesis);
				setState(2218);
				match(CloseParenthesis);
				}
				break;
			case 42:
				enterOuterAlt(_localctx, 42);
				{
				setState(2219);
				match(OpenBracket);
				setState(2220);
				match(CloseBracket);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LiteralOperatorIdentifierContext extends ParserRuleContext {
		public TerminalNode Operator() { return getToken(CppParser.Operator, 0); }
		public TerminalNode StringLiteral() { return getToken(CppParser.StringLiteral, 0); }
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode UserDefinedStringLiteral() { return getToken(CppParser.UserDefinedStringLiteral, 0); }
		public LiteralOperatorIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literalOperatorIdentifier; }
	}

	public final LiteralOperatorIdentifierContext literalOperatorIdentifier() throws RecognitionException {
		LiteralOperatorIdentifierContext _localctx = new LiteralOperatorIdentifierContext(_ctx, getState());
		enterRule(_localctx, 372, RULE_literalOperatorIdentifier);
		try {
			setState(2228);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,275,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2223);
				match(Operator);
				setState(2224);
				match(StringLiteral);
				setState(2225);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2226);
				match(Operator);
				setState(2227);
				match(UserDefinedStringLiteral);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TemplateDeclarationContext extends ParserRuleContext {
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public TerminalNode LessThan() { return getToken(CppParser.LessThan, 0); }
		public TemplateParameterListContext templateParameterList() {
			return getRuleContext(TemplateParameterListContext.class,0);
		}
		public TerminalNode GreaterThan() { return getToken(CppParser.GreaterThan, 0); }
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public TemplateDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateDeclaration; }
	}

	public final TemplateDeclarationContext templateDeclaration() throws RecognitionException {
		TemplateDeclarationContext _localctx = new TemplateDeclarationContext(_ctx, getState());
		enterRule(_localctx, 374, RULE_templateDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2230);
			match(Template);
			setState(2231);
			match(LessThan);
			setState(2232);
			templateParameterList(0);
			setState(2233);
			match(GreaterThan);
			setState(2234);
			declaration();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TemplateParameterListContext extends ParserRuleContext {
		public TemplateParameterContext templateParameter() {
			return getRuleContext(TemplateParameterContext.class,0);
		}
		public TemplateParameterListContext templateParameterList() {
			return getRuleContext(TemplateParameterListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public TemplateParameterListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateParameterList; }
	}

	public final TemplateParameterListContext templateParameterList() throws RecognitionException {
		return templateParameterList(0);
	}

	private TemplateParameterListContext templateParameterList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TemplateParameterListContext _localctx = new TemplateParameterListContext(_ctx, _parentState);
		TemplateParameterListContext _prevctx = _localctx;
		int _startState = 376;
		enterRecursionRule(_localctx, 376, RULE_templateParameterList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2237);
			templateParameter();
			}
			_ctx.stop = _input.LT(-1);
			setState(2244);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,276,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateParameterListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateParameterList);
					setState(2239);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2240);
					match(Comma);
					setState(2241);
					templateParameter();
					}
					} 
				}
				setState(2246);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,276,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class TemplateParameterContext extends ParserRuleContext {
		public TypeParameterContext typeParameter() {
			return getRuleContext(TypeParameterContext.class,0);
		}
		public ParameterDeclarationContext parameterDeclaration() {
			return getRuleContext(ParameterDeclarationContext.class,0);
		}
		public TemplateParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateParameter; }
	}

	public final TemplateParameterContext templateParameter() throws RecognitionException {
		TemplateParameterContext _localctx = new TemplateParameterContext(_ctx, getState());
		enterRule(_localctx, 378, RULE_templateParameter);
		try {
			setState(2249);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,277,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2247);
				typeParameter();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2248);
				parameterDeclaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeParameterContext extends ParserRuleContext {
		public TypeParameterKeyContext typeParameterKey() {
			return getRuleContext(TypeParameterKeyContext.class,0);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode Equal() { return getToken(CppParser.Equal, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public TerminalNode LessThan() { return getToken(CppParser.LessThan, 0); }
		public TemplateParameterListContext templateParameterList() {
			return getRuleContext(TemplateParameterListContext.class,0);
		}
		public TerminalNode GreaterThan() { return getToken(CppParser.GreaterThan, 0); }
		public IdentifierExpressionContext identifierExpression() {
			return getRuleContext(IdentifierExpressionContext.class,0);
		}
		public TypeParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeParameter; }
	}

	public final TypeParameterContext typeParameter() throws RecognitionException {
		TypeParameterContext _localctx = new TypeParameterContext(_ctx, getState());
		enterRule(_localctx, 380, RULE_typeParameter);
		int _la;
		try {
			setState(2287);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,284,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2251);
				typeParameterKey();
				setState(2253);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,278,_ctx) ) {
				case 1:
					{
					setState(2252);
					match(Ellipsis);
					}
					break;
				}
				setState(2256);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,279,_ctx) ) {
				case 1:
					{
					setState(2255);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2258);
				typeParameterKey();
				setState(2260);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2259);
					match(Identifier);
					}
				}

				setState(2262);
				match(Equal);
				setState(2263);
				typeIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2265);
				match(Template);
				setState(2266);
				match(LessThan);
				setState(2267);
				templateParameterList(0);
				setState(2268);
				match(GreaterThan);
				setState(2269);
				typeParameterKey();
				setState(2271);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,281,_ctx) ) {
				case 1:
					{
					setState(2270);
					match(Ellipsis);
					}
					break;
				}
				setState(2274);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,282,_ctx) ) {
				case 1:
					{
					setState(2273);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2276);
				match(Template);
				setState(2277);
				match(LessThan);
				setState(2278);
				templateParameterList(0);
				setState(2279);
				match(GreaterThan);
				setState(2280);
				typeParameterKey();
				setState(2282);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2281);
					match(Identifier);
					}
				}

				setState(2284);
				match(Equal);
				setState(2285);
				identifierExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeParameterKeyContext extends ParserRuleContext {
		public TerminalNode Class() { return getToken(CppParser.Class, 0); }
		public TerminalNode TypeName() { return getToken(CppParser.TypeName, 0); }
		public TypeParameterKeyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeParameterKey; }
	}

	public final TypeParameterKeyContext typeParameterKey() throws RecognitionException {
		TypeParameterKeyContext _localctx = new TypeParameterKeyContext(_ctx, getState());
		enterRule(_localctx, 382, RULE_typeParameterKey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2289);
			_la = _input.LA(1);
			if ( !(_la==Class || _la==TypeName) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SimpleTemplateIdentifierContext extends ParserRuleContext {
		public TemplateNameContext templateName() {
			return getRuleContext(TemplateNameContext.class,0);
		}
		public TerminalNode LessThan() { return getToken(CppParser.LessThan, 0); }
		public TerminalNode GreaterThan() { return getToken(CppParser.GreaterThan, 0); }
		public TemplateArgumentListContext templateArgumentList() {
			return getRuleContext(TemplateArgumentListContext.class,0);
		}
		public SimpleTemplateIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simpleTemplateIdentifier; }
	}

	public final SimpleTemplateIdentifierContext simpleTemplateIdentifier() throws RecognitionException {
		SimpleTemplateIdentifierContext _localctx = new SimpleTemplateIdentifierContext(_ctx, getState());
		enterRule(_localctx, 384, RULE_simpleTemplateIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2291);
			templateName();
			setState(2292);
			match(LessThan);
			setState(2294);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Short) | (1L << Signed) | (1L << Struct))) != 0) || ((((_la - 71)) & ~0x3f) == 0 && ((1L << (_la - 71)) & ((1L << (TypeName - 71)) | (1L << (Union - 71)) | (1L << (Unsigned - 71)) | (1L << (Void - 71)) | (1L << (Volatile - 71)) | (1L << (WChar - 71)) | (1L << (DoubleColon - 71)))) != 0) || _la==Identifier) {
				{
				setState(2293);
				templateArgumentList(0);
				}
			}

			setState(2296);
			match(GreaterThan);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TemplateIdentifierContext extends ParserRuleContext {
		public SimpleTemplateIdentifierContext simpleTemplateIdentifier() {
			return getRuleContext(SimpleTemplateIdentifierContext.class,0);
		}
		public OperatorFunctionIdentifierContext operatorFunctionIdentifier() {
			return getRuleContext(OperatorFunctionIdentifierContext.class,0);
		}
		public TerminalNode LessThan() { return getToken(CppParser.LessThan, 0); }
		public TerminalNode GreaterThan() { return getToken(CppParser.GreaterThan, 0); }
		public TemplateArgumentListContext templateArgumentList() {
			return getRuleContext(TemplateArgumentListContext.class,0);
		}
		public LiteralOperatorIdentifierContext literalOperatorIdentifier() {
			return getRuleContext(LiteralOperatorIdentifierContext.class,0);
		}
		public TemplateIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateIdentifier; }
	}

	public final TemplateIdentifierContext templateIdentifier() throws RecognitionException {
		TemplateIdentifierContext _localctx = new TemplateIdentifierContext(_ctx, getState());
		enterRule(_localctx, 386, RULE_templateIdentifier);
		int _la;
		try {
			setState(2313);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,288,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2298);
				simpleTemplateIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2299);
				operatorFunctionIdentifier();
				setState(2300);
				match(LessThan);
				setState(2302);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Short) | (1L << Signed) | (1L << Struct))) != 0) || ((((_la - 71)) & ~0x3f) == 0 && ((1L << (_la - 71)) & ((1L << (TypeName - 71)) | (1L << (Union - 71)) | (1L << (Unsigned - 71)) | (1L << (Void - 71)) | (1L << (Volatile - 71)) | (1L << (WChar - 71)) | (1L << (DoubleColon - 71)))) != 0) || _la==Identifier) {
					{
					setState(2301);
					templateArgumentList(0);
					}
				}

				setState(2304);
				match(GreaterThan);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2306);
				literalOperatorIdentifier();
				setState(2307);
				match(LessThan);
				setState(2309);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Short) | (1L << Signed) | (1L << Struct))) != 0) || ((((_la - 71)) & ~0x3f) == 0 && ((1L << (_la - 71)) & ((1L << (TypeName - 71)) | (1L << (Union - 71)) | (1L << (Unsigned - 71)) | (1L << (Void - 71)) | (1L << (Volatile - 71)) | (1L << (WChar - 71)) | (1L << (DoubleColon - 71)))) != 0) || _la==Identifier) {
					{
					setState(2308);
					templateArgumentList(0);
					}
				}

				setState(2311);
				match(GreaterThan);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TemplateArgumentListContext extends ParserRuleContext {
		public TemplateArgumentContext templateArgument() {
			return getRuleContext(TemplateArgumentContext.class,0);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public TemplateArgumentListContext templateArgumentList() {
			return getRuleContext(TemplateArgumentListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public TemplateArgumentListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateArgumentList; }
	}

	public final TemplateArgumentListContext templateArgumentList() throws RecognitionException {
		return templateArgumentList(0);
	}

	private TemplateArgumentListContext templateArgumentList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		TemplateArgumentListContext _localctx = new TemplateArgumentListContext(_ctx, _parentState);
		TemplateArgumentListContext _prevctx = _localctx;
		int _startState = 388;
		enterRecursionRule(_localctx, 388, RULE_templateArgumentList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2316);
			templateArgument();
			setState(2318);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,289,_ctx) ) {
			case 1:
				{
				setState(2317);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2328);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,291,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateArgumentListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateArgumentList);
					setState(2320);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2321);
					match(Comma);
					setState(2322);
					templateArgument();
					setState(2324);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,290,_ctx) ) {
					case 1:
						{
						setState(2323);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2330);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,291,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class TemplateArgumentContext extends ParserRuleContext {
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TemplateArgumentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateArgument; }
	}

	public final TemplateArgumentContext templateArgument() throws RecognitionException {
		TemplateArgumentContext _localctx = new TemplateArgumentContext(_ctx, getState());
		enterRule(_localctx, 390, RULE_templateArgument);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2331);
			typeIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypenameSpecifierContext extends ParserRuleContext {
		public TerminalNode TypeName() { return getToken(CppParser.TypeName, 0); }
		public NestedNameSpecifierContext nestedNameSpecifier() {
			return getRuleContext(NestedNameSpecifierContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public SimpleTemplateIdentifierContext simpleTemplateIdentifier() {
			return getRuleContext(SimpleTemplateIdentifierContext.class,0);
		}
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public TypenameSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typenameSpecifier; }
	}

	public final TypenameSpecifierContext typenameSpecifier() throws RecognitionException {
		TypenameSpecifierContext _localctx = new TypenameSpecifierContext(_ctx, getState());
		enterRule(_localctx, 392, RULE_typenameSpecifier);
		int _la;
		try {
			setState(2344);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,293,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2333);
				match(TypeName);
				setState(2334);
				nestedNameSpecifier();
				setState(2335);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2337);
				match(TypeName);
				setState(2338);
				nestedNameSpecifier();
				setState(2340);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(2339);
					match(Template);
					}
				}

				setState(2342);
				simpleTemplateIdentifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExplicitInstantiationContext extends ParserRuleContext {
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public TerminalNode Extern() { return getToken(CppParser.Extern, 0); }
		public ExplicitInstantiationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_explicitInstantiation; }
	}

	public final ExplicitInstantiationContext explicitInstantiation() throws RecognitionException {
		ExplicitInstantiationContext _localctx = new ExplicitInstantiationContext(_ctx, getState());
		enterRule(_localctx, 394, RULE_explicitInstantiation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2347);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Extern) {
				{
				setState(2346);
				match(Extern);
				}
			}

			setState(2349);
			match(Template);
			setState(2350);
			declaration();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExplicitSpecializationContext extends ParserRuleContext {
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public TerminalNode LessThan() { return getToken(CppParser.LessThan, 0); }
		public TerminalNode GreaterThan() { return getToken(CppParser.GreaterThan, 0); }
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public ExplicitSpecializationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_explicitSpecialization; }
	}

	public final ExplicitSpecializationContext explicitSpecialization() throws RecognitionException {
		ExplicitSpecializationContext _localctx = new ExplicitSpecializationContext(_ctx, getState());
		enterRule(_localctx, 396, RULE_explicitSpecialization);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2352);
			match(Template);
			setState(2353);
			match(LessThan);
			setState(2354);
			match(GreaterThan);
			setState(2355);
			declaration();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeductionGuideContext extends ParserRuleContext {
		public TemplateNameContext templateName() {
			return getRuleContext(TemplateNameContext.class,0);
		}
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ParameterDeclarationClauseContext parameterDeclarationClause() {
			return getRuleContext(ParameterDeclarationClauseContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public TerminalNode Arrow() { return getToken(CppParser.Arrow, 0); }
		public SimpleTemplateIdentifierContext simpleTemplateIdentifier() {
			return getRuleContext(SimpleTemplateIdentifierContext.class,0);
		}
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public TerminalNode Explicit() { return getToken(CppParser.Explicit, 0); }
		public DeductionGuideContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_deductionGuide; }
	}

	public final DeductionGuideContext deductionGuide() throws RecognitionException {
		DeductionGuideContext _localctx = new DeductionGuideContext(_ctx, getState());
		enterRule(_localctx, 398, RULE_deductionGuide);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2358);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Explicit) {
				{
				setState(2357);
				match(Explicit);
				}
			}

			setState(2360);
			templateName();
			setState(2361);
			match(OpenParenthesis);
			setState(2362);
			parameterDeclarationClause();
			setState(2363);
			match(CloseParenthesis);
			setState(2364);
			match(Arrow);
			setState(2365);
			simpleTemplateIdentifier();
			setState(2366);
			match(Semicolon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TryBlockContext extends ParserRuleContext {
		public TerminalNode Try() { return getToken(CppParser.Try, 0); }
		public CompoundStatementContext compoundStatement() {
			return getRuleContext(CompoundStatementContext.class,0);
		}
		public HandlerSequenceContext handlerSequence() {
			return getRuleContext(HandlerSequenceContext.class,0);
		}
		public TryBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tryBlock; }
	}

	public final TryBlockContext tryBlock() throws RecognitionException {
		TryBlockContext _localctx = new TryBlockContext(_ctx, getState());
		enterRule(_localctx, 400, RULE_tryBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2368);
			match(Try);
			setState(2369);
			compoundStatement();
			setState(2370);
			handlerSequence();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FunctionTryBlockContext extends ParserRuleContext {
		public TerminalNode Try() { return getToken(CppParser.Try, 0); }
		public CompoundStatementContext compoundStatement() {
			return getRuleContext(CompoundStatementContext.class,0);
		}
		public HandlerSequenceContext handlerSequence() {
			return getRuleContext(HandlerSequenceContext.class,0);
		}
		public ConstructorInitializerContext constructorInitializer() {
			return getRuleContext(ConstructorInitializerContext.class,0);
		}
		public FunctionTryBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionTryBlock; }
	}

	public final FunctionTryBlockContext functionTryBlock() throws RecognitionException {
		FunctionTryBlockContext _localctx = new FunctionTryBlockContext(_ctx, getState());
		enterRule(_localctx, 402, RULE_functionTryBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2372);
			match(Try);
			setState(2374);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2373);
				constructorInitializer();
				}
			}

			setState(2376);
			compoundStatement();
			setState(2377);
			handlerSequence();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class HandlerSequenceContext extends ParserRuleContext {
		public HandlerContext handler() {
			return getRuleContext(HandlerContext.class,0);
		}
		public HandlerSequenceContext handlerSequence() {
			return getRuleContext(HandlerSequenceContext.class,0);
		}
		public HandlerSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_handlerSequence; }
	}

	public final HandlerSequenceContext handlerSequence() throws RecognitionException {
		HandlerSequenceContext _localctx = new HandlerSequenceContext(_ctx, getState());
		enterRule(_localctx, 404, RULE_handlerSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2379);
			handler();
			setState(2381);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,297,_ctx) ) {
			case 1:
				{
				setState(2380);
				handlerSequence();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class HandlerContext extends ParserRuleContext {
		public TerminalNode Catch() { return getToken(CppParser.Catch, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ExceptionDeclarationContext exceptionDeclaration() {
			return getRuleContext(ExceptionDeclarationContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public CompoundStatementContext compoundStatement() {
			return getRuleContext(CompoundStatementContext.class,0);
		}
		public HandlerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_handler; }
	}

	public final HandlerContext handler() throws RecognitionException {
		HandlerContext _localctx = new HandlerContext(_ctx, getState());
		enterRule(_localctx, 406, RULE_handler);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2383);
			match(Catch);
			setState(2384);
			match(OpenParenthesis);
			setState(2385);
			exceptionDeclaration();
			setState(2386);
			match(CloseParenthesis);
			setState(2387);
			compoundStatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExceptionDeclarationContext extends ParserRuleContext {
		public TypeSpecifierSequenceContext typeSpecifierSequence() {
			return getRuleContext(TypeSpecifierSequenceContext.class,0);
		}
		public DeclaratorContext declarator() {
			return getRuleContext(DeclaratorContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public AbstractDeclaratorContext abstractDeclarator() {
			return getRuleContext(AbstractDeclaratorContext.class,0);
		}
		public TerminalNode Ellipsis() { return getToken(CppParser.Ellipsis, 0); }
		public ExceptionDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exceptionDeclaration; }
	}

	public final ExceptionDeclarationContext exceptionDeclaration() throws RecognitionException {
		ExceptionDeclarationContext _localctx = new ExceptionDeclarationContext(_ctx, getState());
		enterRule(_localctx, 408, RULE_exceptionDeclaration);
		int _la;
		try {
			setState(2403);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,301,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2390);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2389);
					attributeSpecifierSequence(0);
					}
				}

				setState(2392);
				typeSpecifierSequence();
				setState(2393);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2396);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2395);
					attributeSpecifierSequence(0);
					}
				}

				setState(2398);
				typeSpecifierSequence();
				setState(2400);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || ((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (OpenBracket - 84)) | (1L << (OpenParenthesis - 84)) | (1L << (Ellipsis - 84)) | (1L << (DoubleColon - 84)) | (1L << (Asterisk - 84)) | (1L << (Ampersand - 84)) | (1L << (DoubleAmpersand - 84)) | (1L << (Identifier - 84)))) != 0)) {
					{
					setState(2399);
					abstractDeclarator();
					}
				}

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2402);
				match(Ellipsis);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NoExceptionSpecifierContext extends ParserRuleContext {
		public TerminalNode NoExcept() { return getToken(CppParser.NoExcept, 0); }
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public TerminalNode Throw() { return getToken(CppParser.Throw, 0); }
		public NoExceptionSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noExceptionSpecifier; }
	}

	public final NoExceptionSpecifierContext noExceptionSpecifier() throws RecognitionException {
		NoExceptionSpecifierContext _localctx = new NoExceptionSpecifierContext(_ctx, getState());
		enterRule(_localctx, 410, RULE_noExceptionSpecifier);
		try {
			setState(2414);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,302,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2405);
				match(NoExcept);
				setState(2406);
				match(OpenParenthesis);
				setState(2407);
				constantExpression();
				setState(2408);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2410);
				match(NoExcept);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2411);
				match(Throw);
				setState(2412);
				match(OpenParenthesis);
				setState(2413);
				match(CloseParenthesis);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierListContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public IdentifierListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifierList; }
	}

	public final IdentifierListContext identifierList() throws RecognitionException {
		return identifierList(0);
	}

	private IdentifierListContext identifierList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		IdentifierListContext _localctx = new IdentifierListContext(_ctx, _parentState);
		IdentifierListContext _prevctx = _localctx;
		int _startState = 412;
		enterRecursionRule(_localctx, 412, RULE_identifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2417);
			match(Identifier);
			}
			_ctx.stop = _input.LT(-1);
			setState(2424);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,303,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new IdentifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_identifierList);
					setState(2419);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2420);
					match(Comma);
					setState(2421);
					match(Identifier);
					}
					} 
				}
				setState(2426);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,303,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class LiteralContext extends ParserRuleContext {
		public IntegerLiteralContext integerLiteral() {
			return getRuleContext(IntegerLiteralContext.class,0);
		}
		public TerminalNode FloatingPointLiteral() { return getToken(CppParser.FloatingPointLiteral, 0); }
		public TerminalNode CharacterLiteral() { return getToken(CppParser.CharacterLiteral, 0); }
		public TerminalNode StringLiteral() { return getToken(CppParser.StringLiteral, 0); }
		public BooleanLiteralContext booleanLiteral() {
			return getRuleContext(BooleanLiteralContext.class,0);
		}
		public PointerLiteralContext pointerLiteral() {
			return getRuleContext(PointerLiteralContext.class,0);
		}
		public UserDefinedLiteralContext userDefinedLiteral() {
			return getRuleContext(UserDefinedLiteralContext.class,0);
		}
		public LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal; }
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 414, RULE_literal);
		try {
			setState(2434);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Zero:
			case IntegerLiteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(2427);
				integerLiteral();
				}
				break;
			case FloatingPointLiteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(2428);
				match(FloatingPointLiteral);
				}
				break;
			case CharacterLiteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(2429);
				match(CharacterLiteral);
				}
				break;
			case StringLiteral:
				enterOuterAlt(_localctx, 4);
				{
				setState(2430);
				match(StringLiteral);
				}
				break;
			case False:
			case True:
				enterOuterAlt(_localctx, 5);
				{
				setState(2431);
				booleanLiteral();
				}
				break;
			case Nullptr:
				enterOuterAlt(_localctx, 6);
				{
				setState(2432);
				pointerLiteral();
				}
				break;
			case UserDefinedIntegerLiteral:
			case UserDefinedFloatingPointLiteral:
			case UserDefinedCharacterLiteral:
			case UserDefinedStringLiteral:
				enterOuterAlt(_localctx, 7);
				{
				setState(2433);
				userDefinedLiteral();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IntegerLiteralContext extends ParserRuleContext {
		public TerminalNode Zero() { return getToken(CppParser.Zero, 0); }
		public TerminalNode IntegerLiteral() { return getToken(CppParser.IntegerLiteral, 0); }
		public IntegerLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integerLiteral; }
	}

	public final IntegerLiteralContext integerLiteral() throws RecognitionException {
		IntegerLiteralContext _localctx = new IntegerLiteralContext(_ctx, getState());
		enterRule(_localctx, 416, RULE_integerLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2436);
			_la = _input.LA(1);
			if ( !(_la==Zero || _la==IntegerLiteral) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BooleanLiteralContext extends ParserRuleContext {
		public TerminalNode True() { return getToken(CppParser.True, 0); }
		public TerminalNode False() { return getToken(CppParser.False, 0); }
		public BooleanLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleanLiteral; }
	}

	public final BooleanLiteralContext booleanLiteral() throws RecognitionException {
		BooleanLiteralContext _localctx = new BooleanLiteralContext(_ctx, getState());
		enterRule(_localctx, 418, RULE_booleanLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2438);
			_la = _input.LA(1);
			if ( !(_la==False || _la==True) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PointerLiteralContext extends ParserRuleContext {
		public TerminalNode Nullptr() { return getToken(CppParser.Nullptr, 0); }
		public PointerLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pointerLiteral; }
	}

	public final PointerLiteralContext pointerLiteral() throws RecognitionException {
		PointerLiteralContext _localctx = new PointerLiteralContext(_ctx, getState());
		enterRule(_localctx, 420, RULE_pointerLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2440);
			match(Nullptr);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class UserDefinedLiteralContext extends ParserRuleContext {
		public TerminalNode UserDefinedIntegerLiteral() { return getToken(CppParser.UserDefinedIntegerLiteral, 0); }
		public TerminalNode UserDefinedFloatingPointLiteral() { return getToken(CppParser.UserDefinedFloatingPointLiteral, 0); }
		public TerminalNode UserDefinedCharacterLiteral() { return getToken(CppParser.UserDefinedCharacterLiteral, 0); }
		public TerminalNode UserDefinedStringLiteral() { return getToken(CppParser.UserDefinedStringLiteral, 0); }
		public UserDefinedLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_userDefinedLiteral; }
	}

	public final UserDefinedLiteralContext userDefinedLiteral() throws RecognitionException {
		UserDefinedLiteralContext _localctx = new UserDefinedLiteralContext(_ctx, getState());
		enterRule(_localctx, 422, RULE_userDefinedLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2442);
			_la = _input.LA(1);
			if ( !(((((_la - 135)) & ~0x3f) == 0 && ((1L << (_la - 135)) & ((1L << (UserDefinedIntegerLiteral - 135)) | (1L << (UserDefinedFloatingPointLiteral - 135)) | (1L << (UserDefinedCharacterLiteral - 135)) | (1L << (UserDefinedStringLiteral - 135)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 17:
			return captureList_sempred((CaptureListContext)_localctx, predIndex);
		case 29:
			return postfixExpression_sempred((PostfixExpressionContext)_localctx, predIndex);
		case 38:
			return noPointerNewDeclarator_sempred((NoPointerNewDeclaratorContext)_localctx, predIndex);
		case 43:
			return binaryExpression_sempred((BinaryExpressionContext)_localctx, predIndex);
		case 49:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		case 57:
			return statementSequence_sempred((StatementSequenceContext)_localctx, predIndex);
		case 65:
			return declarationSequence_sempred((DeclarationSequenceContext)_localctx, predIndex);
		case 95:
			return enumeratorList_sempred((EnumeratorListContext)_localctx, predIndex);
		case 102:
			return enclosingNamespaceSpecifier_sempred((EnclosingNamespaceSpecifierContext)_localctx, predIndex);
		case 107:
			return usingDeclaratorList_sempred((UsingDeclaratorListContext)_localctx, predIndex);
		case 112:
			return attributeSpecifierSequence_sempred((AttributeSpecifierSequenceContext)_localctx, predIndex);
		case 116:
			return attributeList_sempred((AttributeListContext)_localctx, predIndex);
		case 122:
			return balancedTokenSequence_sempred((BalancedTokenSequenceContext)_localctx, predIndex);
		case 125:
			return initializerDeclaratorList_sempred((InitializerDeclaratorListContext)_localctx, predIndex);
		case 129:
			return noPointerDeclarator_sempred((NoPointerDeclaratorContext)_localctx, predIndex);
		case 142:
			return noPointerAbstractDeclarator_sempred((NoPointerAbstractDeclaratorContext)_localctx, predIndex);
		case 144:
			return noPointerAbstractPackDeclarator_sempred((NoPointerAbstractPackDeclaratorContext)_localctx, predIndex);
		case 146:
			return parameterDeclarationList_sempred((ParameterDeclarationListContext)_localctx, predIndex);
		case 157:
			return initializerList_sempred((InitializerListContext)_localctx, predIndex);
		case 167:
			return memberDeclaratorList_sempred((MemberDeclaratorListContext)_localctx, predIndex);
		case 169:
			return virtualSpecifierSequence_sempred((VirtualSpecifierSequenceContext)_localctx, predIndex);
		case 173:
			return baseSpecifierList_sempred((BaseSpecifierListContext)_localctx, predIndex);
		case 181:
			return memberInitializerList_sempred((MemberInitializerListContext)_localctx, predIndex);
		case 188:
			return templateParameterList_sempred((TemplateParameterListContext)_localctx, predIndex);
		case 194:
			return templateArgumentList_sempred((TemplateArgumentListContext)_localctx, predIndex);
		case 206:
			return identifierList_sempred((IdentifierListContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean captureList_sempred(CaptureListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean postfixExpression_sempred(PostfixExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 10);
		case 2:
			return precpred(_ctx, 9);
		case 3:
			return precpred(_ctx, 5);
		case 4:
			return precpred(_ctx, 4);
		case 5:
			return precpred(_ctx, 3);
		}
		return true;
	}
	private boolean noPointerNewDeclarator_sempred(NoPointerNewDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 6:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean binaryExpression_sempred(BinaryExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 8:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean statementSequence_sempred(StatementSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 9:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean declarationSequence_sempred(DeclarationSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 10:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean enumeratorList_sempred(EnumeratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 11:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean enclosingNamespaceSpecifier_sempred(EnclosingNamespaceSpecifierContext _localctx, int predIndex) {
		switch (predIndex) {
		case 12:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean usingDeclaratorList_sempred(UsingDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 13:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean attributeSpecifierSequence_sempred(AttributeSpecifierSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 14:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean attributeList_sempred(AttributeListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 15:
			return precpred(_ctx, 3);
		case 16:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean balancedTokenSequence_sempred(BalancedTokenSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 17:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initializerDeclaratorList_sempred(InitializerDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 18:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean noPointerDeclarator_sempred(NoPointerDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 19:
			return precpred(_ctx, 3);
		case 20:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean noPointerAbstractDeclarator_sempred(NoPointerAbstractDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 21:
			return precpred(_ctx, 4);
		case 22:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean noPointerAbstractPackDeclarator_sempred(NoPointerAbstractPackDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 23:
			return precpred(_ctx, 3);
		case 24:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean parameterDeclarationList_sempred(ParameterDeclarationListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 25:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initializerList_sempred(InitializerListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 26:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean memberDeclaratorList_sempred(MemberDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 27:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean virtualSpecifierSequence_sempred(VirtualSpecifierSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 28:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean baseSpecifierList_sempred(BaseSpecifierListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 29:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean memberInitializerList_sempred(MemberInitializerListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 30:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean templateParameterList_sempred(TemplateParameterListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 31:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean templateArgumentList_sempred(TemplateArgumentListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 32:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean identifierList_sempred(IdentifierListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 33:
			return precpred(_ctx, 1);
		}
		return true;
	}

	private static final int _serializedATNSegments = 2;
	private static final String _serializedATNSegment0 =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u008d\u098f\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\4A\tA\4B\tB\4C\tC\4D\tD\4E\tE\4F\tF\4G\tG\4H\tH\4I"+
		"\tI\4J\tJ\4K\tK\4L\tL\4M\tM\4N\tN\4O\tO\4P\tP\4Q\tQ\4R\tR\4S\tS\4T\tT"+
		"\4U\tU\4V\tV\4W\tW\4X\tX\4Y\tY\4Z\tZ\4[\t[\4\\\t\\\4]\t]\4^\t^\4_\t_\4"+
		"`\t`\4a\ta\4b\tb\4c\tc\4d\td\4e\te\4f\tf\4g\tg\4h\th\4i\ti\4j\tj\4k\t"+
		"k\4l\tl\4m\tm\4n\tn\4o\to\4p\tp\4q\tq\4r\tr\4s\ts\4t\tt\4u\tu\4v\tv\4"+
		"w\tw\4x\tx\4y\ty\4z\tz\4{\t{\4|\t|\4}\t}\4~\t~\4\177\t\177\4\u0080\t\u0080"+
		"\4\u0081\t\u0081\4\u0082\t\u0082\4\u0083\t\u0083\4\u0084\t\u0084\4\u0085"+
		"\t\u0085\4\u0086\t\u0086\4\u0087\t\u0087\4\u0088\t\u0088\4\u0089\t\u0089"+
		"\4\u008a\t\u008a\4\u008b\t\u008b\4\u008c\t\u008c\4\u008d\t\u008d\4\u008e"+
		"\t\u008e\4\u008f\t\u008f\4\u0090\t\u0090\4\u0091\t\u0091\4\u0092\t\u0092"+
		"\4\u0093\t\u0093\4\u0094\t\u0094\4\u0095\t\u0095\4\u0096\t\u0096\4\u0097"+
		"\t\u0097\4\u0098\t\u0098\4\u0099\t\u0099\4\u009a\t\u009a\4\u009b\t\u009b"+
		"\4\u009c\t\u009c\4\u009d\t\u009d\4\u009e\t\u009e\4\u009f\t\u009f\4\u00a0"+
		"\t\u00a0\4\u00a1\t\u00a1\4\u00a2\t\u00a2\4\u00a3\t\u00a3\4\u00a4\t\u00a4"+
		"\4\u00a5\t\u00a5\4\u00a6\t\u00a6\4\u00a7\t\u00a7\4\u00a8\t\u00a8\4\u00a9"+
		"\t\u00a9\4\u00aa\t\u00aa\4\u00ab\t\u00ab\4\u00ac\t\u00ac\4\u00ad\t\u00ad"+
		"\4\u00ae\t\u00ae\4\u00af\t\u00af\4\u00b0\t\u00b0\4\u00b1\t\u00b1\4\u00b2"+
		"\t\u00b2\4\u00b3\t\u00b3\4\u00b4\t\u00b4\4\u00b5\t\u00b5\4\u00b6\t\u00b6"+
		"\4\u00b7\t\u00b7\4\u00b8\t\u00b8\4\u00b9\t\u00b9\4\u00ba\t\u00ba\4\u00bb"+
		"\t\u00bb\4\u00bc\t\u00bc\4\u00bd\t\u00bd\4\u00be\t\u00be\4\u00bf\t\u00bf"+
		"\4\u00c0\t\u00c0\4\u00c1\t\u00c1\4\u00c2\t\u00c2\4\u00c3\t\u00c3\4\u00c4"+
		"\t\u00c4\4\u00c5\t\u00c5\4\u00c6\t\u00c6\4\u00c7\t\u00c7\4\u00c8\t\u00c8"+
		"\4\u00c9\t\u00c9\4\u00ca\t\u00ca\4\u00cb\t\u00cb\4\u00cc\t\u00cc\4\u00cd"+
		"\t\u00cd\4\u00ce\t\u00ce\4\u00cf\t\u00cf\4\u00d0\t\u00d0\4\u00d1\t\u00d1"+
		"\4\u00d2\t\u00d2\4\u00d3\t\u00d3\4\u00d4\t\u00d4\4\u00d5\t\u00d5\3\2\3"+
		"\2\3\2\3\3\3\3\5\3\u01b0\n\3\3\4\3\4\3\5\3\5\5\5\u01b6\n\5\3\6\3\6\3\7"+
		"\5\7\u01bb\n\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u01c8\n"+
		"\b\3\t\3\t\5\t\u01cc\n\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\5\n\u01d7"+
		"\n\n\3\13\3\13\5\13\u01db\n\13\3\13\3\13\3\f\3\f\5\f\u01e1\n\f\3\f\3\f"+
		"\3\f\5\f\u01e6\n\f\3\f\3\f\3\f\5\f\u01eb\n\f\5\f\u01ed\n\f\3\r\3\r\3\r"+
		"\5\r\u01f2\n\r\3\r\5\r\u01f5\n\r\3\r\3\r\3\r\5\r\u01fa\n\r\5\r\u01fc\n"+
		"\r\3\16\3\16\5\16\u0200\n\16\3\16\3\16\3\17\3\17\5\17\u0206\n\17\3\17"+
		"\3\17\3\20\3\20\3\20\3\20\5\20\u020e\n\20\3\20\5\20\u0211\n\20\3\20\5"+
		"\20\u0214\n\20\3\20\5\20\u0217\n\20\3\21\3\21\3\21\3\21\3\21\3\21\5\21"+
		"\u021f\n\21\3\22\3\22\3\23\3\23\3\23\5\23\u0226\n\23\3\23\3\23\3\23\3"+
		"\23\5\23\u022c\n\23\7\23\u022e\n\23\f\23\16\23\u0231\13\23\3\24\3\24\3"+
		"\24\3\25\5\25\u0237\n\25\3\25\3\25\3\25\3\25\5\25\u023d\n\25\3\26\5\26"+
		"\u0240\n\26\3\26\3\26\3\26\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27"+
		"\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\5\27\u0259\n\27"+
		"\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30"+
		"\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30"+
		"\3\30\3\30\3\30\3\30\5\30\u027b\n\30\3\31\3\31\3\31\5\31\u0280\n\31\3"+
		"\31\3\31\3\32\3\32\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\34\3\34\3"+
		"\35\3\35\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u029c"+
		"\n\36\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\5\37\u02a9"+
		"\n\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\5\37\u02b3\n\37\3\37\3\37"+
		"\3\37\3\37\5\37\u02b9\n\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\7\37"+
		"\u02c3\n\37\f\37\16\37\u02c6\13\37\3 \3 \3!\5!\u02cb\n!\3!\3!\3!\3!\3"+
		"!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\5!\u02dd\n!\3\"\3\"\3\"\3\"\3\"\3\""+
		"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3"+
		"\"\3\"\3\"\3\"\3\"\5\"\u02fb\n\"\3#\3#\3$\5$\u0300\n$\3$\3$\5$\u0304\n"+
		"$\3$\3$\5$\u0308\n$\3$\5$\u030b\n$\3$\3$\5$\u030f\n$\3$\3$\3$\3$\5$\u0315"+
		"\n$\5$\u0317\n$\3%\3%\3%\3%\3&\3&\5&\u031f\n&\3\'\3\'\5\'\u0323\n\'\3"+
		"\'\3\'\3(\3(\3(\3(\3(\5(\u032c\n(\3(\3(\3(\3(\3(\5(\u0333\n(\7(\u0335"+
		"\n(\f(\16(\u0338\13(\3)\3)\5)\u033c\n)\3)\3)\5)\u0340\n)\3*\5*\u0343\n"+
		"*\3*\3*\3*\5*\u0348\n*\3*\3*\3*\3*\5*\u034e\n*\3+\3+\3+\3+\3+\3,\3,\3"+
		",\3,\3,\3,\5,\u035b\n,\3-\3-\3-\3-\3-\3-\3-\7-\u0364\n-\f-\16-\u0367\13"+
		"-\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\5.\u037d"+
		"\n.\3/\3/\3/\3/\3/\3/\3/\5/\u0386\n/\3\60\3\60\5\60\u038a\n\60\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\5\61\u0392\n\61\3\62\3\62\3\63\3\63\3\63\3\63"+
		"\3\63\3\63\7\63\u039c\n\63\f\63\16\63\u039f\13\63\3\64\3\64\3\65\3\65"+
		"\5\65\u03a5\n\65\3\65\3\65\5\65\u03a9\n\65\3\65\3\65\5\65\u03ad\n\65\3"+
		"\65\3\65\5\65\u03b1\n\65\3\65\3\65\5\65\u03b5\n\65\3\65\3\65\3\65\5\65"+
		"\u03ba\n\65\3\65\5\65\u03bd\n\65\3\66\3\66\5\66\u03c1\n\66\3\67\3\67\5"+
		"\67\u03c5\n\67\3\67\3\67\3\67\3\67\5\67\u03cb\n\67\38\58\u03ce\n8\38\3"+
		"8\38\38\58\u03d4\n8\38\38\38\38\38\38\58\u03dc\n8\38\38\38\58\u03e1\n"+
		"8\39\59\u03e4\n9\39\39\3:\3:\5:\u03ea\n:\3:\3:\3;\3;\3;\3;\3;\7;\u03f3"+
		"\n;\f;\16;\u03f6\13;\3<\3<\5<\u03fa\n<\3<\3<\5<\u03fe\n<\3<\3<\3<\3<\3"+
		"<\3<\5<\u0406\n<\3<\3<\5<\u040a\n<\3<\3<\3<\3<\3<\3<\3<\3<\3<\5<\u0415"+
		"\n<\3<\3<\3<\3<\5<\u041b\n<\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3=\3="+
		"\3=\3=\3=\3=\5=\u042f\n=\3=\3=\5=\u0433\n=\3=\3=\3=\3=\3=\3=\3=\3=\3="+
		"\3=\3=\5=\u0440\n=\3>\5>\u0443\n>\3>\3>\3>\3>\5>\u0449\n>\3>\3>\5>\u044d"+
		"\n>\3>\3>\3>\3>\5>\u0453\n>\3?\5?\u0456\n?\3?\3?\3?\3@\3@\3A\3A\3A\3A"+
		"\3A\3A\5A\u0463\nA\3A\3A\3A\3A\5A\u0469\nA\3B\3B\3C\3C\3C\3C\3C\7C\u0472"+
		"\nC\fC\16C\u0475\13C\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\3D\5D\u0482\nD\3E\3"+
		"E\3E\3E\3E\3E\3E\3E\5E\u048c\nE\3F\5F\u048f\nF\3F\3F\3F\3G\3G\3G\5G\u0497"+
		"\nG\3G\3G\3G\3G\3H\3H\5H\u049f\nH\3H\3H\3H\3H\3H\3H\3H\3H\5H\u04a9\nH"+
		"\3H\3H\5H\u04ad\nH\3H\3H\3H\3H\3H\3H\5H\u04b5\nH\3I\3I\3I\3I\3I\3I\3I"+
		"\3I\3I\3I\3I\3I\3I\3I\5I\u04c5\nI\3J\3J\3K\3K\3K\3L\3L\3L\3L\3L\3L\3L"+
		"\5L\u04d3\nL\3M\5M\u04d6\nM\3M\3M\5M\u04da\nM\3M\5M\u04dd\nM\3N\3N\3O"+
		"\3O\3P\3P\5P\u04e5\nP\3Q\3Q\3R\3R\3S\3S\3S\5S\u04ee\nS\3T\5T\u04f1\nT"+
		"\3T\3T\5T\u04f5\nT\3U\3U\3U\5U\u04fa\nU\3V\3V\5V\u04fe\nV\3V\3V\3V\5V"+
		"\u0503\nV\3W\5W\u0506\nW\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W\3W"+
		"\3W\3W\5W\u0519\nW\3X\3X\5X\u051d\nX\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\3Y\5Y\u0528"+
		"\nY\3Z\3Z\5Z\u052c\nZ\3Z\5Z\u052f\nZ\3Z\3Z\3Z\3Z\3Z\3Z\3Z\3Z\5Z\u0539"+
		"\nZ\3Z\3Z\3Z\3Z\5Z\u053f\nZ\3Z\5Z\u0542\nZ\3[\3[\3[\5[\u0547\n[\3[\3["+
		"\3[\3[\3[\3[\3[\3[\5[\u0551\n[\3\\\3\\\5\\\u0555\n\\\3\\\5\\\u0558\n\\"+
		"\3\\\5\\\u055b\n\\\3]\5]\u055e\n]\3]\3]\3^\3^\5^\u0564\n^\3^\5^\u0567"+
		"\n^\3^\3^\5^\u056b\n^\3^\3^\3_\3_\3_\3_\3_\5_\u0574\n_\3`\3`\3`\3a\3a"+
		"\3a\3a\3a\3a\7a\u057f\na\fa\16a\u0582\13a\3b\3b\3b\3b\3b\5b\u0589\nb\3"+
		"c\3c\5c\u058d\nc\3d\3d\3d\5d\u0592\nd\3e\5e\u0595\ne\3e\3e\5e\u0599\n"+
		"e\3e\3e\3e\3e\3e\3f\5f\u05a1\nf\3f\3f\5f\u05a5\nf\3f\3f\3f\3f\3g\3g\3"+
		"g\3g\3g\3g\3g\3g\3h\3h\3h\3h\3h\3h\7h\u05b9\nh\fh\16h\u05bc\13h\3i\5i"+
		"\u05bf\ni\3j\3j\3j\3j\3j\3j\3k\5k\u05c8\nk\3k\3k\3l\3l\3l\3l\3m\3m\3m"+
		"\5m\u05d3\nm\3m\3m\3m\3m\5m\u05d9\nm\7m\u05db\nm\fm\16m\u05de\13m\3n\5"+
		"n\u05e1\nn\3n\3n\3n\3o\5o\u05e7\no\3o\3o\3o\5o\u05ec\no\3o\3o\3o\3p\5"+
		"p\u05f2\np\3p\3p\3p\3p\3p\3p\3q\3q\3q\3q\5q\u05fe\nq\3q\3q\3q\3q\5q\u0604"+
		"\nq\3r\3r\3r\3r\3r\7r\u060b\nr\fr\16r\u060e\13r\3s\3s\3s\5s\u0613\ns\3"+
		"s\3s\3s\3s\3s\5s\u061a\ns\3t\3t\3t\3t\5t\u0620\nt\3t\3t\3t\3t\3t\3t\5"+
		"t\u0628\nt\3t\3t\5t\u062c\nt\3u\3u\3u\3u\3v\3v\5v\u0634\nv\3v\3v\3v\5"+
		"v\u0639\nv\3v\3v\3v\5v\u063e\nv\3v\3v\3v\3v\3v\7v\u0645\nv\fv\16v\u0648"+
		"\13v\3w\3w\5w\u064c\nw\3x\3x\5x\u0650\nx\3y\3y\3y\3y\3z\3z\3{\3{\5{\u065a"+
		"\n{\3{\3{\3|\3|\3|\3|\3|\7|\u0663\n|\f|\16|\u0666\13|\3}\3}\5}\u066a\n"+
		"}\3}\3}\3}\5}\u066f\n}\3}\3}\3}\5}\u0674\n}\3}\3}\5}\u0678\n}\3~\3~\3"+
		"\177\3\177\3\177\3\177\3\177\3\177\7\177\u0682\n\177\f\177\16\177\u0685"+
		"\13\177\3\u0080\3\u0080\5\u0080\u0689\n\u0080\3\u0081\3\u0081\5\u0081"+
		"\u068d\n\u0081\3\u0082\3\u0082\3\u0082\3\u0083\3\u0083\5\u0083\u0694\n"+
		"\u0083\3\u0083\3\u0083\5\u0083\u0698\n\u0083\3\u0083\3\u0083\3\u0083\3"+
		"\u0083\5\u0083\u069e\n\u0083\3\u0083\3\u0083\3\u0083\5\u0083\u06a3\n\u0083"+
		"\3\u0083\3\u0083\5\u0083\u06a7\n\u0083\3\u0083\3\u0083\7\u0083\u06ab\n"+
		"\u0083\f\u0083\16\u0083\u06ae\13\u0083\3\u0084\3\u0084\3\u0084\3\u0085"+
		"\3\u0085\3\u0085\3\u0085\3\u0086\5\u0086\u06b8\n\u0086\3\u0086\5\u0086"+
		"\u06bb\n\u0086\3\u0086\5\u0086\u06be\n\u0086\3\u0086\5\u0086\u06c1\n\u0086"+
		"\3\u0087\3\u0087\3\u0087\3\u0088\3\u0088\5\u0088\u06c8\n\u0088\3\u0088"+
		"\5\u0088\u06cb\n\u0088\3\u0088\3\u0088\5\u0088\u06cf\n\u0088\3\u0088\3"+
		"\u0088\5\u0088\u06d3\n\u0088\3\u0088\3\u0088\3\u0088\5\u0088\u06d8\n\u0088"+
		"\3\u0088\5\u0088\u06db\n\u0088\5\u0088\u06dd\n\u0088\3\u0089\3\u0089\5"+
		"\u0089\u06e1\n\u0089\3\u008a\3\u008a\3\u008b\3\u008b\3\u008b\3\u008c\3"+
		"\u008c\5\u008c\u06ea\n\u008c\3\u008d\3\u008d\5\u008d\u06ee\n\u008d\3\u008e"+
		"\3\u008e\5\u008e\u06f2\n\u008e\3\u008e\3\u008e\3\u008e\3\u008e\5\u008e"+
		"\u06f8\n\u008e\3\u008f\3\u008f\3\u008f\5\u008f\u06fd\n\u008f\5\u008f\u06ff"+
		"\n\u008f\3\u0090\3\u0090\3\u0090\3\u0090\5\u0090\u0705\n\u0090\3\u0090"+
		"\3\u0090\5\u0090\u0709\n\u0090\3\u0090\3\u0090\3\u0090\3\u0090\5\u0090"+
		"\u070f\n\u0090\3\u0090\3\u0090\3\u0090\3\u0090\3\u0090\5\u0090\u0716\n"+
		"\u0090\3\u0090\3\u0090\5\u0090\u071a\n\u0090\7\u0090\u071c\n\u0090\f\u0090"+
		"\16\u0090\u071f\13\u0090\3\u0091\3\u0091\3\u0091\3\u0091\5\u0091\u0725"+
		"\n\u0091\3\u0092\3\u0092\3\u0092\3\u0092\3\u0092\3\u0092\3\u0092\3\u0092"+
		"\5\u0092\u072f\n\u0092\3\u0092\3\u0092\5\u0092\u0733\n\u0092\7\u0092\u0735"+
		"\n\u0092\f\u0092\16\u0092\u0738\13\u0092\3\u0093\5\u0093\u073b\n\u0093"+
		"\3\u0093\5\u0093\u073e\n\u0093\3\u0093\3\u0093\3\u0093\3\u0093\5\u0093"+
		"\u0744\n\u0093\3\u0094\3\u0094\3\u0094\3\u0094\3\u0094\3\u0094\7\u0094"+
		"\u074c\n\u0094\f\u0094\16\u0094\u074f\13\u0094\3\u0095\5\u0095\u0752\n"+
		"\u0095\3\u0095\3\u0095\3\u0095\3\u0095\5\u0095\u0758\n\u0095\3\u0095\3"+
		"\u0095\3\u0095\3\u0095\3\u0095\5\u0095\u075f\n\u0095\3\u0096\5\u0096\u0762"+
		"\n\u0096\3\u0096\5\u0096\u0765\n\u0096\3\u0096\3\u0096\5\u0096\u0769\n"+
		"\u0096\3\u0096\3\u0096\3\u0097\3\u0097\3\u0097\3\u0097\5\u0097\u0771\n"+
		"\u0097\3\u0098\3\u0098\3\u0098\3\u0098\5\u0098\u0777\n\u0098\3\u0099\5"+
		"\u0099\u077a\n\u0099\3\u0099\3\u0099\3\u009a\3\u009a\3\u009a\3\u009a\3"+
		"\u009b\3\u009b\3\u009b\3\u009b\3\u009c\3\u009c\3\u009d\3\u009d\3\u009d"+
		"\5\u009d\u078b\n\u009d\3\u009e\3\u009e\5\u009e\u078f\n\u009e\3\u009f\3"+
		"\u009f\3\u009f\5\u009f\u0794\n\u009f\3\u009f\3\u009f\3\u009f\3\u009f\5"+
		"\u009f\u079a\n\u009f\7\u009f\u079c\n\u009f\f\u009f\16\u009f\u079f\13\u009f"+
		"\3\u00a0\3\u00a0\3\u00a0\5\u00a0\u07a4\n\u00a0\3\u00a0\3\u00a0\3\u00a0"+
		"\3\u00a0\5\u00a0\u07aa\n\u00a0\3\u00a1\3\u00a1\5\u00a1\u07ae\n\u00a1\3"+
		"\u00a2\3\u00a2\3\u00a2\5\u00a2\u07b3\n\u00a2\3\u00a2\3\u00a2\3\u00a3\3"+
		"\u00a3\5\u00a3\u07b9\n\u00a3\3\u00a3\3\u00a3\5\u00a3\u07bd\n\u00a3\3\u00a3"+
		"\5\u00a3\u07c0\n\u00a3\3\u00a3\3\u00a3\5\u00a3\u07c4\n\u00a3\3\u00a3\5"+
		"\u00a3\u07c7\n\u00a3\5\u00a3\u07c9\n\u00a3\3\u00a4\5\u00a4\u07cc\n\u00a4"+
		"\3\u00a4\3\u00a4\3\u00a5\3\u00a5\3\u00a6\3\u00a6\3\u00a7\3\u00a7\5\u00a7"+
		"\u07d6\n\u00a7\3\u00a7\3\u00a7\3\u00a7\5\u00a7\u07db\n\u00a7\5\u00a7\u07dd"+
		"\n\u00a7\3\u00a8\5\u00a8\u07e0\n\u00a8\3\u00a8\3\u00a8\3\u00a8\3\u00a8"+
		"\3\u00a8\3\u00a8\3\u00a8\3\u00a8\3\u00a8\3\u00a8\3\u00a8\5\u00a8\u07ed"+
		"\n\u00a8\3\u00a9\3\u00a9\3\u00a9\3\u00a9\3\u00a9\3\u00a9\7\u00a9\u07f5"+
		"\n\u00a9\f\u00a9\16\u00a9\u07f8\13\u00a9\3\u00aa\3\u00aa\5\u00aa\u07fc"+
		"\n\u00aa\3\u00aa\3\u00aa\3\u00aa\3\u00aa\5\u00aa\u0802\n\u00aa\3\u00aa"+
		"\5\u00aa\u0805\n\u00aa\3\u00aa\3\u00aa\5\u00aa\u0809\n\u00aa\3\u00ab\3"+
		"\u00ab\3\u00ab\3\u00ab\3\u00ab\7\u00ab\u0810\n\u00ab\f\u00ab\16\u00ab"+
		"\u0813\13\u00ab\3\u00ac\3\u00ac\3\u00ad\3\u00ad\3\u00ad\3\u00ae\3\u00ae"+
		"\3\u00ae\3\u00af\3\u00af\3\u00af\5\u00af\u0820\n\u00af\3\u00af\3\u00af"+
		"\3\u00af\3\u00af\5\u00af\u0826\n\u00af\7\u00af\u0828\n\u00af\f\u00af\16"+
		"\u00af\u082b\13\u00af\3\u00b0\5\u00b0\u082e\n\u00b0\3\u00b0\3\u00b0\5"+
		"\u00b0\u0832\n\u00b0\3\u00b0\3\u00b0\5\u00b0\u0836\n\u00b0\3\u00b0\3\u00b0"+
		"\5\u00b0\u083a\n\u00b0\3\u00b0\3\u00b0\5\u00b0\u083e\n\u00b0\3\u00b0\3"+
		"\u00b0\5\u00b0\u0842\n\u00b0\3\u00b1\5\u00b1\u0845\n\u00b1\3\u00b1\3\u00b1"+
		"\3\u00b1\3\u00b1\3\u00b1\3\u00b1\5\u00b1\u084d\n\u00b1\3\u00b2\3\u00b2"+
		"\3\u00b3\3\u00b3\3\u00b3\3\u00b4\3\u00b4\5\u00b4\u0856\n\u00b4\3\u00b5"+
		"\3\u00b5\5\u00b5\u085a\n\u00b5\3\u00b6\3\u00b6\3\u00b6\3\u00b7\3\u00b7"+
		"\3\u00b7\5\u00b7\u0862\n\u00b7\3\u00b7\3\u00b7\3\u00b7\3\u00b7\5\u00b7"+
		"\u0868\n\u00b7\7\u00b7\u086a\n\u00b7\f\u00b7\16\u00b7\u086d\13\u00b7\3"+
		"\u00b8\3\u00b8\3\u00b8\5\u00b8\u0872\n\u00b8\3\u00b8\3\u00b8\3\u00b8\3"+
		"\u00b8\3\u00b8\5\u00b8\u0879\n\u00b8\3\u00b9\3\u00b9\3\u00ba\3\u00ba\3"+
		"\u00ba\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\3\u00bb\3\u00bb\3\u00bb\3\u00bb\5\u00bb\u08b0\n\u00bb\3\u00bc\3\u00bc"+
		"\3\u00bc\3\u00bc\3\u00bc\5\u00bc\u08b7\n\u00bc\3\u00bd\3\u00bd\3\u00bd"+
		"\3\u00bd\3\u00bd\3\u00bd\3\u00be\3\u00be\3\u00be\3\u00be\3\u00be\3\u00be"+
		"\7\u00be\u08c5\n\u00be\f\u00be\16\u00be\u08c8\13\u00be\3\u00bf\3\u00bf"+
		"\5\u00bf\u08cc\n\u00bf\3\u00c0\3\u00c0\5\u00c0\u08d0\n\u00c0\3\u00c0\5"+
		"\u00c0\u08d3\n\u00c0\3\u00c0\3\u00c0\5\u00c0\u08d7\n\u00c0\3\u00c0\3\u00c0"+
		"\3\u00c0\3\u00c0\3\u00c0\3\u00c0\3\u00c0\3\u00c0\3\u00c0\5\u00c0\u08e2"+
		"\n\u00c0\3\u00c0\5\u00c0\u08e5\n\u00c0\3\u00c0\3\u00c0\3\u00c0\3\u00c0"+
		"\3\u00c0\3\u00c0\5\u00c0\u08ed\n\u00c0\3\u00c0\3\u00c0\3\u00c0\5\u00c0"+
		"\u08f2\n\u00c0\3\u00c1\3\u00c1\3\u00c2\3\u00c2\3\u00c2\5\u00c2\u08f9\n"+
		"\u00c2\3\u00c2\3\u00c2\3\u00c3\3\u00c3\3\u00c3\3\u00c3\5\u00c3\u0901\n"+
		"\u00c3\3\u00c3\3\u00c3\3\u00c3\3\u00c3\3\u00c3\5\u00c3\u0908\n\u00c3\3"+
		"\u00c3\3\u00c3\5\u00c3\u090c\n\u00c3\3\u00c4\3\u00c4\3\u00c4\5\u00c4\u0911"+
		"\n\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\5\u00c4\u0917\n\u00c4\7\u00c4"+
		"\u0919\n\u00c4\f\u00c4\16\u00c4\u091c\13\u00c4\3\u00c5\3\u00c5\3\u00c6"+
		"\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6\5\u00c6\u0927\n\u00c6"+
		"\3\u00c6\3\u00c6\5\u00c6\u092b\n\u00c6\3\u00c7\5\u00c7\u092e\n\u00c7\3"+
		"\u00c7\3\u00c7\3\u00c7\3\u00c8\3\u00c8\3\u00c8\3\u00c8\3\u00c8\3\u00c9"+
		"\5\u00c9\u0939\n\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9"+
		"\3\u00c9\3\u00c9\3\u00ca\3\u00ca\3\u00ca\3\u00ca\3\u00cb\3\u00cb\5\u00cb"+
		"\u0949\n\u00cb\3\u00cb\3\u00cb\3\u00cb\3\u00cc\3\u00cc\5\u00cc\u0950\n"+
		"\u00cc\3\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00ce\5\u00ce"+
		"\u0959\n\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\5\u00ce\u095f\n\u00ce\3"+
		"\u00ce\3\u00ce\5\u00ce\u0963\n\u00ce\3\u00ce\5\u00ce\u0966\n\u00ce\3\u00cf"+
		"\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\5\u00cf"+
		"\u0971\n\u00cf\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\7\u00d0"+
		"\u0979\n\u00d0\f\u00d0\16\u00d0\u097c\13\u00d0\3\u00d1\3\u00d1\3\u00d1"+
		"\3\u00d1\3\u00d1\3\u00d1\3\u00d1\5\u00d1\u0985\n\u00d1\3\u00d2\3\u00d2"+
		"\3\u00d3\3\u00d3\3\u00d4\3\u00d4\3\u00d5\3\u00d5\3\u00d5\2\34$<NXdt\u0084"+
		"\u00c0\u00ce\u00d8\u00e2\u00ea\u00f6\u00fc\u0104\u011e\u0122\u0126\u013c"+
		"\u0150\u0154\u015c\u016c\u017a\u0186\u019e\u00d6\2\4\6\b\n\f\16\20\22"+
		"\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnp"+
		"rtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e\u0090\u0092\u0094"+
		"\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac"+
		"\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be\u00c0\u00c2\u00c4"+
		"\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4\u00d6\u00d8\u00da\u00dc"+
		"\u00de\u00e0\u00e2\u00e4\u00e6\u00e8\u00ea\u00ec\u00ee\u00f0\u00f2\u00f4"+
		"\u00f6\u00f8\u00fa\u00fc\u00fe\u0100\u0102\u0104\u0106\u0108\u010a\u010c"+
		"\u010e\u0110\u0112\u0114\u0116\u0118\u011a\u011c\u011e\u0120\u0122\u0124"+
		"\u0126\u0128\u012a\u012c\u012e\u0130\u0132\u0134\u0136\u0138\u013a\u013c"+
		"\u013e\u0140\u0142\u0144\u0146\u0148\u014a\u014c\u014e\u0150\u0152\u0154"+
		"\u0156\u0158\u015a\u015c\u015e\u0160\u0162\u0164\u0166\u0168\u016a\u016c"+
		"\u016e\u0170\u0172\u0174\u0176\u0178\u017a\u017c\u017e\u0180\u0182\u0184"+
		"\u0186\u0188\u018a\u018c\u018e\u0190\u0192\u0194\u0196\u0198\u019a\u019c"+
		"\u019e\u01a0\u01a2\u01a4\u01a6\u01a8\2\23\4\2ggkk\3\2\177\u0080\4\2__"+
		"\u0083\u0083\6\2\27\27\36\36\67\67>>\4\2acgj\5\2kknuwx\6\2##--<<CC\4\2"+
		"!!MM\3\2TY\4\2\25\25OO\5\2\24\24??JJ\3\2RS\3\2\63\65\4\2\24\24II\3\2\u0084"+
		"\u0085\4\2$$EE\3\2\u0089\u008c\2\u0ab4\2\u01aa\3\2\2\2\4\u01af\3\2\2\2"+
		"\6\u01b1\3\2\2\2\b\u01b5\3\2\2\2\n\u01b7\3\2\2\2\f\u01ba\3\2\2\2\16\u01c7"+
		"\3\2\2\2\20\u01cb\3\2\2\2\22\u01d6\3\2\2\2\24\u01d8\3\2\2\2\26\u01ec\3"+
		"\2\2\2\30\u01fb\3\2\2\2\32\u01fd\3\2\2\2\34\u0203\3\2\2\2\36\u0209\3\2"+
		"\2\2 \u021e\3\2\2\2\"\u0220\3\2\2\2$\u0222\3\2\2\2&\u0232\3\2\2\2(\u023c"+
		"\3\2\2\2*\u023f\3\2\2\2,\u0258\3\2\2\2.\u027a\3\2\2\2\60\u027c\3\2\2\2"+
		"\62\u0283\3\2\2\2\64\u0285\3\2\2\2\66\u028d\3\2\2\28\u028f\3\2\2\2:\u029b"+
		"\3\2\2\2<\u02a8\3\2\2\2>\u02c7\3\2\2\2@\u02dc\3\2\2\2B\u02fa\3\2\2\2D"+
		"\u02fc\3\2\2\2F\u0316\3\2\2\2H\u0318\3\2\2\2J\u031c\3\2\2\2L\u0320\3\2"+
		"\2\2N\u0326\3\2\2\2P\u033f\3\2\2\2R\u034d\3\2\2\2T\u034f\3\2\2\2V\u035a"+
		"\3\2\2\2X\u035c\3\2\2\2Z\u037c\3\2\2\2\\\u0385\3\2\2\2^\u0387\3\2\2\2"+
		"`\u0391\3\2\2\2b\u0393\3\2\2\2d\u0395\3\2\2\2f\u03a0\3\2\2\2h\u03bc\3"+
		"\2\2\2j\u03c0\3\2\2\2l\u03ca\3\2\2\2n\u03e0\3\2\2\2p\u03e3\3\2\2\2r\u03e7"+
		"\3\2\2\2t\u03ed\3\2\2\2v\u041a\3\2\2\2x\u043f\3\2\2\2z\u0452\3\2\2\2|"+
		"\u0455\3\2\2\2~\u045a\3\2\2\2\u0080\u0468\3\2\2\2\u0082\u046a\3\2\2\2"+
		"\u0084\u046c\3\2\2\2\u0086\u0481\3\2\2\2\u0088\u048b\3\2\2\2\u008a\u048e"+
		"\3\2\2\2\u008c\u0493\3\2\2\2\u008e\u04b4\3\2\2\2\u0090\u04c4\3\2\2\2\u0092"+
		"\u04c6\3\2\2\2\u0094\u04c8\3\2\2\2\u0096\u04d2\3\2\2\2\u0098\u04d5\3\2"+
		"\2\2\u009a\u04de\3\2\2\2\u009c\u04e0\3\2\2\2\u009e\u04e2\3\2\2\2\u00a0"+
		"\u04e6\3\2\2\2\u00a2\u04e8\3\2\2\2\u00a4\u04ed\3\2\2\2\u00a6\u04f0\3\2"+
		"\2\2\u00a8\u04f9\3\2\2\2\u00aa\u0502\3\2\2\2\u00ac\u0518\3\2\2\2\u00ae"+
		"\u051c\3\2\2\2\u00b0\u0527\3\2\2\2\u00b2\u0541\3\2\2\2\u00b4\u0550\3\2"+
		"\2\2\u00b6\u0552\3\2\2\2\u00b8\u055d\3\2\2\2\u00ba\u0561\3\2\2\2\u00bc"+
		"\u0573\3\2\2\2\u00be\u0575\3\2\2\2\u00c0\u0578\3\2\2\2\u00c2\u0588\3\2"+
		"\2\2\u00c4\u058a\3\2\2\2\u00c6\u0591\3\2\2\2\u00c8\u0594\3\2\2\2\u00ca"+
		"\u05a0\3\2\2\2\u00cc\u05aa\3\2\2\2\u00ce\u05b2\3\2\2\2\u00d0\u05be\3\2"+
		"\2\2\u00d2\u05c0\3\2\2\2\u00d4\u05c7\3\2\2\2\u00d6\u05cb\3\2\2\2\u00d8"+
		"\u05cf\3\2\2\2\u00da\u05e0\3\2\2\2\u00dc\u05e6\3\2\2\2\u00de\u05f1\3\2"+
		"\2\2\u00e0\u0603\3\2\2\2\u00e2\u0605\3\2\2\2\u00e4\u0619\3\2\2\2\u00e6"+
		"\u062b\3\2\2\2\u00e8\u062d\3\2\2\2\u00ea\u0638\3\2\2\2\u00ec\u0649\3\2"+
		"\2\2\u00ee\u064f\3\2\2\2\u00f0\u0651\3\2\2\2\u00f2\u0655\3\2\2\2\u00f4"+
		"\u0657\3\2\2\2\u00f6\u065d\3\2\2\2\u00f8\u0677\3\2\2\2\u00fa\u0679\3\2"+
		"\2\2\u00fc\u067b\3\2\2\2\u00fe\u0686\3\2\2\2\u0100\u068c\3\2\2\2\u0102"+
		"\u068e\3\2\2\2\u0104\u069d\3\2\2\2\u0106\u06af\3\2\2\2\u0108\u06b2\3\2"+
		"\2\2\u010a\u06b7\3\2\2\2\u010c\u06c2\3\2\2\2\u010e\u06dc\3\2\2\2\u0110"+
		"\u06de\3\2\2\2\u0112\u06e2\3\2\2\2\u0114\u06e4\3\2\2\2\u0116\u06e7\3\2"+
		"\2\2\u0118\u06eb\3\2\2\2\u011a\u06f7\3\2\2\2\u011c\u06fe\3\2\2\2\u011e"+
		"\u070e\3\2\2\2\u0120\u0724\3\2\2\2\u0122\u0726\3\2\2\2\u0124\u0743\3\2"+
		"\2\2\u0126\u0745\3\2\2\2\u0128\u075e\3\2\2\2\u012a\u0761\3\2\2\2\u012c"+
		"\u076c\3\2\2\2\u012e\u0776\3\2\2\2\u0130\u0779\3\2\2\2\u0132\u077d\3\2"+
		"\2\2\u0134\u0781\3\2\2\2\u0136\u0785\3\2\2\2\u0138\u078a\3\2\2\2\u013a"+
		"\u078e\3\2\2\2\u013c\u0790\3\2\2\2\u013e\u07a9\3\2\2\2\u0140\u07ad\3\2"+
		"\2\2\u0142\u07af\3\2\2\2\u0144\u07c8\3\2\2\2\u0146\u07cb\3\2\2\2\u0148"+
		"\u07cf\3\2\2\2\u014a\u07d1\3\2\2\2\u014c\u07dc\3\2\2\2\u014e\u07ec\3\2"+
		"\2\2\u0150\u07ee\3\2\2\2\u0152\u0808\3\2\2\2\u0154\u080a\3\2\2\2\u0156"+
		"\u0814\3\2\2\2\u0158\u0816\3\2\2\2\u015a\u0819\3\2\2\2\u015c\u081c\3\2"+
		"\2\2\u015e\u0841\3\2\2\2\u0160\u084c\3\2\2\2\u0162\u084e\3\2\2\2\u0164"+
		"\u0850\3\2\2\2\u0166\u0853\3\2\2\2\u0168\u0857\3\2\2\2\u016a\u085b\3\2"+
		"\2\2\u016c\u085e\3\2\2\2\u016e\u0878\3\2\2\2\u0170\u087a\3\2\2\2\u0172"+
		"\u087c\3\2\2\2\u0174\u08af\3\2\2\2\u0176\u08b6\3\2\2\2\u0178\u08b8\3\2"+
		"\2\2\u017a\u08be\3\2\2\2\u017c\u08cb\3\2\2\2\u017e\u08f1\3\2\2\2\u0180"+
		"\u08f3\3\2\2\2\u0182\u08f5\3\2\2\2\u0184\u090b\3\2\2\2\u0186\u090d\3\2"+
		"\2\2\u0188\u091d\3\2\2\2\u018a\u092a\3\2\2\2\u018c\u092d\3\2\2\2\u018e"+
		"\u0932\3\2\2\2\u0190\u0938\3\2\2\2\u0192\u0942\3\2\2\2\u0194\u0946\3\2"+
		"\2\2\u0196\u094d\3\2\2\2\u0198\u0951\3\2\2\2\u019a\u0965\3\2\2\2\u019c"+
		"\u0970\3\2\2\2\u019e\u0972\3\2\2\2\u01a0\u0984\3\2\2\2\u01a2\u0986\3\2"+
		"\2\2\u01a4\u0988\3\2\2\2\u01a6\u098a\3\2\2\2\u01a8\u098c\3\2\2\2\u01aa"+
		"\u01ab\7m\2\2\u01ab\u01ac\7m\2\2\u01ac\3\3\2\2\2\u01ad\u01b0\7\u008d\2"+
		"\2\u01ae\u01b0\5\6\4\2\u01af\u01ad\3\2\2\2\u01af\u01ae\3\2\2\2\u01b0\5"+
		"\3\2\2\2\u01b1\u01b2\7\u008d\2\2\u01b2\7\3\2\2\2\u01b3\u01b6\7\u008d\2"+
		"\2\u01b4\u01b6\5\u0182\u00c2\2\u01b5\u01b3\3\2\2\2\u01b5\u01b4\3\2\2\2"+
		"\u01b6\t\3\2\2\2\u01b7\u01b8\7\u008d\2\2\u01b8\13\3\2\2\2\u01b9\u01bb"+
		"\5\u0084C\2\u01ba\u01b9\3\2\2\2\u01ba\u01bb\3\2\2\2\u01bb\u01bc\3\2\2"+
		"\2\u01bc\u01bd\7\2\2\3\u01bd\r\3\2\2\2\u01be\u01c8\5\u01a0\u00d1\2\u01bf"+
		"\u01c8\7B\2\2\u01c0\u01c1\7X\2\2\u01c1\u01c2\5d\63\2\u01c2\u01c3\7Y\2"+
		"\2\u01c3\u01c8\3\2\2\2\u01c4\u01c8\5\20\t\2\u01c5\u01c8\5\32\16\2\u01c6"+
		"\u01c8\5,\27\2\u01c7\u01be\3\2\2\2\u01c7\u01bf\3\2\2\2\u01c7\u01c0\3\2"+
		"\2\2\u01c7\u01c4\3\2\2\2\u01c7\u01c5\3\2\2\2\u01c7\u01c6\3\2\2\2\u01c8"+
		"\17\3\2\2\2\u01c9\u01cc\5\22\n\2\u01ca\u01cc\5\24\13\2\u01cb\u01c9\3\2"+
		"\2\2\u01cb\u01ca\3\2\2\2\u01cc\21\3\2\2\2\u01cd\u01d7\7\u008d\2\2\u01ce"+
		"\u01d7\5\u0172\u00ba\2\u01cf\u01d7\5\u0164\u00b3\2\u01d0\u01d7\5\u0176"+
		"\u00bc\2\u01d1\u01d2\7i\2\2\u01d2\u01d7\5\b\5\2\u01d3\u01d4\7i\2\2\u01d4"+
		"\u01d7\5\u00b0Y\2\u01d5\u01d7\5\u0184\u00c3\2\u01d6\u01cd\3\2\2\2\u01d6"+
		"\u01ce\3\2\2\2\u01d6\u01cf\3\2\2\2\u01d6\u01d0\3\2\2\2\u01d6\u01d1\3\2"+
		"\2\2\u01d6\u01d3\3\2\2\2\u01d6\u01d5\3\2\2\2\u01d7\23\3\2\2\2\u01d8\u01da"+
		"\5\26\f\2\u01d9\u01db\7A\2\2\u01da\u01d9\3\2\2\2\u01da\u01db\3\2\2\2\u01db"+
		"\u01dc\3\2\2\2\u01dc\u01dd\5\22\n\2\u01dd\25\3\2\2\2\u01de\u01e0\7^\2"+
		"\2\u01df\u01e1\5\30\r\2\u01e0\u01df\3\2\2\2\u01e0\u01e1\3\2\2\2\u01e1"+
		"\u01ed\3\2\2\2\u01e2\u01e3\7\u008d\2\2\u01e3\u01e5\7^\2\2\u01e4\u01e6"+
		"\5\30\r\2\u01e5\u01e4\3\2\2\2\u01e5\u01e6\3\2\2\2\u01e6\u01ed\3\2\2\2"+
		"\u01e7\u01e8\5\u00b0Y\2\u01e8\u01ea\7^\2\2\u01e9\u01eb\5\30\r\2\u01ea"+
		"\u01e9\3\2\2\2\u01ea\u01eb\3\2\2\2\u01eb\u01ed\3\2\2\2\u01ec\u01de\3\2"+
		"\2\2\u01ec\u01e2\3\2\2\2\u01ec\u01e7\3\2\2\2\u01ed\27\3\2\2\2\u01ee\u01ef"+
		"\7\u008d\2\2\u01ef\u01f1\7^\2\2\u01f0\u01f2\5\30\r\2\u01f1\u01f0\3\2\2"+
		"\2\u01f1\u01f2\3\2\2\2\u01f2\u01fc\3\2\2\2\u01f3\u01f5\7A\2\2\u01f4\u01f3"+
		"\3\2\2\2\u01f4\u01f5\3\2\2\2\u01f5\u01f6\3\2\2\2\u01f6\u01f7\5\u0182\u00c2"+
		"\2\u01f7\u01f9\7^\2\2\u01f8\u01fa\5\30\r\2\u01f9\u01f8\3\2\2\2\u01f9\u01fa"+
		"\3\2\2\2\u01fa\u01fc\3\2\2\2\u01fb\u01ee\3\2\2\2\u01fb\u01f4\3\2\2\2\u01fc"+
		"\31\3\2\2\2\u01fd\u01ff\5\34\17\2\u01fe\u0200\5\36\20\2\u01ff\u01fe\3"+
		"\2\2\2\u01ff\u0200\3\2\2\2\u0200\u0201\3\2\2\2\u0201\u0202\5r:\2\u0202"+
		"\33\3\2\2\2\u0203\u0205\7V\2\2\u0204\u0206\5 \21\2\u0205\u0204\3\2\2\2"+
		"\u0205\u0206\3\2\2\2\u0206\u0207\3\2\2\2\u0207\u0208\7W\2\2\u0208\35\3"+
		"\2\2\2\u0209\u020a\7X\2\2\u020a\u020b\5\u0124\u0093\2\u020b\u020d\7Y\2"+
		"\2\u020c\u020e\5\u0098M\2\u020d\u020c\3\2\2\2\u020d\u020e\3\2\2\2\u020e"+
		"\u0210\3\2\2\2\u020f\u0211\5\u019c\u00cf\2\u0210\u020f\3\2\2\2\u0210\u0211"+
		"\3\2\2\2\u0211\u0213\3\2\2\2\u0212\u0214\5\u00e2r\2\u0213\u0212\3\2\2"+
		"\2\u0213\u0214\3\2\2\2\u0214\u0216\3\2\2\2\u0215\u0217\5\u010c\u0087\2"+
		"\u0216\u0215\3\2\2\2\u0216\u0217\3\2\2\2\u0217\37\3\2\2\2\u0218\u021f"+
		"\5\"\22\2\u0219\u021f\5$\23\2\u021a\u021b\5\"\22\2\u021b\u021c\7\u0081"+
		"\2\2\u021c\u021d\5$\23\2\u021d\u021f\3\2\2\2\u021e\u0218\3\2\2\2\u021e"+
		"\u0219\3\2\2\2\u021e\u021a\3\2\2\2\u021f!\3\2\2\2\u0220\u0221\t\2\2\2"+
		"\u0221#\3\2\2\2\u0222\u0223\b\23\1\2\u0223\u0225\5&\24\2\u0224\u0226\7"+
		"\\\2\2\u0225\u0224\3\2\2\2\u0225\u0226\3\2\2\2\u0226\u022f\3\2\2\2\u0227"+
		"\u0228\f\3\2\2\u0228\u0229\7\u0081\2\2\u0229\u022b\5&\24\2\u022a\u022c"+
		"\7\\\2\2\u022b\u022a\3\2\2\2\u022b\u022c\3\2\2\2\u022c\u022e\3\2\2\2\u022d"+
		"\u0227\3\2\2\2\u022e\u0231\3\2\2\2\u022f\u022d\3\2\2\2\u022f\u0230\3\2"+
		"\2\2\u0230%\3\2\2\2\u0231\u022f\3\2\2\2\u0232\u0233\5(\25\2\u0233\u0234"+
		"\5*\26\2\u0234\'\3\2\2\2\u0235\u0237\7g\2\2\u0236\u0235\3\2\2\2\u0236"+
		"\u0237\3\2\2\2\u0237\u0238\3\2\2\2\u0238\u023d\7\u008d\2\2\u0239\u023d"+
		"\7B\2\2\u023a\u023b\7c\2\2\u023b\u023d\7B\2\2\u023c\u0236\3\2\2\2\u023c"+
		"\u0239\3\2\2\2\u023c\u023a\3\2\2\2\u023d)\3\2\2\2\u023e\u0240\7g\2\2\u023f"+
		"\u023e\3\2\2\2\u023f\u0240\3\2\2\2\u0240\u0241\3\2\2\2\u0241\u0242\7\u008d"+
		"\2\2\u0242\u0243\5\u0136\u009c\2\u0243+\3\2\2\2\u0244\u0245\7X\2\2\u0245"+
		"\u0246\5V,\2\u0246\u0247\5.\30\2\u0247\u0248\7\\\2\2\u0248\u0249\7Y\2"+
		"\2\u0249\u0259\3\2\2\2\u024a\u024b\7X\2\2\u024b\u024c\7\\\2\2\u024c\u024d"+
		"\5.\30\2\u024d\u024e\5V,\2\u024e\u024f\7Y\2\2\u024f\u0259\3\2\2\2\u0250"+
		"\u0251\7X\2\2\u0251\u0252\5V,\2\u0252\u0253\5.\30\2\u0253\u0254\7\\\2"+
		"\2\u0254\u0255\5.\30\2\u0255\u0256\5V,\2\u0256\u0257\7Y\2\2\u0257\u0259"+
		"\3\2\2\2\u0258\u0244\3\2\2\2\u0258\u024a\3\2\2\2\u0258\u0250\3\2\2\2\u0259"+
		"-\3\2\2\2\u025a\u027b\7a\2\2\u025b\u027b\7b\2\2\u025c\u027b\7c\2\2\u025d"+
		"\u027b\7d\2\2\u025e\u027b\7e\2\2\u025f\u027b\7f\2\2\u0260\u027b\7g\2\2"+
		"\u0261\u027b\7h\2\2\u0262\u027b\7v\2\2\u0263\u027b\5\2\2\2\u0264\u027b"+
		"\7n\2\2\u0265\u027b\7o\2\2\u0266\u027b\7p\2\2\u0267\u027b\7q\2\2\u0268"+
		"\u027b\7r\2\2\u0269\u027b\7s\2\2\u026a\u027b\7t\2\2\u026b\u027b\7u\2\2"+
		"\u026c\u027b\7w\2\2\u026d\u027b\7x\2\2\u026e\u027b\7k\2\2\u026f\u027b"+
		"\7y\2\2\u0270\u027b\7z\2\2\u0271\u027b\7l\2\2\u0272\u027b\7m\2\2\u0273"+
		"\u027b\7{\2\2\u0274\u027b\7|\2\2\u0275\u027b\7}\2\2\u0276\u027b\7~\2\2"+
		"\u0277\u027b\7\u0081\2\2\u0278\u027b\7`\2\2\u0279\u027b\7\u0082\2\2\u027a"+
		"\u025a\3\2\2\2\u027a\u025b\3\2\2\2\u027a\u025c\3\2\2\2\u027a\u025d\3\2"+
		"\2\2\u027a\u025e\3\2\2\2\u027a\u025f\3\2\2\2\u027a\u0260\3\2\2\2\u027a"+
		"\u0261\3\2\2\2\u027a\u0262\3\2\2\2\u027a\u0263\3\2\2\2\u027a\u0264\3\2"+
		"\2\2\u027a\u0265\3\2\2\2\u027a\u0266\3\2\2\2\u027a\u0267\3\2\2\2\u027a"+
		"\u0268\3\2\2\2\u027a\u0269\3\2\2\2\u027a\u026a\3\2\2\2\u027a\u026b\3\2"+
		"\2\2\u027a\u026c\3\2\2\2\u027a\u026d\3\2\2\2\u027a\u026e\3\2\2\2\u027a"+
		"\u026f\3\2\2\2\u027a\u0270\3\2\2\2\u027a\u0271\3\2\2\2\u027a\u0272\3\2"+
		"\2\2\u027a\u0273\3\2\2\2\u027a\u0274\3\2\2\2\u027a\u0275\3\2\2\2\u027a"+
		"\u0276\3\2\2\2\u027a\u0277\3\2\2\2\u027a\u0278\3\2\2\2\u027a\u0279\3\2"+
		"\2\2\u027b/\3\2\2\2\u027c\u027d\5\u018a\u00c6\2\u027d\u027f\7X\2\2\u027e"+
		"\u0280\5> \2\u027f\u027e\3\2\2\2\u027f\u0280\3\2\2\2\u0280\u0281\3\2\2"+
		"\2\u0281\u0282\7Y\2\2\u0282\61\3\2\2\2\u0283\u0284\t\3\2\2\u0284\63\3"+
		"\2\2\2\u0285\u0286\58\35\2\u0286\u0287\7l\2\2\u0287\u0288\5\u0116\u008c"+
		"\2\u0288\u0289\7m\2\2\u0289\u028a\7X\2\2\u028a\u028b\5d\63\2\u028b\u028c"+
		"\7Y\2\2\u028c\65\3\2\2\2\u028d\u028e\t\4\2\2\u028e\67\3\2\2\2\u028f\u0290"+
		"\t\5\2\2\u02909\3\2\2\2\u0291\u0292\7H\2\2\u0292\u0293\7X\2\2\u0293\u0294"+
		"\5d\63\2\u0294\u0295\7Y\2\2\u0295\u029c\3\2\2\2\u0296\u0297\7H\2\2\u0297"+
		"\u0298\7X\2\2\u0298\u0299\5\u0116\u008c\2\u0299\u029a\7Y\2\2\u029a\u029c"+
		"\3\2\2\2\u029b\u0291\3\2\2\2\u029b\u0296\3\2\2\2\u029c;\3\2\2\2\u029d"+
		"\u029e\b\37\1\2\u029e\u02a9\5\16\b\2\u029f\u02a9\5\60\31\2\u02a0\u02a1"+
		"\5\u00acW\2\u02a1\u02a2\5\u013e\u00a0\2\u02a2\u02a9\3\2\2\2\u02a3\u02a4"+
		"\5\u018a\u00c6\2\u02a4\u02a5\5\u013e\u00a0\2\u02a5\u02a9\3\2\2\2\u02a6"+
		"\u02a9\5\64\33\2\u02a7\u02a9\5:\36\2\u02a8\u029d\3\2\2\2\u02a8\u029f\3"+
		"\2\2\2\u02a8\u02a0\3\2\2\2\u02a8\u02a3\3\2\2\2\u02a8\u02a6\3\2\2\2\u02a8"+
		"\u02a7\3\2\2\2\u02a9\u02c4\3\2\2\2\u02aa\u02ab\f\f\2\2\u02ab\u02ac\7V"+
		"\2\2\u02ac\u02ad\5\u0140\u00a1\2\u02ad\u02ae\7W\2\2\u02ae\u02c3\3\2\2"+
		"\2\u02af\u02b0\f\13\2\2\u02b0\u02b2\7X\2\2\u02b1\u02b3\5> \2\u02b2\u02b1"+
		"\3\2\2\2\u02b2\u02b3\3\2\2\2\u02b3\u02b4\3\2\2\2\u02b4\u02c3\7Y\2\2\u02b5"+
		"\u02b6\f\7\2\2\u02b6\u02b8\5\66\34\2\u02b7\u02b9\7A\2\2\u02b8\u02b7\3"+
		"\2\2\2\u02b8\u02b9\3\2\2\2\u02b9\u02ba\3\2\2\2\u02ba\u02bb\5\20\t\2\u02bb"+
		"\u02c3\3\2\2\2\u02bc\u02bd\f\6\2\2\u02bd\u02be\5\66\34\2\u02be\u02bf\5"+
		"@!\2\u02bf\u02c3\3\2\2\2\u02c0\u02c1\f\5\2\2\u02c1\u02c3\5\62\32\2\u02c2"+
		"\u02aa\3\2\2\2\u02c2\u02af\3\2\2\2\u02c2\u02b5\3\2\2\2\u02c2\u02bc\3\2"+
		"\2\2\u02c2\u02c0\3\2\2\2\u02c3\u02c6\3\2\2\2\u02c4\u02c2\3\2\2\2\u02c4"+
		"\u02c5\3\2\2\2\u02c5=\3\2\2\2\u02c6\u02c4\3\2\2\2\u02c7\u02c8\5\u013c"+
		"\u009f\2\u02c8?\3\2\2\2\u02c9\u02cb\5\26\f\2\u02ca\u02c9\3\2\2\2\u02ca"+
		"\u02cb\3\2\2\2\u02cb\u02cc\3\2\2\2\u02cc\u02cd\5\u00aeX\2\u02cd\u02ce"+
		"\7^\2\2\u02ce\u02cf\7i\2\2\u02cf\u02d0\5\u00aeX\2\u02d0\u02dd\3\2\2\2"+
		"\u02d1\u02d2\5\26\f\2\u02d2\u02d3\7A\2\2\u02d3\u02d4\5\u0182\u00c2\2\u02d4"+
		"\u02d5\7^\2\2\u02d5\u02d6\7i\2\2\u02d6\u02d7\5\u00aeX\2\u02d7\u02dd\3"+
		"\2\2\2\u02d8\u02d9\7i\2\2\u02d9\u02dd\5\u00aeX\2\u02da\u02db\7i\2\2\u02db"+
		"\u02dd\5\u00b0Y\2\u02dc\u02ca\3\2\2\2\u02dc\u02d1\3\2\2\2\u02dc\u02d8"+
		"\3\2\2\2\u02dc\u02da\3\2\2\2\u02ddA\3\2\2\2\u02de\u02fb\5<\37\2\u02df"+
		"\u02e0\7\177\2\2\u02e0\u02fb\5V,\2\u02e1\u02e2\7\u0080\2\2\u02e2\u02fb"+
		"\5V,\2\u02e3\u02e4\5D#\2\u02e4\u02e5\5V,\2\u02e5\u02fb\3\2\2\2\u02e6\u02e7"+
		"\7;\2\2\u02e7\u02fb\5B\"\2\u02e8\u02e9\7;\2\2\u02e9\u02ea\7X\2\2\u02ea"+
		"\u02eb\5\u0116\u008c\2\u02eb\u02ec\7Y\2\2\u02ec\u02fb\3\2\2\2\u02ed\u02ee"+
		"\7;\2\2\u02ee\u02ef\7\\\2\2\u02ef\u02f0\7X\2\2\u02f0\u02f1\7\u008d\2\2"+
		"\u02f1\u02fb\7Y\2\2\u02f2\u02f3\7\t\2\2\u02f3\u02f4\7X\2\2\u02f4\u02f5"+
		"\5\u0116\u008c\2\u02f5\u02f6\7Y\2\2\u02f6\u02fb\3\2\2\2\u02f7\u02fb\5"+
		"T+\2\u02f8\u02fb\5F$\2\u02f9\u02fb\5R*\2\u02fa\u02de\3\2\2\2\u02fa\u02df"+
		"\3\2\2\2\u02fa\u02e1\3\2\2\2\u02fa\u02e3\3\2\2\2\u02fa\u02e6\3\2\2\2\u02fa"+
		"\u02e8\3\2\2\2\u02fa\u02ed\3\2\2\2\u02fa\u02f2\3\2\2\2\u02fa\u02f7\3\2"+
		"\2\2\u02fa\u02f8\3\2\2\2\u02fa\u02f9\3\2\2\2\u02fbC\3\2\2\2\u02fc\u02fd"+
		"\t\6\2\2\u02fdE\3\2\2\2\u02fe\u0300\7^\2\2\u02ff\u02fe\3\2\2\2\u02ff\u0300"+
		"\3\2\2\2\u0300\u0301\3\2\2\2\u0301\u0303\7/\2\2\u0302\u0304\5H%\2\u0303"+
		"\u0302\3\2\2\2\u0303\u0304\3\2\2\2\u0304\u0305\3\2\2\2\u0305\u0307\5J"+
		"&\2\u0306\u0308\5P)\2\u0307\u0306\3\2\2\2\u0307\u0308\3\2\2\2\u0308\u0317"+
		"\3\2\2\2\u0309\u030b\7^\2\2\u030a\u0309\3\2\2\2\u030a\u030b\3\2\2\2\u030b"+
		"\u030c\3\2\2\2\u030c\u030e\7/\2\2\u030d\u030f\5H%\2\u030e\u030d\3\2\2"+
		"\2\u030e\u030f\3\2\2\2\u030f\u0310\3\2\2\2\u0310\u0311\7X\2\2\u0311\u0312"+
		"\5\u0116\u008c\2\u0312\u0314\7Y\2\2\u0313\u0315\5P)\2\u0314\u0313\3\2"+
		"\2\2\u0314\u0315\3\2\2\2\u0315\u0317\3\2\2\2\u0316\u02ff\3\2\2\2\u0316"+
		"\u030a\3\2\2\2\u0317G\3\2\2\2\u0318\u0319\7X\2\2\u0319\u031a\5> \2\u031a"+
		"\u031b\7Y\2\2\u031bI\3\2\2\2\u031c\u031e\5\u00a6T\2\u031d\u031f\5L\'\2"+
		"\u031e\u031d\3\2\2\2\u031e\u031f\3\2\2\2\u031fK\3\2\2\2\u0320\u0322\5"+
		"\u010e\u0088\2\u0321\u0323\5L\'\2\u0322\u0321\3\2\2\2\u0322\u0323\3\2"+
		"\2\2\u0323\u0324\3\2\2\2\u0324\u0325\5N(\2\u0325M\3\2\2\2\u0326\u0327"+
		"\b(\1\2\u0327\u0328\7V\2\2\u0328\u0329\5d\63\2\u0329\u032b\7W\2\2\u032a"+
		"\u032c\5\u00e2r\2\u032b\u032a\3\2\2\2\u032b\u032c\3\2\2\2\u032c\u0336"+
		"\3\2\2\2\u032d\u032e\f\3\2\2\u032e\u032f\7V\2\2\u032f\u0330\5f\64\2\u0330"+
		"\u0332\7W\2\2\u0331\u0333\5\u00e2r\2\u0332\u0331\3\2\2\2\u0332\u0333\3"+
		"\2\2\2\u0333\u0335\3\2\2\2\u0334\u032d\3\2\2\2\u0335\u0338\3\2\2\2\u0336"+
		"\u0334\3\2\2\2\u0336\u0337\3\2\2\2\u0337O\3\2\2\2\u0338\u0336\3\2\2\2"+
		"\u0339\u033b\7X\2\2\u033a\u033c\5> \2\u033b\u033a\3\2\2\2\u033b\u033c"+
		"\3\2\2\2\u033c\u033d\3\2\2\2\u033d\u0340\7Y\2\2\u033e\u0340\5\u013e\u00a0"+
		"\2\u033f\u0339\3\2\2\2\u033f\u033e\3\2\2\2\u0340Q\3\2\2\2\u0341\u0343"+
		"\7^\2\2\u0342\u0341\3\2\2\2\u0342\u0343\3\2\2\2\u0343\u0344\3\2\2\2\u0344"+
		"\u0345\7\33\2\2\u0345\u034e\5V,\2\u0346\u0348\7^\2\2\u0347\u0346\3\2\2"+
		"\2\u0347\u0348\3\2\2\2\u0348\u0349\3\2\2\2\u0349\u034a\7\33\2\2\u034a"+
		"\u034b\7V\2\2\u034b\u034c\7W\2\2\u034c\u034e\5V,\2\u034d\u0342\3\2\2\2"+
		"\u034d\u0347\3\2\2\2\u034eS\3\2\2\2\u034f\u0350\7\60\2\2\u0350\u0351\7"+
		"X\2\2\u0351\u0352\5d\63\2\u0352\u0353\7Y\2\2\u0353U\3\2\2\2\u0354\u035b"+
		"\5B\"\2\u0355\u0356\7X\2\2\u0356\u0357\5\u0116\u008c\2\u0357\u0358\7Y"+
		"\2\2\u0358\u0359\5V,\2\u0359\u035b\3\2\2\2\u035a\u0354\3\2\2\2\u035a\u0355"+
		"\3\2\2\2\u035bW\3\2\2\2\u035c\u035d\b-\1\2\u035d\u035e\5V,\2\u035e\u0365"+
		"\3\2\2\2\u035f\u0360\f\3\2\2\u0360\u0361\5Z.\2\u0361\u0362\5V,\2\u0362"+
		"\u0364\3\2\2\2\u0363\u035f\3\2\2\2\u0364\u0367\3\2\2\2\u0365\u0363\3\2"+
		"\2\2\u0365\u0366\3\2\2\2\u0366Y\3\2\2\2\u0367\u0365\3\2\2\2\u0368\u037d"+
		"\7`\2\2\u0369\u037d\7\u0082\2\2\u036a\u037d\7c\2\2\u036b\u037d\7d\2\2"+
		"\u036c\u037d\7e\2\2\u036d\u037d\7a\2\2\u036e\u037d\7b\2\2\u036f\u037d"+
		"\7v\2\2\u0370\u037d\5\2\2\2\u0371\u037d\7l\2\2\u0372\u037d\7m\2\2\u0373"+
		"\u037d\7{\2\2\u0374\u037d\7|\2\2\u0375\u037d\7y\2\2\u0376\u037d\7z\2\2"+
		"\u0377\u037d\7g\2\2\u0378\u037d\7f\2\2\u0379\u037d\7h\2\2\u037a\u037d"+
		"\7}\2\2\u037b\u037d\7~\2\2\u037c\u0368\3\2\2\2\u037c\u0369\3\2\2\2\u037c"+
		"\u036a\3\2\2\2\u037c\u036b\3\2\2\2\u037c\u036c\3\2\2\2\u037c\u036d\3\2"+
		"\2\2\u037c\u036e\3\2\2\2\u037c\u036f\3\2\2\2\u037c\u0370\3\2\2\2\u037c"+
		"\u0371\3\2\2\2\u037c\u0372\3\2\2\2\u037c\u0373\3\2\2\2\u037c\u0374\3\2"+
		"\2\2\u037c\u0375\3\2\2\2\u037c\u0376\3\2\2\2\u037c\u0377\3\2\2\2\u037c"+
		"\u0378\3\2\2\2\u037c\u0379\3\2\2\2\u037c\u037a\3\2\2\2\u037c\u037b\3\2"+
		"\2\2\u037d[\3\2\2\2\u037e\u0386\5X-\2\u037f\u0380\5X-\2\u0380\u0381\7"+
		"]\2\2\u0381\u0382\5d\63\2\u0382\u0383\7[\2\2\u0383\u0384\5`\61\2\u0384"+
		"\u0386\3\2\2\2\u0385\u037e\3\2\2\2\u0385\u037f\3\2\2\2\u0386]\3\2\2\2"+
		"\u0387\u0389\7D\2\2\u0388\u038a\5`\61\2\u0389\u0388\3\2\2\2\u0389\u038a"+
		"\3\2\2\2\u038a_\3\2\2\2\u038b\u0392\5\\/\2\u038c\u038d\5X-\2\u038d\u038e"+
		"\5b\62\2\u038e\u038f\5\u013a\u009e\2\u038f\u0392\3\2\2\2\u0390\u0392\5"+
		"^\60\2\u0391\u038b\3\2\2\2\u0391\u038c\3\2\2\2\u0391\u0390\3\2\2\2\u0392"+
		"a\3\2\2\2\u0393\u0394\t\7\2\2\u0394c\3\2\2\2\u0395\u0396\b\63\1\2\u0396"+
		"\u0397\5`\61\2\u0397\u039d\3\2\2\2\u0398\u0399\f\3\2\2\u0399\u039a\7\u0081"+
		"\2\2\u039a\u039c\5`\61\2\u039b\u0398\3\2\2\2\u039c\u039f\3\2\2\2\u039d"+
		"\u039b\3\2\2\2\u039d\u039e\3\2\2\2\u039ee\3\2\2\2\u039f\u039d\3\2\2\2"+
		"\u03a0\u03a1\5\\/\2\u03a1g\3\2\2\2\u03a2\u03bd\5n8\2\u03a3\u03a5\5\u00e2"+
		"r\2\u03a4\u03a3\3\2\2\2\u03a4\u03a5\3\2\2\2\u03a5\u03a6\3\2\2\2\u03a6"+
		"\u03bd\5p9\2\u03a7\u03a9\5\u00e2r\2\u03a8\u03a7\3\2\2\2\u03a8\u03a9\3"+
		"\2\2\2\u03a9\u03aa\3\2\2\2\u03aa\u03bd\5r:\2\u03ab\u03ad\5\u00e2r\2\u03ac"+
		"\u03ab\3\2\2\2\u03ac\u03ad\3\2\2\2\u03ad\u03ae\3\2\2\2\u03ae\u03bd\5v"+
		"<\2\u03af\u03b1\5\u00e2r\2\u03b0\u03af\3\2\2\2\u03b0\u03b1\3\2\2\2\u03b1"+
		"\u03b2\3\2\2\2\u03b2\u03bd\5x=\2\u03b3\u03b5\5\u00e2r\2\u03b4\u03b3\3"+
		"\2\2\2\u03b4\u03b5\3\2\2\2\u03b5\u03b6\3\2\2\2\u03b6\u03bd\5\u0080A\2"+
		"\u03b7\u03bd\5\u0082B\2\u03b8\u03ba\5\u00e2r\2\u03b9\u03b8\3\2\2\2\u03b9"+
		"\u03ba\3\2\2\2\u03ba\u03bb\3\2\2\2\u03bb\u03bd\5\u0192\u00ca\2\u03bc\u03a2"+
		"\3\2\2\2\u03bc\u03a4\3\2\2\2\u03bc\u03a8\3\2\2\2\u03bc\u03ac\3\2\2\2\u03bc"+
		"\u03b0\3\2\2\2\u03bc\u03b4\3\2\2\2\u03bc\u03b7\3\2\2\2\u03bc\u03b9\3\2"+
		"\2\2\u03bdi\3\2\2\2\u03be\u03c1\5p9\2\u03bf\u03c1\5\u008eH\2\u03c0\u03be"+
		"\3\2\2\2\u03c0\u03bf\3\2\2\2\u03c1k\3\2\2\2\u03c2\u03cb\5d\63\2\u03c3"+
		"\u03c5\5\u00e2r\2\u03c4\u03c3\3\2\2\2\u03c4\u03c5\3\2\2\2\u03c5\u03c6"+
		"\3\2\2\2\u03c6\u03c7\5\u0098M\2\u03c7\u03c8\5\u0100\u0081\2\u03c8\u03c9"+
		"\5\u0138\u009d\2\u03c9\u03cb\3\2\2\2\u03ca\u03c2\3\2\2\2\u03ca\u03c4\3"+
		"\2\2\2\u03cbm\3\2\2\2\u03cc\u03ce\5\u00e2r\2\u03cd\u03cc\3\2\2\2\u03cd"+
		"\u03ce\3\2\2\2\u03ce\u03cf\3\2\2\2\u03cf\u03d0\7\u008d\2\2\u03d0\u03d1"+
		"\7[\2\2\u03d1\u03e1\5h\65\2\u03d2\u03d4\5\u00e2r\2\u03d3\u03d2\3\2\2\2"+
		"\u03d3\u03d4\3\2\2\2\u03d4\u03d5\3\2\2\2\u03d5\u03d6\7\16\2\2\u03d6\u03d7"+
		"\5f\64\2\u03d7\u03d8\7[\2\2\u03d8\u03d9\5h\65\2\u03d9\u03e1\3\2\2\2\u03da"+
		"\u03dc\5\u00e2r\2\u03db\u03da\3\2\2\2\u03db\u03dc\3\2\2\2\u03dc\u03dd"+
		"\3\2\2\2\u03dd\u03de\7\32\2\2\u03de\u03df\7[\2\2\u03df\u03e1\5h\65\2\u03e0"+
		"\u03cd\3\2\2\2\u03e0\u03d3\3\2\2\2\u03e0\u03db\3\2\2\2\u03e1o\3\2\2\2"+
		"\u03e2\u03e4\5d\63\2\u03e3\u03e2\3\2\2\2\u03e3\u03e4\3\2\2\2\u03e4\u03e5"+
		"\3\2\2\2\u03e5\u03e6\7Z\2\2\u03e6q\3\2\2\2\u03e7\u03e9\7T\2\2\u03e8\u03ea"+
		"\5t;\2\u03e9\u03e8\3\2\2\2\u03e9\u03ea\3\2\2\2\u03ea\u03eb\3\2\2\2\u03eb"+
		"\u03ec\7U\2\2\u03ecs\3\2\2\2\u03ed\u03ee\b;\1\2\u03ee\u03ef\5h\65\2\u03ef"+
		"\u03f4\3\2\2\2\u03f0\u03f1\f\3\2\2\u03f1\u03f3\5h\65\2\u03f2\u03f0\3\2"+
		"\2\2\u03f3\u03f6\3\2\2\2\u03f4\u03f2\3\2\2\2\u03f4\u03f5\3\2\2\2\u03f5"+
		"u\3\2\2\2\u03f6\u03f4\3\2\2\2\u03f7\u03f9\7)\2\2\u03f8\u03fa\7\26\2\2"+
		"\u03f9\u03f8\3\2\2\2\u03f9\u03fa\3\2\2\2\u03fa\u03fb\3\2\2\2\u03fb\u03fd"+
		"\7X\2\2\u03fc\u03fe\5j\66\2\u03fd\u03fc\3\2\2\2\u03fd\u03fe\3\2\2\2\u03fe"+
		"\u03ff\3\2\2\2\u03ff\u0400\5l\67\2\u0400\u0401\7Y\2\2\u0401\u0402\5h\65"+
		"\2\u0402\u041b\3\2\2\2\u0403\u0405\7)\2\2\u0404\u0406\7\26\2\2\u0405\u0404"+
		"\3\2\2\2\u0405\u0406\3\2\2\2\u0406\u0407\3\2\2\2\u0407\u0409\7X\2\2\u0408"+
		"\u040a\5j\66\2\u0409\u0408\3\2\2\2\u0409\u040a\3\2\2\2\u040a\u040b\3\2"+
		"\2\2\u040b\u040c\5l\67\2\u040c\u040d\7Y\2\2\u040d\u040e\5h\65\2\u040e"+
		"\u040f\7\37\2\2\u040f\u0410\5h\65\2\u0410\u041b\3\2\2\2\u0411\u0412\7"+
		"@\2\2\u0412\u0414\7X\2\2\u0413\u0415\5j\66\2\u0414\u0413\3\2\2\2\u0414"+
		"\u0415\3\2\2\2\u0415\u0416\3\2\2\2\u0416\u0417\5l\67\2\u0417\u0418\7Y"+
		"\2\2\u0418\u0419\5h\65\2\u0419\u041b\3\2\2\2\u041a\u03f7\3\2\2\2\u041a"+
		"\u0403\3\2\2\2\u041a\u0411\3\2\2\2\u041bw\3\2\2\2\u041c\u041d\7Q\2\2\u041d"+
		"\u041e\7X\2\2\u041e\u041f\5l\67\2\u041f\u0420\7Y\2\2\u0420\u0421\5h\65"+
		"\2\u0421\u0440\3\2\2\2\u0422\u0423\7\34\2\2\u0423\u0424\5h\65\2\u0424"+
		"\u0425\7Q\2\2\u0425\u0426\7X\2\2\u0426\u0427\5d\63\2\u0427\u0428\7Y\2"+
		"\2\u0428\u0429\7Z\2\2\u0429\u0440\3\2\2\2\u042a\u042b\7&\2\2\u042b\u042c"+
		"\7X\2\2\u042c\u042e\5j\66\2\u042d\u042f\5l\67\2\u042e\u042d\3\2\2\2\u042e"+
		"\u042f\3\2\2\2\u042f\u0430\3\2\2\2\u0430\u0432\7Z\2\2\u0431\u0433\5d\63"+
		"\2\u0432\u0431\3\2\2\2\u0432\u0433\3\2\2\2\u0433\u0434\3\2\2\2\u0434\u0435"+
		"\7Y\2\2\u0435\u0436\5h\65\2\u0436\u0440\3\2\2\2\u0437\u0438\7&\2\2\u0438"+
		"\u0439\7X\2\2\u0439\u043a\5|?\2\u043a\u043b\7[\2\2\u043b\u043c\5~@\2\u043c"+
		"\u043d\7Y\2\2\u043d\u043e\5h\65\2\u043e\u0440\3\2\2\2\u043f\u041c\3\2"+
		"\2\2\u043f\u0422\3\2\2\2\u043f\u042a\3\2\2\2\u043f\u0437\3\2\2\2\u0440"+
		"y\3\2\2\2\u0441\u0443\5\u00e2r\2\u0442\u0441\3\2\2\2\u0442\u0443\3\2\2"+
		"\2\u0443\u0444\3\2\2\2\u0444\u0445\5\u0098M\2\u0445\u0446\5\u0100\u0081"+
		"\2\u0446\u0453\3\2\2\2\u0447\u0449\5\u00e2r\2\u0448\u0447\3\2\2\2\u0448"+
		"\u0449\3\2\2\2\u0449\u044a\3\2\2\2\u044a\u044c\5\u0098M\2\u044b\u044d"+
		"\5\u0114\u008b\2\u044c\u044b\3\2\2\2\u044c\u044d\3\2\2\2\u044d\u044e\3"+
		"\2\2\2\u044e\u044f\7V\2\2\u044f\u0450\5\u019e\u00d0\2\u0450\u0451\7W\2"+
		"\2\u0451\u0453\3\2\2\2\u0452\u0442\3\2\2\2\u0452\u0448\3\2\2\2\u0453{"+
		"\3\2\2\2\u0454\u0456\5\u00e2r\2\u0455\u0454\3\2\2\2\u0455\u0456\3\2\2"+
		"\2\u0456\u0457\3\2\2\2\u0457\u0458\5\u0098M\2\u0458\u0459\5\u0100\u0081"+
		"\2\u0459}\3\2\2\2\u045a\u045b\5\u0140\u00a1\2\u045b\177\3\2\2\2\u045c"+
		"\u045d\7\r\2\2\u045d\u0469\7Z\2\2\u045e\u045f\7\30\2\2\u045f\u0469\7Z"+
		"\2\2\u0460\u0462\78\2\2\u0461\u0463\5\u0140\u00a1\2\u0462\u0461\3\2\2"+
		"\2\u0462\u0463\3\2\2\2\u0463\u0464\3\2\2\2\u0464\u0469\7Z\2\2\u0465\u0466"+
		"\7(\2\2\u0466\u0467\7\u008d\2\2\u0467\u0469\7Z\2\2\u0468\u045c\3\2\2\2"+
		"\u0468\u045e\3\2\2\2\u0468\u0460\3\2\2\2\u0468\u0465\3\2\2\2\u0469\u0081"+
		"\3\2\2\2\u046a\u046b\5\u0088E\2\u046b\u0083\3\2\2\2\u046c\u046d\bC\1\2"+
		"\u046d\u046e\5\u0086D\2\u046e\u0473\3\2\2\2\u046f\u0470\f\3\2\2\u0470"+
		"\u0472\5\u0086D\2\u0471\u046f\3\2\2\2\u0472\u0475\3\2\2\2\u0473\u0471"+
		"\3\2\2\2\u0473\u0474\3\2\2\2\u0474\u0085\3\2\2\2\u0475\u0473\3\2\2\2\u0476"+
		"\u0482\5\u0088E\2\u0477\u0482\5\u008aF\2\u0478\u0482\5\u012a\u0096\2\u0479"+
		"\u0482\5\u0178\u00bd\2\u047a\u0482\5\u0190\u00c9\2\u047b\u0482\5\u018c"+
		"\u00c7\2\u047c\u0482\5\u018e\u00c8\2\u047d\u0482\5\u00e0q\2\u047e\u0482"+
		"\5\u00c6d\2\u047f\u0482\5\u0092J\2\u0480\u0482\5\u0094K\2\u0481\u0476"+
		"\3\2\2\2\u0481\u0477\3\2\2\2\u0481\u0478\3\2\2\2\u0481\u0479\3\2\2\2\u0481"+
		"\u047a\3\2\2\2\u0481\u047b\3\2\2\2\u0481\u047c\3\2\2\2\u0481\u047d\3\2"+
		"\2\2\u0481\u047e\3\2\2\2\u0481\u047f\3\2\2\2\u0481\u0480\3\2\2\2\u0482"+
		"\u0087\3\2\2\2\u0483\u048c\5\u008eH\2\u0484\u048c\5\u00dep\2\u0485\u048c"+
		"\5\u00d2j\2\u0486\u048c\5\u00d6l\2\u0487\u048c\5\u00dco\2\u0488\u048c"+
		"\5\u0090I\2\u0489\u048c\5\u008cG\2\u048a\u048c\5\u00ba^\2\u048b\u0483"+
		"\3\2\2\2\u048b\u0484\3\2\2\2\u048b\u0485\3\2\2\2\u048b\u0486\3\2\2\2\u048b"+
		"\u0487\3\2\2\2\u048b\u0488\3\2\2\2\u048b\u0489\3\2\2\2\u048b\u048a\3\2"+
		"\2\2\u048c\u0089\3\2\2\2\u048d\u048f\5\u00e2r\2\u048e\u048d\3\2\2\2\u048e"+
		"\u048f\3\2\2\2\u048f\u0490\3\2\2\2\u0490\u0491\5\u0100\u0081\2\u0491\u0492"+
		"\7Z\2\2\u0492\u008b\3\2\2\2\u0493\u0494\7L\2\2\u0494\u0496\7\u008d\2\2"+
		"\u0495\u0497\5\u00e2r\2\u0496\u0495\3\2\2\2\u0496\u0497\3\2\2\2\u0497"+
		"\u0498\3\2\2\2\u0498\u0499\7k\2\2\u0499\u049a\5\u0118\u008d\2\u049a\u049b"+
		"\7Z\2\2\u049b\u008d\3\2\2\2\u049c\u049e\5\u0098M\2\u049d\u049f\5\u00fc"+
		"\177\2\u049e\u049d\3\2\2\2\u049e\u049f\3\2\2\2\u049f\u04a0\3\2\2\2\u04a0"+
		"\u04a1\7Z\2\2\u04a1\u04b5\3\2\2\2\u04a2\u04a3\5\u00e2r\2\u04a3\u04a4\5"+
		"\u0098M\2\u04a4\u04a5\5\u00fc\177\2\u04a5\u04a6\7Z\2\2\u04a6\u04b5\3\2"+
		"\2\2\u04a7\u04a9\5\u00e2r\2\u04a8\u04a7\3\2\2\2\u04a8\u04a9\3\2\2\2\u04a9"+
		"\u04aa\3\2\2\2\u04aa\u04ac\5\u0098M\2\u04ab\u04ad\5\u0114\u008b\2\u04ac"+
		"\u04ab\3\2\2\2\u04ac\u04ad\3\2\2\2\u04ad\u04ae\3\2\2\2\u04ae\u04af\7V"+
		"\2\2\u04af\u04b0\5\u019e\u00d0\2\u04b0\u04b1\7W\2\2\u04b1\u04b2\5\u0136"+
		"\u009c\2\u04b2\u04b3\7Z\2\2\u04b3\u04b5\3\2\2\2\u04b4\u049c\3\2\2\2\u04b4"+
		"\u04a2\3\2\2\2\u04b4\u04a8\3\2\2\2\u04b5\u008f\3\2\2\2\u04b6\u04b7\7="+
		"\2\2\u04b7\u04b8\7X\2\2\u04b8\u04b9\5f\64\2\u04b9\u04ba\7Y\2\2\u04ba\u04bb"+
		"\7Z\2\2\u04bb\u04c5\3\2\2\2\u04bc\u04bd\7=\2\2\u04bd\u04be\7X\2\2\u04be"+
		"\u04bf\5f\64\2\u04bf\u04c0\7\u0081\2\2\u04c0\u04c1\7\u0088\2\2\u04c1\u04c2"+
		"\7Y\2\2\u04c2\u04c3\7Z\2\2\u04c3\u04c5\3\2\2\2\u04c4\u04b6\3\2\2\2\u04c4"+
		"\u04bc\3\2\2\2\u04c5\u0091\3\2\2\2\u04c6\u04c7\7Z\2\2\u04c7\u0093\3\2"+
		"\2\2\u04c8\u04c9\5\u00e2r\2\u04c9\u04ca\7Z\2\2\u04ca\u0095\3\2\2\2\u04cb"+
		"\u04d3\5\u0112\u008a\2\u04cc\u04d3\5\u00a0Q\2\u04cd\u04d3\5\u00a2R\2\u04ce"+
		"\u04d3\7\'\2\2\u04cf\u04d3\7G\2\2\u04d0\u04d3\7\26\2\2\u04d1\u04d3\7*"+
		"\2\2\u04d2\u04cb\3\2\2\2\u04d2\u04cc\3\2\2\2\u04d2\u04cd\3\2\2\2\u04d2"+
		"\u04ce\3\2\2\2\u04d2\u04cf\3\2\2\2\u04d2\u04d0\3\2\2\2\u04d2\u04d1\3\2"+
		"\2\2\u04d3\u0097\3\2\2\2\u04d4\u04d6\5\u009aN\2\u04d5\u04d4\3\2\2\2\u04d5"+
		"\u04d6\3\2\2\2\u04d6\u04d7\3\2\2\2\u04d7\u04d9\5\u00a8U\2\u04d8\u04da"+
		"\5\u009cO\2\u04d9\u04d8\3\2\2\2\u04d9\u04da\3\2\2\2\u04da\u04dc\3\2\2"+
		"\2\u04db\u04dd\5\u00e2r\2\u04dc\u04db\3\2\2\2\u04dc\u04dd\3\2\2\2\u04dd"+
		"\u0099\3\2\2\2\u04de\u04df\5\u009eP\2\u04df\u009b\3\2\2\2\u04e0\u04e1"+
		"\5\u009eP\2\u04e1\u009d\3\2\2\2\u04e2\u04e4\5\u0096L\2\u04e3\u04e5\5\u009e"+
		"P\2\u04e4\u04e3\3\2\2\2\u04e4\u04e5\3\2\2\2\u04e5\u009f\3\2\2\2\u04e6"+
		"\u04e7\t\b\2\2\u04e7\u00a1\3\2\2\2\u04e8\u04e9\t\t\2\2\u04e9\u00a3\3\2"+
		"\2\2\u04ea\u04ee\5\u00acW\2\u04eb\u04ee\5\u00b2Z\2\u04ec\u04ee\5\u018a"+
		"\u00c6\2\u04ed\u04ea\3\2\2\2\u04ed\u04eb\3\2\2\2\u04ed\u04ec\3\2\2\2\u04ee"+
		"\u00a5\3\2\2\2\u04ef\u04f1\5\u0112\u008a\2\u04f0\u04ef\3\2\2\2\u04f0\u04f1"+
		"\3\2\2\2\u04f1\u04f2\3\2\2\2\u04f2\u04f4\5\u00a4S\2\u04f3\u04f5\5\u00e2"+
		"r\2\u04f4\u04f3\3\2\2\2\u04f4\u04f5\3\2\2\2\u04f5\u00a7\3\2\2\2\u04f6"+
		"\u04fa\5\u00a4S\2\u04f7\u04fa\5\u0142\u00a2\2\u04f8\u04fa\5\u00b4[\2\u04f9"+
		"\u04f6\3\2\2\2\u04f9\u04f7\3\2\2\2\u04f9\u04f8\3\2\2\2\u04fa\u00a9\3\2"+
		"\2\2\u04fb\u04fd\5\u00a8U\2\u04fc\u04fe\5\u00e2r\2\u04fd\u04fc\3\2\2\2"+
		"\u04fd\u04fe\3\2\2\2\u04fe\u0503\3\2\2\2\u04ff\u0500\5\u00a8U\2\u0500"+
		"\u0501\5\u00aaV\2\u0501\u0503\3\2\2\2\u0502\u04fb\3\2\2\2\u0502\u04ff"+
		"\3\2\2\2\u0503\u00ab\3\2\2\2\u0504\u0506\5\26\f\2\u0505\u0504\3\2\2\2"+
		"\u0505\u0506\3\2\2\2\u0506\u0507\3\2\2\2\u0507\u0519\5\u00aeX\2\u0508"+
		"\u0519\7\20\2\2\u0509\u0519\7\21\2\2\u050a\u0519\7\22\2\2\u050b\u0519"+
		"\7\23\2\2\u050c\u0519\7P\2\2\u050d\u0519\7\f\2\2\u050e\u0519\79\2\2\u050f"+
		"\u0519\7+\2\2\u0510\u0519\7,\2\2\u0511\u0519\7:\2\2\u0512\u0519\7K\2\2"+
		"\u0513\u0519\7%\2\2\u0514\u0519\7\35\2\2\u0515\u0519\7N\2\2\u0516\u0519"+
		"\7\13\2\2\u0517\u0519\5\u00b0Y\2\u0518\u0505\3\2\2\2\u0518\u0508\3\2\2"+
		"\2\u0518\u0509\3\2\2\2\u0518\u050a\3\2\2\2\u0518\u050b\3\2\2\2\u0518\u050c"+
		"\3\2\2\2\u0518\u050d\3\2\2\2\u0518\u050e\3\2\2\2\u0518\u050f\3\2\2\2\u0518"+
		"\u0510\3\2\2\2\u0518\u0511\3\2\2\2\u0518\u0512\3\2\2\2\u0518\u0513\3\2"+
		"\2\2\u0518\u0514\3\2\2\2\u0518\u0515\3\2\2\2\u0518\u0516\3\2\2\2\u0518"+
		"\u0517\3\2\2\2\u0519\u00ad\3\2\2\2\u051a\u051d\7\u008d\2\2\u051b\u051d"+
		"\5\u0182\u00c2\2\u051c\u051a\3\2\2\2\u051c\u051b\3\2\2\2\u051d\u00af\3"+
		"\2\2\2\u051e\u051f\7\31\2\2\u051f\u0520\7X\2\2\u0520\u0521\5d\63\2\u0521"+
		"\u0522\7Y\2\2\u0522\u0528\3\2\2\2\u0523\u0524\7\31\2\2\u0524\u0525\7X"+
		"\2\2\u0525\u0526\7\13\2\2\u0526\u0528\7Y\2\2\u0527\u051e\3\2\2\2\u0527"+
		"\u0523\3\2\2\2\u0528\u00b1\3\2\2\2\u0529\u052b\5\u014a\u00a6\2\u052a\u052c"+
		"\5\u00e2r\2\u052b\u052a\3\2\2\2\u052b\u052c\3\2\2\2\u052c\u052e\3\2\2"+
		"\2\u052d\u052f\5\26\f\2\u052e\u052d\3\2\2\2\u052e\u052f\3\2\2\2\u052f"+
		"\u0530\3\2\2\2\u0530\u0531\7\u008d\2\2\u0531\u0542\3\2\2\2\u0532\u0533"+
		"\5\u014a\u00a6\2\u0533\u0534\5\u0182\u00c2\2\u0534\u0542\3\2\2\2\u0535"+
		"\u0536\5\u014a\u00a6\2\u0536\u0538\5\26\f\2\u0537\u0539\7A\2\2\u0538\u0537"+
		"\3\2\2\2\u0538\u0539\3\2\2\2\u0539\u053a\3\2\2\2\u053a\u053b\5\u0182\u00c2"+
		"\2\u053b\u0542\3\2\2\2\u053c\u053e\7 \2\2\u053d\u053f\5\26\f\2\u053e\u053d"+
		"\3\2\2\2\u053e\u053f\3\2\2\2\u053f\u0540\3\2\2\2\u0540\u0542\7\u008d\2"+
		"\2\u0541\u0529\3\2\2\2\u0541\u0532\3\2\2\2\u0541\u0535\3\2\2\2\u0541\u053c"+
		"\3\2\2\2\u0542\u00b3\3\2\2\2\u0543\u0544\5\u00b6\\\2\u0544\u0546\7T\2"+
		"\2\u0545\u0547\5\u00c0a\2\u0546\u0545\3\2\2\2\u0546\u0547\3\2\2\2\u0547"+
		"\u0548\3\2\2\2\u0548\u0549\7U\2\2\u0549\u0551\3\2\2\2\u054a\u054b\5\u00b6"+
		"\\\2\u054b\u054c\7T\2\2\u054c\u054d\5\u00c0a\2\u054d\u054e\7\u0081\2\2"+
		"\u054e\u054f\7U\2\2\u054f\u0551\3\2\2\2\u0550\u0543\3\2\2\2\u0550\u054a"+
		"\3\2\2\2\u0551\u00b5\3\2\2\2\u0552\u0554\5\u00bc_\2\u0553\u0555\5\u00e2"+
		"r\2\u0554\u0553\3\2\2\2\u0554\u0555\3\2\2\2\u0555\u0557\3\2\2\2\u0556"+
		"\u0558\5\u00b8]\2\u0557\u0556\3\2\2\2\u0557\u0558\3\2\2\2\u0558\u055a"+
		"\3\2\2\2\u0559\u055b\5\u00be`\2\u055a\u0559\3\2\2\2\u055a\u055b\3\2\2"+
		"\2\u055b\u00b7\3\2\2\2\u055c\u055e\5\26\f\2\u055d\u055c\3\2\2\2\u055d"+
		"\u055e\3\2\2\2\u055e\u055f\3\2\2\2\u055f\u0560\7\u008d\2\2\u0560\u00b9"+
		"\3\2\2\2\u0561\u0563\5\u00bc_\2\u0562\u0564\5\u00e2r\2\u0563\u0562\3\2"+
		"\2\2\u0563\u0564\3\2\2\2\u0564\u0566\3\2\2\2\u0565\u0567\5\26\f\2\u0566"+
		"\u0565\3\2\2\2\u0566\u0567\3\2\2\2\u0567\u0568\3\2\2\2\u0568\u056a\7\u008d"+
		"\2\2\u0569\u056b\5\u00be`\2\u056a\u0569\3\2\2\2\u056a\u056b\3\2\2\2\u056b"+
		"\u056c\3\2\2\2\u056c\u056d\7Z\2\2\u056d\u00bb\3\2\2\2\u056e\u0574\7 \2"+
		"\2\u056f\u0570\7 \2\2\u0570\u0574\7\24\2\2\u0571\u0572\7 \2\2\u0572\u0574"+
		"\7?\2\2\u0573\u056e\3\2\2\2\u0573\u056f\3\2\2\2\u0573\u0571\3\2\2\2\u0574"+
		"\u00bd\3\2\2\2\u0575\u0576\7[\2\2\u0576\u0577\5\u00a6T\2\u0577\u00bf\3"+
		"\2\2\2\u0578\u0579\ba\1\2\u0579\u057a\5\u00c2b\2\u057a\u0580\3\2\2\2\u057b"+
		"\u057c\f\3\2\2\u057c\u057d\7\u0081\2\2\u057d\u057f\5\u00c2b\2\u057e\u057b"+
		"\3\2\2\2\u057f\u0582\3\2\2\2\u0580\u057e\3\2\2\2\u0580\u0581\3\2\2\2\u0581"+
		"\u00c1\3\2\2\2\u0582\u0580\3\2\2\2\u0583\u0589\5\u00c4c\2\u0584\u0585"+
		"\5\u00c4c\2\u0585\u0586\7k\2\2\u0586\u0587\5f\64\2\u0587\u0589\3\2\2\2"+
		"\u0588\u0583\3\2\2\2\u0588\u0584\3\2\2\2\u0589\u00c3\3\2\2\2\u058a\u058c"+
		"\7\u008d\2\2\u058b\u058d\5\u00e2r\2\u058c\u058b\3\2\2\2\u058c\u058d\3"+
		"\2\2\2\u058d\u00c5\3\2\2\2\u058e\u0592\5\u00c8e\2\u058f\u0592\5\u00ca"+
		"f\2\u0590\u0592\5\u00ccg\2\u0591\u058e\3\2\2\2\u0591\u058f\3\2\2\2\u0591"+
		"\u0590\3\2\2\2\u0592\u00c7\3\2\2\2\u0593\u0595\7*\2\2\u0594\u0593\3\2"+
		"\2\2\u0594\u0595\3\2\2\2\u0595\u0596\3\2\2\2\u0596\u0598\7.\2\2\u0597"+
		"\u0599\5\u00e2r\2\u0598\u0597\3\2\2\2\u0598\u0599\3\2\2\2\u0599\u059a"+
		"\3\2\2\2\u059a\u059b\7\u008d\2\2\u059b\u059c\7T\2\2\u059c\u059d\5\u00d0"+
		"i\2\u059d\u059e\7U\2\2\u059e\u00c9\3\2\2\2\u059f\u05a1\7*\2\2\u05a0\u059f"+
		"\3\2\2\2\u05a0\u05a1\3\2\2\2\u05a1\u05a2\3\2\2\2\u05a2\u05a4\7.\2\2\u05a3"+
		"\u05a5\5\u00e2r\2\u05a4\u05a3\3\2\2\2\u05a4\u05a5\3\2\2\2\u05a5\u05a6"+
		"\3\2\2\2\u05a6\u05a7\7T\2\2\u05a7\u05a8\5\u00d0i\2\u05a8\u05a9\7U\2\2"+
		"\u05a9\u00cb\3\2\2\2\u05aa\u05ab\7.\2\2\u05ab\u05ac\5\u00ceh\2\u05ac\u05ad"+
		"\7^\2\2\u05ad\u05ae\7\u008d\2\2\u05ae\u05af\7T\2\2\u05af\u05b0\5\u00d0"+
		"i\2\u05b0\u05b1\7U\2\2\u05b1\u00cd\3\2\2\2\u05b2\u05b3\bh\1\2\u05b3\u05b4"+
		"\7\u008d\2\2\u05b4\u05ba\3\2\2\2\u05b5\u05b6\f\3\2\2\u05b6\u05b7\7^\2"+
		"\2\u05b7\u05b9\7\u008d\2\2\u05b8\u05b5\3\2\2\2\u05b9\u05bc\3\2\2\2\u05ba"+
		"\u05b8\3\2\2\2\u05ba\u05bb\3\2\2\2\u05bb\u00cf\3\2\2\2\u05bc\u05ba\3\2"+
		"\2\2\u05bd\u05bf\5\u0084C\2\u05be\u05bd\3\2\2\2\u05be\u05bf\3\2\2\2\u05bf"+
		"\u00d1\3\2\2\2\u05c0\u05c1\7.\2\2\u05c1\u05c2\7\u008d\2\2\u05c2\u05c3"+
		"\7k\2\2\u05c3\u05c4\5\u00d4k\2\u05c4\u05c5\7Z\2\2\u05c5\u00d3\3\2\2\2"+
		"\u05c6\u05c8\5\26\f\2\u05c7\u05c6\3\2\2\2\u05c7\u05c8\3\2\2\2\u05c8\u05c9"+
		"\3\2\2\2\u05c9\u05ca\5\4\3\2\u05ca\u00d5\3\2\2\2\u05cb\u05cc\7L\2\2\u05cc"+
		"\u05cd\5\u00d8m\2\u05cd\u05ce\7Z\2\2\u05ce\u00d7\3\2\2\2\u05cf\u05d0\b"+
		"m\1\2\u05d0\u05d2\5\u00dan\2\u05d1\u05d3\7\\\2\2\u05d2\u05d1\3\2\2\2\u05d2"+
		"\u05d3\3\2\2\2\u05d3\u05dc\3\2\2\2\u05d4\u05d5\f\3\2\2\u05d5\u05d6\7\u0081"+
		"\2\2\u05d6\u05d8\5\u00dan\2\u05d7\u05d9\7\\\2\2\u05d8\u05d7\3\2\2\2\u05d8"+
		"\u05d9\3\2\2\2\u05d9\u05db\3\2\2\2\u05da\u05d4\3\2\2\2\u05db\u05de\3\2"+
		"\2\2\u05dc\u05da\3\2\2\2\u05dc\u05dd\3\2\2\2\u05dd\u00d9\3\2\2\2\u05de"+
		"\u05dc\3\2\2\2\u05df\u05e1\5\u00aeX\2\u05e0\u05df\3\2\2\2\u05e0\u05e1"+
		"\3\2\2\2\u05e1\u05e2\3\2\2\2\u05e2\u05e3\5\26\f\2\u05e3\u05e4\5\22\n\2"+
		"\u05e4\u00db\3\2\2\2\u05e5\u05e7\5\u00e2r\2\u05e6\u05e5\3\2\2\2\u05e6"+
		"\u05e7\3\2\2\2\u05e7\u05e8\3\2\2\2\u05e8\u05e9\7L\2\2\u05e9\u05eb\7.\2"+
		"\2\u05ea\u05ec\5\26\f\2\u05eb\u05ea\3\2\2\2\u05eb\u05ec\3\2\2\2\u05ec"+
		"\u05ed\3\2\2\2\u05ed\u05ee\5\4\3\2\u05ee\u05ef\7Z\2\2\u05ef\u00dd\3\2"+
		"\2\2\u05f0\u05f2\5\u00e2r\2\u05f1\u05f0\3\2\2\2\u05f1\u05f2\3\2\2\2\u05f2"+
		"\u05f3\3\2\2\2\u05f3\u05f4\7\n\2\2\u05f4\u05f5\7X\2\2\u05f5\u05f6\7\u0088"+
		"\2\2\u05f6\u05f7\7Y\2\2\u05f7\u05f8\7Z\2\2\u05f8\u00df\3\2\2\2\u05f9\u05fa"+
		"\7#\2\2\u05fa\u05fb\7\u0088\2\2\u05fb\u05fd\7T\2\2\u05fc\u05fe\5\u0084"+
		"C\2\u05fd\u05fc\3\2\2\2\u05fd\u05fe\3\2\2\2\u05fe\u05ff\3\2\2\2\u05ff"+
		"\u0604\7U\2\2\u0600\u0601\7#\2\2\u0601\u0602\7\u0088\2\2\u0602\u0604\5"+
		"\u0086D\2\u0603\u05f9\3\2\2\2\u0603\u0600\3\2\2\2\u0604\u00e1\3\2\2\2"+
		"\u0605\u0606\br\1\2\u0606\u0607\5\u00e4s\2\u0607\u060c\3\2\2\2\u0608\u0609"+
		"\f\3\2\2\u0609\u060b\5\u00e4s\2\u060a\u0608\3\2\2\2\u060b\u060e\3\2\2"+
		"\2\u060c\u060a\3\2\2\2\u060c\u060d\3\2\2\2\u060d\u00e3\3\2\2\2\u060e\u060c"+
		"\3\2\2\2\u060f\u0610\7V\2\2\u0610\u0612\7V\2\2\u0611\u0613\5\u00e8u\2"+
		"\u0612\u0611\3\2\2\2\u0612\u0613\3\2\2\2\u0613\u0614\3\2\2\2\u0614\u0615"+
		"\5\u00eav\2\u0615\u0616\7W\2\2\u0616\u0617\7W\2\2\u0617\u061a\3\2\2\2"+
		"\u0618\u061a\5\u00e6t\2\u0619\u060f\3\2\2\2\u0619\u0618\3\2\2\2\u061a"+
		"\u00e5\3\2\2\2\u061b\u061c\7\b\2\2\u061c\u061d\7X\2\2\u061d\u061f\5\u0116"+
		"\u008c\2\u061e\u0620\7\\\2\2\u061f\u061e\3\2\2\2\u061f\u0620\3\2\2\2\u0620"+
		"\u0621\3\2\2\2\u0621\u0622\7Y\2\2\u0622\u062c\3\2\2\2\u0623\u0624\7\b"+
		"\2\2\u0624\u0625\7Y\2\2\u0625\u0627\5f\64\2\u0626\u0628\7\\\2\2\u0627"+
		"\u0626\3\2\2\2\u0627\u0628\3\2\2\2\u0628\u0629\3\2\2\2\u0629\u062a\7Y"+
		"\2\2\u062a\u062c\3\2\2\2\u062b\u061b\3\2\2\2\u062b\u0623\3\2\2\2\u062c"+
		"\u00e7\3\2\2\2\u062d\u062e\7L\2\2\u062e\u062f\5\u00f2z\2\u062f\u0630\7"+
		"[\2\2\u0630\u00e9\3\2\2\2\u0631\u0633\bv\1\2\u0632\u0634\5\u00ecw\2\u0633"+
		"\u0632\3\2\2\2\u0633\u0634\3\2\2\2\u0634\u0639\3\2\2\2\u0635\u0636\5\u00ec"+
		"w\2\u0636\u0637\7\\\2\2\u0637\u0639\3\2\2\2\u0638\u0631\3\2\2\2\u0638"+
		"\u0635\3\2\2\2\u0639\u0646\3\2\2\2\u063a\u063b\f\5\2\2\u063b\u063d\7\u0081"+
		"\2\2\u063c\u063e\5\u00ecw\2\u063d\u063c\3\2\2\2\u063d\u063e\3\2\2\2\u063e"+
		"\u0645\3\2\2\2\u063f\u0640\f\3\2\2\u0640\u0641\7\u0081\2\2\u0641\u0642"+
		"\5\u00ecw\2\u0642\u0643\7\\\2\2\u0643\u0645\3\2\2\2\u0644\u063a\3\2\2"+
		"\2\u0644\u063f\3\2\2\2\u0645\u0648\3\2\2\2\u0646\u0644\3\2\2\2\u0646\u0647"+
		"\3\2\2\2\u0647\u00eb\3\2\2\2\u0648\u0646\3\2\2\2\u0649\u064b\5\u00eex"+
		"\2\u064a\u064c\5\u00f4{\2\u064b\u064a\3\2\2\2\u064b\u064c\3\2\2\2\u064c"+
		"\u00ed\3\2\2\2\u064d\u0650\7\u008d\2\2\u064e\u0650\5\u00f0y\2\u064f\u064d"+
		"\3\2\2\2\u064f\u064e\3\2\2\2\u0650\u00ef\3\2\2\2\u0651\u0652\5\u00f2z"+
		"\2\u0652\u0653\7^\2\2\u0653\u0654\7\u008d\2\2\u0654\u00f1\3\2\2\2\u0655"+
		"\u0656\7\u008d\2\2\u0656\u00f3\3\2\2\2\u0657\u0659\7X\2\2\u0658\u065a"+
		"\5\u00f6|\2\u0659\u0658\3\2\2\2\u0659\u065a\3\2\2\2\u065a\u065b\3\2\2"+
		"\2\u065b\u065c\7Y\2\2\u065c\u00f5\3\2\2\2\u065d\u065e\b|\1\2\u065e\u065f"+
		"\5\u00f8}\2\u065f\u0664\3\2\2\2\u0660\u0661\f\3\2\2\u0661\u0663\5\u00f8"+
		"}\2\u0662\u0660\3\2\2\2\u0663\u0666\3\2\2\2\u0664\u0662\3\2\2\2\u0664"+
		"\u0665\3\2\2\2\u0665\u00f7\3\2\2\2\u0666\u0664\3\2\2\2\u0667\u0669\7X"+
		"\2\2\u0668\u066a\5\u00f6|\2\u0669\u0668\3\2\2\2\u0669\u066a\3\2\2\2\u066a"+
		"\u066b\3\2\2\2\u066b\u0678\7Y\2\2\u066c\u066e\7V\2\2\u066d\u066f\5\u00f6"+
		"|\2\u066e\u066d\3\2\2\2\u066e\u066f\3\2\2\2\u066f\u0670\3\2\2\2\u0670"+
		"\u0678\7W\2\2\u0671\u0673\7T\2\2\u0672\u0674\5\u00f6|\2\u0673\u0672\3"+
		"\2\2\2\u0673\u0674\3\2\2\2\u0674\u0675\3\2\2\2\u0675\u0678\7U\2\2\u0676"+
		"\u0678\5\u00fa~\2\u0677\u0667\3\2\2\2\u0677\u066c\3\2\2\2\u0677\u0671"+
		"\3\2\2\2\u0677\u0676\3\2\2\2\u0678\u00f9\3\2\2\2\u0679\u067a\n\n\2\2\u067a"+
		"\u00fb\3\2\2\2\u067b\u067c\b\177\1\2\u067c\u067d\5\u00fe\u0080\2\u067d"+
		"\u0683\3\2\2\2\u067e\u067f\f\3\2\2\u067f\u0680\7\u0081\2\2\u0680\u0682"+
		"\5\u00fe\u0080\2\u0681\u067e\3\2\2\2\u0682\u0685\3\2\2\2\u0683\u0681\3"+
		"\2\2\2\u0683\u0684\3\2\2\2\u0684\u00fd\3\2\2\2\u0685\u0683\3\2\2\2\u0686"+
		"\u0688\5\u0100\u0081\2\u0687\u0689\5\u0136\u009c\2\u0688\u0687\3\2\2\2"+
		"\u0688\u0689\3\2\2\2\u0689\u00ff\3\2\2\2\u068a\u068d\5\u0102\u0082\2\u068b"+
		"\u068d\5\u0104\u0083\2\u068c\u068a\3\2\2\2\u068c\u068b\3\2\2\2\u068d\u0101"+
		"\3\2\2\2\u068e\u068f\5\u010e\u0088\2\u068f\u0690\5\u0100\u0081\2\u0690"+
		"\u0103\3\2\2\2\u0691\u0693\b\u0083\1\2\u0692\u0694\7\\\2\2\u0693\u0692"+
		"\3\2\2\2\u0693\u0694\3\2\2\2\u0694\u0695\3\2\2\2\u0695\u0697\5\20\t\2"+
		"\u0696\u0698\5\u00e2r\2\u0697\u0696\3\2\2\2\u0697\u0698\3\2\2\2\u0698"+
		"\u069e\3\2\2\2\u0699\u069a\7X\2\2\u069a\u069b\5\u0102\u0082\2\u069b\u069c"+
		"\7Y\2\2\u069c\u069e\3\2\2\2\u069d\u0691\3\2\2\2\u069d\u0699\3\2\2\2\u069e"+
		"\u06ac\3\2\2\2\u069f\u06a0\f\5\2\2\u06a0\u06a2\7V\2\2\u06a1\u06a3\5f\64"+
		"\2\u06a2\u06a1\3\2\2\2\u06a2\u06a3\3\2\2\2\u06a3\u06a4\3\2\2\2\u06a4\u06a6"+
		"\7W\2\2\u06a5\u06a7\5\u00e2r\2\u06a6\u06a5\3\2\2\2\u06a6\u06a7\3\2\2\2"+
		"\u06a7\u06ab\3\2\2\2\u06a8\u06a9\f\4\2\2\u06a9\u06ab\5\u0106\u0084\2\u06aa"+
		"\u069f\3\2\2\2\u06aa\u06a8\3\2\2\2\u06ab\u06ae\3\2\2\2\u06ac\u06aa\3\2"+
		"\2\2\u06ac\u06ad\3\2\2\2\u06ad\u0105\3\2\2\2\u06ae\u06ac\3\2\2\2\u06af"+
		"\u06b0\5\u0108\u0085\2\u06b0\u06b1\5\u010a\u0086\2\u06b1\u0107\3\2\2\2"+
		"\u06b2\u06b3\7X\2\2\u06b3\u06b4\5\u0124\u0093\2\u06b4\u06b5\7Y\2\2\u06b5"+
		"\u0109\3\2\2\2\u06b6\u06b8\5\u0110\u0089\2\u06b7\u06b6\3\2\2\2\u06b7\u06b8"+
		"\3\2\2\2\u06b8\u06ba\3\2\2\2\u06b9\u06bb\5\u0114\u008b\2\u06ba\u06b9\3"+
		"\2\2\2\u06ba\u06bb\3\2\2\2\u06bb\u06bd\3\2\2\2\u06bc\u06be\5\u019c\u00cf"+
		"\2\u06bd\u06bc\3\2\2\2\u06bd\u06be\3\2\2\2\u06be\u06c0\3\2\2\2\u06bf\u06c1"+
		"\5\u00e2r\2\u06c0\u06bf\3\2\2\2\u06c0\u06c1\3\2\2\2\u06c1\u010b\3\2\2"+
		"\2\u06c2\u06c3\7\u0083\2\2\u06c3\u06c4\5\u0116\u008c\2\u06c4\u010d\3\2"+
		"\2\2\u06c5\u06c7\7c\2\2\u06c6\u06c8\5\u00e2r\2\u06c7\u06c6\3\2\2\2\u06c7"+
		"\u06c8\3\2\2\2\u06c8\u06ca\3\2\2\2\u06c9\u06cb\5\u0110\u0089\2\u06ca\u06c9"+
		"\3\2\2\2\u06ca\u06cb\3\2\2\2\u06cb\u06dd\3\2\2\2\u06cc\u06ce\7g\2\2\u06cd"+
		"\u06cf\5\u00e2r\2\u06ce\u06cd\3\2\2\2\u06ce\u06cf\3\2\2\2\u06cf\u06dd"+
		"\3\2\2\2\u06d0\u06d2\7}\2\2\u06d1\u06d3\5\u00e2r\2\u06d2\u06d1\3\2\2\2"+
		"\u06d2\u06d3\3\2\2\2\u06d3\u06dd\3\2\2\2\u06d4\u06d5\5\26\f\2\u06d5\u06d7"+
		"\7c\2\2\u06d6\u06d8\5\u00e2r\2\u06d7\u06d6\3\2\2\2\u06d7\u06d8\3\2\2\2"+
		"\u06d8\u06da\3\2\2\2\u06d9\u06db\5\u0110\u0089\2\u06da\u06d9\3\2\2\2\u06da"+
		"\u06db\3\2\2\2\u06db\u06dd\3\2\2\2\u06dc\u06c5\3\2\2\2\u06dc\u06cc\3\2"+
		"\2\2\u06dc\u06d0\3\2\2\2\u06dc\u06d4\3\2\2\2\u06dd\u010f\3\2\2\2\u06de"+
		"\u06e0\5\u0112\u008a\2\u06df\u06e1\5\u0110\u0089\2\u06e0\u06df\3\2\2\2"+
		"\u06e0\u06e1\3\2\2\2\u06e1\u0111\3\2\2\2\u06e2\u06e3\t\13\2\2\u06e3\u0113"+
		"\3\2\2\2\u06e4\u06e5\7g\2\2\u06e5\u06e6\7}\2\2\u06e6\u0115\3\2\2\2\u06e7"+
		"\u06e9\5\u00a6T\2\u06e8\u06ea\5\u011a\u008e\2\u06e9\u06e8\3\2\2\2\u06e9"+
		"\u06ea\3\2\2\2\u06ea\u0117\3\2\2\2\u06eb\u06ed\5\u00aaV\2\u06ec\u06ee"+
		"\5\u011a\u008e\2\u06ed\u06ec\3\2\2\2\u06ed\u06ee\3\2\2\2\u06ee\u0119\3"+
		"\2\2\2\u06ef\u06f8\5\u011c\u008f\2\u06f0\u06f2\5\u011e\u0090\2\u06f1\u06f0"+
		"\3\2\2\2\u06f1\u06f2\3\2\2\2\u06f2\u06f3\3\2\2\2\u06f3\u06f4\5\u0106\u0084"+
		"\2\u06f4\u06f5\5\u010c\u0087\2\u06f5\u06f8\3\2\2\2\u06f6\u06f8\5\u0120"+
		"\u0091\2\u06f7\u06ef\3\2\2\2\u06f7\u06f1\3\2\2\2\u06f7\u06f6\3\2\2\2\u06f8"+
		"\u011b\3\2\2\2\u06f9\u06ff\5\u011e\u0090\2\u06fa\u06fc\5\u010e\u0088\2"+
		"\u06fb\u06fd\5\u011c\u008f\2\u06fc\u06fb\3\2\2\2\u06fc\u06fd\3\2\2\2\u06fd"+
		"\u06ff\3\2\2\2\u06fe\u06f9\3\2\2\2\u06fe\u06fa\3\2\2\2\u06ff\u011d\3\2"+
		"\2\2\u0700\u0701\b\u0090\1\2\u0701\u070f\5\u0106\u0084\2\u0702\u0704\7"+
		"V\2\2\u0703\u0705\5f\64\2\u0704\u0703\3\2\2\2\u0704\u0705\3\2\2\2\u0705"+
		"\u0706\3\2\2\2\u0706\u0708\7W\2\2\u0707\u0709\5\u00e2r\2\u0708\u0707\3"+
		"\2\2\2\u0708\u0709\3\2\2\2\u0709\u070f\3\2\2\2\u070a\u070b\7X\2\2\u070b"+
		"\u070c\5\u011c\u008f\2\u070c\u070d\7Y\2\2\u070d\u070f\3\2\2\2\u070e\u0700"+
		"\3\2\2\2\u070e\u0702\3\2\2\2\u070e\u070a\3\2\2\2\u070f\u071d\3\2\2\2\u0710"+
		"\u0711\f\6\2\2\u0711\u071c\5\u0106\u0084\2\u0712\u0713\f\4\2\2\u0713\u0715"+
		"\7V\2\2\u0714\u0716\5f\64\2\u0715\u0714\3\2\2\2\u0715\u0716\3\2\2\2\u0716"+
		"\u0717\3\2\2\2\u0717\u0719\7W\2\2\u0718\u071a\5\u00e2r\2\u0719\u0718\3"+
		"\2\2\2\u0719\u071a\3\2\2\2\u071a\u071c\3\2\2\2\u071b\u0710\3\2\2\2\u071b"+
		"\u0712\3\2\2\2\u071c\u071f\3\2\2\2\u071d\u071b\3\2\2\2\u071d\u071e\3\2"+
		"\2\2\u071e\u011f\3\2\2\2\u071f\u071d\3\2\2\2\u0720\u0725\5\u0122\u0092"+
		"\2\u0721\u0722\5\u010e\u0088\2\u0722\u0723\5\u0120\u0091\2\u0723\u0725"+
		"\3\2\2\2\u0724\u0720\3\2\2\2\u0724\u0721\3\2\2\2\u0725\u0121\3\2\2\2\u0726"+
		"\u0727\b\u0092\1\2\u0727\u0728\7\\\2\2\u0728\u0736\3\2\2\2\u0729\u072a"+
		"\f\5\2\2\u072a\u0735\5\u0106\u0084\2\u072b\u072c\f\4\2\2\u072c\u072e\7"+
		"V\2\2\u072d\u072f\5f\64\2\u072e\u072d\3\2\2\2\u072e\u072f\3\2\2\2\u072f"+
		"\u0730\3\2\2\2\u0730\u0732\7W\2\2\u0731\u0733\5\u00e2r\2\u0732\u0731\3"+
		"\2\2\2\u0732\u0733\3\2\2\2\u0733\u0735\3\2\2\2\u0734\u0729\3\2\2\2\u0734"+
		"\u072b\3\2\2\2\u0735\u0738\3\2\2\2\u0736\u0734\3\2\2\2\u0736\u0737\3\2"+
		"\2\2\u0737\u0123\3\2\2\2\u0738\u0736\3\2\2\2\u0739\u073b\5\u0126\u0094"+
		"\2\u073a\u0739\3\2\2\2\u073a\u073b\3\2\2\2\u073b\u073d\3\2\2\2\u073c\u073e"+
		"\7\\\2\2\u073d\u073c\3\2\2\2\u073d\u073e\3\2\2\2\u073e\u0744\3\2\2\2\u073f"+
		"\u0740\5\u0126\u0094\2\u0740\u0741\7\u0081\2\2\u0741\u0742\7\\\2\2\u0742"+
		"\u0744\3\2\2\2\u0743\u073a\3\2\2\2\u0743\u073f\3\2\2\2\u0744\u0125\3\2"+
		"\2\2\u0745\u0746\b\u0094\1\2\u0746\u0747\5\u0128\u0095\2\u0747\u074d\3"+
		"\2\2\2\u0748\u0749\f\3\2\2\u0749\u074a\7\u0081\2\2\u074a\u074c\5\u0128"+
		"\u0095\2\u074b\u0748\3\2\2\2\u074c\u074f\3\2\2\2\u074d\u074b\3\2\2\2\u074d"+
		"\u074e\3\2\2\2\u074e\u0127\3\2\2\2\u074f\u074d\3\2\2\2\u0750\u0752\5\u00e2"+
		"r\2\u0751\u0750\3\2\2\2\u0751\u0752\3\2\2\2\u0752\u0753\3\2\2\2\u0753"+
		"\u0754\5\u0098M\2\u0754\u0755\5\u0100\u0081\2\u0755\u075f\3\2\2\2\u0756"+
		"\u0758\5\u00e2r\2\u0757\u0756\3\2\2\2\u0757\u0758\3\2\2\2\u0758\u0759"+
		"\3\2\2\2\u0759\u075a\5\u0098M\2\u075a\u075b\5\u0100\u0081\2\u075b\u075c"+
		"\7k\2\2\u075c\u075d\5\u013a\u009e\2\u075d\u075f\3\2\2\2\u075e\u0751\3"+
		"\2\2\2\u075e\u0757\3\2\2\2\u075f\u0129\3\2\2\2\u0760\u0762\5\u00e2r\2"+
		"\u0761\u0760\3\2\2\2\u0761\u0762\3\2\2\2\u0762\u0764\3\2\2\2\u0763\u0765"+
		"\5\u0098M\2\u0764\u0763\3\2\2\2\u0764\u0765\3\2\2\2\u0765\u0766\3\2\2"+
		"\2\u0766\u0768\5\u012c\u0097\2\u0767\u0769\5\u0154\u00ab\2\u0768\u0767"+
		"\3\2\2\2\u0768\u0769\3\2\2\2\u0769\u076a\3\2\2\2\u076a\u076b\5\u012e\u0098"+
		"\2\u076b\u012b\3\2\2\2\u076c\u076d\5\20\t\2\u076d\u076e\5\u0108\u0085"+
		"\2\u076e\u0770\5\u010a\u0086\2\u076f\u0771\5\u010c\u0087\2\u0770\u076f"+
		"\3\2\2\2\u0770\u0771\3\2\2\2\u0771\u012d\3\2\2\2\u0772\u0777\5\u0130\u0099"+
		"\2\u0773\u0777\5\u0194\u00cb\2\u0774\u0777\5\u0132\u009a\2\u0775\u0777"+
		"\5\u0134\u009b\2\u0776\u0772\3\2\2\2\u0776\u0773\3\2\2\2\u0776\u0774\3"+
		"\2\2\2\u0776\u0775\3\2\2\2\u0777\u012f\3\2\2\2\u0778\u077a\5\u016a\u00b6"+
		"\2\u0779\u0778\3\2\2\2\u0779\u077a\3\2\2\2\u077a\u077b\3\2\2\2\u077b\u077c"+
		"\5r:\2\u077c\u0131\3\2\2\2\u077d\u077e\7k\2\2\u077e\u077f\7\32\2\2\u077f"+
		"\u0780\7Z\2\2\u0780\u0133\3\2\2\2\u0781\u0782\7k\2\2\u0782\u0783\7\33"+
		"\2\2\u0783\u0784\7Z\2\2\u0784\u0135\3\2\2\2\u0785\u0786\5\u0138\u009d"+
		"\2\u0786\u0137\3\2\2\2\u0787\u0788\7k\2\2\u0788\u078b\5\u013a\u009e\2"+
		"\u0789\u078b\5\u013e\u00a0\2\u078a\u0787\3\2\2\2\u078a\u0789\3\2\2\2\u078b"+
		"\u0139\3\2\2\2\u078c\u078f\5`\61\2\u078d\u078f\5\u013e\u00a0\2\u078e\u078c"+
		"\3\2\2\2\u078e\u078d\3\2\2\2\u078f\u013b\3\2\2\2\u0790\u0791\b\u009f\1"+
		"\2\u0791\u0793\5\u013a\u009e\2\u0792\u0794\7\\\2\2\u0793\u0792\3\2\2\2"+
		"\u0793\u0794\3\2\2\2\u0794\u079d\3\2\2\2\u0795\u0796\f\3\2\2\u0796\u0797"+
		"\7\u0081\2\2\u0797\u0799\5\u013a\u009e\2\u0798\u079a\7\\\2\2\u0799\u0798"+
		"\3\2\2\2\u0799\u079a\3\2\2\2\u079a\u079c\3\2\2\2\u079b\u0795\3\2\2\2\u079c"+
		"\u079f\3\2\2\2\u079d\u079b\3\2\2\2\u079d\u079e\3\2\2\2\u079e\u013d\3\2"+
		"\2\2\u079f\u079d\3\2\2\2\u07a0\u07a1\7T\2\2\u07a1\u07a3\5\u013c\u009f"+
		"\2\u07a2\u07a4\7\u0081\2\2\u07a3\u07a2\3\2\2\2\u07a3\u07a4\3\2\2\2\u07a4"+
		"\u07a5\3\2\2\2\u07a5\u07a6\7U\2\2\u07a6\u07aa\3\2\2\2\u07a7\u07a8\7T\2"+
		"\2\u07a8\u07aa\7U\2\2\u07a9\u07a0\3\2\2\2\u07a9\u07a7\3\2\2\2\u07aa\u013f"+
		"\3\2\2\2\u07ab\u07ae\5d\63\2\u07ac\u07ae\5\u013e\u00a0\2\u07ad\u07ab\3"+
		"\2\2\2\u07ad\u07ac\3\2\2\2\u07ae\u0141\3\2\2\2\u07af\u07b0\5\u0144\u00a3"+
		"\2\u07b0\u07b2\7T\2\2\u07b1\u07b3\5\u014c\u00a7\2\u07b2\u07b1\3\2\2\2"+
		"\u07b2\u07b3\3\2\2\2\u07b3\u07b4\3\2\2\2\u07b4\u07b5\7U\2\2\u07b5\u0143"+
		"\3\2\2\2\u07b6\u07b8\5\u014a\u00a6\2\u07b7\u07b9\5\u00e2r\2\u07b8\u07b7"+
		"\3\2\2\2\u07b8\u07b9\3\2\2\2\u07b9\u07ba\3\2\2\2\u07ba\u07bc\5\u0146\u00a4"+
		"\2\u07bb\u07bd\5\u0148\u00a5\2\u07bc\u07bb\3\2\2\2\u07bc\u07bd\3\2\2\2"+
		"\u07bd\u07bf\3\2\2\2\u07be\u07c0\5\u015a\u00ae\2\u07bf\u07be\3\2\2\2\u07bf"+
		"\u07c0\3\2\2\2\u07c0\u07c9\3\2\2\2\u07c1\u07c3\5\u014a\u00a6\2\u07c2\u07c4"+
		"\5\u00e4s\2\u07c3\u07c2\3\2\2\2\u07c3\u07c4\3\2\2\2\u07c4\u07c6\3\2\2"+
		"\2\u07c5\u07c7\5\u015a\u00ae\2\u07c6\u07c5\3\2\2\2\u07c6\u07c7\3\2\2\2"+
		"\u07c7\u07c9\3\2\2\2\u07c8\u07b6\3\2\2\2\u07c8\u07c1\3\2\2\2\u07c9\u0145"+
		"\3\2\2\2\u07ca\u07cc\5\26\f\2\u07cb\u07ca\3\2\2\2\u07cb\u07cc\3\2\2\2"+
		"\u07cc\u07cd\3\2\2\2\u07cd\u07ce\5\b\5\2\u07ce\u0147\3\2\2\2\u07cf\u07d0"+
		"\7S\2\2\u07d0\u0149\3\2\2\2\u07d1\u07d2\t\f\2\2\u07d2\u014b\3\2\2\2\u07d3"+
		"\u07d5\5\u014e\u00a8\2\u07d4\u07d6\5\u014c\u00a7\2\u07d5\u07d4\3\2\2\2"+
		"\u07d5\u07d6\3\2\2\2\u07d6\u07dd\3\2\2\2\u07d7\u07d8\5\u0162\u00b2\2\u07d8"+
		"\u07da\7[\2\2\u07d9\u07db\5\u014c\u00a7\2\u07da\u07d9\3\2\2\2\u07da\u07db"+
		"\3\2\2\2\u07db\u07dd\3\2\2\2\u07dc\u07d3\3\2\2\2\u07dc\u07d7\3\2\2\2\u07dd"+
		"\u014d\3\2\2\2\u07de\u07e0\5\u00e2r\2\u07df\u07de\3\2\2\2\u07df\u07e0"+
		"\3\2\2\2\u07e0\u07e1\3\2\2\2\u07e1\u07e2\5\u0098M\2\u07e2\u07e3\5\u0150"+
		"\u00a9\2\u07e3\u07e4\7Z\2\2\u07e4\u07ed\3\2\2\2\u07e5\u07ed\5\u012a\u0096"+
		"\2\u07e6\u07ed\5\u00d6l\2\u07e7\u07ed\5\u0090I\2\u07e8\u07ed\5\u0178\u00bd"+
		"\2\u07e9\u07ed\5\u0190\u00c9\2\u07ea\u07ed\5\u008cG\2\u07eb\u07ed\5\u0092"+
		"J\2\u07ec\u07df\3\2\2\2\u07ec\u07e5\3\2\2\2\u07ec\u07e6\3\2\2\2\u07ec"+
		"\u07e7\3\2\2\2\u07ec\u07e8\3\2\2\2\u07ec\u07e9\3\2\2\2\u07ec\u07ea\3\2"+
		"\2\2\u07ec\u07eb\3\2\2\2\u07ed\u014f\3\2\2\2\u07ee\u07ef\b\u00a9\1\2\u07ef"+
		"\u07f0\5\u0152\u00aa\2\u07f0\u07f6\3\2\2\2\u07f1\u07f2\f\3\2\2\u07f2\u07f3"+
		"\7\u0081\2\2\u07f3\u07f5\5\u0152\u00aa\2\u07f4\u07f1\3\2\2\2\u07f5\u07f8"+
		"\3\2\2\2\u07f6\u07f4\3\2\2\2\u07f6\u07f7\3\2\2\2\u07f7\u0151\3\2\2\2\u07f8"+
		"\u07f6\3\2\2\2\u07f9\u07fb\5\u0100\u0081\2\u07fa\u07fc\5\u0154\u00ab\2"+
		"\u07fb\u07fa\3\2\2\2\u07fb\u07fc\3\2\2\2\u07fc\u0809\3\2\2\2\u07fd\u07fe"+
		"\5\u0100\u0081\2\u07fe\u07ff\5\u0138\u009d\2\u07ff\u0809\3\2\2\2\u0800"+
		"\u0802\7\u008d\2\2\u0801\u0800\3\2\2\2\u0801\u0802\3\2\2\2\u0802\u0804"+
		"\3\2\2\2\u0803\u0805\5\u00e2r\2\u0804\u0803\3\2\2\2\u0804\u0805\3\2\2"+
		"\2\u0805\u0806\3\2\2\2\u0806\u0807\7[\2\2\u0807\u0809\5f\64\2\u0808\u07f9"+
		"\3\2\2\2\u0808\u07fd\3\2\2\2\u0808\u0801\3\2\2\2\u0809\u0153\3\2\2\2\u080a"+
		"\u080b\b\u00ab\1\2\u080b\u080c\5\u0156\u00ac\2\u080c\u0811\3\2\2\2\u080d"+
		"\u080e\f\3\2\2\u080e\u0810\5\u0156\u00ac\2\u080f\u080d\3\2\2\2\u0810\u0813"+
		"\3\2\2\2\u0811\u080f\3\2\2\2\u0811\u0812\3\2\2\2\u0812\u0155\3\2\2\2\u0813"+
		"\u0811\3\2\2\2\u0814\u0815\t\r\2\2\u0815\u0157\3\2\2\2\u0816\u0817\7k"+
		"\2\2\u0817\u0818\7\u0084\2\2\u0818\u0159\3\2\2\2\u0819\u081a\7[\2\2\u081a"+
		"\u081b\5\u015c\u00af\2\u081b\u015b\3\2\2\2\u081c\u081d\b\u00af\1\2\u081d"+
		"\u081f\5\u015e\u00b0\2\u081e\u0820\7\\\2\2\u081f\u081e\3\2\2\2\u081f\u0820"+
		"\3\2\2\2\u0820\u0829\3\2\2\2\u0821\u0822\f\3\2\2\u0822\u0823\7\u0081\2"+
		"\2\u0823\u0825\5\u015e\u00b0\2\u0824\u0826\7\\\2\2\u0825\u0824\3\2\2\2"+
		"\u0825\u0826\3\2\2\2\u0826\u0828\3\2\2\2\u0827\u0821\3\2\2\2\u0828\u082b"+
		"\3\2\2\2\u0829\u0827\3\2\2\2\u0829\u082a\3\2\2\2\u082a\u015d\3\2\2\2\u082b"+
		"\u0829\3\2\2\2\u082c\u082e\5\u00e2r\2\u082d\u082c\3\2\2\2\u082d\u082e"+
		"\3\2\2\2\u082e\u082f\3\2\2\2\u082f\u0842\5\u0160\u00b1\2\u0830\u0832\5"+
		"\u00e2r\2\u0831\u0830\3\2\2\2\u0831\u0832\3\2\2\2\u0832\u0833\3\2\2\2"+
		"\u0833\u0835\7M\2\2\u0834\u0836\5\u0162\u00b2\2\u0835\u0834\3\2\2\2\u0835"+
		"\u0836\3\2\2\2\u0836\u0837\3\2\2\2\u0837\u0842\5\u0160\u00b1\2\u0838\u083a"+
		"\5\u00e2r\2\u0839\u0838\3\2\2\2\u0839\u083a\3\2\2\2\u083a\u083b\3\2\2"+
		"\2\u083b\u083d\5\u0162\u00b2\2\u083c\u083e\7M\2\2\u083d\u083c\3\2\2\2"+
		"\u083d\u083e\3\2\2\2\u083e\u083f\3\2\2\2\u083f\u0840\5\u0160\u00b1\2\u0840"+
		"\u0842\3\2\2\2\u0841\u082d\3\2\2\2\u0841\u0831\3\2\2\2\u0841\u0839\3\2"+
		"\2\2\u0842\u015f\3\2\2\2\u0843\u0845\5\26\f\2\u0844\u0843\3\2\2\2\u0844"+
		"\u0845\3\2\2\2\u0845\u0846\3\2\2\2\u0846\u084d\5\b\5\2\u0847\u0848\5\26"+
		"\f\2\u0848\u0849\7A\2\2\u0849\u084a\5\u0182\u00c2\2\u084a\u084d\3\2\2"+
		"\2\u084b\u084d\5\u00b0Y\2\u084c\u0844\3\2\2\2\u084c\u0847\3\2\2\2\u084c"+
		"\u084b\3\2\2\2\u084d\u0161\3\2\2\2\u084e\u084f\t\16\2\2\u084f\u0163\3"+
		"\2\2\2\u0850\u0851\7\62\2\2\u0851\u0852\5\u0166\u00b4\2\u0852\u0165\3"+
		"\2\2\2\u0853\u0855\5\u00a6T\2\u0854\u0856\5\u0168\u00b5\2\u0855\u0854"+
		"\3\2\2\2\u0855\u0856\3\2\2\2\u0856\u0167\3\2\2\2\u0857\u0859\5\u010e\u0088"+
		"\2\u0858\u085a\5\u0168\u00b5\2\u0859\u0858\3\2\2\2\u0859\u085a\3\2\2\2"+
		"\u085a\u0169\3\2\2\2\u085b\u085c\7[\2\2\u085c\u085d\5\u016c\u00b7\2\u085d"+
		"\u016b\3\2\2\2\u085e\u085f\b\u00b7\1\2\u085f\u0861\5\u016e\u00b8\2\u0860"+
		"\u0862\7\\\2\2\u0861\u0860\3\2\2\2\u0861\u0862\3\2\2\2\u0862\u086b\3\2"+
		"\2\2\u0863\u0864\f\3\2\2\u0864\u0865\7\u0081\2\2\u0865\u0867\5\u016e\u00b8"+
		"\2\u0866\u0868\7\\\2\2\u0867\u0866\3\2\2\2\u0867\u0868\3\2\2\2\u0868\u086a"+
		"\3\2\2\2\u0869\u0863\3\2\2\2\u086a\u086d\3\2\2\2\u086b\u0869\3\2\2\2\u086b"+
		"\u086c\3\2\2\2\u086c\u016d\3\2\2\2\u086d\u086b\3\2\2\2\u086e\u086f\5\u0170"+
		"\u00b9\2\u086f\u0871\7X\2\2\u0870\u0872\5> \2\u0871\u0870\3\2\2\2\u0871"+
		"\u0872\3\2\2\2\u0872\u0873\3\2\2\2\u0873\u0874\7Y\2\2\u0874\u0879\3\2"+
		"\2\2\u0875\u0876\5\u0170\u00b9\2\u0876\u0877\5\u013e\u00a0\2\u0877\u0879"+
		"\3\2\2\2\u0878\u086e\3\2\2\2\u0878\u0875\3\2\2\2\u0879\u016f\3\2\2\2\u087a"+
		"\u087b\7\u008d\2\2\u087b\u0171\3\2\2\2\u087c\u087d\7\62\2\2\u087d\u087e"+
		"\5\u0174\u00bb\2\u087e\u0173\3\2\2\2\u087f\u08b0\7/\2\2\u0880\u08b0\7"+
		"\33\2\2\u0881\u0882\7/\2\2\u0882\u0883\7T\2\2\u0883\u08b0\7W\2\2\u0884"+
		"\u0885\7\33\2\2\u0885\u0886\7T\2\2\u0886\u08b0\7W\2\2\u0887\u08b0\7a\2"+
		"\2\u0888\u08b0\7b\2\2\u0889\u08b0\7c\2\2\u088a\u08b0\7d\2\2\u088b\u08b0"+
		"\7e\2\2\u088c\u08b0\7f\2\2\u088d\u08b0\7g\2\2\u088e\u08b0\7h\2\2\u088f"+
		"\u08b0\7i\2\2\u0890\u08b0\7j\2\2\u0891\u08b0\7k\2\2\u0892\u08b0\7l\2\2"+
		"\u0893\u08b0\7m\2\2\u0894\u08b0\7n\2\2\u0895\u08b0\7o\2\2\u0896\u08b0"+
		"\7p\2\2\u0897\u08b0\7q\2\2\u0898\u08b0\7r\2\2\u0899\u08b0\7s\2\2\u089a"+
		"\u08b0\7t\2\2\u089b\u08b0\7u\2\2\u089c\u08b0\7v\2\2\u089d\u08b0\5\2\2"+
		"\2\u089e\u08b0\7x\2\2\u089f\u08b0\7w\2\2\u08a0\u08b0\7y\2\2\u08a1\u08b0"+
		"\7z\2\2\u08a2\u08b0\7{\2\2\u08a3\u08b0\7|\2\2\u08a4\u08b0\7}\2\2\u08a5"+
		"\u08b0\7~\2\2\u08a6\u08b0\7\177\2\2\u08a7\u08b0\7\u0080\2\2\u08a8\u08b0"+
		"\7\u0081\2\2\u08a9\u08b0\7\u0082\2\2\u08aa\u08b0\7\u0083\2\2\u08ab\u08ac"+
		"\7X\2\2\u08ac\u08b0\7Y\2\2\u08ad\u08ae\7V\2\2\u08ae\u08b0\7W\2\2\u08af"+
		"\u087f\3\2\2\2\u08af\u0880\3\2\2\2\u08af\u0881\3\2\2\2\u08af\u0884\3\2"+
		"\2\2\u08af\u0887\3\2\2\2\u08af\u0888\3\2\2\2\u08af\u0889\3\2\2\2\u08af"+
		"\u088a\3\2\2\2\u08af\u088b\3\2\2\2\u08af\u088c\3\2\2\2\u08af\u088d\3\2"+
		"\2\2\u08af\u088e\3\2\2\2\u08af\u088f\3\2\2\2\u08af\u0890\3\2\2\2\u08af"+
		"\u0891\3\2\2\2\u08af\u0892\3\2\2\2\u08af\u0893\3\2\2\2\u08af\u0894\3\2"+
		"\2\2\u08af\u0895\3\2\2\2\u08af\u0896\3\2\2\2\u08af\u0897\3\2\2\2\u08af"+
		"\u0898\3\2\2\2\u08af\u0899\3\2\2\2\u08af\u089a\3\2\2\2\u08af\u089b\3\2"+
		"\2\2\u08af\u089c\3\2\2\2\u08af\u089d\3\2\2\2\u08af\u089e\3\2\2\2\u08af"+
		"\u089f\3\2\2\2\u08af\u08a0\3\2\2\2\u08af\u08a1\3\2\2\2\u08af\u08a2\3\2"+
		"\2\2\u08af\u08a3\3\2\2\2\u08af\u08a4\3\2\2\2\u08af\u08a5\3\2\2\2\u08af"+
		"\u08a6\3\2\2\2\u08af\u08a7\3\2\2\2\u08af\u08a8\3\2\2\2\u08af\u08a9\3\2"+
		"\2\2\u08af\u08aa\3\2\2\2\u08af\u08ab\3\2\2\2\u08af\u08ad\3\2\2\2\u08b0"+
		"\u0175\3\2\2\2\u08b1\u08b2\7\62\2\2\u08b2\u08b3\7\u0088\2\2\u08b3\u08b7"+
		"\7\u008d\2\2\u08b4\u08b5\7\62\2\2\u08b5\u08b7\7\u008c\2\2\u08b6\u08b1"+
		"\3\2\2\2\u08b6\u08b4\3\2\2\2\u08b7\u0177\3\2\2\2\u08b8\u08b9\7A\2\2\u08b9"+
		"\u08ba\7l\2\2\u08ba\u08bb\5\u017a\u00be\2\u08bb\u08bc\7m\2\2\u08bc\u08bd"+
		"\5\u0086D\2\u08bd\u0179\3\2\2\2\u08be\u08bf\b\u00be\1\2\u08bf\u08c0\5"+
		"\u017c\u00bf\2\u08c0\u08c6\3\2\2\2\u08c1\u08c2\f\3\2\2\u08c2\u08c3\7\u0081"+
		"\2\2\u08c3\u08c5\5\u017c\u00bf\2\u08c4\u08c1\3\2\2\2\u08c5\u08c8\3\2\2"+
		"\2\u08c6\u08c4\3\2\2\2\u08c6\u08c7\3\2\2\2\u08c7\u017b\3\2\2\2\u08c8\u08c6"+
		"\3\2\2\2\u08c9\u08cc\5\u017e\u00c0\2\u08ca\u08cc\5\u0128\u0095\2\u08cb"+
		"\u08c9\3\2\2\2\u08cb\u08ca\3\2\2\2\u08cc\u017d\3\2\2\2\u08cd\u08cf\5\u0180"+
		"\u00c1\2\u08ce\u08d0\7\\\2\2\u08cf\u08ce\3\2\2\2\u08cf\u08d0\3\2\2\2\u08d0"+
		"\u08d2\3\2\2\2\u08d1\u08d3\7\u008d\2\2\u08d2\u08d1\3\2\2\2\u08d2\u08d3"+
		"\3\2\2\2\u08d3\u08f2\3\2\2\2\u08d4\u08d6\5\u0180\u00c1\2\u08d5\u08d7\7"+
		"\u008d\2\2\u08d6\u08d5\3\2\2\2\u08d6\u08d7\3\2\2\2\u08d7\u08d8\3\2\2\2"+
		"\u08d8\u08d9\7k\2\2\u08d9\u08da\5\u0116\u008c\2\u08da\u08f2\3\2\2\2\u08db"+
		"\u08dc\7A\2\2\u08dc\u08dd\7l\2\2\u08dd\u08de\5\u017a\u00be\2\u08de\u08df"+
		"\7m\2\2\u08df\u08e1\5\u0180\u00c1\2\u08e0\u08e2\7\\\2\2\u08e1\u08e0\3"+
		"\2\2\2\u08e1\u08e2\3\2\2\2\u08e2\u08e4\3\2\2\2\u08e3\u08e5\7\u008d\2\2"+
		"\u08e4\u08e3\3\2\2\2\u08e4\u08e5\3\2\2\2\u08e5\u08f2\3\2\2\2\u08e6\u08e7"+
		"\7A\2\2\u08e7\u08e8\7l\2\2\u08e8\u08e9\5\u017a\u00be\2\u08e9\u08ea\7m"+
		"\2\2\u08ea\u08ec\5\u0180\u00c1\2\u08eb\u08ed\7\u008d\2\2\u08ec\u08eb\3"+
		"\2\2\2\u08ec\u08ed\3\2\2\2\u08ed\u08ee\3\2\2\2\u08ee\u08ef\7k\2\2\u08ef"+
		"\u08f0\5\20\t\2\u08f0\u08f2\3\2\2\2\u08f1\u08cd\3\2\2\2\u08f1\u08d4\3"+
		"\2\2\2\u08f1\u08db\3\2\2\2\u08f1\u08e6\3\2\2\2\u08f2\u017f\3\2\2\2\u08f3"+
		"\u08f4\t\17\2\2\u08f4\u0181\3\2\2\2\u08f5\u08f6\5\n\6\2\u08f6\u08f8\7"+
		"l\2\2\u08f7\u08f9\5\u0186\u00c4\2\u08f8\u08f7\3\2\2\2\u08f8\u08f9\3\2"+
		"\2\2\u08f9\u08fa\3\2\2\2\u08fa\u08fb\7m\2\2\u08fb\u0183\3\2\2\2\u08fc"+
		"\u090c\5\u0182\u00c2\2\u08fd\u08fe\5\u0172\u00ba\2\u08fe\u0900\7l\2\2"+
		"\u08ff\u0901\5\u0186\u00c4\2\u0900\u08ff\3\2\2\2\u0900\u0901\3\2\2\2\u0901"+
		"\u0902\3\2\2\2\u0902\u0903\7m\2\2\u0903\u090c\3\2\2\2\u0904\u0905\5\u0176"+
		"\u00bc\2\u0905\u0907\7l\2\2\u0906\u0908\5\u0186\u00c4\2\u0907\u0906\3"+
		"\2\2\2\u0907\u0908\3\2\2\2\u0908\u0909\3\2\2\2\u0909\u090a\7m\2\2\u090a"+
		"\u090c\3\2\2\2\u090b\u08fc\3\2\2\2\u090b\u08fd\3\2\2\2\u090b\u0904\3\2"+
		"\2\2\u090c\u0185\3\2\2\2\u090d\u090e\b\u00c4\1\2\u090e\u0910\5\u0188\u00c5"+
		"\2\u090f\u0911\7\\\2\2\u0910\u090f\3\2\2\2\u0910\u0911\3\2\2\2\u0911\u091a"+
		"\3\2\2\2\u0912\u0913\f\3\2\2\u0913\u0914\7\u0081\2\2\u0914\u0916\5\u0188"+
		"\u00c5\2\u0915\u0917\7\\\2\2\u0916\u0915\3\2\2\2\u0916\u0917\3\2\2\2\u0917"+
		"\u0919\3\2\2\2\u0918\u0912\3\2\2\2\u0919\u091c\3\2\2\2\u091a\u0918\3\2"+
		"\2\2\u091a\u091b\3\2\2\2\u091b\u0187\3\2\2\2\u091c\u091a\3\2\2\2\u091d"+
		"\u091e\5\u0116\u008c\2\u091e\u0189\3\2\2\2\u091f\u0920\7I\2\2\u0920\u0921"+
		"\5\26\f\2\u0921\u0922\7\u008d\2\2\u0922\u092b\3\2\2\2\u0923\u0924\7I\2"+
		"\2\u0924\u0926\5\26\f\2\u0925\u0927\7A\2\2\u0926\u0925\3\2\2\2\u0926\u0927"+
		"\3\2\2\2\u0927\u0928\3\2\2\2\u0928\u0929\5\u0182\u00c2\2\u0929\u092b\3"+
		"\2\2\2\u092a\u091f\3\2\2\2\u092a\u0923\3\2\2\2\u092b\u018b\3\2\2\2\u092c"+
		"\u092e\7#\2\2\u092d\u092c\3\2\2\2\u092d\u092e\3\2\2\2\u092e\u092f\3\2"+
		"\2\2\u092f\u0930\7A\2\2\u0930\u0931\5\u0086D\2\u0931\u018d\3\2\2\2\u0932"+
		"\u0933\7A\2\2\u0933\u0934\7l\2\2\u0934\u0935\7m\2\2\u0935\u0936\5\u0086"+
		"D\2\u0936\u018f\3\2\2\2\u0937\u0939\7!\2\2\u0938\u0937\3\2\2\2\u0938\u0939"+
		"\3\2\2\2\u0939\u093a\3\2\2\2\u093a\u093b\5\n\6\2\u093b\u093c\7X\2\2\u093c"+
		"\u093d\5\u0124\u0093\2\u093d\u093e\7Y\2\2\u093e\u093f\7\u0083\2\2\u093f"+
		"\u0940\5\u0182\u00c2\2\u0940\u0941\7Z\2\2\u0941\u0191\3\2\2\2\u0942\u0943"+
		"\7F\2\2\u0943\u0944\5r:\2\u0944\u0945\5\u0196\u00cc\2\u0945\u0193\3\2"+
		"\2\2\u0946\u0948\7F\2\2\u0947\u0949\5\u016a\u00b6\2\u0948\u0947\3\2\2"+
		"\2\u0948\u0949\3\2\2\2\u0949\u094a\3\2\2\2\u094a\u094b\5r:\2\u094b\u094c"+
		"\5\u0196\u00cc\2\u094c\u0195\3\2\2\2\u094d\u094f\5\u0198\u00cd\2\u094e"+
		"\u0950\5\u0196\u00cc\2\u094f\u094e\3\2\2\2\u094f\u0950\3\2\2\2\u0950\u0197"+
		"\3\2\2\2\u0951\u0952\7\17\2\2\u0952\u0953\7X\2\2\u0953\u0954\5\u019a\u00ce"+
		"\2\u0954\u0955\7Y\2\2\u0955\u0956\5r:\2\u0956\u0199\3\2\2\2\u0957\u0959"+
		"\5\u00e2r\2\u0958\u0957\3\2\2\2\u0958\u0959\3\2\2\2\u0959\u095a\3\2\2"+
		"\2\u095a\u095b\5\u00a6T\2\u095b\u095c\5\u0100\u0081\2\u095c\u0966\3\2"+
		"\2\2\u095d\u095f\5\u00e2r\2\u095e\u095d\3\2\2\2\u095e\u095f\3\2\2\2\u095f"+
		"\u0960\3\2\2\2\u0960\u0962\5\u00a6T\2\u0961\u0963\5\u011a\u008e\2\u0962"+
		"\u0961\3\2\2\2\u0962\u0963\3\2\2\2\u0963\u0966\3\2\2\2\u0964\u0966\7\\"+
		"\2\2\u0965\u0958\3\2\2\2\u0965\u095e\3\2\2\2\u0965\u0964\3\2\2\2\u0966"+
		"\u019b\3\2\2\2\u0967\u0968\7\60\2\2\u0968\u0969\7X\2\2\u0969\u096a\5f"+
		"\64\2\u096a\u096b\7Y\2\2\u096b\u0971\3\2\2\2\u096c\u0971\7\60\2\2\u096d"+
		"\u096e\7D\2\2\u096e\u096f\7X\2\2\u096f\u0971\7Y\2\2\u0970\u0967\3\2\2"+
		"\2\u0970\u096c\3\2\2\2\u0970\u096d\3\2\2\2\u0971\u019d\3\2\2\2\u0972\u0973"+
		"\b\u00d0\1\2\u0973\u0974\7\u008d\2\2\u0974\u097a\3\2\2\2\u0975\u0976\f"+
		"\3\2\2\u0976\u0977\7\u0081\2\2\u0977\u0979\7\u008d\2\2\u0978\u0975\3\2"+
		"\2\2\u0979\u097c\3\2\2\2\u097a\u0978\3\2";
	private static final String _serializedATNSegment1 =
		"\2\2\u097a\u097b\3\2\2\2\u097b\u019f\3\2\2\2\u097c\u097a\3\2\2\2\u097d"+
		"\u0985\5\u01a2\u00d2\2\u097e\u0985\7\u0086\2\2\u097f\u0985\7\u0087\2\2"+
		"\u0980\u0985\7\u0088\2\2\u0981\u0985\5\u01a4\u00d3\2\u0982\u0985\5\u01a6"+
		"\u00d4\2\u0983\u0985\5\u01a8\u00d5\2\u0984\u097d\3\2\2\2\u0984\u097e\3"+
		"\2\2\2\u0984\u097f\3\2\2\2\u0984\u0980\3\2\2\2\u0984\u0981\3\2\2\2\u0984"+
		"\u0982\3\2\2\2\u0984\u0983\3\2\2\2\u0985\u01a1\3\2\2\2\u0986\u0987\t\20"+
		"\2\2\u0987\u01a3\3\2\2\2\u0988\u0989\t\21\2\2\u0989\u01a5\3\2\2\2\u098a"+
		"\u098b\7\61\2\2\u098b\u01a7\3\2\2\2\u098c\u098d\t\22\2\2\u098d\u01a9\3"+
		"\2\2\2\u0133\u01af\u01b5\u01ba\u01c7\u01cb\u01d6\u01da\u01e0\u01e5\u01ea"+
		"\u01ec\u01f1\u01f4\u01f9\u01fb\u01ff\u0205\u020d\u0210\u0213\u0216\u021e"+
		"\u0225\u022b\u022f\u0236\u023c\u023f\u0258\u027a\u027f\u029b\u02a8\u02b2"+
		"\u02b8\u02c2\u02c4\u02ca\u02dc\u02fa\u02ff\u0303\u0307\u030a\u030e\u0314"+
		"\u0316\u031e\u0322\u032b\u0332\u0336\u033b\u033f\u0342\u0347\u034d\u035a"+
		"\u0365\u037c\u0385\u0389\u0391\u039d\u03a4\u03a8\u03ac\u03b0\u03b4\u03b9"+
		"\u03bc\u03c0\u03c4\u03ca\u03cd\u03d3\u03db\u03e0\u03e3\u03e9\u03f4\u03f9"+
		"\u03fd\u0405\u0409\u0414\u041a\u042e\u0432\u043f\u0442\u0448\u044c\u0452"+
		"\u0455\u0462\u0468\u0473\u0481\u048b\u048e\u0496\u049e\u04a8\u04ac\u04b4"+
		"\u04c4\u04d2\u04d5\u04d9\u04dc\u04e4\u04ed\u04f0\u04f4\u04f9\u04fd\u0502"+
		"\u0505\u0518\u051c\u0527\u052b\u052e\u0538\u053e\u0541\u0546\u0550\u0554"+
		"\u0557\u055a\u055d\u0563\u0566\u056a\u0573\u0580\u0588\u058c\u0591\u0594"+
		"\u0598\u05a0\u05a4\u05ba\u05be\u05c7\u05d2\u05d8\u05dc\u05e0\u05e6\u05eb"+
		"\u05f1\u05fd\u0603\u060c\u0612\u0619\u061f\u0627\u062b\u0633\u0638\u063d"+
		"\u0644\u0646\u064b\u064f\u0659\u0664\u0669\u066e\u0673\u0677\u0683\u0688"+
		"\u068c\u0693\u0697\u069d\u06a2\u06a6\u06aa\u06ac\u06b7\u06ba\u06bd\u06c0"+
		"\u06c7\u06ca\u06ce\u06d2\u06d7\u06da\u06dc\u06e0\u06e9\u06ed\u06f1\u06f7"+
		"\u06fc\u06fe\u0704\u0708\u070e\u0715\u0719\u071b\u071d\u0724\u072e\u0732"+
		"\u0734\u0736\u073a\u073d\u0743\u074d\u0751\u0757\u075e\u0761\u0764\u0768"+
		"\u0770\u0776\u0779\u078a\u078e\u0793\u0799\u079d\u07a3\u07a9\u07ad\u07b2"+
		"\u07b8\u07bc\u07bf\u07c3\u07c6\u07c8\u07cb\u07d5\u07da\u07dc\u07df\u07ec"+
		"\u07f6\u07fb\u0801\u0804\u0808\u0811\u081f\u0825\u0829\u082d\u0831\u0835"+
		"\u0839\u083d\u0841\u0844\u084c\u0855\u0859\u0861\u0867\u086b\u0871\u0878"+
		"\u08af\u08b6\u08c6\u08cb\u08cf\u08d2\u08d6\u08e1\u08e4\u08ec\u08f1\u08f8"+
		"\u0900\u0907\u090b\u0910\u0916\u091a\u0926\u092a\u092d\u0938\u0948\u094f"+
		"\u0958\u095e\u0962\u0965\u0970\u097a\u0984";
	public static final String _serializedATN = Utils.join(
		new String[] {
			_serializedATNSegment0,
			_serializedATNSegment1
		},
		""
	);
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}