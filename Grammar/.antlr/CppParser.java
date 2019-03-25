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
		BlockComment=1, LineComment=2, Whitespace=3, Newline=4, AlignAs=5, AlignOf=6, 
		Asm=7, Auto=8, Bool=9, Break=10, Case=11, Catch=12, Char=13, Char16=14, 
		Char32=15, Class=16, Const=17, ConstExpr=18, ConstCast=19, Continue=20, 
		DeclType=21, Default=22, Delete=23, Do=24, Double=25, DynamicCast=26, 
		Else=27, Enum=28, Explicit=29, Export=30, Extern=31, False=32, Float=33, 
		For=34, Friend=35, GoTo=36, If=37, Inline=38, Int=39, Long=40, Mutable=41, 
		Namespace=42, New=43, NoExcept=44, Nullptr=45, Operator=46, Private=47, 
		Protected=48, Public=49, Register=50, ReinterpretCast=51, Return=52, Short=53, 
		Signed=54, SizeOf=55, Static=56, StaticAssert=57, StaticCast=58, Struct=59, 
		Switch=60, Template=61, This=62, ThreadLocal=63, Throw=64, True=65, Try=66, 
		TypeDef=67, TypeId=68, TypeName=69, Union=70, Unsigned=71, Using=72, Virtual=73, 
		Void=74, Volatile=75, WChar=76, While=77, Override=78, Final=79, LeftBrace=80, 
		RightBrace=81, LeftBracket=82, RightBracket=83, LeftParenthesis=84, RightParenthesis=85, 
		Semicolon=86, Colon=87, Ellipsis=88, QuestionMark=89, DoubleColon=90, 
		Period=91, PeriodAsterisk=92, Plus=93, Minus=94, Asterisk=95, ForwardSlash=96, 
		Percent=97, Caret=98, Ampersand=99, VerticalBar=100, Tilde=101, ExclamationMark=102, 
		Equal=103, LessThan=104, GreaterThan=105, PlusEqual=106, MinusEqual=107, 
		AsteriskEqual=108, ForwardSlashEqual=109, PercentEqual=110, CaretEqual=111, 
		AmpersandEqual=112, VerticalBarEqual=113, DoubleLessThan=114, DoubleGreaterThan=115, 
		DoubleLessThanEqual=116, DoubleGreaterThanEqual=117, DoubleEqual=118, 
		ExclamationMarkEqual=119, LessThanEqual=120, GreaterThanEqual=121, DoubleAmpersand=122, 
		DoubleVerticalBar=123, DoublePlus=124, DoubleMinus=125, Comma=126, ArrowAsterisk=127, 
		Arrow=128, Zero=129, IntegerLiteral=130, FloatingPointLiteral=131, CharacterLiteral=132, 
		StringLiteral=133, UserDefinedIntegerLiteral=134, UserDefinedFloatingPointLiteral=135, 
		UserDefinedCharacterLiteral=136, UserDefinedStringLiteral=137, Identifier=138;
	public static final int
		RULE_namespaceName = 0, RULE_namespaceAlias = 1, RULE_className = 2, RULE_templateName = 3, 
		RULE_translationUnit = 4, RULE_primaryExpression = 5, RULE_identifierExpression = 6, 
		RULE_unqualifiedIdentifier = 7, RULE_qualifiedIdentifier = 8, RULE_nestedNameSpecifier = 9, 
		RULE_nestedNameSpecifierSequence = 10, RULE_lambdaExpression = 11, RULE_lambdaIntroducer = 12, 
		RULE_lambdaDeclarator = 13, RULE_lambdaCapture = 14, RULE_captureDefault = 15, 
		RULE_captureList = 16, RULE_capture = 17, RULE_simpleCapture = 18, RULE_initializerCapture = 19, 
		RULE_foldExpression = 20, RULE_foldOperator = 21, RULE_explicitTypeCoversionOperatorExpression = 22, 
		RULE_postfixOperator = 23, RULE_namedCastExpression = 24, RULE_memberAccessOperator = 25, 
		RULE_namedCastType = 26, RULE_typeIdentificationExpression = 27, RULE_postfixExpression = 28, 
		RULE_expressionList = 29, RULE_pseudoDestructorName = 30, RULE_unaryExpression = 31, 
		RULE_unaryOperator = 32, RULE_newExpression = 33, RULE_newPlacement = 34, 
		RULE_newTypeIdentifier = 35, RULE_newDeclarator = 36, RULE_noPointerNewDeclarator = 37, 
		RULE_newInitializer = 38, RULE_deleteExpression = 39, RULE_noExceptionExpression = 40, 
		RULE_castExpression = 41, RULE_pointerManipulationExpression = 42, RULE_multiplicativeExpression = 43, 
		RULE_additiveExpression = 44, RULE_shiftExpression = 45, RULE_relationalExpression = 46, 
		RULE_equalityExpression = 47, RULE_andExpression = 48, RULE_exclusiveOrExpression = 49, 
		RULE_inclusiveOrExpression = 50, RULE_logicalAndExpression = 51, RULE_logicalOrExpression = 52, 
		RULE_conditionalExpression = 53, RULE_throwExpression = 54, RULE_assignmentExpression = 55, 
		RULE_assignmentOperator = 56, RULE_expression = 57, RULE_constantExpression = 58, 
		RULE_statement = 59, RULE_initializerStatement = 60, RULE_condition = 61, 
		RULE_labeledStatement = 62, RULE_expressionStatement = 63, RULE_compoundStatement = 64, 
		RULE_statementSequence = 65, RULE_selectionStatement = 66, RULE_iterationStatement = 67, 
		RULE_forInitializerStatement = 68, RULE_forRangeDeclaration = 69, RULE_forRangeInitializer = 70, 
		RULE_jumpStatement = 71, RULE_declarationStatement = 72, RULE_declarationSequence = 73, 
		RULE_declaration = 74, RULE_blockDeclaration = 75, RULE_noDeclarationSpecifierFunctionDeclaration = 76, 
		RULE_aliasDeclaration = 77, RULE_simpleDeclaration = 78, RULE_staticAssertDeclaration = 79, 
		RULE_emptyDeclaration = 80, RULE_attributeDeclaration = 81, RULE_declarationSpecifier = 82, 
		RULE_declarationSpecifierSequence = 83, RULE_storageClassSpecifier = 84, 
		RULE_functionSpecifier = 85, RULE_typeSpecifier = 86, RULE_typeSpecifierSequence = 87, 
		RULE_definingTypeSpecifier = 88, RULE_definingTypeSpecifierSequence = 89, 
		RULE_simpleTypeSpecifier = 90, RULE_typeName = 91, RULE_declarationTypeSpecifier = 92, 
		RULE_elaboratedTypeSpecifier = 93, RULE_enumSpecifier = 94, RULE_enumHead = 95, 
		RULE_enumHeadName = 96, RULE_opaqueEnumDeclaration = 97, RULE_enumKey = 98, 
		RULE_enumBase = 99, RULE_enumeratorList = 100, RULE_enumeratorDefinition = 101, 
		RULE_enumerator = 102, RULE_namespaceDefinition = 103, RULE_namedNamespaceDefinition = 104, 
		RULE_unnamedNamespaceDefinition = 105, RULE_nestedNamespaceDefinition = 106, 
		RULE_enclosingNamespaceSpecifier = 107, RULE_namespaceBody = 108, RULE_namespaceAliasDefinition = 109, 
		RULE_qualifiedNamespaceSpecifier = 110, RULE_usingDeclaration = 111, RULE_usingDeclaratorList = 112, 
		RULE_usingDeclarator = 113, RULE_usingDirective = 114, RULE_asmDefinition = 115, 
		RULE_linkageSpecification = 116, RULE_attributeSpecifierSequence = 117, 
		RULE_attributeSpecifier = 118, RULE_alignmentSpecifier = 119, RULE_attributeUsingPrefix = 120, 
		RULE_attributeList = 121, RULE_attribute = 122, RULE_attributeToken = 123, 
		RULE_attributeScopedToken = 124, RULE_attributeNamespace = 125, RULE_attributeArgumentClause = 126, 
		RULE_balancedTokenSequence = 127, RULE_balancedToken = 128, RULE_initializerDeclaratorList = 129, 
		RULE_initializerDeclarator = 130, RULE_declarator = 131, RULE_pointerDeclarator = 132, 
		RULE_noPointerDeclarator = 133, RULE_parametersAndQualifiers = 134, RULE_functionParameters = 135, 
		RULE_functionQualifiers = 136, RULE_trailingReturnType = 137, RULE_pointerOperator = 138, 
		RULE_constVolatileQualifierSequence = 139, RULE_constVolatileQualifier = 140, 
		RULE_referenceQualifier = 141, RULE_typeIdentifier = 142, RULE_definingTypeIdentifier = 143, 
		RULE_abstractDeclarator = 144, RULE_pointerAbstractDeclarator = 145, RULE_noPointerAbstractDeclarator = 146, 
		RULE_abstractPackDeclarator = 147, RULE_noPointerAbstractPackDeclarator = 148, 
		RULE_parameterDeclarationClause = 149, RULE_parameterDeclarationList = 150, 
		RULE_parameterDeclaration = 151, RULE_functionDefinition = 152, RULE_functionDeclarator = 153, 
		RULE_functionBody = 154, RULE_regularFunctionBody = 155, RULE_explicitlyDefaultedFunction = 156, 
		RULE_deletedFunction = 157, RULE_initializer = 158, RULE_braceOrEqualInitializer = 159, 
		RULE_initializerClause = 160, RULE_initializerList = 161, RULE_bracedInitializerList = 162, 
		RULE_expressionOrBracedInitializerList = 163, RULE_classSpecifier = 164, 
		RULE_classHead = 165, RULE_classHeadName = 166, RULE_classVirtualSpecifier = 167, 
		RULE_classKey = 168, RULE_memberSpecification = 169, RULE_memberDeclaration = 170, 
		RULE_memberDeclaratorList = 171, RULE_memberDeclarator = 172, RULE_virtualSpecifierSequence = 173, 
		RULE_virtualSpecifier = 174, RULE_pureSpecifier = 175, RULE_baseClause = 176, 
		RULE_baseSpecifierList = 177, RULE_baseSpecifier = 178, RULE_classOrDecltype = 179, 
		RULE_accessSpecifier = 180, RULE_conversionFunctionIdentifier = 181, RULE_conversionTypeIdentifier = 182, 
		RULE_conversionDeclarator = 183, RULE_constructorInitializer = 184, RULE_memberInitializerList = 185, 
		RULE_memberInitializer = 186, RULE_memberInitializerIdentifier = 187, 
		RULE_operatorFunctionIdentifier = 188, RULE_anyOperator = 189, RULE_literalOperatorIdentifier = 190, 
		RULE_templateDeclaration = 191, RULE_templateParameterList = 192, RULE_templateParameter = 193, 
		RULE_typeParameter = 194, RULE_typeParameterKey = 195, RULE_simpleTemplateIdentifier = 196, 
		RULE_templateIdentifier = 197, RULE_templateArgumentList = 198, RULE_templateArgument = 199, 
		RULE_typenameSpecifier = 200, RULE_explicitInstantiation = 201, RULE_explicitSpecialization = 202, 
		RULE_deductionGuide = 203, RULE_tryBlock = 204, RULE_functionTryBlock = 205, 
		RULE_handlerSequence = 206, RULE_handler = 207, RULE_exceptionDeclaration = 208, 
		RULE_noExceptionSpecifier = 209, RULE_identifierList = 210, RULE_literal = 211, 
		RULE_integerLiteral = 212, RULE_booleanLiteral = 213, RULE_pointerLiteral = 214, 
		RULE_userDefinedLiteral = 215;
	public static final String[] ruleNames = {
		"namespaceName", "namespaceAlias", "className", "templateName", "translationUnit", 
		"primaryExpression", "identifierExpression", "unqualifiedIdentifier", 
		"qualifiedIdentifier", "nestedNameSpecifier", "nestedNameSpecifierSequence", 
		"lambdaExpression", "lambdaIntroducer", "lambdaDeclarator", "lambdaCapture", 
		"captureDefault", "captureList", "capture", "simpleCapture", "initializerCapture", 
		"foldExpression", "foldOperator", "explicitTypeCoversionOperatorExpression", 
		"postfixOperator", "namedCastExpression", "memberAccessOperator", "namedCastType", 
		"typeIdentificationExpression", "postfixExpression", "expressionList", 
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

	private static final String[] _LITERAL_NAMES = {
		null, null, null, null, null, "'alignas'", "'alignof'", "'asm'", "'auto'", 
		"'bool'", "'break'", "'case'", "'catch'", "'char'", "'char16_t'", "'char32_t'", 
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
	private static final String[] _SYMBOLIC_NAMES = {
		null, "BlockComment", "LineComment", "Whitespace", "Newline", "AlignAs", 
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
		enterRule(_localctx, 0, RULE_namespaceName);
		try {
			setState(434);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(432);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(433);
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
		enterRule(_localctx, 2, RULE_namespaceAlias);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(436);
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
		enterRule(_localctx, 4, RULE_className);
		try {
			setState(440);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(438);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(439);
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
		enterRule(_localctx, 6, RULE_templateName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(442);
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
		enterRule(_localctx, 8, RULE_translationUnit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(445);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
				{
				setState(444);
				declarationSequence(0);
				}
			}

			setState(447);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 10, RULE_primaryExpression);
		try {
			setState(458);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(449);
				literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(450);
				match(This);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(451);
				match(LeftParenthesis);
				setState(452);
				expression(0);
				setState(453);
				match(RightParenthesis);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(455);
				identifierExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(456);
				lambdaExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(457);
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
		enterRule(_localctx, 12, RULE_identifierExpression);
		try {
			setState(462);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(460);
				unqualifiedIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(461);
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
		enterRule(_localctx, 14, RULE_unqualifiedIdentifier);
		try {
			setState(471);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(464);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(465);
				operatorFunctionIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(466);
				conversionFunctionIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(467);
				literalOperatorIdentifier();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(468);
				match(Tilde);
				setState(469);
				declarationTypeSpecifier();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(470);
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
		enterRule(_localctx, 16, RULE_qualifiedIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(473);
			nestedNameSpecifier();
			setState(475);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Template) {
				{
				setState(474);
				match(Template);
				}
			}

			setState(477);
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
		enterRule(_localctx, 18, RULE_nestedNameSpecifier);
		try {
			setState(493);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DoubleColon:
				enterOuterAlt(_localctx, 1);
				{
				setState(479);
				match(DoubleColon);
				setState(481);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
				case 1:
					{
					setState(480);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(483);
				match(Identifier);
				setState(484);
				match(DoubleColon);
				setState(486);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
				case 1:
					{
					setState(485);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case DeclType:
				enterOuterAlt(_localctx, 3);
				{
				setState(488);
				declarationTypeSpecifier();
				setState(489);
				match(DoubleColon);
				setState(491);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
				case 1:
					{
					setState(490);
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
		enterRule(_localctx, 20, RULE_nestedNameSpecifierSequence);
		int _la;
		try {
			setState(508);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(495);
				match(Identifier);
				setState(496);
				match(DoubleColon);
				setState(498);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
				case 1:
					{
					setState(497);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(501);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(500);
					match(Template);
					}
				}

				setState(503);
				simpleTemplateIdentifier();
				setState(504);
				match(DoubleColon);
				setState(506);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
				case 1:
					{
					setState(505);
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
		enterRule(_localctx, 22, RULE_lambdaExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(510);
			lambdaIntroducer();
			setState(512);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LeftParenthesis) {
				{
				setState(511);
				lambdaDeclarator();
				}
			}

			setState(514);
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
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
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
		enterRule(_localctx, 24, RULE_lambdaIntroducer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(516);
			match(LeftBracket);
			setState(518);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==This || ((((_la - 95)) & ~0x3f) == 0 && ((1L << (_la - 95)) & ((1L << (Asterisk - 95)) | (1L << (Ampersand - 95)) | (1L << (Equal - 95)) | (1L << (Identifier - 95)))) != 0)) {
				{
				setState(517);
				lambdaCapture();
				}
			}

			setState(520);
			match(RightBracket);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ParameterDeclarationClauseContext parameterDeclarationClause() {
			return getRuleContext(ParameterDeclarationClauseContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 26, RULE_lambdaDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(522);
			match(LeftParenthesis);
			setState(523);
			parameterDeclarationClause();
			setState(524);
			match(RightParenthesis);
			setState(526);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (Unsigned - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (WChar - 67)))) != 0)) {
				{
				setState(525);
				declarationSpecifierSequence();
				}
			}

			setState(529);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NoExcept || _la==Throw) {
				{
				setState(528);
				noExceptionSpecifier();
				}
			}

			setState(532);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(531);
				attributeSpecifierSequence(0);
				}
			}

			setState(535);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(534);
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
		enterRule(_localctx, 28, RULE_lambdaCapture);
		try {
			setState(543);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(537);
				captureDefault();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(538);
				captureList(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(539);
				captureDefault();
				setState(540);
				match(Comma);
				setState(541);
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
		enterRule(_localctx, 30, RULE_captureDefault);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(545);
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
		int _startState = 32;
		enterRecursionRule(_localctx, 32, RULE_captureList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(548);
			capture();
			setState(550);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				{
				setState(549);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(560);
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
					setState(552);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(553);
					match(Comma);
					setState(554);
					capture();
					setState(556);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
					case 1:
						{
						setState(555);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(562);
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
		enterRule(_localctx, 34, RULE_capture);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(563);
			simpleCapture();
			setState(564);
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
		enterRule(_localctx, 36, RULE_simpleCapture);
		int _la;
		try {
			setState(573);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ampersand:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(567);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(566);
					match(Ampersand);
					}
				}

				setState(569);
				match(Identifier);
				}
				break;
			case This:
				enterOuterAlt(_localctx, 2);
				{
				setState(570);
				match(This);
				}
				break;
			case Asterisk:
				enterOuterAlt(_localctx, 3);
				{
				setState(571);
				match(Asterisk);
				setState(572);
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
		enterRule(_localctx, 38, RULE_initializerCapture);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(576);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Ampersand) {
				{
				setState(575);
				match(Ampersand);
				}
			}

			setState(578);
			match(Identifier);
			setState(579);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
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
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public FoldExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_foldExpression; }
	}

	public final FoldExpressionContext foldExpression() throws RecognitionException {
		FoldExpressionContext _localctx = new FoldExpressionContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_foldExpression);
		try {
			setState(601);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(581);
				match(LeftParenthesis);
				setState(582);
				castExpression();
				setState(583);
				foldOperator();
				setState(584);
				match(Ellipsis);
				setState(585);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(587);
				match(LeftParenthesis);
				setState(588);
				match(Ellipsis);
				setState(589);
				foldOperator();
				setState(590);
				castExpression();
				setState(591);
				match(RightParenthesis);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(593);
				match(LeftParenthesis);
				setState(594);
				castExpression();
				setState(595);
				foldOperator();
				setState(596);
				match(Ellipsis);
				setState(597);
				foldOperator();
				setState(598);
				castExpression();
				setState(599);
				match(RightParenthesis);
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
		public TerminalNode DoubleGreaterThan() { return getToken(CppParser.DoubleGreaterThan, 0); }
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
		enterRule(_localctx, 42, RULE_foldOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(603);
			_la = _input.LA(1);
			if ( !(((((_la - 92)) & ~0x3f) == 0 && ((1L << (_la - 92)) & ((1L << (PeriodAsterisk - 92)) | (1L << (Plus - 92)) | (1L << (Minus - 92)) | (1L << (Asterisk - 92)) | (1L << (ForwardSlash - 92)) | (1L << (Percent - 92)) | (1L << (Caret - 92)) | (1L << (Ampersand - 92)) | (1L << (VerticalBar - 92)) | (1L << (Equal - 92)) | (1L << (LessThan - 92)) | (1L << (GreaterThan - 92)) | (1L << (PlusEqual - 92)) | (1L << (MinusEqual - 92)) | (1L << (AsteriskEqual - 92)) | (1L << (ForwardSlashEqual - 92)) | (1L << (PercentEqual - 92)) | (1L << (CaretEqual - 92)) | (1L << (AmpersandEqual - 92)) | (1L << (VerticalBarEqual - 92)) | (1L << (DoubleLessThan - 92)) | (1L << (DoubleGreaterThan - 92)) | (1L << (DoubleLessThanEqual - 92)) | (1L << (DoubleGreaterThanEqual - 92)) | (1L << (DoubleEqual - 92)) | (1L << (ExclamationMarkEqual - 92)) | (1L << (LessThanEqual - 92)) | (1L << (GreaterThanEqual - 92)) | (1L << (DoubleAmpersand - 92)) | (1L << (DoubleVerticalBar - 92)) | (1L << (Comma - 92)) | (1L << (ArrowAsterisk - 92)))) != 0)) ) {
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

	public static class ExplicitTypeCoversionOperatorExpressionContext extends ParserRuleContext {
		public SimpleTypeSpecifierContext simpleTypeSpecifier() {
			return getRuleContext(SimpleTypeSpecifierContext.class,0);
		}
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public TypenameSpecifierContext typenameSpecifier() {
			return getRuleContext(TypenameSpecifierContext.class,0);
		}
		public ExplicitTypeCoversionOperatorExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_explicitTypeCoversionOperatorExpression; }
	}

	public final ExplicitTypeCoversionOperatorExpressionContext explicitTypeCoversionOperatorExpression() throws RecognitionException {
		ExplicitTypeCoversionOperatorExpressionContext _localctx = new ExplicitTypeCoversionOperatorExpressionContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_explicitTypeCoversionOperatorExpression);
		int _la;
		try {
			setState(619);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Auto:
			case Bool:
			case Char:
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
				enterOuterAlt(_localctx, 1);
				{
				setState(605);
				simpleTypeSpecifier();
				setState(606);
				match(LeftParenthesis);
				setState(608);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(607);
					expressionList();
					}
				}

				setState(610);
				match(RightParenthesis);
				}
				break;
			case TypeName:
				enterOuterAlt(_localctx, 2);
				{
				setState(612);
				typenameSpecifier();
				setState(613);
				match(LeftParenthesis);
				setState(615);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(614);
					expressionList();
					}
				}

				setState(617);
				match(RightParenthesis);
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
		enterRule(_localctx, 46, RULE_postfixOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(621);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public NamedCastExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namedCastExpression; }
	}

	public final NamedCastExpressionContext namedCastExpression() throws RecognitionException {
		NamedCastExpressionContext _localctx = new NamedCastExpressionContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_namedCastExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(623);
			namedCastType();
			setState(624);
			match(LessThan);
			setState(625);
			typeIdentifier();
			setState(626);
			match(GreaterThan);
			setState(627);
			match(LeftParenthesis);
			setState(628);
			expression(0);
			setState(629);
			match(RightParenthesis);
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
		enterRule(_localctx, 50, RULE_memberAccessOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(631);
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
		enterRule(_localctx, 52, RULE_namedCastType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(633);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 54, RULE_typeIdentificationExpression);
		try {
			setState(645);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(635);
				match(TypeId);
				setState(636);
				match(LeftParenthesis);
				setState(637);
				expression(0);
				setState(638);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(640);
				match(TypeId);
				setState(641);
				match(LeftParenthesis);
				setState(642);
				typeIdentifier();
				setState(643);
				match(RightParenthesis);
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
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public ExpressionOrBracedInitializerListContext expressionOrBracedInitializerList() {
			return getRuleContext(ExpressionOrBracedInitializerListContext.class,0);
		}
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		int _startState = 56;
		enterRecursionRule(_localctx, 56, RULE_postfixExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(658);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,33,_ctx) ) {
			case 1:
				{
				setState(648);
				primaryExpression();
				}
				break;
			case 2:
				{
				setState(649);
				explicitTypeCoversionOperatorExpression();
				}
				break;
			case 3:
				{
				setState(650);
				simpleTypeSpecifier();
				setState(651);
				bracedInitializerList();
				}
				break;
			case 4:
				{
				setState(653);
				typenameSpecifier();
				setState(654);
				bracedInitializerList();
				}
				break;
			case 5:
				{
				setState(656);
				namedCastExpression();
				}
				break;
			case 6:
				{
				setState(657);
				typeIdentificationExpression();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(686);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(684);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
					case 1:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(660);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(661);
						match(LeftBracket);
						setState(662);
						expressionOrBracedInitializerList();
						setState(663);
						match(RightBracket);
						}
						break;
					case 2:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(665);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(666);
						match(LeftParenthesis);
						setState(668);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(667);
							expressionList();
							}
						}

						setState(670);
						match(RightParenthesis);
						}
						break;
					case 3:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(671);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(672);
						memberAccessOperator();
						setState(674);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(673);
							match(Template);
							}
						}

						setState(676);
						identifierExpression();
						}
						break;
					case 4:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(678);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(679);
						memberAccessOperator();
						setState(680);
						pseudoDestructorName();
						}
						break;
					case 5:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(682);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(683);
						postfixOperator();
						}
						break;
					}
					} 
				}
				setState(688);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
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
		enterRule(_localctx, 58, RULE_expressionList);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(689);
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
		enterRule(_localctx, 60, RULE_pseudoDestructorName);
		try {
			setState(710);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,39,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(692);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
				case 1:
					{
					setState(691);
					nestedNameSpecifier();
					}
					break;
				}
				setState(694);
				typeName();
				setState(695);
				match(DoubleColon);
				setState(696);
				match(Tilde);
				setState(697);
				typeName();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(699);
				nestedNameSpecifier();
				setState(700);
				match(Template);
				setState(701);
				simpleTemplateIdentifier();
				setState(702);
				match(DoubleColon);
				setState(703);
				match(Tilde);
				setState(704);
				typeName();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(706);
				match(Tilde);
				setState(707);
				typeName();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(708);
				match(Tilde);
				setState(709);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 62, RULE_unaryExpression);
		try {
			setState(740);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(712);
				postfixExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(713);
				match(DoublePlus);
				setState(714);
				castExpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(715);
				match(DoubleMinus);
				setState(716);
				castExpression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(717);
				unaryOperator();
				setState(718);
				castExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(720);
				match(SizeOf);
				setState(721);
				unaryExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(722);
				match(SizeOf);
				setState(723);
				match(LeftParenthesis);
				setState(724);
				typeIdentifier();
				setState(725);
				match(RightParenthesis);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(727);
				match(SizeOf);
				setState(728);
				match(Ellipsis);
				setState(729);
				match(LeftParenthesis);
				setState(730);
				match(Identifier);
				setState(731);
				match(RightParenthesis);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(732);
				match(AlignOf);
				setState(733);
				match(LeftParenthesis);
				setState(734);
				typeIdentifier();
				setState(735);
				match(RightParenthesis);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(737);
				noExceptionExpression();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(738);
				newExpression();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(739);
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
		enterRule(_localctx, 64, RULE_unaryOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(742);
			_la = _input.LA(1);
			if ( !(((((_la - 93)) & ~0x3f) == 0 && ((1L << (_la - 93)) & ((1L << (Plus - 93)) | (1L << (Minus - 93)) | (1L << (Asterisk - 93)) | (1L << (Ampersand - 93)) | (1L << (VerticalBar - 93)) | (1L << (Tilde - 93)) | (1L << (ExclamationMark - 93)))) != 0)) ) {
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public NewExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newExpression; }
	}

	public final NewExpressionContext newExpression() throws RecognitionException {
		NewExpressionContext _localctx = new NewExpressionContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_newExpression);
		int _la;
		try {
			setState(768);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(745);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(744);
					match(DoubleColon);
					}
				}

				setState(747);
				match(New);
				setState(749);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LeftParenthesis) {
					{
					setState(748);
					newPlacement();
					}
				}

				setState(751);
				newTypeIdentifier();
				setState(753);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
				case 1:
					{
					setState(752);
					newInitializer();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(756);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(755);
					match(DoubleColon);
					}
				}

				setState(758);
				match(New);
				setState(760);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
				case 1:
					{
					setState(759);
					newPlacement();
					}
					break;
				}
				setState(762);
				match(LeftParenthesis);
				setState(763);
				typeIdentifier();
				setState(764);
				match(RightParenthesis);
				setState(766);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
				case 1:
					{
					setState(765);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public NewPlacementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_newPlacement; }
	}

	public final NewPlacementContext newPlacement() throws RecognitionException {
		NewPlacementContext _localctx = new NewPlacementContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_newPlacement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(770);
			match(LeftParenthesis);
			setState(771);
			expressionList();
			setState(772);
			match(RightParenthesis);
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
		enterRule(_localctx, 70, RULE_newTypeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(774);
			typeSpecifierSequence();
			setState(776);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				{
				setState(775);
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
		enterRule(_localctx, 72, RULE_newDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(778);
			pointerOperator();
			setState(780);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || ((((_la - 90)) & ~0x3f) == 0 && ((1L << (_la - 90)) & ((1L << (DoubleColon - 90)) | (1L << (Asterisk - 90)) | (1L << (Ampersand - 90)) | (1L << (DoubleAmpersand - 90)) | (1L << (Identifier - 90)))) != 0)) {
				{
				setState(779);
				newDeclarator();
				}
			}

			setState(782);
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
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
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
		int _startState = 74;
		enterRecursionRule(_localctx, 74, RULE_noPointerNewDeclarator, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(785);
			match(LeftBracket);
			setState(786);
			expression(0);
			setState(787);
			match(RightBracket);
			setState(789);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				{
				setState(788);
				attributeSpecifierSequence(0);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(800);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new NoPointerNewDeclaratorContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_noPointerNewDeclarator);
					setState(791);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(792);
					match(LeftBracket);
					setState(793);
					constantExpression();
					setState(794);
					match(RightBracket);
					setState(796);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,51,_ctx) ) {
					case 1:
						{
						setState(795);
						attributeSpecifierSequence(0);
						}
						break;
					}
					}
					} 
				}
				setState(802);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 76, RULE_newInitializer);
		int _la;
		try {
			setState(809);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(803);
				match(LeftParenthesis);
				setState(805);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(804);
					expressionList();
					}
				}

				setState(807);
				match(RightParenthesis);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(808);
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
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
		public DeleteExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_deleteExpression; }
	}

	public final DeleteExpressionContext deleteExpression() throws RecognitionException {
		DeleteExpressionContext _localctx = new DeleteExpressionContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_deleteExpression);
		int _la;
		try {
			setState(823);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(812);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(811);
					match(DoubleColon);
					}
				}

				setState(814);
				match(Delete);
				setState(815);
				castExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(817);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(816);
					match(DoubleColon);
					}
				}

				setState(819);
				match(Delete);
				setState(820);
				match(LeftBracket);
				setState(821);
				match(RightBracket);
				setState(822);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public NoExceptionExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noExceptionExpression; }
	}

	public final NoExceptionExpressionContext noExceptionExpression() throws RecognitionException {
		NoExceptionExpressionContext _localctx = new NoExceptionExpressionContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_noExceptionExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(825);
			match(NoExcept);
			setState(826);
			match(LeftParenthesis);
			setState(827);
			expression(0);
			setState(828);
			match(RightParenthesis);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 82, RULE_castExpression);
		try {
			setState(836);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,58,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(830);
				unaryExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(831);
				match(LeftParenthesis);
				setState(832);
				typeIdentifier();
				setState(833);
				match(RightParenthesis);
				setState(834);
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

	public static class PointerManipulationExpressionContext extends ParserRuleContext {
		public CastExpressionContext castExpression() {
			return getRuleContext(CastExpressionContext.class,0);
		}
		public PointerManipulationExpressionContext pointerManipulationExpression() {
			return getRuleContext(PointerManipulationExpressionContext.class,0);
		}
		public TerminalNode PeriodAsterisk() { return getToken(CppParser.PeriodAsterisk, 0); }
		public TerminalNode ArrowAsterisk() { return getToken(CppParser.ArrowAsterisk, 0); }
		public PointerManipulationExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pointerManipulationExpression; }
	}

	public final PointerManipulationExpressionContext pointerManipulationExpression() throws RecognitionException {
		return pointerManipulationExpression(0);
	}

	private PointerManipulationExpressionContext pointerManipulationExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		PointerManipulationExpressionContext _localctx = new PointerManipulationExpressionContext(_ctx, _parentState);
		PointerManipulationExpressionContext _prevctx = _localctx;
		int _startState = 84;
		enterRecursionRule(_localctx, 84, RULE_pointerManipulationExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(839);
			castExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(849);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(847);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
					case 1:
						{
						_localctx = new PointerManipulationExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pointerManipulationExpression);
						setState(841);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(842);
						match(PeriodAsterisk);
						setState(843);
						castExpression();
						}
						break;
					case 2:
						{
						_localctx = new PointerManipulationExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pointerManipulationExpression);
						setState(844);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(845);
						match(ArrowAsterisk);
						setState(846);
						castExpression();
						}
						break;
					}
					} 
				}
				setState(851);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
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

	public static class MultiplicativeExpressionContext extends ParserRuleContext {
		public PointerManipulationExpressionContext pointerManipulationExpression() {
			return getRuleContext(PointerManipulationExpressionContext.class,0);
		}
		public MultiplicativeExpressionContext multiplicativeExpression() {
			return getRuleContext(MultiplicativeExpressionContext.class,0);
		}
		public TerminalNode Asterisk() { return getToken(CppParser.Asterisk, 0); }
		public TerminalNode ForwardSlash() { return getToken(CppParser.ForwardSlash, 0); }
		public TerminalNode Percent() { return getToken(CppParser.Percent, 0); }
		public MultiplicativeExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multiplicativeExpression; }
	}

	public final MultiplicativeExpressionContext multiplicativeExpression() throws RecognitionException {
		return multiplicativeExpression(0);
	}

	private MultiplicativeExpressionContext multiplicativeExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		MultiplicativeExpressionContext _localctx = new MultiplicativeExpressionContext(_ctx, _parentState);
		MultiplicativeExpressionContext _prevctx = _localctx;
		int _startState = 86;
		enterRecursionRule(_localctx, 86, RULE_multiplicativeExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(853);
			pointerManipulationExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(866);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(864);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,61,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(855);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(856);
						match(Asterisk);
						setState(857);
						pointerManipulationExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(858);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(859);
						match(ForwardSlash);
						setState(860);
						pointerManipulationExpression(0);
						}
						break;
					case 3:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(861);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(862);
						match(Percent);
						setState(863);
						pointerManipulationExpression(0);
						}
						break;
					}
					} 
				}
				setState(868);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
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

	public static class AdditiveExpressionContext extends ParserRuleContext {
		public MultiplicativeExpressionContext multiplicativeExpression() {
			return getRuleContext(MultiplicativeExpressionContext.class,0);
		}
		public AdditiveExpressionContext additiveExpression() {
			return getRuleContext(AdditiveExpressionContext.class,0);
		}
		public TerminalNode Plus() { return getToken(CppParser.Plus, 0); }
		public TerminalNode Minus() { return getToken(CppParser.Minus, 0); }
		public AdditiveExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_additiveExpression; }
	}

	public final AdditiveExpressionContext additiveExpression() throws RecognitionException {
		return additiveExpression(0);
	}

	private AdditiveExpressionContext additiveExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		AdditiveExpressionContext _localctx = new AdditiveExpressionContext(_ctx, _parentState);
		AdditiveExpressionContext _prevctx = _localctx;
		int _startState = 88;
		enterRecursionRule(_localctx, 88, RULE_additiveExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(870);
			multiplicativeExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(880);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,64,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(878);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
					case 1:
						{
						_localctx = new AdditiveExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveExpression);
						setState(872);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(873);
						match(Plus);
						setState(874);
						multiplicativeExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveExpression);
						setState(875);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(876);
						match(Minus);
						setState(877);
						multiplicativeExpression(0);
						}
						break;
					}
					} 
				}
				setState(882);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,64,_ctx);
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

	public static class ShiftExpressionContext extends ParserRuleContext {
		public AdditiveExpressionContext additiveExpression() {
			return getRuleContext(AdditiveExpressionContext.class,0);
		}
		public ShiftExpressionContext shiftExpression() {
			return getRuleContext(ShiftExpressionContext.class,0);
		}
		public TerminalNode DoubleLessThan() { return getToken(CppParser.DoubleLessThan, 0); }
		public TerminalNode DoubleGreaterThan() { return getToken(CppParser.DoubleGreaterThan, 0); }
		public ShiftExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_shiftExpression; }
	}

	public final ShiftExpressionContext shiftExpression() throws RecognitionException {
		return shiftExpression(0);
	}

	private ShiftExpressionContext shiftExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ShiftExpressionContext _localctx = new ShiftExpressionContext(_ctx, _parentState);
		ShiftExpressionContext _prevctx = _localctx;
		int _startState = 90;
		enterRecursionRule(_localctx, 90, RULE_shiftExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(884);
			additiveExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(894);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,66,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(892);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,65,_ctx) ) {
					case 1:
						{
						_localctx = new ShiftExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shiftExpression);
						setState(886);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(887);
						match(DoubleLessThan);
						setState(888);
						additiveExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new ShiftExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shiftExpression);
						setState(889);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(890);
						match(DoubleGreaterThan);
						setState(891);
						additiveExpression(0);
						}
						break;
					}
					} 
				}
				setState(896);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,66,_ctx);
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

	public static class RelationalExpressionContext extends ParserRuleContext {
		public ShiftExpressionContext shiftExpression() {
			return getRuleContext(ShiftExpressionContext.class,0);
		}
		public RelationalExpressionContext relationalExpression() {
			return getRuleContext(RelationalExpressionContext.class,0);
		}
		public TerminalNode LessThan() { return getToken(CppParser.LessThan, 0); }
		public TerminalNode GreaterThan() { return getToken(CppParser.GreaterThan, 0); }
		public TerminalNode LessThanEqual() { return getToken(CppParser.LessThanEqual, 0); }
		public TerminalNode GreaterThanEqual() { return getToken(CppParser.GreaterThanEqual, 0); }
		public RelationalExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relationalExpression; }
	}

	public final RelationalExpressionContext relationalExpression() throws RecognitionException {
		return relationalExpression(0);
	}

	private RelationalExpressionContext relationalExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		RelationalExpressionContext _localctx = new RelationalExpressionContext(_ctx, _parentState);
		RelationalExpressionContext _prevctx = _localctx;
		int _startState = 92;
		enterRecursionRule(_localctx, 92, RULE_relationalExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(898);
			shiftExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(914);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,68,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(912);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
					case 1:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(900);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(901);
						match(LessThan);
						setState(902);
						shiftExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(903);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(904);
						match(GreaterThan);
						setState(905);
						shiftExpression(0);
						}
						break;
					case 3:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(906);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(907);
						match(LessThanEqual);
						setState(908);
						shiftExpression(0);
						}
						break;
					case 4:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(909);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(910);
						match(GreaterThanEqual);
						setState(911);
						shiftExpression(0);
						}
						break;
					}
					} 
				}
				setState(916);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,68,_ctx);
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

	public static class EqualityExpressionContext extends ParserRuleContext {
		public RelationalExpressionContext relationalExpression() {
			return getRuleContext(RelationalExpressionContext.class,0);
		}
		public EqualityExpressionContext equalityExpression() {
			return getRuleContext(EqualityExpressionContext.class,0);
		}
		public TerminalNode DoubleEqual() { return getToken(CppParser.DoubleEqual, 0); }
		public TerminalNode ExclamationMarkEqual() { return getToken(CppParser.ExclamationMarkEqual, 0); }
		public EqualityExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_equalityExpression; }
	}

	public final EqualityExpressionContext equalityExpression() throws RecognitionException {
		return equalityExpression(0);
	}

	private EqualityExpressionContext equalityExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		EqualityExpressionContext _localctx = new EqualityExpressionContext(_ctx, _parentState);
		EqualityExpressionContext _prevctx = _localctx;
		int _startState = 94;
		enterRecursionRule(_localctx, 94, RULE_equalityExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(918);
			relationalExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(928);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(926);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
					case 1:
						{
						_localctx = new EqualityExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityExpression);
						setState(920);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(921);
						match(DoubleEqual);
						setState(922);
						relationalExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new EqualityExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityExpression);
						setState(923);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(924);
						match(ExclamationMarkEqual);
						setState(925);
						relationalExpression(0);
						}
						break;
					}
					} 
				}
				setState(930);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
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

	public static class AndExpressionContext extends ParserRuleContext {
		public EqualityExpressionContext equalityExpression() {
			return getRuleContext(EqualityExpressionContext.class,0);
		}
		public AndExpressionContext andExpression() {
			return getRuleContext(AndExpressionContext.class,0);
		}
		public TerminalNode Ampersand() { return getToken(CppParser.Ampersand, 0); }
		public AndExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_andExpression; }
	}

	public final AndExpressionContext andExpression() throws RecognitionException {
		return andExpression(0);
	}

	private AndExpressionContext andExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		AndExpressionContext _localctx = new AndExpressionContext(_ctx, _parentState);
		AndExpressionContext _prevctx = _localctx;
		int _startState = 96;
		enterRecursionRule(_localctx, 96, RULE_andExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(932);
			equalityExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(939);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,71,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AndExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_andExpression);
					setState(934);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(935);
					match(Ampersand);
					setState(936);
					equalityExpression(0);
					}
					} 
				}
				setState(941);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,71,_ctx);
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

	public static class ExclusiveOrExpressionContext extends ParserRuleContext {
		public AndExpressionContext andExpression() {
			return getRuleContext(AndExpressionContext.class,0);
		}
		public ExclusiveOrExpressionContext exclusiveOrExpression() {
			return getRuleContext(ExclusiveOrExpressionContext.class,0);
		}
		public TerminalNode Caret() { return getToken(CppParser.Caret, 0); }
		public ExclusiveOrExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_exclusiveOrExpression; }
	}

	public final ExclusiveOrExpressionContext exclusiveOrExpression() throws RecognitionException {
		return exclusiveOrExpression(0);
	}

	private ExclusiveOrExpressionContext exclusiveOrExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExclusiveOrExpressionContext _localctx = new ExclusiveOrExpressionContext(_ctx, _parentState);
		ExclusiveOrExpressionContext _prevctx = _localctx;
		int _startState = 98;
		enterRecursionRule(_localctx, 98, RULE_exclusiveOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(943);
			andExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(950);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,72,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExclusiveOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_exclusiveOrExpression);
					setState(945);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(946);
					match(Caret);
					setState(947);
					andExpression(0);
					}
					} 
				}
				setState(952);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,72,_ctx);
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

	public static class InclusiveOrExpressionContext extends ParserRuleContext {
		public ExclusiveOrExpressionContext exclusiveOrExpression() {
			return getRuleContext(ExclusiveOrExpressionContext.class,0);
		}
		public InclusiveOrExpressionContext inclusiveOrExpression() {
			return getRuleContext(InclusiveOrExpressionContext.class,0);
		}
		public TerminalNode VerticalBar() { return getToken(CppParser.VerticalBar, 0); }
		public InclusiveOrExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inclusiveOrExpression; }
	}

	public final InclusiveOrExpressionContext inclusiveOrExpression() throws RecognitionException {
		return inclusiveOrExpression(0);
	}

	private InclusiveOrExpressionContext inclusiveOrExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		InclusiveOrExpressionContext _localctx = new InclusiveOrExpressionContext(_ctx, _parentState);
		InclusiveOrExpressionContext _prevctx = _localctx;
		int _startState = 100;
		enterRecursionRule(_localctx, 100, RULE_inclusiveOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(954);
			exclusiveOrExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(961);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,73,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InclusiveOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_inclusiveOrExpression);
					setState(956);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(957);
					match(VerticalBar);
					setState(958);
					exclusiveOrExpression(0);
					}
					} 
				}
				setState(963);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,73,_ctx);
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

	public static class LogicalAndExpressionContext extends ParserRuleContext {
		public InclusiveOrExpressionContext inclusiveOrExpression() {
			return getRuleContext(InclusiveOrExpressionContext.class,0);
		}
		public LogicalAndExpressionContext logicalAndExpression() {
			return getRuleContext(LogicalAndExpressionContext.class,0);
		}
		public TerminalNode DoubleAmpersand() { return getToken(CppParser.DoubleAmpersand, 0); }
		public LogicalAndExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicalAndExpression; }
	}

	public final LogicalAndExpressionContext logicalAndExpression() throws RecognitionException {
		return logicalAndExpression(0);
	}

	private LogicalAndExpressionContext logicalAndExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		LogicalAndExpressionContext _localctx = new LogicalAndExpressionContext(_ctx, _parentState);
		LogicalAndExpressionContext _prevctx = _localctx;
		int _startState = 102;
		enterRecursionRule(_localctx, 102, RULE_logicalAndExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(965);
			inclusiveOrExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(972);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,74,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalAndExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_logicalAndExpression);
					setState(967);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(968);
					match(DoubleAmpersand);
					setState(969);
					inclusiveOrExpression(0);
					}
					} 
				}
				setState(974);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,74,_ctx);
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

	public static class LogicalOrExpressionContext extends ParserRuleContext {
		public LogicalAndExpressionContext logicalAndExpression() {
			return getRuleContext(LogicalAndExpressionContext.class,0);
		}
		public LogicalOrExpressionContext logicalOrExpression() {
			return getRuleContext(LogicalOrExpressionContext.class,0);
		}
		public TerminalNode DoubleVerticalBar() { return getToken(CppParser.DoubleVerticalBar, 0); }
		public LogicalOrExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_logicalOrExpression; }
	}

	public final LogicalOrExpressionContext logicalOrExpression() throws RecognitionException {
		return logicalOrExpression(0);
	}

	private LogicalOrExpressionContext logicalOrExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		LogicalOrExpressionContext _localctx = new LogicalOrExpressionContext(_ctx, _parentState);
		LogicalOrExpressionContext _prevctx = _localctx;
		int _startState = 104;
		enterRecursionRule(_localctx, 104, RULE_logicalOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(976);
			logicalAndExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(983);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,75,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_logicalOrExpression);
					setState(978);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(979);
					match(DoubleVerticalBar);
					setState(980);
					logicalAndExpression(0);
					}
					} 
				}
				setState(985);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,75,_ctx);
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

	public static class ConditionalExpressionContext extends ParserRuleContext {
		public LogicalOrExpressionContext logicalOrExpression() {
			return getRuleContext(LogicalOrExpressionContext.class,0);
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
		enterRule(_localctx, 106, RULE_conditionalExpression);
		try {
			setState(993);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(986);
				logicalOrExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(987);
				logicalOrExpression(0);
				setState(988);
				match(QuestionMark);
				setState(989);
				expression(0);
				setState(990);
				match(Colon);
				setState(991);
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
		enterRule(_localctx, 108, RULE_throwExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(995);
			match(Throw);
			setState(997);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,77,_ctx) ) {
			case 1:
				{
				setState(996);
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
		public LogicalOrExpressionContext logicalOrExpression() {
			return getRuleContext(LogicalOrExpressionContext.class,0);
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
		enterRule(_localctx, 110, RULE_assignmentExpression);
		try {
			setState(1005);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(999);
				conditionalExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1000);
				logicalOrExpression(0);
				setState(1001);
				assignmentOperator();
				setState(1002);
				initializerClause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1004);
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
		enterRule(_localctx, 112, RULE_assignmentOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1007);
			_la = _input.LA(1);
			if ( !(((((_la - 103)) & ~0x3f) == 0 && ((1L << (_la - 103)) & ((1L << (Equal - 103)) | (1L << (PlusEqual - 103)) | (1L << (MinusEqual - 103)) | (1L << (AsteriskEqual - 103)) | (1L << (ForwardSlashEqual - 103)) | (1L << (PercentEqual - 103)) | (1L << (CaretEqual - 103)) | (1L << (AmpersandEqual - 103)) | (1L << (VerticalBarEqual - 103)) | (1L << (DoubleLessThanEqual - 103)) | (1L << (DoubleGreaterThanEqual - 103)))) != 0)) ) {
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
		int _startState = 114;
		enterRecursionRule(_localctx, 114, RULE_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1010);
			assignmentExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(1017);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,79,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expression);
					setState(1012);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1013);
					match(Comma);
					setState(1014);
					assignmentExpression();
					}
					} 
				}
				setState(1019);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,79,_ctx);
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
		enterRule(_localctx, 116, RULE_constantExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1020);
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
		enterRule(_localctx, 118, RULE_statement);
		int _la;
		try {
			setState(1048);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,86,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1022);
				labeledStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1024);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
				case 1:
					{
					setState(1023);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1026);
				expressionStatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1028);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1027);
					attributeSpecifierSequence(0);
					}
				}

				setState(1030);
				compoundStatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1032);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1031);
					attributeSpecifierSequence(0);
					}
				}

				setState(1034);
				selectionStatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1036);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1035);
					attributeSpecifierSequence(0);
					}
				}

				setState(1038);
				iterationStatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1040);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1039);
					attributeSpecifierSequence(0);
					}
				}

				setState(1042);
				jumpStatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1043);
				declarationStatement();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1045);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1044);
					attributeSpecifierSequence(0);
					}
				}

				setState(1047);
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
		enterRule(_localctx, 120, RULE_initializerStatement);
		try {
			setState(1052);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,87,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1050);
				expressionStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1051);
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
		enterRule(_localctx, 122, RULE_condition);
		int _la;
		try {
			setState(1062);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,89,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1054);
				expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1056);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1055);
					attributeSpecifierSequence(0);
					}
				}

				setState(1058);
				declarationSpecifierSequence();
				setState(1059);
				declarator();
				setState(1060);
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
		enterRule(_localctx, 124, RULE_labeledStatement);
		int _la;
		try {
			setState(1084);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1065);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1064);
					attributeSpecifierSequence(0);
					}
				}

				setState(1067);
				match(Identifier);
				setState(1068);
				match(Colon);
				setState(1069);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1071);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1070);
					attributeSpecifierSequence(0);
					}
				}

				setState(1073);
				match(Case);
				setState(1074);
				constantExpression();
				setState(1075);
				match(Colon);
				setState(1076);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1079);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1078);
					attributeSpecifierSequence(0);
					}
				}

				setState(1081);
				match(Default);
				setState(1082);
				match(Colon);
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
		enterRule(_localctx, 126, RULE_expressionStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1087);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(1086);
				expression(0);
				}
			}

			setState(1089);
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
		public TerminalNode LeftBrace() { return getToken(CppParser.LeftBrace, 0); }
		public TerminalNode RightBrace() { return getToken(CppParser.RightBrace, 0); }
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
		enterRule(_localctx, 128, RULE_compoundStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1091);
			match(LeftBrace);
			setState(1093);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Switch) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(1092);
				statementSequence(0);
				}
			}

			setState(1095);
			match(RightBrace);
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
		int _startState = 130;
		enterRecursionRule(_localctx, 130, RULE_statementSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1098);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(1104);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,96,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StatementSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_statementSequence);
					setState(1100);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1101);
					statement();
					}
					} 
				}
				setState(1106);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,96,_ctx);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 132, RULE_selectionStatement);
		int _la;
		try {
			setState(1142);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,102,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1107);
				match(If);
				setState(1109);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ConstExpr) {
					{
					setState(1108);
					match(ConstExpr);
					}
				}

				setState(1111);
				match(LeftParenthesis);
				setState(1113);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,98,_ctx) ) {
				case 1:
					{
					setState(1112);
					initializerStatement();
					}
					break;
				}
				setState(1115);
				condition();
				setState(1116);
				match(RightParenthesis);
				setState(1117);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1119);
				match(If);
				setState(1121);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ConstExpr) {
					{
					setState(1120);
					match(ConstExpr);
					}
				}

				setState(1123);
				match(LeftParenthesis);
				setState(1125);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,100,_ctx) ) {
				case 1:
					{
					setState(1124);
					initializerStatement();
					}
					break;
				}
				setState(1127);
				condition();
				setState(1128);
				match(RightParenthesis);
				setState(1129);
				statement();
				setState(1130);
				match(Else);
				setState(1131);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1133);
				match(Switch);
				setState(1134);
				match(LeftParenthesis);
				setState(1136);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,101,_ctx) ) {
				case 1:
					{
					setState(1135);
					initializerStatement();
					}
					break;
				}
				setState(1138);
				condition();
				setState(1139);
				match(RightParenthesis);
				setState(1140);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 134, RULE_iterationStatement);
		int _la;
		try {
			setState(1179);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,105,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1144);
				match(While);
				setState(1145);
				match(LeftParenthesis);
				setState(1146);
				condition();
				setState(1147);
				match(RightParenthesis);
				setState(1148);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1150);
				match(Do);
				setState(1151);
				statement();
				setState(1152);
				match(While);
				setState(1153);
				match(LeftParenthesis);
				setState(1154);
				expression(0);
				setState(1155);
				match(RightParenthesis);
				setState(1156);
				match(Semicolon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1158);
				match(For);
				setState(1159);
				match(LeftParenthesis);
				setState(1160);
				initializerStatement();
				setState(1162);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstExpr) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticCast) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1161);
					condition();
					}
				}

				setState(1164);
				match(Semicolon);
				setState(1166);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1165);
					expression(0);
					}
				}

				setState(1168);
				match(RightParenthesis);
				setState(1169);
				statement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1171);
				match(For);
				setState(1172);
				match(LeftParenthesis);
				setState(1173);
				forRangeDeclaration();
				setState(1174);
				match(Colon);
				setState(1175);
				forRangeInitializer();
				setState(1176);
				match(RightParenthesis);
				setState(1177);
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
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
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
		enterRule(_localctx, 136, RULE_forInitializerStatement);
		int _la;
		try {
			setState(1198);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,109,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1182);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1181);
					attributeSpecifierSequence(0);
					}
				}

				setState(1184);
				declarationSpecifierSequence();
				setState(1185);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1188);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1187);
					attributeSpecifierSequence(0);
					}
				}

				setState(1190);
				declarationSpecifierSequence();
				setState(1192);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(1191);
					referenceQualifier();
					}
				}

				setState(1194);
				match(LeftBracket);
				setState(1195);
				identifierList(0);
				setState(1196);
				match(RightBracket);
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
		enterRule(_localctx, 138, RULE_forRangeDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1201);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1200);
				attributeSpecifierSequence(0);
				}
			}

			setState(1203);
			declarationSpecifierSequence();
			setState(1204);
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
		enterRule(_localctx, 140, RULE_forRangeInitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1206);
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
		enterRule(_localctx, 142, RULE_jumpStatement);
		int _la;
		try {
			setState(1220);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Break:
				enterOuterAlt(_localctx, 1);
				{
				setState(1208);
				match(Break);
				setState(1209);
				match(Semicolon);
				}
				break;
			case Continue:
				enterOuterAlt(_localctx, 2);
				{
				setState(1210);
				match(Continue);
				setState(1211);
				match(Semicolon);
				}
				break;
			case Return:
				enterOuterAlt(_localctx, 3);
				{
				setState(1212);
				match(Return);
				setState(1214);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1213);
					expressionOrBracedInitializerList();
					}
				}

				setState(1216);
				match(Semicolon);
				}
				break;
			case GoTo:
				enterOuterAlt(_localctx, 4);
				{
				setState(1217);
				match(GoTo);
				setState(1218);
				match(Identifier);
				setState(1219);
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
		enterRule(_localctx, 144, RULE_declarationStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1222);
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
		int _startState = 146;
		enterRecursionRule(_localctx, 146, RULE_declarationSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1225);
			declaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1231);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,113,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new DeclarationSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_declarationSequence);
					setState(1227);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1228);
					declaration();
					}
					} 
				}
				setState(1233);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,113,_ctx);
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
		enterRule(_localctx, 148, RULE_declaration);
		try {
			setState(1245);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,114,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1234);
				blockDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1235);
				noDeclarationSpecifierFunctionDeclaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1236);
				functionDefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1237);
				templateDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1238);
				deductionGuide();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1239);
				explicitInstantiation();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1240);
				explicitSpecialization();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1241);
				linkageSpecification();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1242);
				namespaceDefinition();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1243);
				emptyDeclaration();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1244);
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
		public OpaqueEnumDeclarationContext opaqueEnumDeclaration() {
			return getRuleContext(OpaqueEnumDeclarationContext.class,0);
		}
		public BlockDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockDeclaration; }
	}

	public final BlockDeclarationContext blockDeclaration() throws RecognitionException {
		BlockDeclarationContext _localctx = new BlockDeclarationContext(_ctx, getState());
		enterRule(_localctx, 150, RULE_blockDeclaration);
		try {
			setState(1255);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,115,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1247);
				simpleDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1248);
				asmDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1249);
				namespaceAliasDefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1250);
				usingDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1251);
				usingDirective();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1252);
				staticAssertDeclaration();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1253);
				aliasDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1254);
				opaqueEnumDeclaration();
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
		enterRule(_localctx, 152, RULE_noDeclarationSpecifierFunctionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1258);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1257);
				attributeSpecifierSequence(0);
				}
			}

			setState(1260);
			declarator();
			setState(1261);
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
		enterRule(_localctx, 154, RULE_aliasDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1263);
			match(Using);
			setState(1264);
			match(Identifier);
			setState(1266);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1265);
				attributeSpecifierSequence(0);
				}
			}

			setState(1268);
			match(Equal);
			setState(1269);
			definingTypeIdentifier();
			setState(1270);
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
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public IdentifierListContext identifierList() {
			return getRuleContext(IdentifierListContext.class,0);
		}
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
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
		enterRule(_localctx, 156, RULE_simpleDeclaration);
		int _la;
		try {
			setState(1296);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,121,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1272);
				declarationSpecifierSequence();
				setState(1274);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || _la==Operator || ((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (LeftParenthesis - 84)) | (1L << (Ellipsis - 84)) | (1L << (DoubleColon - 84)) | (1L << (Asterisk - 84)) | (1L << (Ampersand - 84)) | (1L << (Tilde - 84)) | (1L << (DoubleAmpersand - 84)) | (1L << (Identifier - 84)))) != 0)) {
					{
					setState(1273);
					initializerDeclaratorList(0);
					}
				}

				setState(1276);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1278);
				attributeSpecifierSequence(0);
				setState(1279);
				declarationSpecifierSequence();
				setState(1280);
				initializerDeclaratorList(0);
				setState(1281);
				match(Semicolon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1284);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1283);
					attributeSpecifierSequence(0);
					}
				}

				setState(1286);
				declarationSpecifierSequence();
				setState(1288);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(1287);
					referenceQualifier();
					}
				}

				setState(1290);
				match(LeftBracket);
				setState(1291);
				identifierList(0);
				setState(1292);
				match(RightBracket);
				setState(1293);
				initializer();
				setState(1294);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 158, RULE_staticAssertDeclaration);
		try {
			setState(1312);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,122,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1298);
				match(StaticAssert);
				setState(1299);
				match(LeftParenthesis);
				setState(1300);
				constantExpression();
				setState(1301);
				match(RightParenthesis);
				setState(1302);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1304);
				match(StaticAssert);
				setState(1305);
				match(LeftParenthesis);
				setState(1306);
				constantExpression();
				setState(1307);
				match(Comma);
				setState(1308);
				match(StringLiteral);
				setState(1309);
				match(RightParenthesis);
				setState(1310);
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
		enterRule(_localctx, 160, RULE_emptyDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1314);
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
		enterRule(_localctx, 162, RULE_attributeDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1316);
			attributeSpecifierSequence(0);
			setState(1317);
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

	public static class DeclarationSpecifierContext extends ParserRuleContext {
		public StorageClassSpecifierContext storageClassSpecifier() {
			return getRuleContext(StorageClassSpecifierContext.class,0);
		}
		public DefiningTypeSpecifierContext definingTypeSpecifier() {
			return getRuleContext(DefiningTypeSpecifierContext.class,0);
		}
		public FunctionSpecifierContext functionSpecifier() {
			return getRuleContext(FunctionSpecifierContext.class,0);
		}
		public TerminalNode Friend() { return getToken(CppParser.Friend, 0); }
		public TerminalNode TypeDef() { return getToken(CppParser.TypeDef, 0); }
		public TerminalNode ConstExpr() { return getToken(CppParser.ConstExpr, 0); }
		public TerminalNode Inline() { return getToken(CppParser.Inline, 0); }
		public DeclarationSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationSpecifier; }
	}

	public final DeclarationSpecifierContext declarationSpecifier() throws RecognitionException {
		DeclarationSpecifierContext _localctx = new DeclarationSpecifierContext(_ctx, getState());
		enterRule(_localctx, 164, RULE_declarationSpecifier);
		try {
			setState(1326);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Extern:
			case Mutable:
			case Static:
			case ThreadLocal:
				enterOuterAlt(_localctx, 1);
				{
				setState(1319);
				storageClassSpecifier();
				}
				break;
			case Auto:
			case Bool:
			case Char:
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
				enterOuterAlt(_localctx, 2);
				{
				setState(1320);
				definingTypeSpecifier();
				}
				break;
			case Explicit:
			case Virtual:
				enterOuterAlt(_localctx, 3);
				{
				setState(1321);
				functionSpecifier();
				}
				break;
			case Friend:
				enterOuterAlt(_localctx, 4);
				{
				setState(1322);
				match(Friend);
				}
				break;
			case TypeDef:
				enterOuterAlt(_localctx, 5);
				{
				setState(1323);
				match(TypeDef);
				}
				break;
			case ConstExpr:
				enterOuterAlt(_localctx, 6);
				{
				setState(1324);
				match(ConstExpr);
				}
				break;
			case Inline:
				enterOuterAlt(_localctx, 7);
				{
				setState(1325);
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
		public DeclarationSpecifierContext declarationSpecifier() {
			return getRuleContext(DeclarationSpecifierContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public DeclarationSpecifierSequenceContext declarationSpecifierSequence() {
			return getRuleContext(DeclarationSpecifierSequenceContext.class,0);
		}
		public DeclarationSpecifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationSpecifierSequence; }
	}

	public final DeclarationSpecifierSequenceContext declarationSpecifierSequence() throws RecognitionException {
		DeclarationSpecifierSequenceContext _localctx = new DeclarationSpecifierSequenceContext(_ctx, getState());
		enterRule(_localctx, 166, RULE_declarationSpecifierSequence);
		try {
			setState(1335);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,125,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1328);
				declarationSpecifier();
				setState(1330);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,124,_ctx) ) {
				case 1:
					{
					setState(1329);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1332);
				declarationSpecifier();
				setState(1333);
				declarationSpecifierSequence();
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
		enterRule(_localctx, 168, RULE_storageClassSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1337);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Extern) | (1L << Mutable) | (1L << Static) | (1L << ThreadLocal))) != 0)) ) {
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
		enterRule(_localctx, 170, RULE_functionSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1339);
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
		public TypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeSpecifier; }
	}

	public final TypeSpecifierContext typeSpecifier() throws RecognitionException {
		TypeSpecifierContext _localctx = new TypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 172, RULE_typeSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1341);
			simpleTypeSpecifier();
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
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TypeSpecifierSequenceContext typeSpecifierSequence() {
			return getRuleContext(TypeSpecifierSequenceContext.class,0);
		}
		public TypeSpecifierSequenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeSpecifierSequence; }
	}

	public final TypeSpecifierSequenceContext typeSpecifierSequence() throws RecognitionException {
		TypeSpecifierSequenceContext _localctx = new TypeSpecifierSequenceContext(_ctx, getState());
		enterRule(_localctx, 174, RULE_typeSpecifierSequence);
		try {
			setState(1350);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,127,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1343);
				typeSpecifier();
				setState(1345);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,126,_ctx) ) {
				case 1:
					{
					setState(1344);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1347);
				typeSpecifier();
				setState(1348);
				typeSpecifierSequence();
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

	public static class DefiningTypeSpecifierContext extends ParserRuleContext {
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public DefiningTypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definingTypeSpecifier; }
	}

	public final DefiningTypeSpecifierContext definingTypeSpecifier() throws RecognitionException {
		DefiningTypeSpecifierContext _localctx = new DefiningTypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 176, RULE_definingTypeSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1352);
			typeSpecifier();
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
		enterRule(_localctx, 178, RULE_definingTypeSpecifierSequence);
		try {
			setState(1361);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,129,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1354);
				definingTypeSpecifier();
				setState(1356);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,128,_ctx) ) {
				case 1:
					{
					setState(1355);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1358);
				definingTypeSpecifier();
				setState(1359);
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
		public TerminalNode Char() { return getToken(CppParser.Char, 0); }
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
		enterRule(_localctx, 180, RULE_simpleTypeSpecifier);
		try {
			setState(1378);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Char:
				enterOuterAlt(_localctx, 1);
				{
				setState(1363);
				match(Char);
				}
				break;
			case Char16:
				enterOuterAlt(_localctx, 2);
				{
				setState(1364);
				match(Char16);
				}
				break;
			case Char32:
				enterOuterAlt(_localctx, 3);
				{
				setState(1365);
				match(Char32);
				}
				break;
			case WChar:
				enterOuterAlt(_localctx, 4);
				{
				setState(1366);
				match(WChar);
				}
				break;
			case Bool:
				enterOuterAlt(_localctx, 5);
				{
				setState(1367);
				match(Bool);
				}
				break;
			case Short:
				enterOuterAlt(_localctx, 6);
				{
				setState(1368);
				match(Short);
				}
				break;
			case Int:
				enterOuterAlt(_localctx, 7);
				{
				setState(1369);
				match(Int);
				}
				break;
			case Long:
				enterOuterAlt(_localctx, 8);
				{
				setState(1370);
				match(Long);
				}
				break;
			case Signed:
				enterOuterAlt(_localctx, 9);
				{
				setState(1371);
				match(Signed);
				}
				break;
			case Unsigned:
				enterOuterAlt(_localctx, 10);
				{
				setState(1372);
				match(Unsigned);
				}
				break;
			case Float:
				enterOuterAlt(_localctx, 11);
				{
				setState(1373);
				match(Float);
				}
				break;
			case Double:
				enterOuterAlt(_localctx, 12);
				{
				setState(1374);
				match(Double);
				}
				break;
			case Void:
				enterOuterAlt(_localctx, 13);
				{
				setState(1375);
				match(Void);
				}
				break;
			case Auto:
				enterOuterAlt(_localctx, 14);
				{
				setState(1376);
				match(Auto);
				}
				break;
			case DeclType:
				enterOuterAlt(_localctx, 15);
				{
				setState(1377);
				declarationTypeSpecifier();
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
		enterRule(_localctx, 182, RULE_typeName);
		try {
			setState(1382);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,131,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1380);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1381);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public TerminalNode Auto() { return getToken(CppParser.Auto, 0); }
		public DeclarationTypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationTypeSpecifier; }
	}

	public final DeclarationTypeSpecifierContext declarationTypeSpecifier() throws RecognitionException {
		DeclarationTypeSpecifierContext _localctx = new DeclarationTypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 184, RULE_declarationTypeSpecifier);
		try {
			setState(1393);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,132,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1384);
				match(DeclType);
				setState(1385);
				match(LeftParenthesis);
				setState(1386);
				expression(0);
				setState(1387);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1389);
				match(DeclType);
				setState(1390);
				match(LeftParenthesis);
				setState(1391);
				match(Auto);
				setState(1392);
				match(RightParenthesis);
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
		enterRule(_localctx, 186, RULE_elaboratedTypeSpecifier);
		int _la;
		try {
			setState(1419);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,137,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1395);
				classKey();
				setState(1397);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1396);
					attributeSpecifierSequence(0);
					}
				}

				setState(1400);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,134,_ctx) ) {
				case 1:
					{
					setState(1399);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1402);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1404);
				classKey();
				setState(1405);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1407);
				classKey();
				setState(1408);
				nestedNameSpecifier();
				setState(1410);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(1409);
					match(Template);
					}
				}

				setState(1412);
				simpleTemplateIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1414);
				match(Enum);
				setState(1416);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,136,_ctx) ) {
				case 1:
					{
					setState(1415);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1418);
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
		public TerminalNode LeftBrace() { return getToken(CppParser.LeftBrace, 0); }
		public TerminalNode RightBrace() { return getToken(CppParser.RightBrace, 0); }
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
		enterRule(_localctx, 188, RULE_enumSpecifier);
		int _la;
		try {
			setState(1434);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,139,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1421);
				enumHead();
				setState(1422);
				match(LeftBrace);
				setState(1424);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1423);
					enumeratorList(0);
					}
				}

				setState(1426);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1428);
				enumHead();
				setState(1429);
				match(LeftBrace);
				setState(1430);
				enumeratorList(0);
				setState(1431);
				match(Comma);
				setState(1432);
				match(RightBrace);
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
		enterRule(_localctx, 190, RULE_enumHead);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1436);
			enumKey();
			setState(1438);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1437);
				attributeSpecifierSequence(0);
				}
			}

			setState(1441);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || _la==DoubleColon || _la==Identifier) {
				{
				setState(1440);
				enumHeadName();
				}
			}

			setState(1444);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1443);
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
		enterRule(_localctx, 192, RULE_enumHeadName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1447);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,143,_ctx) ) {
			case 1:
				{
				setState(1446);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1449);
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

	public static class OpaqueEnumDeclarationContext extends ParserRuleContext {
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
		public OpaqueEnumDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_opaqueEnumDeclaration; }
	}

	public final OpaqueEnumDeclarationContext opaqueEnumDeclaration() throws RecognitionException {
		OpaqueEnumDeclarationContext _localctx = new OpaqueEnumDeclarationContext(_ctx, getState());
		enterRule(_localctx, 194, RULE_opaqueEnumDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1451);
			enumKey();
			setState(1453);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1452);
				attributeSpecifierSequence(0);
				}
			}

			setState(1456);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,145,_ctx) ) {
			case 1:
				{
				setState(1455);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1458);
			match(Identifier);
			setState(1460);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1459);
				enumBase();
				}
			}

			setState(1462);
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
		enterRule(_localctx, 196, RULE_enumKey);
		try {
			setState(1469);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,147,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1464);
				match(Enum);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1465);
				match(Enum);
				setState(1466);
				match(Class);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1467);
				match(Enum);
				setState(1468);
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
		enterRule(_localctx, 198, RULE_enumBase);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1471);
			match(Colon);
			setState(1472);
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
		int _startState = 200;
		enterRecursionRule(_localctx, 200, RULE_enumeratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1475);
			enumeratorDefinition();
			}
			_ctx.stop = _input.LT(-1);
			setState(1482);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,148,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new EnumeratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_enumeratorList);
					setState(1477);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1478);
					match(Comma);
					setState(1479);
					enumeratorDefinition();
					}
					} 
				}
				setState(1484);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,148,_ctx);
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
		enterRule(_localctx, 202, RULE_enumeratorDefinition);
		try {
			setState(1490);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,149,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1485);
				enumerator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1486);
				enumerator();
				setState(1487);
				match(Equal);
				setState(1488);
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
		enterRule(_localctx, 204, RULE_enumerator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1492);
			match(Identifier);
			setState(1494);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,150,_ctx) ) {
			case 1:
				{
				setState(1493);
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
		enterRule(_localctx, 206, RULE_namespaceDefinition);
		try {
			setState(1499);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,151,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1496);
				namedNamespaceDefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1497);
				unnamedNamespaceDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1498);
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
		public TerminalNode LeftBrace() { return getToken(CppParser.LeftBrace, 0); }
		public NamespaceBodyContext namespaceBody() {
			return getRuleContext(NamespaceBodyContext.class,0);
		}
		public TerminalNode RightBrace() { return getToken(CppParser.RightBrace, 0); }
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
		enterRule(_localctx, 208, RULE_namedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1502);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1501);
				match(Inline);
				}
			}

			setState(1504);
			match(Namespace);
			setState(1506);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1505);
				attributeSpecifierSequence(0);
				}
			}

			setState(1508);
			match(Identifier);
			setState(1509);
			match(LeftBrace);
			setState(1510);
			namespaceBody();
			setState(1511);
			match(RightBrace);
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
		public TerminalNode LeftBrace() { return getToken(CppParser.LeftBrace, 0); }
		public NamespaceBodyContext namespaceBody() {
			return getRuleContext(NamespaceBodyContext.class,0);
		}
		public TerminalNode RightBrace() { return getToken(CppParser.RightBrace, 0); }
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
		enterRule(_localctx, 210, RULE_unnamedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1514);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1513);
				match(Inline);
				}
			}

			setState(1516);
			match(Namespace);
			setState(1518);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1517);
				attributeSpecifierSequence(0);
				}
			}

			setState(1520);
			match(LeftBrace);
			setState(1521);
			namespaceBody();
			setState(1522);
			match(RightBrace);
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
		public TerminalNode LeftBrace() { return getToken(CppParser.LeftBrace, 0); }
		public NamespaceBodyContext namespaceBody() {
			return getRuleContext(NamespaceBodyContext.class,0);
		}
		public TerminalNode RightBrace() { return getToken(CppParser.RightBrace, 0); }
		public NestedNamespaceDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nestedNamespaceDefinition; }
	}

	public final NestedNamespaceDefinitionContext nestedNamespaceDefinition() throws RecognitionException {
		NestedNamespaceDefinitionContext _localctx = new NestedNamespaceDefinitionContext(_ctx, getState());
		enterRule(_localctx, 212, RULE_nestedNamespaceDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1524);
			match(Namespace);
			setState(1525);
			enclosingNamespaceSpecifier();
			setState(1526);
			match(DoubleColon);
			setState(1527);
			match(Identifier);
			setState(1528);
			match(LeftBrace);
			setState(1529);
			namespaceBody();
			setState(1530);
			match(RightBrace);
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
		public List<TerminalNode> Identifier() { return getTokens(CppParser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(CppParser.Identifier, i);
		}
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
		EnclosingNamespaceSpecifierContext _localctx = new EnclosingNamespaceSpecifierContext(_ctx, getState());
		enterRule(_localctx, 214, RULE_enclosingNamespaceSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1532);
			match(Identifier);
			setState(1533);
			enclosingNamespaceSpecifier();
			setState(1534);
			match(DoubleColon);
			setState(1535);
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
		enterRule(_localctx, 216, RULE_namespaceBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1538);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
				{
				setState(1537);
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
		enterRule(_localctx, 218, RULE_namespaceAliasDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1540);
			match(Namespace);
			setState(1541);
			match(Identifier);
			setState(1542);
			match(Equal);
			setState(1543);
			qualifiedNamespaceSpecifier();
			setState(1544);
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
		enterRule(_localctx, 220, RULE_qualifiedNamespaceSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1547);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,157,_ctx) ) {
			case 1:
				{
				setState(1546);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1549);
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
		enterRule(_localctx, 222, RULE_usingDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1551);
			match(Using);
			setState(1552);
			usingDeclaratorList(0);
			setState(1553);
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
		int _startState = 224;
		enterRecursionRule(_localctx, 224, RULE_usingDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1556);
			usingDeclarator();
			setState(1558);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,158,_ctx) ) {
			case 1:
				{
				setState(1557);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(1568);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,160,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new UsingDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_usingDeclaratorList);
					setState(1560);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1561);
					match(Comma);
					setState(1562);
					usingDeclarator();
					setState(1564);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,159,_ctx) ) {
					case 1:
						{
						setState(1563);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(1570);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,160,_ctx);
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
		enterRule(_localctx, 226, RULE_usingDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1572);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,161,_ctx) ) {
			case 1:
				{
				setState(1571);
				typeName();
				}
				break;
			}
			setState(1574);
			nestedNameSpecifier();
			setState(1575);
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
		enterRule(_localctx, 228, RULE_usingDirective);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1578);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1577);
				attributeSpecifierSequence(0);
				}
			}

			setState(1580);
			match(Using);
			setState(1581);
			match(Namespace);
			setState(1583);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,163,_ctx) ) {
			case 1:
				{
				setState(1582);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1585);
			namespaceName();
			setState(1586);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TerminalNode StringLiteral() { return getToken(CppParser.StringLiteral, 0); }
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 230, RULE_asmDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1589);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1588);
				attributeSpecifierSequence(0);
				}
			}

			setState(1591);
			match(Asm);
			setState(1592);
			match(LeftParenthesis);
			setState(1593);
			match(StringLiteral);
			setState(1594);
			match(RightParenthesis);
			setState(1595);
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
		public TerminalNode LeftBrace() { return getToken(CppParser.LeftBrace, 0); }
		public TerminalNode RightBrace() { return getToken(CppParser.RightBrace, 0); }
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
		enterRule(_localctx, 232, RULE_linkageSpecification);
		int _la;
		try {
			setState(1607);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,166,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1597);
				match(Extern);
				setState(1598);
				match(StringLiteral);
				setState(1599);
				match(LeftBrace);
				setState(1601);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
					{
					setState(1600);
					declarationSequence(0);
					}
				}

				setState(1603);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1604);
				match(Extern);
				setState(1605);
				match(StringLiteral);
				setState(1606);
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
		int _startState = 234;
		enterRecursionRule(_localctx, 234, RULE_attributeSpecifierSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1610);
			attributeSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(1616);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,167,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AttributeSpecifierSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_attributeSpecifierSequence);
					setState(1612);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1613);
					attributeSpecifier();
					}
					} 
				}
				setState(1618);
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

	public static class AttributeSpecifierContext extends ParserRuleContext {
		public List<TerminalNode> LeftBracket() { return getTokens(CppParser.LeftBracket); }
		public TerminalNode LeftBracket(int i) {
			return getToken(CppParser.LeftBracket, i);
		}
		public AttributeListContext attributeList() {
			return getRuleContext(AttributeListContext.class,0);
		}
		public List<TerminalNode> RightBracket() { return getTokens(CppParser.RightBracket); }
		public TerminalNode RightBracket(int i) {
			return getToken(CppParser.RightBracket, i);
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
		enterRule(_localctx, 236, RULE_attributeSpecifier);
		try {
			setState(1629);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1619);
				match(LeftBracket);
				setState(1620);
				match(LeftBracket);
				setState(1622);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,168,_ctx) ) {
				case 1:
					{
					setState(1621);
					attributeUsingPrefix();
					}
					break;
				}
				setState(1624);
				attributeList(0);
				setState(1625);
				match(RightBracket);
				setState(1626);
				match(RightBracket);
				}
				break;
			case AlignAs:
				enterOuterAlt(_localctx, 2);
				{
				setState(1628);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public List<TerminalNode> RightParenthesis() { return getTokens(CppParser.RightParenthesis); }
		public TerminalNode RightParenthesis(int i) {
			return getToken(CppParser.RightParenthesis, i);
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
		enterRule(_localctx, 238, RULE_alignmentSpecifier);
		int _la;
		try {
			setState(1647);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,172,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1631);
				match(AlignAs);
				setState(1632);
				match(LeftParenthesis);
				setState(1633);
				typeIdentifier();
				setState(1635);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1634);
					match(Ellipsis);
					}
				}

				setState(1637);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1639);
				match(AlignAs);
				setState(1640);
				match(RightParenthesis);
				setState(1641);
				constantExpression();
				setState(1643);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1642);
					match(Ellipsis);
					}
				}

				setState(1645);
				match(RightParenthesis);
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
		enterRule(_localctx, 240, RULE_attributeUsingPrefix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1649);
			match(Using);
			setState(1650);
			attributeNamespace();
			setState(1651);
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
		int _startState = 242;
		enterRecursionRule(_localctx, 242, RULE_attributeList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1660);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,174,_ctx) ) {
			case 1:
				{
				setState(1655);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,173,_ctx) ) {
				case 1:
					{
					setState(1654);
					attribute();
					}
					break;
				}
				}
				break;
			case 2:
				{
				setState(1657);
				attribute();
				setState(1658);
				match(Ellipsis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1674);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,177,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1672);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,176,_ctx) ) {
					case 1:
						{
						_localctx = new AttributeListContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_attributeList);
						setState(1662);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1663);
						match(Comma);
						setState(1665);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,175,_ctx) ) {
						case 1:
							{
							setState(1664);
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
						setState(1667);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1668);
						match(Comma);
						setState(1669);
						attribute();
						setState(1670);
						match(Ellipsis);
						}
						break;
					}
					} 
				}
				setState(1676);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,177,_ctx);
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
		enterRule(_localctx, 244, RULE_attribute);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1677);
			attributeToken();
			setState(1679);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,178,_ctx) ) {
			case 1:
				{
				setState(1678);
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
		enterRule(_localctx, 246, RULE_attributeToken);
		try {
			setState(1683);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,179,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1681);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1682);
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
		enterRule(_localctx, 248, RULE_attributeScopedToken);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1685);
			attributeNamespace();
			setState(1686);
			match(DoubleColon);
			setState(1687);
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
		enterRule(_localctx, 250, RULE_attributeNamespace);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1689);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 252, RULE_attributeArgumentClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1691);
			match(LeftParenthesis);
			setState(1693);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
				{
				setState(1692);
				balancedTokenSequence(0);
				}
			}

			setState(1695);
			match(RightParenthesis);
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
		int _startState = 254;
		enterRecursionRule(_localctx, 254, RULE_balancedTokenSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1698);
			balancedToken();
			}
			_ctx.stop = _input.LT(-1);
			setState(1704);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,181,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BalancedTokenSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_balancedTokenSequence);
					setState(1700);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1701);
					balancedToken();
					}
					} 
				}
				setState(1706);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,181,_ctx);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public BalancedTokenSequenceContext balancedTokenSequence() {
			return getRuleContext(BalancedTokenSequenceContext.class,0);
		}
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
		public TerminalNode LeftBrace() { return getToken(CppParser.LeftBrace, 0); }
		public TerminalNode RightBrace() { return getToken(CppParser.RightBrace, 0); }
		public BalancedTokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_balancedToken; }
	}

	public final BalancedTokenContext balancedToken() throws RecognitionException {
		BalancedTokenContext _localctx = new BalancedTokenContext(_ctx, getState());
		enterRule(_localctx, 256, RULE_balancedToken);
		int _la;
		try {
			setState(1723);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1707);
				match(LeftParenthesis);
				setState(1709);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1708);
					balancedTokenSequence(0);
					}
				}

				setState(1711);
				match(RightParenthesis);
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1712);
				match(LeftBracket);
				setState(1714);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1713);
					balancedTokenSequence(0);
					}
				}

				setState(1716);
				match(RightBracket);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 3);
				{
				setState(1717);
				match(LeftBrace);
				setState(1719);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1718);
					balancedTokenSequence(0);
					}
				}

				setState(1721);
				match(RightBrace);
				}
				break;
			case BlockComment:
			case LineComment:
			case Whitespace:
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
			case DoubleGreaterThan:
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
				setState(1722);
				_la = _input.LA(1);
				if ( _la <= 0 || (((((_la - 80)) & ~0x3f) == 0 && ((1L << (_la - 80)) & ((1L << (LeftBrace - 80)) | (1L << (RightBrace - 80)) | (1L << (LeftBracket - 80)) | (1L << (RightBracket - 80)) | (1L << (LeftParenthesis - 80)) | (1L << (RightParenthesis - 80)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
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
		int _startState = 258;
		enterRecursionRule(_localctx, 258, RULE_initializerDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1726);
			initializerDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(1733);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,186,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerDeclaratorList);
					setState(1728);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1729);
					match(Comma);
					setState(1730);
					initializerDeclarator();
					}
					} 
				}
				setState(1735);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,186,_ctx);
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
		enterRule(_localctx, 260, RULE_initializerDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1736);
			declarator();
			setState(1738);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,187,_ctx) ) {
			case 1:
				{
				setState(1737);
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
		enterRule(_localctx, 262, RULE_declarator);
		try {
			setState(1742);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,188,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1740);
				pointerDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1741);
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
		enterRule(_localctx, 264, RULE_pointerDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1744);
			pointerOperator();
			setState(1745);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public PointerDeclaratorContext pointerDeclarator() {
			return getRuleContext(PointerDeclaratorContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public NoPointerDeclaratorContext noPointerDeclarator() {
			return getRuleContext(NoPointerDeclaratorContext.class,0);
		}
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
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
		int _startState = 266;
		enterRecursionRule(_localctx, 266, RULE_noPointerDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1759);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DeclType:
			case Operator:
			case Ellipsis:
			case DoubleColon:
			case Tilde:
			case Identifier:
				{
				setState(1749);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1748);
					match(Ellipsis);
					}
				}

				setState(1751);
				identifierExpression();
				setState(1753);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,190,_ctx) ) {
				case 1:
					{
					setState(1752);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case LeftParenthesis:
				{
				setState(1755);
				match(LeftParenthesis);
				setState(1756);
				pointerDeclarator();
				setState(1757);
				match(RightParenthesis);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1774);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,195,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1772);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,194,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerDeclarator);
						setState(1761);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1762);
						match(LeftBracket);
						setState(1764);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1763);
							constantExpression();
							}
						}

						setState(1766);
						match(RightBracket);
						setState(1768);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,193,_ctx) ) {
						case 1:
							{
							setState(1767);
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
						setState(1770);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1771);
						parametersAndQualifiers();
						}
						break;
					}
					} 
				}
				setState(1776);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,195,_ctx);
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
		enterRule(_localctx, 268, RULE_parametersAndQualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1777);
			functionParameters();
			setState(1778);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ParameterDeclarationClauseContext parameterDeclarationClause() {
			return getRuleContext(ParameterDeclarationClauseContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public FunctionParametersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionParameters; }
	}

	public final FunctionParametersContext functionParameters() throws RecognitionException {
		FunctionParametersContext _localctx = new FunctionParametersContext(_ctx, getState());
		enterRule(_localctx, 270, RULE_functionParameters);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1780);
			match(LeftParenthesis);
			setState(1781);
			parameterDeclarationClause();
			setState(1782);
			match(RightParenthesis);
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
		enterRule(_localctx, 272, RULE_functionQualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1785);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,196,_ctx) ) {
			case 1:
				{
				setState(1784);
				constVolatileQualifierSequence();
				}
				break;
			}
			setState(1788);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,197,_ctx) ) {
			case 1:
				{
				setState(1787);
				referenceQualifier();
				}
				break;
			}
			setState(1791);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,198,_ctx) ) {
			case 1:
				{
				setState(1790);
				noExceptionSpecifier();
				}
				break;
			}
			setState(1794);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,199,_ctx) ) {
			case 1:
				{
				setState(1793);
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
		enterRule(_localctx, 274, RULE_trailingReturnType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1796);
			match(Arrow);
			setState(1797);
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
		enterRule(_localctx, 276, RULE_pointerOperator);
		try {
			setState(1822);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Asterisk:
				enterOuterAlt(_localctx, 1);
				{
				setState(1799);
				match(Asterisk);
				setState(1801);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,200,_ctx) ) {
				case 1:
					{
					setState(1800);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1804);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,201,_ctx) ) {
				case 1:
					{
					setState(1803);
					constVolatileQualifierSequence();
					}
					break;
				}
				}
				break;
			case Ampersand:
				enterOuterAlt(_localctx, 2);
				{
				setState(1806);
				match(Ampersand);
				setState(1808);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,202,_ctx) ) {
				case 1:
					{
					setState(1807);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case DoubleAmpersand:
				enterOuterAlt(_localctx, 3);
				{
				setState(1810);
				match(DoubleAmpersand);
				setState(1812);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,203,_ctx) ) {
				case 1:
					{
					setState(1811);
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
				setState(1814);
				nestedNameSpecifier();
				setState(1815);
				match(Asterisk);
				setState(1817);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,204,_ctx) ) {
				case 1:
					{
					setState(1816);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1820);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,205,_ctx) ) {
				case 1:
					{
					setState(1819);
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
		enterRule(_localctx, 278, RULE_constVolatileQualifierSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1824);
			constVolatileQualifier();
			setState(1826);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,207,_ctx) ) {
			case 1:
				{
				setState(1825);
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
		enterRule(_localctx, 280, RULE_constVolatileQualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1828);
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
		enterRule(_localctx, 282, RULE_referenceQualifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1830);
			match(Ampersand);
			setState(1831);
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
		enterRule(_localctx, 284, RULE_typeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1833);
			typeSpecifierSequence();
			setState(1835);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,208,_ctx) ) {
			case 1:
				{
				setState(1834);
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
		enterRule(_localctx, 286, RULE_definingTypeIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1837);
			definingTypeSpecifierSequence();
			setState(1839);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || ((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (LeftBracket - 82)) | (1L << (LeftParenthesis - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
				{
				setState(1838);
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
		enterRule(_localctx, 288, RULE_abstractDeclarator);
		try {
			setState(1849);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,211,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1841);
				pointerAbstractDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1843);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,210,_ctx) ) {
				case 1:
					{
					setState(1842);
					noPointerAbstractDeclarator(0);
					}
					break;
				}
				setState(1845);
				parametersAndQualifiers();
				setState(1846);
				trailingReturnType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1848);
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
		enterRule(_localctx, 290, RULE_pointerAbstractDeclarator);
		try {
			setState(1856);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBracket:
			case LeftParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1851);
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
				setState(1852);
				pointerOperator();
				setState(1854);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,212,_ctx) ) {
				case 1:
					{
					setState(1853);
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
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public PointerAbstractDeclaratorContext pointerAbstractDeclarator() {
			return getRuleContext(PointerAbstractDeclaratorContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		int _startState = 292;
		enterRecursionRule(_localctx, 292, RULE_noPointerAbstractDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1872);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,216,_ctx) ) {
			case 1:
				{
				setState(1859);
				parametersAndQualifiers();
				}
				break;
			case 2:
				{
				setState(1860);
				match(LeftBracket);
				setState(1862);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1861);
					constantExpression();
					}
				}

				setState(1864);
				match(RightBracket);
				setState(1866);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,215,_ctx) ) {
				case 1:
					{
					setState(1865);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 3:
				{
				setState(1868);
				match(LeftParenthesis);
				setState(1869);
				pointerAbstractDeclarator();
				setState(1870);
				match(RightParenthesis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1887);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,220,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1885);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,219,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1874);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1875);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1876);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1877);
						match(LeftBracket);
						setState(1879);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1878);
							constantExpression();
							}
						}

						setState(1881);
						match(RightBracket);
						setState(1883);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,218,_ctx) ) {
						case 1:
							{
							setState(1882);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1889);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,220,_ctx);
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
		enterRule(_localctx, 294, RULE_abstractPackDeclarator);
		try {
			setState(1894);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ellipsis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1890);
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
				setState(1891);
				pointerOperator();
				setState(1892);
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
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
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
		int _startState = 296;
		enterRecursionRule(_localctx, 296, RULE_noPointerAbstractPackDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1897);
			match(Ellipsis);
			}
			_ctx.stop = _input.LT(-1);
			setState(1912);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,225,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1910);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,224,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1899);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1900);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1901);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1902);
						match(LeftBracket);
						setState(1904);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1903);
							constantExpression();
							}
						}

						setState(1906);
						match(RightBracket);
						setState(1908);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,223,_ctx) ) {
						case 1:
							{
							setState(1907);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1914);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,225,_ctx);
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
		enterRule(_localctx, 298, RULE_parameterDeclarationClause);
		int _la;
		try {
			setState(1925);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,228,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1916);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (Unsigned - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)))) != 0)) {
					{
					setState(1915);
					parameterDeclarationList(0);
					}
				}

				setState(1919);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1918);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1921);
				parameterDeclarationList(0);
				setState(1922);
				match(Comma);
				setState(1923);
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
		int _startState = 300;
		enterRecursionRule(_localctx, 300, RULE_parameterDeclarationList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1928);
			parameterDeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1935);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,229,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ParameterDeclarationListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_parameterDeclarationList);
					setState(1930);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1931);
					match(Comma);
					setState(1932);
					parameterDeclaration();
					}
					} 
				}
				setState(1937);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,229,_ctx);
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
		enterRule(_localctx, 302, RULE_parameterDeclaration);
		int _la;
		try {
			setState(1952);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,232,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1939);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1938);
					attributeSpecifierSequence(0);
					}
				}

				setState(1941);
				declarationSpecifierSequence();
				setState(1942);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1945);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1944);
					attributeSpecifierSequence(0);
					}
				}

				setState(1947);
				declarationSpecifierSequence();
				setState(1948);
				declarator();
				setState(1949);
				match(Equal);
				setState(1950);
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
		enterRule(_localctx, 304, RULE_functionDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1955);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1954);
				attributeSpecifierSequence(0);
				}
			}

			setState(1958);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,234,_ctx) ) {
			case 1:
				{
				setState(1957);
				declarationSpecifierSequence();
				}
				break;
			}
			setState(1960);
			functionDeclarator();
			setState(1962);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Override || _la==Final) {
				{
				setState(1961);
				virtualSpecifierSequence(0);
				}
			}

			setState(1964);
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
		enterRule(_localctx, 306, RULE_functionDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1966);
			identifierExpression();
			setState(1967);
			functionParameters();
			setState(1968);
			functionQualifiers();
			setState(1970);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(1969);
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
		enterRule(_localctx, 308, RULE_functionBody);
		try {
			setState(1976);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,237,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1972);
				regularFunctionBody();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1973);
				functionTryBlock();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1974);
				explicitlyDefaultedFunction();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1975);
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
		enterRule(_localctx, 310, RULE_regularFunctionBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1979);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1978);
				constructorInitializer();
				}
			}

			setState(1981);
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
		enterRule(_localctx, 312, RULE_explicitlyDefaultedFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1983);
			match(Equal);
			setState(1984);
			match(Default);
			setState(1985);
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
		enterRule(_localctx, 314, RULE_deletedFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1987);
			match(Equal);
			setState(1988);
			match(Delete);
			setState(1989);
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
		enterRule(_localctx, 316, RULE_initializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1991);
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
		enterRule(_localctx, 318, RULE_braceOrEqualInitializer);
		try {
			setState(1996);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Equal:
				enterOuterAlt(_localctx, 1);
				{
				setState(1993);
				match(Equal);
				setState(1994);
				initializerClause();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(1995);
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
		enterRule(_localctx, 320, RULE_initializerClause);
		try {
			setState(2000);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AlignOf:
			case Auto:
			case Bool:
			case Char:
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
			case LeftBracket:
			case LeftParenthesis:
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
				setState(1998);
				assignmentExpression();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(1999);
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
		int _startState = 322;
		enterRecursionRule(_localctx, 322, RULE_initializerList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2003);
			initializerClause();
			setState(2005);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,241,_ctx) ) {
			case 1:
				{
				setState(2004);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2015);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,243,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerList);
					setState(2007);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2008);
					match(Comma);
					setState(2009);
					initializerClause();
					setState(2011);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,242,_ctx) ) {
					case 1:
						{
						setState(2010);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2017);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,243,_ctx);
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
		public TerminalNode LeftBrace() { return getToken(CppParser.LeftBrace, 0); }
		public InitializerListContext initializerList() {
			return getRuleContext(InitializerListContext.class,0);
		}
		public TerminalNode RightBrace() { return getToken(CppParser.RightBrace, 0); }
		public TerminalNode Comma() { return getToken(CppParser.Comma, 0); }
		public BracedInitializerListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_bracedInitializerList; }
	}

	public final BracedInitializerListContext bracedInitializerList() throws RecognitionException {
		BracedInitializerListContext _localctx = new BracedInitializerListContext(_ctx, getState());
		enterRule(_localctx, 324, RULE_bracedInitializerList);
		int _la;
		try {
			setState(2027);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,245,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2018);
				match(LeftBrace);
				setState(2019);
				initializerList(0);
				setState(2021);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(2020);
					match(Comma);
					}
				}

				setState(2023);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2025);
				match(LeftBrace);
				setState(2026);
				match(RightBrace);
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
		enterRule(_localctx, 326, RULE_expressionOrBracedInitializerList);
		try {
			setState(2031);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AlignOf:
			case Auto:
			case Bool:
			case Char:
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
			case LeftBracket:
			case LeftParenthesis:
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
				setState(2029);
				expression(0);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2030);
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
		public TerminalNode LeftBrace() { return getToken(CppParser.LeftBrace, 0); }
		public TerminalNode RightBrace() { return getToken(CppParser.RightBrace, 0); }
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
		enterRule(_localctx, 328, RULE_classSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2033);
			classHead();
			setState(2034);
			match(LeftBrace);
			setState(2036);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Colon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
				{
				setState(2035);
				memberSpecification();
				}
			}

			setState(2038);
			match(RightBrace);
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
		enterRule(_localctx, 330, RULE_classHead);
		int _la;
		try {
			setState(2058);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,253,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2040);
				classKey();
				setState(2042);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2041);
					attributeSpecifierSequence(0);
					}
				}

				setState(2044);
				classHeadName();
				setState(2046);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Final) {
					{
					setState(2045);
					classVirtualSpecifier();
					}
				}

				setState(2049);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2048);
					baseClause();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2051);
				classKey();
				setState(2053);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2052);
					attributeSpecifier();
					}
				}

				setState(2056);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2055);
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
		enterRule(_localctx, 332, RULE_classHeadName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2061);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,254,_ctx) ) {
			case 1:
				{
				setState(2060);
				nestedNameSpecifier();
				}
				break;
			}
			setState(2063);
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
		enterRule(_localctx, 334, RULE_classVirtualSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2065);
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
		enterRule(_localctx, 336, RULE_classKey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2067);
			_la = _input.LA(1);
			if ( !(((((_la - 16)) & ~0x3f) == 0 && ((1L << (_la - 16)) & ((1L << (Class - 16)) | (1L << (Struct - 16)) | (1L << (Union - 16)))) != 0)) ) {
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
		enterRule(_localctx, 338, RULE_memberSpecification);
		int _la;
		try {
			setState(2078);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AlignAs:
			case Auto:
			case Bool:
			case Char:
			case Char16:
			case Char32:
			case ConstExpr:
			case DeclType:
			case Double:
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
			case Template:
			case ThreadLocal:
			case TypeDef:
			case Unsigned:
			case Using:
			case Virtual:
			case Void:
			case WChar:
			case LeftBracket:
			case LeftParenthesis:
			case Semicolon:
			case Colon:
			case Ellipsis:
			case DoubleColon:
			case Asterisk:
			case Ampersand:
			case Tilde:
			case DoubleAmpersand:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(2069);
				memberDeclaration();
				setState(2071);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Colon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
					{
					setState(2070);
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
				setState(2073);
				accessSpecifier();
				setState(2074);
				match(Colon);
				setState(2076);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Colon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
					{
					setState(2075);
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
		public TerminalNode Semicolon() { return getToken(CppParser.Semicolon, 0); }
		public AttributeSpecifierSequenceContext attributeSpecifierSequence() {
			return getRuleContext(AttributeSpecifierSequenceContext.class,0);
		}
		public DeclarationSpecifierSequenceContext declarationSpecifierSequence() {
			return getRuleContext(DeclarationSpecifierSequenceContext.class,0);
		}
		public MemberDeclaratorListContext memberDeclaratorList() {
			return getRuleContext(MemberDeclaratorListContext.class,0);
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
		enterRule(_localctx, 340, RULE_memberDeclaration);
		int _la;
		try {
			setState(2097);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,261,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2081);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,258,_ctx) ) {
				case 1:
					{
					setState(2080);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(2084);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,259,_ctx) ) {
				case 1:
					{
					setState(2083);
					declarationSpecifierSequence();
					}
					break;
				}
				setState(2087);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << DeclType) | (1L << Operator))) != 0) || ((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (LeftBracket - 82)) | (1L << (LeftParenthesis - 82)) | (1L << (Colon - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (Tilde - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
					{
					setState(2086);
					memberDeclaratorList(0);
					}
				}

				setState(2089);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2090);
				functionDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2091);
				usingDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2092);
				staticAssertDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2093);
				templateDeclaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2094);
				deductionGuide();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2095);
				aliasDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2096);
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
		int _startState = 342;
		enterRecursionRule(_localctx, 342, RULE_memberDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2100);
			memberDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(2107);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,262,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberDeclaratorList);
					setState(2102);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2103);
					match(Comma);
					setState(2104);
					memberDeclarator();
					}
					} 
				}
				setState(2109);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,262,_ctx);
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
		public PureSpecifierContext pureSpecifier() {
			return getRuleContext(PureSpecifierContext.class,0);
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
		enterRule(_localctx, 344, RULE_memberDeclarator);
		int _la;
		try {
			setState(2129);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,268,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2110);
				declarator();
				setState(2112);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,263,_ctx) ) {
				case 1:
					{
					setState(2111);
					virtualSpecifierSequence(0);
					}
					break;
				}
				setState(2115);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,264,_ctx) ) {
				case 1:
					{
					setState(2114);
					pureSpecifier();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2117);
				declarator();
				setState(2119);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,265,_ctx) ) {
				case 1:
					{
					setState(2118);
					braceOrEqualInitializer();
					}
					break;
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2122);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2121);
					match(Identifier);
					}
				}

				setState(2125);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2124);
					attributeSpecifierSequence(0);
					}
				}

				setState(2127);
				match(Colon);
				setState(2128);
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
		int _startState = 346;
		enterRecursionRule(_localctx, 346, RULE_virtualSpecifierSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2132);
			virtualSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(2138);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,269,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new VirtualSpecifierSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_virtualSpecifierSequence);
					setState(2134);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2135);
					virtualSpecifier();
					}
					} 
				}
				setState(2140);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,269,_ctx);
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
		enterRule(_localctx, 348, RULE_virtualSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2141);
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
		enterRule(_localctx, 350, RULE_pureSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2143);
			match(Equal);
			setState(2144);
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
		enterRule(_localctx, 352, RULE_baseClause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2146);
			match(Colon);
			setState(2147);
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
		int _startState = 354;
		enterRecursionRule(_localctx, 354, RULE_baseSpecifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2150);
			baseSpecifier();
			setState(2152);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,270,_ctx) ) {
			case 1:
				{
				setState(2151);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2162);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,272,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BaseSpecifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_baseSpecifierList);
					setState(2154);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2155);
					match(Comma);
					setState(2156);
					baseSpecifier();
					setState(2158);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,271,_ctx) ) {
					case 1:
						{
						setState(2157);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2164);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,272,_ctx);
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
		enterRule(_localctx, 356, RULE_baseSpecifier);
		int _la;
		try {
			setState(2186);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,278,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2166);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2165);
					attributeSpecifierSequence(0);
					}
				}

				setState(2168);
				classOrDecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2170);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2169);
					attributeSpecifierSequence(0);
					}
				}

				setState(2172);
				match(Virtual);
				setState(2174);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Private) | (1L << Protected) | (1L << Public))) != 0)) {
					{
					setState(2173);
					accessSpecifier();
					}
				}

				setState(2176);
				classOrDecltype();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2178);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2177);
					attributeSpecifierSequence(0);
					}
				}

				setState(2180);
				accessSpecifier();
				setState(2182);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Virtual) {
					{
					setState(2181);
					match(Virtual);
					}
				}

				setState(2184);
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
		enterRule(_localctx, 358, RULE_classOrDecltype);
		try {
			setState(2197);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,280,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2189);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,279,_ctx) ) {
				case 1:
					{
					setState(2188);
					nestedNameSpecifier();
					}
					break;
				}
				setState(2191);
				className();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2192);
				nestedNameSpecifier();
				setState(2193);
				match(Template);
				setState(2194);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2196);
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
		enterRule(_localctx, 360, RULE_accessSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2199);
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
		enterRule(_localctx, 362, RULE_conversionFunctionIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2201);
			match(Operator);
			setState(2202);
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
		enterRule(_localctx, 364, RULE_conversionTypeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2204);
			typeSpecifierSequence();
			setState(2206);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,281,_ctx) ) {
			case 1:
				{
				setState(2205);
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
		enterRule(_localctx, 366, RULE_conversionDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2208);
			pointerOperator();
			setState(2210);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,282,_ctx) ) {
			case 1:
				{
				setState(2209);
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
		enterRule(_localctx, 368, RULE_constructorInitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2212);
			match(Colon);
			setState(2213);
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
		int _startState = 370;
		enterRecursionRule(_localctx, 370, RULE_memberInitializerList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2216);
			memberInitializer();
			setState(2218);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,283,_ctx) ) {
			case 1:
				{
				setState(2217);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2228);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,285,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberInitializerListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberInitializerList);
					setState(2220);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2221);
					match(Comma);
					setState(2222);
					memberInitializer();
					setState(2224);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,284,_ctx) ) {
					case 1:
						{
						setState(2223);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2230);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,285,_ctx);
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
		public List<MemberInitializerIdentifierContext> memberInitializerIdentifier() {
			return getRuleContexts(MemberInitializerIdentifierContext.class);
		}
		public MemberInitializerIdentifierContext memberInitializerIdentifier(int i) {
			return getRuleContext(MemberInitializerIdentifierContext.class,i);
		}
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public BracedInitializerListContext bracedInitializerList() {
			return getRuleContext(BracedInitializerListContext.class,0);
		}
		public ExpressionListContext expressionList() {
			return getRuleContext(ExpressionListContext.class,0);
		}
		public MemberInitializerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberInitializer; }
	}

	public final MemberInitializerContext memberInitializer() throws RecognitionException {
		MemberInitializerContext _localctx = new MemberInitializerContext(_ctx, getState());
		enterRule(_localctx, 372, RULE_memberInitializer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2231);
			memberInitializerIdentifier();
			setState(2232);
			match(LeftParenthesis);
			setState(2234);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(2233);
				expressionList();
				}
			}

			setState(2236);
			match(RightParenthesis);
			setState(2237);
			memberInitializerIdentifier();
			setState(2238);
			bracedInitializerList();
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
		public ClassOrDecltypeContext classOrDecltype() {
			return getRuleContext(ClassOrDecltypeContext.class,0);
		}
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public MemberInitializerIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberInitializerIdentifier; }
	}

	public final MemberInitializerIdentifierContext memberInitializerIdentifier() throws RecognitionException {
		MemberInitializerIdentifierContext _localctx = new MemberInitializerIdentifierContext(_ctx, getState());
		enterRule(_localctx, 374, RULE_memberInitializerIdentifier);
		try {
			setState(2242);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,287,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2240);
				classOrDecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2241);
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
		enterRule(_localctx, 376, RULE_operatorFunctionIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2244);
			match(Operator);
			setState(2245);
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
		public TerminalNode LeftBrace() { return getToken(CppParser.LeftBrace, 0); }
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
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
		public TerminalNode DoubleGreaterThan() { return getToken(CppParser.DoubleGreaterThan, 0); }
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public AnyOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_anyOperator; }
	}

	public final AnyOperatorContext anyOperator() throws RecognitionException {
		AnyOperatorContext _localctx = new AnyOperatorContext(_ctx, getState());
		enterRule(_localctx, 378, RULE_anyOperator);
		try {
			setState(2295);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,288,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2247);
				match(New);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2248);
				match(Delete);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2249);
				match(New);
				setState(2250);
				match(LeftBrace);
				setState(2251);
				match(RightBracket);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2252);
				match(Delete);
				setState(2253);
				match(LeftBrace);
				setState(2254);
				match(RightBracket);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2255);
				match(Plus);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2256);
				match(Minus);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2257);
				match(Asterisk);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2258);
				match(ForwardSlash);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2259);
				match(Percent);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2260);
				match(Caret);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2261);
				match(Ampersand);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(2262);
				match(VerticalBar);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(2263);
				match(Tilde);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(2264);
				match(ExclamationMark);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(2265);
				match(Equal);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(2266);
				match(LessThan);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(2267);
				match(GreaterThan);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(2268);
				match(PlusEqual);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(2269);
				match(MinusEqual);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(2270);
				match(AsteriskEqual);
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(2271);
				match(ForwardSlashEqual);
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(2272);
				match(PercentEqual);
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(2273);
				match(CaretEqual);
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(2274);
				match(AmpersandEqual);
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(2275);
				match(VerticalBarEqual);
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(2276);
				match(DoubleLessThan);
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(2277);
				match(DoubleGreaterThan);
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(2278);
				match(DoubleGreaterThanEqual);
				}
				break;
			case 29:
				enterOuterAlt(_localctx, 29);
				{
				setState(2279);
				match(DoubleLessThanEqual);
				}
				break;
			case 30:
				enterOuterAlt(_localctx, 30);
				{
				setState(2280);
				match(DoubleEqual);
				}
				break;
			case 31:
				enterOuterAlt(_localctx, 31);
				{
				setState(2281);
				match(ExclamationMarkEqual);
				}
				break;
			case 32:
				enterOuterAlt(_localctx, 32);
				{
				setState(2282);
				match(LessThanEqual);
				}
				break;
			case 33:
				enterOuterAlt(_localctx, 33);
				{
				setState(2283);
				match(GreaterThanEqual);
				}
				break;
			case 34:
				enterOuterAlt(_localctx, 34);
				{
				setState(2284);
				match(DoubleAmpersand);
				}
				break;
			case 35:
				enterOuterAlt(_localctx, 35);
				{
				setState(2285);
				match(DoubleVerticalBar);
				}
				break;
			case 36:
				enterOuterAlt(_localctx, 36);
				{
				setState(2286);
				match(DoublePlus);
				}
				break;
			case 37:
				enterOuterAlt(_localctx, 37);
				{
				setState(2287);
				match(DoubleMinus);
				}
				break;
			case 38:
				enterOuterAlt(_localctx, 38);
				{
				setState(2288);
				match(Comma);
				}
				break;
			case 39:
				enterOuterAlt(_localctx, 39);
				{
				setState(2289);
				match(ArrowAsterisk);
				}
				break;
			case 40:
				enterOuterAlt(_localctx, 40);
				{
				setState(2290);
				match(Arrow);
				}
				break;
			case 41:
				enterOuterAlt(_localctx, 41);
				{
				setState(2291);
				match(LeftParenthesis);
				setState(2292);
				match(RightParenthesis);
				}
				break;
			case 42:
				enterOuterAlt(_localctx, 42);
				{
				setState(2293);
				match(LeftBracket);
				setState(2294);
				match(RightBracket);
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
		enterRule(_localctx, 380, RULE_literalOperatorIdentifier);
		try {
			setState(2302);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,289,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2297);
				match(Operator);
				setState(2298);
				match(StringLiteral);
				setState(2299);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2300);
				match(Operator);
				setState(2301);
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
		enterRule(_localctx, 382, RULE_templateDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2304);
			match(Template);
			setState(2305);
			match(LessThan);
			setState(2306);
			templateParameterList(0);
			setState(2307);
			match(GreaterThan);
			setState(2308);
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
		int _startState = 384;
		enterRecursionRule(_localctx, 384, RULE_templateParameterList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2311);
			templateParameter();
			}
			_ctx.stop = _input.LT(-1);
			setState(2318);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,290,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateParameterListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateParameterList);
					setState(2313);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2314);
					match(Comma);
					setState(2315);
					templateParameter();
					}
					} 
				}
				setState(2320);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,290,_ctx);
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
		enterRule(_localctx, 386, RULE_templateParameter);
		try {
			setState(2323);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Class:
			case Template:
			case TypeName:
				enterOuterAlt(_localctx, 1);
				{
				setState(2321);
				typeParameter();
				}
				break;
			case AlignAs:
			case Auto:
			case Bool:
			case Char:
			case Char16:
			case Char32:
			case ConstExpr:
			case DeclType:
			case Double:
			case Explicit:
			case Extern:
			case Float:
			case Friend:
			case Inline:
			case Int:
			case Long:
			case Mutable:
			case Short:
			case Signed:
			case Static:
			case ThreadLocal:
			case TypeDef:
			case Unsigned:
			case Virtual:
			case Void:
			case WChar:
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(2322);
				parameterDeclaration();
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
		enterRule(_localctx, 388, RULE_typeParameter);
		int _la;
		try {
			setState(2361);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,298,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2325);
				typeParameterKey();
				setState(2327);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,292,_ctx) ) {
				case 1:
					{
					setState(2326);
					match(Ellipsis);
					}
					break;
				}
				setState(2330);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,293,_ctx) ) {
				case 1:
					{
					setState(2329);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2332);
				typeParameterKey();
				setState(2334);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2333);
					match(Identifier);
					}
				}

				setState(2336);
				match(Equal);
				setState(2337);
				typeIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2339);
				match(Template);
				setState(2340);
				match(LessThan);
				setState(2341);
				templateParameterList(0);
				setState(2342);
				match(GreaterThan);
				setState(2343);
				typeParameterKey();
				setState(2345);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,295,_ctx) ) {
				case 1:
					{
					setState(2344);
					match(Ellipsis);
					}
					break;
				}
				setState(2348);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,296,_ctx) ) {
				case 1:
					{
					setState(2347);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2350);
				match(Template);
				setState(2351);
				match(LessThan);
				setState(2352);
				templateParameterList(0);
				setState(2353);
				match(GreaterThan);
				setState(2354);
				typeParameterKey();
				setState(2356);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2355);
					match(Identifier);
					}
				}

				setState(2358);
				match(Equal);
				setState(2359);
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
		enterRule(_localctx, 390, RULE_typeParameterKey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2363);
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
		enterRule(_localctx, 392, RULE_simpleTemplateIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2365);
			templateName();
			setState(2366);
			match(LessThan);
			setState(2368);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(2367);
				templateArgumentList(0);
				}
			}

			setState(2370);
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
		enterRule(_localctx, 394, RULE_templateIdentifier);
		int _la;
		try {
			setState(2387);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,302,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2372);
				simpleTemplateIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2373);
				operatorFunctionIdentifier();
				setState(2374);
				match(LessThan);
				setState(2376);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(2375);
					templateArgumentList(0);
					}
				}

				setState(2378);
				match(GreaterThan);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2380);
				literalOperatorIdentifier();
				setState(2381);
				match(LessThan);
				setState(2383);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(2382);
					templateArgumentList(0);
					}
				}

				setState(2385);
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
		int _startState = 396;
		enterRecursionRule(_localctx, 396, RULE_templateArgumentList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2390);
			templateArgument();
			setState(2392);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,303,_ctx) ) {
			case 1:
				{
				setState(2391);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2402);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,305,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateArgumentListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateArgumentList);
					setState(2394);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2395);
					match(Comma);
					setState(2396);
					templateArgument();
					setState(2398);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,304,_ctx) ) {
					case 1:
						{
						setState(2397);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2404);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,305,_ctx);
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
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public IdentifierExpressionContext identifierExpression() {
			return getRuleContext(IdentifierExpressionContext.class,0);
		}
		public TemplateArgumentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateArgument; }
	}

	public final TemplateArgumentContext templateArgument() throws RecognitionException {
		TemplateArgumentContext _localctx = new TemplateArgumentContext(_ctx, getState());
		enterRule(_localctx, 398, RULE_templateArgument);
		try {
			setState(2408);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,306,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2405);
				constantExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2406);
				typeIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2407);
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
		enterRule(_localctx, 400, RULE_typenameSpecifier);
		int _la;
		try {
			setState(2421);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,308,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2410);
				match(TypeName);
				setState(2411);
				nestedNameSpecifier();
				setState(2412);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2414);
				match(TypeName);
				setState(2415);
				nestedNameSpecifier();
				setState(2417);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(2416);
					match(Template);
					}
				}

				setState(2419);
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
		enterRule(_localctx, 402, RULE_explicitInstantiation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2424);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Extern) {
				{
				setState(2423);
				match(Extern);
				}
			}

			setState(2426);
			match(Template);
			setState(2427);
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
		enterRule(_localctx, 404, RULE_explicitSpecialization);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2429);
			match(Template);
			setState(2430);
			match(LessThan);
			setState(2431);
			match(GreaterThan);
			setState(2432);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ParameterDeclarationClauseContext parameterDeclarationClause() {
			return getRuleContext(ParameterDeclarationClauseContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 406, RULE_deductionGuide);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2435);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Explicit) {
				{
				setState(2434);
				match(Explicit);
				}
			}

			setState(2437);
			templateName();
			setState(2438);
			match(LeftParenthesis);
			setState(2439);
			parameterDeclarationClause();
			setState(2440);
			match(RightParenthesis);
			setState(2441);
			match(Arrow);
			setState(2442);
			simpleTemplateIdentifier();
			setState(2443);
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
		enterRule(_localctx, 408, RULE_tryBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2445);
			match(Try);
			setState(2446);
			compoundStatement();
			setState(2447);
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
		enterRule(_localctx, 410, RULE_functionTryBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2449);
			match(Try);
			setState(2451);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2450);
				constructorInitializer();
				}
			}

			setState(2453);
			compoundStatement();
			setState(2454);
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
		enterRule(_localctx, 412, RULE_handlerSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2456);
			handler();
			setState(2458);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,312,_ctx) ) {
			case 1:
				{
				setState(2457);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ExceptionDeclarationContext exceptionDeclaration() {
			return getRuleContext(ExceptionDeclarationContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
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
		enterRule(_localctx, 414, RULE_handler);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2460);
			match(Catch);
			setState(2461);
			match(LeftParenthesis);
			setState(2462);
			exceptionDeclaration();
			setState(2463);
			match(RightParenthesis);
			setState(2464);
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
		enterRule(_localctx, 416, RULE_exceptionDeclaration);
		int _la;
		try {
			setState(2480);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,316,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2467);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2466);
					attributeSpecifierSequence(0);
					}
				}

				setState(2469);
				typeSpecifierSequence();
				setState(2470);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2473);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2472);
					attributeSpecifierSequence(0);
					}
				}

				setState(2475);
				typeSpecifierSequence();
				setState(2477);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || ((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (LeftBracket - 82)) | (1L << (LeftParenthesis - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
					{
					setState(2476);
					abstractDeclarator();
					}
				}

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2479);
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
		public TerminalNode LeftParenthesis() { return getToken(CppParser.LeftParenthesis, 0); }
		public ConstantExpressionContext constantExpression() {
			return getRuleContext(ConstantExpressionContext.class,0);
		}
		public TerminalNode RightParenthesis() { return getToken(CppParser.RightParenthesis, 0); }
		public TerminalNode Throw() { return getToken(CppParser.Throw, 0); }
		public NoExceptionSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_noExceptionSpecifier; }
	}

	public final NoExceptionSpecifierContext noExceptionSpecifier() throws RecognitionException {
		NoExceptionSpecifierContext _localctx = new NoExceptionSpecifierContext(_ctx, getState());
		enterRule(_localctx, 418, RULE_noExceptionSpecifier);
		try {
			setState(2491);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,317,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2482);
				match(NoExcept);
				setState(2483);
				match(LeftParenthesis);
				setState(2484);
				constantExpression();
				setState(2485);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2487);
				match(NoExcept);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2488);
				match(Throw);
				setState(2489);
				match(LeftParenthesis);
				setState(2490);
				match(RightParenthesis);
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
		int _startState = 420;
		enterRecursionRule(_localctx, 420, RULE_identifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2494);
			match(Identifier);
			}
			_ctx.stop = _input.LT(-1);
			setState(2501);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,318,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new IdentifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_identifierList);
					setState(2496);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2497);
					match(Comma);
					setState(2498);
					match(Identifier);
					}
					} 
				}
				setState(2503);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,318,_ctx);
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
		enterRule(_localctx, 422, RULE_literal);
		try {
			setState(2511);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Zero:
			case IntegerLiteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(2504);
				integerLiteral();
				}
				break;
			case FloatingPointLiteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(2505);
				match(FloatingPointLiteral);
				}
				break;
			case CharacterLiteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(2506);
				match(CharacterLiteral);
				}
				break;
			case StringLiteral:
				enterOuterAlt(_localctx, 4);
				{
				setState(2507);
				match(StringLiteral);
				}
				break;
			case False:
			case True:
				enterOuterAlt(_localctx, 5);
				{
				setState(2508);
				booleanLiteral();
				}
				break;
			case Nullptr:
				enterOuterAlt(_localctx, 6);
				{
				setState(2509);
				pointerLiteral();
				}
				break;
			case UserDefinedIntegerLiteral:
			case UserDefinedFloatingPointLiteral:
			case UserDefinedCharacterLiteral:
			case UserDefinedStringLiteral:
				enterOuterAlt(_localctx, 7);
				{
				setState(2510);
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
		enterRule(_localctx, 424, RULE_integerLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2513);
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
		enterRule(_localctx, 426, RULE_booleanLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2515);
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
		enterRule(_localctx, 428, RULE_pointerLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2517);
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
		enterRule(_localctx, 430, RULE_userDefinedLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2519);
			_la = _input.LA(1);
			if ( !(((((_la - 134)) & ~0x3f) == 0 && ((1L << (_la - 134)) & ((1L << (UserDefinedIntegerLiteral - 134)) | (1L << (UserDefinedFloatingPointLiteral - 134)) | (1L << (UserDefinedCharacterLiteral - 134)) | (1L << (UserDefinedStringLiteral - 134)))) != 0)) ) {
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
		case 16:
			return captureList_sempred((CaptureListContext)_localctx, predIndex);
		case 28:
			return postfixExpression_sempred((PostfixExpressionContext)_localctx, predIndex);
		case 37:
			return noPointerNewDeclarator_sempred((NoPointerNewDeclaratorContext)_localctx, predIndex);
		case 42:
			return pointerManipulationExpression_sempred((PointerManipulationExpressionContext)_localctx, predIndex);
		case 43:
			return multiplicativeExpression_sempred((MultiplicativeExpressionContext)_localctx, predIndex);
		case 44:
			return additiveExpression_sempred((AdditiveExpressionContext)_localctx, predIndex);
		case 45:
			return shiftExpression_sempred((ShiftExpressionContext)_localctx, predIndex);
		case 46:
			return relationalExpression_sempred((RelationalExpressionContext)_localctx, predIndex);
		case 47:
			return equalityExpression_sempred((EqualityExpressionContext)_localctx, predIndex);
		case 48:
			return andExpression_sempred((AndExpressionContext)_localctx, predIndex);
		case 49:
			return exclusiveOrExpression_sempred((ExclusiveOrExpressionContext)_localctx, predIndex);
		case 50:
			return inclusiveOrExpression_sempred((InclusiveOrExpressionContext)_localctx, predIndex);
		case 51:
			return logicalAndExpression_sempred((LogicalAndExpressionContext)_localctx, predIndex);
		case 52:
			return logicalOrExpression_sempred((LogicalOrExpressionContext)_localctx, predIndex);
		case 57:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		case 65:
			return statementSequence_sempred((StatementSequenceContext)_localctx, predIndex);
		case 73:
			return declarationSequence_sempred((DeclarationSequenceContext)_localctx, predIndex);
		case 100:
			return enumeratorList_sempred((EnumeratorListContext)_localctx, predIndex);
		case 112:
			return usingDeclaratorList_sempred((UsingDeclaratorListContext)_localctx, predIndex);
		case 117:
			return attributeSpecifierSequence_sempred((AttributeSpecifierSequenceContext)_localctx, predIndex);
		case 121:
			return attributeList_sempred((AttributeListContext)_localctx, predIndex);
		case 127:
			return balancedTokenSequence_sempred((BalancedTokenSequenceContext)_localctx, predIndex);
		case 129:
			return initializerDeclaratorList_sempred((InitializerDeclaratorListContext)_localctx, predIndex);
		case 133:
			return noPointerDeclarator_sempred((NoPointerDeclaratorContext)_localctx, predIndex);
		case 146:
			return noPointerAbstractDeclarator_sempred((NoPointerAbstractDeclaratorContext)_localctx, predIndex);
		case 148:
			return noPointerAbstractPackDeclarator_sempred((NoPointerAbstractPackDeclaratorContext)_localctx, predIndex);
		case 150:
			return parameterDeclarationList_sempred((ParameterDeclarationListContext)_localctx, predIndex);
		case 161:
			return initializerList_sempred((InitializerListContext)_localctx, predIndex);
		case 171:
			return memberDeclaratorList_sempred((MemberDeclaratorListContext)_localctx, predIndex);
		case 173:
			return virtualSpecifierSequence_sempred((VirtualSpecifierSequenceContext)_localctx, predIndex);
		case 177:
			return baseSpecifierList_sempred((BaseSpecifierListContext)_localctx, predIndex);
		case 185:
			return memberInitializerList_sempred((MemberInitializerListContext)_localctx, predIndex);
		case 192:
			return templateParameterList_sempred((TemplateParameterListContext)_localctx, predIndex);
		case 198:
			return templateArgumentList_sempred((TemplateArgumentListContext)_localctx, predIndex);
		case 210:
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
	private boolean pointerManipulationExpression_sempred(PointerManipulationExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 7:
			return precpred(_ctx, 2);
		case 8:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean multiplicativeExpression_sempred(MultiplicativeExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 9:
			return precpred(_ctx, 3);
		case 10:
			return precpred(_ctx, 2);
		case 11:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean additiveExpression_sempred(AdditiveExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 12:
			return precpred(_ctx, 2);
		case 13:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean shiftExpression_sempred(ShiftExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 14:
			return precpred(_ctx, 2);
		case 15:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean relationalExpression_sempred(RelationalExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 16:
			return precpred(_ctx, 4);
		case 17:
			return precpred(_ctx, 3);
		case 18:
			return precpred(_ctx, 2);
		case 19:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean equalityExpression_sempred(EqualityExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 20:
			return precpred(_ctx, 2);
		case 21:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean andExpression_sempred(AndExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 22:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean exclusiveOrExpression_sempred(ExclusiveOrExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 23:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean inclusiveOrExpression_sempred(InclusiveOrExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 24:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean logicalAndExpression_sempred(LogicalAndExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 25:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean logicalOrExpression_sempred(LogicalOrExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 26:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 27:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean statementSequence_sempred(StatementSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 28:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean declarationSequence_sempred(DeclarationSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 29:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean enumeratorList_sempred(EnumeratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 30:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean usingDeclaratorList_sempred(UsingDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 31:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean attributeSpecifierSequence_sempred(AttributeSpecifierSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 32:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean attributeList_sempred(AttributeListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 33:
			return precpred(_ctx, 3);
		case 34:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean balancedTokenSequence_sempred(BalancedTokenSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 35:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initializerDeclaratorList_sempred(InitializerDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 36:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean noPointerDeclarator_sempred(NoPointerDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 37:
			return precpred(_ctx, 3);
		case 38:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean noPointerAbstractDeclarator_sempred(NoPointerAbstractDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 39:
			return precpred(_ctx, 4);
		case 40:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean noPointerAbstractPackDeclarator_sempred(NoPointerAbstractPackDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 41:
			return precpred(_ctx, 3);
		case 42:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean parameterDeclarationList_sempred(ParameterDeclarationListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 43:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initializerList_sempred(InitializerListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 44:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean memberDeclaratorList_sempred(MemberDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 45:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean virtualSpecifierSequence_sempred(VirtualSpecifierSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 46:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean baseSpecifierList_sempred(BaseSpecifierListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 47:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean memberInitializerList_sempred(MemberInitializerListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 48:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean templateParameterList_sempred(TemplateParameterListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 49:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean templateArgumentList_sempred(TemplateArgumentListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 50:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean identifierList_sempred(IdentifierListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 51:
			return precpred(_ctx, 1);
		}
		return true;
	}

	private static final int _serializedATNSegments = 2;
	private static final String _serializedATNSegment0 =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u008c\u09dc\4\2\t"+
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
		"\4\u00d2\t\u00d2\4\u00d3\t\u00d3\4\u00d4\t\u00d4\4\u00d5\t\u00d5\4\u00d6"+
		"\t\u00d6\4\u00d7\t\u00d7\4\u00d8\t\u00d8\4\u00d9\t\u00d9\3\2\3\2\5\2\u01b5"+
		"\n\2\3\3\3\3\3\4\3\4\5\4\u01bb\n\4\3\5\3\5\3\6\5\6\u01c0\n\6\3\6\3\6\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u01cd\n\7\3\b\3\b\5\b\u01d1\n\b"+
		"\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u01da\n\t\3\n\3\n\5\n\u01de\n\n\3\n\3"+
		"\n\3\13\3\13\5\13\u01e4\n\13\3\13\3\13\3\13\5\13\u01e9\n\13\3\13\3\13"+
		"\3\13\5\13\u01ee\n\13\5\13\u01f0\n\13\3\f\3\f\3\f\5\f\u01f5\n\f\3\f\5"+
		"\f\u01f8\n\f\3\f\3\f\3\f\5\f\u01fd\n\f\5\f\u01ff\n\f\3\r\3\r\5\r\u0203"+
		"\n\r\3\r\3\r\3\16\3\16\5\16\u0209\n\16\3\16\3\16\3\17\3\17\3\17\3\17\5"+
		"\17\u0211\n\17\3\17\5\17\u0214\n\17\3\17\5\17\u0217\n\17\3\17\5\17\u021a"+
		"\n\17\3\20\3\20\3\20\3\20\3\20\3\20\5\20\u0222\n\20\3\21\3\21\3\22\3\22"+
		"\3\22\5\22\u0229\n\22\3\22\3\22\3\22\3\22\5\22\u022f\n\22\7\22\u0231\n"+
		"\22\f\22\16\22\u0234\13\22\3\23\3\23\3\23\3\24\5\24\u023a\n\24\3\24\3"+
		"\24\3\24\3\24\5\24\u0240\n\24\3\25\5\25\u0243\n\25\3\25\3\25\3\25\3\26"+
		"\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\3\26\3\26\5\26\u025c\n\26\3\27\3\27\3\30\3\30\3\30\5\30"+
		"\u0263\n\30\3\30\3\30\3\30\3\30\3\30\5\30\u026a\n\30\3\30\3\30\5\30\u026e"+
		"\n\30\3\31\3\31\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3\34"+
		"\3\34\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\5\35\u0288\n\35"+
		"\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u0295\n\36"+
		"\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u029f\n\36\3\36\3\36\3\36"+
		"\3\36\5\36\u02a5\n\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\7\36\u02af"+
		"\n\36\f\36\16\36\u02b2\13\36\3\37\3\37\3 \5 \u02b7\n \3 \3 \3 \3 \3 \3"+
		" \3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \5 \u02c9\n \3!\3!\3!\3!\3!\3!\3!\3!\3"+
		"!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\5!\u02e7\n"+
		"!\3\"\3\"\3#\5#\u02ec\n#\3#\3#\5#\u02f0\n#\3#\3#\5#\u02f4\n#\3#\5#\u02f7"+
		"\n#\3#\3#\5#\u02fb\n#\3#\3#\3#\3#\5#\u0301\n#\5#\u0303\n#\3$\3$\3$\3$"+
		"\3%\3%\5%\u030b\n%\3&\3&\5&\u030f\n&\3&\3&\3\'\3\'\3\'\3\'\3\'\5\'\u0318"+
		"\n\'\3\'\3\'\3\'\3\'\3\'\5\'\u031f\n\'\7\'\u0321\n\'\f\'\16\'\u0324\13"+
		"\'\3(\3(\5(\u0328\n(\3(\3(\5(\u032c\n(\3)\5)\u032f\n)\3)\3)\3)\5)\u0334"+
		"\n)\3)\3)\3)\3)\5)\u033a\n)\3*\3*\3*\3*\3*\3+\3+\3+\3+\3+\3+\5+\u0347"+
		"\n+\3,\3,\3,\3,\3,\3,\3,\3,\3,\7,\u0352\n,\f,\16,\u0355\13,\3-\3-\3-\3"+
		"-\3-\3-\3-\3-\3-\3-\3-\3-\7-\u0363\n-\f-\16-\u0366\13-\3.\3.\3.\3.\3."+
		"\3.\3.\3.\3.\7.\u0371\n.\f.\16.\u0374\13.\3/\3/\3/\3/\3/\3/\3/\3/\3/\7"+
		"/\u037f\n/\f/\16/\u0382\13/\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3"+
		"\60\3\60\3\60\3\60\3\60\3\60\3\60\7\60\u0393\n\60\f\60\16\60\u0396\13"+
		"\60\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\7\61\u03a1\n\61\f\61"+
		"\16\61\u03a4\13\61\3\62\3\62\3\62\3\62\3\62\3\62\7\62\u03ac\n\62\f\62"+
		"\16\62\u03af\13\62\3\63\3\63\3\63\3\63\3\63\3\63\7\63\u03b7\n\63\f\63"+
		"\16\63\u03ba\13\63\3\64\3\64\3\64\3\64\3\64\3\64\7\64\u03c2\n\64\f\64"+
		"\16\64\u03c5\13\64\3\65\3\65\3\65\3\65\3\65\3\65\7\65\u03cd\n\65\f\65"+
		"\16\65\u03d0\13\65\3\66\3\66\3\66\3\66\3\66\3\66\7\66\u03d8\n\66\f\66"+
		"\16\66\u03db\13\66\3\67\3\67\3\67\3\67\3\67\3\67\3\67\5\67\u03e4\n\67"+
		"\38\38\58\u03e8\n8\39\39\39\39\39\39\59\u03f0\n9\3:\3:\3;\3;\3;\3;\3;"+
		"\3;\7;\u03fa\n;\f;\16;\u03fd\13;\3<\3<\3=\3=\5=\u0403\n=\3=\3=\5=\u0407"+
		"\n=\3=\3=\5=\u040b\n=\3=\3=\5=\u040f\n=\3=\3=\5=\u0413\n=\3=\3=\3=\5="+
		"\u0418\n=\3=\5=\u041b\n=\3>\3>\5>\u041f\n>\3?\3?\5?\u0423\n?\3?\3?\3?"+
		"\3?\5?\u0429\n?\3@\5@\u042c\n@\3@\3@\3@\3@\5@\u0432\n@\3@\3@\3@\3@\3@"+
		"\3@\5@\u043a\n@\3@\3@\3@\5@\u043f\n@\3A\5A\u0442\nA\3A\3A\3B\3B\5B\u0448"+
		"\nB\3B\3B\3C\3C\3C\3C\3C\7C\u0451\nC\fC\16C\u0454\13C\3D\3D\5D\u0458\n"+
		"D\3D\3D\5D\u045c\nD\3D\3D\3D\3D\3D\3D\5D\u0464\nD\3D\3D\5D\u0468\nD\3"+
		"D\3D\3D\3D\3D\3D\3D\3D\3D\5D\u0473\nD\3D\3D\3D\3D\5D\u0479\nD\3E\3E\3"+
		"E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\5E\u048d\nE\3E\3E\5E\u0491"+
		"\nE\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\5E\u049e\nE\3F\5F\u04a1\nF\3F\3F"+
		"\3F\3F\5F\u04a7\nF\3F\3F\5F\u04ab\nF\3F\3F\3F\3F\5F\u04b1\nF\3G\5G\u04b4"+
		"\nG\3G\3G\3G\3H\3H\3I\3I\3I\3I\3I\3I\5I\u04c1\nI\3I\3I\3I\3I\5I\u04c7"+
		"\nI\3J\3J\3K\3K\3K\3K\3K\7K\u04d0\nK\fK\16K\u04d3\13K\3L\3L\3L\3L\3L\3"+
		"L\3L\3L\3L\3L\3L\5L\u04e0\nL\3M\3M\3M\3M\3M\3M\3M\3M\5M\u04ea\nM\3N\5"+
		"N\u04ed\nN\3N\3N\3N\3O\3O\3O\5O\u04f5\nO\3O\3O\3O\3O\3P\3P\5P\u04fd\n"+
		"P\3P\3P\3P\3P\3P\3P\3P\3P\5P\u0507\nP\3P\3P\5P\u050b\nP\3P\3P\3P\3P\3"+
		"P\3P\5P\u0513\nP\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\5Q\u0523\n"+
		"Q\3R\3R\3S\3S\3S\3T\3T\3T\3T\3T\3T\3T\5T\u0531\nT\3U\3U\5U\u0535\nU\3"+
		"U\3U\3U\5U\u053a\nU\3V\3V\3W\3W\3X\3X\3Y\3Y\5Y\u0544\nY\3Y\3Y\3Y\5Y\u0549"+
		"\nY\3Z\3Z\3[\3[\5[\u054f\n[\3[\3[\3[\5[\u0554\n[\3\\\3\\\3\\\3\\\3\\\3"+
		"\\\3\\\3\\\3\\\3\\\3\\\3\\\3\\\3\\\3\\\5\\\u0565\n\\\3]\3]\5]\u0569\n"+
		"]\3^\3^\3^\3^\3^\3^\3^\3^\3^\5^\u0574\n^\3_\3_\5_\u0578\n_\3_\5_\u057b"+
		"\n_\3_\3_\3_\3_\3_\3_\3_\3_\5_\u0585\n_\3_\3_\3_\3_\5_\u058b\n_\3_\5_"+
		"\u058e\n_\3`\3`\3`\5`\u0593\n`\3`\3`\3`\3`\3`\3`\3`\3`\5`\u059d\n`\3a"+
		"\3a\5a\u05a1\na\3a\5a\u05a4\na\3a\5a\u05a7\na\3b\5b\u05aa\nb\3b\3b\3c"+
		"\3c\5c\u05b0\nc\3c\5c\u05b3\nc\3c\3c\5c\u05b7\nc\3c\3c\3d\3d\3d\3d\3d"+
		"\5d\u05c0\nd\3e\3e\3e\3f\3f\3f\3f\3f\3f\7f\u05cb\nf\ff\16f\u05ce\13f\3"+
		"g\3g\3g\3g\3g\5g\u05d5\ng\3h\3h\5h\u05d9\nh\3i\3i\3i\5i\u05de\ni\3j\5"+
		"j\u05e1\nj\3j\3j\5j\u05e5\nj\3j\3j\3j\3j\3j\3k\5k\u05ed\nk\3k\3k\5k\u05f1"+
		"\nk\3k\3k\3k\3k\3l\3l\3l\3l\3l\3l\3l\3l\3m\3m\3m\3m\3m\3n\5n\u0605\nn"+
		"\3o\3o\3o\3o\3o\3o\3p\5p\u060e\np\3p\3p\3q\3q\3q\3q\3r\3r\3r\5r\u0619"+
		"\nr\3r\3r\3r\3r\5r\u061f\nr\7r\u0621\nr\fr\16r\u0624\13r\3s\5s\u0627\n"+
		"s\3s\3s\3s\3t\5t\u062d\nt\3t\3t\3t\5t\u0632\nt\3t\3t\3t\3u\5u\u0638\n"+
		"u\3u\3u\3u\3u\3u\3u\3v\3v\3v\3v\5v\u0644\nv\3v\3v\3v\3v\5v\u064a\nv\3"+
		"w\3w\3w\3w\3w\7w\u0651\nw\fw\16w\u0654\13w\3x\3x\3x\5x\u0659\nx\3x\3x"+
		"\3x\3x\3x\5x\u0660\nx\3y\3y\3y\3y\5y\u0666\ny\3y\3y\3y\3y\3y\3y\5y\u066e"+
		"\ny\3y\3y\5y\u0672\ny\3z\3z\3z\3z\3{\3{\5{\u067a\n{\3{\3{\3{\5{\u067f"+
		"\n{\3{\3{\3{\5{\u0684\n{\3{\3{\3{\3{\3{\7{\u068b\n{\f{\16{\u068e\13{\3"+
		"|\3|\5|\u0692\n|\3}\3}\5}\u0696\n}\3~\3~\3~\3~\3\177\3\177\3\u0080\3\u0080"+
		"\5\u0080\u06a0\n\u0080\3\u0080\3\u0080\3\u0081\3\u0081\3\u0081\3\u0081"+
		"\3\u0081\7\u0081\u06a9\n\u0081\f\u0081\16\u0081\u06ac\13\u0081\3\u0082"+
		"\3\u0082\5\u0082\u06b0\n\u0082\3\u0082\3\u0082\3\u0082\5\u0082\u06b5\n"+
		"\u0082\3\u0082\3\u0082\3\u0082\5\u0082\u06ba\n\u0082\3\u0082\3\u0082\5"+
		"\u0082\u06be\n\u0082\3\u0083\3\u0083\3\u0083\3\u0083\3\u0083\3\u0083\7"+
		"\u0083\u06c6\n\u0083\f\u0083\16\u0083\u06c9\13\u0083\3\u0084\3\u0084\5"+
		"\u0084\u06cd\n\u0084\3\u0085\3\u0085\5\u0085\u06d1\n\u0085\3\u0086\3\u0086"+
		"\3\u0086\3\u0087\3\u0087\5\u0087\u06d8\n\u0087\3\u0087\3\u0087\5\u0087"+
		"\u06dc\n\u0087\3\u0087\3\u0087\3\u0087\3\u0087\5\u0087\u06e2\n\u0087\3"+
		"\u0087\3\u0087\3\u0087\5\u0087\u06e7\n\u0087\3\u0087\3\u0087\5\u0087\u06eb"+
		"\n\u0087\3\u0087\3\u0087\7\u0087\u06ef\n\u0087\f\u0087\16\u0087\u06f2"+
		"\13\u0087\3\u0088\3\u0088\3\u0088\3\u0089\3\u0089\3\u0089\3\u0089\3\u008a"+
		"\5\u008a\u06fc\n\u008a\3\u008a\5\u008a\u06ff\n\u008a\3\u008a\5\u008a\u0702"+
		"\n\u008a\3\u008a\5\u008a\u0705\n\u008a\3\u008b\3\u008b\3\u008b\3\u008c"+
		"\3\u008c\5\u008c\u070c\n\u008c\3\u008c\5\u008c\u070f\n\u008c\3\u008c\3"+
		"\u008c\5\u008c\u0713\n\u008c\3\u008c\3\u008c\5\u008c\u0717\n\u008c\3\u008c"+
		"\3\u008c\3\u008c\5\u008c\u071c\n\u008c\3\u008c\5\u008c\u071f\n\u008c\5"+
		"\u008c\u0721\n\u008c\3\u008d\3\u008d\5\u008d\u0725\n\u008d\3\u008e\3\u008e"+
		"\3\u008f\3\u008f\3\u008f\3\u0090\3\u0090\5\u0090\u072e\n\u0090\3\u0091"+
		"\3\u0091\5\u0091\u0732\n\u0091\3\u0092\3\u0092\5\u0092\u0736\n\u0092\3"+
		"\u0092\3\u0092\3\u0092\3\u0092\5\u0092\u073c\n\u0092\3\u0093\3\u0093\3"+
		"\u0093\5\u0093\u0741\n\u0093\5\u0093\u0743\n\u0093\3\u0094\3\u0094\3\u0094"+
		"\3\u0094\5\u0094\u0749\n\u0094\3\u0094\3\u0094\5\u0094\u074d\n\u0094\3"+
		"\u0094\3\u0094\3\u0094\3\u0094\5\u0094\u0753\n\u0094\3\u0094\3\u0094\3"+
		"\u0094\3\u0094\3\u0094\5\u0094\u075a\n\u0094\3\u0094\3\u0094\5\u0094\u075e"+
		"\n\u0094\7\u0094\u0760\n\u0094\f\u0094\16\u0094\u0763\13\u0094\3\u0095"+
		"\3\u0095\3\u0095\3\u0095\5\u0095\u0769\n\u0095\3\u0096\3\u0096\3\u0096"+
		"\3\u0096\3\u0096\3\u0096\3\u0096\3\u0096\5\u0096\u0773\n\u0096\3\u0096"+
		"\3\u0096\5\u0096\u0777\n\u0096\7\u0096\u0779\n\u0096\f\u0096\16\u0096"+
		"\u077c\13\u0096\3\u0097\5\u0097\u077f\n\u0097\3\u0097\5\u0097\u0782\n"+
		"\u0097\3\u0097\3\u0097\3\u0097\3\u0097\5\u0097\u0788\n\u0097\3\u0098\3"+
		"\u0098\3\u0098\3\u0098\3\u0098\3\u0098\7\u0098\u0790\n\u0098\f\u0098\16"+
		"\u0098\u0793\13\u0098\3\u0099\5\u0099\u0796\n\u0099\3\u0099\3\u0099\3"+
		"\u0099\3\u0099\5\u0099\u079c\n\u0099\3\u0099\3\u0099\3\u0099\3\u0099\3"+
		"\u0099\5\u0099\u07a3\n\u0099\3\u009a\5\u009a\u07a6\n\u009a\3\u009a\5\u009a"+
		"\u07a9\n\u009a\3\u009a\3\u009a\5\u009a\u07ad\n\u009a\3\u009a\3\u009a\3"+
		"\u009b\3\u009b\3\u009b\3\u009b\5\u009b\u07b5\n\u009b\3\u009c\3\u009c\3"+
		"\u009c\3\u009c\5\u009c\u07bb\n\u009c\3\u009d\5\u009d\u07be\n\u009d\3\u009d"+
		"\3\u009d\3\u009e\3\u009e\3\u009e\3\u009e\3\u009f\3\u009f\3\u009f\3\u009f"+
		"\3\u00a0\3\u00a0\3\u00a1\3\u00a1\3\u00a1\5\u00a1\u07cf\n\u00a1\3\u00a2"+
		"\3\u00a2\5\u00a2\u07d3\n\u00a2\3\u00a3\3\u00a3\3\u00a3\5\u00a3\u07d8\n"+
		"\u00a3\3\u00a3\3\u00a3\3\u00a3\3\u00a3\5\u00a3\u07de\n\u00a3\7\u00a3\u07e0"+
		"\n\u00a3\f\u00a3\16\u00a3\u07e3\13\u00a3\3\u00a4\3\u00a4\3\u00a4\5\u00a4"+
		"\u07e8\n\u00a4\3\u00a4\3\u00a4\3\u00a4\3\u00a4\5\u00a4\u07ee\n\u00a4\3"+
		"\u00a5\3\u00a5\5\u00a5\u07f2\n\u00a5\3\u00a6\3\u00a6\3\u00a6\5\u00a6\u07f7"+
		"\n\u00a6\3\u00a6\3\u00a6\3\u00a7\3\u00a7\5\u00a7\u07fd\n\u00a7\3\u00a7"+
		"\3\u00a7\5\u00a7\u0801\n\u00a7\3\u00a7\5\u00a7\u0804\n\u00a7\3\u00a7\3"+
		"\u00a7\5\u00a7\u0808\n\u00a7\3\u00a7\5\u00a7\u080b\n\u00a7\5\u00a7\u080d"+
		"\n\u00a7\3\u00a8\5\u00a8\u0810\n\u00a8\3\u00a8\3\u00a8\3\u00a9\3\u00a9"+
		"\3\u00aa\3\u00aa\3\u00ab\3\u00ab\5\u00ab\u081a\n\u00ab\3\u00ab\3\u00ab"+
		"\3\u00ab\5\u00ab\u081f\n\u00ab\5\u00ab\u0821\n\u00ab\3\u00ac\5\u00ac\u0824"+
		"\n\u00ac\3\u00ac\5\u00ac\u0827\n\u00ac\3\u00ac\5\u00ac\u082a\n\u00ac\3"+
		"\u00ac\3\u00ac\3\u00ac\3\u00ac\3\u00ac\3\u00ac\3\u00ac\3\u00ac\5\u00ac"+
		"\u0834\n\u00ac\3\u00ad\3\u00ad\3\u00ad\3\u00ad\3\u00ad\3\u00ad\7\u00ad"+
		"\u083c\n\u00ad\f\u00ad\16\u00ad\u083f\13\u00ad\3\u00ae\3\u00ae\5\u00ae"+
		"\u0843\n\u00ae\3\u00ae\5\u00ae\u0846\n\u00ae\3\u00ae\3\u00ae\5\u00ae\u084a"+
		"\n\u00ae\3\u00ae\5\u00ae\u084d\n\u00ae\3\u00ae\5\u00ae\u0850\n\u00ae\3"+
		"\u00ae\3\u00ae\5\u00ae\u0854\n\u00ae\3\u00af\3\u00af\3\u00af\3\u00af\3"+
		"\u00af\7\u00af\u085b\n\u00af\f\u00af\16\u00af\u085e\13\u00af\3\u00b0\3"+
		"\u00b0\3\u00b1\3\u00b1\3\u00b1\3\u00b2\3\u00b2\3\u00b2\3\u00b3\3\u00b3"+
		"\3\u00b3\5\u00b3\u086b\n\u00b3\3\u00b3\3\u00b3\3\u00b3\3\u00b3\5\u00b3"+
		"\u0871\n\u00b3\7\u00b3\u0873\n\u00b3\f\u00b3\16\u00b3\u0876\13\u00b3\3"+
		"\u00b4\5\u00b4\u0879\n\u00b4\3\u00b4\3\u00b4\5\u00b4\u087d\n\u00b4\3\u00b4"+
		"\3\u00b4\5\u00b4\u0881\n\u00b4\3\u00b4\3\u00b4\5\u00b4\u0885\n\u00b4\3"+
		"\u00b4\3\u00b4\5\u00b4\u0889\n\u00b4\3\u00b4\3\u00b4\5\u00b4\u088d\n\u00b4"+
		"\3\u00b5\5\u00b5\u0890\n\u00b5\3\u00b5\3\u00b5\3\u00b5\3\u00b5\3\u00b5"+
		"\3\u00b5\5\u00b5\u0898\n\u00b5\3\u00b6\3\u00b6\3\u00b7\3\u00b7\3\u00b7"+
		"\3\u00b8\3\u00b8\5\u00b8\u08a1\n\u00b8\3\u00b9\3\u00b9\5\u00b9\u08a5\n"+
		"\u00b9\3\u00ba\3\u00ba\3\u00ba\3\u00bb\3\u00bb\3\u00bb\5\u00bb\u08ad\n"+
		"\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\5\u00bb\u08b3\n\u00bb\7\u00bb\u08b5"+
		"\n\u00bb\f\u00bb\16\u00bb\u08b8\13\u00bb\3\u00bc\3\u00bc\3\u00bc\5\u00bc"+
		"\u08bd\n\u00bc\3\u00bc\3\u00bc\3\u00bc\3\u00bc\3\u00bd\3\u00bd\5\u00bd"+
		"\u08c5\n\u00bd\3\u00be\3\u00be\3\u00be\3\u00bf\3\u00bf\3\u00bf\3\u00bf"+
		"\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf"+
		"\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf"+
		"\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf"+
		"\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf"+
		"\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\3\u00bf\5\u00bf"+
		"\u08fa\n\u00bf\3\u00c0\3\u00c0\3\u00c0\3\u00c0\3\u00c0\5\u00c0\u0901\n"+
		"\u00c0\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c2\3\u00c2"+
		"\3\u00c2\3\u00c2\3\u00c2\3\u00c2\7\u00c2\u090f\n\u00c2\f\u00c2\16\u00c2"+
		"\u0912\13\u00c2\3\u00c3\3\u00c3\5\u00c3\u0916\n\u00c3\3\u00c4\3\u00c4"+
		"\5\u00c4\u091a\n\u00c4\3\u00c4\5\u00c4\u091d\n\u00c4\3\u00c4\3\u00c4\5"+
		"\u00c4\u0921\n\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3"+
		"\u00c4\3\u00c4\3\u00c4\5\u00c4\u092c\n\u00c4\3\u00c4\5\u00c4\u092f\n\u00c4"+
		"\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\5\u00c4\u0937\n\u00c4"+
		"\3\u00c4\3\u00c4\3\u00c4\5\u00c4\u093c\n\u00c4\3\u00c5\3\u00c5\3\u00c6"+
		"\3\u00c6\3\u00c6\5\u00c6\u0943\n\u00c6\3\u00c6\3\u00c6\3\u00c7\3\u00c7"+
		"\3\u00c7\3\u00c7\5\u00c7\u094b\n\u00c7\3\u00c7\3\u00c7\3\u00c7\3\u00c7"+
		"\3\u00c7\5\u00c7\u0952\n\u00c7\3\u00c7\3\u00c7\5\u00c7\u0956\n\u00c7\3"+
		"\u00c8\3\u00c8\3\u00c8\5\u00c8\u095b\n\u00c8\3\u00c8\3\u00c8\3\u00c8\3"+
		"\u00c8\5\u00c8\u0961\n\u00c8\7\u00c8\u0963\n\u00c8\f\u00c8\16\u00c8\u0966"+
		"\13\u00c8\3\u00c9\3\u00c9\3\u00c9\5\u00c9\u096b\n\u00c9\3\u00ca\3\u00ca"+
		"\3\u00ca\3\u00ca\3\u00ca\3\u00ca\3\u00ca\5\u00ca\u0974\n\u00ca\3\u00ca"+
		"\3\u00ca\5\u00ca\u0978\n\u00ca\3\u00cb\5\u00cb\u097b\n\u00cb\3\u00cb\3"+
		"\u00cb\3\u00cb\3\u00cc\3\u00cc\3\u00cc\3\u00cc\3\u00cc\3\u00cd\5\u00cd"+
		"\u0986\n\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00cd"+
		"\3\u00cd\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00cf\3\u00cf\5\u00cf\u0996"+
		"\n\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00d0\3\u00d0\5\u00d0\u099d\n\u00d0"+
		"\3\u00d1\3\u00d1\3\u00d1\3\u00d1\3\u00d1\3\u00d1\3\u00d2\5\u00d2\u09a6"+
		"\n\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d2\5\u00d2\u09ac\n\u00d2\3\u00d2"+
		"\3\u00d2\5\u00d2\u09b0\n\u00d2\3\u00d2\5\u00d2\u09b3\n\u00d2\3\u00d3\3"+
		"\u00d3\3\u00d3\3\u00d3\3\u00d3\3\u00d3\3\u00d3\3\u00d3\3\u00d3\5\u00d3"+
		"\u09be\n\u00d3\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4\7\u00d4"+
		"\u09c6\n\u00d4\f\u00d4\16\u00d4\u09c9\13\u00d4\3\u00d5\3\u00d5\3\u00d5"+
		"\3\u00d5\3\u00d5\3\u00d5\3\u00d5\5\u00d5\u09d2\n\u00d5\3\u00d6\3\u00d6"+
		"\3\u00d7\3\u00d7\3\u00d8\3\u00d8\3\u00d9\3\u00d9\3\u00d9\2%\":LVXZ\\^"+
		"`bdfhjt\u0084\u0094\u00ca\u00e2\u00ec\u00f4\u0100\u0104\u010c\u0126\u012a"+
		"\u012e\u0144\u0158\u015c\u0164\u0174\u0182\u018e\u01a6\u00da\2\4\6\b\n"+
		"\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\"+
		"^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e\u0090"+
		"\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6\u00a8"+
		"\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be\u00c0"+
		"\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4\u00d6\u00d8"+
		"\u00da\u00dc\u00de\u00e0\u00e2\u00e4\u00e6\u00e8\u00ea\u00ec\u00ee\u00f0"+
		"\u00f2\u00f4\u00f6\u00f8\u00fa\u00fc\u00fe\u0100\u0102\u0104\u0106\u0108"+
		"\u010a\u010c\u010e\u0110\u0112\u0114\u0116\u0118\u011a\u011c\u011e\u0120"+
		"\u0122\u0124\u0126\u0128\u012a\u012c\u012e\u0130\u0132\u0134\u0136\u0138"+
		"\u013a\u013c\u013e\u0140\u0142\u0144\u0146\u0148\u014a\u014c\u014e\u0150"+
		"\u0152\u0154\u0156\u0158\u015a\u015c\u015e\u0160\u0162\u0164\u0166\u0168"+
		"\u016a\u016c\u016e\u0170\u0172\u0174\u0176\u0178\u017a\u017c\u017e\u0180"+
		"\u0182\u0184\u0186\u0188\u018a\u018c\u018e\u0190\u0192\u0194\u0196\u0198"+
		"\u019a\u019c\u019e\u01a0\u01a2\u01a4\u01a6\u01a8\u01aa\u01ac\u01ae\u01b0"+
		"\2\24\4\2eeii\5\2^fi}\u0080\u0081\3\2~\177\4\2]]\u0082\u0082\6\2\25\25"+
		"\34\34\65\65<<\4\2_aeh\5\2iilsvw\6\2!!++::AA\4\2\37\37KK\3\2RW\4\2\23"+
		"\23MM\5\2\22\22==HH\3\2PQ\3\2\61\63\4\2\22\22GG\3\2\u0083\u0084\4\2\""+
		"\"CC\3\2\u0088\u008b\2\u0adb\2\u01b4\3\2\2\2\4\u01b6\3\2\2\2\6\u01ba\3"+
		"\2\2\2\b\u01bc\3\2\2\2\n\u01bf\3\2\2\2\f\u01cc\3\2\2\2\16\u01d0\3\2\2"+
		"\2\20\u01d9\3\2\2\2\22\u01db\3\2\2\2\24\u01ef\3\2\2\2\26\u01fe\3\2\2\2"+
		"\30\u0200\3\2\2\2\32\u0206\3\2\2\2\34\u020c\3\2\2\2\36\u0221\3\2\2\2 "+
		"\u0223\3\2\2\2\"\u0225\3\2\2\2$\u0235\3\2\2\2&\u023f\3\2\2\2(\u0242\3"+
		"\2\2\2*\u025b\3\2\2\2,\u025d\3\2\2\2.\u026d\3\2\2\2\60\u026f\3\2\2\2\62"+
		"\u0271\3\2\2\2\64\u0279\3\2\2\2\66\u027b\3\2\2\28\u0287\3\2\2\2:\u0294"+
		"\3\2\2\2<\u02b3\3\2\2\2>\u02c8\3\2\2\2@\u02e6\3\2\2\2B\u02e8\3\2\2\2D"+
		"\u0302\3\2\2\2F\u0304\3\2\2\2H\u0308\3\2\2\2J\u030c\3\2\2\2L\u0312\3\2"+
		"\2\2N\u032b\3\2\2\2P\u0339\3\2\2\2R\u033b\3\2\2\2T\u0346\3\2\2\2V\u0348"+
		"\3\2\2\2X\u0356\3\2\2\2Z\u0367\3\2\2\2\\\u0375\3\2\2\2^\u0383\3\2\2\2"+
		"`\u0397\3\2\2\2b\u03a5\3\2\2\2d\u03b0\3\2\2\2f\u03bb\3\2\2\2h\u03c6\3"+
		"\2\2\2j\u03d1\3\2\2\2l\u03e3\3\2\2\2n\u03e5\3\2\2\2p\u03ef\3\2\2\2r\u03f1"+
		"\3\2\2\2t\u03f3\3\2\2\2v\u03fe\3\2\2\2x\u041a\3\2\2\2z\u041e\3\2\2\2|"+
		"\u0428\3\2\2\2~\u043e\3\2\2\2\u0080\u0441\3\2\2\2\u0082\u0445\3\2\2\2"+
		"\u0084\u044b\3\2\2\2\u0086\u0478\3\2\2\2\u0088\u049d\3\2\2\2\u008a\u04b0"+
		"\3\2\2\2\u008c\u04b3\3\2\2\2\u008e\u04b8\3\2\2\2\u0090\u04c6\3\2\2\2\u0092"+
		"\u04c8\3\2\2\2\u0094\u04ca\3\2\2\2\u0096\u04df\3\2\2\2\u0098\u04e9\3\2"+
		"\2\2\u009a\u04ec\3\2\2\2\u009c\u04f1\3\2\2\2\u009e\u0512\3\2\2\2\u00a0"+
		"\u0522\3\2\2\2\u00a2\u0524\3\2\2\2\u00a4\u0526\3\2\2\2\u00a6\u0530\3\2"+
		"\2\2\u00a8\u0539\3\2\2\2\u00aa\u053b\3\2\2\2\u00ac\u053d\3\2\2\2\u00ae"+
		"\u053f\3\2\2\2\u00b0\u0548\3\2\2\2\u00b2\u054a\3\2\2\2\u00b4\u0553\3\2"+
		"\2\2\u00b6\u0564\3\2\2\2\u00b8\u0568\3\2\2\2\u00ba\u0573\3\2\2\2\u00bc"+
		"\u058d\3\2\2\2\u00be\u059c\3\2\2\2\u00c0\u059e\3\2\2\2\u00c2\u05a9\3\2"+
		"\2\2\u00c4\u05ad\3\2\2\2\u00c6\u05bf\3\2\2\2\u00c8\u05c1\3\2\2\2\u00ca"+
		"\u05c4\3\2\2\2\u00cc\u05d4\3\2\2\2\u00ce\u05d6\3\2\2\2\u00d0\u05dd\3\2"+
		"\2\2\u00d2\u05e0\3\2\2\2\u00d4\u05ec\3\2\2\2\u00d6\u05f6\3\2\2\2\u00d8"+
		"\u05fe\3\2\2\2\u00da\u0604\3\2\2\2\u00dc\u0606\3\2\2\2\u00de\u060d\3\2"+
		"\2\2\u00e0\u0611\3\2\2\2\u00e2\u0615\3\2\2\2\u00e4\u0626\3\2\2\2\u00e6"+
		"\u062c\3\2\2\2\u00e8\u0637\3\2\2\2\u00ea\u0649\3\2\2\2\u00ec\u064b\3\2"+
		"\2\2\u00ee\u065f\3\2\2\2\u00f0\u0671\3\2\2\2\u00f2\u0673\3\2\2\2\u00f4"+
		"\u067e\3\2\2\2\u00f6\u068f\3\2\2\2\u00f8\u0695\3\2\2\2\u00fa\u0697\3\2"+
		"\2\2\u00fc\u069b\3\2\2\2\u00fe\u069d\3\2\2\2\u0100\u06a3\3\2\2\2\u0102"+
		"\u06bd\3\2\2\2\u0104\u06bf\3\2\2\2\u0106\u06ca\3\2\2\2\u0108\u06d0\3\2"+
		"\2\2\u010a\u06d2\3\2\2\2\u010c\u06e1\3\2\2\2\u010e\u06f3\3\2\2\2\u0110"+
		"\u06f6\3\2\2\2\u0112\u06fb\3\2\2\2\u0114\u0706\3\2\2\2\u0116\u0720\3\2"+
		"\2\2\u0118\u0722\3\2\2\2\u011a\u0726\3\2\2\2\u011c\u0728\3\2\2\2\u011e"+
		"\u072b\3\2\2\2\u0120\u072f\3\2\2\2\u0122\u073b\3\2\2\2\u0124\u0742\3\2"+
		"\2\2\u0126\u0752\3\2\2\2\u0128\u0768\3\2\2\2\u012a\u076a\3\2\2\2\u012c"+
		"\u0787\3\2\2\2\u012e\u0789\3\2\2\2\u0130\u07a2\3\2\2\2\u0132\u07a5\3\2"+
		"\2\2\u0134\u07b0\3\2\2\2\u0136\u07ba\3\2\2\2\u0138\u07bd\3\2\2\2\u013a"+
		"\u07c1\3\2\2\2\u013c\u07c5\3\2\2\2\u013e\u07c9\3\2\2\2\u0140\u07ce\3\2"+
		"\2\2\u0142\u07d2\3\2\2\2\u0144\u07d4\3\2\2\2\u0146\u07ed\3\2\2\2\u0148"+
		"\u07f1\3\2\2\2\u014a\u07f3\3\2\2\2\u014c\u080c\3\2\2\2\u014e\u080f\3\2"+
		"\2\2\u0150\u0813\3\2\2\2\u0152\u0815\3\2\2\2\u0154\u0820\3\2\2\2\u0156"+
		"\u0833\3\2\2\2\u0158\u0835\3\2\2\2\u015a\u0853\3\2\2\2\u015c\u0855\3\2"+
		"\2\2\u015e\u085f\3\2\2\2\u0160\u0861\3\2\2\2\u0162\u0864\3\2\2\2\u0164"+
		"\u0867\3\2\2\2\u0166\u088c\3\2\2\2\u0168\u0897\3\2\2\2\u016a\u0899\3\2"+
		"\2\2\u016c\u089b\3\2\2\2\u016e\u089e\3\2\2\2\u0170\u08a2\3\2\2\2\u0172"+
		"\u08a6\3\2\2\2\u0174\u08a9\3\2\2\2\u0176\u08b9\3\2\2\2\u0178\u08c4\3\2"+
		"\2\2\u017a\u08c6\3\2\2\2\u017c\u08f9\3\2\2\2\u017e\u0900\3\2\2\2\u0180"+
		"\u0902\3\2\2\2\u0182\u0908\3\2\2\2\u0184\u0915\3\2\2\2\u0186\u093b\3\2"+
		"\2\2\u0188\u093d\3\2\2\2\u018a\u093f\3\2\2\2\u018c\u0955\3\2\2\2\u018e"+
		"\u0957\3\2\2\2\u0190\u096a\3\2\2\2\u0192\u0977\3\2\2\2\u0194\u097a\3\2"+
		"\2\2\u0196\u097f\3\2\2\2\u0198\u0985\3\2\2\2\u019a\u098f\3\2\2\2\u019c"+
		"\u0993\3\2\2\2\u019e\u099a\3\2\2\2\u01a0\u099e\3\2\2\2\u01a2\u09b2\3\2"+
		"\2\2\u01a4\u09bd\3\2\2\2\u01a6\u09bf\3\2\2\2\u01a8\u09d1\3\2\2\2\u01aa"+
		"\u09d3\3\2\2\2\u01ac\u09d5\3\2\2\2\u01ae\u09d7\3\2\2\2\u01b0\u09d9\3\2"+
		"\2\2\u01b2\u01b5\7\u008c\2\2\u01b3\u01b5\5\4\3\2\u01b4\u01b2\3\2\2\2\u01b4"+
		"\u01b3\3\2\2\2\u01b5\3\3\2\2\2\u01b6\u01b7\7\u008c\2\2\u01b7\5\3\2\2\2"+
		"\u01b8\u01bb\7\u008c\2\2\u01b9\u01bb\5\u018a\u00c6\2\u01ba\u01b8\3\2\2"+
		"\2\u01ba\u01b9\3\2\2\2\u01bb\7\3\2\2\2\u01bc\u01bd\7\u008c\2\2\u01bd\t"+
		"\3\2\2\2\u01be\u01c0\5\u0094K\2\u01bf\u01be\3\2\2\2\u01bf\u01c0\3\2\2"+
		"\2\u01c0\u01c1\3\2\2\2\u01c1\u01c2\7\2\2\3\u01c2\13\3\2\2\2\u01c3\u01cd"+
		"\5\u01a8\u00d5\2\u01c4\u01cd\7@\2\2\u01c5\u01c6\7V\2\2\u01c6\u01c7\5t"+
		";\2\u01c7\u01c8\7W\2\2\u01c8\u01cd\3\2\2\2\u01c9\u01cd\5\16\b\2\u01ca"+
		"\u01cd\5\30\r\2\u01cb\u01cd\5*\26\2\u01cc\u01c3\3\2\2\2\u01cc\u01c4\3"+
		"\2\2\2\u01cc\u01c5\3\2\2\2\u01cc\u01c9\3\2\2\2\u01cc\u01ca\3\2\2\2\u01cc"+
		"\u01cb\3\2\2\2\u01cd\r\3\2\2\2\u01ce\u01d1\5\20\t\2\u01cf\u01d1\5\22\n"+
		"\2\u01d0\u01ce\3\2\2\2\u01d0\u01cf\3\2\2\2\u01d1\17\3\2\2\2\u01d2\u01da"+
		"\7\u008c\2\2\u01d3\u01da\5\u017a\u00be\2\u01d4\u01da\5\u016c\u00b7\2\u01d5"+
		"\u01da\5\u017e\u00c0\2\u01d6\u01d7\7g\2\2\u01d7\u01da\5\u00ba^\2\u01d8"+
		"\u01da\5\u018c\u00c7\2\u01d9\u01d2\3\2\2\2\u01d9\u01d3\3\2\2\2\u01d9\u01d4"+
		"\3\2\2\2\u01d9\u01d5\3\2\2\2\u01d9\u01d6\3\2\2\2\u01d9\u01d8\3\2\2\2\u01da"+
		"\21\3\2\2\2\u01db\u01dd\5\24\13\2\u01dc\u01de\7?\2\2\u01dd\u01dc\3\2\2"+
		"\2\u01dd\u01de\3\2\2\2\u01de\u01df\3\2\2\2\u01df\u01e0\5\20\t\2\u01e0"+
		"\23\3\2\2\2\u01e1\u01e3\7\\\2\2\u01e2\u01e4\5\26\f\2\u01e3\u01e2\3\2\2"+
		"\2\u01e3\u01e4\3\2\2\2\u01e4\u01f0\3\2\2\2\u01e5\u01e6\7\u008c\2\2\u01e6"+
		"\u01e8\7\\\2\2\u01e7\u01e9\5\26\f\2\u01e8\u01e7\3\2\2\2\u01e8\u01e9\3"+
		"\2\2\2\u01e9\u01f0\3\2\2\2\u01ea\u01eb\5\u00ba^\2\u01eb\u01ed\7\\\2\2"+
		"\u01ec\u01ee\5\26\f\2\u01ed\u01ec\3\2\2\2\u01ed\u01ee\3\2\2\2\u01ee\u01f0"+
		"\3\2\2\2\u01ef\u01e1\3\2\2\2\u01ef\u01e5\3\2\2\2\u01ef\u01ea\3\2\2\2\u01f0"+
		"\25\3\2\2\2\u01f1\u01f2\7\u008c\2\2\u01f2\u01f4\7\\\2\2\u01f3\u01f5\5"+
		"\26\f\2\u01f4\u01f3\3\2\2\2\u01f4\u01f5\3\2\2\2\u01f5\u01ff\3\2\2\2\u01f6"+
		"\u01f8\7?\2\2\u01f7\u01f6\3\2\2\2\u01f7\u01f8\3\2\2\2\u01f8\u01f9\3\2"+
		"\2\2\u01f9\u01fa\5\u018a\u00c6\2\u01fa\u01fc\7\\\2\2\u01fb\u01fd\5\26"+
		"\f\2\u01fc\u01fb\3\2\2\2\u01fc\u01fd\3\2\2\2\u01fd\u01ff\3\2\2\2\u01fe"+
		"\u01f1\3\2\2\2\u01fe\u01f7\3\2\2\2\u01ff\27\3\2\2\2\u0200\u0202\5\32\16"+
		"\2\u0201\u0203\5\34\17\2\u0202\u0201\3\2\2\2\u0202\u0203\3\2\2\2\u0203"+
		"\u0204\3\2\2\2\u0204\u0205\5\u0082B\2\u0205\31\3\2\2\2\u0206\u0208\7T"+
		"\2\2\u0207\u0209\5\36\20\2\u0208\u0207\3\2\2\2\u0208\u0209\3\2\2\2\u0209"+
		"\u020a\3\2\2\2\u020a\u020b\7U\2\2\u020b\33\3\2\2\2\u020c\u020d\7V\2\2"+
		"\u020d\u020e\5\u012c\u0097\2\u020e\u0210\7W\2\2\u020f\u0211\5\u00a8U\2"+
		"\u0210\u020f\3\2\2\2\u0210\u0211\3\2\2\2\u0211\u0213\3\2\2\2\u0212\u0214"+
		"\5\u01a4\u00d3\2\u0213\u0212\3\2\2\2\u0213\u0214\3\2\2\2\u0214\u0216\3"+
		"\2\2\2\u0215\u0217\5\u00ecw\2\u0216\u0215\3\2\2\2\u0216\u0217\3\2\2\2"+
		"\u0217\u0219\3\2\2\2\u0218\u021a\5\u0114\u008b\2\u0219\u0218\3\2\2\2\u0219"+
		"\u021a\3\2\2\2\u021a\35\3\2\2\2\u021b\u0222\5 \21\2\u021c\u0222\5\"\22"+
		"\2\u021d\u021e\5 \21\2\u021e\u021f\7\u0080\2\2\u021f\u0220\5\"\22\2\u0220"+
		"\u0222\3\2\2\2\u0221\u021b\3\2\2\2\u0221\u021c\3\2\2\2\u0221\u021d\3\2"+
		"\2\2\u0222\37\3\2\2\2\u0223\u0224\t\2\2\2\u0224!\3\2\2\2\u0225\u0226\b"+
		"\22\1\2\u0226\u0228\5$\23\2\u0227\u0229\7Z\2\2\u0228\u0227\3\2\2\2\u0228"+
		"\u0229\3\2\2\2\u0229\u0232\3\2\2\2\u022a\u022b\f\3\2\2\u022b\u022c\7\u0080"+
		"\2\2\u022c\u022e\5$\23\2\u022d\u022f\7Z\2\2\u022e\u022d\3\2\2\2\u022e"+
		"\u022f\3\2\2\2\u022f\u0231\3\2\2\2\u0230\u022a\3\2\2\2\u0231\u0234\3\2"+
		"\2\2\u0232\u0230\3\2\2\2\u0232\u0233\3\2\2\2\u0233#\3\2\2\2\u0234\u0232"+
		"\3\2\2\2\u0235\u0236\5&\24\2\u0236\u0237\5(\25\2\u0237%\3\2\2\2\u0238"+
		"\u023a\7e\2\2\u0239\u0238\3\2\2\2\u0239\u023a\3\2\2\2\u023a\u023b\3\2"+
		"\2\2\u023b\u0240\7\u008c\2\2\u023c\u0240\7@\2\2\u023d\u023e\7a\2\2\u023e"+
		"\u0240\7@\2\2\u023f\u0239\3\2\2\2\u023f\u023c\3\2\2\2\u023f\u023d\3\2"+
		"\2\2\u0240\'\3\2\2\2\u0241\u0243\7e\2\2\u0242\u0241\3\2\2\2\u0242\u0243"+
		"\3\2\2\2\u0243\u0244\3\2\2\2\u0244\u0245\7\u008c\2\2\u0245\u0246\5\u013e"+
		"\u00a0\2\u0246)\3\2\2\2\u0247\u0248\7V\2\2\u0248\u0249\5T+\2\u0249\u024a"+
		"\5,\27\2\u024a\u024b\7Z\2\2\u024b\u024c\7W\2\2\u024c\u025c\3\2\2\2\u024d"+
		"\u024e\7V\2\2\u024e\u024f\7Z\2\2\u024f\u0250\5,\27\2\u0250\u0251\5T+\2"+
		"\u0251\u0252\7W\2\2\u0252\u025c\3\2\2\2\u0253\u0254\7V\2\2\u0254\u0255"+
		"\5T+\2\u0255\u0256\5,\27\2\u0256\u0257\7Z\2\2\u0257\u0258\5,\27\2\u0258"+
		"\u0259\5T+\2\u0259\u025a\7W\2\2\u025a\u025c\3\2\2\2\u025b\u0247\3\2\2"+
		"\2\u025b\u024d\3\2\2\2\u025b\u0253\3\2\2\2\u025c+\3\2\2\2\u025d\u025e"+
		"\t\3\2\2\u025e-\3\2\2\2\u025f\u0260\5\u00b6\\\2\u0260\u0262\7V\2\2\u0261"+
		"\u0263\5<\37\2\u0262\u0261\3\2\2\2\u0262\u0263\3\2\2\2\u0263\u0264\3\2"+
		"\2\2\u0264\u0265\7W\2\2\u0265\u026e\3\2\2\2\u0266\u0267\5\u0192\u00ca"+
		"\2\u0267\u0269\7V\2\2\u0268\u026a\5<\37\2\u0269\u0268\3\2\2\2\u0269\u026a"+
		"\3\2\2\2\u026a\u026b\3\2\2\2\u026b\u026c\7W\2\2\u026c\u026e\3\2\2\2\u026d"+
		"\u025f\3\2\2\2\u026d\u0266\3\2\2\2\u026e/\3\2\2\2\u026f\u0270\t\4\2\2"+
		"\u0270\61\3\2\2\2\u0271\u0272\5\66\34\2\u0272\u0273\7j\2\2\u0273\u0274"+
		"\5\u011e\u0090\2\u0274\u0275\7k\2\2\u0275\u0276\7V\2\2\u0276\u0277\5t"+
		";\2\u0277\u0278\7W\2\2\u0278\63\3\2\2\2\u0279\u027a\t\5\2\2\u027a\65\3"+
		"\2\2\2\u027b\u027c\t\6\2\2\u027c\67\3\2\2\2\u027d\u027e\7F\2\2\u027e\u027f"+
		"\7V\2\2\u027f\u0280\5t;\2\u0280\u0281\7W\2\2\u0281\u0288\3\2\2\2\u0282"+
		"\u0283\7F\2\2\u0283\u0284\7V\2\2\u0284\u0285\5\u011e\u0090\2\u0285\u0286"+
		"\7W\2\2\u0286\u0288\3\2\2\2\u0287\u027d\3\2\2\2\u0287\u0282\3\2\2\2\u0288"+
		"9\3\2\2\2\u0289\u028a\b\36\1\2\u028a\u0295\5\f\7\2\u028b\u0295\5.\30\2"+
		"\u028c\u028d\5\u00b6\\\2\u028d\u028e\5\u0146\u00a4\2\u028e\u0295\3\2\2"+
		"\2\u028f\u0290\5\u0192\u00ca\2\u0290\u0291\5\u0146\u00a4\2\u0291\u0295"+
		"\3\2\2\2\u0292\u0295\5\62\32\2\u0293\u0295\58\35\2\u0294\u0289\3\2\2\2"+
		"\u0294\u028b\3\2\2\2\u0294\u028c\3\2\2\2\u0294\u028f\3\2\2\2\u0294\u0292"+
		"\3\2\2\2\u0294\u0293\3\2\2\2\u0295\u02b0\3\2\2\2\u0296\u0297\f\f\2\2\u0297"+
		"\u0298\7T\2\2\u0298\u0299\5\u0148\u00a5\2\u0299\u029a\7U\2\2\u029a\u02af"+
		"\3\2\2\2\u029b\u029c\f\13\2\2\u029c\u029e\7V\2\2\u029d\u029f\5<\37\2\u029e"+
		"\u029d\3\2\2\2\u029e\u029f\3\2\2\2\u029f\u02a0\3\2\2\2\u02a0\u02af\7W"+
		"\2\2\u02a1\u02a2\f\7\2\2\u02a2\u02a4\5\64\33\2\u02a3\u02a5\7?\2\2\u02a4"+
		"\u02a3\3\2\2\2\u02a4\u02a5\3\2\2\2\u02a5\u02a6\3\2\2\2\u02a6\u02a7\5\16"+
		"\b\2\u02a7\u02af\3\2\2\2\u02a8\u02a9\f\6\2\2\u02a9\u02aa\5\64\33\2\u02aa"+
		"\u02ab\5> \2\u02ab\u02af\3\2\2\2\u02ac\u02ad\f\5\2\2\u02ad\u02af\5\60"+
		"\31\2\u02ae\u0296\3\2\2\2\u02ae\u029b\3\2\2\2\u02ae\u02a1\3\2\2\2\u02ae"+
		"\u02a8\3\2\2\2\u02ae\u02ac\3\2\2\2\u02af\u02b2\3\2\2\2\u02b0\u02ae\3\2"+
		"\2\2\u02b0\u02b1\3\2\2\2\u02b1;\3\2\2\2\u02b2\u02b0\3\2\2\2\u02b3\u02b4"+
		"\5\u0144\u00a3\2\u02b4=\3\2\2\2\u02b5\u02b7\5\24\13\2\u02b6\u02b5\3\2"+
		"\2\2\u02b6\u02b7\3\2\2\2\u02b7\u02b8\3\2\2\2\u02b8\u02b9\5\u00b8]\2\u02b9"+
		"\u02ba\7\\\2\2\u02ba\u02bb\7g\2\2\u02bb\u02bc\5\u00b8]\2\u02bc\u02c9\3"+
		"\2\2\2\u02bd\u02be\5\24\13\2\u02be\u02bf\7?\2\2\u02bf\u02c0\5\u018a\u00c6"+
		"\2\u02c0\u02c1\7\\\2\2\u02c1\u02c2\7g\2\2\u02c2\u02c3\5\u00b8]\2\u02c3"+
		"\u02c9\3\2\2\2\u02c4\u02c5\7g\2\2\u02c5\u02c9\5\u00b8]\2\u02c6\u02c7\7"+
		"g\2\2\u02c7\u02c9\5\u00ba^\2\u02c8\u02b6\3\2\2\2\u02c8\u02bd\3\2\2\2\u02c8"+
		"\u02c4\3\2\2\2\u02c8\u02c6\3\2\2\2\u02c9?\3\2\2\2\u02ca\u02e7\5:\36\2"+
		"\u02cb\u02cc\7~\2\2\u02cc\u02e7\5T+\2\u02cd\u02ce\7\177\2\2\u02ce\u02e7"+
		"\5T+\2\u02cf\u02d0\5B\"\2\u02d0\u02d1\5T+\2\u02d1\u02e7\3\2\2\2\u02d2"+
		"\u02d3\79\2\2\u02d3\u02e7\5@!\2\u02d4\u02d5\79\2\2\u02d5\u02d6\7V\2\2"+
		"\u02d6\u02d7\5\u011e\u0090\2\u02d7\u02d8\7W\2\2\u02d8\u02e7\3\2\2\2\u02d9"+
		"\u02da\79\2\2\u02da\u02db\7Z\2\2\u02db\u02dc\7V\2\2\u02dc\u02dd\7\u008c"+
		"\2\2\u02dd\u02e7\7W\2\2\u02de\u02df\7\b\2\2\u02df\u02e0\7V\2\2\u02e0\u02e1"+
		"\5\u011e\u0090\2\u02e1\u02e2\7W\2\2\u02e2\u02e7\3\2\2\2\u02e3\u02e7\5"+
		"R*\2\u02e4\u02e7\5D#\2\u02e5\u02e7\5P)\2\u02e6\u02ca\3\2\2\2\u02e6\u02cb"+
		"\3\2\2\2\u02e6\u02cd\3\2\2\2\u02e6\u02cf\3\2\2\2\u02e6\u02d2\3\2\2\2\u02e6"+
		"\u02d4\3\2\2\2\u02e6\u02d9\3\2\2\2\u02e6\u02de\3\2\2\2\u02e6\u02e3\3\2"+
		"\2\2\u02e6\u02e4\3\2\2\2\u02e6\u02e5\3\2\2\2\u02e7A\3\2\2\2\u02e8\u02e9"+
		"\t\7\2\2\u02e9C\3\2\2\2\u02ea\u02ec\7\\\2\2\u02eb\u02ea\3\2\2\2\u02eb"+
		"\u02ec\3\2\2\2\u02ec\u02ed\3\2\2\2\u02ed\u02ef\7-\2\2\u02ee\u02f0\5F$"+
		"\2\u02ef\u02ee\3\2\2\2\u02ef\u02f0\3\2\2\2\u02f0\u02f1\3\2\2\2\u02f1\u02f3"+
		"\5H%\2\u02f2\u02f4\5N(\2\u02f3\u02f2\3\2\2\2\u02f3\u02f4\3\2\2\2\u02f4"+
		"\u0303\3\2\2\2\u02f5\u02f7\7\\\2\2\u02f6\u02f5\3\2\2\2\u02f6\u02f7\3\2"+
		"\2\2\u02f7\u02f8\3\2\2\2\u02f8\u02fa\7-\2\2\u02f9\u02fb\5F$\2\u02fa\u02f9"+
		"\3\2\2\2\u02fa\u02fb\3\2\2\2\u02fb\u02fc\3\2\2\2\u02fc\u02fd\7V\2\2\u02fd"+
		"\u02fe\5\u011e\u0090\2\u02fe\u0300\7W\2\2\u02ff\u0301\5N(\2\u0300\u02ff"+
		"\3\2\2\2\u0300\u0301\3\2\2\2\u0301\u0303\3\2\2\2\u0302\u02eb\3\2\2\2\u0302"+
		"\u02f6\3\2\2\2\u0303E\3\2\2\2\u0304\u0305\7V\2\2\u0305\u0306\5<\37\2\u0306"+
		"\u0307\7W\2\2\u0307G\3\2\2\2\u0308\u030a\5\u00b0Y\2\u0309\u030b\5J&\2"+
		"\u030a\u0309\3\2\2\2\u030a\u030b\3\2\2\2\u030bI\3\2\2\2\u030c\u030e\5"+
		"\u0116\u008c\2\u030d\u030f\5J&\2\u030e\u030d\3\2\2\2\u030e\u030f\3\2\2"+
		"\2\u030f\u0310\3\2\2\2\u0310\u0311\5L\'\2\u0311K\3\2\2\2\u0312\u0313\b"+
		"\'\1\2\u0313\u0314\7T\2\2\u0314\u0315\5t;\2\u0315\u0317\7U\2\2\u0316\u0318"+
		"\5\u00ecw\2\u0317\u0316\3\2\2\2\u0317\u0318\3\2\2\2\u0318\u0322\3\2\2"+
		"\2\u0319\u031a\f\3\2\2\u031a\u031b\7T\2\2\u031b\u031c\5v<\2\u031c\u031e"+
		"\7U\2\2\u031d\u031f\5\u00ecw\2\u031e\u031d\3\2\2\2\u031e\u031f\3\2\2\2"+
		"\u031f\u0321\3\2\2\2\u0320\u0319\3\2\2\2\u0321\u0324\3\2\2\2\u0322\u0320"+
		"\3\2\2\2\u0322\u0323\3\2\2\2\u0323M\3\2\2\2\u0324\u0322\3\2\2\2\u0325"+
		"\u0327\7V\2\2\u0326\u0328\5<\37\2\u0327\u0326\3\2\2\2\u0327\u0328\3\2"+
		"\2\2\u0328\u0329\3\2\2\2\u0329\u032c\7W\2\2\u032a\u032c\5\u0146\u00a4"+
		"\2\u032b\u0325\3\2\2\2\u032b\u032a\3\2\2\2\u032cO\3\2\2\2\u032d\u032f"+
		"\7\\\2\2\u032e\u032d\3\2\2\2\u032e\u032f\3\2\2\2\u032f\u0330\3\2\2\2\u0330"+
		"\u0331\7\31\2\2\u0331\u033a\5T+\2\u0332\u0334\7\\\2\2\u0333\u0332\3\2"+
		"\2\2\u0333\u0334\3\2\2\2\u0334\u0335\3\2\2\2\u0335\u0336\7\31\2\2\u0336"+
		"\u0337\7T\2\2\u0337\u0338\7U\2\2\u0338\u033a\5T+\2\u0339\u032e\3\2\2\2"+
		"\u0339\u0333\3\2\2\2\u033aQ\3\2\2\2\u033b\u033c\7.\2\2\u033c\u033d\7V"+
		"\2\2\u033d\u033e\5t;\2\u033e\u033f\7W\2\2\u033fS\3\2\2\2\u0340\u0347\5"+
		"@!\2\u0341\u0342\7V\2\2\u0342\u0343\5\u011e\u0090\2\u0343\u0344\7W\2\2"+
		"\u0344\u0345\5T+\2\u0345\u0347\3\2\2\2\u0346\u0340\3\2\2\2\u0346\u0341"+
		"\3\2\2\2\u0347U\3\2\2\2\u0348\u0349\b,\1\2\u0349\u034a\5T+\2\u034a\u0353"+
		"\3\2\2\2\u034b\u034c\f\4\2\2\u034c\u034d\7^\2\2\u034d\u0352\5T+\2\u034e"+
		"\u034f\f\3\2\2\u034f\u0350\7\u0081\2\2\u0350\u0352\5T+\2\u0351\u034b\3"+
		"\2\2\2\u0351\u034e\3\2\2\2\u0352\u0355\3\2\2\2\u0353\u0351\3\2\2\2\u0353"+
		"\u0354\3\2\2\2\u0354W\3\2\2\2\u0355\u0353\3\2\2\2\u0356\u0357\b-\1\2\u0357"+
		"\u0358\5V,\2\u0358\u0364\3\2\2\2\u0359\u035a\f\5\2\2\u035a\u035b\7a\2"+
		"\2\u035b\u0363\5V,\2\u035c\u035d\f\4\2\2\u035d\u035e\7b\2\2\u035e\u0363"+
		"\5V,\2\u035f\u0360\f\3\2\2\u0360\u0361\7c\2\2\u0361\u0363\5V,\2\u0362"+
		"\u0359\3\2\2\2\u0362\u035c\3\2\2\2\u0362\u035f\3\2\2\2\u0363\u0366\3\2"+
		"\2\2\u0364\u0362\3\2\2\2\u0364\u0365\3\2\2\2\u0365Y\3\2\2\2\u0366\u0364"+
		"\3\2\2\2\u0367\u0368\b.\1\2\u0368\u0369\5X-\2\u0369\u0372\3\2\2\2\u036a"+
		"\u036b\f\4\2\2\u036b\u036c\7_\2\2\u036c\u0371\5X-\2\u036d\u036e\f\3\2"+
		"\2\u036e\u036f\7`\2\2\u036f\u0371\5X-\2\u0370\u036a\3\2\2\2\u0370\u036d"+
		"\3\2\2\2\u0371\u0374\3\2\2\2\u0372\u0370\3\2\2\2\u0372\u0373\3\2\2\2\u0373"+
		"[\3\2\2\2\u0374\u0372\3\2\2\2\u0375\u0376\b/\1\2\u0376\u0377\5Z.\2\u0377"+
		"\u0380\3\2\2\2\u0378\u0379\f\4\2\2\u0379\u037a\7t\2\2\u037a\u037f\5Z."+
		"\2\u037b\u037c\f\3\2\2\u037c\u037d\7u\2\2\u037d\u037f\5Z.\2\u037e\u0378"+
		"\3\2\2\2\u037e\u037b\3\2\2\2\u037f\u0382\3\2\2\2\u0380\u037e\3\2\2\2\u0380"+
		"\u0381\3\2\2\2\u0381]\3\2\2\2\u0382\u0380\3\2\2\2\u0383\u0384\b\60\1\2"+
		"\u0384\u0385\5\\/\2\u0385\u0394\3\2\2\2\u0386\u0387\f\6\2\2\u0387\u0388"+
		"\7j\2\2\u0388\u0393\5\\/\2\u0389\u038a\f\5\2\2\u038a\u038b\7k\2\2\u038b"+
		"\u0393\5\\/\2\u038c\u038d\f\4\2\2\u038d\u038e\7z\2\2\u038e\u0393\5\\/"+
		"\2\u038f\u0390\f\3\2\2\u0390\u0391\7{\2\2\u0391\u0393\5\\/\2\u0392\u0386"+
		"\3\2\2\2\u0392\u0389\3\2\2\2\u0392\u038c\3\2\2\2\u0392\u038f\3\2\2\2\u0393"+
		"\u0396\3\2\2\2\u0394\u0392\3\2\2\2\u0394\u0395\3\2\2\2\u0395_\3\2\2\2"+
		"\u0396\u0394\3\2\2\2\u0397\u0398\b\61\1\2\u0398\u0399\5^\60\2\u0399\u03a2"+
		"\3\2\2\2\u039a\u039b\f\4\2\2\u039b\u039c\7x\2\2\u039c\u03a1\5^\60\2\u039d"+
		"\u039e\f\3\2\2\u039e\u039f\7y\2\2\u039f\u03a1\5^\60\2\u03a0\u039a\3\2"+
		"\2\2\u03a0\u039d\3\2\2\2\u03a1\u03a4\3\2\2\2\u03a2\u03a0\3\2\2\2\u03a2"+
		"\u03a3\3\2\2\2\u03a3a\3\2\2\2\u03a4\u03a2\3\2\2\2\u03a5\u03a6\b\62\1\2"+
		"\u03a6\u03a7\5`\61\2\u03a7\u03ad\3\2\2\2\u03a8\u03a9\f\3\2\2\u03a9\u03aa"+
		"\7e\2\2\u03aa\u03ac\5`\61\2\u03ab\u03a8\3\2\2\2\u03ac\u03af\3\2\2\2\u03ad"+
		"\u03ab\3\2\2\2\u03ad\u03ae\3\2\2\2\u03aec\3\2\2\2\u03af\u03ad\3\2\2\2"+
		"\u03b0\u03b1\b\63\1\2\u03b1\u03b2\5b\62\2\u03b2\u03b8\3\2\2\2\u03b3\u03b4"+
		"\f\3\2\2\u03b4\u03b5\7d\2\2\u03b5\u03b7\5b\62\2\u03b6\u03b3\3\2\2\2\u03b7"+
		"\u03ba\3\2\2\2\u03b8\u03b6\3\2\2\2\u03b8\u03b9\3\2\2\2\u03b9e\3\2\2\2"+
		"\u03ba\u03b8\3\2\2\2\u03bb\u03bc\b\64\1\2\u03bc\u03bd\5d\63\2\u03bd\u03c3"+
		"\3\2\2\2\u03be\u03bf\f\3\2\2\u03bf\u03c0\7f\2\2\u03c0\u03c2\5d\63\2\u03c1"+
		"\u03be\3\2\2\2\u03c2\u03c5\3\2\2\2\u03c3\u03c1\3\2\2\2\u03c3\u03c4\3\2"+
		"\2\2\u03c4g\3\2\2\2\u03c5\u03c3\3\2\2\2\u03c6\u03c7\b\65\1\2\u03c7\u03c8"+
		"\5f\64\2\u03c8\u03ce\3\2\2\2\u03c9\u03ca\f\3\2\2\u03ca\u03cb\7|\2\2\u03cb"+
		"\u03cd\5f\64\2\u03cc\u03c9\3\2\2\2\u03cd\u03d0\3\2\2\2\u03ce\u03cc\3\2"+
		"\2\2\u03ce\u03cf\3\2\2\2\u03cfi\3\2\2\2\u03d0\u03ce\3\2\2\2\u03d1\u03d2"+
		"\b\66\1\2\u03d2\u03d3\5h\65\2\u03d3\u03d9\3\2\2\2\u03d4\u03d5\f\3\2\2"+
		"\u03d5\u03d6\7}\2\2\u03d6\u03d8\5h\65\2\u03d7\u03d4\3\2\2\2\u03d8\u03db"+
		"\3\2\2\2\u03d9\u03d7\3\2\2\2\u03d9\u03da\3\2\2\2\u03dak\3\2\2\2\u03db"+
		"\u03d9\3\2\2\2\u03dc\u03e4\5j\66\2\u03dd\u03de\5j\66\2\u03de\u03df\7["+
		"\2\2\u03df\u03e0\5t;\2\u03e0\u03e1\7Y\2\2\u03e1\u03e2\5p9\2\u03e2\u03e4"+
		"\3\2\2\2\u03e3\u03dc\3\2\2\2\u03e3\u03dd\3\2\2\2\u03e4m\3\2\2\2\u03e5"+
		"\u03e7\7B\2\2\u03e6\u03e8\5p9\2\u03e7\u03e6\3\2\2\2\u03e7\u03e8\3\2\2"+
		"\2\u03e8o\3\2\2\2\u03e9\u03f0\5l\67\2\u03ea\u03eb\5j\66\2\u03eb\u03ec"+
		"\5r:\2\u03ec\u03ed\5\u0142\u00a2\2\u03ed\u03f0\3\2\2\2\u03ee\u03f0\5n"+
		"8\2\u03ef\u03e9\3\2\2\2\u03ef\u03ea\3\2\2\2\u03ef\u03ee\3\2\2\2\u03f0"+
		"q\3\2\2\2\u03f1\u03f2\t\b\2\2\u03f2s\3\2\2\2\u03f3\u03f4\b;\1\2\u03f4"+
		"\u03f5\5p9\2\u03f5\u03fb\3\2\2\2\u03f6\u03f7\f\3\2\2\u03f7\u03f8\7\u0080"+
		"\2\2\u03f8\u03fa\5p9\2\u03f9\u03f6\3\2\2\2\u03fa\u03fd\3\2\2\2\u03fb\u03f9"+
		"\3\2\2\2\u03fb\u03fc\3\2\2\2\u03fcu\3\2\2\2\u03fd\u03fb\3\2\2\2\u03fe"+
		"\u03ff\5l\67\2\u03ffw\3\2\2\2\u0400\u041b\5~@\2\u0401\u0403\5\u00ecw\2"+
		"\u0402\u0401\3\2\2\2\u0402\u0403\3\2\2\2\u0403\u0404\3\2\2\2\u0404\u041b"+
		"\5\u0080A\2\u0405\u0407\5\u00ecw\2\u0406\u0405\3\2\2\2\u0406\u0407\3\2"+
		"\2\2\u0407\u0408\3\2\2\2\u0408\u041b\5\u0082B\2\u0409\u040b\5\u00ecw\2"+
		"\u040a\u0409\3\2\2\2\u040a\u040b\3\2\2\2\u040b\u040c\3\2\2\2\u040c\u041b"+
		"\5\u0086D\2\u040d\u040f\5\u00ecw\2\u040e\u040d\3\2\2\2\u040e\u040f\3\2"+
		"\2\2\u040f\u0410\3\2\2\2\u0410\u041b\5\u0088E\2\u0411\u0413\5\u00ecw\2"+
		"\u0412\u0411\3\2\2\2\u0412\u0413\3\2\2\2\u0413\u0414\3\2\2\2\u0414\u041b"+
		"\5\u0090I\2\u0415\u041b\5\u0092J\2\u0416\u0418\5\u00ecw\2\u0417\u0416"+
		"\3\2\2\2\u0417\u0418\3\2\2\2\u0418\u0419\3\2\2\2\u0419\u041b\5\u019a\u00ce"+
		"\2\u041a\u0400\3\2\2\2\u041a\u0402\3\2\2\2\u041a\u0406\3\2\2\2\u041a\u040a"+
		"\3\2\2\2\u041a\u040e\3\2\2\2\u041a\u0412\3\2\2\2\u041a\u0415\3\2\2\2\u041a"+
		"\u0417\3\2\2\2\u041by\3\2\2\2\u041c\u041f\5\u0080A\2\u041d\u041f\5\u009e"+
		"P\2\u041e\u041c\3\2\2\2\u041e\u041d\3\2\2\2\u041f{\3\2\2\2\u0420\u0429"+
		"\5t;\2\u0421\u0423\5\u00ecw\2\u0422\u0421\3\2\2\2\u0422\u0423\3\2\2\2"+
		"\u0423\u0424\3\2\2\2\u0424\u0425\5\u00a8U\2\u0425\u0426\5\u0108\u0085"+
		"\2\u0426\u0427\5\u0140\u00a1\2\u0427\u0429\3\2\2\2\u0428\u0420\3\2\2\2"+
		"\u0428\u0422\3\2\2\2\u0429}\3\2\2\2\u042a\u042c\5\u00ecw\2\u042b\u042a"+
		"\3\2\2\2\u042b\u042c\3\2\2\2\u042c\u042d\3\2\2\2\u042d\u042e\7\u008c\2"+
		"\2\u042e\u042f\7Y\2\2\u042f\u043f\5x=\2\u0430\u0432\5\u00ecw\2\u0431\u0430"+
		"\3\2\2\2\u0431\u0432\3\2\2\2\u0432\u0433\3\2\2\2\u0433\u0434\7\r\2\2\u0434"+
		"\u0435\5v<\2\u0435\u0436\7Y\2\2\u0436\u0437\5x=\2\u0437\u043f\3\2\2\2"+
		"\u0438\u043a\5\u00ecw\2\u0439\u0438\3\2\2\2\u0439\u043a\3\2\2\2\u043a"+
		"\u043b\3\2\2\2\u043b\u043c\7\30\2\2\u043c\u043d\7Y\2\2\u043d\u043f\5x"+
		"=\2\u043e\u042b\3\2\2\2\u043e\u0431\3\2\2\2\u043e\u0439\3\2\2\2\u043f"+
		"\177\3\2\2\2\u0440\u0442\5t;\2\u0441\u0440\3\2\2\2\u0441\u0442\3\2\2\2"+
		"\u0442\u0443\3\2\2\2\u0443\u0444\7X\2\2\u0444\u0081\3\2\2\2\u0445\u0447"+
		"\7R\2\2\u0446\u0448\5\u0084C\2\u0447\u0446\3\2\2\2\u0447\u0448\3\2\2\2"+
		"\u0448\u0449\3\2\2\2\u0449\u044a\7S\2\2\u044a\u0083\3\2\2\2\u044b\u044c"+
		"\bC\1\2\u044c\u044d\5x=\2\u044d\u0452\3\2\2\2\u044e\u044f\f\3\2\2\u044f"+
		"\u0451\5x=\2\u0450\u044e\3\2\2\2\u0451\u0454\3\2\2\2\u0452\u0450\3\2\2"+
		"\2\u0452\u0453\3\2\2\2\u0453\u0085\3\2\2\2\u0454\u0452\3\2\2\2\u0455\u0457"+
		"\7\'\2\2\u0456\u0458\7\24\2\2\u0457\u0456\3\2\2\2\u0457\u0458\3\2\2\2"+
		"\u0458\u0459\3\2\2\2\u0459\u045b\7V\2\2\u045a\u045c\5z>\2\u045b\u045a"+
		"\3\2\2\2\u045b\u045c\3\2\2\2\u045c\u045d\3\2\2\2\u045d\u045e\5|?\2\u045e"+
		"\u045f\7W\2\2\u045f\u0460\5x=\2\u0460\u0479\3\2\2\2\u0461\u0463\7\'\2"+
		"\2\u0462\u0464\7\24\2\2\u0463\u0462\3\2\2\2\u0463\u0464\3\2\2\2\u0464"+
		"\u0465\3\2\2\2\u0465\u0467\7V\2\2\u0466\u0468\5z>\2\u0467\u0466\3\2\2"+
		"\2\u0467\u0468\3\2\2\2\u0468\u0469\3\2\2\2\u0469\u046a\5|?\2\u046a\u046b"+
		"\7W\2\2\u046b\u046c\5x=\2\u046c\u046d\7\35\2\2\u046d\u046e\5x=\2\u046e"+
		"\u0479\3\2\2\2\u046f\u0470\7>\2\2\u0470\u0472\7V\2\2\u0471\u0473\5z>\2"+
		"\u0472\u0471\3\2\2\2\u0472\u0473\3\2\2\2\u0473\u0474\3\2\2\2\u0474\u0475"+
		"\5|?\2\u0475\u0476\7W\2\2\u0476\u0477\5x=\2\u0477\u0479\3\2\2\2\u0478"+
		"\u0455\3\2\2\2\u0478\u0461\3\2\2\2\u0478\u046f\3\2\2\2\u0479\u0087\3\2"+
		"\2\2\u047a\u047b\7O\2\2\u047b\u047c\7V\2\2\u047c\u047d\5|?\2\u047d\u047e"+
		"\7W\2\2\u047e\u047f\5x=\2\u047f\u049e\3\2\2\2\u0480\u0481\7\32\2\2\u0481"+
		"\u0482\5x=\2\u0482\u0483\7O\2\2\u0483\u0484\7V\2\2\u0484\u0485\5t;\2\u0485"+
		"\u0486\7W\2\2\u0486\u0487\7X\2\2\u0487\u049e\3\2\2\2\u0488\u0489\7$\2"+
		"\2\u0489\u048a\7V\2\2\u048a\u048c\5z>\2\u048b\u048d\5|?\2\u048c\u048b"+
		"\3\2\2\2\u048c\u048d\3\2\2\2\u048d\u048e\3\2\2\2\u048e\u0490\7X\2\2\u048f"+
		"\u0491\5t;\2\u0490\u048f\3\2\2\2\u0490\u0491\3\2\2\2\u0491\u0492\3\2\2"+
		"\2\u0492\u0493\7W\2\2\u0493\u0494\5x=\2\u0494\u049e\3\2\2\2\u0495\u0496"+
		"\7$\2\2\u0496\u0497\7V\2\2\u0497\u0498\5\u008cG\2\u0498\u0499\7Y\2\2\u0499"+
		"\u049a\5\u008eH\2\u049a\u049b\7W\2\2\u049b\u049c\5x=\2\u049c\u049e\3\2"+
		"\2\2\u049d\u047a\3\2\2\2\u049d\u0480\3\2\2\2\u049d\u0488\3\2\2\2\u049d"+
		"\u0495\3\2\2\2\u049e\u0089\3\2\2\2\u049f\u04a1\5\u00ecw\2\u04a0\u049f"+
		"\3\2\2\2\u04a0\u04a1\3\2\2\2\u04a1\u04a2\3\2\2\2\u04a2\u04a3\5\u00a8U"+
		"\2\u04a3\u04a4\5\u0108\u0085\2\u04a4\u04b1\3\2\2\2\u04a5\u04a7\5\u00ec"+
		"w\2\u04a6\u04a5\3\2\2\2\u04a6\u04a7\3\2\2\2\u04a7\u04a8\3\2\2\2\u04a8"+
		"\u04aa\5\u00a8U\2\u04a9\u04ab\5\u011c\u008f\2\u04aa\u04a9\3\2\2\2\u04aa"+
		"\u04ab\3\2\2\2\u04ab\u04ac\3\2\2\2\u04ac\u04ad\7T\2\2\u04ad\u04ae\5\u01a6"+
		"\u00d4\2\u04ae\u04af\7U\2\2\u04af\u04b1\3\2\2\2\u04b0\u04a0\3\2\2\2\u04b0"+
		"\u04a6\3\2\2\2\u04b1\u008b\3\2\2\2\u04b2\u04b4\5\u00ecw\2\u04b3\u04b2"+
		"\3\2\2\2\u04b3\u04b4\3\2\2\2\u04b4\u04b5\3\2\2\2\u04b5\u04b6\5\u00a8U"+
		"\2\u04b6\u04b7\5\u0108\u0085\2\u04b7\u008d\3\2\2\2\u04b8\u04b9\5\u0148"+
		"\u00a5\2\u04b9\u008f\3\2\2\2\u04ba\u04bb\7\f\2\2\u04bb\u04c7\7X\2\2\u04bc"+
		"\u04bd\7\26\2\2\u04bd\u04c7\7X\2\2\u04be\u04c0\7\66\2\2\u04bf\u04c1\5"+
		"\u0148\u00a5\2\u04c0\u04bf\3\2\2\2\u04c0\u04c1\3\2\2\2\u04c1\u04c2\3\2"+
		"\2\2\u04c2\u04c7\7X\2\2\u04c3\u04c4\7&\2\2\u04c4\u04c5\7\u008c\2\2\u04c5"+
		"\u04c7\7X\2\2\u04c6\u04ba\3\2\2\2\u04c6\u04bc\3\2\2\2\u04c6\u04be\3\2"+
		"\2\2\u04c6\u04c3\3\2\2\2\u04c7\u0091\3\2\2\2\u04c8\u04c9\5\u0098M\2\u04c9"+
		"\u0093\3\2\2\2\u04ca\u04cb\bK\1\2\u04cb\u04cc\5\u0096L\2\u04cc\u04d1\3"+
		"\2\2\2\u04cd\u04ce\f\3\2\2\u04ce\u04d0\5\u0096L\2\u04cf\u04cd\3\2\2\2"+
		"\u04d0\u04d3\3\2\2\2\u04d1\u04cf\3\2\2\2\u04d1\u04d2\3\2\2\2\u04d2\u0095"+
		"\3\2\2\2\u04d3\u04d1\3\2\2\2\u04d4\u04e0\5\u0098M\2\u04d5\u04e0\5\u009a"+
		"N\2\u04d6\u04e0\5\u0132\u009a\2\u04d7\u04e0\5\u0180\u00c1\2\u04d8\u04e0"+
		"\5\u0198\u00cd\2\u04d9\u04e0\5\u0194\u00cb\2\u04da\u04e0\5\u0196\u00cc"+
		"\2\u04db\u04e0\5\u00eav\2\u04dc\u04e0\5\u00d0i\2\u04dd\u04e0\5\u00a2R"+
		"\2\u04de\u04e0\5\u00a4S\2\u04df\u04d4\3\2\2\2\u04df\u04d5\3\2\2\2\u04df"+
		"\u04d6\3\2\2\2\u04df\u04d7\3\2\2\2\u04df\u04d8\3\2\2\2\u04df\u04d9\3\2"+
		"\2\2\u04df\u04da\3\2\2\2\u04df\u04db\3\2\2\2\u04df\u04dc\3\2\2\2\u04df"+
		"\u04dd\3\2\2\2\u04df\u04de\3\2\2\2\u04e0\u0097\3\2\2\2\u04e1\u04ea\5\u009e"+
		"P\2\u04e2\u04ea\5\u00e8u\2\u04e3\u04ea\5\u00dco\2\u04e4\u04ea\5\u00e0"+
		"q\2\u04e5\u04ea\5\u00e6t\2\u04e6\u04ea\5\u00a0Q\2\u04e7\u04ea\5\u009c"+
		"O\2\u04e8\u04ea\5\u00c4c\2\u04e9\u04e1\3\2\2\2\u04e9\u04e2\3\2\2\2\u04e9"+
		"\u04e3\3\2\2\2\u04e9\u04e4\3\2\2\2\u04e9\u04e5\3\2\2\2\u04e9\u04e6\3\2"+
		"\2\2\u04e9\u04e7\3\2\2\2\u04e9\u04e8\3\2\2\2\u04ea\u0099\3\2\2\2\u04eb"+
		"\u04ed\5\u00ecw\2\u04ec\u04eb\3\2\2\2\u04ec\u04ed\3\2\2\2\u04ed\u04ee"+
		"\3\2\2\2\u04ee\u04ef\5\u0108\u0085\2\u04ef\u04f0\7X\2\2\u04f0\u009b\3"+
		"\2\2\2\u04f1\u04f2\7J\2\2\u04f2\u04f4\7\u008c\2\2\u04f3\u04f5\5\u00ec"+
		"w\2\u04f4\u04f3\3\2\2\2\u04f4\u04f5\3\2\2\2\u04f5\u04f6\3\2\2\2\u04f6"+
		"\u04f7\7i\2\2\u04f7\u04f8\5\u0120\u0091\2\u04f8\u04f9\7X\2\2\u04f9\u009d"+
		"\3\2\2\2\u04fa\u04fc\5\u00a8U\2\u04fb\u04fd\5\u0104\u0083\2\u04fc\u04fb"+
		"\3\2\2\2\u04fc\u04fd\3\2\2\2\u04fd\u04fe\3\2\2\2\u04fe\u04ff\7X\2\2\u04ff"+
		"\u0513\3\2\2\2\u0500\u0501\5\u00ecw\2\u0501\u0502\5\u00a8U\2\u0502\u0503"+
		"\5\u0104\u0083\2\u0503\u0504\7X\2\2\u0504\u0513\3\2\2\2\u0505\u0507\5"+
		"\u00ecw\2\u0506\u0505\3\2\2\2\u0506\u0507\3\2\2\2\u0507\u0508\3\2\2\2"+
		"\u0508\u050a\5\u00a8U\2\u0509\u050b\5\u011c\u008f\2\u050a\u0509\3\2\2"+
		"\2\u050a\u050b\3\2\2\2\u050b\u050c\3\2\2\2\u050c\u050d\7T\2\2\u050d\u050e"+
		"\5\u01a6\u00d4\2\u050e\u050f\7U\2\2\u050f\u0510\5\u013e\u00a0\2\u0510"+
		"\u0511\7X\2\2\u0511\u0513\3\2\2\2\u0512\u04fa\3\2\2\2\u0512\u0500\3\2"+
		"\2\2\u0512\u0506\3\2\2\2\u0513\u009f\3\2\2\2\u0514\u0515\7;\2\2\u0515"+
		"\u0516\7V\2\2\u0516\u0517\5v<\2\u0517\u0518\7W\2\2\u0518\u0519\7X\2\2"+
		"\u0519\u0523\3\2\2\2\u051a\u051b\7;\2\2\u051b\u051c\7V\2\2\u051c\u051d"+
		"\5v<\2\u051d\u051e\7\u0080\2\2\u051e\u051f\7\u0087\2\2\u051f\u0520\7W"+
		"\2\2\u0520\u0521\7X\2\2\u0521\u0523\3\2\2\2\u0522\u0514\3\2\2\2\u0522"+
		"\u051a\3\2\2\2\u0523\u00a1\3\2\2\2\u0524\u0525\7X\2\2\u0525\u00a3\3\2"+
		"\2\2\u0526\u0527\5\u00ecw\2\u0527\u0528\7X\2\2\u0528\u00a5\3\2\2\2\u0529"+
		"\u0531\5\u00aaV\2\u052a\u0531\5\u00b2Z\2\u052b\u0531\5\u00acW\2\u052c"+
		"\u0531\7%\2\2\u052d\u0531\7E\2\2\u052e\u0531\7\24\2\2\u052f\u0531\7(\2"+
		"\2\u0530\u0529\3\2\2\2\u0530\u052a\3\2\2\2\u0530\u052b\3\2\2\2\u0530\u052c"+
		"\3\2\2\2\u0530\u052d\3\2\2\2\u0530\u052e\3\2\2\2\u0530\u052f\3\2\2\2\u0531"+
		"\u00a7\3\2\2\2\u0532\u0534\5\u00a6T\2\u0533\u0535\5\u00ecw\2\u0534\u0533"+
		"\3\2\2\2\u0534\u0535\3\2\2\2\u0535\u053a\3\2\2\2\u0536\u0537\5\u00a6T"+
		"\2\u0537\u0538\5\u00a8U\2\u0538\u053a\3\2\2\2\u0539\u0532\3\2\2\2\u0539"+
		"\u0536\3\2\2\2\u053a\u00a9\3\2\2\2\u053b\u053c\t\t\2\2\u053c\u00ab\3\2"+
		"\2\2\u053d\u053e\t\n\2\2\u053e\u00ad\3\2\2\2\u053f\u0540\5\u00b6\\\2\u0540"+
		"\u00af\3\2\2\2\u0541\u0543\5\u00aeX\2\u0542\u0544\5\u00ecw\2\u0543\u0542"+
		"\3\2\2\2\u0543\u0544\3\2\2\2\u0544\u0549\3\2\2\2\u0545\u0546\5\u00aeX"+
		"\2\u0546\u0547\5\u00b0Y\2\u0547\u0549\3\2\2\2\u0548\u0541\3\2\2\2\u0548"+
		"\u0545\3\2\2\2\u0549\u00b1\3\2\2\2\u054a\u054b\5\u00aeX\2\u054b\u00b3"+
		"\3\2\2\2\u054c\u054e\5\u00b2Z\2\u054d\u054f\5\u00ecw\2\u054e\u054d\3\2"+
		"\2\2\u054e\u054f\3\2\2\2\u054f\u0554\3\2\2\2\u0550\u0551\5\u00b2Z\2\u0551"+
		"\u0552\5\u00b4[\2\u0552\u0554\3\2\2\2\u0553\u054c\3\2\2\2\u0553\u0550"+
		"\3\2\2\2\u0554\u00b5\3\2\2\2\u0555\u0565\7\17\2\2\u0556\u0565\7\20\2\2"+
		"\u0557\u0565\7\21\2\2\u0558\u0565\7N\2\2\u0559\u0565\7\13\2\2\u055a\u0565"+
		"\7\67\2\2\u055b\u0565\7)\2\2\u055c\u0565\7*\2\2\u055d\u0565\78\2\2\u055e"+
		"\u0565\7I\2\2\u055f\u0565\7#\2\2\u0560\u0565\7\33\2\2\u0561\u0565\7L\2"+
		"\2\u0562\u0565\7\n\2\2\u0563\u0565\5\u00ba^\2\u0564\u0555\3\2\2\2\u0564"+
		"\u0556\3\2\2\2\u0564\u0557\3\2\2\2\u0564\u0558\3\2\2\2\u0564\u0559\3\2"+
		"\2\2\u0564\u055a\3\2\2\2\u0564\u055b\3\2\2\2\u0564\u055c\3\2\2\2\u0564"+
		"\u055d\3\2\2\2\u0564\u055e\3\2\2\2\u0564\u055f\3\2\2\2\u0564\u0560\3\2"+
		"\2\2\u0564\u0561\3\2\2\2\u0564\u0562\3\2\2\2\u0564\u0563\3\2\2\2\u0565"+
		"\u00b7\3\2\2\2\u0566\u0569\7\u008c\2\2\u0567\u0569\5\u018a\u00c6\2\u0568"+
		"\u0566\3\2\2\2\u0568\u0567\3\2\2\2\u0569\u00b9\3\2\2\2\u056a\u056b\7\27"+
		"\2\2\u056b\u056c\7V\2\2\u056c\u056d\5t;\2\u056d\u056e\7W\2\2\u056e\u0574"+
		"\3\2\2\2\u056f\u0570\7\27\2\2\u0570\u0571\7V\2\2\u0571\u0572\7\n\2\2\u0572"+
		"\u0574\7W\2\2\u0573\u056a\3\2\2\2\u0573\u056f\3\2\2\2\u0574\u00bb\3\2"+
		"\2\2\u0575\u0577\5\u0152\u00aa\2\u0576\u0578\5\u00ecw\2\u0577\u0576\3"+
		"\2\2\2\u0577\u0578\3\2\2\2\u0578\u057a\3\2\2\2\u0579\u057b\5\24\13\2\u057a"+
		"\u0579\3\2\2\2\u057a\u057b\3\2\2\2\u057b\u057c\3\2\2\2\u057c\u057d\7\u008c"+
		"\2\2\u057d\u058e\3\2\2\2\u057e\u057f\5\u0152\u00aa\2\u057f\u0580\5\u018a"+
		"\u00c6\2\u0580\u058e\3\2\2\2\u0581\u0582\5\u0152\u00aa\2\u0582\u0584\5"+
		"\24\13\2\u0583\u0585\7?\2\2\u0584\u0583\3\2\2\2\u0584\u0585\3\2\2\2\u0585"+
		"\u0586\3\2\2\2\u0586\u0587\5\u018a\u00c6\2\u0587\u058e\3\2\2\2\u0588\u058a"+
		"\7\36\2\2\u0589\u058b\5\24\13\2\u058a\u0589\3\2\2\2\u058a\u058b\3\2\2"+
		"\2\u058b\u058c\3\2\2\2\u058c\u058e\7\u008c\2\2\u058d\u0575\3\2\2\2\u058d"+
		"\u057e\3\2\2\2\u058d\u0581\3\2\2\2\u058d\u0588\3\2\2\2\u058e\u00bd\3\2"+
		"\2\2\u058f\u0590\5\u00c0a\2\u0590\u0592\7R\2\2\u0591\u0593\5\u00caf\2"+
		"\u0592\u0591\3\2\2\2\u0592\u0593\3\2\2\2\u0593\u0594\3\2\2\2\u0594\u0595"+
		"\7S\2\2\u0595\u059d\3\2\2\2\u0596\u0597\5\u00c0a\2\u0597\u0598\7R\2\2"+
		"\u0598\u0599\5\u00caf\2\u0599\u059a\7\u0080\2\2\u059a\u059b\7S\2\2\u059b"+
		"\u059d\3\2\2\2\u059c\u058f\3\2\2\2\u059c\u0596\3\2\2\2\u059d\u00bf\3\2"+
		"\2\2\u059e\u05a0\5\u00c6d\2\u059f\u05a1\5\u00ecw\2\u05a0\u059f\3\2\2\2"+
		"\u05a0\u05a1\3\2\2\2\u05a1\u05a3\3\2\2\2\u05a2\u05a4\5\u00c2b\2\u05a3"+
		"\u05a2\3\2\2\2\u05a3\u05a4\3\2\2\2\u05a4\u05a6\3\2\2\2\u05a5\u05a7\5\u00c8"+
		"e\2\u05a6\u05a5\3\2\2\2\u05a6\u05a7\3\2\2\2\u05a7\u00c1\3\2\2\2\u05a8"+
		"\u05aa\5\24\13\2\u05a9\u05a8\3\2\2\2\u05a9\u05aa\3\2\2\2\u05aa\u05ab\3"+
		"\2\2\2\u05ab\u05ac\7\u008c\2\2\u05ac\u00c3\3\2\2\2\u05ad\u05af\5\u00c6"+
		"d\2\u05ae\u05b0\5\u00ecw\2\u05af\u05ae\3\2\2\2\u05af\u05b0\3\2\2\2\u05b0"+
		"\u05b2\3\2\2\2\u05b1\u05b3\5\24\13\2\u05b2\u05b1\3\2\2\2\u05b2\u05b3\3"+
		"\2\2\2\u05b3\u05b4\3\2\2\2\u05b4\u05b6\7\u008c\2\2\u05b5\u05b7\5\u00c8"+
		"e\2\u05b6\u05b5\3\2\2\2\u05b6\u05b7\3\2\2\2\u05b7\u05b8\3\2\2\2\u05b8"+
		"\u05b9\7X\2\2\u05b9\u00c5\3\2\2\2\u05ba\u05c0\7\36\2\2\u05bb\u05bc\7\36"+
		"\2\2\u05bc\u05c0\7\22\2\2\u05bd\u05be\7\36\2\2\u05be\u05c0\7=\2\2\u05bf"+
		"\u05ba\3\2\2\2\u05bf\u05bb\3\2\2\2\u05bf\u05bd\3\2\2\2\u05c0\u00c7\3\2"+
		"\2\2\u05c1\u05c2\7Y\2\2\u05c2\u05c3\5\u00b0Y\2\u05c3\u00c9\3\2\2\2\u05c4"+
		"\u05c5\bf\1\2\u05c5\u05c6\5\u00ccg\2\u05c6\u05cc\3\2\2\2\u05c7\u05c8\f"+
		"\3\2\2\u05c8\u05c9\7\u0080\2\2\u05c9\u05cb\5\u00ccg\2\u05ca\u05c7\3\2"+
		"\2\2\u05cb\u05ce\3\2\2\2\u05cc\u05ca\3\2\2\2\u05cc\u05cd\3\2\2\2\u05cd"+
		"\u00cb\3\2\2\2\u05ce\u05cc\3\2\2\2\u05cf\u05d5\5\u00ceh\2\u05d0\u05d1"+
		"\5\u00ceh\2\u05d1\u05d2\7i\2\2\u05d2\u05d3\5v<\2\u05d3\u05d5\3\2\2\2\u05d4"+
		"\u05cf\3\2\2\2\u05d4\u05d0\3\2\2\2\u05d5\u00cd\3\2\2\2\u05d6\u05d8\7\u008c"+
		"\2\2\u05d7\u05d9\5\u00ecw\2\u05d8\u05d7\3\2\2\2\u05d8\u05d9\3\2\2\2\u05d9"+
		"\u00cf\3\2\2\2\u05da\u05de\5\u00d2j\2\u05db\u05de\5\u00d4k\2\u05dc\u05de"+
		"\5\u00d6l\2\u05dd\u05da\3\2\2\2\u05dd\u05db\3\2\2\2\u05dd\u05dc\3\2\2"+
		"\2\u05de\u00d1\3\2\2\2\u05df\u05e1\7(\2\2\u05e0\u05df\3\2\2\2\u05e0\u05e1"+
		"\3\2\2\2\u05e1\u05e2\3\2\2\2\u05e2\u05e4\7,\2\2\u05e3\u05e5\5\u00ecw\2"+
		"\u05e4\u05e3\3\2\2\2\u05e4\u05e5\3\2\2\2\u05e5\u05e6\3\2\2\2\u05e6\u05e7"+
		"\7\u008c\2\2\u05e7\u05e8\7R\2\2\u05e8\u05e9\5\u00dan\2\u05e9\u05ea\7S"+
		"\2\2\u05ea\u00d3\3\2\2\2\u05eb\u05ed\7(\2\2\u05ec\u05eb\3\2\2\2\u05ec"+
		"\u05ed\3\2\2\2\u05ed\u05ee\3\2\2\2\u05ee\u05f0\7,\2\2\u05ef\u05f1\5\u00ec"+
		"w\2\u05f0\u05ef\3\2\2\2\u05f0\u05f1\3\2\2\2\u05f1\u05f2\3\2\2\2\u05f2"+
		"\u05f3\7R\2\2\u05f3\u05f4\5\u00dan\2\u05f4\u05f5\7S\2\2\u05f5\u00d5\3"+
		"\2\2\2\u05f6\u05f7\7,\2\2\u05f7\u05f8\5\u00d8m\2\u05f8\u05f9\7\\\2\2\u05f9"+
		"\u05fa\7\u008c\2\2\u05fa\u05fb\7R\2\2\u05fb\u05fc\5\u00dan\2\u05fc\u05fd"+
		"\7S\2\2\u05fd\u00d7\3\2\2\2\u05fe\u05ff\7\u008c\2\2\u05ff\u0600\5\u00d8"+
		"m\2\u0600\u0601\7\\\2\2\u0601\u0602\7\u008c\2\2\u0602\u00d9\3\2\2\2\u0603"+
		"\u0605\5\u0094K\2\u0604\u0603\3\2\2\2\u0604\u0605\3\2\2\2\u0605\u00db"+
		"\3\2\2\2\u0606\u0607\7,\2\2\u0607\u0608\7\u008c\2\2\u0608\u0609\7i\2\2"+
		"\u0609\u060a\5\u00dep\2\u060a\u060b\7X\2\2\u060b\u00dd\3\2\2\2\u060c\u060e"+
		"\5\24\13\2\u060d\u060c\3\2\2\2\u060d\u060e\3\2\2\2\u060e\u060f\3\2\2\2"+
		"\u060f\u0610\5\2\2\2\u0610\u00df\3\2\2\2\u0611\u0612\7J\2\2\u0612\u0613"+
		"\5\u00e2r\2\u0613\u0614\7X\2\2\u0614\u00e1\3\2\2\2\u0615\u0616\br\1\2"+
		"\u0616\u0618\5\u00e4s\2\u0617\u0619\7Z\2\2\u0618\u0617\3\2\2\2\u0618\u0619"+
		"\3\2\2\2\u0619\u0622\3\2\2\2\u061a\u061b\f\3\2\2\u061b\u061c\7\u0080\2"+
		"\2\u061c\u061e\5\u00e4s\2\u061d\u061f\7Z\2\2\u061e\u061d\3\2\2\2\u061e"+
		"\u061f\3\2\2\2\u061f\u0621\3\2\2\2\u0620\u061a\3\2\2\2\u0621\u0624\3\2"+
		"\2\2\u0622\u0620\3\2\2\2\u0622\u0623\3\2\2\2\u0623\u00e3\3\2\2\2\u0624"+
		"\u0622\3\2\2\2\u0625\u0627\5\u00b8]\2\u0626\u0625\3\2\2\2\u0626\u0627"+
		"\3\2\2\2\u0627\u0628\3\2\2\2\u0628\u0629\5\24\13\2\u0629\u062a\5\20\t"+
		"\2\u062a\u00e5\3\2\2\2\u062b\u062d\5\u00ecw\2\u062c\u062b\3\2\2\2\u062c"+
		"\u062d\3\2\2\2\u062d\u062e\3\2\2\2\u062e\u062f\7J\2\2\u062f\u0631\7,\2"+
		"\2\u0630\u0632\5\24\13\2\u0631\u0630\3\2\2\2\u0631\u0632\3\2\2\2\u0632"+
		"\u0633\3\2\2\2\u0633\u0634\5\2\2\2\u0634\u0635\7X\2\2\u0635\u00e7\3\2"+
		"\2\2\u0636\u0638\5\u00ecw\2\u0637\u0636\3\2\2\2\u0637\u0638\3\2\2\2\u0638"+
		"\u0639\3\2\2\2\u0639\u063a\7\t\2\2\u063a\u063b\7V\2\2\u063b\u063c\7\u0087"+
		"\2\2\u063c\u063d\7W\2\2\u063d\u063e\7X\2\2\u063e\u00e9\3\2\2\2\u063f\u0640"+
		"\7!\2\2\u0640\u0641\7\u0087\2\2\u0641\u0643\7R\2\2\u0642\u0644\5\u0094"+
		"K\2\u0643\u0642\3\2\2\2\u0643\u0644\3\2\2\2\u0644\u0645\3\2\2\2\u0645"+
		"\u064a\7S\2\2\u0646\u0647\7!\2\2\u0647\u0648\7\u0087\2\2\u0648\u064a\5"+
		"\u0096L\2\u0649\u063f\3\2\2\2\u0649\u0646\3\2\2\2\u064a\u00eb\3\2\2\2"+
		"\u064b\u064c\bw\1\2\u064c\u064d\5\u00eex\2\u064d\u0652\3\2\2\2\u064e\u064f"+
		"\f\3\2\2\u064f\u0651\5\u00eex\2\u0650\u064e\3\2\2\2\u0651\u0654\3\2\2"+
		"\2\u0652\u0650\3\2\2\2\u0652\u0653\3\2\2\2\u0653\u00ed\3\2\2\2\u0654\u0652"+
		"\3\2\2\2\u0655\u0656\7T\2\2\u0656\u0658\7T\2\2\u0657\u0659\5\u00f2z\2"+
		"\u0658\u0657\3\2\2\2\u0658\u0659\3\2\2\2\u0659\u065a\3\2\2\2\u065a\u065b"+
		"\5\u00f4{\2\u065b\u065c\7U\2\2\u065c\u065d\7U\2\2\u065d\u0660\3\2\2\2"+
		"\u065e\u0660\5\u00f0y\2\u065f\u0655\3\2\2\2\u065f\u065e\3\2\2\2\u0660"+
		"\u00ef\3\2\2\2\u0661\u0662\7\7\2\2\u0662\u0663\7V\2\2\u0663\u0665\5\u011e"+
		"\u0090\2\u0664\u0666\7Z\2\2\u0665\u0664\3\2\2\2\u0665\u0666\3\2\2\2\u0666"+
		"\u0667\3\2\2\2\u0667\u0668\7W\2\2\u0668\u0672\3\2\2\2\u0669\u066a\7\7"+
		"\2\2\u066a\u066b\7W\2\2\u066b\u066d\5v<\2\u066c\u066e\7Z\2\2\u066d\u066c"+
		"\3\2\2\2\u066d\u066e\3\2\2\2\u066e\u066f\3\2\2\2\u066f\u0670\7W\2\2\u0670"+
		"\u0672\3\2\2\2\u0671\u0661\3\2\2\2\u0671\u0669\3\2\2\2\u0672\u00f1\3\2"+
		"\2\2\u0673\u0674\7J\2\2\u0674\u0675\5\u00fc\177\2\u0675\u0676\7Y\2\2\u0676"+
		"\u00f3\3\2\2\2\u0677\u0679\b{\1\2\u0678\u067a\5\u00f6|\2\u0679\u0678\3"+
		"\2\2\2\u0679\u067a\3\2\2\2\u067a\u067f\3\2\2\2\u067b\u067c\5\u00f6|\2"+
		"\u067c\u067d\7Z\2\2\u067d\u067f\3\2\2\2\u067e\u0677\3\2\2\2\u067e\u067b"+
		"\3\2\2\2\u067f\u068c\3\2\2\2\u0680\u0681\f\5\2\2\u0681\u0683\7\u0080\2"+
		"\2\u0682\u0684\5\u00f6|\2\u0683\u0682\3\2\2\2\u0683\u0684\3\2\2\2\u0684"+
		"\u068b\3\2\2\2\u0685\u0686\f\3\2\2\u0686\u0687\7\u0080\2\2\u0687\u0688"+
		"\5\u00f6|\2\u0688\u0689\7Z\2\2\u0689\u068b\3\2\2\2\u068a\u0680\3\2\2\2"+
		"\u068a\u0685\3\2\2\2\u068b\u068e\3\2\2\2\u068c\u068a\3\2\2\2\u068c\u068d"+
		"\3\2\2\2\u068d\u00f5\3\2\2\2\u068e\u068c\3\2\2\2\u068f\u0691\5\u00f8}"+
		"\2\u0690\u0692\5\u00fe\u0080\2\u0691\u0690\3\2\2\2\u0691\u0692\3\2\2\2"+
		"\u0692\u00f7\3\2\2\2\u0693\u0696\7\u008c\2\2\u0694\u0696\5\u00fa~\2\u0695"+
		"\u0693\3\2\2\2\u0695\u0694\3\2\2\2\u0696\u00f9\3\2\2\2\u0697\u0698\5\u00fc"+
		"\177\2\u0698\u0699\7\\\2\2\u0699\u069a\7\u008c\2\2\u069a\u00fb\3\2\2\2"+
		"\u069b\u069c\7\u008c\2\2\u069c\u00fd\3\2\2\2\u069d\u069f\7V\2\2\u069e"+
		"\u06a0\5\u0100\u0081\2\u069f\u069e\3\2\2\2\u069f\u06a0\3\2\2\2\u06a0\u06a1"+
		"\3\2\2\2\u06a1\u06a2\7W\2\2\u06a2\u00ff\3\2\2\2\u06a3\u06a4\b\u0081\1"+
		"\2\u06a4\u06a5\5\u0102\u0082\2\u06a5\u06aa\3\2\2\2\u06a6\u06a7\f\3\2\2"+
		"\u06a7\u06a9\5\u0102\u0082\2\u06a8\u06a6\3\2\2\2\u06a9\u06ac\3\2\2\2\u06aa"+
		"\u06a8\3\2\2\2\u06aa\u06ab\3\2\2\2\u06ab\u0101\3\2\2\2\u06ac\u06aa\3\2"+
		"\2\2\u06ad\u06af\7V\2\2\u06ae\u06b0\5\u0100\u0081\2\u06af\u06ae\3\2\2"+
		"\2\u06af\u06b0\3\2\2\2\u06b0\u06b1\3\2\2\2\u06b1\u06be\7W\2\2\u06b2\u06b4"+
		"\7T\2\2\u06b3\u06b5\5\u0100\u0081\2\u06b4\u06b3\3\2\2\2\u06b4\u06b5\3"+
		"\2\2\2\u06b5\u06b6\3\2\2\2\u06b6\u06be\7U\2\2\u06b7\u06b9\7R\2\2\u06b8"+
		"\u06ba\5\u0100\u0081\2\u06b9\u06b8\3\2\2\2\u06b9\u06ba\3\2\2\2\u06ba\u06bb"+
		"\3\2\2\2\u06bb\u06be\7S\2\2\u06bc\u06be\n\13\2\2\u06bd\u06ad\3\2\2\2\u06bd"+
		"\u06b2\3\2\2\2\u06bd\u06b7\3\2\2\2\u06bd\u06bc\3\2\2\2\u06be\u0103\3\2"+
		"\2\2\u06bf\u06c0\b\u0083\1\2\u06c0\u06c1\5\u0106\u0084\2\u06c1\u06c7\3"+
		"\2\2\2\u06c2\u06c3\f\3\2\2\u06c3\u06c4\7\u0080\2\2\u06c4\u06c6\5\u0106"+
		"\u0084\2\u06c5\u06c2\3\2\2\2\u06c6\u06c9\3\2\2\2\u06c7\u06c5\3\2\2\2\u06c7"+
		"\u06c8\3\2\2\2\u06c8\u0105\3\2\2\2\u06c9\u06c7\3\2\2\2\u06ca\u06cc\5\u0108"+
		"\u0085\2\u06cb\u06cd\5\u013e\u00a0\2\u06cc\u06cb\3\2\2\2\u06cc\u06cd\3"+
		"\2\2\2\u06cd\u0107\3\2\2\2\u06ce\u06d1\5\u010a\u0086\2\u06cf\u06d1\5\u010c"+
		"\u0087\2\u06d0\u06ce\3\2\2\2\u06d0\u06cf\3\2\2\2\u06d1\u0109\3\2\2\2\u06d2"+
		"\u06d3\5\u0116\u008c\2\u06d3\u06d4\5\u0108\u0085\2\u06d4\u010b\3\2\2\2"+
		"\u06d5\u06d7\b\u0087\1\2\u06d6\u06d8\7Z\2\2\u06d7\u06d6\3\2\2\2\u06d7"+
		"\u06d8\3\2\2\2\u06d8\u06d9\3\2\2\2\u06d9\u06db\5\16\b\2\u06da\u06dc\5"+
		"\u00ecw\2\u06db\u06da\3\2\2\2\u06db\u06dc\3\2\2\2\u06dc\u06e2\3\2\2\2"+
		"\u06dd\u06de\7V\2\2\u06de\u06df\5\u010a\u0086\2\u06df\u06e0\7W\2\2\u06e0"+
		"\u06e2\3\2\2\2\u06e1\u06d5\3\2\2\2\u06e1\u06dd\3\2\2\2\u06e2\u06f0\3\2"+
		"\2\2\u06e3\u06e4\f\5\2\2\u06e4\u06e6\7T\2\2\u06e5\u06e7\5v<\2\u06e6\u06e5"+
		"\3\2\2\2\u06e6\u06e7\3\2\2\2\u06e7\u06e8\3\2\2\2\u06e8\u06ea\7U\2\2\u06e9"+
		"\u06eb\5\u00ecw\2\u06ea\u06e9\3\2\2\2\u06ea\u06eb\3\2\2\2\u06eb\u06ef"+
		"\3\2\2\2\u06ec\u06ed\f\4\2\2\u06ed\u06ef\5\u010e\u0088\2\u06ee\u06e3\3"+
		"\2\2\2\u06ee\u06ec\3\2\2\2\u06ef\u06f2\3\2\2\2\u06f0\u06ee\3\2\2\2\u06f0"+
		"\u06f1\3\2\2\2\u06f1\u010d\3\2\2\2\u06f2\u06f0\3\2\2\2\u06f3\u06f4\5\u0110"+
		"\u0089\2\u06f4\u06f5\5\u0112\u008a\2\u06f5\u010f\3\2\2\2\u06f6\u06f7\7"+
		"V\2\2\u06f7\u06f8\5\u012c\u0097\2\u06f8\u06f9\7W\2\2\u06f9\u0111\3\2\2"+
		"\2\u06fa\u06fc\5\u0118\u008d\2\u06fb\u06fa\3\2\2\2\u06fb\u06fc\3\2\2\2"+
		"\u06fc\u06fe\3\2\2\2\u06fd\u06ff\5\u011c\u008f\2\u06fe\u06fd\3\2\2\2\u06fe"+
		"\u06ff\3\2\2\2\u06ff\u0701\3\2\2\2\u0700\u0702\5\u01a4\u00d3\2\u0701\u0700"+
		"\3\2\2\2\u0701\u0702\3\2\2\2\u0702\u0704\3\2\2\2\u0703\u0705\5\u00ecw"+
		"\2\u0704\u0703\3\2\2\2\u0704\u0705\3\2\2\2\u0705\u0113\3\2\2\2\u0706\u0707"+
		"\7\u0082\2\2\u0707\u0708\5\u011e\u0090\2\u0708\u0115\3\2\2\2\u0709\u070b"+
		"\7a\2\2\u070a\u070c\5\u00ecw\2\u070b\u070a\3\2\2\2\u070b\u070c\3\2\2\2"+
		"\u070c\u070e\3\2\2\2\u070d\u070f\5\u0118\u008d\2\u070e\u070d\3\2\2\2\u070e"+
		"\u070f\3\2\2\2\u070f\u0721\3\2\2\2\u0710\u0712\7e\2\2\u0711\u0713\5\u00ec"+
		"w\2\u0712\u0711\3\2\2\2\u0712\u0713\3\2\2\2\u0713\u0721\3\2\2\2\u0714"+
		"\u0716\7|\2\2\u0715\u0717\5\u00ecw\2\u0716\u0715\3\2\2\2\u0716\u0717\3"+
		"\2\2\2\u0717\u0721\3\2\2\2\u0718\u0719\5\24\13\2\u0719\u071b\7a\2\2\u071a"+
		"\u071c\5\u00ecw\2\u071b\u071a\3\2\2\2\u071b\u071c\3\2\2\2\u071c\u071e"+
		"\3\2\2\2\u071d\u071f\5\u0118\u008d\2\u071e\u071d\3\2\2\2\u071e\u071f\3"+
		"\2\2\2\u071f\u0721\3\2\2\2\u0720\u0709\3\2\2\2\u0720\u0710\3\2\2\2\u0720"+
		"\u0714\3\2\2\2\u0720\u0718\3\2\2\2\u0721\u0117\3\2\2\2\u0722\u0724\5\u011a"+
		"\u008e\2\u0723\u0725\5\u0118\u008d\2\u0724\u0723\3\2\2\2\u0724\u0725\3"+
		"\2\2\2\u0725\u0119\3\2\2\2\u0726\u0727\t\f\2\2\u0727\u011b\3\2\2\2\u0728"+
		"\u0729\7e\2\2\u0729\u072a\7|\2\2\u072a\u011d\3\2\2\2\u072b\u072d\5\u00b0"+
		"Y\2\u072c\u072e\5\u0122\u0092\2\u072d\u072c\3\2\2\2\u072d\u072e\3\2\2"+
		"\2\u072e\u011f\3\2\2\2\u072f\u0731\5\u00b4[\2\u0730\u0732\5\u0122\u0092"+
		"\2\u0731\u0730\3\2\2\2\u0731\u0732\3\2\2\2\u0732\u0121\3\2\2\2\u0733\u073c"+
		"\5\u0124\u0093\2\u0734\u0736\5\u0126\u0094\2\u0735\u0734\3\2\2\2\u0735"+
		"\u0736\3\2\2\2\u0736\u0737\3\2\2\2\u0737\u0738\5\u010e\u0088\2\u0738\u0739"+
		"\5\u0114\u008b\2\u0739\u073c\3\2\2\2\u073a\u073c\5\u0128\u0095\2\u073b"+
		"\u0733\3\2\2\2\u073b\u0735\3\2\2\2\u073b\u073a\3\2\2\2\u073c\u0123\3\2"+
		"\2\2\u073d\u0743\5\u0126\u0094\2\u073e\u0740\5\u0116\u008c\2\u073f\u0741"+
		"\5\u0124\u0093\2\u0740\u073f\3\2\2\2\u0740\u0741\3\2\2\2\u0741\u0743\3"+
		"\2\2\2\u0742\u073d\3\2\2\2\u0742\u073e\3\2\2\2\u0743\u0125\3\2\2\2\u0744"+
		"\u0745\b\u0094\1\2\u0745\u0753\5\u010e\u0088\2\u0746\u0748\7T\2\2\u0747"+
		"\u0749\5v<\2\u0748\u0747\3\2\2\2\u0748\u0749\3\2\2\2\u0749\u074a\3\2\2"+
		"\2\u074a\u074c\7U\2\2\u074b\u074d\5\u00ecw\2\u074c\u074b\3\2\2\2\u074c"+
		"\u074d\3\2\2\2\u074d\u0753\3\2\2\2\u074e\u074f\7V\2\2\u074f\u0750\5\u0124"+
		"\u0093\2\u0750\u0751\7W\2\2\u0751\u0753\3\2\2\2\u0752\u0744\3\2\2\2\u0752"+
		"\u0746\3\2\2\2\u0752\u074e\3\2\2\2\u0753\u0761\3\2\2\2\u0754\u0755\f\6"+
		"\2\2\u0755\u0760\5\u010e\u0088\2\u0756\u0757\f\4\2\2\u0757\u0759\7T\2"+
		"\2\u0758\u075a\5v<\2\u0759\u0758\3\2\2\2\u0759\u075a\3\2\2\2\u075a\u075b"+
		"\3\2\2\2\u075b\u075d\7U\2\2\u075c\u075e\5\u00ecw\2\u075d\u075c\3\2\2\2"+
		"\u075d\u075e\3\2\2\2\u075e\u0760\3\2\2\2\u075f\u0754\3\2\2\2\u075f\u0756"+
		"\3\2\2\2\u0760\u0763\3\2\2\2\u0761\u075f\3\2\2\2\u0761\u0762\3\2\2\2\u0762"+
		"\u0127\3\2\2\2\u0763\u0761\3\2\2\2\u0764\u0769\5\u012a\u0096\2\u0765\u0766"+
		"\5\u0116\u008c\2\u0766\u0767\5\u0128\u0095\2\u0767\u0769\3\2\2\2\u0768"+
		"\u0764\3\2\2\2\u0768\u0765\3\2\2\2\u0769\u0129\3\2\2\2\u076a\u076b\b\u0096"+
		"\1\2\u076b\u076c\7Z\2\2\u076c\u077a\3\2\2\2\u076d\u076e\f\5\2\2\u076e"+
		"\u0779\5\u010e\u0088\2\u076f\u0770\f\4\2\2\u0770\u0772\7T\2\2\u0771\u0773"+
		"\5v<\2\u0772\u0771\3\2\2\2\u0772\u0773\3\2\2\2\u0773\u0774\3\2\2\2\u0774"+
		"\u0776\7U\2\2\u0775\u0777\5\u00ecw\2\u0776\u0775\3\2\2\2\u0776\u0777\3"+
		"\2\2\2\u0777\u0779\3\2\2\2\u0778\u076d\3\2\2\2\u0778\u076f\3\2\2\2\u0779"+
		"\u077c\3\2\2\2\u077a\u0778\3\2\2\2\u077a\u077b\3\2\2\2\u077b\u012b\3\2"+
		"\2\2\u077c\u077a\3\2\2\2\u077d\u077f\5\u012e\u0098\2\u077e\u077d\3\2\2"+
		"\2\u077e\u077f\3\2\2\2\u077f\u0781\3\2\2\2\u0780\u0782\7Z\2\2\u0781\u0780"+
		"\3\2\2\2\u0781\u0782\3\2\2\2\u0782\u0788\3\2\2\2\u0783\u0784\5\u012e\u0098"+
		"\2\u0784\u0785\7\u0080\2\2\u0785\u0786\7Z\2\2\u0786\u0788\3\2\2\2\u0787"+
		"\u077e\3\2\2\2\u0787\u0783\3\2\2\2\u0788\u012d\3\2\2\2\u0789\u078a\b\u0098"+
		"\1\2\u078a\u078b\5\u0130\u0099\2\u078b\u0791\3\2\2\2\u078c\u078d\f\3\2"+
		"\2\u078d\u078e\7\u0080\2\2\u078e\u0790\5\u0130\u0099\2\u078f\u078c\3\2"+
		"\2\2\u0790\u0793\3\2\2\2\u0791\u078f\3\2\2\2\u0791\u0792\3\2\2\2\u0792"+
		"\u012f\3\2\2\2\u0793\u0791\3\2\2\2\u0794\u0796\5\u00ecw\2\u0795\u0794"+
		"\3\2\2\2\u0795\u0796\3\2\2\2\u0796\u0797\3\2\2\2\u0797\u0798\5\u00a8U"+
		"\2\u0798\u0799\5\u0108\u0085\2\u0799\u07a3\3\2\2\2\u079a\u079c\5\u00ec"+
		"w\2\u079b\u079a\3\2\2\2\u079b\u079c\3\2\2\2\u079c\u079d\3\2\2\2\u079d"+
		"\u079e\5\u00a8U\2\u079e\u079f\5\u0108\u0085\2\u079f\u07a0\7i\2\2\u07a0"+
		"\u07a1\5\u0142\u00a2\2\u07a1\u07a3\3\2\2\2\u07a2\u0795\3\2\2\2\u07a2\u079b"+
		"\3\2\2\2\u07a3\u0131\3\2\2\2\u07a4\u07a6\5\u00ecw\2\u07a5\u07a4\3\2\2"+
		"\2\u07a5\u07a6\3\2\2\2\u07a6\u07a8\3\2\2\2\u07a7\u07a9\5\u00a8U\2\u07a8"+
		"\u07a7\3\2\2\2\u07a8\u07a9\3\2\2\2\u07a9\u07aa\3\2\2\2\u07aa\u07ac\5\u0134"+
		"\u009b\2\u07ab\u07ad\5\u015c\u00af\2\u07ac\u07ab\3\2\2\2\u07ac\u07ad\3"+
		"\2\2\2\u07ad\u07ae\3\2\2\2\u07ae\u07af\5\u0136\u009c\2\u07af\u0133\3\2"+
		"\2\2\u07b0\u07b1\5\16\b\2\u07b1\u07b2\5\u0110\u0089\2\u07b2\u07b4\5\u0112"+
		"\u008a\2\u07b3\u07b5\5\u0114\u008b\2\u07b4\u07b3\3\2\2\2\u07b4\u07b5\3"+
		"\2\2\2\u07b5\u0135\3\2\2\2\u07b6\u07bb\5\u0138\u009d\2\u07b7\u07bb\5\u019c"+
		"\u00cf\2\u07b8\u07bb\5\u013a\u009e\2\u07b9\u07bb\5\u013c\u009f\2\u07ba"+
		"\u07b6\3\2\2\2\u07ba\u07b7\3\2\2\2\u07ba\u07b8\3\2\2\2\u07ba\u07b9\3\2"+
		"\2\2\u07bb\u0137\3\2\2\2\u07bc\u07be\5\u0172\u00ba\2\u07bd\u07bc\3\2\2"+
		"\2\u07bd\u07be\3\2\2\2\u07be\u07bf\3\2\2\2\u07bf\u07c0\5\u0082B\2\u07c0"+
		"\u0139\3\2\2\2\u07c1\u07c2\7i\2\2\u07c2\u07c3\7\30\2\2\u07c3\u07c4\7X"+
		"\2\2\u07c4\u013b\3\2\2\2\u07c5\u07c6\7i\2\2\u07c6\u07c7\7\31\2\2\u07c7"+
		"\u07c8\7X\2\2\u07c8\u013d\3\2\2\2\u07c9\u07ca\5\u0140\u00a1\2\u07ca\u013f"+
		"\3\2\2\2\u07cb\u07cc\7i\2\2\u07cc\u07cf\5\u0142\u00a2\2\u07cd\u07cf\5"+
		"\u0146\u00a4\2\u07ce\u07cb\3\2\2\2\u07ce\u07cd\3\2\2\2\u07cf\u0141\3\2"+
		"\2\2\u07d0\u07d3\5p9\2\u07d1\u07d3\5\u0146\u00a4\2\u07d2\u07d0\3\2\2\2"+
		"\u07d2\u07d1\3\2\2\2\u07d3\u0143\3\2\2\2\u07d4\u07d5\b\u00a3\1\2\u07d5"+
		"\u07d7\5\u0142\u00a2\2\u07d6\u07d8\7Z\2\2\u07d7\u07d6\3\2\2\2\u07d7\u07d8"+
		"\3\2\2\2\u07d8\u07e1\3\2\2\2\u07d9\u07da\f\3\2\2\u07da\u07db\7\u0080\2"+
		"\2\u07db\u07dd\5\u0142\u00a2\2\u07dc\u07de\7Z\2\2\u07dd\u07dc\3\2\2\2"+
		"\u07dd\u07de\3\2\2\2\u07de\u07e0\3\2\2\2\u07df\u07d9\3\2\2\2\u07e0\u07e3"+
		"\3\2\2\2\u07e1\u07df\3\2\2\2\u07e1\u07e2\3\2\2\2\u07e2\u0145\3\2\2\2\u07e3"+
		"\u07e1\3\2\2\2\u07e4\u07e5\7R\2\2\u07e5\u07e7\5\u0144\u00a3\2\u07e6\u07e8"+
		"\7\u0080\2\2\u07e7\u07e6\3\2\2\2\u07e7\u07e8\3\2\2\2\u07e8\u07e9\3\2\2"+
		"\2\u07e9\u07ea\7S\2\2\u07ea\u07ee\3\2\2\2\u07eb\u07ec\7R\2\2\u07ec\u07ee"+
		"\7S\2\2\u07ed\u07e4\3\2\2\2\u07ed\u07eb\3\2\2\2\u07ee\u0147\3\2\2\2\u07ef"+
		"\u07f2\5t;\2\u07f0\u07f2\5\u0146\u00a4\2\u07f1\u07ef\3\2\2\2\u07f1\u07f0"+
		"\3\2\2\2\u07f2\u0149\3\2\2\2\u07f3\u07f4\5\u014c\u00a7\2\u07f4\u07f6\7"+
		"R\2\2\u07f5\u07f7\5\u0154\u00ab\2\u07f6\u07f5\3\2\2\2\u07f6\u07f7\3\2"+
		"\2\2\u07f7\u07f8\3\2\2\2\u07f8\u07f9\7S\2\2\u07f9\u014b\3\2\2\2\u07fa"+
		"\u07fc\5\u0152\u00aa\2\u07fb\u07fd\5\u00ecw\2\u07fc\u07fb\3\2\2\2\u07fc"+
		"\u07fd\3\2\2\2\u07fd\u07fe\3\2\2\2\u07fe\u0800\5\u014e\u00a8\2\u07ff\u0801"+
		"\5\u0150\u00a9\2\u0800\u07ff\3\2\2\2\u0800\u0801\3\2\2\2\u0801\u0803\3"+
		"\2\2\2\u0802\u0804\5\u0162\u00b2\2\u0803\u0802\3\2\2\2\u0803\u0804\3\2"+
		"\2\2\u0804\u080d\3\2\2\2\u0805\u0807\5\u0152\u00aa\2\u0806\u0808\5\u00ee"+
		"x\2\u0807\u0806\3\2\2\2\u0807\u0808\3\2\2\2\u0808\u080a\3\2\2\2\u0809"+
		"\u080b\5\u0162\u00b2\2\u080a\u0809\3\2\2\2\u080a\u080b\3\2\2\2\u080b\u080d"+
		"\3\2\2\2\u080c\u07fa\3\2\2\2\u080c\u0805\3\2\2\2\u080d\u014d\3\2\2\2\u080e"+
		"\u0810\5\24\13\2\u080f\u080e\3\2\2\2\u080f\u0810\3\2\2\2\u0810\u0811\3"+
		"\2\2\2\u0811\u0812\5\6\4\2\u0812\u014f\3\2\2\2\u0813\u0814\7Q\2\2\u0814"+
		"\u0151\3\2\2\2\u0815\u0816\t\r\2\2\u0816\u0153\3\2\2\2\u0817\u0819\5\u0156"+
		"\u00ac\2\u0818\u081a\5\u0154\u00ab\2\u0819\u0818\3\2\2\2\u0819\u081a\3"+
		"\2\2\2\u081a\u0821\3\2\2\2\u081b\u081c\5\u016a\u00b6\2\u081c\u081e\7Y"+
		"\2\2\u081d\u081f\5\u0154\u00ab\2\u081e\u081d\3\2\2\2\u081e\u081f\3\2\2"+
		"\2\u081f\u0821\3\2\2\2\u0820\u0817\3\2\2\2\u0820\u081b\3\2\2\2\u0821\u0155"+
		"\3\2\2\2\u0822\u0824\5\u00ecw\2\u0823\u0822\3\2\2\2\u0823\u0824\3\2\2"+
		"\2\u0824\u0826\3\2\2\2\u0825\u0827\5\u00a8U\2\u0826\u0825\3\2\2\2\u0826"+
		"\u0827\3\2\2\2\u0827\u0829\3\2\2\2\u0828\u082a\5\u0158\u00ad\2\u0829\u0828"+
		"\3\2\2\2\u0829\u082a\3\2\2\2\u082a\u082b\3\2\2\2\u082b\u0834\7X\2\2\u082c"+
		"\u0834\5\u0132\u009a\2\u082d\u0834\5\u00e0q\2\u082e\u0834\5\u00a0Q\2\u082f"+
		"\u0834\5\u0180\u00c1\2\u0830\u0834\5\u0198\u00cd\2\u0831\u0834\5\u009c"+
		"O\2\u0832\u0834\5\u00a2R\2\u0833\u0823\3\2\2\2\u0833\u082c\3\2\2\2\u0833"+
		"\u082d\3\2\2\2\u0833\u082e\3\2\2\2\u0833\u082f\3\2\2\2\u0833\u0830\3\2"+
		"\2\2\u0833\u0831\3\2\2\2\u0833\u0832\3\2\2\2\u0834\u0157\3\2\2\2\u0835"+
		"\u0836\b\u00ad\1\2\u0836\u0837\5\u015a\u00ae\2\u0837\u083d\3\2\2\2\u0838"+
		"\u0839\f\3\2\2\u0839\u083a\7\u0080\2\2\u083a\u083c\5\u015a\u00ae\2\u083b"+
		"\u0838\3\2\2\2\u083c\u083f\3\2\2\2\u083d\u083b\3\2\2\2\u083d\u083e\3\2"+
		"\2\2\u083e\u0159\3\2\2\2\u083f\u083d\3\2\2\2\u0840\u0842\5\u0108\u0085"+
		"\2\u0841\u0843\5\u015c\u00af\2\u0842\u0841\3\2\2\2\u0842\u0843\3\2\2\2"+
		"\u0843\u0845\3\2\2\2\u0844\u0846\5\u0160\u00b1\2\u0845\u0844\3\2\2\2\u0845"+
		"\u0846\3\2\2\2\u0846\u0854\3\2\2\2\u0847\u0849\5\u0108\u0085\2\u0848\u084a"+
		"\5\u0140\u00a1\2\u0849\u0848\3\2\2\2\u0849\u084a\3\2\2\2\u084a\u0854\3"+
		"\2\2\2\u084b\u084d\7\u008c\2\2\u084c\u084b\3\2\2\2\u084c\u084d\3\2\2\2"+
		"\u084d\u084f\3\2\2\2\u084e\u0850\5\u00ecw\2\u084f\u084e\3\2\2\2\u084f"+
		"\u0850\3\2\2\2\u0850\u0851\3\2\2\2\u0851\u0852\7Y\2\2\u0852\u0854\5v<"+
		"\2\u0853\u0840\3\2\2\2\u0853\u0847\3\2\2\2\u0853\u084c\3\2\2\2\u0854\u015b"+
		"\3\2\2\2\u0855\u0856\b\u00af\1\2\u0856\u0857\5\u015e\u00b0\2\u0857\u085c"+
		"\3\2\2\2\u0858\u0859\f\3\2\2\u0859\u085b\5\u015e\u00b0\2\u085a\u0858\3"+
		"\2\2\2\u085b\u085e\3\2\2\2\u085c\u085a\3\2\2\2\u085c\u085d\3\2\2\2\u085d"+
		"\u015d\3\2\2\2\u085e\u085c\3\2\2\2\u085f\u0860\t\16\2\2\u0860\u015f\3"+
		"\2\2\2\u0861\u0862\7i\2\2\u0862\u0863\7\u0083\2\2\u0863\u0161\3\2\2\2"+
		"\u0864\u0865\7Y\2\2\u0865\u0866\5\u0164\u00b3\2\u0866\u0163\3\2\2\2\u0867"+
		"\u0868\b\u00b3\1\2\u0868\u086a\5\u0166\u00b4\2\u0869\u086b\7Z\2\2\u086a"+
		"\u0869\3\2\2\2\u086a\u086b\3\2\2\2\u086b\u0874\3\2\2\2\u086c\u086d\f\3"+
		"\2\2\u086d\u086e\7\u0080\2\2\u086e\u0870\5\u0166\u00b4\2\u086f\u0871\7"+
		"Z\2\2\u0870\u086f\3\2\2\2\u0870\u0871\3\2\2\2\u0871\u0873\3\2\2\2\u0872"+
		"\u086c\3\2\2\2\u0873\u0876\3\2\2\2\u0874\u0872\3\2\2\2\u0874\u0875\3\2"+
		"\2\2\u0875\u0165\3\2\2\2\u0876\u0874\3\2\2\2\u0877\u0879\5\u00ecw\2\u0878"+
		"\u0877\3\2\2\2\u0878\u0879\3\2\2\2\u0879\u087a\3\2\2\2\u087a\u088d\5\u0168"+
		"\u00b5\2\u087b\u087d\5\u00ecw\2\u087c\u087b\3\2\2\2\u087c\u087d\3\2\2"+
		"\2\u087d\u087e\3\2\2\2\u087e\u0880\7K\2\2\u087f\u0881\5\u016a\u00b6\2"+
		"\u0880\u087f\3\2\2\2\u0880\u0881\3\2\2\2\u0881\u0882\3\2\2\2\u0882\u088d"+
		"\5\u0168\u00b5\2\u0883\u0885\5\u00ecw\2\u0884\u0883\3\2\2\2\u0884\u0885"+
		"\3\2\2\2\u0885\u0886\3\2\2\2\u0886\u0888\5\u016a\u00b6\2\u0887\u0889\7"+
		"K\2\2\u0888\u0887\3\2\2\2\u0888\u0889\3\2\2\2\u0889\u088a\3\2\2\2\u088a"+
		"\u088b\5\u0168\u00b5\2\u088b\u088d\3\2\2\2\u088c\u0878\3\2\2\2\u088c\u087c"+
		"\3\2\2\2\u088c\u0884\3\2\2\2\u088d\u0167\3\2\2\2\u088e\u0890\5\24\13\2"+
		"\u088f\u088e\3\2\2\2\u088f\u0890\3\2\2\2\u0890\u0891\3\2\2\2\u0891\u0898"+
		"\5\6\4\2\u0892\u0893\5\24\13\2\u0893\u0894\7?\2\2\u0894\u0895\5\u018a"+
		"\u00c6\2\u0895\u0898\3\2\2\2\u0896\u0898\5\u00ba^\2\u0897\u088f\3\2\2"+
		"\2\u0897\u0892\3\2\2\2\u0897\u0896\3\2\2\2\u0898\u0169\3\2\2\2\u0899\u089a"+
		"\t\17\2\2\u089a\u016b\3\2\2\2\u089b\u089c\7\60\2\2\u089c\u089d\5\u016e"+
		"\u00b8\2\u089d\u016d\3\2\2\2\u089e\u08a0\5\u00b0Y\2\u089f\u08a1\5\u0170"+
		"\u00b9\2\u08a0\u089f\3\2\2\2\u08a0\u08a1\3\2\2\2\u08a1\u016f\3\2\2\2\u08a2"+
		"\u08a4\5\u0116\u008c\2\u08a3\u08a5\5\u0170\u00b9\2\u08a4\u08a3\3\2\2\2"+
		"\u08a4\u08a5\3\2\2\2\u08a5\u0171\3\2\2\2\u08a6\u08a7\7Y\2\2\u08a7\u08a8"+
		"\5\u0174\u00bb\2\u08a8\u0173\3\2\2\2\u08a9\u08aa\b\u00bb\1\2\u08aa\u08ac"+
		"\5\u0176\u00bc\2\u08ab\u08ad\7Z\2\2\u08ac\u08ab\3\2\2\2\u08ac\u08ad\3"+
		"\2\2\2\u08ad\u08b6\3\2\2\2\u08ae\u08af\f\3\2\2\u08af\u08b0\7\u0080\2\2"+
		"\u08b0\u08b2\5\u0176\u00bc\2\u08b1\u08b3\7Z\2\2\u08b2\u08b1\3\2\2\2\u08b2"+
		"\u08b3\3\2\2\2\u08b3\u08b5\3\2\2\2\u08b4\u08ae\3\2\2\2\u08b5\u08b8\3\2"+
		"\2\2\u08b6\u08b4\3\2\2\2\u08b6\u08b7\3\2\2\2\u08b7\u0175\3\2\2\2\u08b8"+
		"\u08b6\3\2\2\2\u08b9\u08ba\5\u0178\u00bd\2\u08ba\u08bc\7V\2\2\u08bb\u08bd"+
		"\5<\37\2\u08bc\u08bb\3\2\2\2\u08bc\u08bd\3\2\2\2\u08bd\u08be\3\2\2\2\u08be"+
		"\u08bf\7W\2\2\u08bf\u08c0\5\u0178\u00bd\2\u08c0\u08c1\5\u0146\u00a4\2"+
		"\u08c1\u0177\3\2\2\2\u08c2\u08c5\5\u0168\u00b5\2\u08c3\u08c5\7\u008c\2"+
		"\2\u08c4\u08c2\3\2\2\2\u08c4\u08c3\3\2\2\2\u08c5\u0179\3\2\2\2\u08c6\u08c7"+
		"\7\60\2\2\u08c7\u08c8\5\u017c\u00bf\2\u08c8\u017b\3\2\2\2\u08c9\u08fa"+
		"\7-\2\2\u08ca\u08fa\7\31\2\2\u08cb\u08cc\7-\2\2\u08cc\u08cd\7R\2\2\u08cd"+
		"\u08fa\7U\2\2\u08ce\u08cf\7\31\2\2\u08cf\u08d0\7R\2\2\u08d0\u08fa\7U\2"+
		"\2\u08d1\u08fa\7_\2\2\u08d2\u08fa\7`\2\2\u08d3\u08fa\7a\2\2\u08d4\u08fa"+
		"\7b\2\2\u08d5\u08fa\7c\2\2\u08d6\u08fa\7d\2\2\u08d7\u08fa\7e\2\2\u08d8"+
		"\u08fa\7f\2\2\u08d9\u08fa\7g\2\2\u08da\u08fa\7h\2\2\u08db\u08fa\7i\2\2"+
		"\u08dc\u08fa\7j\2\2\u08dd\u08fa\7k\2\2\u08de\u08fa\7l\2\2\u08df\u08fa"+
		"\7m\2\2\u08e0\u08fa\7n\2\2\u08e1\u08fa\7o\2\2\u08e2\u08fa\7p\2\2\u08e3"+
		"\u08fa\7q\2\2\u08e4\u08fa\7r\2\2\u08e5\u08fa\7s\2\2\u08e6\u08fa\7t\2\2"+
		"\u08e7\u08fa\7u\2\2\u08e8\u08fa\7w\2\2\u08e9\u08fa\7v\2\2\u08ea\u08fa"+
		"\7x\2\2\u08eb\u08fa\7y\2\2\u08ec\u08fa\7z\2\2\u08ed\u08fa\7{\2\2\u08ee"+
		"\u08fa\7|\2\2\u08ef\u08fa\7}\2\2\u08f0\u08fa\7~\2\2\u08f1\u08fa\7\177"+
		"\2\2\u08f2\u08fa\7\u0080\2\2\u08f3\u08fa\7\u0081\2\2\u08f4\u08fa\7\u0082"+
		"\2\2\u08f5\u08f6\7V\2\2\u08f6\u08fa\7W\2\2\u08f7\u08f8\7T\2\2\u08f8\u08fa"+
		"\7U\2\2\u08f9\u08c9\3\2\2\2\u08f9\u08ca\3\2\2\2\u08f9\u08cb\3\2\2\2\u08f9"+
		"\u08ce\3\2\2\2\u08f9\u08d1\3\2\2\2\u08f9\u08d2\3\2\2\2\u08f9\u08d3\3\2"+
		"\2\2\u08f9\u08d4\3\2\2\2\u08f9\u08d5\3\2\2\2\u08f9\u08d6\3\2\2\2\u08f9"+
		"\u08d7\3\2\2\2\u08f9\u08d8\3\2\2\2\u08f9\u08d9\3\2\2\2\u08f9\u08da\3\2"+
		"\2\2\u08f9\u08db\3\2\2\2\u08f9\u08dc\3\2\2\2\u08f9\u08dd\3\2\2\2\u08f9"+
		"\u08de\3\2\2\2\u08f9\u08df\3\2\2\2\u08f9\u08e0\3\2\2\2\u08f9\u08e1\3\2"+
		"\2\2\u08f9\u08e2\3\2\2\2\u08f9\u08e3\3\2\2\2\u08f9\u08e4\3\2\2\2\u08f9"+
		"\u08e5\3\2\2\2\u08f9\u08e6\3\2\2\2\u08f9\u08e7\3\2\2\2\u08f9\u08e8\3\2"+
		"\2\2\u08f9\u08e9\3\2\2\2\u08f9\u08ea\3\2\2\2\u08f9\u08eb\3\2\2\2\u08f9"+
		"\u08ec\3\2\2\2\u08f9\u08ed\3\2\2\2\u08f9\u08ee\3\2\2\2\u08f9\u08ef\3\2"+
		"\2\2\u08f9\u08f0\3\2\2\2\u08f9\u08f1\3\2\2\2\u08f9\u08f2\3\2\2\2\u08f9"+
		"\u08f3\3\2\2\2\u08f9\u08f4\3\2\2\2\u08f9\u08f5\3\2\2\2\u08f9\u08f7\3\2"+
		"\2\2\u08fa\u017d\3\2\2\2\u08fb\u08fc\7\60\2\2\u08fc\u08fd\7\u0087\2\2"+
		"\u08fd\u0901\7\u008c\2\2\u08fe\u08ff\7\60\2\2\u08ff\u0901\7\u008b\2\2"+
		"\u0900\u08fb\3\2\2\2\u0900\u08fe\3\2\2\2\u0901\u017f\3\2\2\2\u0902\u0903"+
		"\7?\2\2\u0903\u0904\7j\2\2\u0904\u0905\5\u0182\u00c2\2\u0905\u0906\7k"+
		"\2\2\u0906\u0907\5\u0096L\2\u0907\u0181\3\2\2\2\u0908\u0909\b\u00c2\1"+
		"\2\u0909\u090a\5\u0184\u00c3\2\u090a\u0910\3\2\2\2\u090b\u090c\f\3\2\2"+
		"\u090c\u090d\7\u0080\2\2\u090d\u090f\5\u0184\u00c3\2\u090e\u090b\3\2\2"+
		"\2\u090f\u0912\3\2\2\2\u0910\u090e\3\2\2\2\u0910\u0911\3\2\2\2\u0911\u0183"+
		"\3\2\2\2\u0912\u0910\3\2\2\2\u0913\u0916\5\u0186\u00c4\2\u0914\u0916\5"+
		"\u0130\u0099\2\u0915\u0913\3\2\2\2\u0915\u0914\3\2\2\2\u0916\u0185\3\2"+
		"\2\2\u0917\u0919\5\u0188\u00c5\2\u0918\u091a\7Z\2\2\u0919\u0918\3\2\2"+
		"\2\u0919\u091a\3\2\2\2\u091a\u091c\3\2\2\2\u091b\u091d\7\u008c\2\2\u091c"+
		"\u091b\3\2\2\2\u091c\u091d\3\2\2\2\u091d\u093c\3\2\2\2\u091e\u0920\5\u0188"+
		"\u00c5\2\u091f\u0921\7\u008c\2\2\u0920\u091f\3\2\2\2\u0920\u0921\3\2\2"+
		"\2\u0921\u0922\3\2\2\2\u0922\u0923\7i\2\2\u0923\u0924\5\u011e\u0090\2"+
		"\u0924\u093c\3\2\2\2\u0925\u0926\7?\2\2\u0926\u0927\7j\2\2\u0927\u0928"+
		"\5\u0182\u00c2\2\u0928\u0929\7k\2\2\u0929\u092b\5\u0188\u00c5\2\u092a"+
		"\u092c\7Z\2\2\u092b\u092a\3\2\2\2\u092b\u092c\3\2\2\2\u092c\u092e\3\2"+
		"\2\2\u092d\u092f\7\u008c\2\2\u092e\u092d\3\2\2\2\u092e\u092f\3\2\2\2\u092f"+
		"\u093c\3\2\2\2\u0930\u0931\7?\2\2\u0931\u0932\7j\2\2\u0932\u0933\5\u0182"+
		"\u00c2\2\u0933\u0934\7k\2\2\u0934\u0936\5\u0188\u00c5\2\u0935\u0937\7"+
		"\u008c\2\2\u0936\u0935\3\2\2\2\u0936\u0937\3\2\2\2\u0937\u0938\3\2\2\2"+
		"\u0938\u0939\7i\2\2\u0939\u093a\5\16\b\2\u093a\u093c\3\2\2\2\u093b\u0917"+
		"\3\2\2\2\u093b\u091e\3\2\2\2\u093b\u0925\3\2\2\2\u093b\u0930\3\2\2\2\u093c"+
		"\u0187\3\2\2\2\u093d\u093e\t\20\2\2\u093e\u0189\3\2\2\2\u093f\u0940\5"+
		"\b\5\2\u0940\u0942\7j\2\2\u0941\u0943\5\u018e\u00c8\2\u0942\u0941\3\2"+
		"\2\2\u0942\u0943\3\2\2\2\u0943\u0944\3\2\2\2\u0944\u0945\7k\2\2\u0945"+
		"\u018b\3\2\2\2\u0946\u0956\5\u018a\u00c6\2\u0947\u0948\5\u017a\u00be\2"+
		"\u0948\u094a\7j\2\2\u0949\u094b\5\u018e\u00c8\2\u094a\u0949\3\2\2\2\u094a"+
		"\u094b\3\2\2\2\u094b\u094c\3\2\2\2\u094c\u094d\7k\2\2\u094d\u0956\3\2"+
		"\2\2\u094e\u094f\5\u017e\u00c0\2\u094f\u0951\7j\2\2\u0950\u0952\5\u018e"+
		"\u00c8\2\u0951\u0950\3\2\2\2\u0951\u0952\3\2\2\2\u0952\u0953\3\2\2\2\u0953"+
		"\u0954\7k\2\2\u0954\u0956\3\2\2\2\u0955\u0946\3\2\2\2\u0955\u0947\3\2"+
		"\2\2\u0955\u094e\3\2\2\2\u0956\u018d\3\2\2\2\u0957\u0958\b\u00c8\1\2\u0958"+
		"\u095a\5\u0190\u00c9\2\u0959\u095b\7Z\2\2\u095a\u0959\3\2\2\2\u095a\u095b"+
		"\3\2\2\2\u095b\u0964\3\2\2\2\u095c\u095d\f\3\2\2\u095d\u095e\7\u0080\2"+
		"\2\u095e\u0960\5\u0190\u00c9\2\u095f\u0961\7Z\2\2\u0960\u095f\3\2\2\2"+
		"\u0960\u0961\3\2\2\2\u0961\u0963\3\2\2\2\u0962\u095c\3\2\2\2\u0963\u0966"+
		"\3\2\2\2\u0964\u0962\3\2\2\2\u0964\u0965\3\2\2\2\u0965\u018f\3\2\2\2\u0966"+
		"\u0964\3\2\2\2\u0967\u096b\5v<\2\u0968\u096b\5\u011e\u0090\2\u0969\u096b"+
		"\5\16\b\2\u096a\u0967\3\2\2\2\u096a\u0968\3\2\2\2\u096a\u0969\3\2\2\2"+
		"\u096b\u0191\3\2\2\2\u096c\u096d\7G\2\2\u096d\u096e\5\24\13\2\u096e\u096f"+
		"\7\u008c\2\2\u096f\u0978\3\2\2\2\u0970\u0971\7G\2\2\u0971\u0973\5\24\13"+
		"\2\u0972\u0974\7?\2\2\u0973\u0972\3\2\2\2\u0973\u0974\3\2\2\2\u0974\u0975"+
		"\3\2\2\2\u0975\u0976\5\u018a\u00c6\2\u0976\u0978\3\2\2\2\u0977\u096c\3"+
		"\2\2\2\u0977\u0970\3\2\2\2\u0978\u0193\3\2\2\2\u0979\u097b\7!\2\2\u097a"+
		"\u0979\3\2\2\2\u097a\u097b\3\2\2\2\u097b\u097c\3\2\2\2\u097c\u097d\7?"+
		"\2\2\u097d\u097e\5\u0096L\2\u097e\u0195\3\2\2\2\u097f\u0980\7?\2\2\u0980"+
		"\u0981\7j\2\2\u0981\u0982\7k\2\2\u0982\u0983\5\u0096L\2\u0983\u0197\3"+
		"\2\2\2\u0984\u0986\7\37\2\2\u0985\u0984\3\2\2\2\u0985\u0986\3\2\2\2\u0986"+
		"\u0987\3\2\2\2\u0987\u0988\5\b\5\2\u0988\u0989\7V\2\2\u0989\u098a\5";
	private static final String _serializedATNSegment1 =
		"\u012c\u0097\2\u098a\u098b\7W\2\2\u098b\u098c\7\u0082\2\2\u098c\u098d"+
		"\5\u018a\u00c6\2\u098d\u098e\7X\2\2\u098e\u0199\3\2\2\2\u098f\u0990\7"+
		"D\2\2\u0990\u0991\5\u0082B\2\u0991\u0992\5\u019e\u00d0\2\u0992\u019b\3"+
		"\2\2\2\u0993\u0995\7D\2\2\u0994\u0996\5\u0172\u00ba\2\u0995\u0994\3\2"+
		"\2\2\u0995\u0996\3\2\2\2\u0996\u0997\3\2\2\2\u0997\u0998\5\u0082B\2\u0998"+
		"\u0999\5\u019e\u00d0\2\u0999\u019d\3\2\2\2\u099a\u099c\5\u01a0\u00d1\2"+
		"\u099b\u099d\5\u019e\u00d0\2\u099c\u099b\3\2\2\2\u099c\u099d\3\2\2\2\u099d"+
		"\u019f\3\2\2\2\u099e\u099f\7\16\2\2\u099f\u09a0\7V\2\2\u09a0\u09a1\5\u01a2"+
		"\u00d2\2\u09a1\u09a2\7W\2\2\u09a2\u09a3\5\u0082B\2\u09a3\u01a1\3\2\2\2"+
		"\u09a4\u09a6\5\u00ecw\2\u09a5\u09a4\3\2\2\2\u09a5\u09a6\3\2\2\2\u09a6"+
		"\u09a7\3\2\2\2\u09a7\u09a8\5\u00b0Y\2\u09a8\u09a9\5\u0108\u0085\2\u09a9"+
		"\u09b3\3\2\2\2\u09aa\u09ac\5\u00ecw\2\u09ab\u09aa\3\2\2\2\u09ab\u09ac"+
		"\3\2\2\2\u09ac\u09ad\3\2\2\2\u09ad\u09af\5\u00b0Y\2\u09ae\u09b0\5\u0122"+
		"\u0092\2\u09af\u09ae\3\2\2\2\u09af\u09b0\3\2\2\2\u09b0\u09b3\3\2\2\2\u09b1"+
		"\u09b3\7Z\2\2\u09b2\u09a5\3\2\2\2\u09b2\u09ab\3\2\2\2\u09b2\u09b1\3\2"+
		"\2\2\u09b3\u01a3\3\2\2\2\u09b4\u09b5\7.\2\2\u09b5\u09b6\7V\2\2\u09b6\u09b7"+
		"\5v<\2\u09b7\u09b8\7W\2\2\u09b8\u09be\3\2\2\2\u09b9\u09be\7.\2\2\u09ba"+
		"\u09bb\7B\2\2\u09bb\u09bc\7V\2\2\u09bc\u09be\7W\2\2\u09bd\u09b4\3\2\2"+
		"\2\u09bd\u09b9\3\2\2\2\u09bd\u09ba\3\2\2\2\u09be\u01a5\3\2\2\2\u09bf\u09c0"+
		"\b\u00d4\1\2\u09c0\u09c1\7\u008c\2\2\u09c1\u09c7\3\2\2\2\u09c2\u09c3\f"+
		"\3\2\2\u09c3\u09c4\7\u0080\2\2\u09c4\u09c6\7\u008c\2\2\u09c5\u09c2\3\2"+
		"\2\2\u09c6\u09c9\3\2\2\2\u09c7\u09c5\3\2\2\2\u09c7\u09c8\3\2\2\2\u09c8"+
		"\u01a7\3\2\2\2\u09c9\u09c7\3\2\2\2\u09ca\u09d2\5\u01aa\u00d6\2\u09cb\u09d2"+
		"\7\u0085\2\2\u09cc\u09d2\7\u0086\2\2\u09cd\u09d2\7\u0087\2\2\u09ce\u09d2"+
		"\5\u01ac\u00d7\2\u09cf\u09d2\5\u01ae\u00d8\2\u09d0\u09d2\5\u01b0\u00d9"+
		"\2\u09d1\u09ca\3\2\2\2\u09d1\u09cb\3\2\2\2\u09d1\u09cc\3\2\2\2\u09d1\u09cd"+
		"\3\2\2\2\u09d1\u09ce\3\2\2\2\u09d1\u09cf\3\2\2\2\u09d1\u09d0\3\2\2\2\u09d2"+
		"\u01a9\3\2\2\2\u09d3\u09d4\t\21\2\2\u09d4\u01ab\3\2\2\2\u09d5\u09d6\t"+
		"\22\2\2\u09d6\u01ad\3\2\2\2\u09d7\u09d8\7/\2\2\u09d8\u01af\3\2\2\2\u09d9"+
		"\u09da\t\23\2\2\u09da\u01b1\3\2\2\2\u0142\u01b4\u01ba\u01bf\u01cc\u01d0"+
		"\u01d9\u01dd\u01e3\u01e8\u01ed\u01ef\u01f4\u01f7\u01fc\u01fe\u0202\u0208"+
		"\u0210\u0213\u0216\u0219\u0221\u0228\u022e\u0232\u0239\u023f\u0242\u025b"+
		"\u0262\u0269\u026d\u0287\u0294\u029e\u02a4\u02ae\u02b0\u02b6\u02c8\u02e6"+
		"\u02eb\u02ef\u02f3\u02f6\u02fa\u0300\u0302\u030a\u030e\u0317\u031e\u0322"+
		"\u0327\u032b\u032e\u0333\u0339\u0346\u0351\u0353\u0362\u0364\u0370\u0372"+
		"\u037e\u0380\u0392\u0394\u03a0\u03a2\u03ad\u03b8\u03c3\u03ce\u03d9\u03e3"+
		"\u03e7\u03ef\u03fb\u0402\u0406\u040a\u040e\u0412\u0417\u041a\u041e\u0422"+
		"\u0428\u042b\u0431\u0439\u043e\u0441\u0447\u0452\u0457\u045b\u0463\u0467"+
		"\u0472\u0478\u048c\u0490\u049d\u04a0\u04a6\u04aa\u04b0\u04b3\u04c0\u04c6"+
		"\u04d1\u04df\u04e9\u04ec\u04f4\u04fc\u0506\u050a\u0512\u0522\u0530\u0534"+
		"\u0539\u0543\u0548\u054e\u0553\u0564\u0568\u0573\u0577\u057a\u0584\u058a"+
		"\u058d\u0592\u059c\u05a0\u05a3\u05a6\u05a9\u05af\u05b2\u05b6\u05bf\u05cc"+
		"\u05d4\u05d8\u05dd\u05e0\u05e4\u05ec\u05f0\u0604\u060d\u0618\u061e\u0622"+
		"\u0626\u062c\u0631\u0637\u0643\u0649\u0652\u0658\u065f\u0665\u066d\u0671"+
		"\u0679\u067e\u0683\u068a\u068c\u0691\u0695\u069f\u06aa\u06af\u06b4\u06b9"+
		"\u06bd\u06c7\u06cc\u06d0\u06d7\u06db\u06e1\u06e6\u06ea\u06ee\u06f0\u06fb"+
		"\u06fe\u0701\u0704\u070b\u070e\u0712\u0716\u071b\u071e\u0720\u0724\u072d"+
		"\u0731\u0735\u073b\u0740\u0742\u0748\u074c\u0752\u0759\u075d\u075f\u0761"+
		"\u0768\u0772\u0776\u0778\u077a\u077e\u0781\u0787\u0791\u0795\u079b\u07a2"+
		"\u07a5\u07a8\u07ac\u07b4\u07ba\u07bd\u07ce\u07d2\u07d7\u07dd\u07e1\u07e7"+
		"\u07ed\u07f1\u07f6\u07fc\u0800\u0803\u0807\u080a\u080c\u080f\u0819\u081e"+
		"\u0820\u0823\u0826\u0829\u0833\u083d\u0842\u0845\u0849\u084c\u084f\u0853"+
		"\u085c\u086a\u0870\u0874\u0878\u087c\u0880\u0884\u0888\u088c\u088f\u0897"+
		"\u08a0\u08a4\u08ac\u08b2\u08b6\u08bc\u08c4\u08f9\u0900\u0910\u0915\u0919"+
		"\u091c\u0920\u092b\u092e\u0936\u093b\u0942\u094a\u0951\u0955\u095a\u0960"+
		"\u0964\u096a\u0973\u0977\u097a\u0985\u0995\u099c\u09a5\u09ab\u09af\u09b2"+
		"\u09bd\u09c7\u09d1";
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