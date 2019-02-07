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
		RULE_qualifiedIdentifier = 10, RULE_nestedNameSpecifier = 11, RULE_nestedNameSpecifierList = 12, 
		RULE_lambdaExpression = 13, RULE_lambdaIntroducer = 14, RULE_lambdaDeclarator = 15, 
		RULE_lambdaCapture = 16, RULE_captureDefault = 17, RULE_captureList = 18, 
		RULE_capture = 19, RULE_simpleCapture = 20, RULE_initializerCapture = 21, 
		RULE_foldExpression = 22, RULE_foldOperator = 23, RULE_postfixExpression = 24, 
		RULE_expressionList = 25, RULE_pseudoDestructorName = 26, RULE_unaryExpression = 27, 
		RULE_unaryOperator = 28, RULE_newExpression = 29, RULE_newPlacement = 30, 
		RULE_newTypeIdentifier = 31, RULE_newDeclarator = 32, RULE_noPointerNewDeclarator = 33, 
		RULE_newInitializer = 34, RULE_deleteExpression = 35, RULE_noExceptionExpression = 36, 
		RULE_castExpression = 37, RULE_pointerManipulationExpression = 38, RULE_multiplicativeExpression = 39, 
		RULE_additiveExpression = 40, RULE_shiftExpression = 41, RULE_relationalExpression = 42, 
		RULE_equalityExpression = 43, RULE_andExpression = 44, RULE_exclusiveOrExpression = 45, 
		RULE_inclusiveOrExpression = 46, RULE_logicalAndExpression = 47, RULE_logicalOrExpression = 48, 
		RULE_conditionalExpression = 49, RULE_throwExpression = 50, RULE_assignmentExpression = 51, 
		RULE_assignmentOperator = 52, RULE_expression = 53, RULE_constantExpression = 54, 
		RULE_statement = 55, RULE_initializerStatement = 56, RULE_condition = 57, 
		RULE_labeledStatement = 58, RULE_expressionStatement = 59, RULE_compoundStatement = 60, 
		RULE_statementSequence = 61, RULE_selectionStatement = 62, RULE_iterationStatement = 63, 
		RULE_forInitializerStatement = 64, RULE_forRangeDeclaration = 65, RULE_forRangeInitializer = 66, 
		RULE_jumpStatement = 67, RULE_declarationStatement = 68, RULE_declarationSequence = 69, 
		RULE_declaration = 70, RULE_blockDeclaration = 71, RULE_noDeclarationSpecifierFunctionDeclaration = 72, 
		RULE_aliasDeclaration = 73, RULE_simpleDeclaration = 74, RULE_staticAssertDeclaration = 75, 
		RULE_emptyDeclaration = 76, RULE_attributeDeclaration = 77, RULE_declarationSpecifier = 78, 
		RULE_declarationSpecifierSequence = 79, RULE_storageClassSpecifier = 80, 
		RULE_functionSpecifier = 81, RULE_typeSpecifier = 82, RULE_typeSpecifierSequence = 83, 
		RULE_definingTypeSpecifier = 84, RULE_definingTypeSpecifierSequence = 85, 
		RULE_simpleTypeSpecifier = 86, RULE_typeName = 87, RULE_declarationTypeSpecifier = 88, 
		RULE_elaboratedTypeSpecifier = 89, RULE_enumSpecifier = 90, RULE_enumHead = 91, 
		RULE_enumHeadName = 92, RULE_opaqueEnumDeclaration = 93, RULE_enumKey = 94, 
		RULE_enumBase = 95, RULE_enumeratorList = 96, RULE_enumeratorDefinition = 97, 
		RULE_enumerator = 98, RULE_namespaceDefinition = 99, RULE_namedNamespaceDefinition = 100, 
		RULE_unnamedNamespaceDefinition = 101, RULE_nestedNamespaceDefinition = 102, 
		RULE_enclosingNamespaceSpecifier = 103, RULE_namespaceBody = 104, RULE_namespaceAliasDefinition = 105, 
		RULE_qualifiedNamespaceSpecifier = 106, RULE_usingDeclaration = 107, RULE_usingDeclaratorList = 108, 
		RULE_usingDeclarator = 109, RULE_usingDirective = 110, RULE_asmDefinition = 111, 
		RULE_linkageSpecification = 112, RULE_attributeSpecifierSequence = 113, 
		RULE_attributeSpecifier = 114, RULE_alignmentSpecifier = 115, RULE_attributeUsingPrefix = 116, 
		RULE_attributeList = 117, RULE_attribute = 118, RULE_attributeToken = 119, 
		RULE_attributeScopedToken = 120, RULE_attributeNamespace = 121, RULE_attributeArgumentClause = 122, 
		RULE_balancedTokenSequence = 123, RULE_balancedToken = 124, RULE_initializerDeclaratorList = 125, 
		RULE_initializerDeclarator = 126, RULE_declarator = 127, RULE_pointerDeclarator = 128, 
		RULE_noPointerDeclarator = 129, RULE_parametersAndQualifiers = 130, RULE_functionParameters = 131, 
		RULE_functionQualifiers = 132, RULE_trailingReturnType = 133, RULE_pointerOperator = 134, 
		RULE_constVolatileQualifierSequence = 135, RULE_constVolatileQualifier = 136, 
		RULE_referenceQualifier = 137, RULE_typeIdentifier = 138, RULE_definingTypeIdentifier = 139, 
		RULE_abstractDeclarator = 140, RULE_pointerAbstractDeclarator = 141, RULE_noPointerAbstractDeclarator = 142, 
		RULE_abstractPackDeclarator = 143, RULE_noPointerAbstractPackDeclarator = 144, 
		RULE_parameterDeclarationClause = 145, RULE_parameterDeclarationList = 146, 
		RULE_parameterDeclaration = 147, RULE_functionDefinition = 148, RULE_functionDeclarator = 149, 
		RULE_functionBody = 150, RULE_regularFunctionBody = 151, RULE_explicitlyDefaultedFunction = 152, 
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
		"typedefName", "namespaceName", "namespaceAlias", "className", "enumName", 
		"templateName", "translationUnit", "primaryExpression", "identifierExpression", 
		"unqualifiedIdentifier", "qualifiedIdentifier", "nestedNameSpecifier", 
		"nestedNameSpecifierList", "lambdaExpression", "lambdaIntroducer", "lambdaDeclarator", 
		"lambdaCapture", "captureDefault", "captureList", "capture", "simpleCapture", 
		"initializerCapture", "foldExpression", "foldOperator", "postfixExpression", 
		"expressionList", "pseudoDestructorName", "unaryExpression", "unaryOperator", 
		"newExpression", "newPlacement", "newTypeIdentifier", "newDeclarator", 
		"noPointerNewDeclarator", "newInitializer", "deleteExpression", "noExceptionExpression", 
		"castExpression", "pointerManipulationExpression", "multiplicativeExpression", 
		"additiveExpression", "shiftExpression", "relationalExpression", "equalityExpression", 
		"andExpression", "exclusiveOrExpression", "inclusiveOrExpression", "logicalAndExpression", 
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
			setState(424);
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
			setState(428);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(426);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(427);
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
			setState(430);
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
			setState(434);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
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
			setState(438);
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
			setState(441);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
				{
				setState(440);
				declarationSequence(0);
				}
			}

			setState(443);
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
			setState(454);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(445);
				literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(446);
				match(This);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(447);
				match(LeftParenthesis);
				setState(448);
				expression(0);
				setState(449);
				match(RightParenthesis);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(451);
				identifierExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(452);
				lambdaExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(453);
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
			setState(458);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(456);
				unqualifiedIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(457);
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
		enterRule(_localctx, 18, RULE_unqualifiedIdentifier);
		try {
			setState(469);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(460);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(461);
				operatorFunctionIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(462);
				conversionFunctionIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(463);
				literalOperatorIdentifier();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(464);
				match(Tilde);
				setState(465);
				className();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(466);
				match(Tilde);
				setState(467);
				declarationTypeSpecifier();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(468);
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
			setState(471);
			nestedNameSpecifier();
			setState(473);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Template) {
				{
				setState(472);
				match(Template);
				}
			}

			setState(475);
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
		public NestedNameSpecifierListContext nestedNameSpecifierList() {
			return getRuleContext(NestedNameSpecifierListContext.class,0);
		}
		public TerminalNode DoubleColon() { return getToken(CppParser.DoubleColon, 0); }
		public NestedNameSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nestedNameSpecifier; }
	}

	public final NestedNameSpecifierContext nestedNameSpecifier() throws RecognitionException {
		NestedNameSpecifierContext _localctx = new NestedNameSpecifierContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_nestedNameSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(478);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DoubleColon) {
				{
				setState(477);
				match(DoubleColon);
				}
			}

			setState(480);
			nestedNameSpecifierList(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NestedNameSpecifierListContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(CppParser.Identifier, 0); }
		public TerminalNode DoubleColon() { return getToken(CppParser.DoubleColon, 0); }
		public NestedNameSpecifierListContext nestedNameSpecifierList() {
			return getRuleContext(NestedNameSpecifierListContext.class,0);
		}
		public NestedNameSpecifierListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nestedNameSpecifierList; }
	}

	public final NestedNameSpecifierListContext nestedNameSpecifierList() throws RecognitionException {
		return nestedNameSpecifierList(0);
	}

	private NestedNameSpecifierListContext nestedNameSpecifierList(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		NestedNameSpecifierListContext _localctx = new NestedNameSpecifierListContext(_ctx, _parentState);
		NestedNameSpecifierListContext _prevctx = _localctx;
		int _startState = 24;
		enterRecursionRule(_localctx, 24, RULE_nestedNameSpecifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(483);
			match(Identifier);
			setState(484);
			match(DoubleColon);
			}
			_ctx.stop = _input.LT(-1);
			setState(491);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new NestedNameSpecifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_nestedNameSpecifierList);
					setState(486);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(487);
					match(Identifier);
					setState(488);
					match(DoubleColon);
					}
					} 
				}
				setState(493);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
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
			setState(494);
			lambdaIntroducer();
			setState(496);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LeftParenthesis) {
				{
				setState(495);
				lambdaDeclarator();
				}
			}

			setState(498);
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
			setState(500);
			match(LeftBracket);
			setState(502);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==This || ((((_la - 95)) & ~0x3f) == 0 && ((1L << (_la - 95)) & ((1L << (Asterisk - 95)) | (1L << (Ampersand - 95)) | (1L << (Equal - 95)) | (1L << (Identifier - 95)))) != 0)) {
				{
				setState(501);
				lambdaCapture();
				}
			}

			setState(504);
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
			setState(506);
			match(LeftParenthesis);
			setState(507);
			parameterDeclarationClause();
			setState(508);
			match(RightParenthesis);
			setState(510);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << Struct) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (DoubleColon - 67)))) != 0) || _la==Identifier) {
				{
				setState(509);
				declarationSpecifierSequence();
				}
			}

			setState(513);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NoExcept || _la==Throw) {
				{
				setState(512);
				noExceptionSpecifier();
				}
			}

			setState(516);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(515);
				attributeSpecifierSequence(0);
				}
			}

			setState(519);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(518);
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
			setState(527);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(521);
				captureDefault();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(522);
				captureList(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(523);
				captureDefault();
				setState(524);
				match(Comma);
				setState(525);
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
			setState(529);
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
			setState(532);
			capture();
			setState(534);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(533);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(544);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new CaptureListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_captureList);
					setState(536);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(537);
					match(Comma);
					setState(538);
					capture();
					setState(540);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
					case 1:
						{
						setState(539);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(546);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
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
			setState(547);
			simpleCapture();
			setState(548);
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
			setState(557);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ampersand:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(551);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(550);
					match(Ampersand);
					}
				}

				setState(553);
				match(Identifier);
				}
				break;
			case This:
				enterOuterAlt(_localctx, 2);
				{
				setState(554);
				match(This);
				}
				break;
			case Asterisk:
				enterOuterAlt(_localctx, 3);
				{
				setState(555);
				match(Asterisk);
				setState(556);
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
			setState(560);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Ampersand) {
				{
				setState(559);
				match(Ampersand);
				}
			}

			setState(562);
			match(Identifier);
			setState(563);
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
			setState(585);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(565);
				match(LeftParenthesis);
				setState(566);
				castExpression();
				setState(567);
				foldOperator();
				setState(568);
				match(Ellipsis);
				setState(569);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(571);
				match(LeftParenthesis);
				setState(572);
				match(Ellipsis);
				setState(573);
				foldOperator();
				setState(574);
				castExpression();
				setState(575);
				match(RightParenthesis);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(577);
				match(LeftParenthesis);
				setState(578);
				castExpression();
				setState(579);
				foldOperator();
				setState(580);
				match(Ellipsis);
				setState(581);
				foldOperator();
				setState(582);
				castExpression();
				setState(583);
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
			setState(587);
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

	public static class PostfixExpressionContext extends ParserRuleContext {
		public PrimaryExpressionContext primaryExpression() {
			return getRuleContext(PrimaryExpressionContext.class,0);
		}
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
		public BracedInitializerListContext bracedInitializerList() {
			return getRuleContext(BracedInitializerListContext.class,0);
		}
		public TerminalNode DynamicCast() { return getToken(CppParser.DynamicCast, 0); }
		public TerminalNode LessThan() { return getToken(CppParser.LessThan, 0); }
		public List<TypeIdentifierContext> typeIdentifier() {
			return getRuleContexts(TypeIdentifierContext.class);
		}
		public TypeIdentifierContext typeIdentifier(int i) {
			return getRuleContext(TypeIdentifierContext.class,i);
		}
		public TerminalNode GreaterThan() { return getToken(CppParser.GreaterThan, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode StaticCast() { return getToken(CppParser.StaticCast, 0); }
		public TerminalNode ReinterpretCast() { return getToken(CppParser.ReinterpretCast, 0); }
		public TerminalNode ConstCast() { return getToken(CppParser.ConstCast, 0); }
		public PostfixExpressionContext postfixExpression() {
			return getRuleContext(PostfixExpressionContext.class,0);
		}
		public TerminalNode LeftBracket() { return getToken(CppParser.LeftBracket, 0); }
		public ExpressionOrBracedInitializerListContext expressionOrBracedInitializerList() {
			return getRuleContext(ExpressionOrBracedInitializerListContext.class,0);
		}
		public TerminalNode RightBracket() { return getToken(CppParser.RightBracket, 0); }
		public TerminalNode Period() { return getToken(CppParser.Period, 0); }
		public IdentifierExpressionContext identifierExpression() {
			return getRuleContext(IdentifierExpressionContext.class,0);
		}
		public TerminalNode Template() { return getToken(CppParser.Template, 0); }
		public TerminalNode Arrow() { return getToken(CppParser.Arrow, 0); }
		public PseudoDestructorNameContext pseudoDestructorName() {
			return getRuleContext(PseudoDestructorNameContext.class,0);
		}
		public TerminalNode DoublePlus() { return getToken(CppParser.DoublePlus, 0); }
		public TerminalNode DoubleMinus() { return getToken(CppParser.DoubleMinus, 0); }
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
		int _startState = 48;
		enterRecursionRule(_localctx, 48, RULE_postfixExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(649);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				{
				setState(590);
				primaryExpression();
				}
				break;
			case 2:
				{
				setState(591);
				simpleTypeSpecifier();
				setState(592);
				match(LeftParenthesis);
				setState(594);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(593);
					expressionList();
					}
				}

				setState(596);
				match(RightParenthesis);
				}
				break;
			case 3:
				{
				setState(598);
				typenameSpecifier();
				setState(599);
				match(LeftParenthesis);
				setState(601);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(600);
					expressionList();
					}
				}

				setState(603);
				match(RightParenthesis);
				}
				break;
			case 4:
				{
				setState(605);
				simpleTypeSpecifier();
				setState(606);
				bracedInitializerList();
				}
				break;
			case 5:
				{
				setState(608);
				typenameSpecifier();
				setState(609);
				bracedInitializerList();
				}
				break;
			case 6:
				{
				setState(611);
				match(DynamicCast);
				setState(612);
				match(LessThan);
				setState(613);
				typeIdentifier();
				setState(614);
				match(GreaterThan);
				setState(615);
				match(LeftParenthesis);
				setState(616);
				expression(0);
				setState(617);
				match(RightParenthesis);
				}
				break;
			case 7:
				{
				setState(619);
				match(StaticCast);
				setState(620);
				match(LessThan);
				setState(621);
				typeIdentifier();
				setState(622);
				match(GreaterThan);
				setState(623);
				match(LeftParenthesis);
				setState(624);
				expression(0);
				setState(625);
				match(RightParenthesis);
				}
				break;
			case 8:
				{
				setState(627);
				match(ReinterpretCast);
				setState(628);
				match(GreaterThan);
				setState(629);
				match(LeftParenthesis);
				setState(630);
				expression(0);
				setState(631);
				match(RightParenthesis);
				}
				break;
			case 9:
				{
				setState(633);
				match(ConstCast);
				setState(634);
				match(GreaterThan);
				setState(635);
				match(LeftParenthesis);
				setState(636);
				expression(0);
				setState(637);
				match(RightParenthesis);
				}
				break;
			case 10:
				{
				setState(639);
				typeIdentifier();
				setState(640);
				match(LeftParenthesis);
				setState(641);
				expression(0);
				setState(642);
				match(RightParenthesis);
				}
				break;
			case 11:
				{
				setState(644);
				typeIdentifier();
				setState(645);
				match(LeftParenthesis);
				setState(646);
				typeIdentifier();
				setState(647);
				match(RightParenthesis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(686);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(684);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
					case 1:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(651);
						if (!(precpred(_ctx, 18))) throw new FailedPredicateException(this, "precpred(_ctx, 18)");
						setState(652);
						match(LeftBracket);
						setState(653);
						expressionOrBracedInitializerList();
						setState(654);
						match(RightBracket);
						}
						break;
					case 2:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(656);
						if (!(precpred(_ctx, 17))) throw new FailedPredicateException(this, "precpred(_ctx, 17)");
						setState(657);
						match(LeftParenthesis);
						setState(659);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(658);
							expressionList();
							}
						}

						setState(661);
						match(RightParenthesis);
						}
						break;
					case 3:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(662);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(663);
						match(Period);
						setState(665);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(664);
							match(Template);
							}
						}

						setState(667);
						identifierExpression();
						}
						break;
					case 4:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(668);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(669);
						match(Arrow);
						setState(671);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(670);
							match(Template);
							}
						}

						setState(673);
						identifierExpression();
						}
						break;
					case 5:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(674);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(675);
						match(Period);
						setState(676);
						pseudoDestructorName();
						}
						break;
					case 6:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(677);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(678);
						match(Arrow);
						setState(679);
						pseudoDestructorName();
						}
						break;
					case 7:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(680);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(681);
						match(DoublePlus);
						}
						break;
					case 8:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(682);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(683);
						match(DoubleMinus);
						}
						break;
					}
					} 
				}
				setState(688);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
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
		enterRule(_localctx, 50, RULE_expressionList);
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
		enterRule(_localctx, 52, RULE_pseudoDestructorName);
		try {
			setState(710);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(692);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
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
		enterRule(_localctx, 54, RULE_unaryExpression);
		try {
			setState(740);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,33,_ctx) ) {
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
		enterRule(_localctx, 56, RULE_unaryOperator);
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
		enterRule(_localctx, 58, RULE_newExpression);
		int _la;
		try {
			setState(768);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
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
				switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
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
				switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
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
				switch ( getInterpreter().adaptivePredict(_input,39,_ctx) ) {
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
		enterRule(_localctx, 60, RULE_newPlacement);
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
		enterRule(_localctx, 62, RULE_newTypeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(774);
			typeSpecifierSequence();
			setState(776);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
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
		enterRule(_localctx, 64, RULE_newDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(778);
			pointerOperator();
			setState(780);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 90)) & ~0x3f) == 0 && ((1L << (_la - 90)) & ((1L << (DoubleColon - 90)) | (1L << (Asterisk - 90)) | (1L << (Ampersand - 90)) | (1L << (DoubleAmpersand - 90)) | (1L << (Identifier - 90)))) != 0)) {
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
		int _startState = 66;
		enterRecursionRule(_localctx, 66, RULE_noPointerNewDeclarator, _p);
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
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
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
			_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
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
					switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
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
				_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
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
		enterRule(_localctx, 68, RULE_newInitializer);
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
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
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
		enterRule(_localctx, 70, RULE_deleteExpression);
		int _la;
		try {
			setState(823);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
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
		enterRule(_localctx, 72, RULE_noExceptionExpression);
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
		enterRule(_localctx, 74, RULE_castExpression);
		try {
			setState(836);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,51,_ctx) ) {
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
		int _startState = 76;
		enterRecursionRule(_localctx, 76, RULE_pointerManipulationExpression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,53,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(847);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,52,_ctx) ) {
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
				_alt = getInterpreter().adaptivePredict(_input,53,_ctx);
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
		int _startState = 78;
		enterRecursionRule(_localctx, 78, RULE_multiplicativeExpression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,55,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(864);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,54,_ctx) ) {
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
				_alt = getInterpreter().adaptivePredict(_input,55,_ctx);
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
		int _startState = 80;
		enterRecursionRule(_localctx, 80, RULE_additiveExpression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,57,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(878);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
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
				_alt = getInterpreter().adaptivePredict(_input,57,_ctx);
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
		int _startState = 82;
		enterRecursionRule(_localctx, 82, RULE_shiftExpression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,59,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(892);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,58,_ctx) ) {
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
				_alt = getInterpreter().adaptivePredict(_input,59,_ctx);
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
		int _startState = 84;
		enterRecursionRule(_localctx, 84, RULE_relationalExpression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(912);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,60,_ctx) ) {
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
				_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
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
		int _startState = 86;
		enterRecursionRule(_localctx, 86, RULE_equalityExpression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(926);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
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
		int _startState = 88;
		enterRecursionRule(_localctx, 88, RULE_andExpression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,64,_ctx);
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
		int _startState = 90;
		enterRecursionRule(_localctx, 90, RULE_exclusiveOrExpression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,65,_ctx);
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
				_alt = getInterpreter().adaptivePredict(_input,65,_ctx);
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
		int _startState = 92;
		enterRecursionRule(_localctx, 92, RULE_inclusiveOrExpression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,66,_ctx);
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
		int _startState = 94;
		enterRecursionRule(_localctx, 94, RULE_logicalAndExpression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,67,_ctx);
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
				_alt = getInterpreter().adaptivePredict(_input,67,_ctx);
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
		int _startState = 96;
		enterRecursionRule(_localctx, 96, RULE_logicalOrExpression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,68,_ctx);
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
		enterRule(_localctx, 98, RULE_conditionalExpression);
		try {
			setState(993);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
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
		enterRule(_localctx, 100, RULE_throwExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(995);
			match(Throw);
			setState(997);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,70,_ctx) ) {
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
		enterRule(_localctx, 102, RULE_assignmentExpression);
		try {
			setState(1005);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,71,_ctx) ) {
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
		enterRule(_localctx, 104, RULE_assignmentOperator);
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
		int _startState = 106;
		enterRecursionRule(_localctx, 106, RULE_expression, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,72,_ctx);
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
		enterRule(_localctx, 108, RULE_constantExpression);
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
		enterRule(_localctx, 110, RULE_statement);
		int _la;
		try {
			setState(1048);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,79,_ctx) ) {
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
				switch ( getInterpreter().adaptivePredict(_input,73,_ctx) ) {
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
		enterRule(_localctx, 112, RULE_initializerStatement);
		try {
			setState(1052);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
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
		enterRule(_localctx, 114, RULE_condition);
		int _la;
		try {
			setState(1062);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,82,_ctx) ) {
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
		enterRule(_localctx, 116, RULE_labeledStatement);
		int _la;
		try {
			setState(1084);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,86,_ctx) ) {
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
		enterRule(_localctx, 118, RULE_expressionStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1087);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
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
		enterRule(_localctx, 120, RULE_compoundStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1091);
			match(LeftBrace);
			setState(1093);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
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
		int _startState = 122;
		enterRecursionRule(_localctx, 122, RULE_statementSequence, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,89,_ctx);
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
				_alt = getInterpreter().adaptivePredict(_input,89,_ctx);
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
		enterRule(_localctx, 124, RULE_selectionStatement);
		int _la;
		try {
			setState(1142);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,95,_ctx) ) {
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
				switch ( getInterpreter().adaptivePredict(_input,91,_ctx) ) {
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
				switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
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
				switch ( getInterpreter().adaptivePredict(_input,94,_ctx) ) {
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
		enterRule(_localctx, 126, RULE_iterationStatement);
		int _la;
		try {
			setState(1179);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,98,_ctx) ) {
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
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticCast) | (1L << Struct) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
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
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
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
		enterRule(_localctx, 128, RULE_forInitializerStatement);
		int _la;
		try {
			setState(1198);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,102,_ctx) ) {
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
		enterRule(_localctx, 130, RULE_forRangeDeclaration);
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
		enterRule(_localctx, 132, RULE_forRangeInitializer);
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
		enterRule(_localctx, 134, RULE_jumpStatement);
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
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
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
		enterRule(_localctx, 136, RULE_declarationStatement);
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
		int _startState = 138;
		enterRecursionRule(_localctx, 138, RULE_declarationSequence, _p);
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
			_alt = getInterpreter().adaptivePredict(_input,106,_ctx);
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
				_alt = getInterpreter().adaptivePredict(_input,106,_ctx);
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
		enterRule(_localctx, 140, RULE_declaration);
		try {
			setState(1245);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,107,_ctx) ) {
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
		enterRule(_localctx, 142, RULE_blockDeclaration);
		try {
			setState(1255);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,108,_ctx) ) {
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
		enterRule(_localctx, 144, RULE_noDeclarationSpecifierFunctionDeclaration);
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
		enterRule(_localctx, 146, RULE_aliasDeclaration);
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
		enterRule(_localctx, 148, RULE_simpleDeclaration);
		int _la;
		try {
			setState(1296);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,114,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1272);
				declarationSpecifierSequence();
				setState(1274);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Operator || ((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (LeftParenthesis - 84)) | (1L << (Ellipsis - 84)) | (1L << (DoubleColon - 84)) | (1L << (Asterisk - 84)) | (1L << (Ampersand - 84)) | (1L << (Tilde - 84)) | (1L << (DoubleAmpersand - 84)) | (1L << (Identifier - 84)))) != 0)) {
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
		enterRule(_localctx, 150, RULE_staticAssertDeclaration);
		try {
			setState(1312);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,115,_ctx) ) {
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
		enterRule(_localctx, 152, RULE_emptyDeclaration);
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
		enterRule(_localctx, 154, RULE_attributeDeclaration);
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
		enterRule(_localctx, 156, RULE_declarationSpecifier);
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
		enterRule(_localctx, 158, RULE_declarationSpecifierSequence);
		try {
			setState(1335);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,118,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1328);
				declarationSpecifier();
				setState(1330);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,117,_ctx) ) {
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
		enterRule(_localctx, 160, RULE_storageClassSpecifier);
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
		enterRule(_localctx, 162, RULE_functionSpecifier);
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
		enterRule(_localctx, 164, RULE_typeSpecifier);
		try {
			setState(1345);
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
				setState(1341);
				simpleTypeSpecifier();
				}
				break;
			case Class:
			case Enum:
			case Struct:
			case Union:
				enterOuterAlt(_localctx, 2);
				{
				setState(1342);
				elaboratedTypeSpecifier();
				}
				break;
			case TypeName:
				enterOuterAlt(_localctx, 3);
				{
				setState(1343);
				typenameSpecifier();
				}
				break;
			case Const:
			case Volatile:
				enterOuterAlt(_localctx, 4);
				{
				setState(1344);
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
		enterRule(_localctx, 166, RULE_typeSpecifierSequence);
		try {
			setState(1354);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,121,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1347);
				typeSpecifier();
				setState(1349);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,120,_ctx) ) {
				case 1:
					{
					setState(1348);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1351);
				typeSpecifier();
				setState(1352);
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
		enterRule(_localctx, 168, RULE_definingTypeSpecifier);
		try {
			setState(1359);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,122,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1356);
				typeSpecifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1357);
				classSpecifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1358);
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
		enterRule(_localctx, 170, RULE_definingTypeSpecifierSequence);
		try {
			setState(1368);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,124,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1361);
				definingTypeSpecifier();
				setState(1363);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,123,_ctx) ) {
				case 1:
					{
					setState(1362);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1365);
				definingTypeSpecifier();
				setState(1366);
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
		enterRule(_localctx, 172, RULE_simpleTypeSpecifier);
		try {
			setState(1397);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,127,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1371);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,125,_ctx) ) {
				case 1:
					{
					setState(1370);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1373);
				typeName();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1374);
				nestedNameSpecifier();
				setState(1375);
				match(Template);
				setState(1376);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1379);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,126,_ctx) ) {
				case 1:
					{
					setState(1378);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1381);
				templateName();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1382);
				match(Char);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1383);
				match(Char16);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1384);
				match(Char32);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1385);
				match(WChar);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1386);
				match(Bool);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1387);
				match(Short);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1388);
				match(Int);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1389);
				match(Long);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(1390);
				match(Signed);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(1391);
				match(Unsigned);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(1392);
				match(Float);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(1393);
				match(Double);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(1394);
				match(Void);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(1395);
				match(Auto);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(1396);
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
		enterRule(_localctx, 174, RULE_typeName);
		try {
			setState(1403);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,128,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1399);
				className();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1400);
				enumName();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1401);
				typedefName();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1402);
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
		enterRule(_localctx, 176, RULE_declarationTypeSpecifier);
		try {
			setState(1414);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,129,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1405);
				match(DeclType);
				setState(1406);
				match(LeftParenthesis);
				setState(1407);
				expression(0);
				setState(1408);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1410);
				match(DeclType);
				setState(1411);
				match(LeftParenthesis);
				setState(1412);
				match(Auto);
				setState(1413);
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
		enterRule(_localctx, 178, RULE_elaboratedTypeSpecifier);
		int _la;
		try {
			setState(1440);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,134,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1416);
				classKey();
				setState(1418);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1417);
					attributeSpecifierSequence(0);
					}
				}

				setState(1421);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,131,_ctx) ) {
				case 1:
					{
					setState(1420);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1423);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1425);
				classKey();
				setState(1426);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1428);
				classKey();
				setState(1429);
				nestedNameSpecifier();
				setState(1431);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(1430);
					match(Template);
					}
				}

				setState(1433);
				simpleTemplateIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1435);
				match(Enum);
				setState(1437);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,133,_ctx) ) {
				case 1:
					{
					setState(1436);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1439);
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
		enterRule(_localctx, 180, RULE_enumSpecifier);
		int _la;
		try {
			setState(1455);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,136,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1442);
				enumHead();
				setState(1443);
				match(LeftBrace);
				setState(1445);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1444);
					enumeratorList(0);
					}
				}

				setState(1447);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1449);
				enumHead();
				setState(1450);
				match(LeftBrace);
				setState(1451);
				enumeratorList(0);
				setState(1452);
				match(Comma);
				setState(1453);
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
		enterRule(_localctx, 182, RULE_enumHead);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1457);
			enumKey();
			setState(1459);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1458);
				attributeSpecifierSequence(0);
				}
			}

			setState(1462);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DoubleColon || _la==Identifier) {
				{
				setState(1461);
				enumHeadName();
				}
			}

			setState(1465);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1464);
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
		enterRule(_localctx, 184, RULE_enumHeadName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1468);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,140,_ctx) ) {
			case 1:
				{
				setState(1467);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1470);
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
		enterRule(_localctx, 186, RULE_opaqueEnumDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1472);
			enumKey();
			setState(1474);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1473);
				attributeSpecifierSequence(0);
				}
			}

			setState(1477);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,142,_ctx) ) {
			case 1:
				{
				setState(1476);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1479);
			match(Identifier);
			setState(1481);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1480);
				enumBase();
				}
			}

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
		enterRule(_localctx, 188, RULE_enumKey);
		try {
			setState(1490);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,144,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1485);
				match(Enum);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1486);
				match(Enum);
				setState(1487);
				match(Class);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1488);
				match(Enum);
				setState(1489);
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
		enterRule(_localctx, 190, RULE_enumBase);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1492);
			match(Colon);
			setState(1493);
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
		int _startState = 192;
		enterRecursionRule(_localctx, 192, RULE_enumeratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1496);
			enumeratorDefinition();
			}
			_ctx.stop = _input.LT(-1);
			setState(1503);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,145,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new EnumeratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_enumeratorList);
					setState(1498);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1499);
					match(Comma);
					setState(1500);
					enumeratorDefinition();
					}
					} 
				}
				setState(1505);
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
		enterRule(_localctx, 194, RULE_enumeratorDefinition);
		try {
			setState(1511);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,146,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1506);
				enumerator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1507);
				enumerator();
				setState(1508);
				match(Equal);
				setState(1509);
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
		enterRule(_localctx, 196, RULE_enumerator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1513);
			match(Identifier);
			setState(1515);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,147,_ctx) ) {
			case 1:
				{
				setState(1514);
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
		enterRule(_localctx, 198, RULE_namespaceDefinition);
		try {
			setState(1520);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,148,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1517);
				namedNamespaceDefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1518);
				unnamedNamespaceDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1519);
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
		enterRule(_localctx, 200, RULE_namedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1523);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1522);
				match(Inline);
				}
			}

			setState(1525);
			match(Namespace);
			setState(1527);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1526);
				attributeSpecifierSequence(0);
				}
			}

			setState(1529);
			match(Identifier);
			setState(1530);
			match(LeftBrace);
			setState(1531);
			namespaceBody();
			setState(1532);
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
		enterRule(_localctx, 202, RULE_unnamedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1535);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1534);
				match(Inline);
				}
			}

			setState(1537);
			match(Namespace);
			setState(1539);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1538);
				attributeSpecifierSequence(0);
				}
			}

			setState(1541);
			match(LeftBrace);
			setState(1542);
			namespaceBody();
			setState(1543);
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
		enterRule(_localctx, 204, RULE_nestedNamespaceDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1545);
			match(Namespace);
			setState(1546);
			enclosingNamespaceSpecifier();
			setState(1547);
			match(DoubleColon);
			setState(1548);
			match(Identifier);
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
		enterRule(_localctx, 206, RULE_enclosingNamespaceSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1553);
			match(Identifier);
			setState(1554);
			enclosingNamespaceSpecifier();
			setState(1555);
			match(DoubleColon);
			setState(1556);
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
		enterRule(_localctx, 208, RULE_namespaceBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1559);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
				{
				setState(1558);
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
		enterRule(_localctx, 210, RULE_namespaceAliasDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1561);
			match(Namespace);
			setState(1562);
			match(Identifier);
			setState(1563);
			match(Equal);
			setState(1564);
			qualifiedNamespaceSpecifier();
			setState(1565);
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
		enterRule(_localctx, 212, RULE_qualifiedNamespaceSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1568);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,154,_ctx) ) {
			case 1:
				{
				setState(1567);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1570);
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
		enterRule(_localctx, 214, RULE_usingDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1572);
			match(Using);
			setState(1573);
			usingDeclaratorList(0);
			setState(1574);
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
		int _startState = 216;
		enterRecursionRule(_localctx, 216, RULE_usingDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1577);
			usingDeclarator();
			setState(1579);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,155,_ctx) ) {
			case 1:
				{
				setState(1578);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(1589);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,157,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new UsingDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_usingDeclaratorList);
					setState(1581);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1582);
					match(Comma);
					setState(1583);
					usingDeclarator();
					setState(1585);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,156,_ctx) ) {
					case 1:
						{
						setState(1584);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(1591);
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
		enterRule(_localctx, 218, RULE_usingDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1593);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,158,_ctx) ) {
			case 1:
				{
				setState(1592);
				typeName();
				}
				break;
			}
			setState(1595);
			nestedNameSpecifier();
			setState(1596);
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
		enterRule(_localctx, 220, RULE_usingDirective);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1599);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1598);
				attributeSpecifierSequence(0);
				}
			}

			setState(1601);
			match(Using);
			setState(1602);
			match(Namespace);
			setState(1604);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,160,_ctx) ) {
			case 1:
				{
				setState(1603);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1606);
			namespaceName();
			setState(1607);
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
		enterRule(_localctx, 222, RULE_asmDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1610);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1609);
				attributeSpecifierSequence(0);
				}
			}

			setState(1612);
			match(Asm);
			setState(1613);
			match(LeftParenthesis);
			setState(1614);
			match(StringLiteral);
			setState(1615);
			match(RightParenthesis);
			setState(1616);
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
		enterRule(_localctx, 224, RULE_linkageSpecification);
		int _la;
		try {
			setState(1628);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,163,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1618);
				match(Extern);
				setState(1619);
				match(StringLiteral);
				setState(1620);
				match(LeftBrace);
				setState(1622);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
					{
					setState(1621);
					declarationSequence(0);
					}
				}

				setState(1624);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1625);
				match(Extern);
				setState(1626);
				match(StringLiteral);
				setState(1627);
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
		int _startState = 226;
		enterRecursionRule(_localctx, 226, RULE_attributeSpecifierSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1631);
			attributeSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(1637);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,164,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AttributeSpecifierSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_attributeSpecifierSequence);
					setState(1633);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1634);
					attributeSpecifier();
					}
					} 
				}
				setState(1639);
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
		enterRule(_localctx, 228, RULE_attributeSpecifier);
		try {
			setState(1650);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1640);
				match(LeftBracket);
				setState(1641);
				match(LeftBracket);
				setState(1643);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,165,_ctx) ) {
				case 1:
					{
					setState(1642);
					attributeUsingPrefix();
					}
					break;
				}
				setState(1645);
				attributeList(0);
				setState(1646);
				match(RightBracket);
				setState(1647);
				match(RightBracket);
				}
				break;
			case AlignAs:
				enterOuterAlt(_localctx, 2);
				{
				setState(1649);
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
		enterRule(_localctx, 230, RULE_alignmentSpecifier);
		int _la;
		try {
			setState(1668);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,169,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1652);
				match(AlignAs);
				setState(1653);
				match(LeftParenthesis);
				setState(1654);
				typeIdentifier();
				setState(1656);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1655);
					match(Ellipsis);
					}
				}

				setState(1658);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1660);
				match(AlignAs);
				setState(1661);
				match(RightParenthesis);
				setState(1662);
				constantExpression();
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
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 232, RULE_attributeUsingPrefix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1670);
			match(Using);
			setState(1671);
			attributeNamespace();
			setState(1672);
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
		int _startState = 234;
		enterRecursionRule(_localctx, 234, RULE_attributeList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1681);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,171,_ctx) ) {
			case 1:
				{
				setState(1676);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,170,_ctx) ) {
				case 1:
					{
					setState(1675);
					attribute();
					}
					break;
				}
				}
				break;
			case 2:
				{
				setState(1678);
				attribute();
				setState(1679);
				match(Ellipsis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1695);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,174,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1693);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,173,_ctx) ) {
					case 1:
						{
						_localctx = new AttributeListContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_attributeList);
						setState(1683);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1684);
						match(Comma);
						setState(1686);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,172,_ctx) ) {
						case 1:
							{
							setState(1685);
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
						setState(1688);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1689);
						match(Comma);
						setState(1690);
						attribute();
						setState(1691);
						match(Ellipsis);
						}
						break;
					}
					} 
				}
				setState(1697);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,174,_ctx);
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
		enterRule(_localctx, 236, RULE_attribute);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1698);
			attributeToken();
			setState(1700);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,175,_ctx) ) {
			case 1:
				{
				setState(1699);
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
		enterRule(_localctx, 238, RULE_attributeToken);
		try {
			setState(1704);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,176,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1702);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1703);
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
		enterRule(_localctx, 240, RULE_attributeScopedToken);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1706);
			attributeNamespace();
			setState(1707);
			match(DoubleColon);
			setState(1708);
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
		enterRule(_localctx, 242, RULE_attributeNamespace);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1710);
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
		enterRule(_localctx, 244, RULE_attributeArgumentClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1712);
			match(LeftParenthesis);
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
		int _startState = 246;
		enterRecursionRule(_localctx, 246, RULE_balancedTokenSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1719);
			balancedToken();
			}
			_ctx.stop = _input.LT(-1);
			setState(1725);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,178,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BalancedTokenSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_balancedTokenSequence);
					setState(1721);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1722);
					balancedToken();
					}
					} 
				}
				setState(1727);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,178,_ctx);
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
		enterRule(_localctx, 248, RULE_balancedToken);
		int _la;
		try {
			setState(1744);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1728);
				match(LeftParenthesis);
				setState(1730);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1729);
					balancedTokenSequence(0);
					}
				}

				setState(1732);
				match(RightParenthesis);
				}
				break;
			case LeftBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1733);
				match(LeftBracket);
				setState(1735);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1734);
					balancedTokenSequence(0);
					}
				}

				setState(1737);
				match(RightBracket);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 3);
				{
				setState(1738);
				match(LeftBrace);
				setState(1740);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1739);
					balancedTokenSequence(0);
					}
				}

				setState(1742);
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
				setState(1743);
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
		int _startState = 250;
		enterRecursionRule(_localctx, 250, RULE_initializerDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1747);
			initializerDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(1754);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,183,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerDeclaratorList);
					setState(1749);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1750);
					match(Comma);
					setState(1751);
					initializerDeclarator();
					}
					} 
				}
				setState(1756);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,183,_ctx);
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
			setState(1757);
			declarator();
			setState(1759);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,184,_ctx) ) {
			case 1:
				{
				setState(1758);
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
			setState(1763);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,185,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1761);
				pointerDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1762);
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
			setState(1765);
			pointerOperator();
			setState(1766);
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
		int _startState = 258;
		enterRecursionRule(_localctx, 258, RULE_noPointerDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1780);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Operator:
			case Ellipsis:
			case DoubleColon:
			case Tilde:
			case Identifier:
				{
				setState(1770);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1769);
					match(Ellipsis);
					}
				}

				setState(1772);
				identifierExpression();
				setState(1774);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,187,_ctx) ) {
				case 1:
					{
					setState(1773);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case LeftParenthesis:
				{
				setState(1776);
				match(LeftParenthesis);
				setState(1777);
				pointerDeclarator();
				setState(1778);
				match(RightParenthesis);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1795);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,192,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1793);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,191,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerDeclarator);
						setState(1782);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1783);
						match(LeftBracket);
						setState(1785);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1784);
							constantExpression();
							}
						}

						setState(1787);
						match(RightBracket);
						setState(1789);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,190,_ctx) ) {
						case 1:
							{
							setState(1788);
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
						setState(1791);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1792);
						parametersAndQualifiers();
						}
						break;
					}
					} 
				}
				setState(1797);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,192,_ctx);
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
			setState(1798);
			functionParameters();
			setState(1799);
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
		enterRule(_localctx, 262, RULE_functionParameters);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1801);
			match(LeftParenthesis);
			setState(1802);
			parameterDeclarationClause();
			setState(1803);
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
		enterRule(_localctx, 264, RULE_functionQualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1806);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,193,_ctx) ) {
			case 1:
				{
				setState(1805);
				constVolatileQualifierSequence();
				}
				break;
			}
			setState(1809);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,194,_ctx) ) {
			case 1:
				{
				setState(1808);
				referenceQualifier();
				}
				break;
			}
			setState(1812);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,195,_ctx) ) {
			case 1:
				{
				setState(1811);
				noExceptionSpecifier();
				}
				break;
			}
			setState(1815);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,196,_ctx) ) {
			case 1:
				{
				setState(1814);
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
			setState(1817);
			match(Arrow);
			setState(1818);
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
			setState(1843);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Asterisk:
				enterOuterAlt(_localctx, 1);
				{
				setState(1820);
				match(Asterisk);
				setState(1822);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,197,_ctx) ) {
				case 1:
					{
					setState(1821);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1825);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,198,_ctx) ) {
				case 1:
					{
					setState(1824);
					constVolatileQualifierSequence();
					}
					break;
				}
				}
				break;
			case Ampersand:
				enterOuterAlt(_localctx, 2);
				{
				setState(1827);
				match(Ampersand);
				setState(1829);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,199,_ctx) ) {
				case 1:
					{
					setState(1828);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case DoubleAmpersand:
				enterOuterAlt(_localctx, 3);
				{
				setState(1831);
				match(DoubleAmpersand);
				setState(1833);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,200,_ctx) ) {
				case 1:
					{
					setState(1832);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case DoubleColon:
			case Identifier:
				enterOuterAlt(_localctx, 4);
				{
				setState(1835);
				nestedNameSpecifier();
				setState(1836);
				match(Asterisk);
				setState(1838);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,201,_ctx) ) {
				case 1:
					{
					setState(1837);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1841);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,202,_ctx) ) {
				case 1:
					{
					setState(1840);
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
			setState(1845);
			constVolatileQualifier();
			setState(1847);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,204,_ctx) ) {
			case 1:
				{
				setState(1846);
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
			setState(1849);
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
			setState(1851);
			match(Ampersand);
			setState(1852);
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
			setState(1854);
			typeSpecifierSequence();
			setState(1856);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,205,_ctx) ) {
			case 1:
				{
				setState(1855);
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
			setState(1858);
			definingTypeSpecifierSequence();
			setState(1860);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (LeftBracket - 82)) | (1L << (LeftParenthesis - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
				{
				setState(1859);
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
			setState(1870);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,208,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1862);
				pointerAbstractDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1864);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,207,_ctx) ) {
				case 1:
					{
					setState(1863);
					noPointerAbstractDeclarator(0);
					}
					break;
				}
				setState(1866);
				parametersAndQualifiers();
				setState(1867);
				trailingReturnType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1869);
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
			setState(1877);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftBracket:
			case LeftParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1872);
				noPointerAbstractDeclarator(0);
				}
				break;
			case DoubleColon:
			case Asterisk:
			case Ampersand:
			case DoubleAmpersand:
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(1873);
				pointerOperator();
				setState(1875);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,209,_ctx) ) {
				case 1:
					{
					setState(1874);
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
		int _startState = 284;
		enterRecursionRule(_localctx, 284, RULE_noPointerAbstractDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1893);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,213,_ctx) ) {
			case 1:
				{
				setState(1880);
				parametersAndQualifiers();
				}
				break;
			case 2:
				{
				setState(1881);
				match(LeftBracket);
				setState(1883);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1882);
					constantExpression();
					}
				}

				setState(1885);
				match(RightBracket);
				setState(1887);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,212,_ctx) ) {
				case 1:
					{
					setState(1886);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 3:
				{
				setState(1889);
				match(LeftParenthesis);
				setState(1890);
				pointerAbstractDeclarator();
				setState(1891);
				match(RightParenthesis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1908);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,217,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1906);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,216,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1895);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1896);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1897);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1898);
						match(LeftBracket);
						setState(1900);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1899);
							constantExpression();
							}
						}

						setState(1902);
						match(RightBracket);
						setState(1904);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,215,_ctx) ) {
						case 1:
							{
							setState(1903);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1910);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,217,_ctx);
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
			setState(1915);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ellipsis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1911);
				noPointerAbstractPackDeclarator(0);
				}
				break;
			case DoubleColon:
			case Asterisk:
			case Ampersand:
			case DoubleAmpersand:
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(1912);
				pointerOperator();
				setState(1913);
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
		int _startState = 288;
		enterRecursionRule(_localctx, 288, RULE_noPointerAbstractPackDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1918);
			match(Ellipsis);
			}
			_ctx.stop = _input.LT(-1);
			setState(1933);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,222,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1931);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,221,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1920);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1921);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1922);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1923);
						match(LeftBracket);
						setState(1925);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1924);
							constantExpression();
							}
						}

						setState(1927);
						match(RightBracket);
						setState(1929);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,220,_ctx) ) {
						case 1:
							{
							setState(1928);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1935);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,222,_ctx);
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
			setState(1946);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,225,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1937);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << Struct) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (DoubleColon - 67)))) != 0) || _la==Identifier) {
					{
					setState(1936);
					parameterDeclarationList(0);
					}
				}

				setState(1940);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1939);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1942);
				parameterDeclarationList(0);
				setState(1943);
				match(Comma);
				setState(1944);
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
			setState(1949);
			parameterDeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1956);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,226,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ParameterDeclarationListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_parameterDeclarationList);
					setState(1951);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1952);
					match(Comma);
					setState(1953);
					parameterDeclaration();
					}
					} 
				}
				setState(1958);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,226,_ctx);
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
		public AbstractDeclaratorContext abstractDeclarator() {
			return getRuleContext(AbstractDeclaratorContext.class,0);
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
			setState(1990);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,233,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1960);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1959);
					attributeSpecifierSequence(0);
					}
				}

				setState(1962);
				declarationSpecifierSequence();
				setState(1963);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1966);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1965);
					attributeSpecifierSequence(0);
					}
				}

				setState(1968);
				declarationSpecifierSequence();
				setState(1969);
				declarator();
				setState(1970);
				match(Equal);
				setState(1971);
				initializerClause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
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
				setState(1978);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,230,_ctx) ) {
				case 1:
					{
					setState(1977);
					abstractDeclarator();
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1981);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(1980);
					attributeSpecifierSequence(0);
					}
				}

				setState(1983);
				declarationSpecifierSequence();
				setState(1985);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (LeftBracket - 82)) | (1L << (LeftParenthesis - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
					{
					setState(1984);
					abstractDeclarator();
					}
				}

				setState(1987);
				match(Equal);
				setState(1988);
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
			setState(1993);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==LeftBracket) {
				{
				setState(1992);
				attributeSpecifierSequence(0);
				}
			}

			setState(1996);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,235,_ctx) ) {
			case 1:
				{
				setState(1995);
				declarationSpecifierSequence();
				}
				break;
			}
			setState(1998);
			functionDeclarator();
			setState(2000);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Override || _la==Final) {
				{
				setState(1999);
				virtualSpecifierSequence(0);
				}
			}

			setState(2002);
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
			setState(2004);
			identifierExpression();
			setState(2005);
			functionParameters();
			setState(2006);
			functionQualifiers();
			setState(2008);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(2007);
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
			setState(2014);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,238,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2010);
				regularFunctionBody();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2011);
				functionTryBlock();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2012);
				explicitlyDefaultedFunction();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2013);
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
			setState(2017);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2016);
				constructorInitializer();
				}
			}

			setState(2019);
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
			setState(2021);
			match(Equal);
			setState(2022);
			match(Default);
			setState(2023);
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
			setState(2025);
			match(Equal);
			setState(2026);
			match(Delete);
			setState(2027);
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
			setState(2029);
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
			setState(2034);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Equal:
				enterOuterAlt(_localctx, 1);
				{
				setState(2031);
				match(Equal);
				setState(2032);
				initializerClause();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2033);
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
			setState(2038);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AlignOf:
			case Auto:
			case Bool:
			case Char:
			case Char16:
			case Char32:
			case Class:
			case Const:
			case ConstCast:
			case DeclType:
			case Delete:
			case Double:
			case DynamicCast:
			case Enum:
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
			case Struct:
			case This:
			case Throw:
			case True:
			case TypeName:
			case Union:
			case Unsigned:
			case Void:
			case Volatile:
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
				setState(2036);
				assignmentExpression();
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2037);
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
			setState(2041);
			initializerClause();
			setState(2043);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,242,_ctx) ) {
			case 1:
				{
				setState(2042);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2053);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,244,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerList);
					setState(2045);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2046);
					match(Comma);
					setState(2047);
					initializerClause();
					setState(2049);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,243,_ctx) ) {
					case 1:
						{
						setState(2048);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2055);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,244,_ctx);
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
		enterRule(_localctx, 316, RULE_bracedInitializerList);
		int _la;
		try {
			setState(2065);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,246,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2056);
				match(LeftBrace);
				setState(2057);
				initializerList(0);
				setState(2059);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(2058);
					match(Comma);
					}
				}

				setState(2061);
				match(RightBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2063);
				match(LeftBrace);
				setState(2064);
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
		enterRule(_localctx, 318, RULE_expressionOrBracedInitializerList);
		try {
			setState(2069);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case AlignOf:
			case Auto:
			case Bool:
			case Char:
			case Char16:
			case Char32:
			case Class:
			case Const:
			case ConstCast:
			case DeclType:
			case Delete:
			case Double:
			case DynamicCast:
			case Enum:
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
			case Struct:
			case This:
			case Throw:
			case True:
			case TypeName:
			case Union:
			case Unsigned:
			case Void:
			case Volatile:
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
				setState(2067);
				expression(0);
				}
				break;
			case LeftBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2068);
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
		enterRule(_localctx, 320, RULE_classSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2071);
			classHead();
			setState(2072);
			match(LeftBrace);
			setState(2074);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Colon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
				{
				setState(2073);
				memberSpecification();
				}
			}

			setState(2076);
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
		enterRule(_localctx, 322, RULE_classHead);
		int _la;
		try {
			setState(2096);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,254,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2078);
				classKey();
				setState(2080);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2079);
					attributeSpecifierSequence(0);
					}
				}

				setState(2082);
				classHeadName();
				setState(2084);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Final) {
					{
					setState(2083);
					classVirtualSpecifier();
					}
				}

				setState(2087);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2086);
					baseClause();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2089);
				classKey();
				setState(2091);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2090);
					attributeSpecifier();
					}
				}

				setState(2094);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2093);
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
			setState(2099);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,255,_ctx) ) {
			case 1:
				{
				setState(2098);
				nestedNameSpecifier();
				}
				break;
			}
			setState(2101);
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
			setState(2103);
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
			setState(2105);
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
		enterRule(_localctx, 330, RULE_memberSpecification);
		int _la;
		try {
			setState(2116);
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
				setState(2107);
				memberDeclaration();
				setState(2109);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Colon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
					{
					setState(2108);
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
				setState(2111);
				accessSpecifier();
				setState(2112);
				match(Colon);
				setState(2114);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (LeftBracket - 67)) | (1L << (LeftParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Colon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
					{
					setState(2113);
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
		enterRule(_localctx, 332, RULE_memberDeclaration);
		int _la;
		try {
			setState(2135);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,262,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2119);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,259,_ctx) ) {
				case 1:
					{
					setState(2118);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(2122);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,260,_ctx) ) {
				case 1:
					{
					setState(2121);
					declarationSpecifierSequence();
					}
					break;
				}
				setState(2125);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==Operator || ((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (LeftBracket - 82)) | (1L << (LeftParenthesis - 82)) | (1L << (Colon - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (Tilde - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
					{
					setState(2124);
					memberDeclaratorList(0);
					}
				}

				setState(2127);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2128);
				functionDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2129);
				usingDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2130);
				staticAssertDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2131);
				templateDeclaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2132);
				deductionGuide();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2133);
				aliasDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2134);
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
			setState(2138);
			memberDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(2145);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,263,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberDeclaratorList);
					setState(2140);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2141);
					match(Comma);
					setState(2142);
					memberDeclarator();
					}
					} 
				}
				setState(2147);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,263,_ctx);
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
		enterRule(_localctx, 336, RULE_memberDeclarator);
		int _la;
		try {
			setState(2167);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,269,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2148);
				declarator();
				setState(2150);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,264,_ctx) ) {
				case 1:
					{
					setState(2149);
					virtualSpecifierSequence(0);
					}
					break;
				}
				setState(2153);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,265,_ctx) ) {
				case 1:
					{
					setState(2152);
					pureSpecifier();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2155);
				declarator();
				setState(2157);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,266,_ctx) ) {
				case 1:
					{
					setState(2156);
					braceOrEqualInitializer();
					}
					break;
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2160);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2159);
					match(Identifier);
					}
				}

				setState(2163);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2162);
					attributeSpecifierSequence(0);
					}
				}

				setState(2165);
				match(Colon);
				setState(2166);
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
			setState(2170);
			virtualSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(2176);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,270,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new VirtualSpecifierSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_virtualSpecifierSequence);
					setState(2172);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2173);
					virtualSpecifier();
					}
					} 
				}
				setState(2178);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,270,_ctx);
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
			setState(2179);
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
			setState(2181);
			match(Equal);
			setState(2182);
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
			setState(2184);
			match(Colon);
			setState(2185);
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
			setState(2188);
			baseSpecifier();
			setState(2190);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,271,_ctx) ) {
			case 1:
				{
				setState(2189);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2200);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,273,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BaseSpecifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_baseSpecifierList);
					setState(2192);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2193);
					match(Comma);
					setState(2194);
					baseSpecifier();
					setState(2196);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,272,_ctx) ) {
					case 1:
						{
						setState(2195);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2202);
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
			setState(2224);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,279,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2204);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2203);
					attributeSpecifierSequence(0);
					}
				}

				setState(2206);
				classOrDecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2208);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2207);
					attributeSpecifierSequence(0);
					}
				}

				setState(2210);
				match(Virtual);
				setState(2212);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Private) | (1L << Protected) | (1L << Public))) != 0)) {
					{
					setState(2211);
					accessSpecifier();
					}
				}

				setState(2214);
				classOrDecltype();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2216);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2215);
					attributeSpecifierSequence(0);
					}
				}

				setState(2218);
				accessSpecifier();
				setState(2220);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Virtual) {
					{
					setState(2219);
					match(Virtual);
					}
				}

				setState(2222);
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
			setState(2235);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,281,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2227);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,280,_ctx) ) {
				case 1:
					{
					setState(2226);
					nestedNameSpecifier();
					}
					break;
				}
				setState(2229);
				className();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2230);
				nestedNameSpecifier();
				setState(2231);
				match(Template);
				setState(2232);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2234);
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
			setState(2237);
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
			setState(2239);
			match(Operator);
			setState(2240);
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
			setState(2242);
			typeSpecifierSequence();
			setState(2244);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,282,_ctx) ) {
			case 1:
				{
				setState(2243);
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
			setState(2246);
			pointerOperator();
			setState(2248);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,283,_ctx) ) {
			case 1:
				{
				setState(2247);
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
			setState(2250);
			match(Colon);
			setState(2251);
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
			setState(2254);
			memberInitializer();
			setState(2256);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,284,_ctx) ) {
			case 1:
				{
				setState(2255);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2266);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,286,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberInitializerListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberInitializerList);
					setState(2258);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2259);
					match(Comma);
					setState(2260);
					memberInitializer();
					setState(2262);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,285,_ctx) ) {
					case 1:
						{
						setState(2261);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2268);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,286,_ctx);
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
		enterRule(_localctx, 364, RULE_memberInitializer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2269);
			memberInitializerIdentifier();
			setState(2270);
			match(LeftParenthesis);
			setState(2272);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (LeftBrace - 64)) | (1L << (LeftBracket - 64)) | (1L << (LeftParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(2271);
				expressionList();
				}
			}

			setState(2274);
			match(RightParenthesis);
			setState(2275);
			memberInitializerIdentifier();
			setState(2276);
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
		enterRule(_localctx, 366, RULE_memberInitializerIdentifier);
		try {
			setState(2280);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,288,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2278);
				classOrDecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2279);
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
		enterRule(_localctx, 368, RULE_operatorFunctionIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2282);
			match(Operator);
			setState(2283);
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
		enterRule(_localctx, 370, RULE_anyOperator);
		try {
			setState(2333);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,289,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2285);
				match(New);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2286);
				match(Delete);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2287);
				match(New);
				setState(2288);
				match(LeftBrace);
				setState(2289);
				match(RightBracket);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2290);
				match(Delete);
				setState(2291);
				match(LeftBrace);
				setState(2292);
				match(RightBracket);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2293);
				match(Plus);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2294);
				match(Minus);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2295);
				match(Asterisk);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2296);
				match(ForwardSlash);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2297);
				match(Percent);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2298);
				match(Caret);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2299);
				match(Ampersand);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(2300);
				match(VerticalBar);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(2301);
				match(Tilde);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(2302);
				match(ExclamationMark);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(2303);
				match(Equal);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(2304);
				match(LessThan);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(2305);
				match(GreaterThan);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(2306);
				match(PlusEqual);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(2307);
				match(MinusEqual);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(2308);
				match(AsteriskEqual);
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(2309);
				match(ForwardSlashEqual);
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(2310);
				match(PercentEqual);
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(2311);
				match(CaretEqual);
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(2312);
				match(AmpersandEqual);
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(2313);
				match(VerticalBarEqual);
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(2314);
				match(DoubleLessThan);
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(2315);
				match(DoubleGreaterThan);
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(2316);
				match(DoubleGreaterThanEqual);
				}
				break;
			case 29:
				enterOuterAlt(_localctx, 29);
				{
				setState(2317);
				match(DoubleLessThanEqual);
				}
				break;
			case 30:
				enterOuterAlt(_localctx, 30);
				{
				setState(2318);
				match(DoubleEqual);
				}
				break;
			case 31:
				enterOuterAlt(_localctx, 31);
				{
				setState(2319);
				match(ExclamationMarkEqual);
				}
				break;
			case 32:
				enterOuterAlt(_localctx, 32);
				{
				setState(2320);
				match(LessThanEqual);
				}
				break;
			case 33:
				enterOuterAlt(_localctx, 33);
				{
				setState(2321);
				match(GreaterThanEqual);
				}
				break;
			case 34:
				enterOuterAlt(_localctx, 34);
				{
				setState(2322);
				match(DoubleAmpersand);
				}
				break;
			case 35:
				enterOuterAlt(_localctx, 35);
				{
				setState(2323);
				match(DoubleVerticalBar);
				}
				break;
			case 36:
				enterOuterAlt(_localctx, 36);
				{
				setState(2324);
				match(DoublePlus);
				}
				break;
			case 37:
				enterOuterAlt(_localctx, 37);
				{
				setState(2325);
				match(DoubleMinus);
				}
				break;
			case 38:
				enterOuterAlt(_localctx, 38);
				{
				setState(2326);
				match(Comma);
				}
				break;
			case 39:
				enterOuterAlt(_localctx, 39);
				{
				setState(2327);
				match(ArrowAsterisk);
				}
				break;
			case 40:
				enterOuterAlt(_localctx, 40);
				{
				setState(2328);
				match(Arrow);
				}
				break;
			case 41:
				enterOuterAlt(_localctx, 41);
				{
				setState(2329);
				match(LeftParenthesis);
				setState(2330);
				match(RightParenthesis);
				}
				break;
			case 42:
				enterOuterAlt(_localctx, 42);
				{
				setState(2331);
				match(LeftBracket);
				setState(2332);
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
		enterRule(_localctx, 372, RULE_literalOperatorIdentifier);
		try {
			setState(2340);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,290,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2335);
				match(Operator);
				setState(2336);
				match(StringLiteral);
				setState(2337);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2338);
				match(Operator);
				setState(2339);
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
			setState(2342);
			match(Template);
			setState(2343);
			match(LessThan);
			setState(2344);
			templateParameterList(0);
			setState(2345);
			match(GreaterThan);
			setState(2346);
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
			setState(2349);
			templateParameter();
			}
			_ctx.stop = _input.LT(-1);
			setState(2356);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,291,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateParameterListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateParameterList);
					setState(2351);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2352);
					match(Comma);
					setState(2353);
					templateParameter();
					}
					} 
				}
				setState(2358);
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
			setState(2361);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,292,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2359);
				typeParameter();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2360);
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
			setState(2399);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,299,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2363);
				typeParameterKey();
				setState(2365);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,293,_ctx) ) {
				case 1:
					{
					setState(2364);
					match(Ellipsis);
					}
					break;
				}
				setState(2368);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,294,_ctx) ) {
				case 1:
					{
					setState(2367);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2370);
				typeParameterKey();
				setState(2372);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2371);
					match(Identifier);
					}
				}

				setState(2374);
				match(Equal);
				setState(2375);
				typeIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2377);
				match(Template);
				setState(2378);
				match(LessThan);
				setState(2379);
				templateParameterList(0);
				setState(2380);
				match(GreaterThan);
				setState(2381);
				typeParameterKey();
				setState(2383);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,296,_ctx) ) {
				case 1:
					{
					setState(2382);
					match(Ellipsis);
					}
					break;
				}
				setState(2386);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,297,_ctx) ) {
				case 1:
					{
					setState(2385);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2388);
				match(Template);
				setState(2389);
				match(LessThan);
				setState(2390);
				templateParameterList(0);
				setState(2391);
				match(GreaterThan);
				setState(2392);
				typeParameterKey();
				setState(2394);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2393);
					match(Identifier);
					}
				}

				setState(2396);
				match(Equal);
				setState(2397);
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
			setState(2401);
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
			setState(2403);
			templateName();
			setState(2404);
			match(LessThan);
			setState(2406);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(2405);
				templateArgumentList(0);
				}
			}

			setState(2408);
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
			setState(2425);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,303,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2410);
				simpleTemplateIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2411);
				operatorFunctionIdentifier();
				setState(2412);
				match(LessThan);
				setState(2414);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(2413);
					templateArgumentList(0);
					}
				}

				setState(2416);
				match(GreaterThan);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2418);
				literalOperatorIdentifier();
				setState(2419);
				match(LessThan);
				setState(2421);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << Struct) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (LeftBracket - 65)) | (1L << (LeftParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(2420);
					templateArgumentList(0);
					}
				}

				setState(2423);
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
			setState(2428);
			templateArgument();
			setState(2430);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,304,_ctx) ) {
			case 1:
				{
				setState(2429);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2440);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,306,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new TemplateArgumentListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_templateArgumentList);
					setState(2432);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2433);
					match(Comma);
					setState(2434);
					templateArgument();
					setState(2436);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,305,_ctx) ) {
					case 1:
						{
						setState(2435);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2442);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,306,_ctx);
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
		enterRule(_localctx, 390, RULE_templateArgument);
		try {
			setState(2446);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,307,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2443);
				constantExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2444);
				typeIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2445);
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
		enterRule(_localctx, 392, RULE_typenameSpecifier);
		int _la;
		try {
			setState(2459);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,309,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2448);
				match(TypeName);
				setState(2449);
				nestedNameSpecifier();
				setState(2450);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2452);
				match(TypeName);
				setState(2453);
				nestedNameSpecifier();
				setState(2455);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(2454);
					match(Template);
					}
				}

				setState(2457);
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
			setState(2462);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Extern) {
				{
				setState(2461);
				match(Extern);
				}
			}

			setState(2464);
			match(Template);
			setState(2465);
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
			setState(2467);
			match(Template);
			setState(2468);
			match(LessThan);
			setState(2469);
			match(GreaterThan);
			setState(2470);
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
		enterRule(_localctx, 398, RULE_deductionGuide);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2473);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Explicit) {
				{
				setState(2472);
				match(Explicit);
				}
			}

			setState(2475);
			templateName();
			setState(2476);
			match(LeftParenthesis);
			setState(2477);
			parameterDeclarationClause();
			setState(2478);
			match(RightParenthesis);
			setState(2479);
			match(Arrow);
			setState(2480);
			simpleTemplateIdentifier();
			setState(2481);
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
			setState(2483);
			match(Try);
			setState(2484);
			compoundStatement();
			setState(2485);
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
			setState(2487);
			match(Try);
			setState(2489);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2488);
				constructorInitializer();
				}
			}

			setState(2491);
			compoundStatement();
			setState(2492);
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
			setState(2494);
			handler();
			setState(2496);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,313,_ctx) ) {
			case 1:
				{
				setState(2495);
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
		enterRule(_localctx, 406, RULE_handler);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2498);
			match(Catch);
			setState(2499);
			match(LeftParenthesis);
			setState(2500);
			exceptionDeclaration();
			setState(2501);
			match(RightParenthesis);
			setState(2502);
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
			setState(2518);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,317,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2505);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2504);
					attributeSpecifierSequence(0);
					}
				}

				setState(2507);
				typeSpecifierSequence();
				setState(2508);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2511);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==LeftBracket) {
					{
					setState(2510);
					attributeSpecifierSequence(0);
					}
				}

				setState(2513);
				typeSpecifierSequence();
				setState(2515);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (LeftBracket - 82)) | (1L << (LeftParenthesis - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
					{
					setState(2514);
					abstractDeclarator();
					}
				}

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2517);
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
		enterRule(_localctx, 410, RULE_noExceptionSpecifier);
		try {
			setState(2529);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,318,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2520);
				match(NoExcept);
				setState(2521);
				match(LeftParenthesis);
				setState(2522);
				constantExpression();
				setState(2523);
				match(RightParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2525);
				match(NoExcept);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2526);
				match(Throw);
				setState(2527);
				match(LeftParenthesis);
				setState(2528);
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
		int _startState = 412;
		enterRecursionRule(_localctx, 412, RULE_identifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2532);
			match(Identifier);
			}
			_ctx.stop = _input.LT(-1);
			setState(2539);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,319,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new IdentifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_identifierList);
					setState(2534);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2535);
					match(Comma);
					setState(2536);
					match(Identifier);
					}
					} 
				}
				setState(2541);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,319,_ctx);
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
			setState(2549);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Zero:
			case IntegerLiteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(2542);
				integerLiteral();
				}
				break;
			case FloatingPointLiteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(2543);
				match(FloatingPointLiteral);
				}
				break;
			case CharacterLiteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(2544);
				match(CharacterLiteral);
				}
				break;
			case StringLiteral:
				enterOuterAlt(_localctx, 4);
				{
				setState(2545);
				match(StringLiteral);
				}
				break;
			case False:
			case True:
				enterOuterAlt(_localctx, 5);
				{
				setState(2546);
				booleanLiteral();
				}
				break;
			case Nullptr:
				enterOuterAlt(_localctx, 6);
				{
				setState(2547);
				pointerLiteral();
				}
				break;
			case UserDefinedIntegerLiteral:
			case UserDefinedFloatingPointLiteral:
			case UserDefinedCharacterLiteral:
			case UserDefinedStringLiteral:
				enterOuterAlt(_localctx, 7);
				{
				setState(2548);
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
			setState(2551);
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
			setState(2553);
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
			setState(2555);
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
			setState(2557);
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
		case 12:
			return nestedNameSpecifierList_sempred((NestedNameSpecifierListContext)_localctx, predIndex);
		case 18:
			return captureList_sempred((CaptureListContext)_localctx, predIndex);
		case 24:
			return postfixExpression_sempred((PostfixExpressionContext)_localctx, predIndex);
		case 33:
			return noPointerNewDeclarator_sempred((NoPointerNewDeclaratorContext)_localctx, predIndex);
		case 38:
			return pointerManipulationExpression_sempred((PointerManipulationExpressionContext)_localctx, predIndex);
		case 39:
			return multiplicativeExpression_sempred((MultiplicativeExpressionContext)_localctx, predIndex);
		case 40:
			return additiveExpression_sempred((AdditiveExpressionContext)_localctx, predIndex);
		case 41:
			return shiftExpression_sempred((ShiftExpressionContext)_localctx, predIndex);
		case 42:
			return relationalExpression_sempred((RelationalExpressionContext)_localctx, predIndex);
		case 43:
			return equalityExpression_sempred((EqualityExpressionContext)_localctx, predIndex);
		case 44:
			return andExpression_sempred((AndExpressionContext)_localctx, predIndex);
		case 45:
			return exclusiveOrExpression_sempred((ExclusiveOrExpressionContext)_localctx, predIndex);
		case 46:
			return inclusiveOrExpression_sempred((InclusiveOrExpressionContext)_localctx, predIndex);
		case 47:
			return logicalAndExpression_sempred((LogicalAndExpressionContext)_localctx, predIndex);
		case 48:
			return logicalOrExpression_sempred((LogicalOrExpressionContext)_localctx, predIndex);
		case 53:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		case 61:
			return statementSequence_sempred((StatementSequenceContext)_localctx, predIndex);
		case 69:
			return declarationSequence_sempred((DeclarationSequenceContext)_localctx, predIndex);
		case 96:
			return enumeratorList_sempred((EnumeratorListContext)_localctx, predIndex);
		case 108:
			return usingDeclaratorList_sempred((UsingDeclaratorListContext)_localctx, predIndex);
		case 113:
			return attributeSpecifierSequence_sempred((AttributeSpecifierSequenceContext)_localctx, predIndex);
		case 117:
			return attributeList_sempred((AttributeListContext)_localctx, predIndex);
		case 123:
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
	private boolean nestedNameSpecifierList_sempred(NestedNameSpecifierListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean captureList_sempred(CaptureListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean postfixExpression_sempred(PostfixExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return precpred(_ctx, 18);
		case 3:
			return precpred(_ctx, 17);
		case 4:
			return precpred(_ctx, 12);
		case 5:
			return precpred(_ctx, 11);
		case 6:
			return precpred(_ctx, 10);
		case 7:
			return precpred(_ctx, 9);
		case 8:
			return precpred(_ctx, 8);
		case 9:
			return precpred(_ctx, 7);
		}
		return true;
	}
	private boolean noPointerNewDeclarator_sempred(NoPointerNewDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 10:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean pointerManipulationExpression_sempred(PointerManipulationExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 11:
			return precpred(_ctx, 2);
		case 12:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean multiplicativeExpression_sempred(MultiplicativeExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 13:
			return precpred(_ctx, 3);
		case 14:
			return precpred(_ctx, 2);
		case 15:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean additiveExpression_sempred(AdditiveExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 16:
			return precpred(_ctx, 2);
		case 17:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean shiftExpression_sempred(ShiftExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 18:
			return precpred(_ctx, 2);
		case 19:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean relationalExpression_sempred(RelationalExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 20:
			return precpred(_ctx, 4);
		case 21:
			return precpred(_ctx, 3);
		case 22:
			return precpred(_ctx, 2);
		case 23:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean equalityExpression_sempred(EqualityExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 24:
			return precpred(_ctx, 2);
		case 25:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean andExpression_sempred(AndExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 26:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean exclusiveOrExpression_sempred(ExclusiveOrExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 27:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean inclusiveOrExpression_sempred(InclusiveOrExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 28:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean logicalAndExpression_sempred(LogicalAndExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 29:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean logicalOrExpression_sempred(LogicalOrExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 30:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 31:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean statementSequence_sempred(StatementSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 32:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean declarationSequence_sempred(DeclarationSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 33:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean enumeratorList_sempred(EnumeratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 34:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean usingDeclaratorList_sempred(UsingDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 35:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean attributeSpecifierSequence_sempred(AttributeSpecifierSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 36:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean attributeList_sempred(AttributeListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 37:
			return precpred(_ctx, 3);
		case 38:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean balancedTokenSequence_sempred(BalancedTokenSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 39:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initializerDeclaratorList_sempred(InitializerDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 40:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean noPointerDeclarator_sempred(NoPointerDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 41:
			return precpred(_ctx, 3);
		case 42:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean noPointerAbstractDeclarator_sempred(NoPointerAbstractDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 43:
			return precpred(_ctx, 4);
		case 44:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean noPointerAbstractPackDeclarator_sempred(NoPointerAbstractPackDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 45:
			return precpred(_ctx, 3);
		case 46:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean parameterDeclarationList_sempred(ParameterDeclarationListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 47:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initializerList_sempred(InitializerListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 48:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean memberDeclaratorList_sempred(MemberDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 49:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean virtualSpecifierSequence_sempred(VirtualSpecifierSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 50:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean baseSpecifierList_sempred(BaseSpecifierListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 51:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean memberInitializerList_sempred(MemberInitializerListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 52:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean templateParameterList_sempred(TemplateParameterListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 53:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean templateArgumentList_sempred(TemplateArgumentListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 54:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean identifierList_sempred(IdentifierListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 55:
			return precpred(_ctx, 1);
		}
		return true;
	}

	private static final int _serializedATNSegments = 2;
	private static final String _serializedATNSegment0 =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u008c\u0a02\4\2\t"+
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
		"\2\3\3\3\3\5\3\u01af\n\3\3\4\3\4\3\5\3\5\5\5\u01b5\n\5\3\6\3\6\3\7\3\7"+
		"\3\b\5\b\u01bc\n\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u01c9"+
		"\n\t\3\n\3\n\5\n\u01cd\n\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13"+
		"\5\13\u01d8\n\13\3\f\3\f\5\f\u01dc\n\f\3\f\3\f\3\r\5\r\u01e1\n\r\3\r\3"+
		"\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\7\16\u01ec\n\16\f\16\16\16\u01ef"+
		"\13\16\3\17\3\17\5\17\u01f3\n\17\3\17\3\17\3\20\3\20\5\20\u01f9\n\20\3"+
		"\20\3\20\3\21\3\21\3\21\3\21\5\21\u0201\n\21\3\21\5\21\u0204\n\21\3\21"+
		"\5\21\u0207\n\21\3\21\5\21\u020a\n\21\3\22\3\22\3\22\3\22\3\22\3\22\5"+
		"\22\u0212\n\22\3\23\3\23\3\24\3\24\3\24\5\24\u0219\n\24\3\24\3\24\3\24"+
		"\3\24\5\24\u021f\n\24\7\24\u0221\n\24\f\24\16\24\u0224\13\24\3\25\3\25"+
		"\3\25\3\26\5\26\u022a\n\26\3\26\3\26\3\26\3\26\5\26\u0230\n\26\3\27\5"+
		"\27\u0233\n\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30"+
		"\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\5\30\u024c"+
		"\n\30\3\31\3\31\3\32\3\32\3\32\3\32\3\32\5\32\u0255\n\32\3\32\3\32\3\32"+
		"\3\32\3\32\5\32\u025c\n\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\5\32\u028c\n\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\5\32\u0296\n\32\3\32\3\32\3\32\3\32\5\32"+
		"\u029c\n\32\3\32\3\32\3\32\3\32\5\32\u02a2\n\32\3\32\3\32\3\32\3\32\3"+
		"\32\3\32\3\32\3\32\3\32\3\32\3\32\7\32\u02af\n\32\f\32\16\32\u02b2\13"+
		"\32\3\33\3\33\3\34\5\34\u02b7\n\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34"+
		"\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\34\5\34\u02c9\n\34\3\35\3\35"+
		"\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35"+
		"\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\5\35\u02e7"+
		"\n\35\3\36\3\36\3\37\5\37\u02ec\n\37\3\37\3\37\5\37\u02f0\n\37\3\37\3"+
		"\37\5\37\u02f4\n\37\3\37\5\37\u02f7\n\37\3\37\3\37\5\37\u02fb\n\37\3\37"+
		"\3\37\3\37\3\37\5\37\u0301\n\37\5\37\u0303\n\37\3 \3 \3 \3 \3!\3!\5!\u030b"+
		"\n!\3\"\3\"\5\"\u030f\n\"\3\"\3\"\3#\3#\3#\3#\3#\5#\u0318\n#\3#\3#\3#"+
		"\3#\3#\5#\u031f\n#\7#\u0321\n#\f#\16#\u0324\13#\3$\3$\5$\u0328\n$\3$\3"+
		"$\5$\u032c\n$\3%\5%\u032f\n%\3%\3%\3%\5%\u0334\n%\3%\3%\3%\3%\5%\u033a"+
		"\n%\3&\3&\3&\3&\3&\3\'\3\'\3\'\3\'\3\'\3\'\5\'\u0347\n\'\3(\3(\3(\3(\3"+
		"(\3(\3(\3(\3(\7(\u0352\n(\f(\16(\u0355\13(\3)\3)\3)\3)\3)\3)\3)\3)\3)"+
		"\3)\3)\3)\7)\u0363\n)\f)\16)\u0366\13)\3*\3*\3*\3*\3*\3*\3*\3*\3*\7*\u0371"+
		"\n*\f*\16*\u0374\13*\3+\3+\3+\3+\3+\3+\3+\3+\3+\7+\u037f\n+\f+\16+\u0382"+
		"\13+\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\3,\7,\u0393\n,\f,\16,\u0396"+
		"\13,\3-\3-\3-\3-\3-\3-\3-\3-\3-\7-\u03a1\n-\f-\16-\u03a4\13-\3.\3.\3."+
		"\3.\3.\3.\7.\u03ac\n.\f.\16.\u03af\13.\3/\3/\3/\3/\3/\3/\7/\u03b7\n/\f"+
		"/\16/\u03ba\13/\3\60\3\60\3\60\3\60\3\60\3\60\7\60\u03c2\n\60\f\60\16"+
		"\60\u03c5\13\60\3\61\3\61\3\61\3\61\3\61\3\61\7\61\u03cd\n\61\f\61\16"+
		"\61\u03d0\13\61\3\62\3\62\3\62\3\62\3\62\3\62\7\62\u03d8\n\62\f\62\16"+
		"\62\u03db\13\62\3\63\3\63\3\63\3\63\3\63\3\63\3\63\5\63\u03e4\n\63\3\64"+
		"\3\64\5\64\u03e8\n\64\3\65\3\65\3\65\3\65\3\65\3\65\5\65\u03f0\n\65\3"+
		"\66\3\66\3\67\3\67\3\67\3\67\3\67\3\67\7\67\u03fa\n\67\f\67\16\67\u03fd"+
		"\13\67\38\38\39\39\59\u0403\n9\39\39\59\u0407\n9\39\39\59\u040b\n9\39"+
		"\39\59\u040f\n9\39\39\59\u0413\n9\39\39\39\59\u0418\n9\39\59\u041b\n9"+
		"\3:\3:\5:\u041f\n:\3;\3;\5;\u0423\n;\3;\3;\3;\3;\5;\u0429\n;\3<\5<\u042c"+
		"\n<\3<\3<\3<\3<\5<\u0432\n<\3<\3<\3<\3<\3<\3<\5<\u043a\n<\3<\3<\3<\5<"+
		"\u043f\n<\3=\5=\u0442\n=\3=\3=\3>\3>\5>\u0448\n>\3>\3>\3?\3?\3?\3?\3?"+
		"\7?\u0451\n?\f?\16?\u0454\13?\3@\3@\5@\u0458\n@\3@\3@\5@\u045c\n@\3@\3"+
		"@\3@\3@\3@\3@\5@\u0464\n@\3@\3@\5@\u0468\n@\3@\3@\3@\3@\3@\3@\3@\3@\3"+
		"@\5@\u0473\n@\3@\3@\3@\3@\5@\u0479\n@\3A\3A\3A\3A\3A\3A\3A\3A\3A\3A\3"+
		"A\3A\3A\3A\3A\3A\3A\3A\5A\u048d\nA\3A\3A\5A\u0491\nA\3A\3A\3A\3A\3A\3"+
		"A\3A\3A\3A\3A\3A\5A\u049e\nA\3B\5B\u04a1\nB\3B\3B\3B\3B\5B\u04a7\nB\3"+
		"B\3B\5B\u04ab\nB\3B\3B\3B\3B\5B\u04b1\nB\3C\5C\u04b4\nC\3C\3C\3C\3D\3"+
		"D\3E\3E\3E\3E\3E\3E\5E\u04c1\nE\3E\3E\3E\3E\5E\u04c7\nE\3F\3F\3G\3G\3"+
		"G\3G\3G\7G\u04d0\nG\fG\16G\u04d3\13G\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H\3H"+
		"\5H\u04e0\nH\3I\3I\3I\3I\3I\3I\3I\3I\5I\u04ea\nI\3J\5J\u04ed\nJ\3J\3J"+
		"\3J\3K\3K\3K\5K\u04f5\nK\3K\3K\3K\3K\3L\3L\5L\u04fd\nL\3L\3L\3L\3L\3L"+
		"\3L\3L\3L\5L\u0507\nL\3L\3L\5L\u050b\nL\3L\3L\3L\3L\3L\3L\5L\u0513\nL"+
		"\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\5M\u0523\nM\3N\3N\3O\3O\3O"+
		"\3P\3P\3P\3P\3P\3P\3P\5P\u0531\nP\3Q\3Q\5Q\u0535\nQ\3Q\3Q\3Q\5Q\u053a"+
		"\nQ\3R\3R\3S\3S\3T\3T\3T\3T\5T\u0544\nT\3U\3U\5U\u0548\nU\3U\3U\3U\5U"+
		"\u054d\nU\3V\3V\3V\5V\u0552\nV\3W\3W\5W\u0556\nW\3W\3W\3W\5W\u055b\nW"+
		"\3X\5X\u055e\nX\3X\3X\3X\3X\3X\3X\5X\u0566\nX\3X\3X\3X\3X\3X\3X\3X\3X"+
		"\3X\3X\3X\3X\3X\3X\3X\3X\5X\u0578\nX\3Y\3Y\3Y\3Y\5Y\u057e\nY\3Z\3Z\3Z"+
		"\3Z\3Z\3Z\3Z\3Z\3Z\5Z\u0589\nZ\3[\3[\5[\u058d\n[\3[\5[\u0590\n[\3[\3["+
		"\3[\3[\3[\3[\3[\3[\5[\u059a\n[\3[\3[\3[\3[\5[\u05a0\n[\3[\5[\u05a3\n["+
		"\3\\\3\\\3\\\5\\\u05a8\n\\\3\\\3\\\3\\\3\\\3\\\3\\\3\\\3\\\5\\\u05b2\n"+
		"\\\3]\3]\5]\u05b6\n]\3]\5]\u05b9\n]\3]\5]\u05bc\n]\3^\5^\u05bf\n^\3^\3"+
		"^\3_\3_\5_\u05c5\n_\3_\5_\u05c8\n_\3_\3_\5_\u05cc\n_\3_\3_\3`\3`\3`\3"+
		"`\3`\5`\u05d5\n`\3a\3a\3a\3b\3b\3b\3b\3b\3b\7b\u05e0\nb\fb\16b\u05e3\13"+
		"b\3c\3c\3c\3c\3c\5c\u05ea\nc\3d\3d\5d\u05ee\nd\3e\3e\3e\5e\u05f3\ne\3"+
		"f\5f\u05f6\nf\3f\3f\5f\u05fa\nf\3f\3f\3f\3f\3f\3g\5g\u0602\ng\3g\3g\5"+
		"g\u0606\ng\3g\3g\3g\3g\3h\3h\3h\3h\3h\3h\3h\3h\3i\3i\3i\3i\3i\3j\5j\u061a"+
		"\nj\3k\3k\3k\3k\3k\3k\3l\5l\u0623\nl\3l\3l\3m\3m\3m\3m\3n\3n\3n\5n\u062e"+
		"\nn\3n\3n\3n\3n\5n\u0634\nn\7n\u0636\nn\fn\16n\u0639\13n\3o\5o\u063c\n"+
		"o\3o\3o\3o\3p\5p\u0642\np\3p\3p\3p\5p\u0647\np\3p\3p\3p\3q\5q\u064d\n"+
		"q\3q\3q\3q\3q\3q\3q\3r\3r\3r\3r\5r\u0659\nr\3r\3r\3r\3r\5r\u065f\nr\3"+
		"s\3s\3s\3s\3s\7s\u0666\ns\fs\16s\u0669\13s\3t\3t\3t\5t\u066e\nt\3t\3t"+
		"\3t\3t\3t\5t\u0675\nt\3u\3u\3u\3u\5u\u067b\nu\3u\3u\3u\3u\3u\3u\5u\u0683"+
		"\nu\3u\3u\5u\u0687\nu\3v\3v\3v\3v\3w\3w\5w\u068f\nw\3w\3w\3w\5w\u0694"+
		"\nw\3w\3w\3w\5w\u0699\nw\3w\3w\3w\3w\3w\7w\u06a0\nw\fw\16w\u06a3\13w\3"+
		"x\3x\5x\u06a7\nx\3y\3y\5y\u06ab\ny\3z\3z\3z\3z\3{\3{\3|\3|\5|\u06b5\n"+
		"|\3|\3|\3}\3}\3}\3}\3}\7}\u06be\n}\f}\16}\u06c1\13}\3~\3~\5~\u06c5\n~"+
		"\3~\3~\3~\5~\u06ca\n~\3~\3~\3~\5~\u06cf\n~\3~\3~\5~\u06d3\n~\3\177\3\177"+
		"\3\177\3\177\3\177\3\177\7\177\u06db\n\177\f\177\16\177\u06de\13\177\3"+
		"\u0080\3\u0080\5\u0080\u06e2\n\u0080\3\u0081\3\u0081\5\u0081\u06e6\n\u0081"+
		"\3\u0082\3\u0082\3\u0082\3\u0083\3\u0083\5\u0083\u06ed\n\u0083\3\u0083"+
		"\3\u0083\5\u0083\u06f1\n\u0083\3\u0083\3\u0083\3\u0083\3\u0083\5\u0083"+
		"\u06f7\n\u0083\3\u0083\3\u0083\3\u0083\5\u0083\u06fc\n\u0083\3\u0083\3"+
		"\u0083\5\u0083\u0700\n\u0083\3\u0083\3\u0083\7\u0083\u0704\n\u0083\f\u0083"+
		"\16\u0083\u0707\13\u0083\3\u0084\3\u0084\3\u0084\3\u0085\3\u0085\3\u0085"+
		"\3\u0085\3\u0086\5\u0086\u0711\n\u0086\3\u0086\5\u0086\u0714\n\u0086\3"+
		"\u0086\5\u0086\u0717\n\u0086\3\u0086\5\u0086\u071a\n\u0086\3\u0087\3\u0087"+
		"\3\u0087\3\u0088\3\u0088\5\u0088\u0721\n\u0088\3\u0088\5\u0088\u0724\n"+
		"\u0088\3\u0088\3\u0088\5\u0088\u0728\n\u0088\3\u0088\3\u0088\5\u0088\u072c"+
		"\n\u0088\3\u0088\3\u0088\3\u0088\5\u0088\u0731\n\u0088\3\u0088\5\u0088"+
		"\u0734\n\u0088\5\u0088\u0736\n\u0088\3\u0089\3\u0089\5\u0089\u073a\n\u0089"+
		"\3\u008a\3\u008a\3\u008b\3\u008b\3\u008b\3\u008c\3\u008c\5\u008c\u0743"+
		"\n\u008c\3\u008d\3\u008d\5\u008d\u0747\n\u008d\3\u008e\3\u008e\5\u008e"+
		"\u074b\n\u008e\3\u008e\3\u008e\3\u008e\3\u008e\5\u008e\u0751\n\u008e\3"+
		"\u008f\3\u008f\3\u008f\5\u008f\u0756\n\u008f\5\u008f\u0758\n\u008f\3\u0090"+
		"\3\u0090\3\u0090\3\u0090\5\u0090\u075e\n\u0090\3\u0090\3\u0090\5\u0090"+
		"\u0762\n\u0090\3\u0090\3\u0090\3\u0090\3\u0090\5\u0090\u0768\n\u0090\3"+
		"\u0090\3\u0090\3\u0090\3\u0090\3\u0090\5\u0090\u076f\n\u0090\3\u0090\3"+
		"\u0090\5\u0090\u0773\n\u0090\7\u0090\u0775\n\u0090\f\u0090\16\u0090\u0778"+
		"\13\u0090\3\u0091\3\u0091\3\u0091\3\u0091\5\u0091\u077e\n\u0091\3\u0092"+
		"\3\u0092\3\u0092\3\u0092\3\u0092\3\u0092\3\u0092\3\u0092\5\u0092\u0788"+
		"\n\u0092\3\u0092\3\u0092\5\u0092\u078c\n\u0092\7\u0092\u078e\n\u0092\f"+
		"\u0092\16\u0092\u0791\13\u0092\3\u0093\5\u0093\u0794\n\u0093\3\u0093\5"+
		"\u0093\u0797\n\u0093\3\u0093\3\u0093\3\u0093\3\u0093\5\u0093\u079d\n\u0093"+
		"\3\u0094\3\u0094\3\u0094\3\u0094\3\u0094\3\u0094\7\u0094\u07a5\n\u0094"+
		"\f\u0094\16\u0094\u07a8\13\u0094\3\u0095\5\u0095\u07ab\n\u0095\3\u0095"+
		"\3\u0095\3\u0095\3\u0095\5\u0095\u07b1\n\u0095\3\u0095\3\u0095\3\u0095"+
		"\3\u0095\3\u0095\3\u0095\5\u0095\u07b9\n\u0095\3\u0095\3\u0095\5\u0095"+
		"\u07bd\n\u0095\3\u0095\5\u0095\u07c0\n\u0095\3\u0095\3\u0095\5\u0095\u07c4"+
		"\n\u0095\3\u0095\3\u0095\3\u0095\5\u0095\u07c9\n\u0095\3\u0096\5\u0096"+
		"\u07cc\n\u0096\3\u0096\5\u0096\u07cf\n\u0096\3\u0096\3\u0096\5\u0096\u07d3"+
		"\n\u0096\3\u0096\3\u0096\3\u0097\3\u0097\3\u0097\3\u0097\5\u0097\u07db"+
		"\n\u0097\3\u0098\3\u0098\3\u0098\3\u0098\5\u0098\u07e1\n\u0098\3\u0099"+
		"\5\u0099\u07e4\n\u0099\3\u0099\3\u0099\3\u009a\3\u009a\3\u009a\3\u009a"+
		"\3\u009b\3\u009b\3\u009b\3\u009b\3\u009c\3\u009c\3\u009d\3\u009d\3\u009d"+
		"\5\u009d\u07f5\n\u009d\3\u009e\3\u009e\5\u009e\u07f9\n\u009e\3\u009f\3"+
		"\u009f\3\u009f\5\u009f\u07fe\n\u009f\3\u009f\3\u009f\3\u009f\3\u009f\5"+
		"\u009f\u0804\n\u009f\7\u009f\u0806\n\u009f\f\u009f\16\u009f\u0809\13\u009f"+
		"\3\u00a0\3\u00a0\3\u00a0\5\u00a0\u080e\n\u00a0\3\u00a0\3\u00a0\3\u00a0"+
		"\3\u00a0\5\u00a0\u0814\n\u00a0\3\u00a1\3\u00a1\5\u00a1\u0818\n\u00a1\3"+
		"\u00a2\3\u00a2\3\u00a2\5\u00a2\u081d\n\u00a2\3\u00a2\3\u00a2\3\u00a3\3"+
		"\u00a3\5\u00a3\u0823\n\u00a3\3\u00a3\3\u00a3\5\u00a3\u0827\n\u00a3\3\u00a3"+
		"\5\u00a3\u082a\n\u00a3\3\u00a3\3\u00a3\5\u00a3\u082e\n\u00a3\3\u00a3\5"+
		"\u00a3\u0831\n\u00a3\5\u00a3\u0833\n\u00a3\3\u00a4\5\u00a4\u0836\n\u00a4"+
		"\3\u00a4\3\u00a4\3\u00a5\3\u00a5\3\u00a6\3\u00a6\3\u00a7\3\u00a7\5\u00a7"+
		"\u0840\n\u00a7\3\u00a7\3\u00a7\3\u00a7\5\u00a7\u0845\n\u00a7\5\u00a7\u0847"+
		"\n\u00a7\3\u00a8\5\u00a8\u084a\n\u00a8\3\u00a8\5\u00a8\u084d\n\u00a8\3"+
		"\u00a8\5\u00a8\u0850\n\u00a8\3\u00a8\3\u00a8\3\u00a8\3\u00a8\3\u00a8\3"+
		"\u00a8\3\u00a8\3\u00a8\5\u00a8\u085a\n\u00a8\3\u00a9\3\u00a9\3\u00a9\3"+
		"\u00a9\3\u00a9\3\u00a9\7\u00a9\u0862\n\u00a9\f\u00a9\16\u00a9\u0865\13"+
		"\u00a9\3\u00aa\3\u00aa\5\u00aa\u0869\n\u00aa\3\u00aa\5\u00aa\u086c\n\u00aa"+
		"\3\u00aa\3\u00aa\5\u00aa\u0870\n\u00aa\3\u00aa\5\u00aa\u0873\n\u00aa\3"+
		"\u00aa\5\u00aa\u0876\n\u00aa\3\u00aa\3\u00aa\5\u00aa\u087a\n\u00aa\3\u00ab"+
		"\3\u00ab\3\u00ab\3\u00ab\3\u00ab\7\u00ab\u0881\n\u00ab\f\u00ab\16\u00ab"+
		"\u0884\13\u00ab\3\u00ac\3\u00ac\3\u00ad\3\u00ad\3\u00ad\3\u00ae\3\u00ae"+
		"\3\u00ae\3\u00af\3\u00af\3\u00af\5\u00af\u0891\n\u00af\3\u00af\3\u00af"+
		"\3\u00af\3\u00af\5\u00af\u0897\n\u00af\7\u00af\u0899\n\u00af\f\u00af\16"+
		"\u00af\u089c\13\u00af\3\u00b0\5\u00b0\u089f\n\u00b0\3\u00b0\3\u00b0\5"+
		"\u00b0\u08a3\n\u00b0\3\u00b0\3\u00b0\5\u00b0\u08a7\n\u00b0\3\u00b0\3\u00b0"+
		"\5\u00b0\u08ab\n\u00b0\3\u00b0\3\u00b0\5\u00b0\u08af\n\u00b0\3\u00b0\3"+
		"\u00b0\5\u00b0\u08b3\n\u00b0\3\u00b1\5\u00b1\u08b6\n\u00b1\3\u00b1\3\u00b1"+
		"\3\u00b1\3\u00b1\3\u00b1\3\u00b1\5\u00b1\u08be\n\u00b1\3\u00b2\3\u00b2"+
		"\3\u00b3\3\u00b3\3\u00b3\3\u00b4\3\u00b4\5\u00b4\u08c7\n\u00b4\3\u00b5"+
		"\3\u00b5\5\u00b5\u08cb\n\u00b5\3\u00b6\3\u00b6\3\u00b6\3\u00b7\3\u00b7"+
		"\3\u00b7\5\u00b7\u08d3\n\u00b7\3\u00b7\3\u00b7\3\u00b7\3\u00b7\5\u00b7"+
		"\u08d9\n\u00b7\7\u00b7\u08db\n\u00b7\f\u00b7\16\u00b7\u08de\13\u00b7\3"+
		"\u00b8\3\u00b8\3\u00b8\5\u00b8\u08e3\n\u00b8\3\u00b8\3\u00b8\3\u00b8\3"+
		"\u00b8\3\u00b9\3\u00b9\5\u00b9\u08eb\n\u00b9\3\u00ba\3\u00ba\3\u00ba\3"+
		"\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb\3\u00bb"+
		"\3\u00bb\3\u00bb\3\u00bb\5\u00bb\u0920\n\u00bb\3\u00bc\3\u00bc\3\u00bc"+
		"\3\u00bc\3\u00bc\5\u00bc\u0927\n\u00bc\3\u00bd\3\u00bd\3\u00bd\3\u00bd"+
		"\3\u00bd\3\u00bd\3\u00be\3\u00be\3\u00be\3\u00be\3\u00be\3\u00be\7\u00be"+
		"\u0935\n\u00be\f\u00be\16\u00be\u0938\13\u00be\3\u00bf\3\u00bf\5\u00bf"+
		"\u093c\n\u00bf\3\u00c0\3\u00c0\5\u00c0\u0940\n\u00c0\3\u00c0\5\u00c0\u0943"+
		"\n\u00c0\3\u00c0\3\u00c0\5\u00c0\u0947\n\u00c0\3\u00c0\3\u00c0\3\u00c0"+
		"\3\u00c0\3\u00c0\3\u00c0\3\u00c0\3\u00c0\3\u00c0\5\u00c0\u0952\n\u00c0"+
		"\3\u00c0\5\u00c0\u0955\n\u00c0\3\u00c0\3\u00c0\3\u00c0\3\u00c0\3\u00c0"+
		"\3\u00c0\5\u00c0\u095d\n\u00c0\3\u00c0\3\u00c0\3\u00c0\5\u00c0\u0962\n"+
		"\u00c0\3\u00c1\3\u00c1\3\u00c2\3\u00c2\3\u00c2\5\u00c2\u0969\n\u00c2\3"+
		"\u00c2\3\u00c2\3\u00c3\3\u00c3\3\u00c3\3\u00c3\5\u00c3\u0971\n\u00c3\3"+
		"\u00c3\3\u00c3\3\u00c3\3\u00c3\3\u00c3\5\u00c3\u0978\n\u00c3\3\u00c3\3"+
		"\u00c3\5\u00c3\u097c\n\u00c3\3\u00c4\3\u00c4\3\u00c4\5\u00c4\u0981\n\u00c4"+
		"\3\u00c4\3\u00c4\3\u00c4\3\u00c4\5\u00c4\u0987\n\u00c4\7\u00c4\u0989\n"+
		"\u00c4\f\u00c4\16\u00c4\u098c\13\u00c4\3\u00c5\3\u00c5\3\u00c5\5\u00c5"+
		"\u0991\n\u00c5\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6"+
		"\5\u00c6\u099a\n\u00c6\3\u00c6\3\u00c6\5\u00c6\u099e\n\u00c6\3\u00c7\5"+
		"\u00c7\u09a1\n\u00c7\3\u00c7\3\u00c7\3\u00c7\3\u00c8\3\u00c8\3\u00c8\3"+
		"\u00c8\3\u00c8\3\u00c9\5\u00c9\u09ac\n\u00c9\3\u00c9\3\u00c9\3\u00c9\3"+
		"\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00ca\3\u00ca\3\u00ca\3\u00ca"+
		"\3\u00cb\3\u00cb\5\u00cb\u09bc\n\u00cb\3\u00cb\3\u00cb\3\u00cb\3\u00cc"+
		"\3\u00cc\5\u00cc\u09c3\n\u00cc\3\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00cd"+
		"\3\u00cd\3\u00ce\5\u00ce\u09cc\n\u00ce\3\u00ce\3\u00ce\3\u00ce\3\u00ce"+
		"\5\u00ce\u09d2\n\u00ce\3\u00ce\3\u00ce\5\u00ce\u09d6\n\u00ce\3\u00ce\5"+
		"\u00ce\u09d9\n\u00ce\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3"+
		"\u00cf\3\u00cf\3\u00cf\5\u00cf\u09e4\n\u00cf\3\u00d0\3\u00d0\3\u00d0\3"+
		"\u00d0\3\u00d0\3\u00d0\7\u00d0\u09ec\n\u00d0\f\u00d0\16\u00d0\u09ef\13"+
		"\u00d0\3\u00d1\3\u00d1\3\u00d1\3\u00d1\3\u00d1\3\u00d1\3\u00d1\5\u00d1"+
		"\u09f8\n\u00d1\3\u00d2\3\u00d2\3\u00d3\3\u00d3\3\u00d4\3\u00d4\3\u00d5"+
		"\3\u00d5\3\u00d5\2&\32&\62DNPRTVXZ\\^`bl|\u008c\u00c2\u00da\u00e4\u00ec"+
		"\u00f8\u00fc\u0104\u011e\u0122\u0126\u013c\u0150\u0154\u015c\u016c\u017a"+
		"\u0186\u019e\u00d6\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60"+
		"\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086"+
		"\u0088\u008a\u008c\u008e\u0090\u0092\u0094\u0096\u0098\u009a\u009c\u009e"+
		"\u00a0\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6"+
		"\u00b8\u00ba\u00bc\u00be\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce"+
		"\u00d0\u00d2\u00d4\u00d6\u00d8\u00da\u00dc\u00de\u00e0\u00e2\u00e4\u00e6"+
		"\u00e8\u00ea\u00ec\u00ee\u00f0\u00f2\u00f4\u00f6\u00f8\u00fa\u00fc\u00fe"+
		"\u0100\u0102\u0104\u0106\u0108\u010a\u010c\u010e\u0110\u0112\u0114\u0116"+
		"\u0118\u011a\u011c\u011e\u0120\u0122\u0124\u0126\u0128\u012a\u012c\u012e"+
		"\u0130\u0132\u0134\u0136\u0138\u013a\u013c\u013e\u0140\u0142\u0144\u0146"+
		"\u0148\u014a\u014c\u014e\u0150\u0152\u0154\u0156\u0158\u015a\u015c\u015e"+
		"\u0160\u0162\u0164\u0166\u0168\u016a\u016c\u016e\u0170\u0172\u0174\u0176"+
		"\u0178\u017a\u017c\u017e\u0180\u0182\u0184\u0186\u0188\u018a\u018c\u018e"+
		"\u0190\u0192\u0194\u0196\u0198\u019a\u019c\u019e\u01a0\u01a2\u01a4\u01a6"+
		"\u01a8\2\21\4\2eeii\5\2^fi}\u0080\u0081\4\2_aeh\5\2iilsvw\6\2!!++::AA"+
		"\4\2\37\37KK\3\2RW\4\2\23\23MM\5\2\22\22==HH\3\2PQ\3\2\61\63\4\2\22\22"+
		"GG\3\2\u0083\u0084\4\2\"\"CC\3\2\u0088\u008b\2\u0b18\2\u01aa\3\2\2\2\4"+
		"\u01ae\3\2\2\2\6\u01b0\3\2\2\2\b\u01b4\3\2\2\2\n\u01b6\3\2\2\2\f\u01b8"+
		"\3\2\2\2\16\u01bb\3\2\2\2\20\u01c8\3\2\2\2\22\u01cc\3\2\2\2\24\u01d7\3"+
		"\2\2\2\26\u01d9\3\2\2\2\30\u01e0\3\2\2\2\32\u01e4\3\2\2\2\34\u01f0\3\2"+
		"\2\2\36\u01f6\3\2\2\2 \u01fc\3\2\2\2\"\u0211\3\2\2\2$\u0213\3\2\2\2&\u0215"+
		"\3\2\2\2(\u0225\3\2\2\2*\u022f\3\2\2\2,\u0232\3\2\2\2.\u024b\3\2\2\2\60"+
		"\u024d\3\2\2\2\62\u028b\3\2\2\2\64\u02b3\3\2\2\2\66\u02c8\3\2\2\28\u02e6"+
		"\3\2\2\2:\u02e8\3\2\2\2<\u0302\3\2\2\2>\u0304\3\2\2\2@\u0308\3\2\2\2B"+
		"\u030c\3\2\2\2D\u0312\3\2\2\2F\u032b\3\2\2\2H\u0339\3\2\2\2J\u033b\3\2"+
		"\2\2L\u0346\3\2\2\2N\u0348\3\2\2\2P\u0356\3\2\2\2R\u0367\3\2\2\2T\u0375"+
		"\3\2\2\2V\u0383\3\2\2\2X\u0397\3\2\2\2Z\u03a5\3\2\2\2\\\u03b0\3\2\2\2"+
		"^\u03bb\3\2\2\2`\u03c6\3\2\2\2b\u03d1\3\2\2\2d\u03e3\3\2\2\2f\u03e5\3"+
		"\2\2\2h\u03ef\3\2\2\2j\u03f1\3\2\2\2l\u03f3\3\2\2\2n\u03fe\3\2\2\2p\u041a"+
		"\3\2\2\2r\u041e\3\2\2\2t\u0428\3\2\2\2v\u043e\3\2\2\2x\u0441\3\2\2\2z"+
		"\u0445\3\2\2\2|\u044b\3\2\2\2~\u0478\3\2\2\2\u0080\u049d\3\2\2\2\u0082"+
		"\u04b0\3\2\2\2\u0084\u04b3\3\2\2\2\u0086\u04b8\3\2\2\2\u0088\u04c6\3\2"+
		"\2\2\u008a\u04c8\3\2\2\2\u008c\u04ca\3\2\2\2\u008e\u04df\3\2\2\2\u0090"+
		"\u04e9\3\2\2\2\u0092\u04ec\3\2\2\2\u0094\u04f1\3\2\2\2\u0096\u0512\3\2"+
		"\2\2\u0098\u0522\3\2\2\2\u009a\u0524\3\2\2\2\u009c\u0526\3\2\2\2\u009e"+
		"\u0530\3\2\2\2\u00a0\u0539\3\2\2\2\u00a2\u053b\3\2\2\2\u00a4\u053d\3\2"+
		"\2\2\u00a6\u0543\3\2\2\2\u00a8\u054c\3\2\2\2\u00aa\u0551\3\2\2\2\u00ac"+
		"\u055a\3\2\2\2\u00ae\u0577\3\2\2\2\u00b0\u057d\3\2\2\2\u00b2\u0588\3\2"+
		"\2\2\u00b4\u05a2\3\2\2\2\u00b6\u05b1\3\2\2\2\u00b8\u05b3\3\2\2\2\u00ba"+
		"\u05be\3\2\2\2\u00bc\u05c2\3\2\2\2\u00be\u05d4\3\2\2\2\u00c0\u05d6\3\2"+
		"\2\2\u00c2\u05d9\3\2\2\2\u00c4\u05e9\3\2\2\2\u00c6\u05eb\3\2\2\2\u00c8"+
		"\u05f2\3\2\2\2\u00ca\u05f5\3\2\2\2\u00cc\u0601\3\2\2\2\u00ce\u060b\3\2"+
		"\2\2\u00d0\u0613\3\2\2\2\u00d2\u0619\3\2\2\2\u00d4\u061b\3\2\2\2\u00d6"+
		"\u0622\3\2\2\2\u00d8\u0626\3\2\2\2\u00da\u062a\3\2\2\2\u00dc\u063b\3\2"+
		"\2\2\u00de\u0641\3\2\2\2\u00e0\u064c\3\2\2\2\u00e2\u065e\3\2\2\2\u00e4"+
		"\u0660\3\2\2\2\u00e6\u0674\3\2\2\2\u00e8\u0686\3\2\2\2\u00ea\u0688\3\2"+
		"\2\2\u00ec\u0693\3\2\2\2\u00ee\u06a4\3\2\2\2\u00f0\u06aa\3\2\2\2\u00f2"+
		"\u06ac\3\2\2\2\u00f4\u06b0\3\2\2\2\u00f6\u06b2\3\2\2\2\u00f8\u06b8\3\2"+
		"\2\2\u00fa\u06d2\3\2\2\2\u00fc\u06d4\3\2\2\2\u00fe\u06df\3\2\2\2\u0100"+
		"\u06e5\3\2\2\2\u0102\u06e7\3\2\2\2\u0104\u06f6\3\2\2\2\u0106\u0708\3\2"+
		"\2\2\u0108\u070b\3\2\2\2\u010a\u0710\3\2\2\2\u010c\u071b\3\2\2\2\u010e"+
		"\u0735\3\2\2\2\u0110\u0737\3\2\2\2\u0112\u073b\3\2\2\2\u0114\u073d\3\2"+
		"\2\2\u0116\u0740\3\2\2\2\u0118\u0744\3\2\2\2\u011a\u0750\3\2\2\2\u011c"+
		"\u0757\3\2\2\2\u011e\u0767\3\2\2\2\u0120\u077d\3\2\2\2\u0122\u077f\3\2"+
		"\2\2\u0124\u079c\3\2\2\2\u0126\u079e\3\2\2\2\u0128\u07c8\3\2\2\2\u012a"+
		"\u07cb\3\2\2\2\u012c\u07d6\3\2\2\2\u012e\u07e0\3\2\2\2\u0130\u07e3\3\2"+
		"\2\2\u0132\u07e7\3\2\2\2\u0134\u07eb\3\2\2\2\u0136\u07ef\3\2\2\2\u0138"+
		"\u07f4\3\2\2\2\u013a\u07f8\3\2\2\2\u013c\u07fa\3\2\2\2\u013e\u0813\3\2"+
		"\2\2\u0140\u0817\3\2\2\2\u0142\u0819\3\2\2\2\u0144\u0832\3\2\2\2\u0146"+
		"\u0835\3\2\2\2\u0148\u0839\3\2\2\2\u014a\u083b\3\2\2\2\u014c\u0846\3\2"+
		"\2\2\u014e\u0859\3\2\2\2\u0150\u085b\3\2\2\2\u0152\u0879\3\2\2\2\u0154"+
		"\u087b\3\2\2\2\u0156\u0885\3\2\2\2\u0158\u0887\3\2\2\2\u015a\u088a\3\2"+
		"\2\2\u015c\u088d\3\2\2\2\u015e\u08b2\3\2\2\2\u0160\u08bd\3\2\2\2\u0162"+
		"\u08bf\3\2\2\2\u0164\u08c1\3\2\2\2\u0166\u08c4\3\2\2\2\u0168\u08c8\3\2"+
		"\2\2\u016a\u08cc\3\2\2\2\u016c\u08cf\3\2\2\2\u016e\u08df\3\2\2\2\u0170"+
		"\u08ea\3\2\2\2\u0172\u08ec\3\2\2\2\u0174\u091f\3\2\2\2\u0176\u0926\3\2"+
		"\2\2\u0178\u0928\3\2\2\2\u017a\u092e\3\2\2\2\u017c\u093b\3\2\2\2\u017e"+
		"\u0961\3\2\2\2\u0180\u0963\3\2\2\2\u0182\u0965\3\2\2\2\u0184\u097b\3\2"+
		"\2\2\u0186\u097d\3\2\2\2\u0188\u0990\3\2\2\2\u018a\u099d\3\2\2\2\u018c"+
		"\u09a0\3\2\2\2\u018e\u09a5\3\2\2\2\u0190\u09ab\3\2\2\2\u0192\u09b5\3\2"+
		"\2\2\u0194\u09b9\3\2\2\2\u0196\u09c0\3\2\2\2\u0198\u09c4\3\2\2\2\u019a"+
		"\u09d8\3\2\2\2\u019c\u09e3\3\2\2\2\u019e\u09e5\3\2\2\2\u01a0\u09f7\3\2"+
		"\2\2\u01a2\u09f9\3\2\2\2\u01a4\u09fb\3\2\2\2\u01a6\u09fd\3\2\2\2\u01a8"+
		"\u09ff\3\2\2\2\u01aa\u01ab\7\u008c\2\2\u01ab\3\3\2\2\2\u01ac\u01af\7\u008c"+
		"\2\2\u01ad\u01af\5\6\4\2\u01ae\u01ac\3\2\2\2\u01ae\u01ad\3\2\2\2\u01af"+
		"\5\3\2\2\2\u01b0\u01b1\7\u008c\2\2\u01b1\7\3\2\2\2\u01b2\u01b5\7\u008c"+
		"\2\2\u01b3\u01b5\5\u0182\u00c2\2\u01b4\u01b2\3\2\2\2\u01b4\u01b3\3\2\2"+
		"\2\u01b5\t\3\2\2\2\u01b6\u01b7\7\u008c\2\2\u01b7\13\3\2\2\2\u01b8\u01b9"+
		"\7\u008c\2\2\u01b9\r\3\2\2\2\u01ba\u01bc\5\u008cG\2\u01bb\u01ba\3\2\2"+
		"\2\u01bb\u01bc\3\2\2\2\u01bc\u01bd\3\2\2\2\u01bd\u01be\7\2\2\3\u01be\17"+
		"\3\2\2\2\u01bf\u01c9\5\u01a0\u00d1\2\u01c0\u01c9\7@\2\2\u01c1\u01c2\7"+
		"V\2\2\u01c2\u01c3\5l\67\2\u01c3\u01c4\7W\2\2\u01c4\u01c9\3\2\2\2\u01c5"+
		"\u01c9\5\22\n\2\u01c6\u01c9\5\34\17\2\u01c7\u01c9\5.\30\2\u01c8\u01bf"+
		"\3\2\2\2\u01c8\u01c0\3\2\2\2\u01c8\u01c1\3\2\2\2\u01c8\u01c5\3\2\2\2\u01c8"+
		"\u01c6\3\2\2\2\u01c8\u01c7\3\2\2\2\u01c9\21\3\2\2\2\u01ca\u01cd\5\24\13"+
		"\2\u01cb\u01cd\5\26\f\2\u01cc\u01ca\3\2\2\2\u01cc\u01cb\3\2\2\2\u01cd"+
		"\23\3\2\2\2\u01ce\u01d8\7\u008c\2\2\u01cf\u01d8\5\u0172\u00ba\2\u01d0"+
		"\u01d8\5\u0164\u00b3\2\u01d1\u01d8\5\u0176\u00bc\2\u01d2\u01d3\7g\2\2"+
		"\u01d3\u01d8\5\b\5\2\u01d4\u01d5\7g\2\2\u01d5\u01d8\5\u00b2Z\2\u01d6\u01d8"+
		"\5\u0184\u00c3\2\u01d7\u01ce\3\2\2\2\u01d7\u01cf\3\2\2\2\u01d7\u01d0\3"+
		"\2\2\2\u01d7\u01d1\3\2\2\2\u01d7\u01d2\3\2\2\2\u01d7\u01d4\3\2\2\2\u01d7"+
		"\u01d6\3\2\2\2\u01d8\25\3\2\2\2\u01d9\u01db\5\30\r\2\u01da\u01dc\7?\2"+
		"\2\u01db\u01da\3\2\2\2\u01db\u01dc\3\2\2\2\u01dc\u01dd\3\2\2\2\u01dd\u01de"+
		"\5\24\13\2\u01de\27\3\2\2\2\u01df\u01e1\7\\\2\2\u01e0\u01df\3\2\2\2\u01e0"+
		"\u01e1\3\2\2\2\u01e1\u01e2\3\2\2\2\u01e2\u01e3\5\32\16\2\u01e3\31\3\2"+
		"\2\2\u01e4\u01e5\b\16\1\2\u01e5\u01e6\7\u008c\2\2\u01e6\u01e7\7\\\2\2"+
		"\u01e7\u01ed\3\2\2\2\u01e8\u01e9\f\3\2\2\u01e9\u01ea\7\u008c\2\2\u01ea"+
		"\u01ec\7\\\2\2\u01eb\u01e8\3\2\2\2\u01ec\u01ef\3\2\2\2\u01ed\u01eb\3\2"+
		"\2\2\u01ed\u01ee\3\2\2\2\u01ee\33\3\2\2\2\u01ef\u01ed\3\2\2\2\u01f0\u01f2"+
		"\5\36\20\2\u01f1\u01f3\5 \21\2\u01f2\u01f1\3\2\2\2\u01f2\u01f3\3\2\2\2"+
		"\u01f3\u01f4\3\2\2\2\u01f4\u01f5\5z>\2\u01f5\35\3\2\2\2\u01f6\u01f8\7"+
		"T\2\2\u01f7\u01f9\5\"\22\2\u01f8\u01f7\3\2\2\2\u01f8\u01f9\3\2\2\2\u01f9"+
		"\u01fa\3\2\2\2\u01fa\u01fb\7U\2\2\u01fb\37\3\2\2\2\u01fc\u01fd\7V\2\2"+
		"\u01fd\u01fe\5\u0124\u0093\2\u01fe\u0200\7W\2\2\u01ff\u0201\5\u00a0Q\2"+
		"\u0200\u01ff\3\2\2\2\u0200\u0201\3\2\2\2\u0201\u0203\3\2\2\2\u0202\u0204"+
		"\5\u019c\u00cf\2\u0203\u0202\3\2\2\2\u0203\u0204\3\2\2\2\u0204\u0206\3"+
		"\2\2\2\u0205\u0207\5\u00e4s\2\u0206\u0205\3\2\2\2\u0206\u0207\3\2\2\2"+
		"\u0207\u0209\3\2\2\2\u0208\u020a\5\u010c\u0087\2\u0209\u0208\3\2\2\2\u0209"+
		"\u020a\3\2\2\2\u020a!\3\2\2\2\u020b\u0212\5$\23\2\u020c\u0212\5&\24\2"+
		"\u020d\u020e\5$\23\2\u020e\u020f\7\u0080\2\2\u020f\u0210\5&\24\2\u0210"+
		"\u0212\3\2\2\2\u0211\u020b\3\2\2\2\u0211\u020c\3\2\2\2\u0211\u020d\3\2"+
		"\2\2\u0212#\3\2\2\2\u0213\u0214\t\2\2\2\u0214%\3\2\2\2\u0215\u0216\b\24"+
		"\1\2\u0216\u0218\5(\25\2\u0217\u0219\7Z\2\2\u0218\u0217\3\2\2\2\u0218"+
		"\u0219\3\2\2\2\u0219\u0222\3\2\2\2\u021a\u021b\f\3\2\2\u021b\u021c\7\u0080"+
		"\2\2\u021c\u021e\5(\25\2\u021d\u021f\7Z\2\2\u021e\u021d\3\2\2\2\u021e"+
		"\u021f\3\2\2\2\u021f\u0221\3\2\2\2\u0220\u021a\3\2\2\2\u0221\u0224\3\2"+
		"\2\2\u0222\u0220\3\2\2\2\u0222\u0223\3\2\2\2\u0223\'\3\2\2\2\u0224\u0222"+
		"\3\2\2\2\u0225\u0226\5*\26\2\u0226\u0227\5,\27\2\u0227)\3\2\2\2\u0228"+
		"\u022a\7e\2\2\u0229\u0228\3\2\2\2\u0229\u022a\3\2\2\2\u022a\u022b\3\2"+
		"\2\2\u022b\u0230\7\u008c\2\2\u022c\u0230\7@\2\2\u022d\u022e\7a\2\2\u022e"+
		"\u0230\7@\2\2\u022f\u0229\3\2\2\2\u022f\u022c\3\2\2\2\u022f\u022d\3\2"+
		"\2\2\u0230+\3\2\2\2\u0231\u0233\7e\2\2\u0232\u0231\3\2\2\2\u0232\u0233"+
		"\3\2\2\2\u0233\u0234\3\2\2\2\u0234\u0235\7\u008c\2\2\u0235\u0236\5\u0136"+
		"\u009c\2\u0236-\3\2\2\2\u0237\u0238\7V\2\2\u0238\u0239\5L\'\2\u0239\u023a"+
		"\5\60\31\2\u023a\u023b\7Z\2\2\u023b\u023c\7W\2\2\u023c\u024c\3\2\2\2\u023d"+
		"\u023e\7V\2\2\u023e\u023f\7Z\2\2\u023f\u0240\5\60\31\2\u0240\u0241\5L"+
		"\'\2\u0241\u0242\7W\2\2\u0242\u024c\3\2\2\2\u0243\u0244\7V\2\2\u0244\u0245"+
		"\5L\'\2\u0245\u0246\5\60\31\2\u0246\u0247\7Z\2\2\u0247\u0248\5\60\31\2"+
		"\u0248\u0249\5L\'\2\u0249\u024a\7W\2\2\u024a\u024c\3\2\2\2\u024b\u0237"+
		"\3\2\2\2\u024b\u023d\3\2\2\2\u024b\u0243\3\2\2\2\u024c/\3\2\2\2\u024d"+
		"\u024e\t\3\2\2\u024e\61\3\2\2\2\u024f\u0250\b\32\1\2\u0250\u028c\5\20"+
		"\t\2\u0251\u0252\5\u00aeX\2\u0252\u0254\7V\2\2\u0253\u0255\5\64\33\2\u0254"+
		"\u0253\3\2\2\2\u0254\u0255\3\2\2\2\u0255\u0256\3\2\2\2\u0256\u0257\7W"+
		"\2\2\u0257\u028c\3\2\2\2\u0258\u0259\5\u018a\u00c6\2\u0259\u025b\7V\2"+
		"\2\u025a\u025c\5\64\33\2\u025b\u025a\3\2\2\2\u025b\u025c\3\2\2\2\u025c"+
		"\u025d\3\2\2\2\u025d\u025e\7W\2\2\u025e\u028c\3\2\2\2\u025f\u0260\5\u00ae"+
		"X\2\u0260\u0261\5\u013e\u00a0\2\u0261\u028c\3\2\2\2\u0262\u0263\5\u018a"+
		"\u00c6\2\u0263\u0264\5\u013e\u00a0\2\u0264\u028c\3\2\2\2\u0265\u0266\7"+
		"\34\2\2\u0266\u0267\7j\2\2\u0267\u0268\5\u0116\u008c\2\u0268\u0269\7k"+
		"\2\2\u0269\u026a\7V\2\2\u026a\u026b\5l\67\2\u026b\u026c\7W\2\2\u026c\u028c"+
		"\3\2\2\2\u026d\u026e\7<\2\2\u026e\u026f\7j\2\2\u026f\u0270\5\u0116\u008c"+
		"\2\u0270\u0271\7k\2\2\u0271\u0272\7V\2\2\u0272\u0273\5l\67\2\u0273\u0274"+
		"\7W\2\2\u0274\u028c\3\2\2\2\u0275\u0276\7\65\2\2\u0276\u0277\7k\2\2\u0277"+
		"\u0278\7V\2\2\u0278\u0279\5l\67\2\u0279\u027a\7W\2\2\u027a\u028c\3\2\2"+
		"\2\u027b\u027c\7\25\2\2\u027c\u027d\7k\2\2\u027d\u027e\7V\2\2\u027e\u027f"+
		"\5l\67\2\u027f\u0280\7W\2\2\u0280\u028c\3\2\2\2\u0281\u0282\5\u0116\u008c"+
		"\2\u0282\u0283\7V\2\2\u0283\u0284\5l\67\2\u0284\u0285\7W\2\2\u0285\u028c"+
		"\3\2\2\2\u0286\u0287\5\u0116\u008c\2\u0287\u0288\7V\2\2\u0288\u0289\5"+
		"\u0116\u008c\2\u0289\u028a\7W\2\2\u028a\u028c\3\2\2\2\u028b\u024f\3\2"+
		"\2\2\u028b\u0251\3\2\2\2\u028b\u0258\3\2\2\2\u028b\u025f\3\2\2\2\u028b"+
		"\u0262\3\2\2\2\u028b\u0265\3\2\2\2\u028b\u026d\3\2\2\2\u028b\u0275\3\2"+
		"\2\2\u028b\u027b\3\2\2\2\u028b\u0281\3\2\2\2\u028b\u0286\3\2\2\2\u028c"+
		"\u02b0\3\2\2\2\u028d\u028e\f\24\2\2\u028e\u028f\7T\2\2\u028f\u0290\5\u0140"+
		"\u00a1\2\u0290\u0291\7U\2\2\u0291\u02af\3\2\2\2\u0292\u0293\f\23\2\2\u0293"+
		"\u0295\7V\2\2\u0294\u0296\5\64\33\2\u0295\u0294\3\2\2\2\u0295\u0296\3"+
		"\2\2\2\u0296\u0297\3\2\2\2\u0297\u02af\7W\2\2\u0298\u0299\f\16\2\2\u0299"+
		"\u029b\7]\2\2\u029a\u029c\7?\2\2\u029b\u029a\3\2\2\2\u029b\u029c\3\2\2"+
		"\2\u029c\u029d\3\2\2\2\u029d\u02af\5\22\n\2\u029e\u029f\f\r\2\2\u029f"+
		"\u02a1\7\u0082\2\2\u02a0\u02a2\7?\2\2\u02a1\u02a0\3\2\2\2\u02a1\u02a2"+
		"\3\2\2\2\u02a2\u02a3\3\2\2\2\u02a3\u02af\5\22\n\2\u02a4\u02a5\f\f\2\2"+
		"\u02a5\u02a6\7]\2\2\u02a6\u02af\5\66\34\2\u02a7\u02a8\f\13\2\2\u02a8\u02a9"+
		"\7\u0082\2\2\u02a9\u02af\5\66\34\2\u02aa\u02ab\f\n\2\2\u02ab\u02af\7~"+
		"\2\2\u02ac\u02ad\f\t\2\2\u02ad\u02af\7\177\2\2\u02ae\u028d\3\2\2\2\u02ae"+
		"\u0292\3\2\2\2\u02ae\u0298\3\2\2\2\u02ae\u029e\3\2\2\2\u02ae\u02a4\3\2"+
		"\2\2\u02ae\u02a7\3\2\2\2\u02ae\u02aa\3\2\2\2\u02ae\u02ac\3\2\2\2\u02af"+
		"\u02b2\3\2\2\2\u02b0\u02ae\3\2\2\2\u02b0\u02b1\3\2\2\2\u02b1\63\3\2\2"+
		"\2\u02b2\u02b0\3\2\2\2\u02b3\u02b4\5\u013c\u009f\2\u02b4\65\3\2\2\2\u02b5"+
		"\u02b7\5\30\r\2\u02b6\u02b5\3\2\2\2\u02b6\u02b7\3\2\2\2\u02b7\u02b8\3"+
		"\2\2\2\u02b8\u02b9\5\u00b0Y\2\u02b9\u02ba\7\\\2\2\u02ba\u02bb\7g\2\2\u02bb"+
		"\u02bc\5\u00b0Y\2\u02bc\u02c9\3\2\2\2\u02bd\u02be\5\30\r\2\u02be\u02bf"+
		"\7?\2\2\u02bf\u02c0\5\u0182\u00c2\2\u02c0\u02c1\7\\\2\2\u02c1\u02c2\7"+
		"g\2\2\u02c2\u02c3\5\u00b0Y\2\u02c3\u02c9\3\2\2\2\u02c4\u02c5\7g\2\2\u02c5"+
		"\u02c9\5\u00b0Y\2\u02c6\u02c7\7g\2\2\u02c7\u02c9\5\u00b2Z\2\u02c8\u02b6"+
		"\3\2\2\2\u02c8\u02bd\3\2\2\2\u02c8\u02c4\3\2\2\2\u02c8\u02c6\3\2\2\2\u02c9"+
		"\67\3\2\2\2\u02ca\u02e7\5\62\32\2\u02cb\u02cc\7~\2\2\u02cc\u02e7\5L\'"+
		"\2\u02cd\u02ce\7\177\2\2\u02ce\u02e7\5L\'\2\u02cf\u02d0\5:\36\2\u02d0"+
		"\u02d1\5L\'\2\u02d1\u02e7\3\2\2\2\u02d2\u02d3\79\2\2\u02d3\u02e7\58\35"+
		"\2\u02d4\u02d5\79\2\2\u02d5\u02d6\7V\2\2\u02d6\u02d7\5\u0116\u008c\2\u02d7"+
		"\u02d8\7W\2\2\u02d8\u02e7\3\2\2\2\u02d9\u02da\79\2\2\u02da\u02db\7Z\2"+
		"\2\u02db\u02dc\7V\2\2\u02dc\u02dd\7\u008c\2\2\u02dd\u02e7\7W\2\2\u02de"+
		"\u02df\7\b\2\2\u02df\u02e0\7V\2\2\u02e0\u02e1\5\u0116\u008c\2\u02e1\u02e2"+
		"\7W\2\2\u02e2\u02e7\3\2\2\2\u02e3\u02e7\5J&\2\u02e4\u02e7\5<\37\2\u02e5"+
		"\u02e7\5H%\2\u02e6\u02ca\3\2\2\2\u02e6\u02cb\3\2\2\2\u02e6\u02cd\3\2\2"+
		"\2\u02e6\u02cf\3\2\2\2\u02e6\u02d2\3\2\2\2\u02e6\u02d4\3\2\2\2\u02e6\u02d9"+
		"\3\2\2\2\u02e6\u02de\3\2\2\2\u02e6\u02e3\3\2\2\2\u02e6\u02e4\3\2\2\2\u02e6"+
		"\u02e5\3\2\2\2\u02e79\3\2\2\2\u02e8\u02e9\t\4\2\2\u02e9;\3\2\2\2\u02ea"+
		"\u02ec\7\\\2\2\u02eb\u02ea\3\2\2\2\u02eb\u02ec\3\2\2\2\u02ec\u02ed\3\2"+
		"\2\2\u02ed\u02ef\7-\2\2\u02ee\u02f0\5> \2\u02ef\u02ee\3\2\2\2\u02ef\u02f0"+
		"\3\2\2\2\u02f0\u02f1\3\2\2\2\u02f1\u02f3\5@!\2\u02f2\u02f4\5F$\2\u02f3"+
		"\u02f2\3\2\2\2\u02f3\u02f4\3\2\2\2\u02f4\u0303\3\2\2\2\u02f5\u02f7\7\\"+
		"\2\2\u02f6\u02f5\3\2\2\2\u02f6\u02f7\3\2\2\2\u02f7\u02f8\3\2\2\2\u02f8"+
		"\u02fa\7-\2\2\u02f9\u02fb\5> \2\u02fa\u02f9\3\2\2\2\u02fa\u02fb\3\2\2"+
		"\2\u02fb\u02fc\3\2\2\2\u02fc\u02fd\7V\2\2\u02fd\u02fe\5\u0116\u008c\2"+
		"\u02fe\u0300\7W\2\2\u02ff\u0301\5F$\2\u0300\u02ff\3\2\2\2\u0300\u0301"+
		"\3\2\2\2\u0301\u0303\3\2\2\2\u0302\u02eb\3\2\2\2\u0302\u02f6\3\2\2\2\u0303"+
		"=\3\2\2\2\u0304\u0305\7V\2\2\u0305\u0306\5\64\33\2\u0306\u0307\7W\2\2"+
		"\u0307?\3\2\2\2\u0308\u030a\5\u00a8U\2\u0309\u030b\5B\"\2\u030a\u0309"+
		"\3\2\2\2\u030a\u030b\3\2\2\2\u030bA\3\2\2\2\u030c\u030e\5\u010e\u0088"+
		"\2\u030d\u030f\5B\"\2\u030e\u030d\3\2\2\2\u030e\u030f\3\2\2\2\u030f\u0310"+
		"\3\2\2\2\u0310\u0311\5D#\2\u0311C\3\2\2\2\u0312\u0313\b#\1\2\u0313\u0314"+
		"\7T\2\2\u0314\u0315\5l\67\2\u0315\u0317\7U\2\2\u0316\u0318\5\u00e4s\2"+
		"\u0317\u0316\3\2\2\2\u0317\u0318\3\2\2\2\u0318\u0322\3\2\2\2\u0319\u031a"+
		"\f\3\2\2\u031a\u031b\7T\2\2\u031b\u031c\5n8\2\u031c\u031e\7U\2\2\u031d"+
		"\u031f\5\u00e4s\2\u031e\u031d\3\2\2\2\u031e\u031f\3\2\2\2\u031f\u0321"+
		"\3\2\2\2\u0320\u0319\3\2\2\2\u0321\u0324\3\2\2\2\u0322\u0320\3\2\2\2\u0322"+
		"\u0323\3\2\2\2\u0323E\3\2\2\2\u0324\u0322\3\2\2\2\u0325\u0327\7V\2\2\u0326"+
		"\u0328\5\64\33\2\u0327\u0326\3\2\2\2\u0327\u0328\3\2\2\2\u0328\u0329\3"+
		"\2\2\2\u0329\u032c\7W\2\2\u032a\u032c\5\u013e\u00a0\2\u032b\u0325\3\2"+
		"\2\2\u032b\u032a\3\2\2\2\u032cG\3\2\2\2\u032d\u032f\7\\\2\2\u032e\u032d"+
		"\3\2\2\2\u032e\u032f\3\2\2\2\u032f\u0330\3\2\2\2\u0330\u0331\7\31\2\2"+
		"\u0331\u033a\5L\'\2\u0332\u0334\7\\\2\2\u0333\u0332\3\2\2\2\u0333\u0334"+
		"\3\2\2\2\u0334\u0335\3\2\2\2\u0335\u0336\7\31\2\2\u0336\u0337\7T\2\2\u0337"+
		"\u0338\7U\2\2\u0338\u033a\5L\'\2\u0339\u032e\3\2\2\2\u0339\u0333\3\2\2"+
		"\2\u033aI\3\2\2\2\u033b\u033c\7.\2\2\u033c\u033d\7V\2\2\u033d\u033e\5"+
		"l\67\2\u033e\u033f\7W\2\2\u033fK\3\2\2\2\u0340\u0347\58\35\2\u0341\u0342"+
		"\7V\2\2\u0342\u0343\5\u0116\u008c\2\u0343\u0344\7W\2\2\u0344\u0345\5L"+
		"\'\2\u0345\u0347\3\2\2\2\u0346\u0340\3\2\2\2\u0346\u0341\3\2\2\2\u0347"+
		"M\3\2\2\2\u0348\u0349\b(\1\2\u0349\u034a\5L\'\2\u034a\u0353\3\2\2\2\u034b"+
		"\u034c\f\4\2\2\u034c\u034d\7^\2\2\u034d\u0352\5L\'\2\u034e\u034f\f\3\2"+
		"\2\u034f\u0350\7\u0081\2\2\u0350\u0352\5L\'\2\u0351\u034b\3\2\2\2\u0351"+
		"\u034e\3\2\2\2\u0352\u0355\3\2\2\2\u0353\u0351\3\2\2\2\u0353\u0354\3\2"+
		"\2\2\u0354O\3\2\2\2\u0355\u0353\3\2\2\2\u0356\u0357\b)\1\2\u0357\u0358"+
		"\5N(\2\u0358\u0364\3\2\2\2\u0359\u035a\f\5\2\2\u035a\u035b\7a\2\2\u035b"+
		"\u0363\5N(\2\u035c\u035d\f\4\2\2\u035d\u035e\7b\2\2\u035e\u0363\5N(\2"+
		"\u035f\u0360\f\3\2\2\u0360\u0361\7c\2\2\u0361\u0363\5N(\2\u0362\u0359"+
		"\3\2\2\2\u0362\u035c\3\2\2\2\u0362\u035f\3\2\2\2\u0363\u0366\3\2\2\2\u0364"+
		"\u0362\3\2\2\2\u0364\u0365\3\2\2\2\u0365Q\3\2\2\2\u0366\u0364\3\2\2\2"+
		"\u0367\u0368\b*\1\2\u0368\u0369\5P)\2\u0369\u0372\3\2\2\2\u036a\u036b"+
		"\f\4\2\2\u036b\u036c\7_\2\2\u036c\u0371\5P)\2\u036d\u036e\f\3\2\2\u036e"+
		"\u036f\7`\2\2\u036f\u0371\5P)\2\u0370\u036a\3\2\2\2\u0370\u036d\3\2\2"+
		"\2\u0371\u0374\3\2\2\2\u0372\u0370\3\2\2\2\u0372\u0373\3\2\2\2\u0373S"+
		"\3\2\2\2\u0374\u0372\3\2\2\2\u0375\u0376\b+\1\2\u0376\u0377\5R*\2\u0377"+
		"\u0380\3\2\2\2\u0378\u0379\f\4\2\2\u0379\u037a\7t\2\2\u037a\u037f\5R*"+
		"\2\u037b\u037c\f\3\2\2\u037c\u037d\7u\2\2\u037d\u037f\5R*\2\u037e\u0378"+
		"\3\2\2\2\u037e\u037b\3\2\2\2\u037f\u0382\3\2\2\2\u0380\u037e\3\2\2\2\u0380"+
		"\u0381\3\2\2\2\u0381U\3\2\2\2\u0382\u0380\3\2\2\2\u0383\u0384\b,\1\2\u0384"+
		"\u0385\5T+\2\u0385\u0394\3\2\2\2\u0386\u0387\f\6\2\2\u0387\u0388\7j\2"+
		"\2\u0388\u0393\5T+\2\u0389\u038a\f\5\2\2\u038a\u038b\7k\2\2\u038b\u0393"+
		"\5T+\2\u038c\u038d\f\4\2\2\u038d\u038e\7z\2\2\u038e\u0393\5T+\2\u038f"+
		"\u0390\f\3\2\2\u0390\u0391\7{\2\2\u0391\u0393\5T+\2\u0392\u0386\3\2\2"+
		"\2\u0392\u0389\3\2\2\2\u0392\u038c\3\2\2\2\u0392\u038f\3\2\2\2\u0393\u0396"+
		"\3\2\2\2\u0394\u0392\3\2\2\2\u0394\u0395\3\2\2\2\u0395W\3\2\2\2\u0396"+
		"\u0394\3\2\2\2\u0397\u0398\b-\1\2\u0398\u0399\5V,\2\u0399\u03a2\3\2\2"+
		"\2\u039a\u039b\f\4\2\2\u039b\u039c\7x\2\2\u039c\u03a1\5V,\2\u039d\u039e"+
		"\f\3\2\2\u039e\u039f\7y\2\2\u039f\u03a1\5V,\2\u03a0\u039a\3\2\2\2\u03a0"+
		"\u039d\3\2\2\2\u03a1\u03a4\3\2\2\2\u03a2\u03a0\3\2\2\2\u03a2\u03a3\3\2"+
		"\2\2\u03a3Y\3\2\2\2\u03a4\u03a2\3\2\2\2\u03a5\u03a6\b.\1\2\u03a6\u03a7"+
		"\5X-\2\u03a7\u03ad\3\2\2\2\u03a8\u03a9\f\3\2\2\u03a9\u03aa\7e\2\2\u03aa"+
		"\u03ac\5X-\2\u03ab\u03a8\3\2\2\2\u03ac\u03af\3\2\2\2\u03ad\u03ab\3\2\2"+
		"\2\u03ad\u03ae\3\2\2\2\u03ae[\3\2\2\2\u03af\u03ad\3\2\2\2\u03b0\u03b1"+
		"\b/\1\2\u03b1\u03b2\5Z.\2\u03b2\u03b8\3\2\2\2\u03b3\u03b4\f\3\2\2\u03b4"+
		"\u03b5\7d\2\2\u03b5\u03b7\5Z.\2\u03b6\u03b3\3\2\2\2\u03b7\u03ba\3\2\2"+
		"\2\u03b8\u03b6\3\2\2\2\u03b8\u03b9\3\2\2\2\u03b9]\3\2\2\2\u03ba\u03b8"+
		"\3\2\2\2\u03bb\u03bc\b\60\1\2\u03bc\u03bd\5\\/\2\u03bd\u03c3\3\2\2\2\u03be"+
		"\u03bf\f\3\2\2\u03bf\u03c0\7f\2\2\u03c0\u03c2\5\\/\2\u03c1\u03be\3\2\2"+
		"\2\u03c2\u03c5\3\2\2\2\u03c3\u03c1\3\2\2\2\u03c3\u03c4\3\2\2\2\u03c4_"+
		"\3\2\2\2\u03c5\u03c3\3\2\2\2\u03c6\u03c7\b\61\1\2\u03c7\u03c8\5^\60\2"+
		"\u03c8\u03ce\3\2\2\2\u03c9\u03ca\f\3\2\2\u03ca\u03cb\7|\2\2\u03cb\u03cd"+
		"\5^\60\2\u03cc\u03c9\3\2\2\2\u03cd\u03d0\3\2\2\2\u03ce\u03cc\3\2\2\2\u03ce"+
		"\u03cf\3\2\2\2\u03cfa\3\2\2\2\u03d0\u03ce\3\2\2\2\u03d1\u03d2\b\62\1\2"+
		"\u03d2\u03d3\5`\61\2\u03d3\u03d9\3\2\2\2\u03d4\u03d5\f\3\2\2\u03d5\u03d6"+
		"\7}\2\2\u03d6\u03d8\5`\61\2\u03d7\u03d4\3\2\2\2\u03d8\u03db\3\2\2\2\u03d9"+
		"\u03d7\3\2\2\2\u03d9\u03da\3\2\2\2\u03dac\3\2\2\2\u03db\u03d9\3\2\2\2"+
		"\u03dc\u03e4\5b\62\2\u03dd\u03de\5b\62\2\u03de\u03df\7[\2\2\u03df\u03e0"+
		"\5l\67\2\u03e0\u03e1\7Y\2\2\u03e1\u03e2\5h\65\2\u03e2\u03e4\3\2\2\2\u03e3"+
		"\u03dc\3\2\2\2\u03e3\u03dd\3\2\2\2\u03e4e\3\2\2\2\u03e5\u03e7\7B\2\2\u03e6"+
		"\u03e8\5h\65\2\u03e7\u03e6\3\2\2\2\u03e7\u03e8\3\2\2\2\u03e8g\3\2\2\2"+
		"\u03e9\u03f0\5d\63\2\u03ea\u03eb\5b\62\2\u03eb\u03ec\5j\66\2\u03ec\u03ed"+
		"\5\u013a\u009e\2\u03ed\u03f0\3\2\2\2\u03ee\u03f0\5f\64\2\u03ef\u03e9\3"+
		"\2\2\2\u03ef\u03ea\3\2\2\2\u03ef\u03ee\3\2\2\2\u03f0i\3\2\2\2\u03f1\u03f2"+
		"\t\5\2\2\u03f2k\3\2\2\2\u03f3\u03f4\b\67\1\2\u03f4\u03f5\5h\65\2\u03f5"+
		"\u03fb\3\2\2\2\u03f6\u03f7\f\3\2\2\u03f7\u03f8\7\u0080\2\2\u03f8\u03fa"+
		"\5h\65\2\u03f9\u03f6\3\2\2\2\u03fa\u03fd\3\2\2\2\u03fb\u03f9\3\2\2\2\u03fb"+
		"\u03fc\3\2\2\2\u03fcm\3\2\2\2\u03fd\u03fb\3\2\2\2\u03fe\u03ff\5d\63\2"+
		"\u03ffo\3\2\2\2\u0400\u041b\5v<\2\u0401\u0403\5\u00e4s\2\u0402\u0401\3"+
		"\2\2\2\u0402\u0403\3\2\2\2\u0403\u0404\3\2\2\2\u0404\u041b\5x=\2\u0405"+
		"\u0407\5\u00e4s\2\u0406\u0405\3\2\2\2\u0406\u0407\3\2\2\2\u0407\u0408"+
		"\3\2\2\2\u0408\u041b\5z>\2\u0409\u040b\5\u00e4s\2\u040a\u0409\3\2\2\2"+
		"\u040a\u040b\3\2\2\2\u040b\u040c\3\2\2\2\u040c\u041b\5~@\2\u040d\u040f"+
		"\5\u00e4s\2\u040e\u040d\3\2\2\2\u040e\u040f\3\2\2\2\u040f\u0410\3\2\2"+
		"\2\u0410\u041b\5\u0080A\2\u0411\u0413\5\u00e4s\2\u0412\u0411\3\2\2\2\u0412"+
		"\u0413\3\2\2\2\u0413\u0414\3\2\2\2\u0414\u041b\5\u0088E\2\u0415\u041b"+
		"\5\u008aF\2\u0416\u0418\5\u00e4s\2\u0417\u0416\3\2\2\2\u0417\u0418\3\2"+
		"\2\2\u0418\u0419\3\2\2\2\u0419\u041b\5\u0192\u00ca\2\u041a\u0400\3\2\2"+
		"\2\u041a\u0402\3\2\2\2\u041a\u0406\3\2\2\2\u041a\u040a\3\2\2\2\u041a\u040e"+
		"\3\2\2\2\u041a\u0412\3\2\2\2\u041a\u0415\3\2\2\2\u041a\u0417\3\2\2\2\u041b"+
		"q\3\2\2\2\u041c\u041f\5x=\2\u041d\u041f\5\u0096L\2\u041e\u041c\3\2\2\2"+
		"\u041e\u041d\3\2\2\2\u041fs\3\2\2\2\u0420\u0429\5l\67\2\u0421\u0423\5"+
		"\u00e4s\2\u0422\u0421\3\2\2\2\u0422\u0423\3\2\2\2\u0423\u0424\3\2\2\2"+
		"\u0424\u0425\5\u00a0Q\2\u0425\u0426\5\u0100\u0081\2\u0426\u0427\5\u0138"+
		"\u009d\2\u0427\u0429\3\2\2\2\u0428\u0420\3\2\2\2\u0428\u0422\3\2\2\2\u0429"+
		"u\3\2\2\2\u042a\u042c\5\u00e4s\2\u042b\u042a\3\2\2\2\u042b\u042c\3\2\2"+
		"\2\u042c\u042d\3\2\2\2\u042d\u042e\7\u008c\2\2\u042e\u042f\7Y\2\2\u042f"+
		"\u043f\5p9\2\u0430\u0432\5\u00e4s\2\u0431\u0430\3\2\2\2\u0431\u0432\3"+
		"\2\2\2\u0432\u0433\3\2\2\2\u0433\u0434\7\r\2\2\u0434\u0435\5n8\2\u0435"+
		"\u0436\7Y\2\2\u0436\u0437\5p9\2\u0437\u043f\3\2\2\2\u0438\u043a\5\u00e4"+
		"s\2\u0439\u0438\3\2\2\2\u0439\u043a\3\2\2\2\u043a\u043b\3\2\2\2\u043b"+
		"\u043c\7\30\2\2\u043c\u043d\7Y\2\2\u043d\u043f\5p9\2\u043e\u042b\3\2\2"+
		"\2\u043e\u0431\3\2\2\2\u043e\u0439\3\2\2\2\u043fw\3\2\2\2\u0440\u0442"+
		"\5l\67\2\u0441\u0440\3\2\2\2\u0441\u0442\3\2\2\2\u0442\u0443\3\2\2\2\u0443"+
		"\u0444\7X\2\2\u0444y\3\2\2\2\u0445\u0447\7R\2\2\u0446\u0448\5|?\2\u0447"+
		"\u0446\3\2\2\2\u0447\u0448\3\2\2\2\u0448\u0449\3\2\2\2\u0449\u044a\7S"+
		"\2\2\u044a{\3\2\2\2\u044b\u044c\b?\1\2\u044c\u044d\5p9\2\u044d\u0452\3"+
		"\2\2\2\u044e\u044f\f\3\2\2\u044f\u0451\5p9\2\u0450\u044e\3\2\2\2\u0451"+
		"\u0454\3\2\2\2\u0452\u0450\3\2\2\2\u0452\u0453\3\2\2\2\u0453}\3\2\2\2"+
		"\u0454\u0452\3\2\2\2\u0455\u0457\7\'\2\2\u0456\u0458\7\24\2\2\u0457\u0456"+
		"\3\2\2\2\u0457\u0458\3\2\2\2\u0458\u0459\3\2\2\2\u0459\u045b\7V\2\2\u045a"+
		"\u045c\5r:\2\u045b\u045a\3\2\2\2\u045b\u045c\3\2\2\2\u045c\u045d\3\2\2"+
		"\2\u045d\u045e\5t;\2\u045e\u045f\7W\2\2\u045f\u0460\5p9\2\u0460\u0479"+
		"\3\2\2\2\u0461\u0463\7\'\2\2\u0462\u0464\7\24\2\2\u0463\u0462\3\2\2\2"+
		"\u0463\u0464\3\2\2\2\u0464\u0465\3\2\2\2\u0465\u0467\7V\2\2\u0466\u0468"+
		"\5r:\2\u0467\u0466\3\2\2\2\u0467\u0468\3\2\2\2\u0468\u0469\3\2\2\2\u0469"+
		"\u046a\5t;\2\u046a\u046b\7W\2\2\u046b\u046c\5p9\2\u046c\u046d\7\35\2\2"+
		"\u046d\u046e\5p9\2\u046e\u0479\3\2\2\2\u046f\u0470\7>\2\2\u0470\u0472"+
		"\7V\2\2\u0471\u0473\5r:\2\u0472\u0471\3\2\2\2\u0472\u0473\3\2\2\2\u0473"+
		"\u0474\3\2\2\2\u0474\u0475\5t;\2\u0475\u0476\7W\2\2\u0476\u0477\5p9\2"+
		"\u0477\u0479\3\2\2\2\u0478\u0455\3\2\2\2\u0478\u0461\3\2\2\2\u0478\u046f"+
		"\3\2\2\2\u0479\177\3\2\2\2\u047a\u047b\7O\2\2\u047b\u047c\7V\2\2\u047c"+
		"\u047d\5t;\2\u047d\u047e\7W\2\2\u047e\u047f\5p9\2\u047f\u049e\3\2\2\2"+
		"\u0480\u0481\7\32\2\2\u0481\u0482\5p9\2\u0482\u0483\7O\2\2\u0483\u0484"+
		"\7V\2\2\u0484\u0485\5l\67\2\u0485\u0486\7W\2\2\u0486\u0487\7X\2\2\u0487"+
		"\u049e\3\2\2\2\u0488\u0489\7$\2\2\u0489\u048a\7V\2\2\u048a\u048c\5r:\2"+
		"\u048b\u048d\5t;\2\u048c\u048b\3\2\2\2\u048c\u048d\3\2\2\2\u048d\u048e"+
		"\3\2\2\2\u048e\u0490\7X\2\2\u048f\u0491\5l\67\2\u0490\u048f\3\2\2\2\u0490"+
		"\u0491\3\2\2\2\u0491\u0492\3\2\2\2\u0492\u0493\7W\2\2\u0493\u0494\5p9"+
		"\2\u0494\u049e\3\2\2\2\u0495\u0496\7$\2\2\u0496\u0497\7V\2\2\u0497\u0498"+
		"\5\u0084C\2\u0498\u0499\7Y\2\2\u0499\u049a\5\u0086D\2\u049a\u049b\7W\2"+
		"\2\u049b\u049c\5p9\2\u049c\u049e\3\2\2\2\u049d\u047a\3\2\2\2\u049d\u0480"+
		"\3\2\2\2\u049d\u0488\3\2\2\2\u049d\u0495\3\2\2\2\u049e\u0081\3\2\2\2\u049f"+
		"\u04a1\5\u00e4s\2\u04a0\u049f\3\2\2\2\u04a0\u04a1\3\2\2\2\u04a1\u04a2"+
		"\3\2\2\2\u04a2\u04a3\5\u00a0Q\2\u04a3\u04a4\5\u0100\u0081\2\u04a4\u04b1"+
		"\3\2\2\2\u04a5\u04a7\5\u00e4s\2\u04a6\u04a5\3\2\2\2\u04a6\u04a7\3\2\2"+
		"\2\u04a7\u04a8\3\2\2\2\u04a8\u04aa\5\u00a0Q\2\u04a9\u04ab\5\u0114\u008b"+
		"\2\u04aa\u04a9\3\2\2\2\u04aa\u04ab\3\2\2\2\u04ab\u04ac\3\2\2\2\u04ac\u04ad"+
		"\7T\2\2\u04ad\u04ae\5\u019e\u00d0\2\u04ae\u04af\7U\2\2\u04af\u04b1\3\2"+
		"\2\2\u04b0\u04a0\3\2\2\2\u04b0\u04a6\3\2\2\2\u04b1\u0083\3\2\2\2\u04b2"+
		"\u04b4\5\u00e4s\2\u04b3\u04b2\3\2\2\2\u04b3\u04b4\3\2\2\2\u04b4\u04b5"+
		"\3\2\2\2\u04b5\u04b6\5\u00a0Q\2\u04b6\u04b7\5\u0100\u0081\2\u04b7\u0085"+
		"\3\2\2\2\u04b8\u04b9\5\u0140\u00a1\2\u04b9\u0087\3\2\2\2\u04ba\u04bb\7"+
		"\f\2\2\u04bb\u04c7\7X\2\2\u04bc\u04bd\7\26\2\2\u04bd\u04c7\7X\2\2\u04be"+
		"\u04c0\7\66\2\2\u04bf\u04c1\5\u0140\u00a1\2\u04c0\u04bf\3\2\2\2\u04c0"+
		"\u04c1\3\2\2\2\u04c1\u04c2\3\2\2\2\u04c2\u04c7\7X\2\2\u04c3\u04c4\7&\2"+
		"\2\u04c4\u04c5\7\u008c\2\2\u04c5\u04c7\7X\2\2\u04c6\u04ba\3\2\2\2\u04c6"+
		"\u04bc\3\2\2\2\u04c6\u04be\3\2\2\2\u04c6\u04c3\3\2\2\2\u04c7\u0089\3\2"+
		"\2\2\u04c8\u04c9\5\u0090I\2\u04c9\u008b\3\2\2\2\u04ca\u04cb\bG\1\2\u04cb"+
		"\u04cc\5\u008eH\2\u04cc\u04d1\3\2\2\2\u04cd\u04ce\f\3\2\2\u04ce\u04d0"+
		"\5\u008eH\2\u04cf\u04cd\3\2\2\2\u04d0\u04d3\3\2\2\2\u04d1\u04cf\3\2\2"+
		"\2\u04d1\u04d2\3\2\2\2\u04d2\u008d\3\2\2\2\u04d3\u04d1\3\2\2\2\u04d4\u04e0"+
		"\5\u0090I\2\u04d5\u04e0\5\u0092J\2\u04d6\u04e0\5\u012a\u0096\2\u04d7\u04e0"+
		"\5\u0178\u00bd\2\u04d8\u04e0\5\u0190\u00c9\2\u04d9\u04e0\5\u018c\u00c7"+
		"\2\u04da\u04e0\5\u018e\u00c8\2\u04db\u04e0\5\u00e2r\2\u04dc\u04e0\5\u00c8"+
		"e\2\u04dd\u04e0\5\u009aN\2\u04de\u04e0\5\u009cO\2\u04df\u04d4\3\2\2\2"+
		"\u04df\u04d5\3\2\2\2\u04df\u04d6\3\2\2\2\u04df\u04d7\3\2\2\2\u04df\u04d8"+
		"\3\2\2\2\u04df\u04d9\3\2\2\2\u04df\u04da\3\2\2\2\u04df\u04db\3\2\2\2\u04df"+
		"\u04dc\3\2\2\2\u04df\u04dd\3\2\2\2\u04df\u04de\3\2\2\2\u04e0\u008f\3\2"+
		"\2\2\u04e1\u04ea\5\u0096L\2\u04e2\u04ea\5\u00e0q\2\u04e3\u04ea\5\u00d4"+
		"k\2\u04e4\u04ea\5\u00d8m\2\u04e5\u04ea\5\u00dep\2\u04e6\u04ea\5\u0098"+
		"M\2\u04e7\u04ea\5\u0094K\2\u04e8\u04ea\5\u00bc_\2\u04e9\u04e1\3\2\2\2"+
		"\u04e9\u04e2\3\2\2\2\u04e9\u04e3\3\2\2\2\u04e9\u04e4\3\2\2\2\u04e9\u04e5"+
		"\3\2\2\2\u04e9\u04e6\3\2\2\2\u04e9\u04e7\3\2\2\2\u04e9\u04e8\3\2\2\2\u04ea"+
		"\u0091\3\2\2\2\u04eb\u04ed\5\u00e4s\2\u04ec\u04eb\3\2\2\2\u04ec\u04ed"+
		"\3\2\2\2\u04ed\u04ee\3\2\2\2\u04ee\u04ef\5\u0100\u0081\2\u04ef\u04f0\7"+
		"X\2\2\u04f0\u0093\3\2\2\2\u04f1\u04f2\7J\2\2\u04f2\u04f4\7\u008c\2\2\u04f3"+
		"\u04f5\5\u00e4s\2\u04f4\u04f3\3\2\2\2\u04f4\u04f5\3\2\2\2\u04f5\u04f6"+
		"\3\2\2\2\u04f6\u04f7\7i\2\2\u04f7\u04f8\5\u0118\u008d\2\u04f8\u04f9\7"+
		"X\2\2\u04f9\u0095\3\2\2\2\u04fa\u04fc\5\u00a0Q\2\u04fb\u04fd\5\u00fc\177"+
		"\2\u04fc\u04fb\3\2\2\2\u04fc\u04fd\3\2\2\2\u04fd\u04fe\3\2\2\2\u04fe\u04ff"+
		"\7X\2\2\u04ff\u0513\3\2\2\2\u0500\u0501\5\u00e4s\2\u0501\u0502\5\u00a0"+
		"Q\2\u0502\u0503\5\u00fc\177\2\u0503\u0504\7X\2\2\u0504\u0513\3\2\2\2\u0505"+
		"\u0507\5\u00e4s\2\u0506\u0505\3\2\2\2\u0506\u0507\3\2\2\2\u0507\u0508"+
		"\3\2\2\2\u0508\u050a\5\u00a0Q\2\u0509\u050b\5\u0114\u008b\2\u050a\u0509"+
		"\3\2\2\2\u050a\u050b\3\2\2\2\u050b\u050c\3\2\2\2\u050c\u050d\7T\2\2\u050d"+
		"\u050e\5\u019e\u00d0\2\u050e\u050f\7U\2\2\u050f\u0510\5\u0136\u009c\2"+
		"\u0510\u0511\7X\2\2\u0511\u0513\3\2\2\2\u0512\u04fa\3\2\2\2\u0512\u0500"+
		"\3\2\2\2\u0512\u0506\3\2\2\2\u0513\u0097\3\2\2\2\u0514\u0515\7;\2\2\u0515"+
		"\u0516\7V\2\2\u0516\u0517\5n8\2\u0517\u0518\7W\2\2\u0518\u0519\7X\2\2"+
		"\u0519\u0523\3\2\2\2\u051a\u051b\7;\2\2\u051b\u051c\7V\2\2\u051c\u051d"+
		"\5n8\2\u051d\u051e\7\u0080\2\2\u051e\u051f\7\u0087\2\2\u051f\u0520\7W"+
		"\2\2\u0520\u0521\7X\2\2\u0521\u0523\3\2\2\2\u0522\u0514\3\2\2\2\u0522"+
		"\u051a\3\2\2\2\u0523\u0099\3\2\2\2\u0524\u0525\7X\2\2\u0525\u009b\3\2"+
		"\2\2\u0526\u0527\5\u00e4s\2\u0527\u0528\7X\2\2\u0528\u009d\3\2\2\2\u0529"+
		"\u0531\5\u00a2R\2\u052a\u0531\5\u00aaV\2\u052b\u0531\5\u00a4S\2\u052c"+
		"\u0531\7%\2\2\u052d\u0531\7E\2\2\u052e\u0531\7\24\2\2\u052f\u0531\7(\2"+
		"\2\u0530\u0529\3\2\2\2\u0530\u052a\3\2\2\2\u0530\u052b\3\2\2\2\u0530\u052c"+
		"\3\2\2\2\u0530\u052d\3\2\2\2\u0530\u052e\3\2\2\2\u0530\u052f\3\2\2\2\u0531"+
		"\u009f\3\2\2\2\u0532\u0534\5\u009eP\2\u0533\u0535\5\u00e4s\2\u0534\u0533"+
		"\3\2\2\2\u0534\u0535\3\2\2\2\u0535\u053a\3\2\2\2\u0536\u0537\5\u009eP"+
		"\2\u0537\u0538\5\u00a0Q\2\u0538\u053a\3\2\2\2\u0539\u0532\3\2\2\2\u0539"+
		"\u0536\3\2\2\2\u053a\u00a1\3\2\2\2\u053b\u053c\t\6\2\2\u053c\u00a3\3\2"+
		"\2\2\u053d\u053e\t\7\2\2\u053e\u00a5\3\2\2\2\u053f\u0544\5\u00aeX\2\u0540"+
		"\u0544\5\u00b4[\2\u0541\u0544\5\u018a\u00c6\2\u0542\u0544\5\u0112\u008a"+
		"\2\u0543\u053f\3\2\2\2\u0543\u0540\3\2\2\2\u0543\u0541\3\2\2\2\u0543\u0542"+
		"\3\2\2\2\u0544\u00a7\3\2\2\2\u0545\u0547\5\u00a6T\2\u0546\u0548\5\u00e4"+
		"s\2\u0547\u0546\3\2\2\2\u0547\u0548\3\2\2\2\u0548\u054d\3\2\2\2\u0549"+
		"\u054a\5\u00a6T\2\u054a\u054b\5\u00a8U\2\u054b\u054d\3\2\2\2\u054c\u0545"+
		"\3\2\2\2\u054c\u0549\3\2\2\2\u054d\u00a9\3\2\2\2\u054e\u0552\5\u00a6T"+
		"\2\u054f\u0552\5\u0142\u00a2\2\u0550\u0552\5\u00b6\\\2\u0551\u054e\3\2"+
		"\2\2\u0551\u054f\3\2\2\2\u0551\u0550\3\2\2\2\u0552\u00ab\3\2\2\2\u0553"+
		"\u0555\5\u00aaV\2\u0554\u0556\5\u00e4s\2\u0555\u0554\3\2\2\2\u0555\u0556"+
		"\3\2\2\2\u0556\u055b\3\2\2\2\u0557\u0558\5\u00aaV\2\u0558\u0559\5\u00ac"+
		"W\2\u0559\u055b\3\2\2\2\u055a\u0553\3\2\2\2\u055a\u0557\3\2\2\2\u055b"+
		"\u00ad\3\2\2\2\u055c\u055e\5\30\r\2\u055d\u055c\3\2\2\2\u055d\u055e\3"+
		"\2\2\2\u055e\u055f\3\2\2\2\u055f\u0578\5\u00b0Y\2\u0560\u0561\5\30\r\2"+
		"\u0561\u0562\7?\2\2\u0562\u0563\5\u0182\u00c2\2\u0563\u0578\3\2\2\2\u0564"+
		"\u0566\5\30\r\2\u0565\u0564\3\2\2\2\u0565\u0566\3\2\2\2\u0566\u0567\3"+
		"\2\2\2\u0567\u0578\5\f\7\2\u0568\u0578\7\17\2\2\u0569\u0578\7\20\2\2\u056a"+
		"\u0578\7\21\2\2\u056b\u0578\7N\2\2\u056c\u0578\7\13\2\2\u056d\u0578\7"+
		"\67\2\2\u056e\u0578\7)\2\2\u056f\u0578\7*\2\2\u0570\u0578\78\2\2\u0571"+
		"\u0578\7I\2\2\u0572\u0578\7#\2\2\u0573\u0578\7\33\2\2\u0574\u0578\7L\2"+
		"\2\u0575\u0578\7\n\2\2\u0576\u0578\5\u00b2Z\2\u0577\u055d\3\2\2\2\u0577"+
		"\u0560\3\2\2\2\u0577\u0565\3\2\2\2\u0577\u0568\3\2\2\2\u0577\u0569\3\2"+
		"\2\2\u0577\u056a\3\2\2\2\u0577\u056b\3\2\2\2\u0577\u056c\3\2\2\2\u0577"+
		"\u056d\3\2\2\2\u0577\u056e\3\2\2\2\u0577\u056f\3\2\2\2\u0577\u0570\3\2"+
		"\2\2\u0577\u0571\3\2\2\2\u0577\u0572\3\2\2\2\u0577\u0573\3\2\2\2\u0577"+
		"\u0574\3\2\2\2\u0577\u0575\3\2\2\2\u0577\u0576\3\2\2\2\u0578\u00af\3\2"+
		"\2\2\u0579\u057e\5\b\5\2\u057a\u057e\5\n\6\2\u057b\u057e\5\2\2\2\u057c"+
		"\u057e\5\u0182\u00c2\2\u057d\u0579\3\2\2\2\u057d\u057a\3\2\2\2\u057d\u057b"+
		"\3\2\2\2\u057d\u057c\3\2\2\2\u057e\u00b1\3\2\2\2\u057f\u0580\7\27\2\2"+
		"\u0580\u0581\7V\2\2\u0581\u0582\5l\67\2\u0582\u0583\7W\2\2\u0583\u0589"+
		"\3\2\2\2\u0584\u0585\7\27\2\2\u0585\u0586\7V\2\2\u0586\u0587\7\n\2\2\u0587"+
		"\u0589\7W\2\2\u0588\u057f\3\2\2\2\u0588\u0584\3\2\2\2\u0589\u00b3\3\2"+
		"\2\2\u058a\u058c\5\u014a\u00a6\2\u058b\u058d\5\u00e4s\2\u058c\u058b\3"+
		"\2\2\2\u058c\u058d\3\2\2\2\u058d\u058f\3\2\2\2\u058e\u0590\5\30\r\2\u058f"+
		"\u058e\3\2\2\2\u058f\u0590\3\2\2\2\u0590\u0591\3\2\2\2\u0591\u0592\7\u008c"+
		"\2\2\u0592\u05a3\3\2\2\2\u0593\u0594\5\u014a\u00a6\2\u0594\u0595\5\u0182"+
		"\u00c2\2\u0595\u05a3\3\2\2\2\u0596\u0597\5\u014a\u00a6\2\u0597\u0599\5"+
		"\30\r\2\u0598\u059a\7?\2\2\u0599\u0598\3\2\2\2\u0599\u059a\3\2\2\2\u059a"+
		"\u059b\3\2\2\2\u059b\u059c\5\u0182\u00c2\2\u059c\u05a3\3\2\2\2\u059d\u059f"+
		"\7\36\2\2\u059e\u05a0\5\30\r\2\u059f\u059e\3\2\2\2\u059f\u05a0\3\2\2\2"+
		"\u05a0\u05a1\3\2\2\2\u05a1\u05a3\7\u008c\2\2\u05a2\u058a\3\2\2\2\u05a2"+
		"\u0593\3\2\2\2\u05a2\u0596\3\2\2\2\u05a2\u059d\3\2\2\2\u05a3\u00b5\3\2"+
		"\2\2\u05a4\u05a5\5\u00b8]\2\u05a5\u05a7\7R\2\2\u05a6\u05a8\5\u00c2b\2"+
		"\u05a7\u05a6\3\2\2\2\u05a7\u05a8\3\2\2\2\u05a8\u05a9\3\2\2\2\u05a9\u05aa"+
		"\7S\2\2\u05aa\u05b2\3\2\2\2\u05ab\u05ac\5\u00b8]\2\u05ac\u05ad\7R\2\2"+
		"\u05ad\u05ae\5\u00c2b\2\u05ae\u05af\7\u0080\2\2\u05af\u05b0\7S\2\2\u05b0"+
		"\u05b2\3\2\2\2\u05b1\u05a4\3\2\2\2\u05b1\u05ab\3\2\2\2\u05b2\u00b7\3\2"+
		"\2\2\u05b3\u05b5\5\u00be`\2\u05b4\u05b6\5\u00e4s\2\u05b5\u05b4\3\2\2\2"+
		"\u05b5\u05b6\3\2\2\2\u05b6\u05b8\3\2\2\2\u05b7\u05b9\5\u00ba^\2\u05b8"+
		"\u05b7\3\2\2\2\u05b8\u05b9\3\2\2\2\u05b9\u05bb\3\2\2\2\u05ba\u05bc\5\u00c0"+
		"a\2\u05bb\u05ba\3\2\2\2\u05bb\u05bc\3\2\2\2\u05bc\u00b9\3\2\2\2\u05bd"+
		"\u05bf\5\30\r\2\u05be\u05bd\3\2\2\2\u05be\u05bf\3\2\2\2\u05bf\u05c0\3"+
		"\2\2\2\u05c0\u05c1\7\u008c\2\2\u05c1\u00bb\3\2\2\2\u05c2\u05c4\5\u00be"+
		"`\2\u05c3\u05c5\5\u00e4s\2\u05c4\u05c3\3\2\2\2\u05c4\u05c5\3\2\2\2\u05c5"+
		"\u05c7\3\2\2\2\u05c6\u05c8\5\30\r\2\u05c7\u05c6\3\2\2\2\u05c7\u05c8\3"+
		"\2\2\2\u05c8\u05c9\3\2\2\2\u05c9\u05cb\7\u008c\2\2\u05ca\u05cc\5\u00c0"+
		"a\2\u05cb\u05ca\3\2\2\2\u05cb\u05cc\3\2\2\2\u05cc\u05cd\3\2\2\2\u05cd"+
		"\u05ce\7X\2\2\u05ce\u00bd\3\2\2\2\u05cf\u05d5\7\36\2\2\u05d0\u05d1\7\36"+
		"\2\2\u05d1\u05d5\7\22\2\2\u05d2\u05d3\7\36\2\2\u05d3\u05d5\7=\2\2\u05d4"+
		"\u05cf\3\2\2\2\u05d4\u05d0\3\2\2\2\u05d4\u05d2\3\2\2\2\u05d5\u00bf\3\2"+
		"\2\2\u05d6\u05d7\7Y\2\2\u05d7\u05d8\5\u00a8U\2\u05d8\u00c1\3\2\2\2\u05d9"+
		"\u05da\bb\1\2\u05da\u05db\5\u00c4c\2\u05db\u05e1\3\2\2\2\u05dc\u05dd\f"+
		"\3\2\2\u05dd\u05de\7\u0080\2\2\u05de\u05e0\5\u00c4c\2\u05df\u05dc\3\2"+
		"\2\2\u05e0\u05e3\3\2\2\2\u05e1\u05df\3\2\2\2\u05e1\u05e2\3\2\2\2\u05e2"+
		"\u00c3\3\2\2\2\u05e3\u05e1\3\2\2\2\u05e4\u05ea\5\u00c6d\2\u05e5\u05e6"+
		"\5\u00c6d\2\u05e6\u05e7\7i\2\2\u05e7\u05e8\5n8\2\u05e8\u05ea\3\2\2\2\u05e9"+
		"\u05e4\3\2\2\2\u05e9\u05e5\3\2\2\2\u05ea\u00c5\3\2\2\2\u05eb\u05ed\7\u008c"+
		"\2\2\u05ec\u05ee\5\u00e4s\2\u05ed\u05ec\3\2\2\2\u05ed\u05ee\3\2\2\2\u05ee"+
		"\u00c7\3\2\2\2\u05ef\u05f3\5\u00caf\2\u05f0\u05f3\5\u00ccg\2\u05f1\u05f3"+
		"\5\u00ceh\2\u05f2\u05ef\3\2\2\2\u05f2\u05f0\3\2\2\2\u05f2\u05f1\3\2\2"+
		"\2\u05f3\u00c9\3\2\2\2\u05f4\u05f6\7(\2\2\u05f5\u05f4\3\2\2\2\u05f5\u05f6"+
		"\3\2\2\2\u05f6\u05f7\3\2\2\2\u05f7\u05f9\7,\2\2\u05f8\u05fa\5\u00e4s\2"+
		"\u05f9\u05f8\3\2\2\2\u05f9\u05fa\3\2\2\2\u05fa\u05fb\3\2\2\2\u05fb\u05fc"+
		"\7\u008c\2\2\u05fc\u05fd\7R\2\2\u05fd\u05fe\5\u00d2j\2\u05fe\u05ff\7S"+
		"\2\2\u05ff\u00cb\3\2\2\2\u0600\u0602\7(\2\2\u0601\u0600\3\2\2\2\u0601"+
		"\u0602\3\2\2\2\u0602\u0603\3\2\2\2\u0603\u0605\7,\2\2\u0604\u0606\5\u00e4"+
		"s\2\u0605\u0604\3\2\2\2\u0605\u0606\3\2\2\2\u0606\u0607\3\2\2\2\u0607"+
		"\u0608\7R\2\2\u0608\u0609\5\u00d2j\2\u0609\u060a\7S\2\2\u060a\u00cd\3"+
		"\2\2\2\u060b\u060c\7,\2\2\u060c\u060d\5\u00d0i\2\u060d\u060e\7\\\2\2\u060e"+
		"\u060f\7\u008c\2\2\u060f\u0610\7R\2\2\u0610\u0611\5\u00d2j\2\u0611\u0612"+
		"\7S\2\2\u0612\u00cf\3\2\2\2\u0613\u0614\7\u008c\2\2\u0614\u0615\5\u00d0"+
		"i\2\u0615\u0616\7\\\2\2\u0616\u0617\7\u008c\2\2\u0617\u00d1\3\2\2\2\u0618"+
		"\u061a\5\u008cG\2\u0619\u0618\3\2\2\2\u0619\u061a\3\2\2\2\u061a\u00d3"+
		"\3\2\2\2\u061b\u061c\7,\2\2\u061c\u061d\7\u008c\2\2\u061d\u061e\7i\2\2"+
		"\u061e\u061f\5\u00d6l\2\u061f\u0620\7X\2\2\u0620\u00d5\3\2\2\2\u0621\u0623"+
		"\5\30\r\2\u0622\u0621\3\2\2\2\u0622\u0623\3\2\2\2\u0623\u0624\3\2\2\2"+
		"\u0624\u0625\5\4\3\2\u0625\u00d7\3\2\2\2\u0626\u0627\7J\2\2\u0627\u0628"+
		"\5\u00dan\2\u0628\u0629\7X\2\2\u0629\u00d9\3\2\2\2\u062a\u062b\bn\1\2"+
		"\u062b\u062d\5\u00dco\2\u062c\u062e\7Z\2\2\u062d\u062c\3\2\2\2\u062d\u062e"+
		"\3\2\2\2\u062e\u0637\3\2\2\2\u062f\u0630\f\3\2\2\u0630\u0631\7\u0080\2"+
		"\2\u0631\u0633\5\u00dco\2\u0632\u0634\7Z\2\2\u0633\u0632\3\2\2\2\u0633"+
		"\u0634\3\2\2\2\u0634\u0636\3\2\2\2\u0635\u062f\3\2\2\2\u0636\u0639\3\2"+
		"\2\2\u0637\u0635\3\2\2\2\u0637\u0638\3\2\2\2\u0638\u00db\3\2\2\2\u0639"+
		"\u0637\3\2\2\2\u063a\u063c\5\u00b0Y\2\u063b\u063a\3\2\2\2\u063b\u063c"+
		"\3\2\2\2\u063c\u063d\3\2\2\2\u063d\u063e\5\30\r\2\u063e\u063f\5\24\13"+
		"\2\u063f\u00dd\3\2\2\2\u0640\u0642\5\u00e4s\2\u0641\u0640\3\2\2\2\u0641"+
		"\u0642\3\2\2\2\u0642\u0643\3\2\2\2\u0643\u0644\7J\2\2\u0644\u0646\7,\2"+
		"\2\u0645\u0647\5\30\r\2\u0646\u0645\3\2\2\2\u0646\u0647\3\2\2\2\u0647"+
		"\u0648\3\2\2\2\u0648\u0649\5\4\3\2\u0649\u064a\7X\2\2\u064a\u00df\3\2"+
		"\2\2\u064b\u064d\5\u00e4s\2\u064c\u064b\3\2\2\2\u064c\u064d\3\2\2\2\u064d"+
		"\u064e\3\2\2\2\u064e\u064f\7\t\2\2\u064f\u0650\7V\2\2\u0650\u0651\7\u0087"+
		"\2\2\u0651\u0652\7W\2\2\u0652\u0653\7X\2\2\u0653\u00e1\3\2\2\2\u0654\u0655"+
		"\7!\2\2\u0655\u0656\7\u0087\2\2\u0656\u0658\7R\2\2\u0657\u0659\5\u008c"+
		"G\2\u0658\u0657\3\2\2\2\u0658\u0659\3\2\2\2\u0659\u065a\3\2\2\2\u065a"+
		"\u065f\7S\2\2\u065b\u065c\7!\2\2\u065c\u065d\7\u0087\2\2\u065d\u065f\5"+
		"\u008eH\2\u065e\u0654\3\2\2\2\u065e\u065b\3\2\2\2\u065f\u00e3\3\2\2\2"+
		"\u0660\u0661\bs\1\2\u0661\u0662\5\u00e6t\2\u0662\u0667\3\2\2\2\u0663\u0664"+
		"\f\3\2\2\u0664\u0666\5\u00e6t\2\u0665\u0663\3\2\2\2\u0666\u0669\3\2\2"+
		"\2\u0667\u0665\3\2\2\2\u0667\u0668\3\2\2\2\u0668\u00e5\3\2\2\2\u0669\u0667"+
		"\3\2\2\2\u066a\u066b\7T\2\2\u066b\u066d\7T\2\2\u066c\u066e\5\u00eav\2"+
		"\u066d\u066c\3\2\2\2\u066d\u066e\3\2\2\2\u066e\u066f\3\2\2\2\u066f\u0670"+
		"\5\u00ecw\2\u0670\u0671\7U\2\2\u0671\u0672\7U\2\2\u0672\u0675\3\2\2\2"+
		"\u0673\u0675\5\u00e8u\2\u0674\u066a\3\2\2\2\u0674\u0673\3\2\2\2\u0675"+
		"\u00e7\3\2\2\2\u0676\u0677\7\7\2\2\u0677\u0678\7V\2\2\u0678\u067a\5\u0116"+
		"\u008c\2\u0679\u067b\7Z\2\2\u067a\u0679\3\2\2\2\u067a\u067b\3\2\2\2\u067b"+
		"\u067c\3\2\2\2\u067c\u067d\7W\2\2\u067d\u0687\3\2\2\2\u067e\u067f\7\7"+
		"\2\2\u067f\u0680\7W\2\2\u0680\u0682\5n8\2\u0681\u0683\7Z\2\2\u0682\u0681"+
		"\3\2\2\2\u0682\u0683\3\2\2\2\u0683\u0684\3\2\2\2\u0684\u0685\7W\2\2\u0685"+
		"\u0687\3\2\2\2\u0686\u0676\3\2\2\2\u0686\u067e\3\2\2\2\u0687\u00e9\3\2"+
		"\2\2\u0688\u0689\7J\2\2\u0689\u068a\5\u00f4{\2\u068a\u068b\7Y\2\2\u068b"+
		"\u00eb\3\2\2\2\u068c\u068e\bw\1\2\u068d\u068f\5\u00eex\2\u068e\u068d\3"+
		"\2\2\2\u068e\u068f\3\2\2\2\u068f\u0694\3\2\2\2\u0690\u0691\5\u00eex\2"+
		"\u0691\u0692\7Z\2\2\u0692\u0694\3\2\2\2\u0693\u068c\3\2\2\2\u0693\u0690"+
		"\3\2\2\2\u0694\u06a1\3\2\2\2\u0695\u0696\f\5\2\2\u0696\u0698\7\u0080\2"+
		"\2\u0697\u0699\5\u00eex\2\u0698\u0697\3\2\2\2\u0698\u0699\3\2\2\2\u0699"+
		"\u06a0\3\2\2\2\u069a\u069b\f\3\2\2\u069b\u069c\7\u0080\2\2\u069c\u069d"+
		"\5\u00eex\2\u069d\u069e\7Z\2\2\u069e\u06a0\3\2\2\2\u069f\u0695\3\2\2\2"+
		"\u069f\u069a\3\2\2\2\u06a0\u06a3\3\2\2\2\u06a1\u069f\3\2\2\2\u06a1\u06a2"+
		"\3\2\2\2\u06a2\u00ed\3\2\2\2\u06a3\u06a1\3\2\2\2\u06a4\u06a6\5\u00f0y"+
		"\2\u06a5\u06a7\5\u00f6|\2\u06a6\u06a5\3\2\2\2\u06a6\u06a7\3\2\2\2\u06a7"+
		"\u00ef\3\2\2\2\u06a8\u06ab\7\u008c\2\2\u06a9\u06ab\5\u00f2z\2\u06aa\u06a8"+
		"\3\2\2\2\u06aa\u06a9\3\2\2\2\u06ab\u00f1\3\2\2\2\u06ac\u06ad\5\u00f4{"+
		"\2\u06ad\u06ae\7\\\2\2\u06ae\u06af\7\u008c\2\2\u06af\u00f3\3\2\2\2\u06b0"+
		"\u06b1\7\u008c\2\2\u06b1\u00f5\3\2\2\2\u06b2\u06b4\7V\2\2\u06b3\u06b5"+
		"\5\u00f8}\2\u06b4\u06b3\3\2\2\2\u06b4\u06b5\3\2\2\2\u06b5\u06b6\3\2\2"+
		"\2\u06b6\u06b7\7W\2\2\u06b7\u00f7\3\2\2\2\u06b8\u06b9\b}\1\2\u06b9\u06ba"+
		"\5\u00fa~\2\u06ba\u06bf\3\2\2\2\u06bb\u06bc\f\3\2\2\u06bc\u06be\5\u00fa"+
		"~\2\u06bd\u06bb\3\2\2\2\u06be\u06c1\3\2\2\2\u06bf\u06bd\3\2\2\2\u06bf"+
		"\u06c0\3\2\2\2\u06c0\u00f9\3\2\2\2\u06c1\u06bf\3\2\2\2\u06c2\u06c4\7V"+
		"\2\2\u06c3\u06c5\5\u00f8}\2\u06c4\u06c3\3\2\2\2\u06c4\u06c5\3\2\2\2\u06c5"+
		"\u06c6\3\2\2\2\u06c6\u06d3\7W\2\2\u06c7\u06c9\7T\2\2\u06c8\u06ca\5\u00f8"+
		"}\2\u06c9\u06c8\3\2\2\2\u06c9\u06ca\3\2\2\2\u06ca\u06cb\3\2\2\2\u06cb"+
		"\u06d3\7U\2\2\u06cc\u06ce\7R\2\2\u06cd\u06cf\5\u00f8}\2\u06ce\u06cd\3"+
		"\2\2\2\u06ce\u06cf\3\2\2\2\u06cf\u06d0\3\2\2\2\u06d0\u06d3\7S\2\2\u06d1"+
		"\u06d3\n\b\2\2\u06d2\u06c2\3\2\2\2\u06d2\u06c7\3\2\2\2\u06d2\u06cc\3\2"+
		"\2\2\u06d2\u06d1\3\2\2\2\u06d3\u00fb\3\2\2\2\u06d4\u06d5\b\177\1\2\u06d5"+
		"\u06d6\5\u00fe\u0080\2\u06d6\u06dc\3\2\2\2\u06d7\u06d8\f\3\2\2\u06d8\u06d9"+
		"\7\u0080\2\2\u06d9\u06db\5\u00fe\u0080\2\u06da\u06d7\3\2\2\2\u06db\u06de"+
		"\3\2\2\2\u06dc\u06da\3\2\2\2\u06dc\u06dd\3\2\2\2\u06dd\u00fd\3\2\2\2\u06de"+
		"\u06dc\3\2\2\2\u06df\u06e1\5\u0100\u0081\2\u06e0\u06e2\5\u0136\u009c\2"+
		"\u06e1\u06e0\3\2\2\2\u06e1\u06e2\3\2\2\2\u06e2\u00ff\3\2\2\2\u06e3\u06e6"+
		"\5\u0102\u0082\2\u06e4\u06e6\5\u0104\u0083\2\u06e5\u06e3\3\2\2\2\u06e5"+
		"\u06e4\3\2\2\2\u06e6\u0101\3\2\2\2\u06e7\u06e8\5\u010e\u0088\2\u06e8\u06e9"+
		"\5\u0100\u0081\2\u06e9\u0103\3\2\2\2\u06ea\u06ec\b\u0083\1\2\u06eb\u06ed"+
		"\7Z\2\2\u06ec\u06eb\3\2\2\2\u06ec\u06ed\3\2\2\2\u06ed\u06ee\3\2\2\2\u06ee"+
		"\u06f0\5\22\n\2\u06ef\u06f1\5\u00e4s\2\u06f0\u06ef\3\2\2\2\u06f0\u06f1"+
		"\3\2\2\2\u06f1\u06f7\3\2\2\2\u06f2\u06f3\7V\2\2\u06f3\u06f4\5\u0102\u0082"+
		"\2\u06f4\u06f5\7W\2\2\u06f5\u06f7\3\2\2\2\u06f6\u06ea\3\2\2\2\u06f6\u06f2"+
		"\3\2\2\2\u06f7\u0705\3\2\2\2\u06f8\u06f9\f\5\2\2\u06f9\u06fb\7T\2\2\u06fa"+
		"\u06fc\5n8\2\u06fb\u06fa\3\2\2\2\u06fb\u06fc\3\2\2\2\u06fc\u06fd\3\2\2"+
		"\2\u06fd\u06ff\7U\2\2\u06fe\u0700\5\u00e4s\2\u06ff\u06fe\3\2\2\2\u06ff"+
		"\u0700\3\2\2\2\u0700\u0704\3\2\2\2\u0701\u0702\f\4\2\2\u0702\u0704\5\u0106"+
		"\u0084\2\u0703\u06f8\3\2\2\2\u0703\u0701\3\2\2\2\u0704\u0707\3\2\2\2\u0705"+
		"\u0703\3\2\2\2\u0705\u0706\3\2\2\2\u0706\u0105\3\2\2\2\u0707\u0705\3\2"+
		"\2\2\u0708\u0709\5\u0108\u0085\2\u0709\u070a\5\u010a\u0086\2\u070a\u0107"+
		"\3\2\2\2\u070b\u070c\7V\2\2\u070c\u070d\5\u0124\u0093\2\u070d\u070e\7"+
		"W\2\2\u070e\u0109\3\2\2\2\u070f\u0711\5\u0110\u0089\2\u0710\u070f\3\2"+
		"\2\2\u0710\u0711\3\2\2\2\u0711\u0713\3\2\2\2\u0712\u0714\5\u0114\u008b"+
		"\2\u0713\u0712\3\2\2\2\u0713\u0714\3\2\2\2\u0714\u0716\3\2\2\2\u0715\u0717"+
		"\5\u019c\u00cf\2\u0716\u0715\3\2\2\2\u0716\u0717\3\2\2\2\u0717\u0719\3"+
		"\2\2\2\u0718\u071a\5\u00e4s\2\u0719\u0718\3\2\2\2\u0719\u071a\3\2\2\2"+
		"\u071a\u010b\3\2\2\2\u071b\u071c\7\u0082\2\2\u071c\u071d\5\u0116\u008c"+
		"\2\u071d\u010d\3\2\2\2\u071e\u0720\7a\2\2\u071f\u0721\5\u00e4s\2\u0720"+
		"\u071f\3\2\2\2\u0720\u0721\3\2\2\2\u0721\u0723\3\2\2\2\u0722\u0724\5\u0110"+
		"\u0089\2\u0723\u0722\3\2\2\2\u0723\u0724\3\2\2\2\u0724\u0736\3\2\2\2\u0725"+
		"\u0727\7e\2\2\u0726\u0728\5\u00e4s\2\u0727\u0726\3\2\2\2\u0727\u0728\3"+
		"\2\2\2\u0728\u0736\3\2\2\2\u0729\u072b\7|\2\2\u072a\u072c\5\u00e4s\2\u072b"+
		"\u072a\3\2\2\2\u072b\u072c\3\2\2\2\u072c\u0736\3\2\2\2\u072d\u072e\5\30"+
		"\r\2\u072e\u0730\7a\2\2\u072f\u0731\5\u00e4s\2\u0730\u072f\3\2\2\2\u0730"+
		"\u0731\3\2\2\2\u0731\u0733\3\2\2\2\u0732\u0734\5\u0110\u0089\2\u0733\u0732"+
		"\3\2\2\2\u0733\u0734\3\2\2\2\u0734\u0736\3\2\2\2\u0735\u071e\3\2\2\2\u0735"+
		"\u0725\3\2\2\2\u0735\u0729\3\2\2\2\u0735\u072d\3\2\2\2\u0736\u010f\3\2"+
		"\2\2\u0737\u0739\5\u0112\u008a\2\u0738\u073a\5\u0110\u0089\2\u0739\u0738"+
		"\3\2\2\2\u0739\u073a\3\2\2\2\u073a\u0111\3\2\2\2\u073b\u073c\t\t\2\2\u073c"+
		"\u0113\3\2\2\2\u073d\u073e\7e\2\2\u073e\u073f\7|\2\2\u073f\u0115\3\2\2"+
		"\2\u0740\u0742\5\u00a8U\2\u0741\u0743\5\u011a\u008e\2\u0742\u0741\3\2"+
		"\2\2\u0742\u0743\3\2\2\2\u0743\u0117\3\2\2\2\u0744\u0746\5\u00acW\2\u0745"+
		"\u0747\5\u011a\u008e\2\u0746\u0745\3\2\2\2\u0746\u0747\3\2\2\2\u0747\u0119"+
		"\3\2\2\2\u0748\u0751\5\u011c\u008f\2\u0749\u074b\5\u011e\u0090\2\u074a"+
		"\u0749\3\2\2\2\u074a\u074b\3\2\2\2\u074b\u074c\3\2\2\2\u074c\u074d\5\u0106"+
		"\u0084\2\u074d\u074e\5\u010c\u0087\2\u074e\u0751\3\2\2\2\u074f\u0751\5"+
		"\u0120\u0091\2\u0750\u0748\3\2\2\2\u0750\u074a\3\2\2\2\u0750\u074f\3\2"+
		"\2\2\u0751\u011b\3\2\2\2\u0752\u0758\5\u011e\u0090\2\u0753\u0755\5\u010e"+
		"\u0088\2\u0754\u0756\5\u011c\u008f\2\u0755\u0754\3\2\2\2\u0755\u0756\3"+
		"\2\2\2\u0756\u0758\3\2\2\2\u0757\u0752\3\2\2\2\u0757\u0753\3\2\2\2\u0758"+
		"\u011d\3\2\2\2\u0759\u075a\b\u0090\1\2\u075a\u0768\5\u0106\u0084\2\u075b"+
		"\u075d\7T\2\2\u075c\u075e\5n8\2\u075d\u075c\3\2\2\2\u075d\u075e\3\2\2"+
		"\2\u075e\u075f\3\2\2\2\u075f\u0761\7U\2\2\u0760\u0762\5\u00e4s\2\u0761"+
		"\u0760\3\2\2\2\u0761\u0762\3\2\2\2\u0762\u0768\3\2\2\2\u0763\u0764\7V"+
		"\2\2\u0764\u0765\5\u011c\u008f\2\u0765\u0766\7W\2\2\u0766\u0768\3\2\2"+
		"\2\u0767\u0759\3\2\2\2\u0767\u075b\3\2\2\2\u0767\u0763\3\2\2\2\u0768\u0776"+
		"\3\2\2\2\u0769\u076a\f\6\2\2\u076a\u0775\5\u0106\u0084\2\u076b\u076c\f"+
		"\4\2\2\u076c\u076e\7T\2\2\u076d\u076f\5n8\2\u076e\u076d\3\2\2\2\u076e"+
		"\u076f\3\2\2\2\u076f\u0770\3\2\2\2\u0770\u0772\7U\2\2\u0771\u0773\5\u00e4"+
		"s\2\u0772\u0771\3\2\2\2\u0772\u0773\3\2\2\2\u0773\u0775\3\2\2\2\u0774"+
		"\u0769\3\2\2\2\u0774\u076b\3\2\2\2\u0775\u0778\3\2\2\2\u0776\u0774\3\2"+
		"\2\2\u0776\u0777\3\2\2\2\u0777\u011f\3\2\2\2\u0778\u0776\3\2\2\2\u0779"+
		"\u077e\5\u0122\u0092\2\u077a\u077b\5\u010e\u0088\2\u077b\u077c\5\u0120"+
		"\u0091\2\u077c\u077e\3\2\2\2\u077d\u0779\3\2\2\2\u077d\u077a\3\2\2\2\u077e"+
		"\u0121\3\2\2\2\u077f\u0780\b\u0092\1\2\u0780\u0781\7Z\2\2\u0781\u078f"+
		"\3\2\2\2\u0782\u0783\f\5\2\2\u0783\u078e\5\u0106\u0084\2\u0784\u0785\f"+
		"\4\2\2\u0785\u0787\7T\2\2\u0786\u0788\5n8\2\u0787\u0786\3\2\2\2\u0787"+
		"\u0788\3\2\2\2\u0788\u0789\3\2\2\2\u0789\u078b\7U\2\2\u078a\u078c\5\u00e4"+
		"s\2\u078b\u078a\3\2\2\2\u078b\u078c\3\2\2\2\u078c\u078e\3\2\2\2\u078d"+
		"\u0782\3\2\2\2\u078d\u0784\3\2\2\2\u078e\u0791\3\2\2\2\u078f\u078d\3\2"+
		"\2\2\u078f\u0790\3\2\2\2\u0790\u0123\3\2\2\2\u0791\u078f\3\2\2\2\u0792"+
		"\u0794\5\u0126\u0094\2\u0793\u0792\3\2\2\2\u0793\u0794\3\2\2\2\u0794\u0796"+
		"\3\2\2\2\u0795\u0797\7Z\2\2\u0796\u0795\3\2\2\2\u0796\u0797\3\2\2\2\u0797"+
		"\u079d\3\2\2\2\u0798\u0799\5\u0126\u0094\2\u0799\u079a\7\u0080\2\2\u079a"+
		"\u079b\7Z\2\2\u079b\u079d\3\2\2\2\u079c\u0793\3\2\2\2\u079c\u0798\3\2"+
		"\2\2\u079d\u0125\3\2\2\2\u079e\u079f\b\u0094\1\2\u079f\u07a0\5\u0128\u0095"+
		"\2\u07a0\u07a6\3\2\2\2\u07a1\u07a2\f\3\2\2\u07a2\u07a3\7\u0080\2\2\u07a3"+
		"\u07a5\5\u0128\u0095\2\u07a4\u07a1\3\2\2\2\u07a5\u07a8\3\2\2\2\u07a6\u07a4"+
		"\3\2\2\2\u07a6\u07a7\3\2\2\2\u07a7\u0127\3\2\2\2\u07a8\u07a6\3\2\2\2\u07a9"+
		"\u07ab\5\u00e4s\2\u07aa\u07a9\3\2\2\2\u07aa\u07ab\3\2\2\2\u07ab\u07ac"+
		"\3\2\2\2\u07ac\u07ad\5\u00a0Q\2\u07ad\u07ae\5\u0100\u0081\2\u07ae\u07c9"+
		"\3\2\2\2\u07af\u07b1\5\u00e4s\2\u07b0\u07af\3\2\2\2\u07b0\u07b1\3\2\2"+
		"\2\u07b1\u07b2\3\2\2\2\u07b2\u07b3\5\u00a0Q\2\u07b3\u07b4\5\u0100\u0081"+
		"\2\u07b4\u07b5\7i\2\2\u07b5\u07b6\5\u013a\u009e\2\u07b6\u07c9\3\2\2\2"+
		"\u07b7\u07b9\5\u00e4s\2\u07b8\u07b7\3\2\2\2\u07b8\u07b9\3\2\2\2\u07b9"+
		"\u07ba\3\2\2\2\u07ba\u07bc\5\u00a0Q\2\u07bb\u07bd\5\u011a\u008e\2\u07bc"+
		"\u07bb\3\2\2\2\u07bc\u07bd\3\2\2\2\u07bd\u07c9\3\2\2\2\u07be\u07c0\5\u00e4"+
		"s\2\u07bf\u07be\3\2\2\2\u07bf\u07c0\3\2\2\2\u07c0\u07c1\3\2\2\2\u07c1"+
		"\u07c3\5\u00a0Q\2\u07c2\u07c4\5\u011a\u008e\2\u07c3\u07c2\3\2\2\2\u07c3"+
		"\u07c4\3\2\2\2\u07c4\u07c5\3\2\2\2\u07c5\u07c6\7i\2\2\u07c6\u07c7\5\u013a"+
		"\u009e\2\u07c7\u07c9\3\2\2\2\u07c8\u07aa\3\2\2\2\u07c8\u07b0\3\2\2\2\u07c8"+
		"\u07b8\3\2\2\2\u07c8\u07bf\3\2\2\2\u07c9\u0129\3\2\2\2\u07ca\u07cc\5\u00e4"+
		"s\2\u07cb\u07ca\3\2\2\2\u07cb\u07cc\3\2\2\2\u07cc\u07ce\3\2\2\2\u07cd"+
		"\u07cf\5\u00a0Q\2\u07ce\u07cd\3\2\2\2\u07ce\u07cf\3\2\2\2\u07cf\u07d0"+
		"\3\2\2\2\u07d0\u07d2\5\u012c\u0097\2\u07d1\u07d3\5\u0154\u00ab\2\u07d2"+
		"\u07d1\3\2\2\2\u07d2\u07d3\3\2\2\2\u07d3\u07d4\3\2\2\2\u07d4\u07d5\5\u012e"+
		"\u0098\2\u07d5\u012b\3\2\2\2\u07d6\u07d7\5\22\n\2\u07d7\u07d8\5\u0108"+
		"\u0085\2\u07d8\u07da\5\u010a\u0086\2\u07d9\u07db\5\u010c\u0087\2\u07da"+
		"\u07d9\3\2\2\2\u07da\u07db\3\2\2\2\u07db\u012d\3\2\2\2\u07dc\u07e1\5\u0130"+
		"\u0099\2\u07dd\u07e1\5\u0194\u00cb\2\u07de\u07e1\5\u0132\u009a\2\u07df"+
		"\u07e1\5\u0134\u009b\2\u07e0\u07dc\3\2\2\2\u07e0\u07dd\3\2\2\2\u07e0\u07de"+
		"\3\2\2\2\u07e0\u07df\3\2\2\2\u07e1\u012f\3\2\2\2\u07e2\u07e4\5\u016a\u00b6"+
		"\2\u07e3\u07e2\3\2\2\2\u07e3\u07e4\3\2\2\2\u07e4\u07e5\3\2\2\2\u07e5\u07e6"+
		"\5z>\2\u07e6\u0131\3\2\2\2\u07e7\u07e8\7i\2\2\u07e8\u07e9\7\30\2\2\u07e9"+
		"\u07ea\7X\2\2\u07ea\u0133\3\2\2\2\u07eb\u07ec\7i\2\2\u07ec\u07ed\7\31"+
		"\2\2\u07ed\u07ee\7X\2\2\u07ee\u0135\3\2\2\2\u07ef\u07f0\5\u0138\u009d"+
		"\2\u07f0\u0137\3\2\2\2\u07f1\u07f2\7i\2\2\u07f2\u07f5\5\u013a\u009e\2"+
		"\u07f3\u07f5\5\u013e\u00a0\2\u07f4\u07f1\3\2\2\2\u07f4\u07f3\3\2\2\2\u07f5"+
		"\u0139\3\2\2\2\u07f6\u07f9\5h\65\2\u07f7\u07f9\5\u013e\u00a0\2\u07f8\u07f6"+
		"\3\2\2\2\u07f8\u07f7\3\2\2\2\u07f9\u013b\3\2\2\2\u07fa\u07fb\b\u009f\1"+
		"\2\u07fb\u07fd\5\u013a\u009e\2\u07fc\u07fe\7Z\2\2\u07fd\u07fc\3\2\2\2"+
		"\u07fd\u07fe\3\2\2\2\u07fe\u0807\3\2\2\2\u07ff\u0800\f\3\2\2\u0800\u0801"+
		"\7\u0080\2\2\u0801\u0803\5\u013a\u009e\2\u0802\u0804\7Z\2\2\u0803\u0802"+
		"\3\2\2\2\u0803\u0804\3\2\2\2\u0804\u0806\3\2\2\2\u0805\u07ff\3\2\2\2\u0806"+
		"\u0809\3\2\2\2\u0807\u0805\3\2\2\2\u0807\u0808\3\2\2\2\u0808\u013d\3\2"+
		"\2\2\u0809\u0807\3\2\2\2\u080a\u080b\7R\2\2\u080b\u080d\5\u013c\u009f"+
		"\2\u080c\u080e\7\u0080\2\2\u080d\u080c\3\2\2\2\u080d\u080e\3\2\2\2\u080e"+
		"\u080f\3\2\2\2\u080f\u0810\7S\2\2\u0810\u0814\3\2\2\2\u0811\u0812\7R\2"+
		"\2\u0812\u0814\7S\2\2\u0813\u080a\3\2\2\2\u0813\u0811\3\2\2\2\u0814\u013f"+
		"\3\2\2\2\u0815\u0818\5l\67\2\u0816\u0818\5\u013e\u00a0\2\u0817\u0815\3"+
		"\2\2\2\u0817\u0816\3\2\2\2\u0818\u0141\3\2\2\2\u0819\u081a\5\u0144\u00a3"+
		"\2\u081a\u081c\7R\2\2\u081b\u081d\5\u014c\u00a7\2\u081c\u081b\3\2\2\2"+
		"\u081c\u081d\3\2\2\2\u081d\u081e\3\2\2\2\u081e\u081f\7S\2\2\u081f\u0143"+
		"\3\2\2\2\u0820\u0822\5\u014a\u00a6\2\u0821\u0823\5\u00e4s\2\u0822\u0821"+
		"\3\2\2\2\u0822\u0823\3\2\2\2\u0823\u0824\3\2\2\2\u0824\u0826\5\u0146\u00a4"+
		"\2\u0825\u0827\5\u0148\u00a5\2\u0826\u0825\3\2\2\2\u0826\u0827\3\2\2\2"+
		"\u0827\u0829\3\2\2\2\u0828\u082a\5\u015a\u00ae\2\u0829\u0828\3\2\2\2\u0829"+
		"\u082a\3\2\2\2\u082a\u0833\3\2\2\2\u082b\u082d\5\u014a\u00a6\2\u082c\u082e"+
		"\5\u00e6t\2\u082d\u082c\3\2\2\2\u082d\u082e\3\2\2\2\u082e\u0830\3\2\2"+
		"\2\u082f\u0831\5\u015a\u00ae\2\u0830\u082f\3\2\2\2\u0830\u0831\3\2\2\2"+
		"\u0831\u0833\3\2\2\2\u0832\u0820\3\2\2\2\u0832\u082b\3\2\2\2\u0833\u0145"+
		"\3\2\2\2\u0834\u0836\5\30\r\2\u0835\u0834\3\2\2\2\u0835\u0836\3\2\2\2"+
		"\u0836\u0837\3\2\2\2\u0837\u0838\5\b\5\2\u0838\u0147\3\2\2\2\u0839\u083a"+
		"\7Q\2\2\u083a\u0149\3\2\2\2\u083b\u083c\t\n\2\2\u083c\u014b\3\2\2\2\u083d"+
		"\u083f\5\u014e\u00a8\2\u083e\u0840\5\u014c\u00a7\2\u083f\u083e\3\2\2\2"+
		"\u083f\u0840\3\2\2\2\u0840\u0847\3\2\2\2\u0841\u0842\5\u0162\u00b2\2\u0842"+
		"\u0844\7Y\2\2\u0843\u0845\5\u014c\u00a7\2\u0844\u0843\3\2\2\2\u0844\u0845"+
		"\3\2\2\2\u0845\u0847\3\2\2\2\u0846\u083d\3\2\2\2\u0846\u0841\3\2\2\2\u0847"+
		"\u014d\3\2\2\2\u0848\u084a\5\u00e4s\2\u0849\u0848\3\2\2\2\u0849\u084a"+
		"\3\2\2\2\u084a\u084c\3\2\2\2\u084b\u084d\5\u00a0Q\2\u084c\u084b\3\2\2"+
		"\2\u084c\u084d\3\2\2\2\u084d\u084f\3\2\2\2\u084e\u0850\5\u0150\u00a9\2"+
		"\u084f\u084e\3\2\2\2\u084f\u0850\3\2\2\2\u0850\u0851\3\2\2\2\u0851\u085a"+
		"\7X\2\2\u0852\u085a\5\u012a\u0096\2\u0853\u085a\5\u00d8m\2\u0854\u085a"+
		"\5\u0098M\2\u0855\u085a\5\u0178\u00bd\2\u0856\u085a\5\u0190\u00c9\2\u0857"+
		"\u085a\5\u0094K\2\u0858\u085a\5\u009aN\2\u0859\u0849\3\2\2\2\u0859\u0852"+
		"\3\2\2\2\u0859\u0853\3\2\2\2\u0859\u0854\3\2\2\2\u0859\u0855\3\2\2\2\u0859"+
		"\u0856\3\2\2\2\u0859\u0857\3\2\2\2\u0859\u0858\3\2\2\2\u085a\u014f\3\2"+
		"\2\2\u085b\u085c\b\u00a9\1\2\u085c\u085d\5\u0152\u00aa\2\u085d\u0863\3"+
		"\2\2\2\u085e\u085f\f\3\2\2\u085f\u0860\7\u0080\2\2\u0860\u0862\5\u0152"+
		"\u00aa\2\u0861\u085e\3\2\2\2\u0862\u0865\3\2\2\2\u0863\u0861\3\2\2\2\u0863"+
		"\u0864\3\2\2\2\u0864\u0151\3\2\2\2\u0865\u0863\3\2\2\2\u0866\u0868\5\u0100"+
		"\u0081\2\u0867\u0869\5\u0154\u00ab\2\u0868\u0867\3\2\2\2\u0868\u0869\3"+
		"\2\2\2\u0869\u086b\3\2\2\2\u086a\u086c\5\u0158\u00ad\2\u086b\u086a\3\2"+
		"\2\2\u086b\u086c\3\2\2\2\u086c\u087a\3\2\2\2\u086d\u086f\5\u0100\u0081"+
		"\2\u086e\u0870\5\u0138\u009d\2\u086f\u086e\3\2\2\2\u086f\u0870\3\2\2\2"+
		"\u0870\u087a\3\2\2\2\u0871\u0873\7\u008c\2\2\u0872\u0871\3\2\2\2\u0872"+
		"\u0873\3\2\2\2\u0873\u0875\3\2\2\2\u0874\u0876\5\u00e4s\2\u0875\u0874"+
		"\3\2\2\2\u0875\u0876\3\2\2\2\u0876\u0877\3\2\2\2\u0877\u0878\7Y\2\2\u0878"+
		"\u087a\5n8\2\u0879\u0866\3\2\2\2\u0879\u086d\3\2\2\2\u0879\u0872\3\2\2"+
		"\2\u087a\u0153\3\2\2\2\u087b\u087c\b\u00ab\1\2\u087c\u087d\5\u0156\u00ac"+
		"\2\u087d\u0882\3\2\2\2\u087e\u087f\f\3\2\2\u087f\u0881\5\u0156\u00ac\2"+
		"\u0880\u087e\3\2\2\2\u0881\u0884\3\2\2\2\u0882\u0880\3\2\2\2\u0882\u0883"+
		"\3\2\2\2\u0883\u0155\3\2\2\2\u0884\u0882\3\2\2\2\u0885\u0886\t\13\2\2"+
		"\u0886\u0157\3\2\2\2\u0887\u0888\7i\2\2\u0888\u0889\7\u0083\2\2\u0889"+
		"\u0159\3\2\2\2\u088a\u088b\7Y\2\2\u088b\u088c\5\u015c\u00af\2\u088c\u015b"+
		"\3\2\2\2\u088d\u088e\b\u00af\1\2\u088e\u0890\5\u015e\u00b0\2\u088f\u0891"+
		"\7Z\2\2\u0890\u088f\3\2\2\2\u0890\u0891\3\2\2\2\u0891\u089a\3\2\2\2\u0892"+
		"\u0893\f\3\2\2\u0893\u0894\7\u0080\2\2\u0894\u0896\5\u015e\u00b0\2\u0895"+
		"\u0897\7Z\2\2\u0896\u0895\3\2\2\2\u0896\u0897\3\2\2\2\u0897\u0899\3\2"+
		"\2\2\u0898\u0892\3\2\2\2\u0899\u089c\3\2\2\2\u089a\u0898\3\2\2\2\u089a"+
		"\u089b\3\2\2\2\u089b\u015d\3\2\2\2\u089c\u089a\3\2\2\2\u089d\u089f\5\u00e4"+
		"s\2\u089e\u089d\3\2\2\2\u089e\u089f\3\2\2\2\u089f\u08a0\3\2\2\2\u08a0"+
		"\u08b3\5\u0160\u00b1\2\u08a1\u08a3\5\u00e4s\2\u08a2\u08a1\3\2\2\2\u08a2"+
		"\u08a3\3\2\2\2\u08a3\u08a4\3\2\2\2\u08a4\u08a6\7K\2\2\u08a5\u08a7\5\u0162"+
		"\u00b2\2\u08a6\u08a5\3\2\2\2\u08a6\u08a7\3\2\2\2\u08a7\u08a8\3\2\2\2\u08a8"+
		"\u08b3\5\u0160\u00b1\2\u08a9\u08ab\5\u00e4s\2\u08aa\u08a9\3\2\2\2\u08aa"+
		"\u08ab\3\2\2\2\u08ab\u08ac\3\2\2\2\u08ac\u08ae\5\u0162\u00b2\2\u08ad\u08af"+
		"\7K\2\2\u08ae\u08ad\3\2\2\2\u08ae\u08af\3\2\2\2\u08af\u08b0\3\2\2\2\u08b0"+
		"\u08b1\5\u0160\u00b1\2\u08b1\u08b3\3\2\2\2\u08b2\u089e\3\2\2\2\u08b2\u08a2"+
		"\3\2\2\2\u08b2\u08aa\3\2\2\2\u08b3\u015f\3\2\2\2\u08b4\u08b6\5\30\r\2"+
		"\u08b5\u08b4\3\2\2\2\u08b5\u08b6\3\2\2\2\u08b6\u08b7\3\2\2\2\u08b7\u08be"+
		"\5\b\5\2\u08b8\u08b9\5\30\r\2\u08b9\u08ba\7?\2\2\u08ba\u08bb\5\u0182\u00c2"+
		"\2\u08bb\u08be\3\2\2\2\u08bc\u08be\5\u00b2Z\2\u08bd\u08b5\3\2\2\2\u08bd"+
		"\u08b8\3\2\2\2\u08bd\u08bc\3\2\2\2\u08be\u0161\3\2\2\2\u08bf\u08c0\t\f"+
		"\2\2\u08c0\u0163\3\2\2\2\u08c1\u08c2\7\60\2\2\u08c2\u08c3\5\u0166\u00b4"+
		"\2\u08c3\u0165\3\2\2\2\u08c4\u08c6\5\u00a8U\2\u08c5\u08c7\5\u0168\u00b5"+
		"\2\u08c6\u08c5\3\2\2\2\u08c6\u08c7\3\2\2\2\u08c7\u0167\3\2\2\2\u08c8\u08ca"+
		"\5\u010e\u0088\2\u08c9\u08cb\5\u0168\u00b5\2\u08ca\u08c9\3\2\2\2\u08ca"+
		"\u08cb\3\2\2\2\u08cb\u0169\3\2\2\2\u08cc\u08cd\7Y\2\2\u08cd\u08ce\5\u016c"+
		"\u00b7\2\u08ce\u016b\3\2\2\2\u08cf\u08d0\b\u00b7\1\2\u08d0\u08d2\5\u016e"+
		"\u00b8\2\u08d1\u08d3\7Z\2\2\u08d2\u08d1\3\2\2\2\u08d2\u08d3\3\2\2\2\u08d3"+
		"\u08dc\3\2\2\2\u08d4\u08d5\f\3\2\2\u08d5\u08d6\7\u0080\2\2\u08d6\u08d8"+
		"\5\u016e\u00b8\2\u08d7\u08d9\7Z\2\2\u08d8\u08d7\3\2\2\2\u08d8\u08d9\3"+
		"\2\2\2\u08d9\u08db\3\2\2\2\u08da\u08d4\3\2\2\2\u08db\u08de\3\2\2\2\u08dc"+
		"\u08da\3\2\2\2\u08dc\u08dd\3\2\2\2\u08dd\u016d\3\2\2\2\u08de\u08dc\3\2"+
		"\2\2\u08df\u08e0\5\u0170\u00b9\2\u08e0\u08e2\7V\2\2\u08e1\u08e3\5\64\33"+
		"\2\u08e2\u08e1\3\2\2\2\u08e2\u08e3\3\2\2\2\u08e3\u08e4\3\2\2\2\u08e4\u08e5"+
		"\7W\2\2\u08e5\u08e6\5\u0170\u00b9\2\u08e6\u08e7\5\u013e\u00a0\2\u08e7"+
		"\u016f\3\2\2\2\u08e8\u08eb\5\u0160\u00b1\2\u08e9\u08eb\7\u008c\2\2\u08ea"+
		"\u08e8\3\2\2\2\u08ea\u08e9\3\2\2\2\u08eb\u0171\3\2\2\2\u08ec\u08ed\7\60"+
		"\2\2\u08ed\u08ee\5\u0174\u00bb\2\u08ee\u0173\3\2\2\2\u08ef\u0920\7-\2"+
		"\2\u08f0\u0920\7\31\2\2\u08f1\u08f2\7-\2\2\u08f2\u08f3\7R\2\2\u08f3\u0920"+
		"\7U\2\2\u08f4\u08f5\7\31\2\2\u08f5\u08f6\7R\2\2\u08f6\u0920\7U\2\2\u08f7"+
		"\u0920\7_\2\2\u08f8\u0920\7`\2\2\u08f9\u0920\7a\2\2\u08fa\u0920\7b\2\2"+
		"\u08fb\u0920\7c\2\2\u08fc\u0920\7d\2\2\u08fd\u0920\7e\2\2\u08fe\u0920"+
		"\7f\2\2\u08ff\u0920\7g\2\2\u0900\u0920\7h\2\2\u0901\u0920\7i\2\2\u0902"+
		"\u0920\7j\2\2\u0903\u0920\7k\2\2\u0904\u0920\7l\2\2\u0905\u0920\7m\2\2"+
		"\u0906\u0920\7n\2\2\u0907\u0920\7o\2\2\u0908\u0920\7p\2\2\u0909\u0920"+
		"\7q\2\2\u090a\u0920\7r\2\2\u090b\u0920\7s\2\2\u090c\u0920\7t\2\2\u090d"+
		"\u0920\7u\2\2\u090e\u0920\7w\2\2\u090f\u0920\7v\2\2\u0910\u0920\7x\2\2"+
		"\u0911\u0920\7y\2\2\u0912\u0920\7z\2\2\u0913\u0920\7{\2\2\u0914\u0920"+
		"\7|\2\2\u0915\u0920\7}\2\2\u0916\u0920\7~\2\2\u0917\u0920\7\177\2\2\u0918"+
		"\u0920\7\u0080\2\2\u0919\u0920\7\u0081\2\2\u091a\u0920\7\u0082\2\2\u091b"+
		"\u091c\7V\2\2\u091c\u0920\7W\2\2\u091d\u091e\7T\2\2\u091e\u0920\7U\2\2"+
		"\u091f\u08ef\3\2\2\2\u091f\u08f0\3\2\2\2\u091f\u08f1\3\2\2\2\u091f\u08f4"+
		"\3\2\2\2\u091f\u08f7\3\2\2\2\u091f\u08f8\3\2\2\2\u091f\u08f9\3\2\2\2\u091f"+
		"\u08fa\3\2\2\2\u091f\u08fb\3\2\2\2\u091f\u08fc\3\2\2\2\u091f\u08fd\3\2"+
		"\2\2\u091f\u08fe\3\2\2\2\u091f\u08ff\3\2\2\2\u091f\u0900\3\2\2\2\u091f"+
		"\u0901\3\2\2\2\u091f\u0902\3\2\2\2\u091f\u0903\3\2\2\2\u091f\u0904\3\2"+
		"\2\2\u091f\u0905\3\2\2\2\u091f\u0906\3\2\2\2\u091f\u0907\3\2\2\2\u091f"+
		"\u0908\3\2\2\2\u091f\u0909\3\2\2\2\u091f\u090a\3\2\2\2\u091f\u090b\3\2"+
		"\2\2\u091f\u090c\3\2\2\2\u091f\u090d\3\2\2\2\u091f\u090e\3\2\2\2\u091f"+
		"\u090f\3\2\2\2\u091f\u0910\3\2\2\2\u091f\u0911\3\2\2\2\u091f\u0912\3\2"+
		"\2\2\u091f\u0913\3\2\2\2\u091f\u0914\3\2\2\2\u091f\u0915\3\2\2\2\u091f"+
		"\u0916\3\2\2\2\u091f\u0917\3\2\2\2\u091f\u0918\3\2\2\2\u091f\u0919\3\2"+
		"\2\2\u091f\u091a\3\2\2\2\u091f\u091b\3\2\2\2\u091f\u091d\3\2\2\2\u0920"+
		"\u0175\3\2\2\2\u0921\u0922\7\60\2\2\u0922\u0923\7\u0087\2\2\u0923\u0927"+
		"\7\u008c\2\2\u0924\u0925\7\60\2\2\u0925\u0927\7\u008b\2\2\u0926\u0921"+
		"\3\2\2\2\u0926\u0924\3\2\2\2\u0927\u0177\3\2\2\2\u0928\u0929\7?\2\2\u0929"+
		"\u092a\7j\2\2\u092a\u092b\5\u017a\u00be\2\u092b\u092c\7k\2\2\u092c\u092d"+
		"\5\u008eH\2\u092d\u0179\3\2\2\2\u092e\u092f\b\u00be\1\2\u092f\u0930\5"+
		"\u017c\u00bf\2\u0930\u0936\3\2\2\2\u0931\u0932\f\3\2\2\u0932\u0933\7\u0080"+
		"\2\2\u0933\u0935\5\u017c\u00bf\2\u0934\u0931\3\2\2\2\u0935\u0938\3\2\2"+
		"\2\u0936\u0934\3\2\2\2\u0936\u0937\3\2\2\2\u0937\u017b\3\2\2\2\u0938\u0936"+
		"\3\2\2\2\u0939\u093c\5\u017e\u00c0\2\u093a\u093c\5\u0128\u0095\2\u093b"+
		"\u0939\3\2\2\2\u093b\u093a\3\2\2\2\u093c\u017d\3\2\2\2\u093d\u093f\5\u0180"+
		"\u00c1\2\u093e\u0940\7Z\2\2\u093f\u093e\3\2\2\2\u093f\u0940\3\2\2\2\u0940"+
		"\u0942\3\2\2\2\u0941\u0943\7\u008c\2\2\u0942\u0941\3\2\2\2\u0942\u0943"+
		"\3\2\2\2\u0943\u0962\3\2\2\2\u0944\u0946\5\u0180\u00c1\2\u0945\u0947\7"+
		"\u008c\2\2\u0946\u0945\3\2\2\2\u0946\u0947\3\2\2\2\u0947\u0948\3\2\2\2"+
		"\u0948\u0949\7i\2\2\u0949\u094a\5\u0116\u008c\2\u094a\u0962\3\2\2\2\u094b"+
		"\u094c\7?\2\2\u094c\u094d\7j\2\2\u094d\u094e\5\u017a\u00be\2\u094e\u094f"+
		"\7k\2\2\u094f\u0951\5\u0180\u00c1\2\u0950\u0952\7Z\2\2\u0951\u0950\3\2"+
		"\2\2\u0951\u0952\3\2\2\2\u0952\u0954\3\2\2\2\u0953\u0955\7\u008c\2\2\u0954"+
		"\u0953\3\2\2\2\u0954\u0955\3\2\2\2\u0955\u0962\3\2\2\2\u0956\u0957\7?"+
		"\2\2\u0957\u0958\7j\2\2\u0958\u0959\5\u017a\u00be\2\u0959\u095a\7k\2\2"+
		"\u095a\u095c\5\u0180\u00c1\2\u095b\u095d\7\u008c\2\2\u095c\u095b\3\2\2"+
		"\2\u095c\u095d\3\2\2\2\u095d\u095e\3\2\2\2\u095e\u095f\7i\2\2\u095f\u0960"+
		"\5\22\n\2\u0960\u0962\3\2\2\2\u0961\u093d\3\2\2\2\u0961\u0944\3\2\2\2"+
		"\u0961\u094b\3\2\2\2\u0961\u0956\3\2\2\2\u0962\u017f\3\2\2\2\u0963\u0964"+
		"\t\r\2\2\u0964\u0181\3\2\2\2\u0965\u0966\5\f\7\2\u0966\u0968\7j\2\2\u0967"+
		"\u0969\5\u0186\u00c4\2\u0968\u0967\3\2\2\2\u0968\u0969\3\2\2\2\u0969\u096a"+
		"\3\2\2\2\u096a\u096b\7k\2\2\u096b\u0183\3\2\2\2\u096c\u097c\5\u0182\u00c2"+
		"\2\u096d\u096e\5\u0172\u00ba\2\u096e\u0970\7j\2\2\u096f\u0971\5\u0186"+
		"\u00c4\2\u0970\u096f\3\2\2\2\u0970\u0971\3\2\2\2\u0971\u0972\3\2\2\2\u0972"+
		"\u0973\7k\2\2\u0973\u097c\3\2\2\2\u0974\u0975\5\u0176\u00bc\2\u0975\u0977";
	private static final String _serializedATNSegment1 =
		"\7j\2\2\u0976\u0978\5\u0186\u00c4\2\u0977\u0976\3\2\2\2\u0977\u0978\3"+
		"\2\2\2\u0978\u0979\3\2\2\2\u0979\u097a\7k\2\2\u097a\u097c\3\2\2\2\u097b"+
		"\u096c\3\2\2\2\u097b\u096d\3\2\2\2\u097b\u0974\3\2\2\2\u097c\u0185\3\2"+
		"\2\2\u097d\u097e\b\u00c4\1\2\u097e\u0980\5\u0188\u00c5\2\u097f\u0981\7"+
		"Z\2\2\u0980\u097f\3\2\2\2\u0980\u0981\3\2\2\2\u0981\u098a\3\2\2\2\u0982"+
		"\u0983\f\3\2\2\u0983\u0984\7\u0080\2\2\u0984\u0986\5\u0188\u00c5\2\u0985"+
		"\u0987\7Z\2\2\u0986\u0985\3\2\2\2\u0986\u0987\3\2\2\2\u0987\u0989\3\2"+
		"\2\2\u0988\u0982\3\2\2\2\u0989\u098c\3\2\2\2\u098a\u0988\3\2\2\2\u098a"+
		"\u098b\3\2\2\2\u098b\u0187\3\2\2\2\u098c\u098a\3\2\2\2\u098d\u0991\5n"+
		"8\2\u098e\u0991\5\u0116\u008c\2\u098f\u0991\5\22\n\2\u0990\u098d\3\2\2"+
		"\2\u0990\u098e\3\2\2\2\u0990\u098f\3\2\2\2\u0991\u0189\3\2\2\2\u0992\u0993"+
		"\7G\2\2\u0993\u0994\5\30\r\2\u0994\u0995\7\u008c\2\2\u0995\u099e\3\2\2"+
		"\2\u0996\u0997\7G\2\2\u0997\u0999\5\30\r\2\u0998\u099a\7?\2\2\u0999\u0998"+
		"\3\2\2\2\u0999\u099a\3\2\2\2\u099a\u099b\3\2\2\2\u099b\u099c\5\u0182\u00c2"+
		"\2\u099c\u099e\3\2\2\2\u099d\u0992\3\2\2\2\u099d\u0996\3\2\2\2\u099e\u018b"+
		"\3\2\2\2\u099f\u09a1\7!\2\2\u09a0\u099f\3\2\2\2\u09a0\u09a1\3\2\2\2\u09a1"+
		"\u09a2\3\2\2\2\u09a2\u09a3\7?\2\2\u09a3\u09a4\5\u008eH\2\u09a4\u018d\3"+
		"\2\2\2\u09a5\u09a6\7?\2\2\u09a6\u09a7\7j\2\2\u09a7\u09a8\7k\2\2\u09a8"+
		"\u09a9\5\u008eH\2\u09a9\u018f\3\2\2\2\u09aa\u09ac\7\37\2\2\u09ab\u09aa"+
		"\3\2\2\2\u09ab\u09ac\3\2\2\2\u09ac\u09ad\3\2\2\2\u09ad\u09ae\5\f\7\2\u09ae"+
		"\u09af\7V\2\2\u09af\u09b0\5\u0124\u0093\2\u09b0\u09b1\7W\2\2\u09b1\u09b2"+
		"\7\u0082\2\2\u09b2\u09b3\5\u0182\u00c2\2\u09b3\u09b4\7X\2\2\u09b4\u0191"+
		"\3\2\2\2\u09b5\u09b6\7D\2\2\u09b6\u09b7\5z>\2\u09b7\u09b8\5\u0196\u00cc"+
		"\2\u09b8\u0193\3\2\2\2\u09b9\u09bb\7D\2\2\u09ba\u09bc\5\u016a\u00b6\2"+
		"\u09bb\u09ba\3\2\2\2\u09bb\u09bc\3\2\2\2\u09bc\u09bd\3\2\2\2\u09bd\u09be"+
		"\5z>\2\u09be\u09bf\5\u0196\u00cc\2\u09bf\u0195\3\2\2\2\u09c0\u09c2\5\u0198"+
		"\u00cd\2\u09c1\u09c3\5\u0196\u00cc\2\u09c2\u09c1\3\2\2\2\u09c2\u09c3\3"+
		"\2\2\2\u09c3\u0197\3\2\2\2\u09c4\u09c5\7\16\2\2\u09c5\u09c6\7V\2\2\u09c6"+
		"\u09c7\5\u019a\u00ce\2\u09c7\u09c8\7W\2\2\u09c8\u09c9\5z>\2\u09c9\u0199"+
		"\3\2\2\2\u09ca\u09cc\5\u00e4s\2\u09cb\u09ca\3\2\2\2\u09cb\u09cc\3\2\2"+
		"\2\u09cc\u09cd\3\2\2\2\u09cd\u09ce\5\u00a8U\2\u09ce\u09cf\5\u0100\u0081"+
		"\2\u09cf\u09d9\3\2\2\2\u09d0\u09d2\5\u00e4s\2\u09d1\u09d0\3\2\2\2\u09d1"+
		"\u09d2\3\2\2\2\u09d2\u09d3\3\2\2\2\u09d3\u09d5\5\u00a8U\2\u09d4\u09d6"+
		"\5\u011a\u008e\2\u09d5\u09d4\3\2\2\2\u09d5\u09d6\3\2\2\2\u09d6\u09d9\3"+
		"\2\2\2\u09d7\u09d9\7Z\2\2\u09d8\u09cb\3\2\2\2\u09d8\u09d1\3\2\2\2\u09d8"+
		"\u09d7\3\2\2\2\u09d9\u019b\3\2\2\2\u09da\u09db\7.\2\2\u09db\u09dc\7V\2"+
		"\2\u09dc\u09dd\5n8\2\u09dd\u09de\7W\2\2\u09de\u09e4\3\2\2\2\u09df\u09e4"+
		"\7.\2\2\u09e0\u09e1\7B\2\2\u09e1\u09e2\7V\2\2\u09e2\u09e4\7W\2\2\u09e3"+
		"\u09da\3\2\2\2\u09e3\u09df\3\2\2\2\u09e3\u09e0\3\2\2\2\u09e4\u019d\3\2"+
		"\2\2\u09e5\u09e6\b\u00d0\1\2\u09e6\u09e7\7\u008c\2\2\u09e7\u09ed\3\2\2"+
		"\2\u09e8\u09e9\f\3\2\2\u09e9\u09ea\7\u0080\2\2\u09ea\u09ec\7\u008c\2\2"+
		"\u09eb\u09e8\3\2\2\2\u09ec\u09ef\3\2\2\2\u09ed\u09eb\3\2\2\2\u09ed\u09ee"+
		"\3\2\2\2\u09ee\u019f\3\2\2\2\u09ef\u09ed\3\2\2\2\u09f0\u09f8\5\u01a2\u00d2"+
		"\2\u09f1\u09f8\7\u0085\2\2\u09f2\u09f8\7\u0086\2\2\u09f3\u09f8\7\u0087"+
		"\2\2\u09f4\u09f8\5\u01a4\u00d3\2\u09f5\u09f8\5\u01a6\u00d4\2\u09f6\u09f8"+
		"\5\u01a8\u00d5\2\u09f7\u09f0\3\2\2\2\u09f7\u09f1\3\2\2\2\u09f7\u09f2\3"+
		"\2\2\2\u09f7\u09f3\3\2\2\2\u09f7\u09f4\3\2\2\2\u09f7\u09f5\3\2\2\2\u09f7"+
		"\u09f6\3\2\2\2\u09f8\u01a1\3\2\2\2\u09f9\u09fa\t\16\2\2\u09fa\u01a3\3"+
		"\2\2\2\u09fb\u09fc\t\17\2\2\u09fc\u01a5\3\2\2\2\u09fd\u09fe\7/\2\2\u09fe"+
		"\u01a7\3\2\2\2\u09ff\u0a00\t\20\2\2\u0a00\u01a9\3\2\2\2\u0143\u01ae\u01b4"+
		"\u01bb\u01c8\u01cc\u01d7\u01db\u01e0\u01ed\u01f2\u01f8\u0200\u0203\u0206"+
		"\u0209\u0211\u0218\u021e\u0222\u0229\u022f\u0232\u024b\u0254\u025b\u028b"+
		"\u0295\u029b\u02a1\u02ae\u02b0\u02b6\u02c8\u02e6\u02eb\u02ef\u02f3\u02f6"+
		"\u02fa\u0300\u0302\u030a\u030e\u0317\u031e\u0322\u0327\u032b\u032e\u0333"+
		"\u0339\u0346\u0351\u0353\u0362\u0364\u0370\u0372\u037e\u0380\u0392\u0394"+
		"\u03a0\u03a2\u03ad\u03b8\u03c3\u03ce\u03d9\u03e3\u03e7\u03ef\u03fb\u0402"+
		"\u0406\u040a\u040e\u0412\u0417\u041a\u041e\u0422\u0428\u042b\u0431\u0439"+
		"\u043e\u0441\u0447\u0452\u0457\u045b\u0463\u0467\u0472\u0478\u048c\u0490"+
		"\u049d\u04a0\u04a6\u04aa\u04b0\u04b3\u04c0\u04c6\u04d1\u04df\u04e9\u04ec"+
		"\u04f4\u04fc\u0506\u050a\u0512\u0522\u0530\u0534\u0539\u0543\u0547\u054c"+
		"\u0551\u0555\u055a\u055d\u0565\u0577\u057d\u0588\u058c\u058f\u0599\u059f"+
		"\u05a2\u05a7\u05b1\u05b5\u05b8\u05bb\u05be\u05c4\u05c7\u05cb\u05d4\u05e1"+
		"\u05e9\u05ed\u05f2\u05f5\u05f9\u0601\u0605\u0619\u0622\u062d\u0633\u0637"+
		"\u063b\u0641\u0646\u064c\u0658\u065e\u0667\u066d\u0674\u067a\u0682\u0686"+
		"\u068e\u0693\u0698\u069f\u06a1\u06a6\u06aa\u06b4\u06bf\u06c4\u06c9\u06ce"+
		"\u06d2\u06dc\u06e1\u06e5\u06ec\u06f0\u06f6\u06fb\u06ff\u0703\u0705\u0710"+
		"\u0713\u0716\u0719\u0720\u0723\u0727\u072b\u0730\u0733\u0735\u0739\u0742"+
		"\u0746\u074a\u0750\u0755\u0757\u075d\u0761\u0767\u076e\u0772\u0774\u0776"+
		"\u077d\u0787\u078b\u078d\u078f\u0793\u0796\u079c\u07a6\u07aa\u07b0\u07b8"+
		"\u07bc\u07bf\u07c3\u07c8\u07cb\u07ce\u07d2\u07da\u07e0\u07e3\u07f4\u07f8"+
		"\u07fd\u0803\u0807\u080d\u0813\u0817\u081c\u0822\u0826\u0829\u082d\u0830"+
		"\u0832\u0835\u083f\u0844\u0846\u0849\u084c\u084f\u0859\u0863\u0868\u086b"+
		"\u086f\u0872\u0875\u0879\u0882\u0890\u0896\u089a\u089e\u08a2\u08a6\u08aa"+
		"\u08ae\u08b2\u08b5\u08bd\u08c6\u08ca\u08d2\u08d8\u08dc\u08e2\u08ea\u091f"+
		"\u0926\u0936\u093b\u093f\u0942\u0946\u0951\u0954\u095c\u0961\u0968\u0970"+
		"\u0977\u097b\u0980\u0986\u098a\u0990\u0999\u099d\u09a0\u09ab\u09bb\u09c2"+
		"\u09cb\u09d1\u09d5\u09d8\u09e3\u09ed\u09f7";
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