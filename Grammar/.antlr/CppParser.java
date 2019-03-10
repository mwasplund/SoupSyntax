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
		RULE_typedefName = 0, RULE_namespaceName = 1, RULE_namespaceAlias = 2, 
		RULE_className = 3, RULE_enumName = 4, RULE_templateName = 5, RULE_translationUnit = 6, 
		RULE_primaryExpression = 7, RULE_identifierExpression = 8, RULE_unqualifiedIdentifier = 9, 
		RULE_qualifiedIdentifier = 10, RULE_nestedNameSpecifier = 11, RULE_nestedNameSpecifierSequence = 12, 
		RULE_lambdaExpression = 13, RULE_lambdaIntroducer = 14, RULE_lambdaDeclarator = 15, 
		RULE_lambdaCapture = 16, RULE_captureDefault = 17, RULE_captureList = 18, 
		RULE_capture = 19, RULE_simpleCapture = 20, RULE_initializerCapture = 21, 
		RULE_foldExpression = 22, RULE_foldOperator = 23, RULE_explicitTypeCoversionOperatorExpression = 24, 
		RULE_postfixOperator = 25, RULE_namedCastExpression = 26, RULE_memberAccessOperator = 27, 
		RULE_namedCastType = 28, RULE_typeIdentificationExpression = 29, RULE_postfixExpression = 30, 
		RULE_expressionList = 31, RULE_pseudoDestructorName = 32, RULE_unaryExpression = 33, 
		RULE_unaryOperator = 34, RULE_newExpression = 35, RULE_newPlacement = 36, 
		RULE_newTypeIdentifier = 37, RULE_newDeclarator = 38, RULE_noPointerNewDeclarator = 39, 
		RULE_newInitializer = 40, RULE_deleteExpression = 41, RULE_noExceptionExpression = 42, 
		RULE_castExpression = 43, RULE_pointerManipulationExpression = 44, RULE_multiplicativeExpression = 45, 
		RULE_additiveExpression = 46, RULE_shiftExpression = 47, RULE_relationalExpression = 48, 
		RULE_equalityExpression = 49, RULE_andExpression = 50, RULE_exclusiveOrExpression = 51, 
		RULE_inclusiveOrExpression = 52, RULE_logicalAndExpression = 53, RULE_logicalOrExpression = 54, 
		RULE_conditionalExpression = 55, RULE_throwExpression = 56, RULE_assignmentExpression = 57, 
		RULE_assignmentOperator = 58, RULE_expression = 59, RULE_constantExpression = 60, 
		RULE_statement = 61, RULE_initializerStatement = 62, RULE_condition = 63, 
		RULE_labeledStatement = 64, RULE_expressionStatement = 65, RULE_compoundStatement = 66, 
		RULE_statementSequence = 67, RULE_selectionStatement = 68, RULE_iterationStatement = 69, 
		RULE_forInitializerStatement = 70, RULE_forRangeDeclaration = 71, RULE_forRangeInitializer = 72, 
		RULE_jumpStatement = 73, RULE_declarationStatement = 74, RULE_declarationSequence = 75, 
		RULE_declaration = 76, RULE_blockDeclaration = 77, RULE_noDeclarationSpecifierFunctionDeclaration = 78, 
		RULE_aliasDeclaration = 79, RULE_simpleDeclaration = 80, RULE_staticAssertDeclaration = 81, 
		RULE_emptyDeclaration = 82, RULE_attributeDeclaration = 83, RULE_declarationSpecifier = 84, 
		RULE_declarationSpecifierSequence = 85, RULE_storageClassSpecifier = 86, 
		RULE_functionSpecifier = 87, RULE_typeSpecifier = 88, RULE_typeSpecifierSequence = 89, 
		RULE_definingTypeSpecifier = 90, RULE_definingTypeSpecifierSequence = 91, 
		RULE_simpleTypeSpecifier = 92, RULE_typeName = 93, RULE_declarationTypeSpecifier = 94, 
		RULE_elaboratedTypeSpecifier = 95, RULE_enumSpecifier = 96, RULE_enumHead = 97, 
		RULE_enumHeadName = 98, RULE_opaqueEnumDeclaration = 99, RULE_enumKey = 100, 
		RULE_enumBase = 101, RULE_enumeratorList = 102, RULE_enumeratorDefinition = 103, 
		RULE_enumerator = 104, RULE_namespaceDefinition = 105, RULE_namedNamespaceDefinition = 106, 
		RULE_unnamedNamespaceDefinition = 107, RULE_nestedNamespaceDefinition = 108, 
		RULE_enclosingNamespaceSpecifier = 109, RULE_namespaceBody = 110, RULE_namespaceAliasDefinition = 111, 
		RULE_qualifiedNamespaceSpecifier = 112, RULE_usingDeclaration = 113, RULE_usingDeclaratorList = 114, 
		RULE_usingDeclarator = 115, RULE_usingDirective = 116, RULE_asmDefinition = 117, 
		RULE_linkageSpecification = 118, RULE_attributeSpecifierSequence = 119, 
		RULE_attributeSpecifier = 120, RULE_alignmentSpecifier = 121, RULE_attributeUsingPrefix = 122, 
		RULE_attributeList = 123, RULE_attribute = 124, RULE_attributeToken = 125, 
		RULE_attributeScopedToken = 126, RULE_attributeNamespace = 127, RULE_attributeArgumentClause = 128, 
		RULE_balancedTokenSequence = 129, RULE_balancedToken = 130, RULE_initializerDeclaratorList = 131, 
		RULE_initializerDeclarator = 132, RULE_declarator = 133, RULE_pointerDeclarator = 134, 
		RULE_noPointerDeclarator = 135, RULE_parametersAndQualifiers = 136, RULE_functionParameters = 137, 
		RULE_functionQualifiers = 138, RULE_trailingReturnType = 139, RULE_pointerOperator = 140, 
		RULE_constVolatileQualifierSequence = 141, RULE_constVolatileQualifier = 142, 
		RULE_referenceQualifier = 143, RULE_typeIdentifier = 144, RULE_definingTypeIdentifier = 145, 
		RULE_abstractDeclarator = 146, RULE_pointerAbstractDeclarator = 147, RULE_noPointerAbstractDeclarator = 148, 
		RULE_abstractPackDeclarator = 149, RULE_noPointerAbstractPackDeclarator = 150, 
		RULE_parameterDeclarationClause = 151, RULE_parameterDeclarationList = 152, 
		RULE_parameterDeclaration = 153, RULE_functionDefinition = 154, RULE_functionDeclarator = 155, 
		RULE_functionBody = 156, RULE_regularFunctionBody = 157, RULE_explicitlyDefaultedFunction = 158, 
		RULE_deletedFunction = 159, RULE_initializer = 160, RULE_braceOrEqualInitializer = 161, 
		RULE_initializerClause = 162, RULE_initializerList = 163, RULE_bracedInitializerList = 164, 
		RULE_expressionOrBracedInitializerList = 165, RULE_classSpecifier = 166, 
		RULE_classHead = 167, RULE_classHeadName = 168, RULE_classVirtualSpecifier = 169, 
		RULE_classKey = 170, RULE_memberSpecification = 171, RULE_memberDeclaration = 172, 
		RULE_memberDeclaratorList = 173, RULE_memberDeclarator = 174, RULE_virtualSpecifierSequence = 175, 
		RULE_virtualSpecifier = 176, RULE_pureSpecifier = 177, RULE_baseClause = 178, 
		RULE_baseSpecifierList = 179, RULE_baseSpecifier = 180, RULE_classOrDecltype = 181, 
		RULE_accessSpecifier = 182, RULE_conversionFunctionIdentifier = 183, RULE_conversionTypeIdentifier = 184, 
		RULE_conversionDeclarator = 185, RULE_constructorInitializer = 186, RULE_memberInitializerList = 187, 
		RULE_memberInitializer = 188, RULE_memberInitializerIdentifier = 189, 
		RULE_operatorFunctionIdentifier = 190, RULE_anyOperator = 191, RULE_literalOperatorIdentifier = 192, 
		RULE_templateDeclaration = 193, RULE_templateParameterList = 194, RULE_templateParameter = 195, 
		RULE_typeParameter = 196, RULE_typeParameterKey = 197, RULE_simpleTemplateIdentifier = 198, 
		RULE_templateIdentifier = 199, RULE_templateArgumentList = 200, RULE_templateArgument = 201, 
		RULE_typenameSpecifier = 202, RULE_explicitInstantiation = 203, RULE_explicitSpecialization = 204, 
		RULE_deductionGuide = 205, RULE_tryBlock = 206, RULE_functionTryBlock = 207, 
		RULE_handlerSequence = 208, RULE_handler = 209, RULE_exceptionDeclaration = 210, 
		RULE_noExceptionSpecifier = 211, RULE_identifierList = 212, RULE_literal = 213, 
		RULE_integerLiteral = 214, RULE_booleanLiteral = 215, RULE_pointerLiteral = 216, 
		RULE_userDefinedLiteral = 217;
	public static final String[] ruleNames = {
		"typedefName", "namespaceName", "namespaceAlias", "className", "enumName", 
		"templateName", "translationUnit", "primaryExpression", "identifierExpression", 
		"unqualifiedIdentifier", "qualifiedIdentifier", "nestedNameSpecifier", 
		"nestedNameSpecifierSequence", "lambdaExpression", "lambdaIntroducer", 
		"lambdaDeclarator", "lambdaCapture", "captureDefault", "captureList", 
		"capture", "simpleCapture", "initializerCapture", "foldExpression", "foldOperator", 
		"explicitTypeCoversionOperatorExpression", "postfixOperator", "namedCastExpression", 
		"memberAccessOperator", "namedCastType", "typeIdentificationExpression", 
		"postfixExpression", "expressionList", "pseudoDestructorName", "unaryExpression", 
		"unaryOperator", "newExpression", "newPlacement", "newTypeIdentifier", 
		"newDeclarator", "noPointerNewDeclarator", "newInitializer", "deleteExpression", 
		"noExceptionExpression", "castExpression", "pointerManipulationExpression", 
		"multiplicativeExpression", "additiveExpression", "shiftExpression", "relationalExpression", 
		"equalityExpression", "andExpression", "exclusiveOrExpression", "inclusiveOrExpression", 
		"logicalAndExpression", "logicalOrExpression", "conditionalExpression", 
		"throwExpression", "assignmentExpression", "assignmentOperator", "expression", 
		"constantExpression", "statement", "initializerStatement", "condition", 
		"labeledStatement", "expressionStatement", "compoundStatement", "statementSequence", 
		"selectionStatement", "iterationStatement", "forInitializerStatement", 
		"forRangeDeclaration", "forRangeInitializer", "jumpStatement", "declarationStatement", 
		"declarationSequence", "declaration", "blockDeclaration", "noDeclarationSpecifierFunctionDeclaration", 
		"aliasDeclaration", "simpleDeclaration", "staticAssertDeclaration", "emptyDeclaration", 
		"attributeDeclaration", "declarationSpecifier", "declarationSpecifierSequence", 
		"storageClassSpecifier", "functionSpecifier", "typeSpecifier", "typeSpecifierSequence", 
		"definingTypeSpecifier", "definingTypeSpecifierSequence", "simpleTypeSpecifier", 
		"typeName", "declarationTypeSpecifier", "elaboratedTypeSpecifier", "enumSpecifier", 
		"enumHead", "enumHeadName", "opaqueEnumDeclaration", "enumKey", "enumBase", 
		"enumeratorList", "enumeratorDefinition", "enumerator", "namespaceDefinition", 
		"namedNamespaceDefinition", "unnamedNamespaceDefinition", "nestedNamespaceDefinition", 
		"enclosingNamespaceSpecifier", "namespaceBody", "namespaceAliasDefinition", 
		"qualifiedNamespaceSpecifier", "usingDeclaration", "usingDeclaratorList", 
		"usingDeclarator", "usingDirective", "asmDefinition", "linkageSpecification", 
		"attributeSpecifierSequence", "attributeSpecifier", "alignmentSpecifier", 
		"attributeUsingPrefix", "attributeList", "attribute", "attributeToken", 
		"attributeScopedToken", "attributeNamespace", "attributeArgumentClause", 
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
	public static class TypedefNameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TypedefNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typedefName; }
	}

	public final TypedefNameContext typedefName() throws RecognitionException {
		TypedefNameContext _localctx = new TypedefNameContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_typedefName);
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
			setState(440);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
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
			setState(446);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(444);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(445);
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

	public static class EnumNameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public EnumNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumName; }
	}

	public final EnumNameContext enumName() throws RecognitionException {
		EnumNameContext _localctx = new EnumNameContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_enumName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(448);
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

	public static class TemplateNameContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TemplateNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateName; }
	}

	public final TemplateNameContext templateName() throws RecognitionException {
		TemplateNameContext _localctx = new TemplateNameContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_templateName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(450);
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
		enterRule(_localctx, 12, RULE_translationUnit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(453);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
				{
				setState(452);
				declarationSequence(0);
				}
			}

			setState(455);
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
		enterRule(_localctx, 14, RULE_primaryExpression);
		try {
			setState(466);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(457);
				literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(458);
				match(This);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(459);
				match(LeftParenthesis);
				setState(460);
				expression(0);
				setState(461);
				match(RightParenthesis);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(463);
				identifierExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(464);
				lambdaExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(465);
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
		enterRule(_localctx, 16, RULE_identifierExpression);
		try {
			setState(470);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(468);
				unqualifiedIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(469);
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
		enterRule(_localctx, 18, RULE_unqualifiedIdentifier);
		try {
			setState(479);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(472);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(473);
				operatorFunctionIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(474);
				conversionFunctionIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(475);
				literalOperatorIdentifier();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(476);
				match(Tilde);
				setState(477);
				declarationTypeSpecifier();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(478);
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
		enterRule(_localctx, 20, RULE_qualifiedIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(481);
			nestedNameSpecifier();
			setState(483);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Template) {
				{
				setState(482);
				match(Template);
				}
			}

			setState(485);
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
		enterRule(_localctx, 22, RULE_nestedNameSpecifier);
		try {
			setState(501);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DoubleColon:
				enterOuterAlt(_localctx, 1);
				{
				setState(487);
				match(DoubleColon);
				setState(489);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
				case 1:
					{
					setState(488);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(491);
				match(Identifier);
				setState(492);
				match(DoubleColon);
				setState(494);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
				case 1:
					{
					setState(493);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case DeclType:
				enterOuterAlt(_localctx, 3);
				{
				setState(496);
				declarationTypeSpecifier();
				setState(497);
				match(DoubleColon);
				setState(499);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
				case 1:
					{
					setState(498);
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
		enterRule(_localctx, 24, RULE_nestedNameSpecifierSequence);
		int _la;
		try {
			setState(516);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(503);
				match(Identifier);
				setState(504);
				match(DoubleColon);
				setState(506);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
				case 1:
					{
					setState(505);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(509);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(508);
					match(Template);
					}
				}

				setState(511);
				simpleTemplateIdentifier();
				setState(512);
				match(DoubleColon);
				setState(514);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
				case 1:
					{
					setState(513);
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
		enterRule(_localctx, 26, RULE_lambdaExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(518);
			lambdaIntroducer();
			setState(520);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LeftParenthesis) {
				{
				setState(519);
				lambdaDeclarator();
				}
			}

			setState(522);
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
		enterRule(_localctx, 28, RULE_lambdaIntroducer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(524);
			match(LeftBracket);
			setState(526);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==This || ((((_la - 95)) & ~0x3f) == 0 && ((1L << (_la - 95)) & ((1L << (Asterisk - 95)) | (1L << (Ampersand - 95)) | (1L << (Equal - 95)) | (1L << (Identifier - 95)))) != 0)) {
				{
				setState(525);
				lambdaCapture();
				}
			}

			setState(528);
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
		enterRule(_localctx, 30, RULE_lambdaDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(530);
			match(LeftParenthesis);
			setState(531);
			parameterDeclarationClause();
			setState(532);
			match(RightParenthesis);
			setState(534);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << Struct) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (DoubleColon - 67)))) != 0) || _la==Identifier) {
				{
				setState(533);
				declarationSpecifierSequence();
				}
			}

			setState(537);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NoExcept || _la==Throw) {
				{
				setState(536);
				noExceptionSpecifier();
				}
			}

			setState(540);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(539);
				attributeSpecifierSequence(0);
				}
			}

			setState(543);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(542);
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
		enterRule(_localctx, 32, RULE_lambdaCapture);
		try {
			setState(551);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(545);
				captureDefault();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(546);
				captureList(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(547);
				captureDefault();
				setState(548);
				match(Comma);
				setState(549);
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
		enterRule(_localctx, 34, RULE_captureDefault);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(553);
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
		int _startState = 36;
		enterRecursionRule(_localctx, 36, RULE_captureList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(556);
			capture();
			setState(558);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				{
				setState(557);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(568);
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
					setState(560);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(561);
					match(Comma);
					setState(562);
					capture();
					setState(564);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
					case 1:
						{
						setState(563);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(570);
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
		enterRule(_localctx, 38, RULE_capture);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(571);
			simpleCapture();
			setState(572);
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
		enterRule(_localctx, 40, RULE_simpleCapture);
		int _la;
		try {
			setState(581);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ampersand:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(575);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(574);
					match(Ampersand);
					}
				}

				setState(577);
				match(Identifier);
				}
				break;
			case This:
				enterOuterAlt(_localctx, 2);
				{
				setState(578);
				match(This);
				}
				break;
			case Asterisk:
				enterOuterAlt(_localctx, 3);
				{
				setState(579);
				match(Asterisk);
				setState(580);
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
		enterRule(_localctx, 42, RULE_initializerCapture);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(584);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Ampersand) {
				{
				setState(583);
				match(Ampersand);
				}
			}

			setState(586);
			match(Identifier);
			setState(587);
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
		enterRule(_localctx, 44, RULE_foldExpression);
		try {
			setState(609);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(589);
				match(LeftParenthesis);
				setState(590);
				castExpression();
				setState(591);
				foldOperator();
				setState(592);
				match(Ellipsis);
				setState(593);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(595);
				match(LeftParenthesis);
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
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(601);
				match(LeftParenthesis);
				setState(602);
				castExpression();
				setState(603);
				foldOperator();
				setState(604);
				match(Ellipsis);
				setState(605);
				foldOperator();
				setState(606);
				castExpression();
				setState(607);
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
		enterRule(_localctx, 46, RULE_foldOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(611);
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
		enterRule(_localctx, 48, RULE_explicitTypeCoversionOperatorExpression);
		int _la;
		try {
			setState(627);
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
			case DoubleColon:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(613);
				simpleTypeSpecifier();
				setState(614);
				match(LeftParenthesis);
				setState(616);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(615);
					expressionList();
					}
				}

				setState(618);
				match(RightParenthesis);
				}
				break;
			case TypeName:
				enterOuterAlt(_localctx, 2);
				{
				setState(620);
				typenameSpecifier();
				setState(621);
				match(LeftParenthesis);
				setState(623);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(622);
					expressionList();
					}
				}

				setState(625);
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
		enterRule(_localctx, 50, RULE_postfixOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(629);
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
		enterRule(_localctx, 52, RULE_namedCastExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(631);
			namedCastType();
			setState(632);
			match(LessThan);
			setState(633);
			typeIdentifier();
			setState(634);
			match(GreaterThan);
			setState(635);
			match(LeftParenthesis);
			setState(636);
			expression(0);
			setState(637);
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
		enterRule(_localctx, 54, RULE_memberAccessOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(639);
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
		enterRule(_localctx, 56, RULE_namedCastType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(641);
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
		enterRule(_localctx, 58, RULE_typeIdentificationExpression);
		try {
			setState(653);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(643);
				match(TypeId);
				setState(644);
				match(LeftParenthesis);
				setState(645);
				expression(0);
				setState(646);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(648);
				match(TypeId);
				setState(649);
				match(LeftParenthesis);
				setState(650);
				typeIdentifier();
				setState(651);
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
		int _startState = 60;
		enterRecursionRule(_localctx, 60, RULE_postfixExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(666);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,33,_ctx) ) {
			case 1:
				{
				setState(656);
				primaryExpression();
				}
				break;
			case 2:
				{
				setState(657);
				explicitTypeCoversionOperatorExpression();
				}
				break;
			case 3:
				{
				setState(658);
				simpleTypeSpecifier();
				setState(659);
				bracedInitializerList();
				}
				break;
			case 4:
				{
				setState(661);
				typenameSpecifier();
				setState(662);
				bracedInitializerList();
				}
				break;
			case 5:
				{
				setState(664);
				namedCastExpression();
				}
				break;
			case 6:
				{
				setState(665);
				typeIdentificationExpression();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(694);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(692);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
					case 1:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(668);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(669);
						match(LeftBracket);
						setState(670);
						expressionOrBracedInitializerList();
						setState(671);
						match(RightBracket);
						}
						break;
					case 2:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(673);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(674);
						match(LeftParenthesis);
						setState(676);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(675);
							expressionList();
							}
						}

						setState(678);
						match(RightParenthesis);
						}
						break;
					case 3:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(679);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(680);
						memberAccessOperator();
						setState(682);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(681);
							match(Template);
							}
						}

						setState(684);
						identifierExpression();
						}
						break;
					case 4:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(686);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(687);
						memberAccessOperator();
						setState(688);
						pseudoDestructorName();
						}
						break;
					case 5:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(690);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(691);
						postfixOperator();
						}
						break;
					}
					} 
				}
				setState(696);
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
		enterRule(_localctx, 62, RULE_expressionList);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(697);
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
		enterRule(_localctx, 64, RULE_pseudoDestructorName);
		try {
			setState(718);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,39,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(700);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
				case 1:
					{
					setState(699);
					nestedNameSpecifier();
					}
					break;
				}
				setState(702);
				typeName();
				setState(703);
				match(DoubleColon);
				setState(704);
				match(Tilde);
				setState(705);
				typeName();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(707);
				nestedNameSpecifier();
				setState(708);
				match(Template);
				setState(709);
				simpleTemplateIdentifier();
				setState(710);
				match(DoubleColon);
				setState(711);
				match(Tilde);
				setState(712);
				typeName();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(714);
				match(Tilde);
				setState(715);
				typeName();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(716);
				match(Tilde);
				setState(717);
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
		enterRule(_localctx, 66, RULE_unaryExpression);
		try {
			setState(748);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(720);
				postfixExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(721);
				match(DoublePlus);
				setState(722);
				castExpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(723);
				match(DoubleMinus);
				setState(724);
				castExpression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(725);
				unaryOperator();
				setState(726);
				castExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(728);
				match(SizeOf);
				setState(729);
				unaryExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(730);
				match(SizeOf);
				setState(731);
				match(LeftParenthesis);
				setState(732);
				typeIdentifier();
				setState(733);
				match(RightParenthesis);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(735);
				match(SizeOf);
				setState(736);
				match(Ellipsis);
				setState(737);
				match(LeftParenthesis);
				setState(738);
				match(Identifier);
				setState(739);
				match(RightParenthesis);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(740);
				match(AlignOf);
				setState(741);
				match(LeftParenthesis);
				setState(742);
				typeIdentifier();
				setState(743);
				match(RightParenthesis);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(745);
				noExceptionExpression();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(746);
				newExpression();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(747);
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
		enterRule(_localctx, 68, RULE_unaryOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(750);
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
		enterRule(_localctx, 70, RULE_newExpression);
		int _la;
		try {
			setState(776);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(753);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(752);
					match(DoubleColon);
					}
				}

				setState(755);
				match(New);
				setState(757);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LeftParenthesis) {
					{
					setState(756);
					newPlacement();
					}
				}

				setState(759);
				newTypeIdentifier();
				setState(761);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
				case 1:
					{
					setState(760);
					newInitializer();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(764);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(763);
					match(DoubleColon);
					}
				}

				setState(766);
				match(New);
				setState(768);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
				case 1:
					{
					setState(767);
					newPlacement();
					}
					break;
				}
				setState(770);
				match(LeftParenthesis);
				setState(771);
				typeIdentifier();
				setState(772);
				match(RightParenthesis);
				setState(774);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
				case 1:
					{
					setState(773);
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
		enterRule(_localctx, 72, RULE_newPlacement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(778);
			match(LeftParenthesis);
			setState(779);
			expressionList();
			setState(780);
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
		enterRule(_localctx, 74, RULE_newTypeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(782);
			typeSpecifierSequence();
			setState(784);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				{
				setState(783);
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
		enterRule(_localctx, 76, RULE_newDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(786);
			pointerOperator();
			setState(788);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || ((((_la - 90)) & ~0x3f) == 0 && ((1L << (_la - 90)) & ((1L << (DoubleColon - 90)) | (1L << (Asterisk - 90)) | (1L << (Ampersand - 90)) | (1L << (DoubleAmpersand - 90)) | (1L << (Identifier - 90)))) != 0)) {
				{
				setState(787);
				newDeclarator();
				}
			}

			setState(790);
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
		int _startState = 78;
		enterRecursionRule(_localctx, 78, RULE_noPointerNewDeclarator, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(793);
			match(LeftBracket);
			setState(794);
			expression(0);
			setState(795);
			match(RightBracket);
			setState(797);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
			case 1:
				{
				setState(796);
				attributeSpecifierSequence(0);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(808);
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
					setState(799);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(800);
					match(LeftBracket);
					setState(801);
					constantExpression();
					setState(802);
					match(RightBracket);
					setState(804);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,51,_ctx) ) {
					case 1:
						{
						setState(803);
						attributeSpecifierSequence(0);
						}
						break;
					}
					}
					} 
				}
				setState(810);
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
		enterRule(_localctx, 80, RULE_newInitializer);
		int _la;
		try {
			setState(817);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(811);
				match(LeftParenthesis);
				setState(813);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(812);
					expressionList();
					}
				}

				setState(815);
				match(RightParenthesis);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(816);
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
		enterRule(_localctx, 82, RULE_deleteExpression);
		int _la;
		try {
			setState(831);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(820);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(819);
					match(DoubleColon);
					}
				}

				setState(822);
				match(Delete);
				setState(823);
				castExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(825);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(824);
					match(DoubleColon);
					}
				}

				setState(827);
				match(Delete);
				setState(828);
				match(LeftBracket);
				setState(829);
				match(RightBracket);
				setState(830);
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
		enterRule(_localctx, 84, RULE_noExceptionExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(833);
			match(NoExcept);
			setState(834);
			match(LeftParenthesis);
			setState(835);
			expression(0);
			setState(836);
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
		enterRule(_localctx, 86, RULE_castExpression);
		try {
			setState(844);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,58,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(838);
				unaryExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(839);
				match(LeftParenthesis);
				setState(840);
				typeIdentifier();
				setState(841);
				match(RightParenthesis);
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
		int _startState = 88;
		enterRecursionRule(_localctx, 88, RULE_pointerManipulationExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(847);
			castExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(857);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(855);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
					case 1:
						{
						_localctx = new PointerManipulationExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pointerManipulationExpression);
						setState(849);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(850);
						match(PeriodAsterisk);
						setState(851);
						castExpression();
						}
						break;
					case 2:
						{
						_localctx = new PointerManipulationExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pointerManipulationExpression);
						setState(852);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(853);
						match(ArrowAsterisk);
						setState(854);
						castExpression();
						}
						break;
					}
					} 
				}
				setState(859);
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
		int _startState = 90;
		enterRecursionRule(_localctx, 90, RULE_multiplicativeExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(861);
			pointerManipulationExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(874);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(872);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,61,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(863);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(864);
						match(Asterisk);
						setState(865);
						pointerManipulationExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(866);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(867);
						match(ForwardSlash);
						setState(868);
						pointerManipulationExpression(0);
						}
						break;
					case 3:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(869);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(870);
						match(Percent);
						setState(871);
						pointerManipulationExpression(0);
						}
						break;
					}
					} 
				}
				setState(876);
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
		int _startState = 92;
		enterRecursionRule(_localctx, 92, RULE_additiveExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(878);
			multiplicativeExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(888);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,64,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(886);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
					case 1:
						{
						_localctx = new AdditiveExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveExpression);
						setState(880);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(881);
						match(Plus);
						setState(882);
						multiplicativeExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveExpression);
						setState(883);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(884);
						match(Minus);
						setState(885);
						multiplicativeExpression(0);
						}
						break;
					}
					} 
				}
				setState(890);
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
		int _startState = 94;
		enterRecursionRule(_localctx, 94, RULE_shiftExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(892);
			additiveExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(902);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,66,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(900);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,65,_ctx) ) {
					case 1:
						{
						_localctx = new ShiftExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shiftExpression);
						setState(894);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(895);
						match(DoubleLessThan);
						setState(896);
						additiveExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new ShiftExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shiftExpression);
						setState(897);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(898);
						match(DoubleGreaterThan);
						setState(899);
						additiveExpression(0);
						}
						break;
					}
					} 
				}
				setState(904);
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
		int _startState = 96;
		enterRecursionRule(_localctx, 96, RULE_relationalExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(906);
			shiftExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(922);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,68,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(920);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
					case 1:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(908);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(909);
						match(LessThan);
						setState(910);
						shiftExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(911);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(912);
						match(GreaterThan);
						setState(913);
						shiftExpression(0);
						}
						break;
					case 3:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(914);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(915);
						match(LessThanEqual);
						setState(916);
						shiftExpression(0);
						}
						break;
					case 4:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(917);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(918);
						match(GreaterThanEqual);
						setState(919);
						shiftExpression(0);
						}
						break;
					}
					} 
				}
				setState(924);
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
		int _startState = 98;
		enterRecursionRule(_localctx, 98, RULE_equalityExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(926);
			relationalExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(936);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(934);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
					case 1:
						{
						_localctx = new EqualityExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityExpression);
						setState(928);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(929);
						match(DoubleEqual);
						setState(930);
						relationalExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new EqualityExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityExpression);
						setState(931);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(932);
						match(ExclamationMarkEqual);
						setState(933);
						relationalExpression(0);
						}
						break;
					}
					} 
				}
				setState(938);
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
		int _startState = 100;
		enterRecursionRule(_localctx, 100, RULE_andExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(940);
			equalityExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(947);
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
					setState(942);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(943);
					match(Ampersand);
					setState(944);
					equalityExpression(0);
					}
					} 
				}
				setState(949);
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
		int _startState = 102;
		enterRecursionRule(_localctx, 102, RULE_exclusiveOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(951);
			andExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(958);
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
					setState(953);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(954);
					match(Caret);
					setState(955);
					andExpression(0);
					}
					} 
				}
				setState(960);
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
		int _startState = 104;
		enterRecursionRule(_localctx, 104, RULE_inclusiveOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(962);
			exclusiveOrExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(969);
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
					setState(964);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(965);
					match(VerticalBar);
					setState(966);
					exclusiveOrExpression(0);
					}
					} 
				}
				setState(971);
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
		int _startState = 106;
		enterRecursionRule(_localctx, 106, RULE_logicalAndExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(973);
			inclusiveOrExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(980);
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
					setState(975);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(976);
					match(DoubleAmpersand);
					setState(977);
					inclusiveOrExpression(0);
					}
					} 
				}
				setState(982);
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
		int _startState = 108;
		enterRecursionRule(_localctx, 108, RULE_logicalOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(984);
			logicalAndExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(991);
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
					setState(986);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(987);
					match(DoubleVerticalBar);
					setState(988);
					logicalAndExpression(0);
					}
					} 
				}
				setState(993);
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
		enterRule(_localctx, 110, RULE_conditionalExpression);
		try {
			setState(1001);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(994);
				logicalOrExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(995);
				logicalOrExpression(0);
				setState(996);
				match(QuestionMark);
				setState(997);
				expression(0);
				setState(998);
				match(Colon);
				setState(999);
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
		enterRule(_localctx, 112, RULE_throwExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1003);
			match(Throw);
			setState(1005);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,77,_ctx) ) {
			case 1:
				{
				setState(1004);
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
		enterRule(_localctx, 114, RULE_assignmentExpression);
		try {
			setState(1013);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1007);
				conditionalExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1008);
				logicalOrExpression(0);
				setState(1009);
				assignmentOperator();
				setState(1010);
				initializerClause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1012);
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
		enterRule(_localctx, 116, RULE_assignmentOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1015);
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
		int _startState = 118;
		enterRecursionRule(_localctx, 118, RULE_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1018);
			assignmentExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(1025);
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
					setState(1020);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1021);
					match(Comma);
					setState(1022);
					assignmentExpression();
					}
					} 
				}
				setState(1027);
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
		enterRule(_localctx, 120, RULE_constantExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1028);
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
		enterRule(_localctx, 122, RULE_statement);
		int _la;
		try {
			setState(1056);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,86,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1030);
				labeledStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1032);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
				case 1:
					{
					setState(1031);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1034);
				expressionStatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
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
				compoundStatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
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
				selectionStatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1044);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1043);
					attributeSpecifierSequence(0);
					}
				}

				setState(1046);
				iterationStatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1048);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1047);
					attributeSpecifierSequence(0);
					}
				}

				setState(1050);
				jumpStatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1051);
				declarationStatement();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1053);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1052);
					attributeSpecifierSequence(0);
					}
				}

				setState(1055);
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
		enterRule(_localctx, 124, RULE_initializerStatement);
		try {
			setState(1060);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,87,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1058);
				expressionStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1059);
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
		enterRule(_localctx, 126, RULE_condition);
		int _la;
		try {
			setState(1070);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,89,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1062);
				expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1064);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1063);
					attributeSpecifierSequence(0);
					}
				}

				setState(1066);
				declarationSpecifierSequence();
				setState(1067);
				declarator();
				setState(1068);
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
		enterRule(_localctx, 128, RULE_labeledStatement);
		int _la;
		try {
			setState(1092);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1073);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1072);
					attributeSpecifierSequence(0);
					}
				}

				setState(1075);
				match(Identifier);
				setState(1076);
				match(Colon);
				setState(1077);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
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
				match(Case);
				setState(1082);
				constantExpression();
				setState(1083);
				match(Colon);
				setState(1084);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1087);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1086);
					attributeSpecifierSequence(0);
					}
				}

				setState(1089);
				match(Default);
				setState(1090);
				match(Colon);
				setState(1091);
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
		enterRule(_localctx, 130, RULE_expressionStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1095);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(1094);
				expression(0);
				}
			}

			setState(1097);
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
		enterRule(_localctx, 132, RULE_compoundStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1099);
			match(LeftBrace);
			setState(1101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(1100);
				statementSequence(0);
				}
			}

			setState(1103);
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
		int _startState = 134;
		enterRecursionRule(_localctx, 134, RULE_statementSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1106);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(1112);
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
					setState(1108);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1109);
					statement();
					}
					} 
				}
				setState(1114);
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
		enterRule(_localctx, 136, RULE_selectionStatement);
		int _la;
		try {
			setState(1150);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,102,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1115);
				match(If);
				setState(1117);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ConstExpr) {
					{
					setState(1116);
					match(ConstExpr);
					}
				}

				setState(1119);
				match(LeftParenthesis);
				setState(1121);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,98,_ctx) ) {
				case 1:
					{
					setState(1120);
					initializerStatement();
					}
					break;
				}
				setState(1123);
				condition();
				setState(1124);
				match(RightParenthesis);
				setState(1125);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1127);
				match(If);
				setState(1129);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ConstExpr) {
					{
					setState(1128);
					match(ConstExpr);
					}
				}

				setState(1131);
				match(LeftParenthesis);
				setState(1133);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,100,_ctx) ) {
				case 1:
					{
					setState(1132);
					initializerStatement();
					}
					break;
				}
				setState(1135);
				condition();
				setState(1136);
				match(RightParenthesis);
				setState(1137);
				statement();
				setState(1138);
				match(Else);
				setState(1139);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1141);
				match(Switch);
				setState(1142);
				match(LeftParenthesis);
				setState(1144);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,101,_ctx) ) {
				case 1:
					{
					setState(1143);
					initializerStatement();
					}
					break;
				}
				setState(1146);
				condition();
				setState(1147);
				match(RightParenthesis);
				setState(1148);
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
		enterRule(_localctx, 138, RULE_iterationStatement);
		int _la;
		try {
			setState(1187);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,105,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1152);
				match(While);
				setState(1153);
				match(LeftParenthesis);
				setState(1154);
				condition();
				setState(1155);
				match(RightParenthesis);
				setState(1156);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1158);
				match(Do);
				setState(1159);
				statement();
				setState(1160);
				match(While);
				setState(1161);
				match(LeftParenthesis);
				setState(1162);
				expression(0);
				setState(1163);
				match(RightParenthesis);
				setState(1164);
				match(Semicolon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1166);
				match(For);
				setState(1167);
				match(LeftParenthesis);
				setState(1168);
				initializerStatement();
				setState(1170);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticCast) | (1L << Struct) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1169);
					condition();
					}
				}

				setState(1172);
				match(Semicolon);
				setState(1174);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1173);
					expression(0);
					}
				}

				setState(1176);
				match(RightParenthesis);
				setState(1177);
				statement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1179);
				match(For);
				setState(1180);
				match(LeftParenthesis);
				setState(1181);
				forRangeDeclaration();
				setState(1182);
				match(Colon);
				setState(1183);
				forRangeInitializer();
				setState(1184);
				match(RightParenthesis);
				setState(1185);
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
		enterRule(_localctx, 140, RULE_forInitializerStatement);
		int _la;
		try {
			setState(1206);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,109,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1190);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1189);
					attributeSpecifierSequence(0);
					}
				}

				setState(1192);
				declarationSpecifierSequence();
				setState(1193);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1196);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1195);
					attributeSpecifierSequence(0);
					}
				}

				setState(1198);
				declarationSpecifierSequence();
				setState(1200);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(1199);
					referenceQualifier();
					}
				}

				setState(1202);
				match(LeftBracket);
				setState(1203);
				identifierList(0);
				setState(1204);
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
		enterRule(_localctx, 142, RULE_forRangeDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1209);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1208);
				attributeSpecifierSequence(0);
				}
			}

			setState(1211);
			declarationSpecifierSequence();
			setState(1212);
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
		enterRule(_localctx, 144, RULE_forRangeInitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1214);
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
		enterRule(_localctx, 146, RULE_jumpStatement);
		int _la;
		try {
			setState(1228);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Break:
				enterOuterAlt(_localctx, 1);
				{
				setState(1216);
				match(Break);
				setState(1217);
				match(Semicolon);
				}
				break;
			case Continue:
				enterOuterAlt(_localctx, 2);
				{
				setState(1218);
				match(Continue);
				setState(1219);
				match(Semicolon);
				}
				break;
			case Return:
				enterOuterAlt(_localctx, 3);
				{
				setState(1220);
				match(Return);
				setState(1222);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1221);
					expressionOrBracedInitializerList();
					}
				}

				setState(1224);
				match(Semicolon);
				}
				break;
			case GoTo:
				enterOuterAlt(_localctx, 4);
				{
				setState(1225);
				match(GoTo);
				setState(1226);
				match(Identifier);
				setState(1227);
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
		enterRule(_localctx, 148, RULE_declarationStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1230);
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
		int _startState = 150;
		enterRecursionRule(_localctx, 150, RULE_declarationSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1233);
			declaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1239);
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
					setState(1235);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1236);
					declaration();
					}
					} 
				}
				setState(1241);
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
		enterRule(_localctx, 152, RULE_declaration);
		try {
			setState(1253);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,114,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1242);
				blockDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1243);
				noDeclarationSpecifierFunctionDeclaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1244);
				functionDefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1245);
				templateDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1246);
				deductionGuide();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1247);
				explicitInstantiation();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1248);
				explicitSpecialization();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1249);
				linkageSpecification();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1250);
				namespaceDefinition();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1251);
				emptyDeclaration();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1252);
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
		enterRule(_localctx, 154, RULE_blockDeclaration);
		try {
			setState(1263);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,115,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1255);
				simpleDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1256);
				asmDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1257);
				namespaceAliasDefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1258);
				usingDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1259);
				usingDirective();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1260);
				staticAssertDeclaration();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1261);
				aliasDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1262);
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
		enterRule(_localctx, 156, RULE_noDeclarationSpecifierFunctionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
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
			declarator();
			setState(1269);
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
		enterRule(_localctx, 158, RULE_aliasDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1271);
			match(Using);
			setState(1272);
			match(Identifier);
			setState(1274);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1273);
				attributeSpecifierSequence(0);
				}
			}

			setState(1276);
			match(Equal);
			setState(1277);
			definingTypeIdentifier();
			setState(1278);
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
		enterRule(_localctx, 160, RULE_simpleDeclaration);
		int _la;
		try {
			setState(1304);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,121,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1280);
				declarationSpecifierSequence();
				setState(1282);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || _la==Operator || ((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (LeftParenthesis - 84)) | (1L << (Ellipsis - 84)) | (1L << (DoubleColon - 84)) | (1L << (Asterisk - 84)) | (1L << (Ampersand - 84)) | (1L << (Tilde - 84)) | (1L << (DoubleAmpersand - 84)) | (1L << (Identifier - 84)))) != 0)) {
					{
					setState(1281);
					initializerDeclaratorList(0);
					}
				}

				setState(1284);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1286);
				attributeSpecifierSequence(0);
				setState(1287);
				declarationSpecifierSequence();
				setState(1288);
				initializerDeclaratorList(0);
				setState(1289);
				match(Semicolon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1292);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1291);
					attributeSpecifierSequence(0);
					}
				}

				setState(1294);
				declarationSpecifierSequence();
				setState(1296);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(1295);
					referenceQualifier();
					}
				}

				setState(1298);
				match(LeftBracket);
				setState(1299);
				identifierList(0);
				setState(1300);
				match(RightBracket);
				setState(1301);
				initializer();
				setState(1302);
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
		enterRule(_localctx, 162, RULE_staticAssertDeclaration);
		try {
			setState(1320);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,122,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1306);
				match(StaticAssert);
				setState(1307);
				match(LeftParenthesis);
				setState(1308);
				constantExpression();
				setState(1309);
				match(RightParenthesis);
				setState(1310);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1312);
				match(StaticAssert);
				setState(1313);
				match(LeftParenthesis);
				setState(1314);
				constantExpression();
				setState(1315);
				match(Comma);
				setState(1316);
				match(StringLiteral);
				setState(1317);
				match(RightParenthesis);
				setState(1318);
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
		enterRule(_localctx, 164, RULE_emptyDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1322);
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
		enterRule(_localctx, 166, RULE_attributeDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1324);
			attributeSpecifierSequence(0);
			setState(1325);
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
		enterRule(_localctx, 168, RULE_declarationSpecifier);
		try {
			setState(1334);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Extern:
			case Mutable:
			case Static:
			case ThreadLocal:
				enterOuterAlt(_localctx, 1);
				{
				setState(1327);
				storageClassSpecifier();
				}
				break;
			case Auto:
			case Bool:
			case Char:
			case Char16:
			case Char32:
			case Class:
			case Const:
			case DeclType:
			case Double:
			case Enum:
			case Float:
			case Int:
			case Long:
			case Short:
			case Signed:
			case Struct:
			case TypeName:
			case Union:
			case Unsigned:
			case Void:
			case Volatile:
			case WChar:
			case DoubleColon:
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(1328);
				definingTypeSpecifier();
				}
				break;
			case Explicit:
			case Virtual:
				enterOuterAlt(_localctx, 3);
				{
				setState(1329);
				functionSpecifier();
				}
				break;
			case Friend:
				enterOuterAlt(_localctx, 4);
				{
				setState(1330);
				match(Friend);
				}
				break;
			case TypeDef:
				enterOuterAlt(_localctx, 5);
				{
				setState(1331);
				match(TypeDef);
				}
				break;
			case ConstExpr:
				enterOuterAlt(_localctx, 6);
				{
				setState(1332);
				match(ConstExpr);
				}
				break;
			case Inline:
				enterOuterAlt(_localctx, 7);
				{
				setState(1333);
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
		enterRule(_localctx, 170, RULE_declarationSpecifierSequence);
		try {
			setState(1343);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,125,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1336);
				declarationSpecifier();
				setState(1338);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,124,_ctx) ) {
				case 1:
					{
					setState(1337);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1340);
				declarationSpecifier();
				setState(1341);
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
		enterRule(_localctx, 172, RULE_storageClassSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1345);
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
		enterRule(_localctx, 174, RULE_functionSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1347);
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
		public ConstVolatileQualifierContext constVolatileQualifier() {
			return getRuleContext(ConstVolatileQualifierContext.class,0);
		}
		public TypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeSpecifier; }
	}

	public final TypeSpecifierContext typeSpecifier() throws RecognitionException {
		TypeSpecifierContext _localctx = new TypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 176, RULE_typeSpecifier);
		try {
			setState(1353);
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
			case DoubleColon:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(1349);
				simpleTypeSpecifier();
				}
				break;
			case Class:
			case Enum:
			case Struct:
			case Union:
				enterOuterAlt(_localctx, 2);
				{
				setState(1350);
				elaboratedTypeSpecifier();
				}
				break;
			case TypeName:
				enterOuterAlt(_localctx, 3);
				{
				setState(1351);
				typenameSpecifier();
				}
				break;
			case Const:
			case Volatile:
				enterOuterAlt(_localctx, 4);
				{
				setState(1352);
				constVolatileQualifier();
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
		enterRule(_localctx, 178, RULE_typeSpecifierSequence);
		try {
			setState(1362);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,128,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1355);
				typeSpecifier();
				setState(1357);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,127,_ctx) ) {
				case 1:
					{
					setState(1356);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1359);
				typeSpecifier();
				setState(1360);
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
		enterRule(_localctx, 180, RULE_definingTypeSpecifier);
		try {
			setState(1367);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,129,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1364);
				typeSpecifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1365);
				classSpecifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1366);
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
		enterRule(_localctx, 182, RULE_definingTypeSpecifierSequence);
		try {
			setState(1376);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,131,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1369);
				definingTypeSpecifier();
				setState(1371);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,130,_ctx) ) {
				case 1:
					{
					setState(1370);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1373);
				definingTypeSpecifier();
				setState(1374);
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
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public SimpleTemplateIdentifierContext simpleTemplateIdentifier() {
			return getRuleContext(SimpleTemplateIdentifierContext.class,0);
		}
		public TemplateNameContext templateName() {
			return getRuleContext(TemplateNameContext.class,0);
		}
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
		enterRule(_localctx, 184, RULE_simpleTypeSpecifier);
		try {
			setState(1405);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,134,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1379);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,132,_ctx) ) {
				case 1:
					{
					setState(1378);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1381);
				typeName();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1382);
				nestedNameSpecifier();
				setState(1383);
				match(Template);
				setState(1384);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1387);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,133,_ctx) ) {
				case 1:
					{
					setState(1386);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1389);
				templateName();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1390);
				match(Char);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1391);
				match(Char16);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1392);
				match(Char32);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1393);
				match(WChar);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1394);
				match(Bool);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1395);
				match(Short);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1396);
				match(Int);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1397);
				match(Long);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(1398);
				match(Signed);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(1399);
				match(Unsigned);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(1400);
				match(Float);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(1401);
				match(Double);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(1402);
				match(Void);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(1403);
				match(Auto);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(1404);
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
		public ClassNameContext className() {
			return getRuleContext(ClassNameContext.class,0);
		}
		public EnumNameContext enumName() {
			return getRuleContext(EnumNameContext.class,0);
		}
		public TypedefNameContext typedefName() {
			return getRuleContext(TypedefNameContext.class,0);
		}
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
		enterRule(_localctx, 186, RULE_typeName);
		try {
			setState(1411);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,135,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1407);
				className();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1408);
				enumName();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1409);
				typedefName();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1410);
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
		enterRule(_localctx, 188, RULE_declarationTypeSpecifier);
		try {
			setState(1422);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,136,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1413);
				match(DeclType);
				setState(1414);
				match(LeftParenthesis);
				setState(1415);
				expression(0);
				setState(1416);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1418);
				match(DeclType);
				setState(1419);
				match(LeftParenthesis);
				setState(1420);
				match(Auto);
				setState(1421);
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
		enterRule(_localctx, 190, RULE_elaboratedTypeSpecifier);
		int _la;
		try {
			setState(1448);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,141,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1424);
				classKey();
				setState(1426);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1425);
					attributeSpecifierSequence(0);
					}
				}

				setState(1429);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,138,_ctx) ) {
				case 1:
					{
					setState(1428);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1431);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1433);
				classKey();
				setState(1434);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1436);
				classKey();
				setState(1437);
				nestedNameSpecifier();
				setState(1439);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(1438);
					match(Template);
					}
				}

				setState(1441);
				simpleTemplateIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1443);
				match(Enum);
				setState(1445);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,140,_ctx) ) {
				case 1:
					{
					setState(1444);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1447);
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
		enterRule(_localctx, 192, RULE_enumSpecifier);
		int _la;
		try {
			setState(1463);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,143,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1450);
				enumHead();
				setState(1451);
				match(LeftBrace);
				setState(1453);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1452);
					enumeratorList(0);
					}
				}

				setState(1455);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1457);
				enumHead();
				setState(1458);
				match(LeftBrace);
				setState(1459);
				enumeratorList(0);
				setState(1460);
				match(Comma);
				setState(1461);
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
		enterRule(_localctx, 194, RULE_enumHead);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1465);
			enumKey();
			setState(1467);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1466);
				attributeSpecifierSequence(0);
				}
			}

			setState(1470);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || _la==DoubleColon || _la==Identifier) {
				{
				setState(1469);
				enumHeadName();
				}
			}

			setState(1473);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1472);
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
		enterRule(_localctx, 196, RULE_enumHeadName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1476);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,147,_ctx) ) {
			case 1:
				{
				setState(1475);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1478);
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
		enterRule(_localctx, 198, RULE_opaqueEnumDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1480);
			enumKey();
			setState(1482);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1481);
				attributeSpecifierSequence(0);
				}
			}

			setState(1485);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,149,_ctx) ) {
			case 1:
				{
				setState(1484);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1487);
			match(Identifier);
			setState(1489);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1488);
				enumBase();
				}
			}

			setState(1491);
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
		enterRule(_localctx, 200, RULE_enumKey);
		try {
			setState(1498);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,151,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1493);
				match(Enum);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1494);
				match(Enum);
				setState(1495);
				match(Class);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1496);
				match(Enum);
				setState(1497);
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
		enterRule(_localctx, 202, RULE_enumBase);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1500);
			match(Colon);
			setState(1501);
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
		int _startState = 204;
		enterRecursionRule(_localctx, 204, RULE_enumeratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1504);
			enumeratorDefinition();
			}
			_ctx.stop = _input.LT(-1);
			setState(1511);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,152,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new EnumeratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_enumeratorList);
					setState(1506);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1507);
					match(Comma);
					setState(1508);
					enumeratorDefinition();
					}
					} 
				}
				setState(1513);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,152,_ctx);
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
		enterRule(_localctx, 206, RULE_enumeratorDefinition);
		try {
			setState(1519);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,153,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1514);
				enumerator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1515);
				enumerator();
				setState(1516);
				match(Equal);
				setState(1517);
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
		enterRule(_localctx, 208, RULE_enumerator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1521);
			match(Identifier);
			setState(1523);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,154,_ctx) ) {
			case 1:
				{
				setState(1522);
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
		enterRule(_localctx, 210, RULE_namespaceDefinition);
		try {
			setState(1528);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,155,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1525);
				namedNamespaceDefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1526);
				unnamedNamespaceDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1527);
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
		enterRule(_localctx, 212, RULE_namedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1531);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1530);
				match(Inline);
				}
			}

			setState(1533);
			match(Namespace);
			setState(1535);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1534);
				attributeSpecifierSequence(0);
				}
			}

			setState(1537);
			match(Identifier);
			setState(1538);
			match(LeftBrace);
			setState(1539);
			namespaceBody();
			setState(1540);
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
		enterRule(_localctx, 214, RULE_unnamedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1543);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1542);
				match(Inline);
				}
			}

			setState(1545);
			match(Namespace);
			setState(1547);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1546);
				attributeSpecifierSequence(0);
				}
			}

			setState(1549);
			match(LeftBrace);
			setState(1550);
			namespaceBody();
			setState(1551);
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
		enterRule(_localctx, 216, RULE_nestedNamespaceDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1553);
			match(Namespace);
			setState(1554);
			enclosingNamespaceSpecifier();
			setState(1555);
			match(DoubleColon);
			setState(1556);
			match(Identifier);
			setState(1557);
			match(LeftBrace);
			setState(1558);
			namespaceBody();
			setState(1559);
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
		enterRule(_localctx, 218, RULE_enclosingNamespaceSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1561);
			match(Identifier);
			setState(1562);
			enclosingNamespaceSpecifier();
			setState(1563);
			match(DoubleColon);
			setState(1564);
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
		enterRule(_localctx, 220, RULE_namespaceBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1567);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
				{
				setState(1566);
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
		enterRule(_localctx, 222, RULE_namespaceAliasDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1569);
			match(Namespace);
			setState(1570);
			match(Identifier);
			setState(1571);
			match(Equal);
			setState(1572);
			qualifiedNamespaceSpecifier();
			setState(1573);
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
		enterRule(_localctx, 224, RULE_qualifiedNamespaceSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1576);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,161,_ctx) ) {
			case 1:
				{
				setState(1575);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1578);
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
		enterRule(_localctx, 226, RULE_usingDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1580);
			match(Using);
			setState(1581);
			usingDeclaratorList(0);
			setState(1582);
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
		int _startState = 228;
		enterRecursionRule(_localctx, 228, RULE_usingDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1585);
			usingDeclarator();
			setState(1587);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,162,_ctx) ) {
			case 1:
				{
				setState(1586);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(1597);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,164,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new UsingDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_usingDeclaratorList);
					setState(1589);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1590);
					match(Comma);
					setState(1591);
					usingDeclarator();
					setState(1593);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,163,_ctx) ) {
					case 1:
						{
						setState(1592);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(1599);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,164,_ctx);
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
		enterRule(_localctx, 230, RULE_usingDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1601);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,165,_ctx) ) {
			case 1:
				{
				setState(1600);
				typeName();
				}
				break;
			}
			setState(1603);
			nestedNameSpecifier();
			setState(1604);
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
		enterRule(_localctx, 232, RULE_usingDirective);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1607);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1606);
				attributeSpecifierSequence(0);
				}
			}

			setState(1609);
			match(Using);
			setState(1610);
			match(Namespace);
			setState(1612);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,167,_ctx) ) {
			case 1:
				{
				setState(1611);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1614);
			namespaceName();
			setState(1615);
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
		enterRule(_localctx, 234, RULE_asmDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1618);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1617);
				attributeSpecifierSequence(0);
				}
			}

			setState(1620);
			match(Asm);
			setState(1621);
			match(LeftParenthesis);
			setState(1622);
			match(StringLiteral);
			setState(1623);
			match(RightParenthesis);
			setState(1624);
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
		enterRule(_localctx, 236, RULE_linkageSpecification);
		int _la;
		try {
			setState(1636);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,170,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1626);
				match(Extern);
				setState(1627);
				match(StringLiteral);
				setState(1628);
				match(LeftBrace);
				setState(1630);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
					{
					setState(1629);
					declarationSequence(0);
					}
				}

				setState(1632);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1633);
				match(Extern);
				setState(1634);
				match(StringLiteral);
				setState(1635);
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
		int _startState = 238;
		enterRecursionRule(_localctx, 238, RULE_attributeSpecifierSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1639);
			attributeSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(1645);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,171,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AttributeSpecifierSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_attributeSpecifierSequence);
					setState(1641);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1642);
					attributeSpecifier();
					}
					} 
				}
				setState(1647);
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
		enterRule(_localctx, 240, RULE_attributeSpecifier);
		try {
			setState(1658);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1648);
				match(LeftBracket);
				setState(1649);
				match(LeftBracket);
				setState(1651);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,172,_ctx) ) {
				case 1:
					{
					setState(1650);
					attributeUsingPrefix();
					}
					break;
				}
				setState(1653);
				attributeList(0);
				setState(1654);
				match(RightBracket);
				setState(1655);
				match(RightBracket);
				}
				break;
			case AlignAs:
				enterOuterAlt(_localctx, 2);
				{
				setState(1657);
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
		enterRule(_localctx, 242, RULE_alignmentSpecifier);
		int _la;
		try {
			setState(1676);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,176,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1660);
				match(AlignAs);
				setState(1661);
				match(LeftParenthesis);
				setState(1662);
				typeIdentifier();
				setState(1664);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1663);
					match(Ellipsis);
					}
				}

				setState(1666);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1668);
				match(AlignAs);
				setState(1669);
				match(RightParenthesis);
				setState(1670);
				constantExpression();
				setState(1672);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1671);
					match(Ellipsis);
					}
				}

				setState(1674);
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
		enterRule(_localctx, 244, RULE_attributeUsingPrefix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1678);
			match(Using);
			setState(1679);
			attributeNamespace();
			setState(1680);
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
		int _startState = 246;
		enterRecursionRule(_localctx, 246, RULE_attributeList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1689);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,178,_ctx) ) {
			case 1:
				{
				setState(1684);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,177,_ctx) ) {
				case 1:
					{
					setState(1683);
					attribute();
					}
					break;
				}
				}
				break;
			case 2:
				{
				setState(1686);
				attribute();
				setState(1687);
				match(Ellipsis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1703);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,181,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1701);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,180,_ctx) ) {
					case 1:
						{
						_localctx = new AttributeListContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_attributeList);
						setState(1691);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1692);
						match(Comma);
						setState(1694);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,179,_ctx) ) {
						case 1:
							{
							setState(1693);
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
						setState(1696);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1697);
						match(Comma);
						setState(1698);
						attribute();
						setState(1699);
						match(Ellipsis);
						}
						break;
					}
					} 
				}
				setState(1705);
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
		enterRule(_localctx, 248, RULE_attribute);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1706);
			attributeToken();
			setState(1708);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,182,_ctx) ) {
			case 1:
				{
				setState(1707);
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
		enterRule(_localctx, 250, RULE_attributeToken);
		try {
			setState(1712);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,183,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1710);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1711);
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
		enterRule(_localctx, 252, RULE_attributeScopedToken);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1714);
			attributeNamespace();
			setState(1715);
			match(DoubleColon);
			setState(1716);
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
		enterRule(_localctx, 254, RULE_attributeNamespace);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1718);
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
		enterRule(_localctx, 256, RULE_attributeArgumentClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1720);
			match(LeftParenthesis);
			setState(1722);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
				{
				setState(1721);
				balancedTokenSequence(0);
				}
			}

			setState(1724);
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
		int _startState = 258;
		enterRecursionRule(_localctx, 258, RULE_balancedTokenSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1727);
			balancedToken();
			}
			_ctx.stop = _input.LT(-1);
			setState(1733);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,185,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BalancedTokenSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_balancedTokenSequence);
					setState(1729);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1730);
					balancedToken();
					}
					} 
				}
				setState(1735);
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
		enterRule(_localctx, 260, RULE_balancedToken);
		int _la;
		try {
			setState(1752);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1736);
				match(LeftParenthesis);
				setState(1738);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1737);
					balancedTokenSequence(0);
					}
				}

				setState(1740);
				match(RightParenthesis);
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1741);
				match(LeftBracket);
				setState(1743);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1742);
					balancedTokenSequence(0);
					}
				}

				setState(1745);
				match(RightBracket);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 3);
				{
				setState(1746);
				match(LeftBrace);
				setState(1748);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1747);
					balancedTokenSequence(0);
					}
				}

				setState(1750);
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
				setState(1751);
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
		int _startState = 262;
		enterRecursionRule(_localctx, 262, RULE_initializerDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1755);
			initializerDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(1762);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,190,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerDeclaratorList);
					setState(1757);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1758);
					match(Comma);
					setState(1759);
					initializerDeclarator();
					}
					} 
				}
				setState(1764);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,190,_ctx);
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
		enterRule(_localctx, 264, RULE_initializerDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1765);
			declarator();
			setState(1767);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,191,_ctx) ) {
			case 1:
				{
				setState(1766);
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
		enterRule(_localctx, 266, RULE_declarator);
		try {
			setState(1771);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,192,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1769);
				pointerDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1770);
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
		enterRule(_localctx, 268, RULE_pointerDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1773);
			pointerOperator();
			setState(1774);
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
		int _startState = 270;
		enterRecursionRule(_localctx, 270, RULE_noPointerDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1788);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DeclType:
			case Operator:
			case Ellipsis:
			case DoubleColon:
			case Tilde:
			case Identifier:
				{
				setState(1778);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1777);
					match(Ellipsis);
					}
				}

				setState(1780);
				identifierExpression();
				setState(1782);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,194,_ctx) ) {
				case 1:
					{
					setState(1781);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case LeftParenthesis:
				{
				setState(1784);
				match(LeftParenthesis);
				setState(1785);
				pointerDeclarator();
				setState(1786);
				match(RightParenthesis);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1803);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,199,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1801);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,198,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerDeclarator);
						setState(1790);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1791);
						match(LeftBracket);
						setState(1793);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1792);
							constantExpression();
							}
						}

						setState(1795);
						match(RightBracket);
						setState(1797);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,197,_ctx) ) {
						case 1:
							{
							setState(1796);
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
						setState(1799);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1800);
						parametersAndQualifiers();
						}
						break;
					}
					} 
				}
				setState(1805);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,199,_ctx);
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
		enterRule(_localctx, 272, RULE_parametersAndQualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1806);
			functionParameters();
			setState(1807);
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
		enterRule(_localctx, 274, RULE_functionParameters);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1809);
			match(LeftParenthesis);
			setState(1810);
			parameterDeclarationClause();
			setState(1811);
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
		enterRule(_localctx, 276, RULE_functionQualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1814);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,200,_ctx) ) {
			case 1:
				{
				setState(1813);
				constVolatileQualifierSequence();
				}
				break;
			}
			setState(1817);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,201,_ctx) ) {
			case 1:
				{
				setState(1816);
				referenceQualifier();
				}
				break;
			}
			setState(1820);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,202,_ctx) ) {
			case 1:
				{
				setState(1819);
				noExceptionSpecifier();
				}
				break;
			}
			setState(1823);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,203,_ctx) ) {
			case 1:
				{
				setState(1822);
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
		enterRule(_localctx, 278, RULE_trailingReturnType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1825);
			match(Arrow);
			setState(1826);
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
		enterRule(_localctx, 280, RULE_pointerOperator);
		try {
			setState(1851);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Asterisk:
				enterOuterAlt(_localctx, 1);
				{
				setState(1828);
				match(Asterisk);
				setState(1830);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,204,_ctx) ) {
				case 1:
					{
					setState(1829);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1833);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,205,_ctx) ) {
				case 1:
					{
					setState(1832);
					constVolatileQualifierSequence();
					}
					break;
				}
				}
				break;
			case Ampersand:
				enterOuterAlt(_localctx, 2);
				{
				setState(1835);
				match(Ampersand);
				setState(1837);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,206,_ctx) ) {
				case 1:
					{
					setState(1836);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case DoubleAmpersand:
				enterOuterAlt(_localctx, 3);
				{
				setState(1839);
				match(DoubleAmpersand);
				setState(1841);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,207,_ctx) ) {
				case 1:
					{
					setState(1840);
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
				setState(1843);
				nestedNameSpecifier();
				setState(1844);
				match(Asterisk);
				setState(1846);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,208,_ctx) ) {
				case 1:
					{
					setState(1845);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1849);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,209,_ctx) ) {
				case 1:
					{
					setState(1848);
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
		enterRule(_localctx, 282, RULE_constVolatileQualifierSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1853);
			constVolatileQualifier();
			setState(1855);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,211,_ctx) ) {
			case 1:
				{
				setState(1854);
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
		enterRule(_localctx, 284, RULE_constVolatileQualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1857);
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
		enterRule(_localctx, 286, RULE_referenceQualifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1859);
			match(Ampersand);
			setState(1860);
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
		enterRule(_localctx, 288, RULE_typeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1862);
			typeSpecifierSequence();
			setState(1864);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,212,_ctx) ) {
			case 1:
				{
				setState(1863);
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
		enterRule(_localctx, 290, RULE_definingTypeIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1866);
			definingTypeSpecifierSequence();
			setState(1868);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || ((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (LeftBracket - 82)) | (1L << (LeftParenthesis - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
				{
				setState(1867);
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
		enterRule(_localctx, 292, RULE_abstractDeclarator);
		try {
			setState(1878);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,215,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1870);
				pointerAbstractDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1872);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,214,_ctx) ) {
				case 1:
					{
					setState(1871);
					noPointerAbstractDeclarator(0);
					}
					break;
				}
				setState(1874);
				parametersAndQualifiers();
				setState(1875);
				trailingReturnType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1877);
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
		enterRule(_localctx, 294, RULE_pointerAbstractDeclarator);
		try {
			setState(1885);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBracket:
			case LeftParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1880);
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
				setState(1881);
				pointerOperator();
				setState(1883);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,216,_ctx) ) {
				case 1:
					{
					setState(1882);
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
		int _startState = 296;
		enterRecursionRule(_localctx, 296, RULE_noPointerAbstractDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1901);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,220,_ctx) ) {
			case 1:
				{
				setState(1888);
				parametersAndQualifiers();
				}
				break;
			case 2:
				{
				setState(1889);
				match(LeftBracket);
				setState(1891);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1890);
					constantExpression();
					}
				}

				setState(1893);
				match(RightBracket);
				setState(1895);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,219,_ctx) ) {
				case 1:
					{
					setState(1894);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 3:
				{
				setState(1897);
				match(LeftParenthesis);
				setState(1898);
				pointerAbstractDeclarator();
				setState(1899);
				match(RightParenthesis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1916);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,224,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1914);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,223,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1903);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1904);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1905);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1906);
						match(LeftBracket);
						setState(1908);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1907);
							constantExpression();
							}
						}

						setState(1910);
						match(RightBracket);
						setState(1912);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,222,_ctx) ) {
						case 1:
							{
							setState(1911);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1918);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,224,_ctx);
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
		enterRule(_localctx, 298, RULE_abstractPackDeclarator);
		try {
			setState(1923);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ellipsis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1919);
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
				setState(1920);
				pointerOperator();
				setState(1921);
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
		int _startState = 300;
		enterRecursionRule(_localctx, 300, RULE_noPointerAbstractPackDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1926);
			match(Ellipsis);
			}
			_ctx.stop = _input.LT(-1);
			setState(1941);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,229,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1939);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,228,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1928);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1929);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1930);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1931);
						match(LeftBracket);
						setState(1933);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1932);
							constantExpression();
							}
						}

						setState(1935);
						match(RightBracket);
						setState(1937);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,227,_ctx) ) {
						case 1:
							{
							setState(1936);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1943);
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
		enterRule(_localctx, 302, RULE_parameterDeclarationClause);
		int _la;
		try {
			setState(1954);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,232,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1945);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << Struct) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (DoubleColon - 67)))) != 0) || _la==Identifier) {
					{
					setState(1944);
					parameterDeclarationList(0);
					}
				}

				setState(1948);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1947);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1950);
				parameterDeclarationList(0);
				setState(1951);
				match(Comma);
				setState(1952);
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
		int _startState = 304;
		enterRecursionRule(_localctx, 304, RULE_parameterDeclarationList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1957);
			parameterDeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1964);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,233,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ParameterDeclarationListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_parameterDeclarationList);
					setState(1959);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1960);
					match(Comma);
					setState(1961);
					parameterDeclaration();
					}
					} 
				}
				setState(1966);
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
		enterRule(_localctx, 306, RULE_parameterDeclaration);
		int _la;
		try {
			setState(1981);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,236,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1968);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1967);
					attributeSpecifierSequence(0);
					}
				}

				setState(1970);
				declarationSpecifierSequence();
				setState(1971);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1974);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1973);
					attributeSpecifierSequence(0);
					}
				}

				setState(1976);
				declarationSpecifierSequence();
				setState(1977);
				declarator();
				setState(1978);
				match(Equal);
				setState(1979);
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
		enterRule(_localctx, 308, RULE_functionDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1984);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1983);
				attributeSpecifierSequence(0);
				}
			}

			setState(1987);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,238,_ctx) ) {
			case 1:
				{
				setState(1986);
				declarationSpecifierSequence();
				}
				break;
			}
			setState(1989);
			functionDeclarator();
			setState(1991);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Override || _la==Final) {
				{
				setState(1990);
				virtualSpecifierSequence(0);
				}
			}

			setState(1993);
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
		enterRule(_localctx, 310, RULE_functionDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1995);
			identifierExpression();
			setState(1996);
			functionParameters();
			setState(1997);
			functionQualifiers();
			setState(1999);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(1998);
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
		enterRule(_localctx, 312, RULE_functionBody);
		try {
			setState(2005);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,241,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2001);
				regularFunctionBody();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2002);
				functionTryBlock();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2003);
				explicitlyDefaultedFunction();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2004);
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
		enterRule(_localctx, 314, RULE_regularFunctionBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2008);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2007);
				constructorInitializer();
				}
			}

			setState(2010);
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
		enterRule(_localctx, 316, RULE_explicitlyDefaultedFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2012);
			match(Equal);
			setState(2013);
			match(Default);
			setState(2014);
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
		enterRule(_localctx, 318, RULE_deletedFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2016);
			match(Equal);
			setState(2017);
			match(Delete);
			setState(2018);
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
		enterRule(_localctx, 320, RULE_initializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2020);
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
		enterRule(_localctx, 322, RULE_braceOrEqualInitializer);
		try {
			setState(2025);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Equal:
				enterOuterAlt(_localctx, 1);
				{
				setState(2022);
				match(Equal);
				setState(2023);
				initializerClause();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2024);
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
		enterRule(_localctx, 324, RULE_initializerClause);
		try {
			setState(2029);
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
				setState(2027);
				assignmentExpression();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2028);
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
		int _startState = 326;
		enterRecursionRule(_localctx, 326, RULE_initializerList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2032);
			initializerClause();
			setState(2034);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,245,_ctx) ) {
			case 1:
				{
				setState(2033);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2044);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,247,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerList);
					setState(2036);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2037);
					match(Comma);
					setState(2038);
					initializerClause();
					setState(2040);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,246,_ctx) ) {
					case 1:
						{
						setState(2039);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2046);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,247,_ctx);
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
		enterRule(_localctx, 328, RULE_bracedInitializerList);
		int _la;
		try {
			setState(2056);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,249,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2047);
				match(LeftBrace);
				setState(2048);
				initializerList(0);
				setState(2050);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(2049);
					match(Comma);
					}
				}

				setState(2052);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2054);
				match(LeftBrace);
				setState(2055);
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
		enterRule(_localctx, 330, RULE_expressionOrBracedInitializerList);
		try {
			setState(2060);
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
				setState(2058);
				expression(0);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2059);
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
		enterRule(_localctx, 332, RULE_classSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2062);
			classHead();
			setState(2063);
			match(LeftBrace);
			setState(2065);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Colon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
				{
				setState(2064);
				memberSpecification();
				}
			}

			setState(2067);
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
		enterRule(_localctx, 334, RULE_classHead);
		int _la;
		try {
			setState(2087);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,257,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2069);
				classKey();
				setState(2071);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2070);
					attributeSpecifierSequence(0);
					}
				}

				setState(2073);
				classHeadName();
				setState(2075);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Final) {
					{
					setState(2074);
					classVirtualSpecifier();
					}
				}

				setState(2078);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2077);
					baseClause();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2080);
				classKey();
				setState(2082);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2081);
					attributeSpecifier();
					}
				}

				setState(2085);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2084);
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
		enterRule(_localctx, 336, RULE_classHeadName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2090);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,258,_ctx) ) {
			case 1:
				{
				setState(2089);
				nestedNameSpecifier();
				}
				break;
			}
			setState(2092);
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
		enterRule(_localctx, 338, RULE_classVirtualSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2094);
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
		enterRule(_localctx, 340, RULE_classKey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2096);
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
		enterRule(_localctx, 342, RULE_memberSpecification);
		int _la;
		try {
			setState(2107);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AlignAs:
			case Auto:
			case Bool:
			case Char:
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
				setState(2098);
				memberDeclaration();
				setState(2100);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Colon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
					{
					setState(2099);
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
				setState(2102);
				accessSpecifier();
				setState(2103);
				match(Colon);
				setState(2105);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Colon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
					{
					setState(2104);
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
		enterRule(_localctx, 344, RULE_memberDeclaration);
		int _la;
		try {
			setState(2126);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,265,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2110);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,262,_ctx) ) {
				case 1:
					{
					setState(2109);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(2113);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,263,_ctx) ) {
				case 1:
					{
					setState(2112);
					declarationSpecifierSequence();
					}
					break;
				}
				setState(2116);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << DeclType) | (1L << Operator))) != 0) || ((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (LeftBracket - 82)) | (1L << (LeftParenthesis - 82)) | (1L << (Colon - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (Tilde - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
					{
					setState(2115);
					memberDeclaratorList(0);
					}
				}

				setState(2118);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2119);
				functionDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2120);
				usingDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2121);
				staticAssertDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2122);
				templateDeclaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2123);
				deductionGuide();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2124);
				aliasDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2125);
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
		int _startState = 346;
		enterRecursionRule(_localctx, 346, RULE_memberDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2129);
			memberDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(2136);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,266,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberDeclaratorList);
					setState(2131);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2132);
					match(Comma);
					setState(2133);
					memberDeclarator();
					}
					} 
				}
				setState(2138);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,266,_ctx);
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
		enterRule(_localctx, 348, RULE_memberDeclarator);
		int _la;
		try {
			setState(2158);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,272,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2139);
				declarator();
				setState(2141);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,267,_ctx) ) {
				case 1:
					{
					setState(2140);
					virtualSpecifierSequence(0);
					}
					break;
				}
				setState(2144);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,268,_ctx) ) {
				case 1:
					{
					setState(2143);
					pureSpecifier();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2146);
				declarator();
				setState(2148);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,269,_ctx) ) {
				case 1:
					{
					setState(2147);
					braceOrEqualInitializer();
					}
					break;
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2151);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2150);
					match(Identifier);
					}
				}

				setState(2154);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2153);
					attributeSpecifierSequence(0);
					}
				}

				setState(2156);
				match(Colon);
				setState(2157);
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
		int _startState = 350;
		enterRecursionRule(_localctx, 350, RULE_virtualSpecifierSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2161);
			virtualSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(2167);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,273,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new VirtualSpecifierSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_virtualSpecifierSequence);
					setState(2163);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2164);
					virtualSpecifier();
					}
					} 
				}
				setState(2169);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,273,_ctx);
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
		enterRule(_localctx, 352, RULE_virtualSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2170);
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
		enterRule(_localctx, 354, RULE_pureSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2172);
			match(Equal);
			setState(2173);
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
		enterRule(_localctx, 356, RULE_baseClause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2175);
			match(Colon);
			setState(2176);
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
		int _startState = 358;
		enterRecursionRule(_localctx, 358, RULE_baseSpecifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2179);
			baseSpecifier();
			setState(2181);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,274,_ctx) ) {
			case 1:
				{
				setState(2180);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2191);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,276,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BaseSpecifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_baseSpecifierList);
					setState(2183);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2184);
					match(Comma);
					setState(2185);
					baseSpecifier();
					setState(2187);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,275,_ctx) ) {
					case 1:
						{
						setState(2186);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2193);
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
		enterRule(_localctx, 360, RULE_baseSpecifier);
		int _la;
		try {
			setState(2215);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,282,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2195);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2194);
					attributeSpecifierSequence(0);
					}
				}

				setState(2197);
				classOrDecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2199);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2198);
					attributeSpecifierSequence(0);
					}
				}

				setState(2201);
				match(Virtual);
				setState(2203);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Private) | (1L << Protected) | (1L << Public))) != 0)) {
					{
					setState(2202);
					accessSpecifier();
					}
				}

				setState(2205);
				classOrDecltype();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2207);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2206);
					attributeSpecifierSequence(0);
					}
				}

				setState(2209);
				accessSpecifier();
				setState(2211);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Virtual) {
					{
					setState(2210);
					match(Virtual);
					}
				}

				setState(2213);
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
		enterRule(_localctx, 362, RULE_classOrDecltype);
		try {
			setState(2226);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,284,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2218);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,283,_ctx) ) {
				case 1:
					{
					setState(2217);
					nestedNameSpecifier();
					}
					break;
				}
				setState(2220);
				className();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2221);
				nestedNameSpecifier();
				setState(2222);
				match(Template);
				setState(2223);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2225);
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
		enterRule(_localctx, 364, RULE_accessSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2228);
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
		enterRule(_localctx, 366, RULE_conversionFunctionIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2230);
			match(Operator);
			setState(2231);
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
		enterRule(_localctx, 368, RULE_conversionTypeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2233);
			typeSpecifierSequence();
			setState(2235);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,285,_ctx) ) {
			case 1:
				{
				setState(2234);
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
		enterRule(_localctx, 370, RULE_conversionDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2237);
			pointerOperator();
			setState(2239);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,286,_ctx) ) {
			case 1:
				{
				setState(2238);
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
		enterRule(_localctx, 372, RULE_constructorInitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2241);
			match(Colon);
			setState(2242);
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
		int _startState = 374;
		enterRecursionRule(_localctx, 374, RULE_memberInitializerList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2245);
			memberInitializer();
			setState(2247);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,287,_ctx) ) {
			case 1:
				{
				setState(2246);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2257);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,289,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberInitializerListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberInitializerList);
					setState(2249);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2250);
					match(Comma);
					setState(2251);
					memberInitializer();
					setState(2253);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,288,_ctx) ) {
					case 1:
						{
						setState(2252);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2259);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,289,_ctx);
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
		enterRule(_localctx, 376, RULE_memberInitializer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2260);
			memberInitializerIdentifier();
			setState(2261);
			match(LeftParenthesis);
			setState(2263);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(2262);
				expressionList();
				}
			}

			setState(2265);
			match(RightParenthesis);
			setState(2266);
			memberInitializerIdentifier();
			setState(2267);
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
		enterRule(_localctx, 378, RULE_memberInitializerIdentifier);
		try {
			setState(2271);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,291,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2269);
				classOrDecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2270);
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
		enterRule(_localctx, 380, RULE_operatorFunctionIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2273);
			match(Operator);
			setState(2274);
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
		enterRule(_localctx, 382, RULE_anyOperator);
		try {
			setState(2324);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,292,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2276);
				match(New);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2277);
				match(Delete);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2278);
				match(New);
				setState(2279);
				match(LeftBrace);
				setState(2280);
				match(RightBracket);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2281);
				match(Delete);
				setState(2282);
				match(LeftBrace);
				setState(2283);
				match(RightBracket);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2284);
				match(Plus);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2285);
				match(Minus);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2286);
				match(Asterisk);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2287);
				match(ForwardSlash);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2288);
				match(Percent);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2289);
				match(Caret);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2290);
				match(Ampersand);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(2291);
				match(VerticalBar);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(2292);
				match(Tilde);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(2293);
				match(ExclamationMark);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(2294);
				match(Equal);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(2295);
				match(LessThan);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(2296);
				match(GreaterThan);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(2297);
				match(PlusEqual);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(2298);
				match(MinusEqual);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(2299);
				match(AsteriskEqual);
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(2300);
				match(ForwardSlashEqual);
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(2301);
				match(PercentEqual);
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(2302);
				match(CaretEqual);
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(2303);
				match(AmpersandEqual);
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(2304);
				match(VerticalBarEqual);
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(2305);
				match(DoubleLessThan);
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(2306);
				match(DoubleGreaterThan);
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(2307);
				match(DoubleGreaterThanEqual);
				}
				break;
			case 29:
				enterOuterAlt(_localctx, 29);
				{
				setState(2308);
				match(DoubleLessThanEqual);
				}
				break;
			case 30:
				enterOuterAlt(_localctx, 30);
				{
				setState(2309);
				match(DoubleEqual);
				}
				break;
			case 31:
				enterOuterAlt(_localctx, 31);
				{
				setState(2310);
				match(ExclamationMarkEqual);
				}
				break;
			case 32:
				enterOuterAlt(_localctx, 32);
				{
				setState(2311);
				match(LessThanEqual);
				}
				break;
			case 33:
				enterOuterAlt(_localctx, 33);
				{
				setState(2312);
				match(GreaterThanEqual);
				}
				break;
			case 34:
				enterOuterAlt(_localctx, 34);
				{
				setState(2313);
				match(DoubleAmpersand);
				}
				break;
			case 35:
				enterOuterAlt(_localctx, 35);
				{
				setState(2314);
				match(DoubleVerticalBar);
				}
				break;
			case 36:
				enterOuterAlt(_localctx, 36);
				{
				setState(2315);
				match(DoublePlus);
				}
				break;
			case 37:
				enterOuterAlt(_localctx, 37);
				{
				setState(2316);
				match(DoubleMinus);
				}
				break;
			case 38:
				enterOuterAlt(_localctx, 38);
				{
				setState(2317);
				match(Comma);
				}
				break;
			case 39:
				enterOuterAlt(_localctx, 39);
				{
				setState(2318);
				match(ArrowAsterisk);
				}
				break;
			case 40:
				enterOuterAlt(_localctx, 40);
				{
				setState(2319);
				match(Arrow);
				}
				break;
			case 41:
				enterOuterAlt(_localctx, 41);
				{
				setState(2320);
				match(LeftParenthesis);
				setState(2321);
				match(RightParenthesis);
				}
				break;
			case 42:
				enterOuterAlt(_localctx, 42);
				{
				setState(2322);
				match(LeftBracket);
				setState(2323);
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
		enterRule(_localctx, 384, RULE_literalOperatorIdentifier);
		try {
			setState(2331);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,293,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2326);
				match(Operator);
				setState(2327);
				match(StringLiteral);
				setState(2328);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2329);
				match(Operator);
				setState(2330);
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
		enterRule(_localctx, 386, RULE_templateDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2333);
			match(Template);
			setState(2334);
			match(LessThan);
			setState(2335);
			templateParameterList(0);
			setState(2336);
			match(GreaterThan);
			setState(2337);
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
		int _startState = 388;
		enterRecursionRule(_localctx, 388, RULE_templateParameterList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2340);
			templateParameter();
			}
			_ctx.stop = _input.LT(-1);
			setState(2347);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,294,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateParameterListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateParameterList);
					setState(2342);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2343);
					match(Comma);
					setState(2344);
					templateParameter();
					}
					} 
				}
				setState(2349);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,294,_ctx);
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
		enterRule(_localctx, 390, RULE_templateParameter);
		try {
			setState(2352);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,295,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2350);
				typeParameter();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2351);
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
		enterRule(_localctx, 392, RULE_typeParameter);
		int _la;
		try {
			setState(2390);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,302,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2354);
				typeParameterKey();
				setState(2356);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,296,_ctx) ) {
				case 1:
					{
					setState(2355);
					match(Ellipsis);
					}
					break;
				}
				setState(2359);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,297,_ctx) ) {
				case 1:
					{
					setState(2358);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2361);
				typeParameterKey();
				setState(2363);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2362);
					match(Identifier);
					}
				}

				setState(2365);
				match(Equal);
				setState(2366);
				typeIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2368);
				match(Template);
				setState(2369);
				match(LessThan);
				setState(2370);
				templateParameterList(0);
				setState(2371);
				match(GreaterThan);
				setState(2372);
				typeParameterKey();
				setState(2374);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,299,_ctx) ) {
				case 1:
					{
					setState(2373);
					match(Ellipsis);
					}
					break;
				}
				setState(2377);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,300,_ctx) ) {
				case 1:
					{
					setState(2376);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2379);
				match(Template);
				setState(2380);
				match(LessThan);
				setState(2381);
				templateParameterList(0);
				setState(2382);
				match(GreaterThan);
				setState(2383);
				typeParameterKey();
				setState(2385);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2384);
					match(Identifier);
					}
				}

				setState(2387);
				match(Equal);
				setState(2388);
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
		enterRule(_localctx, 394, RULE_typeParameterKey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2392);
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
		enterRule(_localctx, 396, RULE_simpleTemplateIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2394);
			templateName();
			setState(2395);
			match(LessThan);
			setState(2397);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(2396);
				templateArgumentList(0);
				}
			}

			setState(2399);
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
		enterRule(_localctx, 398, RULE_templateIdentifier);
		int _la;
		try {
			setState(2416);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,306,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2401);
				simpleTemplateIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2402);
				operatorFunctionIdentifier();
				setState(2403);
				match(LessThan);
				setState(2405);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(2404);
					templateArgumentList(0);
					}
				}

				setState(2407);
				match(GreaterThan);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2409);
				literalOperatorIdentifier();
				setState(2410);
				match(LessThan);
				setState(2412);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(2411);
					templateArgumentList(0);
					}
				}

				setState(2414);
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
		int _startState = 400;
		enterRecursionRule(_localctx, 400, RULE_templateArgumentList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2419);
			templateArgument();
			setState(2421);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,307,_ctx) ) {
			case 1:
				{
				setState(2420);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2431);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,309,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateArgumentListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateArgumentList);
					setState(2423);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2424);
					match(Comma);
					setState(2425);
					templateArgument();
					setState(2427);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,308,_ctx) ) {
					case 1:
						{
						setState(2426);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2433);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,309,_ctx);
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
		enterRule(_localctx, 402, RULE_templateArgument);
		try {
			setState(2437);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,310,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2434);
				constantExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2435);
				typeIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2436);
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
		enterRule(_localctx, 404, RULE_typenameSpecifier);
		int _la;
		try {
			setState(2450);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,312,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2439);
				match(TypeName);
				setState(2440);
				nestedNameSpecifier();
				setState(2441);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2443);
				match(TypeName);
				setState(2444);
				nestedNameSpecifier();
				setState(2446);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(2445);
					match(Template);
					}
				}

				setState(2448);
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
		enterRule(_localctx, 406, RULE_explicitInstantiation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2453);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Extern) {
				{
				setState(2452);
				match(Extern);
				}
			}

			setState(2455);
			match(Template);
			setState(2456);
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
		enterRule(_localctx, 408, RULE_explicitSpecialization);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2458);
			match(Template);
			setState(2459);
			match(LessThan);
			setState(2460);
			match(GreaterThan);
			setState(2461);
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
		enterRule(_localctx, 410, RULE_deductionGuide);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2464);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Explicit) {
				{
				setState(2463);
				match(Explicit);
				}
			}

			setState(2466);
			templateName();
			setState(2467);
			match(LeftParenthesis);
			setState(2468);
			parameterDeclarationClause();
			setState(2469);
			match(RightParenthesis);
			setState(2470);
			match(Arrow);
			setState(2471);
			simpleTemplateIdentifier();
			setState(2472);
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
		enterRule(_localctx, 412, RULE_tryBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2474);
			match(Try);
			setState(2475);
			compoundStatement();
			setState(2476);
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
		enterRule(_localctx, 414, RULE_functionTryBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2478);
			match(Try);
			setState(2480);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2479);
				constructorInitializer();
				}
			}

			setState(2482);
			compoundStatement();
			setState(2483);
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
		enterRule(_localctx, 416, RULE_handlerSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2485);
			handler();
			setState(2487);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,316,_ctx) ) {
			case 1:
				{
				setState(2486);
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
		enterRule(_localctx, 418, RULE_handler);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2489);
			match(Catch);
			setState(2490);
			match(LeftParenthesis);
			setState(2491);
			exceptionDeclaration();
			setState(2492);
			match(RightParenthesis);
			setState(2493);
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
		enterRule(_localctx, 420, RULE_exceptionDeclaration);
		int _la;
		try {
			setState(2509);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,320,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2496);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2495);
					attributeSpecifierSequence(0);
					}
				}

				setState(2498);
				typeSpecifierSequence();
				setState(2499);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2502);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2501);
					attributeSpecifierSequence(0);
					}
				}

				setState(2504);
				typeSpecifierSequence();
				setState(2506);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || ((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (LeftBracket - 82)) | (1L << (LeftParenthesis - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
					{
					setState(2505);
					abstractDeclarator();
					}
				}

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2508);
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
		enterRule(_localctx, 422, RULE_noExceptionSpecifier);
		try {
			setState(2520);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,321,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2511);
				match(NoExcept);
				setState(2512);
				match(LeftParenthesis);
				setState(2513);
				constantExpression();
				setState(2514);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2516);
				match(NoExcept);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2517);
				match(Throw);
				setState(2518);
				match(LeftParenthesis);
				setState(2519);
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
		int _startState = 424;
		enterRecursionRule(_localctx, 424, RULE_identifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2523);
			match(Identifier);
			}
			_ctx.stop = _input.LT(-1);
			setState(2530);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,322,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new IdentifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_identifierList);
					setState(2525);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2526);
					match(Comma);
					setState(2527);
					match(Identifier);
					}
					} 
				}
				setState(2532);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,322,_ctx);
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
		enterRule(_localctx, 426, RULE_literal);
		try {
			setState(2540);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Zero:
			case IntegerLiteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(2533);
				integerLiteral();
				}
				break;
			case FloatingPointLiteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(2534);
				match(FloatingPointLiteral);
				}
				break;
			case CharacterLiteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(2535);
				match(CharacterLiteral);
				}
				break;
			case StringLiteral:
				enterOuterAlt(_localctx, 4);
				{
				setState(2536);
				match(StringLiteral);
				}
				break;
			case False:
			case True:
				enterOuterAlt(_localctx, 5);
				{
				setState(2537);
				booleanLiteral();
				}
				break;
			case Nullptr:
				enterOuterAlt(_localctx, 6);
				{
				setState(2538);
				pointerLiteral();
				}
				break;
			case UserDefinedIntegerLiteral:
			case UserDefinedFloatingPointLiteral:
			case UserDefinedCharacterLiteral:
			case UserDefinedStringLiteral:
				enterOuterAlt(_localctx, 7);
				{
				setState(2539);
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
		enterRule(_localctx, 428, RULE_integerLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2542);
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
		enterRule(_localctx, 430, RULE_booleanLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2544);
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
		enterRule(_localctx, 432, RULE_pointerLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2546);
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
		enterRule(_localctx, 434, RULE_userDefinedLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2548);
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
		case 18:
			return captureList_sempred((CaptureListContext)_localctx, predIndex);
		case 30:
			return postfixExpression_sempred((PostfixExpressionContext)_localctx, predIndex);
		case 39:
			return noPointerNewDeclarator_sempred((NoPointerNewDeclaratorContext)_localctx, predIndex);
		case 44:
			return pointerManipulationExpression_sempred((PointerManipulationExpressionContext)_localctx, predIndex);
		case 45:
			return multiplicativeExpression_sempred((MultiplicativeExpressionContext)_localctx, predIndex);
		case 46:
			return additiveExpression_sempred((AdditiveExpressionContext)_localctx, predIndex);
		case 47:
			return shiftExpression_sempred((ShiftExpressionContext)_localctx, predIndex);
		case 48:
			return relationalExpression_sempred((RelationalExpressionContext)_localctx, predIndex);
		case 49:
			return equalityExpression_sempred((EqualityExpressionContext)_localctx, predIndex);
		case 50:
			return andExpression_sempred((AndExpressionContext)_localctx, predIndex);
		case 51:
			return exclusiveOrExpression_sempred((ExclusiveOrExpressionContext)_localctx, predIndex);
		case 52:
			return inclusiveOrExpression_sempred((InclusiveOrExpressionContext)_localctx, predIndex);
		case 53:
			return logicalAndExpression_sempred((LogicalAndExpressionContext)_localctx, predIndex);
		case 54:
			return logicalOrExpression_sempred((LogicalOrExpressionContext)_localctx, predIndex);
		case 59:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		case 67:
			return statementSequence_sempred((StatementSequenceContext)_localctx, predIndex);
		case 75:
			return declarationSequence_sempred((DeclarationSequenceContext)_localctx, predIndex);
		case 102:
			return enumeratorList_sempred((EnumeratorListContext)_localctx, predIndex);
		case 114:
			return usingDeclaratorList_sempred((UsingDeclaratorListContext)_localctx, predIndex);
		case 119:
			return attributeSpecifierSequence_sempred((AttributeSpecifierSequenceContext)_localctx, predIndex);
		case 123:
			return attributeList_sempred((AttributeListContext)_localctx, predIndex);
		case 129:
			return balancedTokenSequence_sempred((BalancedTokenSequenceContext)_localctx, predIndex);
		case 131:
			return initializerDeclaratorList_sempred((InitializerDeclaratorListContext)_localctx, predIndex);
		case 135:
			return noPointerDeclarator_sempred((NoPointerDeclaratorContext)_localctx, predIndex);
		case 148:
			return noPointerAbstractDeclarator_sempred((NoPointerAbstractDeclaratorContext)_localctx, predIndex);
		case 150:
			return noPointerAbstractPackDeclarator_sempred((NoPointerAbstractPackDeclaratorContext)_localctx, predIndex);
		case 152:
			return parameterDeclarationList_sempred((ParameterDeclarationListContext)_localctx, predIndex);
		case 163:
			return initializerList_sempred((InitializerListContext)_localctx, predIndex);
		case 173:
			return memberDeclaratorList_sempred((MemberDeclaratorListContext)_localctx, predIndex);
		case 175:
			return virtualSpecifierSequence_sempred((VirtualSpecifierSequenceContext)_localctx, predIndex);
		case 179:
			return baseSpecifierList_sempred((BaseSpecifierListContext)_localctx, predIndex);
		case 187:
			return memberInitializerList_sempred((MemberInitializerListContext)_localctx, predIndex);
		case 194:
			return templateParameterList_sempred((TemplateParameterListContext)_localctx, predIndex);
		case 200:
			return templateArgumentList_sempred((TemplateArgumentListContext)_localctx, predIndex);
		case 212:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u008c\u09f9\4\2\t"+
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
		"\t\u00d6\4\u00d7\t\u00d7\4\u00d8\t\u00d8\4\u00d9\t\u00d9\4\u00da\t\u00da"+
		"\4\u00db\t\u00db\3\2\3\2\3\3\3\3\5\3\u01bb\n\3\3\4\3\4\3\5\3\5\5\5\u01c1"+
		"\n\5\3\6\3\6\3\7\3\7\3\b\5\b\u01c8\n\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\t\3\t\5\t\u01d5\n\t\3\n\3\n\5\n\u01d9\n\n\3\13\3\13\3\13\3\13\3"+
		"\13\3\13\3\13\5\13\u01e2\n\13\3\f\3\f\5\f\u01e6\n\f\3\f\3\f\3\r\3\r\5"+
		"\r\u01ec\n\r\3\r\3\r\3\r\5\r\u01f1\n\r\3\r\3\r\3\r\5\r\u01f6\n\r\5\r\u01f8"+
		"\n\r\3\16\3\16\3\16\5\16\u01fd\n\16\3\16\5\16\u0200\n\16\3\16\3\16\3\16"+
		"\5\16\u0205\n\16\5\16\u0207\n\16\3\17\3\17\5\17\u020b\n\17\3\17\3\17\3"+
		"\20\3\20\5\20\u0211\n\20\3\20\3\20\3\21\3\21\3\21\3\21\5\21\u0219\n\21"+
		"\3\21\5\21\u021c\n\21\3\21\5\21\u021f\n\21\3\21\5\21\u0222\n\21\3\22\3"+
		"\22\3\22\3\22\3\22\3\22\5\22\u022a\n\22\3\23\3\23\3\24\3\24\3\24\5\24"+
		"\u0231\n\24\3\24\3\24\3\24\3\24\5\24\u0237\n\24\7\24\u0239\n\24\f\24\16"+
		"\24\u023c\13\24\3\25\3\25\3\25\3\26\5\26\u0242\n\26\3\26\3\26\3\26\3\26"+
		"\5\26\u0248\n\26\3\27\5\27\u024b\n\27\3\27\3\27\3\27\3\30\3\30\3\30\3"+
		"\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3"+
		"\30\3\30\3\30\5\30\u0264\n\30\3\31\3\31\3\32\3\32\3\32\5\32\u026b\n\32"+
		"\3\32\3\32\3\32\3\32\3\32\5\32\u0272\n\32\3\32\3\32\5\32\u0276\n\32\3"+
		"\33\3\33\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\35\3\35\3\36\3\36\3"+
		"\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\5\37\u0290\n\37\3 \3"+
		" \3 \3 \3 \3 \3 \3 \3 \3 \3 \5 \u029d\n \3 \3 \3 \3 \3 \3 \3 \3 \5 \u02a7"+
		"\n \3 \3 \3 \3 \5 \u02ad\n \3 \3 \3 \3 \3 \3 \3 \3 \7 \u02b7\n \f \16"+
		" \u02ba\13 \3!\3!\3\"\5\"\u02bf\n\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3"+
		"\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\5\"\u02d1\n\"\3#\3#\3#\3#\3#\3#\3#\3#\3"+
		"#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\5#\u02ef\n"+
		"#\3$\3$\3%\5%\u02f4\n%\3%\3%\5%\u02f8\n%\3%\3%\5%\u02fc\n%\3%\5%\u02ff"+
		"\n%\3%\3%\5%\u0303\n%\3%\3%\3%\3%\5%\u0309\n%\5%\u030b\n%\3&\3&\3&\3&"+
		"\3\'\3\'\5\'\u0313\n\'\3(\3(\5(\u0317\n(\3(\3(\3)\3)\3)\3)\3)\5)\u0320"+
		"\n)\3)\3)\3)\3)\3)\5)\u0327\n)\7)\u0329\n)\f)\16)\u032c\13)\3*\3*\5*\u0330"+
		"\n*\3*\3*\5*\u0334\n*\3+\5+\u0337\n+\3+\3+\3+\5+\u033c\n+\3+\3+\3+\3+"+
		"\5+\u0342\n+\3,\3,\3,\3,\3,\3-\3-\3-\3-\3-\3-\5-\u034f\n-\3.\3.\3.\3."+
		"\3.\3.\3.\3.\3.\7.\u035a\n.\f.\16.\u035d\13.\3/\3/\3/\3/\3/\3/\3/\3/\3"+
		"/\3/\3/\3/\7/\u036b\n/\f/\16/\u036e\13/\3\60\3\60\3\60\3\60\3\60\3\60"+
		"\3\60\3\60\3\60\7\60\u0379\n\60\f\60\16\60\u037c\13\60\3\61\3\61\3\61"+
		"\3\61\3\61\3\61\3\61\3\61\3\61\7\61\u0387\n\61\f\61\16\61\u038a\13\61"+
		"\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62"+
		"\3\62\7\62\u039b\n\62\f\62\16\62\u039e\13\62\3\63\3\63\3\63\3\63\3\63"+
		"\3\63\3\63\3\63\3\63\7\63\u03a9\n\63\f\63\16\63\u03ac\13\63\3\64\3\64"+
		"\3\64\3\64\3\64\3\64\7\64\u03b4\n\64\f\64\16\64\u03b7\13\64\3\65\3\65"+
		"\3\65\3\65\3\65\3\65\7\65\u03bf\n\65\f\65\16\65\u03c2\13\65\3\66\3\66"+
		"\3\66\3\66\3\66\3\66\7\66\u03ca\n\66\f\66\16\66\u03cd\13\66\3\67\3\67"+
		"\3\67\3\67\3\67\3\67\7\67\u03d5\n\67\f\67\16\67\u03d8\13\67\38\38\38\3"+
		"8\38\38\78\u03e0\n8\f8\168\u03e3\138\39\39\39\39\39\39\39\59\u03ec\n9"+
		"\3:\3:\5:\u03f0\n:\3;\3;\3;\3;\3;\3;\5;\u03f8\n;\3<\3<\3=\3=\3=\3=\3="+
		"\3=\7=\u0402\n=\f=\16=\u0405\13=\3>\3>\3?\3?\5?\u040b\n?\3?\3?\5?\u040f"+
		"\n?\3?\3?\5?\u0413\n?\3?\3?\5?\u0417\n?\3?\3?\5?\u041b\n?\3?\3?\3?\5?"+
		"\u0420\n?\3?\5?\u0423\n?\3@\3@\5@\u0427\n@\3A\3A\5A\u042b\nA\3A\3A\3A"+
		"\3A\5A\u0431\nA\3B\5B\u0434\nB\3B\3B\3B\3B\5B\u043a\nB\3B\3B\3B\3B\3B"+
		"\3B\5B\u0442\nB\3B\3B\3B\5B\u0447\nB\3C\5C\u044a\nC\3C\3C\3D\3D\5D\u0450"+
		"\nD\3D\3D\3E\3E\3E\3E\3E\7E\u0459\nE\fE\16E\u045c\13E\3F\3F\5F\u0460\n"+
		"F\3F\3F\5F\u0464\nF\3F\3F\3F\3F\3F\3F\5F\u046c\nF\3F\3F\5F\u0470\nF\3"+
		"F\3F\3F\3F\3F\3F\3F\3F\3F\5F\u047b\nF\3F\3F\3F\3F\5F\u0481\nF\3G\3G\3"+
		"G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\5G\u0495\nG\3G\3G\5G\u0499"+
		"\nG\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\3G\5G\u04a6\nG\3H\5H\u04a9\nH\3H\3H"+
		"\3H\3H\5H\u04af\nH\3H\3H\5H\u04b3\nH\3H\3H\3H\3H\5H\u04b9\nH\3I\5I\u04bc"+
		"\nI\3I\3I\3I\3J\3J\3K\3K\3K\3K\3K\3K\5K\u04c9\nK\3K\3K\3K\3K\5K\u04cf"+
		"\nK\3L\3L\3M\3M\3M\3M\3M\7M\u04d8\nM\fM\16M\u04db\13M\3N\3N\3N\3N\3N\3"+
		"N\3N\3N\3N\3N\3N\5N\u04e8\nN\3O\3O\3O\3O\3O\3O\3O\3O\5O\u04f2\nO\3P\5"+
		"P\u04f5\nP\3P\3P\3P\3Q\3Q\3Q\5Q\u04fd\nQ\3Q\3Q\3Q\3Q\3R\3R\5R\u0505\n"+
		"R\3R\3R\3R\3R\3R\3R\3R\3R\5R\u050f\nR\3R\3R\5R\u0513\nR\3R\3R\3R\3R\3"+
		"R\3R\5R\u051b\nR\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\3S\5S\u052b\n"+
		"S\3T\3T\3U\3U\3U\3V\3V\3V\3V\3V\3V\3V\5V\u0539\nV\3W\3W\5W\u053d\nW\3"+
		"W\3W\3W\5W\u0542\nW\3X\3X\3Y\3Y\3Z\3Z\3Z\3Z\5Z\u054c\nZ\3[\3[\5[\u0550"+
		"\n[\3[\3[\3[\5[\u0555\n[\3\\\3\\\3\\\5\\\u055a\n\\\3]\3]\5]\u055e\n]\3"+
		"]\3]\3]\5]\u0563\n]\3^\5^\u0566\n^\3^\3^\3^\3^\3^\3^\5^\u056e\n^\3^\3"+
		"^\3^\3^\3^\3^\3^\3^\3^\3^\3^\3^\3^\3^\3^\3^\5^\u0580\n^\3_\3_\3_\3_\5"+
		"_\u0586\n_\3`\3`\3`\3`\3`\3`\3`\3`\3`\5`\u0591\n`\3a\3a\5a\u0595\na\3"+
		"a\5a\u0598\na\3a\3a\3a\3a\3a\3a\3a\3a\5a\u05a2\na\3a\3a\3a\3a\5a\u05a8"+
		"\na\3a\5a\u05ab\na\3b\3b\3b\5b\u05b0\nb\3b\3b\3b\3b\3b\3b\3b\3b\5b\u05ba"+
		"\nb\3c\3c\5c\u05be\nc\3c\5c\u05c1\nc\3c\5c\u05c4\nc\3d\5d\u05c7\nd\3d"+
		"\3d\3e\3e\5e\u05cd\ne\3e\5e\u05d0\ne\3e\3e\5e\u05d4\ne\3e\3e\3f\3f\3f"+
		"\3f\3f\5f\u05dd\nf\3g\3g\3g\3h\3h\3h\3h\3h\3h\7h\u05e8\nh\fh\16h\u05eb"+
		"\13h\3i\3i\3i\3i\3i\5i\u05f2\ni\3j\3j\5j\u05f6\nj\3k\3k\3k\5k\u05fb\n"+
		"k\3l\5l\u05fe\nl\3l\3l\5l\u0602\nl\3l\3l\3l\3l\3l\3m\5m\u060a\nm\3m\3"+
		"m\5m\u060e\nm\3m\3m\3m\3m\3n\3n\3n\3n\3n\3n\3n\3n\3o\3o\3o\3o\3o\3p\5"+
		"p\u0622\np\3q\3q\3q\3q\3q\3q\3r\5r\u062b\nr\3r\3r\3s\3s\3s\3s\3t\3t\3"+
		"t\5t\u0636\nt\3t\3t\3t\3t\5t\u063c\nt\7t\u063e\nt\ft\16t\u0641\13t\3u"+
		"\5u\u0644\nu\3u\3u\3u\3v\5v\u064a\nv\3v\3v\3v\5v\u064f\nv\3v\3v\3v\3w"+
		"\5w\u0655\nw\3w\3w\3w\3w\3w\3w\3x\3x\3x\3x\5x\u0661\nx\3x\3x\3x\3x\5x"+
		"\u0667\nx\3y\3y\3y\3y\3y\7y\u066e\ny\fy\16y\u0671\13y\3z\3z\3z\5z\u0676"+
		"\nz\3z\3z\3z\3z\3z\5z\u067d\nz\3{\3{\3{\3{\5{\u0683\n{\3{\3{\3{\3{\3{"+
		"\3{\5{\u068b\n{\3{\3{\5{\u068f\n{\3|\3|\3|\3|\3}\3}\5}\u0697\n}\3}\3}"+
		"\3}\5}\u069c\n}\3}\3}\3}\5}\u06a1\n}\3}\3}\3}\3}\3}\7}\u06a8\n}\f}\16"+
		"}\u06ab\13}\3~\3~\5~\u06af\n~\3\177\3\177\5\177\u06b3\n\177\3\u0080\3"+
		"\u0080\3\u0080\3\u0080\3\u0081\3\u0081\3\u0082\3\u0082\5\u0082\u06bd\n"+
		"\u0082\3\u0082\3\u0082\3\u0083\3\u0083\3\u0083\3\u0083\3\u0083\7\u0083"+
		"\u06c6\n\u0083\f\u0083\16\u0083\u06c9\13\u0083\3\u0084\3\u0084\5\u0084"+
		"\u06cd\n\u0084\3\u0084\3\u0084\3\u0084\5\u0084\u06d2\n\u0084\3\u0084\3"+
		"\u0084\3\u0084\5\u0084\u06d7\n\u0084\3\u0084\3\u0084\5\u0084\u06db\n\u0084"+
		"\3\u0085\3\u0085\3\u0085\3\u0085\3\u0085\3\u0085\7\u0085\u06e3\n\u0085"+
		"\f\u0085\16\u0085\u06e6\13\u0085\3\u0086\3\u0086\5\u0086\u06ea\n\u0086"+
		"\3\u0087\3\u0087\5\u0087\u06ee\n\u0087\3\u0088\3\u0088\3\u0088\3\u0089"+
		"\3\u0089\5\u0089\u06f5\n\u0089\3\u0089\3\u0089\5\u0089\u06f9\n\u0089\3"+
		"\u0089\3\u0089\3\u0089\3\u0089\5\u0089\u06ff\n\u0089\3\u0089\3\u0089\3"+
		"\u0089\5\u0089\u0704\n\u0089\3\u0089\3\u0089\5\u0089\u0708\n\u0089\3\u0089"+
		"\3\u0089\7\u0089\u070c\n\u0089\f\u0089\16\u0089\u070f\13\u0089\3\u008a"+
		"\3\u008a\3\u008a\3\u008b\3\u008b\3\u008b\3\u008b\3\u008c\5\u008c\u0719"+
		"\n\u008c\3\u008c\5\u008c\u071c\n\u008c\3\u008c\5\u008c\u071f\n\u008c\3"+
		"\u008c\5\u008c\u0722\n\u008c\3\u008d\3\u008d\3\u008d\3\u008e\3\u008e\5"+
		"\u008e\u0729\n\u008e\3\u008e\5\u008e\u072c\n\u008e\3\u008e\3\u008e\5\u008e"+
		"\u0730\n\u008e\3\u008e\3\u008e\5\u008e\u0734\n\u008e\3\u008e\3\u008e\3"+
		"\u008e\5\u008e\u0739\n\u008e\3\u008e\5\u008e\u073c\n\u008e\5\u008e\u073e"+
		"\n\u008e\3\u008f\3\u008f\5\u008f\u0742\n\u008f\3\u0090\3\u0090\3\u0091"+
		"\3\u0091\3\u0091\3\u0092\3\u0092\5\u0092\u074b\n\u0092\3\u0093\3\u0093"+
		"\5\u0093\u074f\n\u0093\3\u0094\3\u0094\5\u0094\u0753\n\u0094\3\u0094\3"+
		"\u0094\3\u0094\3\u0094\5\u0094\u0759\n\u0094\3\u0095\3\u0095\3\u0095\5"+
		"\u0095\u075e\n\u0095\5\u0095\u0760\n\u0095\3\u0096\3\u0096\3\u0096\3\u0096"+
		"\5\u0096\u0766\n\u0096\3\u0096\3\u0096\5\u0096\u076a\n\u0096\3\u0096\3"+
		"\u0096\3\u0096\3\u0096\5\u0096\u0770\n\u0096\3\u0096\3\u0096\3\u0096\3"+
		"\u0096\3\u0096\5\u0096\u0777\n\u0096\3\u0096\3\u0096\5\u0096\u077b\n\u0096"+
		"\7\u0096\u077d\n\u0096\f\u0096\16\u0096\u0780\13\u0096\3\u0097\3\u0097"+
		"\3\u0097\3\u0097\5\u0097\u0786\n\u0097\3\u0098\3\u0098\3\u0098\3\u0098"+
		"\3\u0098\3\u0098\3\u0098\3\u0098\5\u0098\u0790\n\u0098\3\u0098\3\u0098"+
		"\5\u0098\u0794\n\u0098\7\u0098\u0796\n\u0098\f\u0098\16\u0098\u0799\13"+
		"\u0098\3\u0099\5\u0099\u079c\n\u0099\3\u0099\5\u0099\u079f\n\u0099\3\u0099"+
		"\3\u0099\3\u0099\3\u0099\5\u0099\u07a5\n\u0099\3\u009a\3\u009a\3\u009a"+
		"\3\u009a\3\u009a\3\u009a\7\u009a\u07ad\n\u009a\f\u009a\16\u009a\u07b0"+
		"\13\u009a\3\u009b\5\u009b\u07b3\n\u009b\3\u009b\3\u009b\3\u009b\3\u009b"+
		"\5\u009b\u07b9\n\u009b\3\u009b\3\u009b\3\u009b\3\u009b\3\u009b\5\u009b"+
		"\u07c0\n\u009b\3\u009c\5\u009c\u07c3\n\u009c\3\u009c\5\u009c\u07c6\n\u009c"+
		"\3\u009c\3\u009c\5\u009c\u07ca\n\u009c\3\u009c\3\u009c\3\u009d\3\u009d"+
		"\3\u009d\3\u009d\5\u009d\u07d2\n\u009d\3\u009e\3\u009e\3\u009e\3\u009e"+
		"\5\u009e\u07d8\n\u009e\3\u009f\5\u009f\u07db\n\u009f\3\u009f\3\u009f\3"+
		"\u00a0\3\u00a0\3\u00a0\3\u00a0\3\u00a1\3\u00a1\3\u00a1\3\u00a1\3\u00a2"+
		"\3\u00a2\3\u00a3\3\u00a3\3\u00a3\5\u00a3\u07ec\n\u00a3\3\u00a4\3\u00a4"+
		"\5\u00a4\u07f0\n\u00a4\3\u00a5\3\u00a5\3\u00a5\5\u00a5\u07f5\n\u00a5\3"+
		"\u00a5\3\u00a5\3\u00a5\3\u00a5\5\u00a5\u07fb\n\u00a5\7\u00a5\u07fd\n\u00a5"+
		"\f\u00a5\16\u00a5\u0800\13\u00a5\3\u00a6\3\u00a6\3\u00a6\5\u00a6\u0805"+
		"\n\u00a6\3\u00a6\3\u00a6\3\u00a6\3\u00a6\5\u00a6\u080b\n\u00a6\3\u00a7"+
		"\3\u00a7\5\u00a7\u080f\n\u00a7\3\u00a8\3\u00a8\3\u00a8\5\u00a8\u0814\n"+
		"\u00a8\3\u00a8\3\u00a8\3\u00a9\3\u00a9\5\u00a9\u081a\n\u00a9\3\u00a9\3"+
		"\u00a9\5\u00a9\u081e\n\u00a9\3\u00a9\5\u00a9\u0821\n\u00a9\3\u00a9\3\u00a9"+
		"\5\u00a9\u0825\n\u00a9\3\u00a9\5\u00a9\u0828\n\u00a9\5\u00a9\u082a\n\u00a9"+
		"\3\u00aa\5\u00aa\u082d\n\u00aa\3\u00aa\3\u00aa\3\u00ab\3\u00ab\3\u00ac"+
		"\3\u00ac\3\u00ad\3\u00ad\5\u00ad\u0837\n\u00ad\3\u00ad\3\u00ad\3\u00ad"+
		"\5\u00ad\u083c\n\u00ad\5\u00ad\u083e\n\u00ad\3\u00ae\5\u00ae\u0841\n\u00ae"+
		"\3\u00ae\5\u00ae\u0844\n\u00ae\3\u00ae\5\u00ae\u0847\n\u00ae\3\u00ae\3"+
		"\u00ae\3\u00ae\3\u00ae\3\u00ae\3\u00ae\3\u00ae\3\u00ae\5\u00ae\u0851\n"+
		"\u00ae\3\u00af\3\u00af\3\u00af\3\u00af\3\u00af\3\u00af\7\u00af\u0859\n"+
		"\u00af\f\u00af\16\u00af\u085c\13\u00af\3\u00b0\3\u00b0\5\u00b0\u0860\n"+
		"\u00b0\3\u00b0\5\u00b0\u0863\n\u00b0\3\u00b0\3\u00b0\5\u00b0\u0867\n\u00b0"+
		"\3\u00b0\5\u00b0\u086a\n\u00b0\3\u00b0\5\u00b0\u086d\n\u00b0\3\u00b0\3"+
		"\u00b0\5\u00b0\u0871\n\u00b0\3\u00b1\3\u00b1\3\u00b1\3\u00b1\3\u00b1\7"+
		"\u00b1\u0878\n\u00b1\f\u00b1\16\u00b1\u087b\13\u00b1\3\u00b2\3\u00b2\3"+
		"\u00b3\3\u00b3\3\u00b3\3\u00b4\3\u00b4\3\u00b4\3\u00b5\3\u00b5\3\u00b5"+
		"\5\u00b5\u0888\n\u00b5\3\u00b5\3\u00b5\3\u00b5\3\u00b5\5\u00b5\u088e\n"+
		"\u00b5\7\u00b5\u0890\n\u00b5\f\u00b5\16\u00b5\u0893\13\u00b5\3\u00b6\5"+
		"\u00b6\u0896\n\u00b6\3\u00b6\3\u00b6\5\u00b6\u089a\n\u00b6\3\u00b6\3\u00b6"+
		"\5\u00b6\u089e\n\u00b6\3\u00b6\3\u00b6\5\u00b6\u08a2\n\u00b6\3\u00b6\3"+
		"\u00b6\5\u00b6\u08a6\n\u00b6\3\u00b6\3\u00b6\5\u00b6\u08aa\n\u00b6\3\u00b7"+
		"\5\u00b7\u08ad\n\u00b7\3\u00b7\3\u00b7\3\u00b7\3\u00b7\3\u00b7\3\u00b7"+
		"\5\u00b7\u08b5\n\u00b7\3\u00b8\3\u00b8\3\u00b9\3\u00b9\3\u00b9\3\u00ba"+
		"\3\u00ba\5\u00ba\u08be\n\u00ba\3\u00bb\3\u00bb\5\u00bb\u08c2\n\u00bb\3"+
		"\u00bc\3\u00bc\3\u00bc\3\u00bd\3\u00bd\3\u00bd\5\u00bd\u08ca\n\u00bd\3"+
		"\u00bd\3\u00bd\3\u00bd\3\u00bd\5\u00bd\u08d0\n\u00bd\7\u00bd\u08d2\n\u00bd"+
		"\f\u00bd\16\u00bd\u08d5\13\u00bd\3\u00be\3\u00be\3\u00be\5\u00be\u08da"+
		"\n\u00be\3\u00be\3\u00be\3\u00be\3\u00be\3\u00bf\3\u00bf\5\u00bf\u08e2"+
		"\n\u00bf\3\u00c0\3\u00c0\3\u00c0\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1"+
		"\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1"+
		"\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1"+
		"\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1"+
		"\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1"+
		"\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\5\u00c1\u0917"+
		"\n\u00c1\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\5\u00c2\u091e\n\u00c2"+
		"\3\u00c3\3\u00c3\3\u00c3\3\u00c3\3\u00c3\3\u00c3\3\u00c4\3\u00c4\3\u00c4"+
		"\3\u00c4\3\u00c4\3\u00c4\7\u00c4\u092c\n\u00c4\f\u00c4\16\u00c4\u092f"+
		"\13\u00c4\3\u00c5\3\u00c5\5\u00c5\u0933\n\u00c5\3\u00c6\3\u00c6\5\u00c6"+
		"\u0937\n\u00c6\3\u00c6\5\u00c6\u093a\n\u00c6\3\u00c6\3\u00c6\5\u00c6\u093e"+
		"\n\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6"+
		"\3\u00c6\5\u00c6\u0949\n\u00c6\3\u00c6\5\u00c6\u094c\n\u00c6\3\u00c6\3"+
		"\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6\5\u00c6\u0954\n\u00c6\3\u00c6\3"+
		"\u00c6\3\u00c6\5\u00c6\u0959\n\u00c6\3\u00c7\3\u00c7\3\u00c8\3\u00c8\3"+
		"\u00c8\5\u00c8\u0960\n\u00c8\3\u00c8\3\u00c8\3\u00c9\3\u00c9\3\u00c9\3"+
		"\u00c9\5\u00c9\u0968\n\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9\5"+
		"\u00c9\u096f\n\u00c9\3\u00c9\3\u00c9\5\u00c9\u0973\n\u00c9\3\u00ca\3\u00ca"+
		"\3\u00ca\5\u00ca\u0978\n\u00ca\3\u00ca\3\u00ca\3\u00ca\3\u00ca\5\u00ca"+
		"\u097e\n\u00ca\7\u00ca\u0980\n\u00ca\f\u00ca\16\u00ca\u0983\13\u00ca\3"+
		"\u00cb\3\u00cb\3\u00cb\5\u00cb\u0988\n\u00cb\3\u00cc\3\u00cc\3\u00cc\3"+
		"\u00cc\3\u00cc\3\u00cc\3\u00cc\5\u00cc\u0991\n\u00cc\3\u00cc\3\u00cc\5"+
		"\u00cc\u0995\n\u00cc\3\u00cd\5\u00cd\u0998\n\u00cd\3\u00cd\3\u00cd\3\u00cd"+
		"\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00cf\5\u00cf\u09a3\n\u00cf"+
		"\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00d0"+
		"\3\u00d0\3\u00d0\3\u00d0\3\u00d1\3\u00d1\5\u00d1\u09b3\n\u00d1\3\u00d1"+
		"\3\u00d1\3\u00d1\3\u00d2\3\u00d2\5\u00d2\u09ba\n\u00d2\3\u00d3\3\u00d3"+
		"\3\u00d3\3\u00d3\3\u00d3\3\u00d3\3\u00d4\5\u00d4\u09c3\n\u00d4\3\u00d4"+
		"\3\u00d4\3\u00d4\3\u00d4\5\u00d4\u09c9\n\u00d4\3\u00d4\3\u00d4\5\u00d4"+
		"\u09cd\n\u00d4\3\u00d4\5\u00d4\u09d0\n\u00d4\3\u00d5\3\u00d5\3\u00d5\3"+
		"\u00d5\3\u00d5\3\u00d5\3\u00d5\3\u00d5\3\u00d5\5\u00d5\u09db\n\u00d5\3"+
		"\u00d6\3\u00d6\3\u00d6\3\u00d6\3\u00d6\3\u00d6\7\u00d6\u09e3\n\u00d6\f"+
		"\u00d6\16\u00d6\u09e6\13\u00d6\3\u00d7\3\u00d7\3\u00d7\3\u00d7\3\u00d7"+
		"\3\u00d7\3\u00d7\5\u00d7\u09ef\n\u00d7\3\u00d8\3\u00d8\3\u00d9\3\u00d9"+
		"\3\u00da\3\u00da\3\u00db\3\u00db\3\u00db\2%&>PZ\\^`bdfhjlnx\u0088\u0098"+
		"\u00ce\u00e6\u00f0\u00f8\u0104\u0108\u0110\u012a\u012e\u0132\u0148\u015c"+
		"\u0160\u0168\u0178\u0186\u0192\u01aa\u00dc\2\4\6\b\n\f\16\20\22\24\26"+
		"\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|"+
		"~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e\u0090\u0092\u0094\u0096"+
		"\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac\u00ae"+
		"\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be\u00c0\u00c2\u00c4\u00c6"+
		"\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4\u00d6\u00d8\u00da\u00dc\u00de"+
		"\u00e0\u00e2\u00e4\u00e6\u00e8\u00ea\u00ec\u00ee\u00f0\u00f2\u00f4\u00f6"+
		"\u00f8\u00fa\u00fc\u00fe\u0100\u0102\u0104\u0106\u0108\u010a\u010c\u010e"+
		"\u0110\u0112\u0114\u0116\u0118\u011a\u011c\u011e\u0120\u0122\u0124\u0126"+
		"\u0128\u012a\u012c\u012e\u0130\u0132\u0134\u0136\u0138\u013a\u013c\u013e"+
		"\u0140\u0142\u0144\u0146\u0148\u014a\u014c\u014e\u0150\u0152\u0154\u0156"+
		"\u0158\u015a\u015c\u015e\u0160\u0162\u0164\u0166\u0168\u016a\u016c\u016e"+
		"\u0170\u0172\u0174\u0176\u0178\u017a\u017c\u017e\u0180\u0182\u0184\u0186"+
		"\u0188\u018a\u018c\u018e\u0190\u0192\u0194\u0196\u0198\u019a\u019c\u019e"+
		"\u01a0\u01a2\u01a4\u01a6\u01a8\u01aa\u01ac\u01ae\u01b0\u01b2\u01b4\2\24"+
		"\4\2eeii\5\2^fi}\u0080\u0081\3\2~\177\4\2]]\u0082\u0082\6\2\25\25\34\34"+
		"\65\65<<\4\2_aeh\5\2iilsvw\6\2!!++::AA\4\2\37\37KK\3\2RW\4\2\23\23MM\5"+
		"\2\22\22==HH\3\2PQ\3\2\61\63\4\2\22\22GG\3\2\u0083\u0084\4\2\"\"CC\3\2"+
		"\u0088\u008b\2\u0b02\2\u01b6\3\2\2\2\4\u01ba\3\2\2\2\6\u01bc\3\2\2\2\b"+
		"\u01c0\3\2\2\2\n\u01c2\3\2\2\2\f\u01c4\3\2\2\2\16\u01c7\3\2\2\2\20\u01d4"+
		"\3\2\2\2\22\u01d8\3\2\2\2\24\u01e1\3\2\2\2\26\u01e3\3\2\2\2\30\u01f7\3"+
		"\2\2\2\32\u0206\3\2\2\2\34\u0208\3\2\2\2\36\u020e\3\2\2\2 \u0214\3\2\2"+
		"\2\"\u0229\3\2\2\2$\u022b\3\2\2\2&\u022d\3\2\2\2(\u023d\3\2\2\2*\u0247"+
		"\3\2\2\2,\u024a\3\2\2\2.\u0263\3\2\2\2\60\u0265\3\2\2\2\62\u0275\3\2\2"+
		"\2\64\u0277\3\2\2\2\66\u0279\3\2\2\28\u0281\3\2\2\2:\u0283\3\2\2\2<\u028f"+
		"\3\2\2\2>\u029c\3\2\2\2@\u02bb\3\2\2\2B\u02d0\3\2\2\2D\u02ee\3\2\2\2F"+
		"\u02f0\3\2\2\2H\u030a\3\2\2\2J\u030c\3\2\2\2L\u0310\3\2\2\2N\u0314\3\2"+
		"\2\2P\u031a\3\2\2\2R\u0333\3\2\2\2T\u0341\3\2\2\2V\u0343\3\2\2\2X\u034e"+
		"\3\2\2\2Z\u0350\3\2\2\2\\\u035e\3\2\2\2^\u036f\3\2\2\2`\u037d\3\2\2\2"+
		"b\u038b\3\2\2\2d\u039f\3\2\2\2f\u03ad\3\2\2\2h\u03b8\3\2\2\2j\u03c3\3"+
		"\2\2\2l\u03ce\3\2\2\2n\u03d9\3\2\2\2p\u03eb\3\2\2\2r\u03ed\3\2\2\2t\u03f7"+
		"\3\2\2\2v\u03f9\3\2\2\2x\u03fb\3\2\2\2z\u0406\3\2\2\2|\u0422\3\2\2\2~"+
		"\u0426\3\2\2\2\u0080\u0430\3\2\2\2\u0082\u0446\3\2\2\2\u0084\u0449\3\2"+
		"\2\2\u0086\u044d\3\2\2\2\u0088\u0453\3\2\2\2\u008a\u0480\3\2\2\2\u008c"+
		"\u04a5\3\2\2\2\u008e\u04b8\3\2\2\2\u0090\u04bb\3\2\2\2\u0092\u04c0\3\2"+
		"\2\2\u0094\u04ce\3\2\2\2\u0096\u04d0\3\2\2\2\u0098\u04d2\3\2\2\2\u009a"+
		"\u04e7\3\2\2\2\u009c\u04f1\3\2\2\2\u009e\u04f4\3\2\2\2\u00a0\u04f9\3\2"+
		"\2\2\u00a2\u051a\3\2\2\2\u00a4\u052a\3\2\2\2\u00a6\u052c\3\2\2\2\u00a8"+
		"\u052e\3\2\2\2\u00aa\u0538\3\2\2\2\u00ac\u0541\3\2\2\2\u00ae\u0543\3\2"+
		"\2\2\u00b0\u0545\3\2\2\2\u00b2\u054b\3\2\2\2\u00b4\u0554\3\2\2\2\u00b6"+
		"\u0559\3\2\2\2\u00b8\u0562\3\2\2\2\u00ba\u057f\3\2\2\2\u00bc\u0585\3\2"+
		"\2\2\u00be\u0590\3\2\2\2\u00c0\u05aa\3\2\2\2\u00c2\u05b9\3\2\2\2\u00c4"+
		"\u05bb\3\2\2\2\u00c6\u05c6\3\2\2\2\u00c8\u05ca\3\2\2\2\u00ca\u05dc\3\2"+
		"\2\2\u00cc\u05de\3\2\2\2\u00ce\u05e1\3\2\2\2\u00d0\u05f1\3\2\2\2\u00d2"+
		"\u05f3\3\2\2\2\u00d4\u05fa\3\2\2\2\u00d6\u05fd\3\2\2\2\u00d8\u0609\3\2"+
		"\2\2\u00da\u0613\3\2\2\2\u00dc\u061b\3\2\2\2\u00de\u0621\3\2\2\2\u00e0"+
		"\u0623\3\2\2\2\u00e2\u062a\3\2\2\2\u00e4\u062e\3\2\2\2\u00e6\u0632\3\2"+
		"\2\2\u00e8\u0643\3\2\2\2\u00ea\u0649\3\2\2\2\u00ec\u0654\3\2\2\2\u00ee"+
		"\u0666\3\2\2\2\u00f0\u0668\3\2\2\2\u00f2\u067c\3\2\2\2\u00f4\u068e\3\2"+
		"\2\2\u00f6\u0690\3\2\2\2\u00f8\u069b\3\2\2\2\u00fa\u06ac\3\2\2\2\u00fc"+
		"\u06b2\3\2\2\2\u00fe\u06b4\3\2\2\2\u0100\u06b8\3\2\2\2\u0102\u06ba\3\2"+
		"\2\2\u0104\u06c0\3\2\2\2\u0106\u06da\3\2\2\2\u0108\u06dc\3\2\2\2\u010a"+
		"\u06e7\3\2\2\2\u010c\u06ed\3\2\2\2\u010e\u06ef\3\2\2\2\u0110\u06fe\3\2"+
		"\2\2\u0112\u0710\3\2\2\2\u0114\u0713\3\2\2\2\u0116\u0718\3\2\2\2\u0118"+
		"\u0723\3\2\2\2\u011a\u073d\3\2\2\2\u011c\u073f\3\2\2\2\u011e\u0743\3\2"+
		"\2\2\u0120\u0745\3\2\2\2\u0122\u0748\3\2\2\2\u0124\u074c\3\2\2\2\u0126"+
		"\u0758\3\2\2\2\u0128\u075f\3\2\2\2\u012a\u076f\3\2\2\2\u012c\u0785\3\2"+
		"\2\2\u012e\u0787\3\2\2\2\u0130\u07a4\3\2\2\2\u0132\u07a6\3\2\2\2\u0134"+
		"\u07bf\3\2\2\2\u0136\u07c2\3\2\2\2\u0138\u07cd\3\2\2\2\u013a\u07d7\3\2"+
		"\2\2\u013c\u07da\3\2\2\2\u013e\u07de\3\2\2\2\u0140\u07e2\3\2\2\2\u0142"+
		"\u07e6\3\2\2\2\u0144\u07eb\3\2\2\2\u0146\u07ef\3\2\2\2\u0148\u07f1\3\2"+
		"\2\2\u014a\u080a\3\2\2\2\u014c\u080e\3\2\2\2\u014e\u0810\3\2\2\2\u0150"+
		"\u0829\3\2\2\2\u0152\u082c\3\2\2\2\u0154\u0830\3\2\2\2\u0156\u0832\3\2"+
		"\2\2\u0158\u083d\3\2\2\2\u015a\u0850\3\2\2\2\u015c\u0852\3\2\2\2\u015e"+
		"\u0870\3\2\2\2\u0160\u0872\3\2\2\2\u0162\u087c\3\2\2\2\u0164\u087e\3\2"+
		"\2\2\u0166\u0881\3\2\2\2\u0168\u0884\3\2\2\2\u016a\u08a9\3\2\2\2\u016c"+
		"\u08b4\3\2\2\2\u016e\u08b6\3\2\2\2\u0170\u08b8\3\2\2\2\u0172\u08bb\3\2"+
		"\2\2\u0174\u08bf\3\2\2\2\u0176\u08c3\3\2\2\2\u0178\u08c6\3\2\2\2\u017a"+
		"\u08d6\3\2\2\2\u017c\u08e1\3\2\2\2\u017e\u08e3\3\2\2\2\u0180\u0916\3\2"+
		"\2\2\u0182\u091d\3\2\2\2\u0184\u091f\3\2\2\2\u0186\u0925\3\2\2\2\u0188"+
		"\u0932\3\2\2\2\u018a\u0958\3\2\2\2\u018c\u095a\3\2\2\2\u018e\u095c\3\2"+
		"\2\2\u0190\u0972\3\2\2\2\u0192\u0974\3\2\2\2\u0194\u0987\3\2\2\2\u0196"+
		"\u0994\3\2\2\2\u0198\u0997\3\2\2\2\u019a\u099c\3\2\2\2\u019c\u09a2\3\2"+
		"\2\2\u019e\u09ac\3\2\2\2\u01a0\u09b0\3\2\2\2\u01a2\u09b7\3\2\2\2\u01a4"+
		"\u09bb\3\2\2\2\u01a6\u09cf\3\2\2\2\u01a8\u09da\3\2\2\2\u01aa\u09dc\3\2"+
		"\2\2\u01ac\u09ee\3\2\2\2\u01ae\u09f0\3\2\2\2\u01b0\u09f2\3\2\2\2\u01b2"+
		"\u09f4\3\2\2\2\u01b4\u09f6\3\2\2\2\u01b6\u01b7\7\u008c\2\2\u01b7\3\3\2"+
		"\2\2\u01b8\u01bb\7\u008c\2\2\u01b9\u01bb\5\6\4\2\u01ba\u01b8\3\2\2\2\u01ba"+
		"\u01b9\3\2\2\2\u01bb\5\3\2\2\2\u01bc\u01bd\7\u008c\2\2\u01bd\7\3\2\2\2"+
		"\u01be\u01c1\7\u008c\2\2\u01bf\u01c1\5\u018e\u00c8\2\u01c0\u01be\3\2\2"+
		"\2\u01c0\u01bf\3\2\2\2\u01c1\t\3\2\2\2\u01c2\u01c3\7\u008c\2\2\u01c3\13"+
		"\3\2\2\2\u01c4\u01c5\7\u008c\2\2\u01c5\r\3\2\2\2\u01c6\u01c8\5\u0098M"+
		"\2\u01c7\u01c6\3\2\2\2\u01c7\u01c8\3\2\2\2\u01c8\u01c9\3\2\2\2\u01c9\u01ca"+
		"\7\2\2\3\u01ca\17\3\2\2\2\u01cb\u01d5\5\u01ac\u00d7\2\u01cc\u01d5\7@\2"+
		"\2\u01cd\u01ce\7V\2\2\u01ce\u01cf\5x=\2\u01cf\u01d0\7W\2\2\u01d0\u01d5"+
		"\3\2\2\2\u01d1\u01d5\5\22\n\2\u01d2\u01d5\5\34\17\2\u01d3\u01d5\5.\30"+
		"\2\u01d4\u01cb\3\2\2\2\u01d4\u01cc\3\2\2\2\u01d4\u01cd\3\2\2\2\u01d4\u01d1"+
		"\3\2\2\2\u01d4\u01d2\3\2\2\2\u01d4\u01d3\3\2\2\2\u01d5\21\3\2\2\2\u01d6"+
		"\u01d9\5\24\13\2\u01d7\u01d9\5\26\f\2\u01d8\u01d6\3\2\2\2\u01d8\u01d7"+
		"\3\2\2\2\u01d9\23\3\2\2\2\u01da\u01e2\7\u008c\2\2\u01db\u01e2\5\u017e"+
		"\u00c0\2\u01dc\u01e2\5\u0170\u00b9\2\u01dd\u01e2\5\u0182\u00c2\2\u01de"+
		"\u01df\7g\2\2\u01df\u01e2\5\u00be`\2\u01e0\u01e2\5\u0190\u00c9\2\u01e1"+
		"\u01da\3\2\2\2\u01e1\u01db\3\2\2\2\u01e1\u01dc\3\2\2\2\u01e1\u01dd\3\2"+
		"\2\2\u01e1\u01de\3\2\2\2\u01e1\u01e0\3\2\2\2\u01e2\25\3\2\2\2\u01e3\u01e5"+
		"\5\30\r\2\u01e4\u01e6\7?\2\2\u01e5\u01e4\3\2\2\2\u01e5\u01e6\3\2\2\2\u01e6"+
		"\u01e7\3\2\2\2\u01e7\u01e8\5\24\13\2\u01e8\27\3\2\2\2\u01e9\u01eb\7\\"+
		"\2\2\u01ea\u01ec\5\32\16\2\u01eb\u01ea\3\2\2\2\u01eb\u01ec\3\2\2\2\u01ec"+
		"\u01f8\3\2\2\2\u01ed\u01ee\7\u008c\2\2\u01ee\u01f0\7\\\2\2\u01ef\u01f1"+
		"\5\32\16\2\u01f0\u01ef\3\2\2\2\u01f0\u01f1\3\2\2\2\u01f1\u01f8\3\2\2\2"+
		"\u01f2\u01f3\5\u00be`\2\u01f3\u01f5\7\\\2\2\u01f4\u01f6\5\32\16\2\u01f5"+
		"\u01f4\3\2\2\2\u01f5\u01f6\3\2\2\2\u01f6\u01f8\3\2\2\2\u01f7\u01e9\3\2"+
		"\2\2\u01f7\u01ed\3\2\2\2\u01f7\u01f2\3\2\2\2\u01f8\31\3\2\2\2\u01f9\u01fa"+
		"\7\u008c\2\2\u01fa\u01fc\7\\\2\2\u01fb\u01fd\5\32\16\2\u01fc\u01fb\3\2"+
		"\2\2\u01fc\u01fd\3\2\2\2\u01fd\u0207\3\2\2\2\u01fe\u0200\7?\2\2\u01ff"+
		"\u01fe\3\2\2\2\u01ff\u0200\3\2\2\2\u0200\u0201\3\2\2\2\u0201\u0202\5\u018e"+
		"\u00c8\2\u0202\u0204\7\\\2\2\u0203\u0205\5\32\16\2\u0204\u0203\3\2\2\2"+
		"\u0204\u0205\3\2\2\2\u0205\u0207\3\2\2\2\u0206\u01f9\3\2\2\2\u0206\u01ff"+
		"\3\2\2\2\u0207\33\3\2\2\2\u0208\u020a\5\36\20\2\u0209\u020b\5 \21\2\u020a"+
		"\u0209\3\2\2\2\u020a\u020b\3\2\2\2\u020b\u020c\3\2\2\2\u020c\u020d\5\u0086"+
		"D\2\u020d\35\3\2\2\2\u020e\u0210\7T\2\2\u020f\u0211\5\"\22\2\u0210\u020f"+
		"\3\2\2\2\u0210\u0211\3\2\2\2\u0211\u0212\3\2\2\2\u0212\u0213\7U\2\2\u0213"+
		"\37\3\2\2\2\u0214\u0215\7V\2\2\u0215\u0216\5\u0130\u0099\2\u0216\u0218"+
		"\7W\2\2\u0217\u0219\5\u00acW\2\u0218\u0217\3\2\2\2\u0218\u0219\3\2\2\2"+
		"\u0219\u021b\3\2\2\2\u021a\u021c\5\u01a8\u00d5\2\u021b\u021a\3\2\2\2\u021b"+
		"\u021c\3\2\2\2\u021c\u021e\3\2\2\2\u021d\u021f\5\u00f0y\2\u021e\u021d"+
		"\3\2\2\2\u021e\u021f\3\2\2\2\u021f\u0221\3\2\2\2\u0220\u0222\5\u0118\u008d"+
		"\2\u0221\u0220\3\2\2\2\u0221\u0222\3\2\2\2\u0222!\3\2\2\2\u0223\u022a"+
		"\5$\23\2\u0224\u022a\5&\24\2\u0225\u0226\5$\23\2\u0226\u0227\7\u0080\2"+
		"\2\u0227\u0228\5&\24\2\u0228\u022a\3\2\2\2\u0229\u0223\3\2\2\2\u0229\u0224"+
		"\3\2\2\2\u0229\u0225\3\2\2\2\u022a#\3\2\2\2\u022b\u022c\t\2\2\2\u022c"+
		"%\3\2\2\2\u022d\u022e\b\24\1\2\u022e\u0230\5(\25\2\u022f\u0231\7Z\2\2"+
		"\u0230\u022f\3\2\2\2\u0230\u0231\3\2\2\2\u0231\u023a\3\2\2\2\u0232\u0233"+
		"\f\3\2\2\u0233\u0234\7\u0080\2\2\u0234\u0236\5(\25\2\u0235\u0237\7Z\2"+
		"\2\u0236\u0235\3\2\2\2\u0236\u0237\3\2\2\2\u0237\u0239\3\2\2\2\u0238\u0232"+
		"\3\2\2\2\u0239\u023c\3\2\2\2\u023a\u0238\3\2\2\2\u023a\u023b\3\2\2\2\u023b"+
		"\'\3\2\2\2\u023c\u023a\3\2\2\2\u023d\u023e\5*\26\2\u023e\u023f\5,\27\2"+
		"\u023f)\3\2\2\2\u0240\u0242\7e\2\2\u0241\u0240\3\2\2\2\u0241\u0242\3\2"+
		"\2\2\u0242\u0243\3\2\2\2\u0243\u0248\7\u008c\2\2\u0244\u0248\7@\2\2\u0245"+
		"\u0246\7a\2\2\u0246\u0248\7@\2\2\u0247\u0241\3\2\2\2\u0247\u0244\3\2\2"+
		"\2\u0247\u0245\3\2\2\2\u0248+\3\2\2\2\u0249\u024b\7e\2\2\u024a\u0249\3"+
		"\2\2\2\u024a\u024b\3\2\2\2\u024b\u024c\3\2\2\2\u024c\u024d\7\u008c\2\2"+
		"\u024d\u024e\5\u0142\u00a2\2\u024e-\3\2\2\2\u024f\u0250\7V\2\2\u0250\u0251"+
		"\5X-\2\u0251\u0252\5\60\31\2\u0252\u0253\7Z\2\2\u0253\u0254\7W\2\2\u0254"+
		"\u0264\3\2\2\2\u0255\u0256\7V\2\2\u0256\u0257\7Z\2\2\u0257\u0258\5\60"+
		"\31\2\u0258\u0259\5X-\2\u0259\u025a\7W\2\2\u025a\u0264\3\2\2\2\u025b\u025c"+
		"\7V\2\2\u025c\u025d\5X-\2\u025d\u025e\5\60\31\2\u025e\u025f\7Z\2\2\u025f"+
		"\u0260\5\60\31\2\u0260\u0261\5X-\2\u0261\u0262\7W\2\2\u0262\u0264\3\2"+
		"\2\2\u0263\u024f\3\2\2\2\u0263\u0255\3\2\2\2\u0263\u025b\3\2\2\2\u0264"+
		"/\3\2\2\2\u0265\u0266\t\3\2\2\u0266\61\3\2\2\2\u0267\u0268\5\u00ba^\2"+
		"\u0268\u026a\7V\2\2\u0269\u026b\5@!\2\u026a\u0269\3\2\2\2\u026a\u026b"+
		"\3\2\2\2\u026b\u026c\3\2\2\2\u026c\u026d\7W\2\2\u026d\u0276\3\2\2\2\u026e"+
		"\u026f\5\u0196\u00cc\2\u026f\u0271\7V\2\2\u0270\u0272\5@!\2\u0271\u0270"+
		"\3\2\2\2\u0271\u0272\3\2\2\2\u0272\u0273\3\2\2\2\u0273\u0274\7W\2\2\u0274"+
		"\u0276\3\2\2\2\u0275\u0267\3\2\2\2\u0275\u026e\3\2\2\2\u0276\63\3\2\2"+
		"\2\u0277\u0278\t\4\2\2\u0278\65\3\2\2\2\u0279\u027a\5:\36\2\u027a\u027b"+
		"\7j\2\2\u027b\u027c\5\u0122\u0092\2\u027c\u027d\7k\2\2\u027d\u027e\7V"+
		"\2\2\u027e\u027f\5x=\2\u027f\u0280\7W\2\2\u0280\67\3\2\2\2\u0281\u0282"+
		"\t\5\2\2\u02829\3\2\2\2\u0283\u0284\t\6\2\2\u0284;\3\2\2\2\u0285\u0286"+
		"\7F\2\2\u0286\u0287\7V\2\2\u0287\u0288\5x=\2\u0288\u0289\7W\2\2\u0289"+
		"\u0290\3\2\2\2\u028a\u028b\7F\2\2\u028b\u028c\7V\2\2\u028c\u028d\5\u0122"+
		"\u0092\2\u028d\u028e\7W\2\2\u028e\u0290\3\2\2\2\u028f\u0285\3\2\2\2\u028f"+
		"\u028a\3\2\2\2\u0290=\3\2\2\2\u0291\u0292\b \1\2\u0292\u029d\5\20\t\2"+
		"\u0293\u029d\5\62\32\2\u0294\u0295\5\u00ba^\2\u0295\u0296\5\u014a\u00a6"+
		"\2\u0296\u029d\3\2\2\2\u0297\u0298\5\u0196\u00cc\2\u0298\u0299\5\u014a"+
		"\u00a6\2\u0299\u029d\3\2\2\2\u029a\u029d\5\66\34\2\u029b\u029d\5<\37\2"+
		"\u029c\u0291\3\2\2\2\u029c\u0293\3\2\2\2\u029c\u0294\3\2\2\2\u029c\u0297"+
		"\3\2\2\2\u029c\u029a\3\2\2\2\u029c\u029b\3\2\2\2\u029d\u02b8\3\2\2\2\u029e"+
		"\u029f\f\f\2\2\u029f\u02a0\7T\2\2\u02a0\u02a1\5\u014c\u00a7\2\u02a1\u02a2"+
		"\7U\2\2\u02a2\u02b7\3\2\2\2\u02a3\u02a4\f\13\2\2\u02a4\u02a6\7V\2\2\u02a5"+
		"\u02a7\5@!\2\u02a6\u02a5\3\2\2\2\u02a6\u02a7\3\2\2\2\u02a7\u02a8\3\2\2"+
		"\2\u02a8\u02b7\7W\2\2\u02a9\u02aa\f\7\2\2\u02aa\u02ac\58\35\2\u02ab\u02ad"+
		"\7?\2\2\u02ac\u02ab\3\2\2\2\u02ac\u02ad\3\2\2\2\u02ad\u02ae\3\2\2\2\u02ae"+
		"\u02af\5\22\n\2\u02af\u02b7\3\2\2\2\u02b0\u02b1\f\6\2\2\u02b1\u02b2\5"+
		"8\35\2\u02b2\u02b3\5B\"\2\u02b3\u02b7\3\2\2\2\u02b4\u02b5\f\5\2\2\u02b5"+
		"\u02b7\5\64\33\2\u02b6\u029e\3\2\2\2\u02b6\u02a3\3\2\2\2\u02b6\u02a9\3"+
		"\2\2\2\u02b6\u02b0\3\2\2\2\u02b6\u02b4\3\2\2\2\u02b7\u02ba\3\2\2\2\u02b8"+
		"\u02b6\3\2\2\2\u02b8\u02b9\3\2\2\2\u02b9?\3\2\2\2\u02ba\u02b8\3\2\2\2"+
		"\u02bb\u02bc\5\u0148\u00a5\2\u02bcA\3\2\2\2\u02bd\u02bf\5\30\r\2\u02be"+
		"\u02bd\3\2\2\2\u02be\u02bf\3\2\2\2\u02bf\u02c0\3\2\2\2\u02c0\u02c1\5\u00bc"+
		"_\2\u02c1\u02c2\7\\\2\2\u02c2\u02c3\7g\2\2\u02c3\u02c4\5\u00bc_\2\u02c4"+
		"\u02d1\3\2\2\2\u02c5\u02c6\5\30\r\2\u02c6\u02c7\7?\2\2\u02c7\u02c8\5\u018e"+
		"\u00c8\2\u02c8\u02c9\7\\\2\2\u02c9\u02ca\7g\2\2\u02ca\u02cb\5\u00bc_\2"+
		"\u02cb\u02d1\3\2\2\2\u02cc\u02cd\7g\2\2\u02cd\u02d1\5\u00bc_\2\u02ce\u02cf"+
		"\7g\2\2\u02cf\u02d1\5\u00be`\2\u02d0\u02be\3\2\2\2\u02d0\u02c5\3\2\2\2"+
		"\u02d0\u02cc\3\2\2\2\u02d0\u02ce\3\2\2\2\u02d1C\3\2\2\2\u02d2\u02ef\5"+
		"> \2\u02d3\u02d4\7~\2\2\u02d4\u02ef\5X-\2\u02d5\u02d6\7\177\2\2\u02d6"+
		"\u02ef\5X-\2\u02d7\u02d8\5F$\2\u02d8\u02d9\5X-\2\u02d9\u02ef\3\2\2\2\u02da"+
		"\u02db\79\2\2\u02db\u02ef\5D#\2\u02dc\u02dd\79\2\2\u02dd\u02de\7V\2\2"+
		"\u02de\u02df\5\u0122\u0092\2\u02df\u02e0\7W\2\2\u02e0\u02ef\3\2\2\2\u02e1"+
		"\u02e2\79\2\2\u02e2\u02e3\7Z\2\2\u02e3\u02e4\7V\2\2\u02e4\u02e5\7\u008c"+
		"\2\2\u02e5\u02ef\7W\2\2\u02e6\u02e7\7\b\2\2\u02e7\u02e8\7V\2\2\u02e8\u02e9"+
		"\5\u0122\u0092\2\u02e9\u02ea\7W\2\2\u02ea\u02ef\3\2\2\2\u02eb\u02ef\5"+
		"V,\2\u02ec\u02ef\5H%\2\u02ed\u02ef\5T+\2\u02ee\u02d2\3\2\2\2\u02ee\u02d3"+
		"\3\2\2\2\u02ee\u02d5\3\2\2\2\u02ee\u02d7\3\2\2\2\u02ee\u02da\3\2\2\2\u02ee"+
		"\u02dc\3\2\2\2\u02ee\u02e1\3\2\2\2\u02ee\u02e6\3\2\2\2\u02ee\u02eb\3\2"+
		"\2\2\u02ee\u02ec\3\2\2\2\u02ee\u02ed\3\2\2\2\u02efE\3\2\2\2\u02f0\u02f1"+
		"\t\7\2\2\u02f1G\3\2\2\2\u02f2\u02f4\7\\\2\2\u02f3\u02f2\3\2\2\2\u02f3"+
		"\u02f4\3\2\2\2\u02f4\u02f5\3\2\2\2\u02f5\u02f7\7-\2\2\u02f6\u02f8\5J&"+
		"\2\u02f7\u02f6\3\2\2\2\u02f7\u02f8\3\2\2\2\u02f8\u02f9\3\2\2\2\u02f9\u02fb"+
		"\5L\'\2\u02fa\u02fc\5R*\2\u02fb\u02fa\3\2\2\2\u02fb\u02fc\3\2\2\2\u02fc"+
		"\u030b\3\2\2\2\u02fd\u02ff\7\\\2\2\u02fe\u02fd\3\2\2\2\u02fe\u02ff\3\2"+
		"\2\2\u02ff\u0300\3\2\2\2\u0300\u0302\7-\2\2\u0301\u0303\5J&\2\u0302\u0301"+
		"\3\2\2\2\u0302\u0303\3\2\2\2\u0303\u0304\3\2\2\2\u0304\u0305\7V\2\2\u0305"+
		"\u0306\5\u0122\u0092\2\u0306\u0308\7W\2\2\u0307\u0309\5R*\2\u0308\u0307"+
		"\3\2\2\2\u0308\u0309\3\2\2\2\u0309\u030b\3\2\2\2\u030a\u02f3\3\2\2\2\u030a"+
		"\u02fe\3\2\2\2\u030bI\3\2\2\2\u030c\u030d\7V\2\2\u030d\u030e\5@!\2\u030e"+
		"\u030f\7W\2\2\u030fK\3\2\2\2\u0310\u0312\5\u00b4[\2\u0311\u0313\5N(\2"+
		"\u0312\u0311\3\2\2\2\u0312\u0313\3\2\2\2\u0313M\3\2\2\2\u0314\u0316\5"+
		"\u011a\u008e\2\u0315\u0317\5N(\2\u0316\u0315\3\2\2\2\u0316\u0317\3\2\2"+
		"\2\u0317\u0318\3\2\2\2\u0318\u0319\5P)\2\u0319O\3\2\2\2\u031a\u031b\b"+
		")\1\2\u031b\u031c\7T\2\2\u031c\u031d\5x=\2\u031d\u031f\7U\2\2\u031e\u0320"+
		"\5\u00f0y\2\u031f\u031e\3\2\2\2\u031f\u0320\3\2\2\2\u0320\u032a\3\2\2"+
		"\2\u0321\u0322\f\3\2\2\u0322\u0323\7T\2\2\u0323\u0324\5z>\2\u0324\u0326"+
		"\7U\2\2\u0325\u0327\5\u00f0y\2\u0326\u0325\3\2\2\2\u0326\u0327\3\2\2\2"+
		"\u0327\u0329\3\2\2\2\u0328\u0321\3\2\2\2\u0329\u032c\3\2\2\2\u032a\u0328"+
		"\3\2\2\2\u032a\u032b\3\2\2\2\u032bQ\3\2\2\2\u032c\u032a\3\2\2\2\u032d"+
		"\u032f\7V\2\2\u032e\u0330\5@!\2\u032f\u032e\3\2\2\2\u032f\u0330\3\2\2"+
		"\2\u0330\u0331\3\2\2\2\u0331\u0334\7W\2\2\u0332\u0334\5\u014a\u00a6\2"+
		"\u0333\u032d\3\2\2\2\u0333\u0332\3\2\2\2\u0334S\3\2\2\2\u0335\u0337\7"+
		"\\\2\2\u0336\u0335\3\2\2\2\u0336\u0337\3\2\2\2\u0337\u0338\3\2\2\2\u0338"+
		"\u0339\7\31\2\2\u0339\u0342\5X-\2\u033a\u033c\7\\\2\2\u033b\u033a\3\2"+
		"\2\2\u033b\u033c\3\2\2\2\u033c\u033d\3\2\2\2\u033d\u033e\7\31\2\2\u033e"+
		"\u033f\7T\2\2\u033f\u0340\7U\2\2\u0340\u0342\5X-\2\u0341\u0336\3\2\2\2"+
		"\u0341\u033b\3\2\2\2\u0342U\3\2\2\2\u0343\u0344\7.\2\2\u0344\u0345\7V"+
		"\2\2\u0345\u0346\5x=\2\u0346\u0347\7W\2\2\u0347W\3\2\2\2\u0348\u034f\5"+
		"D#\2\u0349\u034a\7V\2\2\u034a\u034b\5\u0122\u0092\2\u034b\u034c\7W\2\2"+
		"\u034c\u034d\5X-\2\u034d\u034f\3\2\2\2\u034e\u0348\3\2\2\2\u034e\u0349"+
		"\3\2\2\2\u034fY\3\2\2\2\u0350\u0351\b.\1\2\u0351\u0352\5X-\2\u0352\u035b"+
		"\3\2\2\2\u0353\u0354\f\4\2\2\u0354\u0355\7^\2\2\u0355\u035a\5X-\2\u0356"+
		"\u0357\f\3\2\2\u0357\u0358\7\u0081\2\2\u0358\u035a\5X-\2\u0359\u0353\3"+
		"\2\2\2\u0359\u0356\3\2\2\2\u035a\u035d\3\2\2\2\u035b\u0359\3\2\2\2\u035b"+
		"\u035c\3\2\2\2\u035c[\3\2\2\2\u035d\u035b\3\2\2\2\u035e\u035f\b/\1\2\u035f"+
		"\u0360\5Z.\2\u0360\u036c\3\2\2\2\u0361\u0362\f\5\2\2\u0362\u0363\7a\2"+
		"\2\u0363\u036b\5Z.\2\u0364\u0365\f\4\2\2\u0365\u0366\7b\2\2\u0366\u036b"+
		"\5Z.\2\u0367\u0368\f\3\2\2\u0368\u0369\7c\2\2\u0369\u036b\5Z.\2\u036a"+
		"\u0361\3\2\2\2\u036a\u0364\3\2\2\2\u036a\u0367\3\2\2\2\u036b\u036e\3\2"+
		"\2\2\u036c\u036a\3\2\2\2\u036c\u036d\3\2\2\2\u036d]\3\2\2\2\u036e\u036c"+
		"\3\2\2\2\u036f\u0370\b\60\1\2\u0370\u0371\5\\/\2\u0371\u037a\3\2\2\2\u0372"+
		"\u0373\f\4\2\2\u0373\u0374\7_\2\2\u0374\u0379\5\\/\2\u0375\u0376\f\3\2"+
		"\2\u0376\u0377\7`\2\2\u0377\u0379\5\\/\2\u0378\u0372\3\2\2\2\u0378\u0375"+
		"\3\2\2\2\u0379\u037c\3\2\2\2\u037a\u0378\3\2\2\2\u037a\u037b\3\2\2\2\u037b"+
		"_\3\2\2\2\u037c\u037a\3\2\2\2\u037d\u037e\b\61\1\2\u037e\u037f\5^\60\2"+
		"\u037f\u0388\3\2\2\2\u0380\u0381\f\4\2\2\u0381\u0382\7t\2\2\u0382\u0387"+
		"\5^\60\2\u0383\u0384\f\3\2\2\u0384\u0385\7u\2\2\u0385\u0387\5^\60\2\u0386"+
		"\u0380\3\2\2\2\u0386\u0383\3\2\2\2\u0387\u038a\3\2\2\2\u0388\u0386\3\2"+
		"\2\2\u0388\u0389\3\2\2\2\u0389a\3\2\2\2\u038a\u0388\3\2\2\2\u038b\u038c"+
		"\b\62\1\2\u038c\u038d\5`\61\2\u038d\u039c\3\2\2\2\u038e\u038f\f\6\2\2"+
		"\u038f\u0390\7j\2\2\u0390\u039b\5`\61\2\u0391\u0392\f\5\2\2\u0392\u0393"+
		"\7k\2\2\u0393\u039b\5`\61\2\u0394\u0395\f\4\2\2\u0395\u0396\7z\2\2\u0396"+
		"\u039b\5`\61\2\u0397\u0398\f\3\2\2\u0398\u0399\7{\2\2\u0399\u039b\5`\61"+
		"\2\u039a\u038e\3\2\2\2\u039a\u0391\3\2\2\2\u039a\u0394\3\2\2\2\u039a\u0397"+
		"\3\2\2\2\u039b\u039e\3\2\2\2\u039c\u039a\3\2\2\2\u039c\u039d\3\2\2\2\u039d"+
		"c\3\2\2\2\u039e\u039c\3\2\2\2\u039f\u03a0\b\63\1\2\u03a0\u03a1\5b\62\2"+
		"\u03a1\u03aa\3\2\2\2\u03a2\u03a3\f\4\2\2\u03a3\u03a4\7x\2\2\u03a4\u03a9"+
		"\5b\62\2\u03a5\u03a6\f\3\2\2\u03a6\u03a7\7y\2\2\u03a7\u03a9\5b\62\2\u03a8"+
		"\u03a2\3\2\2\2\u03a8\u03a5\3\2\2\2\u03a9\u03ac\3\2\2\2\u03aa\u03a8\3\2"+
		"\2\2\u03aa\u03ab\3\2\2\2\u03abe\3\2\2\2\u03ac\u03aa\3\2\2\2\u03ad\u03ae"+
		"\b\64\1\2\u03ae\u03af\5d\63\2\u03af\u03b5\3\2\2\2\u03b0\u03b1\f\3\2\2"+
		"\u03b1\u03b2\7e\2\2\u03b2\u03b4\5d\63\2\u03b3\u03b0\3\2\2\2\u03b4\u03b7"+
		"\3\2\2\2\u03b5\u03b3\3\2\2\2\u03b5\u03b6\3\2\2\2\u03b6g\3\2\2\2\u03b7"+
		"\u03b5\3\2\2\2\u03b8\u03b9\b\65\1\2\u03b9\u03ba\5f\64\2\u03ba\u03c0\3"+
		"\2\2\2\u03bb\u03bc\f\3\2\2\u03bc\u03bd\7d\2\2\u03bd\u03bf\5f\64\2\u03be"+
		"\u03bb\3\2\2\2\u03bf\u03c2\3\2\2\2\u03c0\u03be\3\2\2\2\u03c0\u03c1\3\2"+
		"\2\2\u03c1i\3\2\2\2\u03c2\u03c0\3\2\2\2\u03c3\u03c4\b\66\1\2\u03c4\u03c5"+
		"\5h\65\2\u03c5\u03cb\3\2\2\2\u03c6\u03c7\f\3\2\2\u03c7\u03c8\7f\2\2\u03c8"+
		"\u03ca\5h\65\2\u03c9\u03c6\3\2\2\2\u03ca\u03cd\3\2\2\2\u03cb\u03c9\3\2"+
		"\2\2\u03cb\u03cc\3\2\2\2\u03cck\3\2\2\2\u03cd\u03cb\3\2\2\2\u03ce\u03cf"+
		"\b\67\1\2\u03cf\u03d0\5j\66\2\u03d0\u03d6\3\2\2\2\u03d1\u03d2\f\3\2\2"+
		"\u03d2\u03d3\7|\2\2\u03d3\u03d5\5j\66\2\u03d4\u03d1\3\2\2\2\u03d5\u03d8"+
		"\3\2\2\2\u03d6\u03d4\3\2\2\2\u03d6\u03d7\3\2\2\2\u03d7m\3\2\2\2\u03d8"+
		"\u03d6\3\2\2\2\u03d9\u03da\b8\1\2\u03da\u03db\5l\67\2\u03db\u03e1\3\2"+
		"\2\2\u03dc\u03dd\f\3\2\2\u03dd\u03de\7}\2\2\u03de\u03e0\5l\67\2\u03df"+
		"\u03dc\3\2\2\2\u03e0\u03e3\3\2\2\2\u03e1\u03df\3\2\2\2\u03e1\u03e2\3\2"+
		"\2\2\u03e2o\3\2\2\2\u03e3\u03e1\3\2\2\2\u03e4\u03ec\5n8\2\u03e5\u03e6"+
		"\5n8\2\u03e6\u03e7\7[\2\2\u03e7\u03e8\5x=\2\u03e8\u03e9\7Y\2\2\u03e9\u03ea"+
		"\5t;\2\u03ea\u03ec\3\2\2\2\u03eb\u03e4\3\2\2\2\u03eb\u03e5\3\2\2\2\u03ec"+
		"q\3\2\2\2\u03ed\u03ef\7B\2\2\u03ee\u03f0\5t;\2\u03ef\u03ee\3\2\2\2\u03ef"+
		"\u03f0\3\2\2\2\u03f0s\3\2\2\2\u03f1\u03f8\5p9\2\u03f2\u03f3\5n8\2\u03f3"+
		"\u03f4\5v<\2\u03f4\u03f5\5\u0146\u00a4\2\u03f5\u03f8\3\2\2\2\u03f6\u03f8"+
		"\5r:\2\u03f7\u03f1\3\2\2\2\u03f7\u03f2\3\2\2\2\u03f7\u03f6\3\2\2\2\u03f8"+
		"u\3\2\2\2\u03f9\u03fa\t\b\2\2\u03faw\3\2\2\2\u03fb\u03fc\b=\1\2\u03fc"+
		"\u03fd\5t;\2\u03fd\u0403\3\2\2\2\u03fe\u03ff\f\3\2\2\u03ff\u0400\7\u0080"+
		"\2\2\u0400\u0402\5t;\2\u0401\u03fe\3\2\2\2\u0402\u0405\3\2\2\2\u0403\u0401"+
		"\3\2\2\2\u0403\u0404\3\2\2\2\u0404y\3\2\2\2\u0405\u0403\3\2\2\2\u0406"+
		"\u0407\5p9\2\u0407{\3\2\2\2\u0408\u0423\5\u0082B\2\u0409\u040b\5\u00f0"+
		"y\2\u040a\u0409\3\2\2\2\u040a\u040b\3\2\2\2\u040b\u040c\3\2\2\2\u040c"+
		"\u0423\5\u0084C\2\u040d\u040f\5\u00f0y\2\u040e\u040d\3\2\2\2\u040e\u040f"+
		"\3\2\2\2\u040f\u0410\3\2\2\2\u0410\u0423\5\u0086D\2\u0411\u0413\5\u00f0"+
		"y\2\u0412\u0411\3\2\2\2\u0412\u0413\3\2\2\2\u0413\u0414\3\2\2\2\u0414"+
		"\u0423\5\u008aF\2\u0415\u0417\5\u00f0y\2\u0416\u0415\3\2\2\2\u0416\u0417"+
		"\3\2\2\2\u0417\u0418\3\2\2\2\u0418\u0423\5\u008cG\2\u0419\u041b\5\u00f0"+
		"y\2\u041a\u0419\3\2\2\2\u041a\u041b\3\2\2\2\u041b\u041c\3\2\2\2\u041c"+
		"\u0423\5\u0094K\2\u041d\u0423\5\u0096L\2\u041e\u0420\5\u00f0y\2\u041f"+
		"\u041e\3\2\2\2\u041f\u0420\3\2\2\2\u0420\u0421\3\2\2\2\u0421\u0423\5\u019e"+
		"\u00d0\2\u0422\u0408\3\2\2\2\u0422\u040a\3\2\2\2\u0422\u040e\3\2\2\2\u0422"+
		"\u0412\3\2\2\2\u0422\u0416\3\2\2\2\u0422\u041a\3\2\2\2\u0422\u041d\3\2"+
		"\2\2\u0422\u041f\3\2\2\2\u0423}\3\2\2\2\u0424\u0427\5\u0084C\2\u0425\u0427"+
		"\5\u00a2R\2\u0426\u0424\3\2\2\2\u0426\u0425\3\2\2\2\u0427\177\3\2\2\2"+
		"\u0428\u0431\5x=\2\u0429\u042b\5\u00f0y\2\u042a\u0429\3\2\2\2\u042a\u042b"+
		"\3\2\2\2\u042b\u042c\3\2\2\2\u042c\u042d\5\u00acW\2\u042d\u042e\5\u010c"+
		"\u0087\2\u042e\u042f\5\u0144\u00a3\2\u042f\u0431\3\2\2\2\u0430\u0428\3"+
		"\2\2\2\u0430\u042a\3\2\2\2\u0431\u0081\3\2\2\2\u0432\u0434\5\u00f0y\2"+
		"\u0433\u0432\3\2\2\2\u0433\u0434\3\2\2\2\u0434\u0435\3\2\2\2\u0435\u0436"+
		"\7\u008c\2\2\u0436\u0437\7Y\2\2\u0437\u0447\5|?\2\u0438\u043a\5\u00f0"+
		"y\2\u0439\u0438\3\2\2\2\u0439\u043a\3\2\2\2\u043a\u043b\3\2\2\2\u043b"+
		"\u043c\7\r\2\2\u043c\u043d\5z>\2\u043d\u043e\7Y\2\2\u043e\u043f\5|?\2"+
		"\u043f\u0447\3\2\2\2\u0440\u0442\5\u00f0y\2\u0441\u0440\3\2\2\2\u0441"+
		"\u0442\3\2\2\2\u0442\u0443\3\2\2\2\u0443\u0444\7\30\2\2\u0444\u0445\7"+
		"Y\2\2\u0445\u0447\5|?\2\u0446\u0433\3\2\2\2\u0446\u0439\3\2\2\2\u0446"+
		"\u0441\3\2\2\2\u0447\u0083\3\2\2\2\u0448\u044a\5x=\2\u0449\u0448\3\2\2"+
		"\2\u0449\u044a\3\2\2\2\u044a\u044b\3\2\2\2\u044b\u044c\7X\2\2\u044c\u0085"+
		"\3\2\2\2\u044d\u044f\7R\2\2\u044e\u0450\5\u0088E\2\u044f\u044e\3\2\2\2"+
		"\u044f\u0450\3\2\2\2\u0450\u0451\3\2\2\2\u0451\u0452\7S\2\2\u0452\u0087"+
		"\3\2\2\2\u0453\u0454\bE\1\2\u0454\u0455\5|?\2\u0455\u045a\3\2\2\2\u0456"+
		"\u0457\f\3\2\2\u0457\u0459\5|?\2\u0458\u0456\3\2\2\2\u0459\u045c\3\2\2"+
		"\2\u045a\u0458\3\2\2\2\u045a\u045b\3\2\2\2\u045b\u0089\3\2\2\2\u045c\u045a"+
		"\3\2\2\2\u045d\u045f\7\'\2\2\u045e\u0460\7\24\2\2\u045f\u045e\3\2\2\2"+
		"\u045f\u0460\3\2\2\2\u0460\u0461\3\2\2\2\u0461\u0463\7V\2\2\u0462\u0464"+
		"\5~@\2\u0463\u0462\3\2\2\2\u0463\u0464\3\2\2\2\u0464\u0465\3\2\2\2\u0465"+
		"\u0466\5\u0080A\2\u0466\u0467\7W\2\2\u0467\u0468\5|?\2\u0468\u0481\3\2"+
		"\2\2\u0469\u046b\7\'\2\2\u046a\u046c\7\24\2\2\u046b\u046a\3\2\2\2\u046b"+
		"\u046c\3\2\2\2\u046c\u046d\3\2\2\2\u046d\u046f\7V\2\2\u046e\u0470\5~@"+
		"\2\u046f\u046e\3\2\2\2\u046f\u0470\3\2\2\2\u0470\u0471\3\2\2\2\u0471\u0472"+
		"\5\u0080A\2\u0472\u0473\7W\2\2\u0473\u0474\5|?\2\u0474\u0475\7\35\2\2"+
		"\u0475\u0476\5|?\2\u0476\u0481\3\2\2\2\u0477\u0478\7>\2\2\u0478\u047a"+
		"\7V\2\2\u0479\u047b\5~@\2\u047a\u0479\3\2\2\2\u047a\u047b\3\2\2\2\u047b"+
		"\u047c\3\2\2\2\u047c\u047d\5\u0080A\2\u047d\u047e\7W\2\2\u047e\u047f\5"+
		"|?\2\u047f\u0481\3\2\2\2\u0480\u045d\3\2\2\2\u0480\u0469\3\2\2\2\u0480"+
		"\u0477\3\2\2\2\u0481\u008b\3\2\2\2\u0482\u0483\7O\2\2\u0483\u0484\7V\2"+
		"\2\u0484\u0485\5\u0080A\2\u0485\u0486\7W\2\2\u0486\u0487\5|?\2\u0487\u04a6"+
		"\3\2\2\2\u0488\u0489\7\32\2\2\u0489\u048a\5|?\2\u048a\u048b\7O\2\2\u048b"+
		"\u048c\7V\2\2\u048c\u048d\5x=\2\u048d\u048e\7W\2\2\u048e\u048f\7X\2\2"+
		"\u048f\u04a6\3\2\2\2\u0490\u0491\7$\2\2\u0491\u0492\7V\2\2\u0492\u0494"+
		"\5~@\2\u0493\u0495\5\u0080A\2\u0494\u0493\3\2\2\2\u0494\u0495\3\2\2\2"+
		"\u0495\u0496\3\2\2\2\u0496\u0498\7X\2\2\u0497\u0499\5x=\2\u0498\u0497"+
		"\3\2\2\2\u0498\u0499\3\2\2\2\u0499\u049a\3\2\2\2\u049a\u049b\7W\2\2\u049b"+
		"\u049c\5|?\2\u049c\u04a6\3\2\2\2\u049d\u049e\7$\2\2\u049e\u049f\7V\2\2"+
		"\u049f\u04a0\5\u0090I\2\u04a0\u04a1\7Y\2\2\u04a1\u04a2\5\u0092J\2\u04a2"+
		"\u04a3\7W\2\2\u04a3\u04a4\5|?\2\u04a4\u04a6\3\2\2\2\u04a5\u0482\3\2\2"+
		"\2\u04a5\u0488\3\2\2\2\u04a5\u0490\3\2\2\2\u04a5\u049d\3\2\2\2\u04a6\u008d"+
		"\3\2\2\2\u04a7\u04a9\5\u00f0y\2\u04a8\u04a7\3\2\2\2\u04a8\u04a9\3\2\2"+
		"\2\u04a9\u04aa\3\2\2\2\u04aa\u04ab\5\u00acW\2\u04ab\u04ac\5\u010c\u0087"+
		"\2\u04ac\u04b9\3\2\2\2\u04ad\u04af\5\u00f0y\2\u04ae\u04ad\3\2\2\2\u04ae"+
		"\u04af\3\2\2\2\u04af\u04b0\3\2\2\2\u04b0\u04b2\5\u00acW\2\u04b1\u04b3"+
		"\5\u0120\u0091\2\u04b2\u04b1\3\2\2\2\u04b2\u04b3\3\2\2\2\u04b3\u04b4\3"+
		"\2\2\2\u04b4\u04b5\7T\2\2\u04b5\u04b6\5\u01aa\u00d6\2\u04b6\u04b7\7U\2"+
		"\2\u04b7\u04b9\3\2\2\2\u04b8\u04a8\3\2\2\2\u04b8\u04ae\3\2\2\2\u04b9\u008f"+
		"\3\2\2\2\u04ba\u04bc\5\u00f0y\2\u04bb\u04ba\3\2\2\2\u04bb\u04bc\3\2\2"+
		"\2\u04bc\u04bd\3\2\2\2\u04bd\u04be\5\u00acW\2\u04be\u04bf\5\u010c\u0087"+
		"\2\u04bf\u0091\3\2\2\2\u04c0\u04c1\5\u014c\u00a7\2\u04c1\u0093\3\2\2\2"+
		"\u04c2\u04c3\7\f\2\2\u04c3\u04cf\7X\2\2\u04c4\u04c5\7\26\2\2\u04c5\u04cf"+
		"\7X\2\2\u04c6\u04c8\7\66\2\2\u04c7\u04c9\5\u014c\u00a7\2\u04c8\u04c7\3"+
		"\2\2\2\u04c8\u04c9\3\2\2\2\u04c9\u04ca\3\2\2\2\u04ca\u04cf\7X\2\2\u04cb"+
		"\u04cc\7&\2\2\u04cc\u04cd\7\u008c\2\2\u04cd\u04cf\7X\2\2\u04ce\u04c2\3"+
		"\2\2\2\u04ce\u04c4\3\2\2\2\u04ce\u04c6\3\2\2\2\u04ce\u04cb\3\2\2\2\u04cf"+
		"\u0095\3\2\2\2\u04d0\u04d1\5\u009cO\2\u04d1\u0097\3\2\2\2\u04d2\u04d3"+
		"\bM\1\2\u04d3\u04d4\5\u009aN\2\u04d4\u04d9\3\2\2\2\u04d5\u04d6\f\3\2\2"+
		"\u04d6\u04d8\5\u009aN\2\u04d7\u04d5\3\2\2\2\u04d8\u04db\3\2\2\2\u04d9"+
		"\u04d7\3\2\2\2\u04d9\u04da\3\2\2\2\u04da\u0099\3\2\2\2\u04db\u04d9\3\2"+
		"\2\2\u04dc\u04e8\5\u009cO\2\u04dd\u04e8\5\u009eP\2\u04de\u04e8\5\u0136"+
		"\u009c\2\u04df\u04e8\5\u0184\u00c3\2\u04e0\u04e8\5\u019c\u00cf\2\u04e1"+
		"\u04e8\5\u0198\u00cd\2\u04e2\u04e8\5\u019a\u00ce\2\u04e3\u04e8\5\u00ee"+
		"x\2\u04e4\u04e8\5\u00d4k\2\u04e5\u04e8\5\u00a6T\2\u04e6\u04e8\5\u00a8"+
		"U\2\u04e7\u04dc\3\2\2\2\u04e7\u04dd\3\2\2\2\u04e7\u04de\3\2\2\2\u04e7"+
		"\u04df\3\2\2\2\u04e7\u04e0\3\2\2\2\u04e7\u04e1\3\2\2\2\u04e7\u04e2\3\2"+
		"\2\2\u04e7\u04e3\3\2\2\2\u04e7\u04e4\3\2\2\2\u04e7\u04e5\3\2\2\2\u04e7"+
		"\u04e6\3\2\2\2\u04e8\u009b\3\2\2\2\u04e9\u04f2\5\u00a2R\2\u04ea\u04f2"+
		"\5\u00ecw\2\u04eb\u04f2\5\u00e0q\2\u04ec\u04f2\5\u00e4s\2\u04ed\u04f2"+
		"\5\u00eav\2\u04ee\u04f2\5\u00a4S\2\u04ef\u04f2\5\u00a0Q\2\u04f0\u04f2"+
		"\5\u00c8e\2\u04f1\u04e9\3\2\2\2\u04f1\u04ea\3\2\2\2\u04f1\u04eb\3\2\2"+
		"\2\u04f1\u04ec\3\2\2\2\u04f1\u04ed\3\2\2\2\u04f1\u04ee\3\2\2\2\u04f1\u04ef"+
		"\3\2\2\2\u04f1\u04f0\3\2\2\2\u04f2\u009d\3\2\2\2\u04f3\u04f5\5\u00f0y"+
		"\2\u04f4\u04f3\3\2\2\2\u04f4\u04f5\3\2\2\2\u04f5\u04f6\3\2\2\2\u04f6\u04f7"+
		"\5\u010c\u0087\2\u04f7\u04f8\7X\2\2\u04f8\u009f\3\2\2\2\u04f9\u04fa\7"+
		"J\2\2\u04fa\u04fc\7\u008c\2\2\u04fb\u04fd\5\u00f0y\2\u04fc\u04fb\3\2\2"+
		"\2\u04fc\u04fd\3\2\2\2\u04fd\u04fe\3\2\2\2\u04fe\u04ff\7i\2\2\u04ff\u0500"+
		"\5\u0124\u0093\2\u0500\u0501\7X\2\2\u0501\u00a1\3\2\2\2\u0502\u0504\5"+
		"\u00acW\2\u0503\u0505\5\u0108\u0085\2\u0504\u0503\3\2\2\2\u0504\u0505"+
		"\3\2\2\2\u0505\u0506\3\2\2\2\u0506\u0507\7X\2\2\u0507\u051b\3\2\2\2\u0508"+
		"\u0509\5\u00f0y\2\u0509\u050a\5\u00acW\2\u050a\u050b\5\u0108\u0085\2\u050b"+
		"\u050c\7X\2\2\u050c\u051b\3\2\2\2\u050d\u050f\5\u00f0y\2\u050e\u050d\3"+
		"\2\2\2\u050e\u050f\3\2\2\2\u050f\u0510\3\2\2\2\u0510\u0512\5\u00acW\2"+
		"\u0511\u0513\5\u0120\u0091\2\u0512\u0511\3\2\2\2\u0512\u0513\3\2\2\2\u0513"+
		"\u0514\3\2\2\2\u0514\u0515\7T\2\2\u0515\u0516\5\u01aa\u00d6\2\u0516\u0517"+
		"\7U\2\2\u0517\u0518\5\u0142\u00a2\2\u0518\u0519\7X\2\2\u0519\u051b\3\2"+
		"\2\2\u051a\u0502\3\2\2\2\u051a\u0508\3\2\2\2\u051a\u050e\3\2\2\2\u051b"+
		"\u00a3\3\2\2\2\u051c\u051d\7;\2\2\u051d\u051e\7V\2\2\u051e\u051f\5z>\2"+
		"\u051f\u0520\7W\2\2\u0520\u0521\7X\2\2\u0521\u052b\3\2\2\2\u0522\u0523"+
		"\7;\2\2\u0523\u0524\7V\2\2\u0524\u0525\5z>\2\u0525\u0526\7\u0080\2\2\u0526"+
		"\u0527\7\u0087\2\2\u0527\u0528\7W\2\2\u0528\u0529\7X\2\2\u0529\u052b\3"+
		"\2\2\2\u052a\u051c\3\2\2\2\u052a\u0522\3\2\2\2\u052b\u00a5\3\2\2\2\u052c"+
		"\u052d\7X\2\2\u052d\u00a7\3\2\2\2\u052e\u052f\5\u00f0y\2\u052f\u0530\7"+
		"X\2\2\u0530\u00a9\3\2\2\2\u0531\u0539\5\u00aeX\2\u0532\u0539\5\u00b6\\"+
		"\2\u0533\u0539\5\u00b0Y\2\u0534\u0539\7%\2\2\u0535\u0539\7E\2\2\u0536"+
		"\u0539\7\24\2\2\u0537\u0539\7(\2\2\u0538\u0531\3\2\2\2\u0538\u0532\3\2"+
		"\2\2\u0538\u0533\3\2\2\2\u0538\u0534\3\2\2\2\u0538\u0535\3\2\2\2\u0538"+
		"\u0536\3\2\2\2\u0538\u0537\3\2\2\2\u0539\u00ab\3\2\2\2\u053a\u053c\5\u00aa"+
		"V\2\u053b\u053d\5\u00f0y\2\u053c\u053b\3\2\2\2\u053c\u053d\3\2\2\2\u053d"+
		"\u0542\3\2\2\2\u053e\u053f\5\u00aaV\2\u053f\u0540\5\u00acW\2\u0540\u0542"+
		"\3\2\2\2\u0541\u053a\3\2\2\2\u0541\u053e\3\2\2\2\u0542\u00ad\3\2\2\2\u0543"+
		"\u0544\t\t\2\2\u0544\u00af\3\2\2\2\u0545\u0546\t\n\2\2\u0546\u00b1\3\2"+
		"\2\2\u0547\u054c\5\u00ba^\2\u0548\u054c\5\u00c0a\2\u0549\u054c\5\u0196"+
		"\u00cc\2\u054a\u054c\5\u011e\u0090\2\u054b\u0547\3\2\2\2\u054b\u0548\3"+
		"\2\2\2\u054b\u0549\3\2\2\2\u054b\u054a\3\2\2\2\u054c\u00b3\3\2\2\2\u054d"+
		"\u054f\5\u00b2Z\2\u054e\u0550\5\u00f0y\2\u054f\u054e\3\2\2\2\u054f\u0550"+
		"\3\2\2\2\u0550\u0555\3\2\2\2\u0551\u0552\5\u00b2Z\2\u0552\u0553\5\u00b4"+
		"[\2\u0553\u0555\3\2\2\2\u0554\u054d\3\2\2\2\u0554\u0551\3\2\2\2\u0555"+
		"\u00b5\3\2\2\2\u0556\u055a\5\u00b2Z\2\u0557\u055a\5\u014e\u00a8\2\u0558"+
		"\u055a\5\u00c2b\2\u0559\u0556\3\2\2\2\u0559\u0557\3\2\2\2\u0559\u0558"+
		"\3\2\2\2\u055a\u00b7\3\2\2\2\u055b\u055d\5\u00b6\\\2\u055c\u055e\5\u00f0"+
		"y\2\u055d\u055c\3\2\2\2\u055d\u055e\3\2\2\2\u055e\u0563\3\2\2\2\u055f"+
		"\u0560\5\u00b6\\\2\u0560\u0561\5\u00b8]\2\u0561\u0563\3\2\2\2\u0562\u055b"+
		"\3\2\2\2\u0562\u055f\3\2\2\2\u0563\u00b9\3\2\2\2\u0564\u0566\5\30\r\2"+
		"\u0565\u0564\3\2\2\2\u0565\u0566\3\2\2\2\u0566\u0567\3\2\2\2\u0567\u0580"+
		"\5\u00bc_\2\u0568\u0569\5\30\r\2\u0569\u056a\7?\2\2\u056a\u056b\5\u018e"+
		"\u00c8\2\u056b\u0580\3\2\2\2\u056c\u056e\5\30\r\2\u056d\u056c\3\2\2\2"+
		"\u056d\u056e\3\2\2\2\u056e\u056f\3\2\2\2\u056f\u0580\5\f\7\2\u0570\u0580"+
		"\7\17\2\2\u0571\u0580\7\20\2\2\u0572\u0580\7\21\2\2\u0573\u0580\7N\2\2"+
		"\u0574\u0580\7\13\2\2\u0575\u0580\7\67\2\2\u0576\u0580\7)\2\2\u0577\u0580"+
		"\7*\2\2\u0578\u0580\78\2\2\u0579\u0580\7I\2\2\u057a\u0580\7#\2\2\u057b"+
		"\u0580\7\33\2\2\u057c\u0580\7L\2\2\u057d\u0580\7\n\2\2\u057e\u0580\5\u00be"+
		"`\2\u057f\u0565\3\2\2\2\u057f\u0568\3\2\2\2\u057f\u056d\3\2\2\2\u057f"+
		"\u0570\3\2\2\2\u057f\u0571\3\2\2\2\u057f\u0572\3\2\2\2\u057f\u0573\3\2"+
		"\2\2\u057f\u0574\3\2\2\2\u057f\u0575\3\2\2\2\u057f\u0576\3\2\2\2\u057f"+
		"\u0577\3\2\2\2\u057f\u0578\3\2\2\2\u057f\u0579\3\2\2\2\u057f\u057a\3\2"+
		"\2\2\u057f\u057b\3\2\2\2\u057f\u057c\3\2\2\2\u057f\u057d\3\2\2\2\u057f"+
		"\u057e\3\2\2\2\u0580\u00bb\3\2\2\2\u0581\u0586\5\b\5\2\u0582\u0586\5\n"+
		"\6\2\u0583\u0586\5\2\2\2\u0584\u0586\5\u018e\u00c8\2\u0585\u0581\3\2\2"+
		"\2\u0585\u0582\3\2\2\2\u0585\u0583\3\2\2\2\u0585\u0584\3\2\2\2\u0586\u00bd"+
		"\3\2\2\2\u0587\u0588\7\27\2\2\u0588\u0589\7V\2\2\u0589\u058a\5x=\2\u058a"+
		"\u058b\7W\2\2\u058b\u0591\3\2\2\2\u058c\u058d\7\27\2\2\u058d\u058e\7V"+
		"\2\2\u058e\u058f\7\n\2\2\u058f\u0591\7W\2\2\u0590\u0587\3\2\2\2\u0590"+
		"\u058c\3\2\2\2\u0591\u00bf\3\2\2\2\u0592\u0594\5\u0156\u00ac\2\u0593\u0595"+
		"\5\u00f0y\2\u0594\u0593\3\2\2\2\u0594\u0595\3\2\2\2\u0595\u0597\3\2\2"+
		"\2\u0596\u0598\5\30\r\2\u0597\u0596\3\2\2\2\u0597\u0598\3\2\2\2\u0598"+
		"\u0599\3\2\2\2\u0599\u059a\7\u008c\2\2\u059a\u05ab\3\2\2\2\u059b\u059c"+
		"\5\u0156\u00ac\2\u059c\u059d\5\u018e\u00c8\2\u059d\u05ab\3\2\2\2\u059e"+
		"\u059f\5\u0156\u00ac\2\u059f\u05a1\5\30\r\2\u05a0\u05a2\7?\2\2\u05a1\u05a0"+
		"\3\2\2\2\u05a1\u05a2\3\2\2\2\u05a2\u05a3\3\2\2\2\u05a3\u05a4\5\u018e\u00c8"+
		"\2\u05a4\u05ab\3\2\2\2\u05a5\u05a7\7\36\2\2\u05a6\u05a8\5\30\r\2\u05a7"+
		"\u05a6\3\2\2\2\u05a7\u05a8\3\2\2\2\u05a8\u05a9\3\2\2\2\u05a9\u05ab\7\u008c"+
		"\2\2\u05aa\u0592\3\2\2\2\u05aa\u059b\3\2\2\2\u05aa\u059e\3\2\2\2\u05aa"+
		"\u05a5\3\2\2\2\u05ab\u00c1\3\2\2\2\u05ac\u05ad\5\u00c4c\2\u05ad\u05af"+
		"\7R\2\2\u05ae\u05b0\5\u00ceh\2\u05af\u05ae\3\2\2\2\u05af\u05b0\3\2\2\2"+
		"\u05b0\u05b1\3\2\2\2\u05b1\u05b2\7S\2\2\u05b2\u05ba\3\2\2\2\u05b3\u05b4"+
		"\5\u00c4c\2\u05b4\u05b5\7R\2\2\u05b5\u05b6\5\u00ceh\2\u05b6\u05b7\7\u0080"+
		"\2\2\u05b7\u05b8\7S\2\2\u05b8\u05ba\3\2\2\2\u05b9\u05ac\3\2\2\2\u05b9"+
		"\u05b3\3\2\2\2\u05ba\u00c3\3\2\2\2\u05bb\u05bd\5\u00caf\2\u05bc\u05be"+
		"\5\u00f0y\2\u05bd\u05bc\3\2\2\2\u05bd\u05be\3\2\2\2\u05be\u05c0\3\2\2"+
		"\2\u05bf\u05c1\5\u00c6d\2\u05c0\u05bf\3\2\2\2\u05c0\u05c1\3\2\2\2\u05c1"+
		"\u05c3\3\2\2\2\u05c2\u05c4\5\u00ccg\2\u05c3\u05c2\3\2\2\2\u05c3\u05c4"+
		"\3\2\2\2\u05c4\u00c5\3\2\2\2\u05c5\u05c7\5\30\r\2\u05c6\u05c5\3\2\2\2"+
		"\u05c6\u05c7\3\2\2\2\u05c7\u05c8\3\2\2\2\u05c8\u05c9\7\u008c\2\2\u05c9"+
		"\u00c7\3\2\2\2\u05ca\u05cc\5\u00caf\2\u05cb\u05cd\5\u00f0y\2\u05cc\u05cb"+
		"\3\2\2\2\u05cc\u05cd\3\2\2\2\u05cd\u05cf\3\2\2\2\u05ce\u05d0\5\30\r\2"+
		"\u05cf\u05ce\3\2\2\2\u05cf\u05d0\3\2\2\2\u05d0\u05d1\3\2\2\2\u05d1\u05d3"+
		"\7\u008c\2\2\u05d2\u05d4\5\u00ccg\2\u05d3\u05d2\3\2\2\2\u05d3\u05d4\3"+
		"\2\2\2\u05d4\u05d5\3\2\2\2\u05d5\u05d6\7X\2\2\u05d6\u00c9\3\2\2\2\u05d7"+
		"\u05dd\7\36\2\2\u05d8\u05d9\7\36\2\2\u05d9\u05dd\7\22\2\2\u05da\u05db"+
		"\7\36\2\2\u05db\u05dd\7=\2\2\u05dc\u05d7\3\2\2\2\u05dc\u05d8\3\2\2\2\u05dc"+
		"\u05da\3\2\2\2\u05dd\u00cb\3\2\2\2\u05de\u05df\7Y\2\2\u05df\u05e0\5\u00b4"+
		"[\2\u05e0\u00cd\3\2\2\2\u05e1\u05e2\bh\1\2\u05e2\u05e3\5\u00d0i\2\u05e3"+
		"\u05e9\3\2\2\2\u05e4\u05e5\f\3\2\2\u05e5\u05e6\7\u0080\2\2\u05e6\u05e8"+
		"\5\u00d0i\2\u05e7\u05e4\3\2\2\2\u05e8\u05eb\3\2\2\2\u05e9\u05e7\3\2\2"+
		"\2\u05e9\u05ea\3\2\2\2\u05ea\u00cf\3\2\2\2\u05eb\u05e9\3\2\2\2\u05ec\u05f2"+
		"\5\u00d2j\2\u05ed\u05ee\5\u00d2j\2\u05ee\u05ef\7i\2\2\u05ef\u05f0\5z>"+
		"\2\u05f0\u05f2\3\2\2\2\u05f1\u05ec\3\2\2\2\u05f1\u05ed\3\2\2\2\u05f2\u00d1"+
		"\3\2\2\2\u05f3\u05f5\7\u008c\2\2\u05f4\u05f6\5\u00f0y\2\u05f5\u05f4\3"+
		"\2\2\2\u05f5\u05f6\3\2\2\2\u05f6\u00d3\3\2\2\2\u05f7\u05fb\5\u00d6l\2"+
		"\u05f8\u05fb\5\u00d8m\2\u05f9\u05fb\5\u00dan\2\u05fa\u05f7\3\2\2\2\u05fa"+
		"\u05f8\3\2\2\2\u05fa\u05f9\3\2\2\2\u05fb\u00d5\3\2\2\2\u05fc\u05fe\7("+
		"\2\2\u05fd\u05fc\3\2\2\2\u05fd\u05fe\3\2\2\2\u05fe\u05ff\3\2\2\2\u05ff"+
		"\u0601\7,\2\2\u0600\u0602\5\u00f0y\2\u0601\u0600\3\2\2\2\u0601\u0602\3"+
		"\2\2\2\u0602\u0603\3\2\2\2\u0603\u0604\7\u008c\2\2\u0604\u0605\7R\2\2"+
		"\u0605\u0606\5\u00dep\2\u0606\u0607\7S\2\2\u0607\u00d7\3\2\2\2\u0608\u060a"+
		"\7(\2\2\u0609\u0608\3\2\2\2\u0609\u060a\3\2\2\2\u060a\u060b\3\2\2\2\u060b"+
		"\u060d\7,\2\2\u060c\u060e\5\u00f0y\2\u060d\u060c\3\2\2\2\u060d\u060e\3"+
		"\2\2\2\u060e\u060f\3\2\2\2\u060f\u0610\7R\2\2\u0610\u0611\5\u00dep\2\u0611"+
		"\u0612\7S\2\2\u0612\u00d9\3\2\2\2\u0613\u0614\7,\2\2\u0614\u0615\5\u00dc"+
		"o\2\u0615\u0616\7\\\2\2\u0616\u0617\7\u008c\2\2\u0617\u0618\7R\2\2\u0618"+
		"\u0619\5\u00dep\2\u0619\u061a\7S\2\2\u061a\u00db\3\2\2\2\u061b\u061c\7"+
		"\u008c\2\2\u061c\u061d\5\u00dco\2\u061d\u061e\7\\\2\2\u061e\u061f\7\u008c"+
		"\2\2\u061f\u00dd\3\2\2\2\u0620\u0622\5\u0098M\2\u0621\u0620\3\2\2\2\u0621"+
		"\u0622\3\2\2\2\u0622\u00df\3\2\2\2\u0623\u0624\7,\2\2\u0624\u0625\7\u008c"+
		"\2\2\u0625\u0626\7i\2\2\u0626\u0627\5\u00e2r\2\u0627\u0628\7X\2\2\u0628"+
		"\u00e1\3\2\2\2\u0629\u062b\5\30\r\2\u062a\u0629\3\2\2\2\u062a\u062b\3"+
		"\2\2\2\u062b\u062c\3\2\2\2\u062c\u062d\5\4\3\2\u062d\u00e3\3\2\2\2\u062e"+
		"\u062f\7J\2\2\u062f\u0630\5\u00e6t\2\u0630\u0631\7X\2\2\u0631\u00e5\3"+
		"\2\2\2\u0632\u0633\bt\1\2\u0633\u0635\5\u00e8u\2\u0634\u0636\7Z\2\2\u0635"+
		"\u0634\3\2\2\2\u0635\u0636\3\2\2\2\u0636\u063f\3\2\2\2\u0637\u0638\f\3"+
		"\2\2\u0638\u0639\7\u0080\2\2\u0639\u063b\5\u00e8u\2\u063a\u063c\7Z\2\2"+
		"\u063b\u063a\3\2\2\2\u063b\u063c\3\2\2\2\u063c\u063e\3\2\2\2\u063d\u0637"+
		"\3\2\2\2\u063e\u0641\3\2\2\2\u063f\u063d\3\2\2\2\u063f\u0640\3\2\2\2\u0640"+
		"\u00e7\3\2\2\2\u0641\u063f\3\2\2\2\u0642\u0644\5\u00bc_\2\u0643\u0642"+
		"\3\2\2\2\u0643\u0644\3\2\2\2\u0644\u0645\3\2\2\2\u0645\u0646\5\30\r\2"+
		"\u0646\u0647\5\24\13\2\u0647\u00e9\3\2\2\2\u0648\u064a\5\u00f0y\2\u0649"+
		"\u0648\3\2\2\2\u0649\u064a\3\2\2\2\u064a\u064b\3\2\2\2\u064b\u064c\7J"+
		"\2\2\u064c\u064e\7,\2\2\u064d\u064f\5\30\r\2\u064e\u064d\3\2\2\2\u064e"+
		"\u064f\3\2\2\2\u064f\u0650\3\2\2\2\u0650\u0651\5\4\3\2\u0651\u0652\7X"+
		"\2\2\u0652\u00eb\3\2\2\2\u0653\u0655\5\u00f0y\2\u0654\u0653\3\2\2\2\u0654"+
		"\u0655\3\2\2\2\u0655\u0656\3\2\2\2\u0656\u0657\7\t\2\2\u0657\u0658\7V"+
		"\2\2\u0658\u0659\7\u0087\2\2\u0659\u065a\7W\2\2\u065a\u065b\7X\2\2\u065b"+
		"\u00ed\3\2\2\2\u065c\u065d\7!\2\2\u065d\u065e\7\u0087\2\2\u065e\u0660"+
		"\7R\2\2\u065f\u0661\5\u0098M\2\u0660\u065f\3\2\2\2\u0660\u0661\3\2\2\2"+
		"\u0661\u0662\3\2\2\2\u0662\u0667\7S\2\2\u0663\u0664\7!\2\2\u0664\u0665"+
		"\7\u0087\2\2\u0665\u0667\5\u009aN\2\u0666\u065c\3\2\2\2\u0666\u0663\3"+
		"\2\2\2\u0667\u00ef\3\2\2\2\u0668\u0669\by\1\2\u0669\u066a\5\u00f2z\2\u066a"+
		"\u066f\3\2\2\2\u066b\u066c\f\3\2\2\u066c\u066e\5\u00f2z\2\u066d\u066b"+
		"\3\2\2\2\u066e\u0671\3\2\2\2\u066f\u066d\3\2\2\2\u066f\u0670\3\2\2\2\u0670"+
		"\u00f1\3\2\2\2\u0671\u066f\3\2\2\2\u0672\u0673\7T\2\2\u0673\u0675\7T\2"+
		"\2\u0674\u0676\5\u00f6|\2\u0675\u0674\3\2\2\2\u0675\u0676\3\2\2\2\u0676"+
		"\u0677\3\2\2\2\u0677\u0678\5\u00f8}\2\u0678\u0679\7U\2\2\u0679\u067a\7"+
		"U\2\2\u067a\u067d\3\2\2\2\u067b\u067d\5\u00f4{\2\u067c\u0672\3\2\2\2\u067c"+
		"\u067b\3\2\2\2\u067d\u00f3\3\2\2\2\u067e\u067f\7\7\2\2\u067f\u0680\7V"+
		"\2\2\u0680\u0682\5\u0122\u0092\2\u0681\u0683\7Z\2\2\u0682\u0681\3\2\2"+
		"\2\u0682\u0683\3\2\2\2\u0683\u0684\3\2\2\2\u0684\u0685\7W\2\2\u0685\u068f"+
		"\3\2\2\2\u0686\u0687\7\7\2\2\u0687\u0688\7W\2\2\u0688\u068a\5z>\2\u0689"+
		"\u068b\7Z\2\2\u068a\u0689\3\2\2\2\u068a\u068b\3\2\2\2\u068b\u068c\3\2"+
		"\2\2\u068c\u068d\7W\2\2\u068d\u068f\3\2\2\2\u068e\u067e\3\2\2\2\u068e"+
		"\u0686\3\2\2\2\u068f\u00f5\3\2\2\2\u0690\u0691\7J\2\2\u0691\u0692\5\u0100"+
		"\u0081\2\u0692\u0693\7Y\2\2\u0693\u00f7\3\2\2\2\u0694\u0696\b}\1\2\u0695"+
		"\u0697\5\u00fa~\2\u0696\u0695\3\2\2\2\u0696\u0697\3\2\2\2\u0697\u069c"+
		"\3\2\2\2\u0698\u0699\5\u00fa~\2\u0699\u069a\7Z\2\2\u069a\u069c\3\2\2\2"+
		"\u069b\u0694\3\2\2\2\u069b\u0698\3\2\2\2\u069c\u06a9\3\2\2\2\u069d\u069e"+
		"\f\5\2\2\u069e\u06a0\7\u0080\2\2\u069f\u06a1\5\u00fa~\2\u06a0\u069f\3"+
		"\2\2\2\u06a0\u06a1\3\2\2\2\u06a1\u06a8\3\2\2\2\u06a2\u06a3\f\3\2\2\u06a3"+
		"\u06a4\7\u0080\2\2\u06a4\u06a5\5\u00fa~\2\u06a5\u06a6\7Z\2\2\u06a6\u06a8"+
		"\3\2\2\2\u06a7\u069d\3\2\2\2\u06a7\u06a2\3\2\2\2\u06a8\u06ab\3\2\2\2\u06a9"+
		"\u06a7\3\2\2\2\u06a9\u06aa\3\2\2\2\u06aa\u00f9\3\2\2\2\u06ab\u06a9\3\2"+
		"\2\2\u06ac\u06ae\5\u00fc\177\2\u06ad\u06af\5\u0102\u0082\2\u06ae\u06ad"+
		"\3\2\2\2\u06ae\u06af\3\2\2\2\u06af\u00fb\3\2\2\2\u06b0\u06b3\7\u008c\2"+
		"\2\u06b1\u06b3\5\u00fe\u0080\2\u06b2\u06b0\3\2\2\2\u06b2\u06b1\3\2\2\2"+
		"\u06b3\u00fd\3\2\2\2\u06b4\u06b5\5\u0100\u0081\2\u06b5\u06b6\7\\\2\2\u06b6"+
		"\u06b7\7\u008c\2\2\u06b7\u00ff\3\2\2\2\u06b8\u06b9\7\u008c\2\2\u06b9\u0101"+
		"\3\2\2\2\u06ba\u06bc\7V\2\2\u06bb\u06bd\5\u0104\u0083\2\u06bc\u06bb\3"+
		"\2\2\2\u06bc\u06bd\3\2\2\2\u06bd\u06be\3\2\2\2\u06be\u06bf\7W\2\2\u06bf"+
		"\u0103\3\2\2\2\u06c0\u06c1\b\u0083\1\2\u06c1\u06c2\5\u0106\u0084\2\u06c2"+
		"\u06c7\3\2\2\2\u06c3\u06c4\f\3\2\2\u06c4\u06c6\5\u0106\u0084\2\u06c5\u06c3"+
		"\3\2\2\2\u06c6\u06c9\3\2\2\2\u06c7\u06c5\3\2\2\2\u06c7\u06c8\3\2\2\2\u06c8"+
		"\u0105\3\2\2\2\u06c9\u06c7\3\2\2\2\u06ca\u06cc\7V\2\2\u06cb\u06cd\5\u0104"+
		"\u0083\2\u06cc\u06cb\3\2\2\2\u06cc\u06cd\3\2\2\2\u06cd\u06ce\3\2\2\2\u06ce"+
		"\u06db\7W\2\2\u06cf\u06d1\7T\2\2\u06d0\u06d2\5\u0104\u0083\2\u06d1\u06d0"+
		"\3\2\2\2\u06d1\u06d2\3\2\2\2\u06d2\u06d3\3\2\2\2\u06d3\u06db\7U\2\2\u06d4"+
		"\u06d6\7R\2\2\u06d5\u06d7\5\u0104\u0083\2\u06d6\u06d5\3\2\2\2\u06d6\u06d7"+
		"\3\2\2\2\u06d7\u06d8\3\2\2\2\u06d8\u06db\7S\2\2\u06d9\u06db\n\13\2\2\u06da"+
		"\u06ca\3\2\2\2\u06da\u06cf\3\2\2\2\u06da\u06d4\3\2\2\2\u06da\u06d9\3\2"+
		"\2\2\u06db\u0107\3\2\2\2\u06dc\u06dd\b\u0085\1\2\u06dd\u06de\5\u010a\u0086"+
		"\2\u06de\u06e4\3\2\2\2\u06df\u06e0\f\3\2\2\u06e0\u06e1\7\u0080\2\2\u06e1"+
		"\u06e3\5\u010a\u0086\2\u06e2\u06df\3\2\2\2\u06e3\u06e6\3\2\2\2\u06e4\u06e2"+
		"\3\2\2\2\u06e4\u06e5\3\2\2\2\u06e5\u0109\3\2\2\2\u06e6\u06e4\3\2\2\2\u06e7"+
		"\u06e9\5\u010c\u0087\2\u06e8\u06ea\5\u0142\u00a2\2\u06e9\u06e8\3\2\2\2"+
		"\u06e9\u06ea\3\2\2\2\u06ea\u010b\3\2\2\2\u06eb\u06ee\5\u010e\u0088\2\u06ec"+
		"\u06ee\5\u0110\u0089\2\u06ed\u06eb\3\2\2\2\u06ed\u06ec\3\2\2\2\u06ee\u010d"+
		"\3\2\2\2\u06ef\u06f0\5\u011a\u008e\2\u06f0\u06f1\5\u010c\u0087\2\u06f1"+
		"\u010f\3\2\2\2\u06f2\u06f4\b\u0089\1\2\u06f3\u06f5\7Z\2\2\u06f4\u06f3"+
		"\3\2\2\2\u06f4\u06f5\3\2\2\2\u06f5\u06f6\3\2\2\2\u06f6\u06f8\5\22\n\2"+
		"\u06f7\u06f9\5\u00f0y\2\u06f8\u06f7\3\2\2\2\u06f8\u06f9\3\2\2\2\u06f9"+
		"\u06ff\3\2\2\2\u06fa\u06fb\7V\2\2\u06fb\u06fc\5\u010e\u0088\2\u06fc\u06fd"+
		"\7W\2\2\u06fd\u06ff\3\2\2\2\u06fe\u06f2\3\2\2\2\u06fe\u06fa\3\2\2\2\u06ff"+
		"\u070d\3\2\2\2\u0700\u0701\f\5\2\2\u0701\u0703\7T\2\2\u0702\u0704\5z>"+
		"\2\u0703\u0702\3\2\2\2\u0703\u0704\3\2\2\2\u0704\u0705\3\2\2\2\u0705\u0707"+
		"\7U\2\2\u0706\u0708\5\u00f0y\2\u0707\u0706\3\2\2\2\u0707\u0708\3\2\2\2"+
		"\u0708\u070c\3\2\2\2\u0709\u070a\f\4\2\2\u070a\u070c\5\u0112\u008a\2\u070b"+
		"\u0700\3\2\2\2\u070b\u0709\3\2\2\2\u070c\u070f\3\2\2\2\u070d\u070b\3\2"+
		"\2\2\u070d\u070e\3\2\2\2\u070e\u0111\3\2\2\2\u070f\u070d\3\2\2\2\u0710"+
		"\u0711\5\u0114\u008b\2\u0711\u0712\5\u0116\u008c\2\u0712\u0113\3\2\2\2"+
		"\u0713\u0714\7V\2\2\u0714\u0715\5\u0130\u0099\2\u0715\u0716\7W\2\2\u0716"+
		"\u0115\3\2\2\2\u0717\u0719\5\u011c\u008f\2\u0718\u0717\3\2\2\2\u0718\u0719"+
		"\3\2\2\2\u0719\u071b\3\2\2\2\u071a\u071c\5\u0120\u0091\2\u071b\u071a\3"+
		"\2\2\2\u071b\u071c\3\2\2\2\u071c\u071e\3\2\2\2\u071d\u071f\5\u01a8\u00d5"+
		"\2\u071e\u071d\3\2\2\2\u071e\u071f\3\2\2\2\u071f\u0721\3\2\2\2\u0720\u0722"+
		"\5\u00f0y\2\u0721\u0720\3\2\2\2\u0721\u0722\3\2\2\2\u0722\u0117\3\2\2"+
		"\2\u0723\u0724\7\u0082\2\2\u0724\u0725\5\u0122\u0092\2\u0725\u0119\3\2"+
		"\2\2\u0726\u0728\7a\2\2\u0727\u0729\5\u00f0y\2\u0728\u0727\3\2\2\2\u0728"+
		"\u0729\3\2\2\2\u0729\u072b\3\2\2\2\u072a\u072c\5\u011c\u008f\2\u072b\u072a"+
		"\3\2\2\2\u072b\u072c\3\2\2\2\u072c\u073e\3\2\2\2\u072d\u072f\7e\2\2\u072e"+
		"\u0730\5\u00f0y\2\u072f\u072e\3\2\2\2\u072f\u0730\3\2\2\2\u0730\u073e"+
		"\3\2\2\2\u0731\u0733\7|\2\2\u0732\u0734\5\u00f0y\2\u0733\u0732\3\2\2\2"+
		"\u0733\u0734\3\2\2\2\u0734\u073e\3\2\2\2\u0735\u0736\5\30\r\2\u0736\u0738"+
		"\7a\2\2\u0737\u0739\5\u00f0y\2\u0738\u0737\3\2\2\2\u0738\u0739\3\2\2\2"+
		"\u0739\u073b\3\2\2\2\u073a\u073c\5\u011c\u008f\2\u073b\u073a\3\2\2\2\u073b"+
		"\u073c\3\2\2\2\u073c\u073e\3\2\2\2\u073d\u0726\3\2\2\2\u073d\u072d\3\2"+
		"\2\2\u073d\u0731\3\2\2\2\u073d\u0735\3\2\2\2\u073e\u011b\3\2\2\2\u073f"+
		"\u0741\5\u011e\u0090\2\u0740\u0742\5\u011c\u008f\2\u0741\u0740\3\2\2\2"+
		"\u0741\u0742\3\2\2\2\u0742\u011d\3\2\2\2\u0743\u0744\t\f\2\2\u0744\u011f"+
		"\3\2\2\2\u0745\u0746\7e\2\2\u0746\u0747\7|\2\2\u0747\u0121\3\2\2\2\u0748"+
		"\u074a\5\u00b4[\2\u0749\u074b\5\u0126\u0094\2\u074a\u0749\3\2\2\2\u074a"+
		"\u074b\3\2\2\2\u074b\u0123\3\2\2\2\u074c\u074e\5\u00b8]\2\u074d\u074f"+
		"\5\u0126\u0094\2\u074e\u074d\3\2\2\2\u074e\u074f\3\2\2\2\u074f\u0125\3"+
		"\2\2\2\u0750\u0759\5\u0128\u0095\2\u0751\u0753\5\u012a\u0096\2\u0752\u0751"+
		"\3\2\2\2\u0752\u0753\3\2\2\2\u0753\u0754\3\2\2\2\u0754\u0755\5\u0112\u008a"+
		"\2\u0755\u0756\5\u0118\u008d\2\u0756\u0759\3\2\2\2\u0757\u0759\5\u012c"+
		"\u0097\2\u0758\u0750\3\2\2\2\u0758\u0752\3\2\2\2\u0758\u0757\3\2\2\2\u0759"+
		"\u0127\3\2\2\2\u075a\u0760\5\u012a\u0096\2\u075b\u075d\5\u011a\u008e\2"+
		"\u075c\u075e\5\u0128\u0095\2\u075d\u075c\3\2\2\2\u075d\u075e\3\2\2\2\u075e"+
		"\u0760\3\2\2\2\u075f\u075a\3\2\2\2\u075f\u075b\3\2\2\2\u0760\u0129\3\2"+
		"\2\2\u0761\u0762\b\u0096\1\2\u0762\u0770\5\u0112\u008a\2\u0763\u0765\7"+
		"T\2\2\u0764\u0766\5z>\2\u0765\u0764\3\2\2\2\u0765\u0766\3\2\2\2\u0766"+
		"\u0767\3\2\2\2\u0767\u0769\7U\2\2\u0768\u076a\5\u00f0y\2\u0769\u0768\3"+
		"\2\2\2\u0769\u076a\3\2\2\2\u076a\u0770\3\2\2\2\u076b\u076c\7V\2\2\u076c"+
		"\u076d\5\u0128\u0095\2\u076d\u076e\7W\2\2\u076e\u0770\3\2\2\2\u076f\u0761"+
		"\3\2\2\2\u076f\u0763\3\2\2\2\u076f\u076b\3\2\2\2\u0770\u077e\3\2\2\2\u0771"+
		"\u0772\f\6\2\2\u0772\u077d\5\u0112\u008a\2\u0773\u0774\f\4\2\2\u0774\u0776"+
		"\7T\2\2\u0775\u0777\5z>\2\u0776\u0775\3\2\2\2\u0776\u0777\3\2\2\2\u0777"+
		"\u0778\3\2\2\2\u0778\u077a\7U\2\2\u0779\u077b\5\u00f0y\2\u077a\u0779\3"+
		"\2\2\2\u077a\u077b\3\2\2\2\u077b\u077d\3\2\2\2\u077c\u0771\3\2\2\2\u077c"+
		"\u0773\3\2\2\2\u077d\u0780\3\2\2\2\u077e\u077c\3\2\2\2\u077e\u077f\3\2"+
		"\2\2\u077f\u012b\3\2\2\2\u0780\u077e\3\2\2\2\u0781\u0786\5\u012e\u0098"+
		"\2\u0782\u0783\5\u011a\u008e\2\u0783\u0784\5\u012c\u0097\2\u0784\u0786"+
		"\3\2\2\2\u0785\u0781\3\2\2\2\u0785\u0782\3\2\2\2\u0786\u012d\3\2\2\2\u0787"+
		"\u0788\b\u0098\1\2\u0788\u0789\7Z\2\2\u0789\u0797\3\2\2\2\u078a\u078b"+
		"\f\5\2\2\u078b\u0796\5\u0112\u008a\2\u078c\u078d\f\4\2\2\u078d\u078f\7"+
		"T\2\2\u078e\u0790\5z>\2\u078f\u078e\3\2\2\2\u078f\u0790\3\2\2\2\u0790"+
		"\u0791\3\2\2\2\u0791\u0793\7U\2\2\u0792\u0794\5\u00f0y\2\u0793\u0792\3"+
		"\2\2\2\u0793\u0794\3\2\2\2\u0794\u0796\3\2\2\2\u0795\u078a\3\2\2\2\u0795"+
		"\u078c\3\2\2\2\u0796\u0799\3\2\2\2\u0797\u0795\3\2\2\2\u0797\u0798\3\2"+
		"\2\2\u0798\u012f\3\2\2\2\u0799\u0797\3\2\2\2\u079a\u079c\5\u0132\u009a"+
		"\2\u079b\u079a\3\2\2\2\u079b\u079c\3\2\2\2\u079c\u079e\3\2\2\2\u079d\u079f"+
		"\7Z\2\2\u079e\u079d\3\2\2\2\u079e\u079f\3\2\2\2\u079f\u07a5\3\2\2\2\u07a0"+
		"\u07a1\5\u0132\u009a\2\u07a1\u07a2\7\u0080\2\2\u07a2\u07a3\7Z\2\2\u07a3"+
		"\u07a5\3\2\2\2\u07a4\u079b\3\2\2\2\u07a4\u07a0\3\2\2\2\u07a5\u0131\3\2"+
		"\2\2\u07a6\u07a7\b\u009a\1\2\u07a7\u07a8\5\u0134\u009b\2\u07a8\u07ae\3"+
		"\2\2\2\u07a9\u07aa\f\3\2\2\u07aa\u07ab\7\u0080\2\2\u07ab\u07ad\5\u0134"+
		"\u009b\2\u07ac\u07a9\3\2\2\2\u07ad\u07b0\3\2\2\2\u07ae\u07ac\3\2\2\2\u07ae"+
		"\u07af\3\2\2\2\u07af\u0133\3\2\2\2\u07b0\u07ae\3\2\2\2\u07b1\u07b3\5\u00f0"+
		"y\2\u07b2\u07b1\3\2\2\2\u07b2\u07b3\3\2\2\2\u07b3\u07b4\3\2\2\2\u07b4"+
		"\u07b5\5\u00acW\2\u07b5\u07b6\5\u010c\u0087\2\u07b6\u07c0\3\2\2\2\u07b7"+
		"\u07b9\5\u00f0y\2\u07b8\u07b7\3\2\2\2\u07b8\u07b9\3\2\2\2\u07b9\u07ba"+
		"\3\2\2\2\u07ba\u07bb\5\u00acW\2\u07bb\u07bc\5\u010c\u0087\2\u07bc\u07bd"+
		"\7i\2\2\u07bd\u07be\5\u0146\u00a4\2\u07be\u07c0\3\2\2\2\u07bf\u07b2\3"+
		"\2\2\2\u07bf\u07b8\3\2\2\2\u07c0\u0135\3\2\2\2\u07c1\u07c3\5\u00f0y\2"+
		"\u07c2\u07c1\3\2\2\2\u07c2\u07c3\3\2\2\2\u07c3\u07c5\3\2\2\2\u07c4\u07c6"+
		"\5\u00acW\2\u07c5\u07c4\3\2\2\2\u07c5\u07c6\3\2\2\2\u07c6\u07c7\3\2\2"+
		"\2\u07c7\u07c9\5\u0138\u009d\2\u07c8\u07ca\5\u0160\u00b1\2\u07c9\u07c8"+
		"\3\2\2\2\u07c9\u07ca\3\2\2\2\u07ca\u07cb\3\2\2\2\u07cb\u07cc\5\u013a\u009e"+
		"\2\u07cc\u0137\3\2\2\2\u07cd\u07ce\5\22\n\2\u07ce\u07cf\5\u0114\u008b"+
		"\2\u07cf\u07d1\5\u0116\u008c\2\u07d0\u07d2\5\u0118\u008d\2\u07d1\u07d0"+
		"\3\2\2\2\u07d1\u07d2\3\2\2\2\u07d2\u0139\3\2\2\2\u07d3\u07d8\5\u013c\u009f"+
		"\2\u07d4\u07d8\5\u01a0\u00d1\2\u07d5\u07d8\5\u013e\u00a0\2\u07d6\u07d8"+
		"\5\u0140\u00a1\2\u07d7\u07d3\3\2\2\2\u07d7\u07d4\3\2\2\2\u07d7\u07d5\3"+
		"\2\2\2\u07d7\u07d6\3\2\2\2\u07d8\u013b\3\2\2\2\u07d9\u07db\5\u0176\u00bc"+
		"\2\u07da\u07d9\3\2\2\2\u07da\u07db\3\2\2\2\u07db\u07dc\3\2\2\2\u07dc\u07dd"+
		"\5\u0086D\2\u07dd\u013d\3\2\2\2\u07de\u07df\7i\2\2\u07df\u07e0\7\30\2"+
		"\2\u07e0\u07e1\7X\2\2\u07e1\u013f\3\2\2\2\u07e2\u07e3\7i\2\2\u07e3\u07e4"+
		"\7\31\2\2\u07e4\u07e5\7X\2\2\u07e5\u0141\3\2\2\2\u07e6\u07e7\5\u0144\u00a3"+
		"\2\u07e7\u0143\3\2\2\2\u07e8\u07e9\7i\2\2\u07e9\u07ec\5\u0146\u00a4\2"+
		"\u07ea\u07ec\5\u014a\u00a6\2\u07eb\u07e8\3\2\2\2\u07eb\u07ea\3\2\2\2\u07ec"+
		"\u0145\3\2\2\2\u07ed\u07f0\5t;\2\u07ee\u07f0\5\u014a\u00a6\2\u07ef\u07ed"+
		"\3\2\2\2\u07ef\u07ee\3\2\2\2\u07f0\u0147\3\2\2\2\u07f1\u07f2\b\u00a5\1"+
		"\2\u07f2\u07f4\5\u0146\u00a4\2\u07f3\u07f5\7Z\2\2\u07f4\u07f3\3\2\2\2"+
		"\u07f4\u07f5\3\2\2\2\u07f5\u07fe\3\2\2\2\u07f6\u07f7\f\3\2\2\u07f7\u07f8"+
		"\7\u0080\2\2\u07f8\u07fa\5\u0146\u00a4\2\u07f9\u07fb\7Z\2\2\u07fa\u07f9"+
		"\3\2\2\2\u07fa\u07fb\3\2\2\2\u07fb\u07fd\3\2\2\2\u07fc\u07f6\3\2\2\2\u07fd"+
		"\u0800\3\2\2\2\u07fe\u07fc\3\2\2\2\u07fe\u07ff\3\2\2\2\u07ff\u0149\3\2"+
		"\2\2\u0800\u07fe\3\2\2\2\u0801\u0802\7R\2\2\u0802\u0804\5\u0148\u00a5"+
		"\2\u0803\u0805\7\u0080\2\2\u0804\u0803\3\2\2\2\u0804\u0805\3\2\2\2\u0805"+
		"\u0806\3\2\2\2\u0806\u0807\7S\2\2\u0807\u080b\3\2\2\2\u0808\u0809\7R\2"+
		"\2\u0809\u080b\7S\2\2\u080a\u0801\3\2\2\2\u080a\u0808\3\2\2\2\u080b\u014b"+
		"\3\2\2\2\u080c\u080f\5x=\2\u080d\u080f\5\u014a\u00a6\2\u080e\u080c\3\2"+
		"\2\2\u080e\u080d\3\2\2\2\u080f\u014d\3\2\2\2\u0810\u0811\5\u0150\u00a9"+
		"\2\u0811\u0813\7R\2\2\u0812\u0814\5\u0158\u00ad\2\u0813\u0812\3\2\2\2"+
		"\u0813\u0814\3\2\2\2\u0814\u0815\3\2\2\2\u0815\u0816\7S\2\2\u0816\u014f"+
		"\3\2\2\2\u0817\u0819\5\u0156\u00ac\2\u0818\u081a\5\u00f0y\2\u0819\u0818"+
		"\3\2\2\2\u0819\u081a\3\2\2\2\u081a\u081b\3\2\2\2\u081b\u081d\5\u0152\u00aa"+
		"\2\u081c\u081e\5\u0154\u00ab\2\u081d\u081c\3\2\2\2\u081d\u081e\3\2\2\2"+
		"\u081e\u0820\3\2\2\2\u081f\u0821\5\u0166\u00b4\2\u0820\u081f\3\2\2\2\u0820"+
		"\u0821\3\2\2\2\u0821\u082a\3\2\2\2\u0822\u0824\5\u0156\u00ac\2\u0823\u0825"+
		"\5\u00f2z\2\u0824\u0823\3\2\2\2\u0824\u0825\3\2\2\2\u0825\u0827\3\2\2"+
		"\2\u0826\u0828\5\u0166\u00b4\2\u0827\u0826\3\2\2\2\u0827\u0828\3\2\2\2"+
		"\u0828\u082a\3\2\2\2\u0829\u0817\3\2\2\2\u0829\u0822\3\2\2\2\u082a\u0151"+
		"\3\2\2\2\u082b\u082d\5\30\r\2\u082c\u082b\3\2\2\2\u082c\u082d\3\2\2\2"+
		"\u082d\u082e\3\2\2\2\u082e\u082f\5\b\5\2\u082f\u0153\3\2\2\2\u0830\u0831"+
		"\7Q\2\2\u0831\u0155\3\2\2\2\u0832\u0833\t\r\2\2\u0833\u0157\3\2\2\2\u0834"+
		"\u0836\5\u015a\u00ae\2\u0835\u0837\5\u0158\u00ad\2\u0836\u0835\3\2\2\2"+
		"\u0836\u0837\3\2\2\2\u0837\u083e\3\2\2\2\u0838\u0839\5\u016e\u00b8\2\u0839"+
		"\u083b\7Y\2\2\u083a\u083c\5\u0158\u00ad\2\u083b\u083a\3\2\2\2\u083b\u083c"+
		"\3\2\2\2\u083c\u083e\3\2\2\2\u083d\u0834\3\2\2\2\u083d\u0838\3\2\2\2\u083e"+
		"\u0159\3\2\2\2\u083f\u0841\5\u00f0y\2\u0840\u083f\3\2\2\2\u0840\u0841"+
		"\3\2\2\2\u0841\u0843\3\2\2\2\u0842\u0844\5\u00acW\2\u0843\u0842\3\2\2"+
		"\2\u0843\u0844\3\2\2\2\u0844\u0846\3\2\2\2\u0845\u0847\5\u015c\u00af\2"+
		"\u0846\u0845\3\2\2\2\u0846\u0847\3\2\2\2\u0847\u0848\3\2\2\2\u0848\u0851"+
		"\7X\2\2\u0849\u0851\5\u0136\u009c\2\u084a\u0851\5\u00e4s\2\u084b\u0851"+
		"\5\u00a4S\2\u084c\u0851\5\u0184\u00c3\2\u084d\u0851\5\u019c\u00cf\2\u084e"+
		"\u0851\5\u00a0Q\2\u084f\u0851\5\u00a6T\2\u0850\u0840\3\2\2\2\u0850\u0849"+
		"\3\2\2\2\u0850\u084a\3\2\2\2\u0850\u084b\3\2\2\2\u0850\u084c\3\2\2\2\u0850"+
		"\u084d\3\2\2\2\u0850\u084e\3\2\2\2\u0850\u084f\3\2\2\2\u0851\u015b\3\2"+
		"\2\2\u0852\u0853\b\u00af\1\2\u0853\u0854\5\u015e\u00b0\2\u0854\u085a\3"+
		"\2\2\2\u0855\u0856\f\3\2\2\u0856\u0857\7\u0080\2\2\u0857\u0859\5\u015e"+
		"\u00b0\2\u0858\u0855\3\2\2\2\u0859\u085c\3\2\2\2\u085a\u0858\3\2\2\2\u085a"+
		"\u085b\3\2\2\2\u085b\u015d\3\2\2\2\u085c\u085a\3\2\2\2\u085d\u085f\5\u010c"+
		"\u0087\2\u085e\u0860\5\u0160\u00b1\2\u085f\u085e\3\2\2\2\u085f\u0860\3"+
		"\2\2\2\u0860\u0862\3\2\2\2\u0861\u0863\5\u0164\u00b3\2\u0862\u0861\3\2"+
		"\2\2\u0862\u0863\3\2\2\2\u0863\u0871\3\2\2\2\u0864\u0866\5\u010c\u0087"+
		"\2\u0865\u0867\5\u0144\u00a3\2\u0866\u0865\3\2\2\2\u0866\u0867\3\2\2\2"+
		"\u0867\u0871\3\2\2\2\u0868\u086a\7\u008c\2\2\u0869\u0868\3\2\2\2\u0869"+
		"\u086a\3\2\2\2\u086a\u086c\3\2\2\2\u086b\u086d\5\u00f0y\2\u086c\u086b"+
		"\3\2\2\2\u086c\u086d\3\2\2\2\u086d\u086e\3\2\2\2\u086e\u086f\7Y\2\2\u086f"+
		"\u0871\5z>\2\u0870\u085d\3\2\2\2\u0870\u0864\3\2\2\2\u0870\u0869\3\2\2"+
		"\2\u0871\u015f\3\2\2\2\u0872\u0873\b\u00b1\1\2\u0873\u0874\5\u0162\u00b2"+
		"\2\u0874\u0879\3\2\2\2\u0875\u0876\f\3\2\2\u0876\u0878\5\u0162\u00b2\2"+
		"\u0877\u0875\3\2\2\2\u0878\u087b\3\2\2\2\u0879\u0877\3\2\2\2\u0879\u087a"+
		"\3\2\2\2\u087a\u0161\3\2\2\2\u087b\u0879\3\2\2\2\u087c\u087d\t\16\2\2"+
		"\u087d\u0163\3\2\2\2\u087e\u087f\7i\2\2\u087f\u0880\7\u0083\2\2\u0880"+
		"\u0165\3\2\2\2\u0881\u0882\7Y\2\2\u0882\u0883\5\u0168\u00b5\2\u0883\u0167"+
		"\3\2\2\2\u0884\u0885\b\u00b5\1\2\u0885\u0887\5\u016a\u00b6\2\u0886\u0888"+
		"\7Z\2\2\u0887\u0886\3\2\2\2\u0887\u0888\3\2\2\2\u0888\u0891\3\2\2\2\u0889"+
		"\u088a\f\3\2\2\u088a\u088b\7\u0080\2\2\u088b\u088d\5\u016a\u00b6\2\u088c"+
		"\u088e\7Z\2\2\u088d\u088c\3\2\2\2\u088d\u088e\3\2\2\2\u088e\u0890\3\2"+
		"\2\2\u088f\u0889\3\2\2\2\u0890\u0893\3\2\2\2\u0891\u088f\3\2\2\2\u0891"+
		"\u0892\3\2\2\2\u0892\u0169\3\2\2\2\u0893\u0891\3\2\2\2\u0894\u0896\5\u00f0"+
		"y\2\u0895\u0894\3\2\2\2\u0895\u0896\3\2\2\2\u0896\u0897\3\2\2\2\u0897"+
		"\u08aa\5\u016c\u00b7\2\u0898\u089a\5\u00f0y\2\u0899\u0898\3\2\2\2\u0899"+
		"\u089a\3\2\2\2\u089a\u089b\3\2\2\2\u089b\u089d\7K\2\2\u089c\u089e\5\u016e"+
		"\u00b8\2\u089d\u089c\3\2\2\2\u089d\u089e\3\2\2\2\u089e\u089f\3\2\2\2\u089f"+
		"\u08aa\5\u016c\u00b7\2\u08a0\u08a2\5\u00f0y\2\u08a1\u08a0\3\2\2\2\u08a1"+
		"\u08a2\3\2\2\2\u08a2\u08a3\3\2\2\2\u08a3\u08a5\5\u016e\u00b8\2\u08a4\u08a6"+
		"\7K\2\2\u08a5\u08a4\3\2\2\2\u08a5\u08a6\3\2\2\2\u08a6\u08a7\3\2\2\2\u08a7"+
		"\u08a8\5\u016c\u00b7\2\u08a8\u08aa\3\2\2\2\u08a9\u0895\3\2\2\2\u08a9\u0899"+
		"\3\2\2\2\u08a9\u08a1\3\2\2\2\u08aa\u016b\3\2\2\2\u08ab\u08ad\5\30\r\2"+
		"\u08ac\u08ab\3\2\2\2\u08ac\u08ad\3\2\2\2\u08ad\u08ae\3\2\2\2\u08ae\u08b5"+
		"\5\b\5\2\u08af\u08b0\5\30\r\2\u08b0\u08b1\7?\2\2\u08b1\u08b2\5\u018e\u00c8"+
		"\2\u08b2\u08b5\3\2\2\2\u08b3\u08b5\5\u00be`\2\u08b4\u08ac\3\2\2\2\u08b4"+
		"\u08af\3\2\2\2\u08b4\u08b3\3\2\2\2\u08b5\u016d\3\2\2\2\u08b6\u08b7\t\17"+
		"\2\2\u08b7\u016f\3\2\2\2\u08b8\u08b9\7\60\2\2\u08b9\u08ba\5\u0172\u00ba"+
		"\2\u08ba\u0171\3\2\2\2\u08bb\u08bd\5\u00b4[\2\u08bc\u08be\5\u0174\u00bb"+
		"\2\u08bd\u08bc\3\2\2\2\u08bd\u08be\3\2\2\2\u08be\u0173\3\2\2\2\u08bf\u08c1"+
		"\5\u011a\u008e\2\u08c0\u08c2\5\u0174\u00bb\2\u08c1\u08c0\3\2\2\2\u08c1"+
		"\u08c2\3\2\2\2\u08c2\u0175\3\2\2\2\u08c3\u08c4\7Y\2\2\u08c4\u08c5\5\u0178"+
		"\u00bd\2\u08c5\u0177\3\2\2\2\u08c6\u08c7\b\u00bd\1\2\u08c7\u08c9\5\u017a"+
		"\u00be\2\u08c8\u08ca\7Z\2\2\u08c9\u08c8\3\2\2\2\u08c9\u08ca\3\2\2\2\u08ca"+
		"\u08d3\3\2\2\2\u08cb\u08cc\f\3\2\2\u08cc\u08cd\7\u0080\2\2\u08cd\u08cf"+
		"\5\u017a\u00be\2\u08ce\u08d0\7Z\2\2\u08cf\u08ce\3\2\2\2\u08cf\u08d0\3"+
		"\2\2\2\u08d0\u08d2\3\2\2\2\u08d1\u08cb\3\2\2\2\u08d2\u08d5\3\2\2\2\u08d3"+
		"\u08d1\3\2\2\2\u08d3\u08d4\3\2\2\2\u08d4\u0179\3\2\2\2\u08d5\u08d3\3\2"+
		"\2\2\u08d6\u08d7\5\u017c\u00bf\2\u08d7\u08d9\7V\2\2\u08d8\u08da\5@!\2"+
		"\u08d9\u08d8\3\2\2\2\u08d9\u08da\3\2\2\2\u08da\u08db\3\2\2\2\u08db\u08dc"+
		"\7W\2\2\u08dc\u08dd\5\u017c\u00bf\2\u08dd\u08de\5\u014a\u00a6\2\u08de"+
		"\u017b\3\2\2\2\u08df\u08e2\5\u016c\u00b7\2\u08e0\u08e2\7\u008c\2\2\u08e1"+
		"\u08df\3\2\2\2\u08e1\u08e0\3\2\2\2\u08e2\u017d\3\2\2\2\u08e3\u08e4\7\60"+
		"\2\2\u08e4\u08e5\5\u0180\u00c1\2\u08e5\u017f\3\2\2\2\u08e6\u0917\7-\2"+
		"\2\u08e7\u0917\7\31\2\2\u08e8\u08e9\7-\2\2\u08e9\u08ea\7R\2\2\u08ea\u0917"+
		"\7U\2\2\u08eb\u08ec\7\31\2\2\u08ec\u08ed\7R\2\2\u08ed\u0917\7U\2\2\u08ee"+
		"\u0917\7_\2\2\u08ef\u0917\7`\2\2\u08f0\u0917\7a\2\2\u08f1\u0917\7b\2\2"+
		"\u08f2\u0917\7c\2\2\u08f3\u0917\7d\2\2\u08f4\u0917\7e\2\2\u08f5\u0917"+
		"\7f\2\2\u08f6\u0917\7g\2\2\u08f7\u0917\7h\2\2\u08f8\u0917\7i\2\2\u08f9"+
		"\u0917\7j\2\2\u08fa\u0917\7k\2\2\u08fb\u0917\7l\2\2\u08fc\u0917\7m\2\2"+
		"\u08fd\u0917\7n\2\2\u08fe\u0917\7o\2\2\u08ff\u0917\7p\2\2\u0900\u0917"+
		"\7q\2\2\u0901\u0917\7r\2\2\u0902\u0917\7s\2\2\u0903\u0917\7t\2\2\u0904"+
		"\u0917\7u\2\2\u0905\u0917\7w\2\2\u0906\u0917\7v\2\2\u0907\u0917\7x\2\2"+
		"\u0908\u0917\7y\2\2\u0909\u0917\7z\2\2\u090a\u0917\7{\2\2\u090b\u0917"+
		"\7|\2\2\u090c\u0917\7}\2\2\u090d\u0917\7~\2\2\u090e\u0917\7\177\2\2\u090f"+
		"\u0917\7\u0080\2\2\u0910\u0917\7\u0081\2\2\u0911\u0917\7\u0082\2\2\u0912"+
		"\u0913\7V\2\2\u0913\u0917\7W\2\2\u0914\u0915\7T\2\2\u0915\u0917\7U\2\2"+
		"\u0916\u08e6\3\2\2\2\u0916\u08e7\3\2\2\2\u0916\u08e8\3\2\2\2\u0916\u08eb"+
		"\3\2\2\2\u0916\u08ee\3\2\2\2\u0916\u08ef\3\2\2\2\u0916\u08f0\3\2\2\2\u0916"+
		"\u08f1\3\2\2\2\u0916\u08f2\3\2\2\2\u0916\u08f3\3\2\2\2\u0916\u08f4\3\2"+
		"\2\2\u0916\u08f5\3\2\2\2\u0916\u08f6\3\2\2\2\u0916\u08f7\3\2\2\2\u0916"+
		"\u08f8\3\2\2\2\u0916\u08f9\3\2\2\2\u0916\u08fa\3\2\2\2\u0916\u08fb\3\2"+
		"\2\2\u0916\u08fc\3\2\2\2\u0916\u08fd\3\2\2\2\u0916\u08fe\3\2\2\2\u0916"+
		"\u08ff\3\2\2\2\u0916\u0900\3\2\2\2\u0916\u0901\3\2\2\2\u0916\u0902\3\2"+
		"\2\2\u0916\u0903\3\2\2\2\u0916\u0904\3\2\2\2\u0916\u0905\3\2\2\2\u0916"+
		"\u0906\3\2\2\2\u0916\u0907\3\2\2\2\u0916\u0908\3\2\2\2\u0916\u0909\3\2"+
		"\2\2\u0916\u090a\3\2\2\2\u0916\u090b\3\2\2\2\u0916\u090c\3\2\2\2\u0916"+
		"\u090d\3\2\2\2\u0916\u090e\3\2\2\2\u0916\u090f\3\2\2\2\u0916\u0910\3\2"+
		"\2\2\u0916\u0911\3\2\2\2\u0916\u0912\3\2\2\2\u0916\u0914\3\2\2\2\u0917"+
		"\u0181\3\2\2\2\u0918\u0919\7\60\2\2\u0919\u091a\7\u0087\2\2\u091a\u091e"+
		"\7\u008c\2\2\u091b\u091c\7\60\2\2\u091c\u091e\7\u008b\2\2\u091d\u0918"+
		"\3\2\2\2\u091d\u091b\3\2\2\2\u091e\u0183\3\2\2\2\u091f\u0920\7?\2\2\u0920"+
		"\u0921\7j\2\2\u0921\u0922\5\u0186\u00c4\2\u0922\u0923\7k\2\2\u0923\u0924"+
		"\5\u009aN\2\u0924\u0185\3\2\2\2\u0925\u0926\b\u00c4\1\2\u0926\u0927\5"+
		"\u0188\u00c5\2\u0927\u092d\3\2\2\2\u0928\u0929\f\3\2\2\u0929\u092a\7\u0080"+
		"\2\2\u092a\u092c\5\u0188\u00c5\2\u092b\u0928\3\2\2\2\u092c\u092f\3\2\2"+
		"\2\u092d\u092b\3\2\2\2\u092d\u092e\3\2\2\2\u092e\u0187\3\2\2\2\u092f\u092d"+
		"\3\2\2\2\u0930\u0933\5\u018a\u00c6\2\u0931\u0933\5\u0134\u009b\2\u0932"+
		"\u0930\3\2\2\2\u0932\u0931\3\2\2\2\u0933\u0189\3\2\2\2\u0934\u0936\5\u018c"+
		"\u00c7\2\u0935\u0937\7Z\2\2\u0936\u0935\3\2\2\2\u0936\u0937\3\2\2\2\u0937"+
		"\u0939\3\2\2\2\u0938\u093a\7\u008c\2\2\u0939\u0938\3\2\2\2\u0939\u093a"+
		"\3\2\2\2\u093a\u0959\3\2\2\2\u093b\u093d\5\u018c\u00c7\2\u093c\u093e\7"+
		"\u008c\2\2\u093d\u093c\3\2\2\2\u093d\u093e\3\2\2\2\u093e\u093f\3\2\2\2"+
		"\u093f\u0940\7i\2\2\u0940\u0941\5\u0122\u0092\2\u0941\u0959\3\2\2\2\u0942"+
		"\u0943\7?\2\2\u0943\u0944\7j\2\2\u0944\u0945\5\u0186\u00c4\2\u0945\u0946"+
		"\7k\2\2\u0946\u0948\5\u018c\u00c7\2\u0947\u0949\7Z\2\2\u0948\u0947\3\2"+
		"\2\2\u0948\u0949\3\2\2\2\u0949\u094b\3\2\2\2\u094a\u094c\7\u008c\2\2\u094b"+
		"\u094a\3\2\2\2\u094b\u094c\3\2\2\2\u094c\u0959\3\2\2\2\u094d\u094e\7?"+
		"\2\2\u094e\u094f\7j\2\2\u094f\u0950\5\u0186\u00c4\2\u0950\u0951\7k\2\2"+
		"\u0951\u0953\5\u018c\u00c7\2\u0952\u0954\7\u008c\2\2\u0953\u0952\3\2\2"+
		"\2\u0953\u0954\3\2\2\2\u0954\u0955\3\2\2\2\u0955\u0956\7i\2\2\u0956\u0957"+
		"\5\22\n\2\u0957\u0959\3\2\2\2\u0958\u0934\3\2\2\2\u0958\u093b\3\2\2\2"+
		"\u0958\u0942\3\2\2\2\u0958\u094d\3\2\2\2\u0959\u018b\3\2\2\2\u095a\u095b"+
		"\t\20\2\2\u095b\u018d\3\2\2\2\u095c\u095d\5\f\7\2\u095d\u095f\7j\2\2\u095e"+
		"\u0960\5\u0192\u00ca\2\u095f\u095e\3\2\2\2\u095f\u0960\3\2\2\2\u0960\u0961"+
		"\3\2\2\2\u0961\u0962\7k\2\2\u0962\u018f\3\2\2\2\u0963\u0973\5\u018e\u00c8"+
		"\2\u0964\u0965\5\u017e\u00c0\2\u0965\u0967\7j\2\2\u0966\u0968\5\u0192"+
		"\u00ca\2\u0967\u0966\3\2\2\2\u0967\u0968\3\2\2\2\u0968\u0969\3\2\2\2\u0969"+
		"\u096a\7k\2\2\u096a\u0973\3\2\2\2\u096b\u096c\5\u0182\u00c2\2\u096c\u096e"+
		"\7j\2\2\u096d\u096f\5\u0192\u00ca\2\u096e\u096d\3\2\2\2\u096e\u096f\3"+
		"\2\2\2\u096f\u0970\3\2\2\2\u0970\u0971\7k\2\2\u0971\u0973\3\2\2\2\u0972"+
		"\u0963\3\2\2\2\u0972\u0964\3\2\2\2\u0972\u096b\3\2\2\2\u0973\u0191\3\2"+
		"\2\2\u0974\u0975\b\u00ca\1\2\u0975\u0977\5\u0194\u00cb\2\u0976\u0978\7"+
		"Z\2\2\u0977\u0976\3\2\2\2\u0977\u0978\3\2\2\2\u0978\u0981\3\2\2\2\u0979"+
		"\u097a\f\3\2\2\u097a\u097b\7\u0080\2\2\u097b\u097d\5\u0194\u00cb\2\u097c"+
		"\u097e\7Z\2";
	private static final String _serializedATNSegment1 =
		"\2\u097d\u097c\3\2\2\2\u097d\u097e\3\2\2\2\u097e\u0980\3\2\2\2\u097f\u0979"+
		"\3\2\2\2\u0980\u0983\3\2\2\2\u0981\u097f\3\2\2\2\u0981\u0982\3\2\2\2\u0982"+
		"\u0193\3\2\2\2\u0983\u0981\3\2\2\2\u0984\u0988\5z>\2\u0985\u0988\5\u0122"+
		"\u0092\2\u0986\u0988\5\22\n\2\u0987\u0984\3\2\2\2\u0987\u0985\3\2\2\2"+
		"\u0987\u0986\3\2\2\2\u0988\u0195\3\2\2\2\u0989\u098a\7G\2\2\u098a\u098b"+
		"\5\30\r\2\u098b\u098c\7\u008c\2\2\u098c\u0995\3\2\2\2\u098d\u098e\7G\2"+
		"\2\u098e\u0990\5\30\r\2\u098f\u0991\7?\2\2\u0990\u098f\3\2\2\2\u0990\u0991"+
		"\3\2\2\2\u0991\u0992\3\2\2\2\u0992\u0993\5\u018e\u00c8\2\u0993\u0995\3"+
		"\2\2\2\u0994\u0989\3\2\2\2\u0994\u098d\3\2\2\2\u0995\u0197\3\2\2\2\u0996"+
		"\u0998\7!\2\2\u0997\u0996\3\2\2\2\u0997\u0998\3\2\2\2\u0998\u0999\3\2"+
		"\2\2\u0999\u099a\7?\2\2\u099a\u099b\5\u009aN\2\u099b\u0199\3\2\2\2\u099c"+
		"\u099d\7?\2\2\u099d\u099e\7j\2\2\u099e\u099f\7k\2\2\u099f\u09a0\5\u009a"+
		"N\2\u09a0\u019b\3\2\2\2\u09a1\u09a3\7\37\2\2\u09a2\u09a1\3\2\2\2\u09a2"+
		"\u09a3\3\2\2\2\u09a3\u09a4\3\2\2\2\u09a4\u09a5\5\f\7\2\u09a5\u09a6\7V"+
		"\2\2\u09a6\u09a7\5\u0130\u0099\2\u09a7\u09a8\7W\2\2\u09a8\u09a9\7\u0082"+
		"\2\2\u09a9\u09aa\5\u018e\u00c8\2\u09aa\u09ab\7X\2\2\u09ab\u019d\3\2\2"+
		"\2\u09ac\u09ad\7D\2\2\u09ad\u09ae\5\u0086D\2\u09ae\u09af\5\u01a2\u00d2"+
		"\2\u09af\u019f\3\2\2\2\u09b0\u09b2\7D\2\2\u09b1\u09b3\5\u0176\u00bc\2"+
		"\u09b2\u09b1\3\2\2\2\u09b2\u09b3\3\2\2\2\u09b3\u09b4\3\2\2\2\u09b4\u09b5"+
		"\5\u0086D\2\u09b5\u09b6\5\u01a2\u00d2\2\u09b6\u01a1\3\2\2\2\u09b7\u09b9"+
		"\5\u01a4\u00d3\2\u09b8\u09ba\5\u01a2\u00d2\2\u09b9\u09b8\3\2\2\2\u09b9"+
		"\u09ba\3\2\2\2\u09ba\u01a3\3\2\2\2\u09bb\u09bc\7\16\2\2\u09bc\u09bd\7"+
		"V\2\2\u09bd\u09be\5\u01a6\u00d4\2\u09be\u09bf\7W\2\2\u09bf\u09c0\5\u0086"+
		"D\2\u09c0\u01a5\3\2\2\2\u09c1\u09c3\5\u00f0y\2\u09c2\u09c1\3\2\2\2\u09c2"+
		"\u09c3\3\2\2\2\u09c3\u09c4\3\2\2\2\u09c4\u09c5\5\u00b4[\2\u09c5\u09c6"+
		"\5\u010c\u0087\2\u09c6\u09d0\3\2\2\2\u09c7\u09c9\5\u00f0y\2\u09c8\u09c7"+
		"\3\2\2\2\u09c8\u09c9\3\2\2\2\u09c9\u09ca\3\2\2\2\u09ca\u09cc\5\u00b4["+
		"\2\u09cb\u09cd\5\u0126\u0094\2\u09cc\u09cb\3\2\2\2\u09cc\u09cd\3\2\2\2"+
		"\u09cd\u09d0\3\2\2\2\u09ce\u09d0\7Z\2\2\u09cf\u09c2\3\2\2\2\u09cf\u09c8"+
		"\3\2\2\2\u09cf\u09ce\3\2\2\2\u09d0\u01a7\3\2\2\2\u09d1\u09d2\7.\2\2\u09d2"+
		"\u09d3\7V\2\2\u09d3\u09d4\5z>\2\u09d4\u09d5\7W\2\2\u09d5\u09db\3\2\2\2"+
		"\u09d6\u09db\7.\2\2\u09d7\u09d8\7B\2\2\u09d8\u09d9\7V\2\2\u09d9\u09db"+
		"\7W\2\2\u09da\u09d1\3\2\2\2\u09da\u09d6\3\2\2\2\u09da\u09d7\3\2\2\2\u09db"+
		"\u01a9\3\2\2\2\u09dc\u09dd\b\u00d6\1\2\u09dd\u09de\7\u008c\2\2\u09de\u09e4"+
		"\3\2\2\2\u09df\u09e0\f\3\2\2\u09e0\u09e1\7\u0080\2\2\u09e1\u09e3\7\u008c"+
		"\2\2\u09e2\u09df\3\2\2\2\u09e3\u09e6\3\2\2\2\u09e4\u09e2\3\2\2\2\u09e4"+
		"\u09e5\3\2\2\2\u09e5\u01ab\3\2\2\2\u09e6\u09e4\3\2\2\2\u09e7\u09ef\5\u01ae"+
		"\u00d8\2\u09e8\u09ef\7\u0085\2\2\u09e9\u09ef\7\u0086\2\2\u09ea\u09ef\7"+
		"\u0087\2\2\u09eb\u09ef\5\u01b0\u00d9\2\u09ec\u09ef\5\u01b2\u00da\2\u09ed"+
		"\u09ef\5\u01b4\u00db\2\u09ee\u09e7\3\2\2\2\u09ee\u09e8\3\2\2\2\u09ee\u09e9"+
		"\3\2\2\2\u09ee\u09ea\3\2\2\2\u09ee\u09eb\3\2\2\2\u09ee\u09ec\3\2\2\2\u09ee"+
		"\u09ed\3\2\2\2\u09ef\u01ad\3\2\2\2\u09f0\u09f1\t\21\2\2\u09f1\u01af\3"+
		"\2\2\2\u09f2\u09f3\t\22\2\2\u09f3\u01b1\3\2\2\2\u09f4\u09f5\7/\2\2\u09f5"+
		"\u01b3\3\2\2\2\u09f6\u09f7\t\23\2\2\u09f7\u01b5\3\2\2\2\u0146\u01ba\u01c0"+
		"\u01c7\u01d4\u01d8\u01e1\u01e5\u01eb\u01f0\u01f5\u01f7\u01fc\u01ff\u0204"+
		"\u0206\u020a\u0210\u0218\u021b\u021e\u0221\u0229\u0230\u0236\u023a\u0241"+
		"\u0247\u024a\u0263\u026a\u0271\u0275\u028f\u029c\u02a6\u02ac\u02b6\u02b8"+
		"\u02be\u02d0\u02ee\u02f3\u02f7\u02fb\u02fe\u0302\u0308\u030a\u0312\u0316"+
		"\u031f\u0326\u032a\u032f\u0333\u0336\u033b\u0341\u034e\u0359\u035b\u036a"+
		"\u036c\u0378\u037a\u0386\u0388\u039a\u039c\u03a8\u03aa\u03b5\u03c0\u03cb"+
		"\u03d6\u03e1\u03eb\u03ef\u03f7\u0403\u040a\u040e\u0412\u0416\u041a\u041f"+
		"\u0422\u0426\u042a\u0430\u0433\u0439\u0441\u0446\u0449\u044f\u045a\u045f"+
		"\u0463\u046b\u046f\u047a\u0480\u0494\u0498\u04a5\u04a8\u04ae\u04b2\u04b8"+
		"\u04bb\u04c8\u04ce\u04d9\u04e7\u04f1\u04f4\u04fc\u0504\u050e\u0512\u051a"+
		"\u052a\u0538\u053c\u0541\u054b\u054f\u0554\u0559\u055d\u0562\u0565\u056d"+
		"\u057f\u0585\u0590\u0594\u0597\u05a1\u05a7\u05aa\u05af\u05b9\u05bd\u05c0"+
		"\u05c3\u05c6\u05cc\u05cf\u05d3\u05dc\u05e9\u05f1\u05f5\u05fa\u05fd\u0601"+
		"\u0609\u060d\u0621\u062a\u0635\u063b\u063f\u0643\u0649\u064e\u0654\u0660"+
		"\u0666\u066f\u0675\u067c\u0682\u068a\u068e\u0696\u069b\u06a0\u06a7\u06a9"+
		"\u06ae\u06b2\u06bc\u06c7\u06cc\u06d1\u06d6\u06da\u06e4\u06e9\u06ed\u06f4"+
		"\u06f8\u06fe\u0703\u0707\u070b\u070d\u0718\u071b\u071e\u0721\u0728\u072b"+
		"\u072f\u0733\u0738\u073b\u073d\u0741\u074a\u074e\u0752\u0758\u075d\u075f"+
		"\u0765\u0769\u076f\u0776\u077a\u077c\u077e\u0785\u078f\u0793\u0795\u0797"+
		"\u079b\u079e\u07a4\u07ae\u07b2\u07b8\u07bf\u07c2\u07c5\u07c9\u07d1\u07d7"+
		"\u07da\u07eb\u07ef\u07f4\u07fa\u07fe\u0804\u080a\u080e\u0813\u0819\u081d"+
		"\u0820\u0824\u0827\u0829\u082c\u0836\u083b\u083d\u0840\u0843\u0846\u0850"+
		"\u085a\u085f\u0862\u0866\u0869\u086c\u0870\u0879\u0887\u088d\u0891\u0895"+
		"\u0899\u089d\u08a1\u08a5\u08a9\u08ac\u08b4\u08bd\u08c1\u08c9\u08cf\u08d3"+
		"\u08d9\u08e1\u0916\u091d\u092d\u0932\u0936\u0939\u093d\u0948\u094b\u0953"+
		"\u0958\u095f\u0967\u096e\u0972\u0977\u097d\u0981\u0987\u0990\u0994\u0997"+
		"\u09a2\u09b2\u09b9\u09c2\u09c8\u09cc\u09cf\u09da\u09e4\u09ee";
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