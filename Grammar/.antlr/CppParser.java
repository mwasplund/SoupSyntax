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
		Void=74, Volatile=75, WChar=76, While=77, Override=78, Final=79, OpenBrace=80, 
		CloseBrace=81, OpenBracket=82, CloseBracket=83, OpenParenthesis=84, CloseParenthesis=85, 
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
		RULE_emptyDeclaration = 80, RULE_attributeDeclaration = 81, RULE_declarationModifier = 82, 
		RULE_declarationSpecifierSequence = 83, RULE_leadingDeclarationModifierSequence = 84, 
		RULE_trailingDeclarationModifierSequence = 85, RULE_declarationModifierSequence = 86, 
		RULE_storageClassSpecifier = 87, RULE_functionSpecifier = 88, RULE_typeSpecifier = 89, 
		RULE_typeSpecifierSequence = 90, RULE_definingTypeSpecifier = 91, RULE_definingTypeSpecifierSequence = 92, 
		RULE_simpleTypeSpecifier = 93, RULE_typeName = 94, RULE_declarationTypeSpecifier = 95, 
		RULE_elaboratedTypeSpecifier = 96, RULE_enumSpecifier = 97, RULE_enumHead = 98, 
		RULE_enumHeadName = 99, RULE_opaqueEnumDeclaration = 100, RULE_enumKey = 101, 
		RULE_enumBase = 102, RULE_enumeratorList = 103, RULE_enumeratorDefinition = 104, 
		RULE_enumerator = 105, RULE_namespaceDefinition = 106, RULE_namedNamespaceDefinition = 107, 
		RULE_unnamedNamespaceDefinition = 108, RULE_nestedNamespaceDefinition = 109, 
		RULE_enclosingNamespaceSpecifier = 110, RULE_namespaceBody = 111, RULE_namespaceAliasDefinition = 112, 
		RULE_qualifiedNamespaceSpecifier = 113, RULE_usingDeclaration = 114, RULE_usingDeclaratorList = 115, 
		RULE_usingDeclarator = 116, RULE_usingDirective = 117, RULE_asmDefinition = 118, 
		RULE_linkageSpecification = 119, RULE_attributeSpecifierSequence = 120, 
		RULE_attributeSpecifier = 121, RULE_alignmentSpecifier = 122, RULE_attributeUsingPrefix = 123, 
		RULE_attributeList = 124, RULE_attribute = 125, RULE_attributeToken = 126, 
		RULE_attributeScopedToken = 127, RULE_attributeNamespace = 128, RULE_attributeArgumentClause = 129, 
		RULE_balancedTokenSequence = 130, RULE_balancedToken = 131, RULE_initializerDeclaratorList = 132, 
		RULE_initializerDeclarator = 133, RULE_declarator = 134, RULE_pointerDeclarator = 135, 
		RULE_noPointerDeclarator = 136, RULE_parametersAndQualifiers = 137, RULE_functionParameters = 138, 
		RULE_functionQualifiers = 139, RULE_trailingReturnType = 140, RULE_pointerOperator = 141, 
		RULE_constVolatileQualifierSequence = 142, RULE_constVolatileQualifier = 143, 
		RULE_referenceQualifier = 144, RULE_typeIdentifier = 145, RULE_definingTypeIdentifier = 146, 
		RULE_abstractDeclarator = 147, RULE_pointerAbstractDeclarator = 148, RULE_noPointerAbstractDeclarator = 149, 
		RULE_abstractPackDeclarator = 150, RULE_noPointerAbstractPackDeclarator = 151, 
		RULE_parameterDeclarationClause = 152, RULE_parameterDeclarationList = 153, 
		RULE_parameterDeclaration = 154, RULE_functionDefinition = 155, RULE_functionDeclarator = 156, 
		RULE_functionBody = 157, RULE_regularFunctionBody = 158, RULE_explicitlyDefaultedFunction = 159, 
		RULE_deletedFunction = 160, RULE_initializer = 161, RULE_braceOrEqualInitializer = 162, 
		RULE_initializerClause = 163, RULE_initializerList = 164, RULE_bracedInitializerList = 165, 
		RULE_expressionOrBracedInitializerList = 166, RULE_classSpecifier = 167, 
		RULE_classHead = 168, RULE_classHeadName = 169, RULE_classVirtualSpecifier = 170, 
		RULE_classKey = 171, RULE_memberSpecification = 172, RULE_memberDeclaration = 173, 
		RULE_memberDeclaratorList = 174, RULE_memberDeclarator = 175, RULE_virtualSpecifierSequence = 176, 
		RULE_virtualSpecifier = 177, RULE_pureSpecifier = 178, RULE_baseClause = 179, 
		RULE_baseSpecifierList = 180, RULE_baseSpecifier = 181, RULE_classOrDecltype = 182, 
		RULE_accessSpecifier = 183, RULE_conversionFunctionIdentifier = 184, RULE_conversionTypeIdentifier = 185, 
		RULE_conversionDeclarator = 186, RULE_constructorInitializer = 187, RULE_memberInitializerList = 188, 
		RULE_memberInitializer = 189, RULE_memberInitializerIdentifier = 190, 
		RULE_operatorFunctionIdentifier = 191, RULE_anyOperator = 192, RULE_literalOperatorIdentifier = 193, 
		RULE_templateDeclaration = 194, RULE_templateParameterList = 195, RULE_templateParameter = 196, 
		RULE_typeParameter = 197, RULE_typeParameterKey = 198, RULE_simpleTemplateIdentifier = 199, 
		RULE_templateIdentifier = 200, RULE_templateArgumentList = 201, RULE_templateArgument = 202, 
		RULE_typenameSpecifier = 203, RULE_explicitInstantiation = 204, RULE_explicitSpecialization = 205, 
		RULE_deductionGuide = 206, RULE_tryBlock = 207, RULE_functionTryBlock = 208, 
		RULE_handlerSequence = 209, RULE_handler = 210, RULE_exceptionDeclaration = 211, 
		RULE_noExceptionSpecifier = 212, RULE_identifierList = 213, RULE_literal = 214, 
		RULE_integerLiteral = 215, RULE_booleanLiteral = 216, RULE_pointerLiteral = 217, 
		RULE_userDefinedLiteral = 218;
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
		"declarationModifier", "declarationSpecifierSequence", "leadingDeclarationModifierSequence", 
		"trailingDeclarationModifierSequence", "declarationModifierSequence", 
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
		"Volatile", "WChar", "While", "Override", "Final", "OpenBrace", "CloseBrace", 
		"OpenBracket", "CloseBracket", "OpenParenthesis", "CloseParenthesis", 
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
		enterRule(_localctx, 2, RULE_namespaceAlias);
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
		enterRule(_localctx, 4, RULE_className);
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
			setState(451);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (OpenBracket - 67)) | (1L << (OpenParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
				{
				setState(450);
				declarationSequence(0);
				}
			}

			setState(453);
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
		enterRule(_localctx, 10, RULE_primaryExpression);
		try {
			setState(464);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(455);
				literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(456);
				match(This);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(457);
				match(OpenParenthesis);
				setState(458);
				expression(0);
				setState(459);
				match(CloseParenthesis);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(461);
				identifierExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(462);
				lambdaExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(463);
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
			setState(468);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(466);
				unqualifiedIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(467);
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
		enterRule(_localctx, 14, RULE_unqualifiedIdentifier);
		try {
			setState(479);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(470);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(471);
				operatorFunctionIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(472);
				conversionFunctionIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(473);
				literalOperatorIdentifier();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(474);
				match(Tilde);
				setState(475);
				className();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(476);
				match(Tilde);
				setState(477);
				declarationTypeSpecifier();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
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
		enterRule(_localctx, 16, RULE_qualifiedIdentifier);
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
		enterRule(_localctx, 18, RULE_nestedNameSpecifier);
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
		enterRule(_localctx, 20, RULE_nestedNameSpecifierSequence);
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
		enterRule(_localctx, 22, RULE_lambdaExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(518);
			lambdaIntroducer();
			setState(520);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OpenParenthesis) {
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
		enterRule(_localctx, 24, RULE_lambdaIntroducer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(524);
			match(OpenBracket);
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
		enterRule(_localctx, 26, RULE_lambdaDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(530);
			match(OpenParenthesis);
			setState(531);
			parameterDeclarationClause();
			setState(532);
			match(CloseParenthesis);
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
			if (_la==AlignAs || _la==OpenBracket) {
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
		enterRule(_localctx, 28, RULE_lambdaCapture);
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
		enterRule(_localctx, 30, RULE_captureDefault);
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
		int _startState = 32;
		enterRecursionRule(_localctx, 32, RULE_captureList, _p);
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
		enterRule(_localctx, 34, RULE_capture);
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
		enterRule(_localctx, 36, RULE_simpleCapture);
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
		enterRule(_localctx, 38, RULE_initializerCapture);
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
		enterRule(_localctx, 40, RULE_foldExpression);
		try {
			setState(609);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(589);
				match(OpenParenthesis);
				setState(590);
				castExpression();
				setState(591);
				foldOperator();
				setState(592);
				match(Ellipsis);
				setState(593);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(595);
				match(OpenParenthesis);
				setState(596);
				match(Ellipsis);
				setState(597);
				foldOperator();
				setState(598);
				castExpression();
				setState(599);
				match(CloseParenthesis);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(601);
				match(OpenParenthesis);
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
		enterRule(_localctx, 44, RULE_explicitTypeCoversionOperatorExpression);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(613);
			typenameSpecifier();
			setState(614);
			match(OpenParenthesis);
			setState(616);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(615);
				expressionList();
				}
			}

			setState(618);
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
		enterRule(_localctx, 46, RULE_postfixOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(620);
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
		enterRule(_localctx, 48, RULE_namedCastExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(622);
			namedCastType();
			setState(623);
			match(LessThan);
			setState(624);
			typeIdentifier();
			setState(625);
			match(GreaterThan);
			setState(626);
			match(OpenParenthesis);
			setState(627);
			expression(0);
			setState(628);
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
		enterRule(_localctx, 50, RULE_memberAccessOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(630);
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
			setState(632);
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
		enterRule(_localctx, 54, RULE_typeIdentificationExpression);
		try {
			setState(644);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(634);
				match(TypeId);
				setState(635);
				match(OpenParenthesis);
				setState(636);
				expression(0);
				setState(637);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(639);
				match(TypeId);
				setState(640);
				match(OpenParenthesis);
				setState(641);
				typeIdentifier();
				setState(642);
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
		int _startState = 56;
		enterRecursionRule(_localctx, 56, RULE_postfixExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(657);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				{
				setState(647);
				primaryExpression();
				}
				break;
			case 2:
				{
				setState(648);
				explicitTypeCoversionOperatorExpression();
				}
				break;
			case 3:
				{
				setState(649);
				simpleTypeSpecifier();
				setState(650);
				bracedInitializerList();
				}
				break;
			case 4:
				{
				setState(652);
				typenameSpecifier();
				setState(653);
				bracedInitializerList();
				}
				break;
			case 5:
				{
				setState(655);
				namedCastExpression();
				}
				break;
			case 6:
				{
				setState(656);
				typeIdentificationExpression();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(685);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,35,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(683);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
					case 1:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(659);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(660);
						match(OpenBracket);
						setState(661);
						expressionOrBracedInitializerList();
						setState(662);
						match(CloseBracket);
						}
						break;
					case 2:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(664);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(665);
						match(OpenParenthesis);
						setState(667);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(666);
							expressionList();
							}
						}

						setState(669);
						match(CloseParenthesis);
						}
						break;
					case 3:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(670);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(671);
						memberAccessOperator();
						setState(673);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(672);
							match(Template);
							}
						}

						setState(675);
						identifierExpression();
						}
						break;
					case 4:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(677);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(678);
						memberAccessOperator();
						setState(679);
						pseudoDestructorName();
						}
						break;
					case 5:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(681);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(682);
						postfixOperator();
						}
						break;
					}
					} 
				}
				setState(687);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,35,_ctx);
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
			setState(688);
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
			setState(709);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(691);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
				case 1:
					{
					setState(690);
					nestedNameSpecifier();
					}
					break;
				}
				setState(693);
				typeName();
				setState(694);
				match(DoubleColon);
				setState(695);
				match(Tilde);
				setState(696);
				typeName();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(698);
				nestedNameSpecifier();
				setState(699);
				match(Template);
				setState(700);
				simpleTemplateIdentifier();
				setState(701);
				match(DoubleColon);
				setState(702);
				match(Tilde);
				setState(703);
				typeName();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(705);
				match(Tilde);
				setState(706);
				typeName();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(707);
				match(Tilde);
				setState(708);
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
		enterRule(_localctx, 62, RULE_unaryExpression);
		try {
			setState(739);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(711);
				postfixExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(712);
				match(DoublePlus);
				setState(713);
				castExpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(714);
				match(DoubleMinus);
				setState(715);
				castExpression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(716);
				unaryOperator();
				setState(717);
				castExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(719);
				match(SizeOf);
				setState(720);
				unaryExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(721);
				match(SizeOf);
				setState(722);
				match(OpenParenthesis);
				setState(723);
				typeIdentifier();
				setState(724);
				match(CloseParenthesis);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(726);
				match(SizeOf);
				setState(727);
				match(Ellipsis);
				setState(728);
				match(OpenParenthesis);
				setState(729);
				match(Identifier);
				setState(730);
				match(CloseParenthesis);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(731);
				match(AlignOf);
				setState(732);
				match(OpenParenthesis);
				setState(733);
				typeIdentifier();
				setState(734);
				match(CloseParenthesis);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(736);
				noExceptionExpression();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(737);
				newExpression();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(738);
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
			setState(741);
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
		enterRule(_localctx, 66, RULE_newExpression);
		int _la;
		try {
			setState(767);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(744);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(743);
					match(DoubleColon);
					}
				}

				setState(746);
				match(New);
				setState(748);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OpenParenthesis) {
					{
					setState(747);
					newPlacement();
					}
				}

				setState(750);
				newTypeIdentifier();
				setState(752);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
				case 1:
					{
					setState(751);
					newInitializer();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(755);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(754);
					match(DoubleColon);
					}
				}

				setState(757);
				match(New);
				setState(759);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
				case 1:
					{
					setState(758);
					newPlacement();
					}
					break;
				}
				setState(761);
				match(OpenParenthesis);
				setState(762);
				typeIdentifier();
				setState(763);
				match(CloseParenthesis);
				setState(765);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
				case 1:
					{
					setState(764);
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
		enterRule(_localctx, 68, RULE_newPlacement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(769);
			match(OpenParenthesis);
			setState(770);
			expressionList();
			setState(771);
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
		enterRule(_localctx, 70, RULE_newTypeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(773);
			typeSpecifierSequence();
			setState(775);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				{
				setState(774);
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
			setState(777);
			pointerOperator();
			setState(779);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || ((((_la - 90)) & ~0x3f) == 0 && ((1L << (_la - 90)) & ((1L << (DoubleColon - 90)) | (1L << (Asterisk - 90)) | (1L << (Ampersand - 90)) | (1L << (DoubleAmpersand - 90)) | (1L << (Identifier - 90)))) != 0)) {
				{
				setState(778);
				newDeclarator();
				}
			}

			setState(781);
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
		int _startState = 74;
		enterRecursionRule(_localctx, 74, RULE_noPointerNewDeclarator, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(784);
			match(OpenBracket);
			setState(785);
			expression(0);
			setState(786);
			match(CloseBracket);
			setState(788);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,48,_ctx) ) {
			case 1:
				{
				setState(787);
				attributeSpecifierSequence(0);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(799);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,50,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new NoPointerNewDeclaratorContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_noPointerNewDeclarator);
					setState(790);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(791);
					match(OpenBracket);
					setState(792);
					constantExpression();
					setState(793);
					match(CloseBracket);
					setState(795);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
					case 1:
						{
						setState(794);
						attributeSpecifierSequence(0);
						}
						break;
					}
					}
					} 
				}
				setState(801);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,50,_ctx);
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
		enterRule(_localctx, 76, RULE_newInitializer);
		int _la;
		try {
			setState(808);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(802);
				match(OpenParenthesis);
				setState(804);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(803);
					expressionList();
					}
				}

				setState(806);
				match(CloseParenthesis);
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(807);
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
		enterRule(_localctx, 78, RULE_deleteExpression);
		int _la;
		try {
			setState(822);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,55,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(811);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(810);
					match(DoubleColon);
					}
				}

				setState(813);
				match(Delete);
				setState(814);
				castExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(816);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(815);
					match(DoubleColon);
					}
				}

				setState(818);
				match(Delete);
				setState(819);
				match(OpenBracket);
				setState(820);
				match(CloseBracket);
				setState(821);
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
		enterRule(_localctx, 80, RULE_noExceptionExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(824);
			match(NoExcept);
			setState(825);
			match(OpenParenthesis);
			setState(826);
			expression(0);
			setState(827);
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
		enterRule(_localctx, 82, RULE_castExpression);
		try {
			setState(835);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(829);
				unaryExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(830);
				match(OpenParenthesis);
				setState(831);
				typeIdentifier();
				setState(832);
				match(CloseParenthesis);
				setState(833);
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
			setState(838);
			castExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(848);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(846);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
					case 1:
						{
						_localctx = new PointerManipulationExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pointerManipulationExpression);
						setState(840);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(841);
						match(PeriodAsterisk);
						setState(842);
						castExpression();
						}
						break;
					case 2:
						{
						_localctx = new PointerManipulationExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pointerManipulationExpression);
						setState(843);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(844);
						match(ArrowAsterisk);
						setState(845);
						castExpression();
						}
						break;
					}
					} 
				}
				setState(850);
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
			setState(852);
			pointerManipulationExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(865);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(863);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,59,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(854);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(855);
						match(Asterisk);
						setState(856);
						pointerManipulationExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(857);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(858);
						match(ForwardSlash);
						setState(859);
						pointerManipulationExpression(0);
						}
						break;
					case 3:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(860);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(861);
						match(Percent);
						setState(862);
						pointerManipulationExpression(0);
						}
						break;
					}
					} 
				}
				setState(867);
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
			setState(869);
			multiplicativeExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(879);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(877);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,61,_ctx) ) {
					case 1:
						{
						_localctx = new AdditiveExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveExpression);
						setState(871);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(872);
						match(Plus);
						setState(873);
						multiplicativeExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveExpression);
						setState(874);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(875);
						match(Minus);
						setState(876);
						multiplicativeExpression(0);
						}
						break;
					}
					} 
				}
				setState(881);
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
			setState(883);
			additiveExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(893);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,64,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(891);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,63,_ctx) ) {
					case 1:
						{
						_localctx = new ShiftExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shiftExpression);
						setState(885);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(886);
						match(DoubleLessThan);
						setState(887);
						additiveExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new ShiftExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shiftExpression);
						setState(888);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(889);
						match(DoubleGreaterThan);
						setState(890);
						additiveExpression(0);
						}
						break;
					}
					} 
				}
				setState(895);
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
			setState(897);
			shiftExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(913);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,66,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(911);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,65,_ctx) ) {
					case 1:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(899);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(900);
						match(LessThan);
						setState(901);
						shiftExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(902);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(903);
						match(GreaterThan);
						setState(904);
						shiftExpression(0);
						}
						break;
					case 3:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(905);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(906);
						match(LessThanEqual);
						setState(907);
						shiftExpression(0);
						}
						break;
					case 4:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(908);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(909);
						match(GreaterThanEqual);
						setState(910);
						shiftExpression(0);
						}
						break;
					}
					} 
				}
				setState(915);
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
			setState(917);
			relationalExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(927);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,68,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(925);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
					case 1:
						{
						_localctx = new EqualityExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityExpression);
						setState(919);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(920);
						match(DoubleEqual);
						setState(921);
						relationalExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new EqualityExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityExpression);
						setState(922);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(923);
						match(ExclamationMarkEqual);
						setState(924);
						relationalExpression(0);
						}
						break;
					}
					} 
				}
				setState(929);
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
			setState(931);
			equalityExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(938);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,69,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AndExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_andExpression);
					setState(933);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(934);
					match(Ampersand);
					setState(935);
					equalityExpression(0);
					}
					} 
				}
				setState(940);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,69,_ctx);
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
			setState(942);
			andExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(949);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExclusiveOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_exclusiveOrExpression);
					setState(944);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(945);
					match(Caret);
					setState(946);
					andExpression(0);
					}
					} 
				}
				setState(951);
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
			setState(953);
			exclusiveOrExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(960);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,71,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InclusiveOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_inclusiveOrExpression);
					setState(955);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(956);
					match(VerticalBar);
					setState(957);
					exclusiveOrExpression(0);
					}
					} 
				}
				setState(962);
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
			setState(964);
			inclusiveOrExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(971);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,72,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalAndExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_logicalAndExpression);
					setState(966);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(967);
					match(DoubleAmpersand);
					setState(968);
					inclusiveOrExpression(0);
					}
					} 
				}
				setState(973);
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
			setState(975);
			logicalAndExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(982);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,73,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_logicalOrExpression);
					setState(977);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(978);
					match(DoubleVerticalBar);
					setState(979);
					logicalAndExpression(0);
					}
					} 
				}
				setState(984);
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
			setState(992);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,74,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(985);
				logicalOrExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(986);
				logicalOrExpression(0);
				setState(987);
				match(QuestionMark);
				setState(988);
				expression(0);
				setState(989);
				match(Colon);
				setState(990);
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
			setState(994);
			match(Throw);
			setState(996);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,75,_ctx) ) {
			case 1:
				{
				setState(995);
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
			setState(1004);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(998);
				conditionalExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(999);
				logicalOrExpression(0);
				setState(1000);
				assignmentOperator();
				setState(1001);
				initializerClause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1003);
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
			setState(1006);
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
			setState(1009);
			assignmentExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(1016);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expression);
					setState(1011);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1012);
					match(Comma);
					setState(1013);
					assignmentExpression();
					}
					} 
				}
				setState(1018);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
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
			setState(1019);
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
			setState(1047);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,84,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1021);
				labeledStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1023);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
				case 1:
					{
					setState(1022);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1025);
				expressionStatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1027);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1026);
					attributeSpecifierSequence(0);
					}
				}

				setState(1029);
				compoundStatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1031);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1030);
					attributeSpecifierSequence(0);
					}
				}

				setState(1033);
				selectionStatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1035);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1034);
					attributeSpecifierSequence(0);
					}
				}

				setState(1037);
				iterationStatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1039);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1038);
					attributeSpecifierSequence(0);
					}
				}

				setState(1041);
				jumpStatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1042);
				declarationStatement();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1044);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1043);
					attributeSpecifierSequence(0);
					}
				}

				setState(1046);
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
			setState(1051);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,85,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1049);
				expressionStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1050);
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
			setState(1061);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,87,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1053);
				expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1055);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1054);
					attributeSpecifierSequence(0);
					}
				}

				setState(1057);
				declarationSpecifierSequence();
				setState(1058);
				declarator();
				setState(1059);
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
			setState(1083);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,91,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1064);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1063);
					attributeSpecifierSequence(0);
					}
				}

				setState(1066);
				match(Identifier);
				setState(1067);
				match(Colon);
				setState(1068);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1070);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1069);
					attributeSpecifierSequence(0);
					}
				}

				setState(1072);
				match(Case);
				setState(1073);
				constantExpression();
				setState(1074);
				match(Colon);
				setState(1075);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1078);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1077);
					attributeSpecifierSequence(0);
					}
				}

				setState(1080);
				match(Default);
				setState(1081);
				match(Colon);
				setState(1082);
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
			setState(1086);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(1085);
				expression(0);
				}
			}

			setState(1088);
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
		enterRule(_localctx, 128, RULE_compoundStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1090);
			match(OpenBrace);
			setState(1092);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
				{
				setState(1091);
				statementSequence(0);
				}
			}

			setState(1094);
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
		int _startState = 130;
		enterRecursionRule(_localctx, 130, RULE_statementSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1097);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(1103);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,94,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StatementSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_statementSequence);
					setState(1099);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1100);
					statement();
					}
					} 
				}
				setState(1105);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,94,_ctx);
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
		enterRule(_localctx, 132, RULE_selectionStatement);
		int _la;
		try {
			setState(1141);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,100,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1106);
				match(If);
				setState(1108);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ConstExpr) {
					{
					setState(1107);
					match(ConstExpr);
					}
				}

				setState(1110);
				match(OpenParenthesis);
				setState(1112);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,96,_ctx) ) {
				case 1:
					{
					setState(1111);
					initializerStatement();
					}
					break;
				}
				setState(1114);
				condition();
				setState(1115);
				match(CloseParenthesis);
				setState(1116);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1118);
				match(If);
				setState(1120);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ConstExpr) {
					{
					setState(1119);
					match(ConstExpr);
					}
				}

				setState(1122);
				match(OpenParenthesis);
				setState(1124);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,98,_ctx) ) {
				case 1:
					{
					setState(1123);
					initializerStatement();
					}
					break;
				}
				setState(1126);
				condition();
				setState(1127);
				match(CloseParenthesis);
				setState(1128);
				statement();
				setState(1129);
				match(Else);
				setState(1130);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1132);
				match(Switch);
				setState(1133);
				match(OpenParenthesis);
				setState(1135);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,99,_ctx) ) {
				case 1:
					{
					setState(1134);
					initializerStatement();
					}
					break;
				}
				setState(1137);
				condition();
				setState(1138);
				match(CloseParenthesis);
				setState(1139);
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
		enterRule(_localctx, 134, RULE_iterationStatement);
		int _la;
		try {
			setState(1178);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,103,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1143);
				match(While);
				setState(1144);
				match(OpenParenthesis);
				setState(1145);
				condition();
				setState(1146);
				match(CloseParenthesis);
				setState(1147);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1149);
				match(Do);
				setState(1150);
				statement();
				setState(1151);
				match(While);
				setState(1152);
				match(OpenParenthesis);
				setState(1153);
				expression(0);
				setState(1154);
				match(CloseParenthesis);
				setState(1155);
				match(Semicolon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1157);
				match(For);
				setState(1158);
				match(OpenParenthesis);
				setState(1159);
				initializerStatement();
				setState(1161);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticCast) | (1L << Struct) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1160);
					condition();
					}
				}

				setState(1163);
				match(Semicolon);
				setState(1165);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1164);
					expression(0);
					}
				}

				setState(1167);
				match(CloseParenthesis);
				setState(1168);
				statement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1170);
				match(For);
				setState(1171);
				match(OpenParenthesis);
				setState(1172);
				forRangeDeclaration();
				setState(1173);
				match(Colon);
				setState(1174);
				forRangeInitializer();
				setState(1175);
				match(CloseParenthesis);
				setState(1176);
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
		enterRule(_localctx, 136, RULE_forInitializerStatement);
		int _la;
		try {
			setState(1197);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,107,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1181);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1180);
					attributeSpecifierSequence(0);
					}
				}

				setState(1183);
				declarationSpecifierSequence();
				setState(1184);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1187);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1186);
					attributeSpecifierSequence(0);
					}
				}

				setState(1189);
				declarationSpecifierSequence();
				setState(1191);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(1190);
					referenceQualifier();
					}
				}

				setState(1193);
				match(OpenBracket);
				setState(1194);
				identifierList(0);
				setState(1195);
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
		enterRule(_localctx, 138, RULE_forRangeDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1200);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1199);
				attributeSpecifierSequence(0);
				}
			}

			setState(1202);
			declarationSpecifierSequence();
			setState(1203);
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
			setState(1205);
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
			setState(1219);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Break:
				enterOuterAlt(_localctx, 1);
				{
				setState(1207);
				match(Break);
				setState(1208);
				match(Semicolon);
				}
				break;
			case Continue:
				enterOuterAlt(_localctx, 2);
				{
				setState(1209);
				match(Continue);
				setState(1210);
				match(Semicolon);
				}
				break;
			case Return:
				enterOuterAlt(_localctx, 3);
				{
				setState(1211);
				match(Return);
				setState(1213);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1212);
					expressionOrBracedInitializerList();
					}
				}

				setState(1215);
				match(Semicolon);
				}
				break;
			case GoTo:
				enterOuterAlt(_localctx, 4);
				{
				setState(1216);
				match(GoTo);
				setState(1217);
				match(Identifier);
				setState(1218);
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
			setState(1221);
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
			setState(1224);
			declaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1230);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,111,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new DeclarationSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_declarationSequence);
					setState(1226);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1227);
					declaration();
					}
					} 
				}
				setState(1232);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,111,_ctx);
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
			setState(1244);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,112,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1233);
				blockDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1234);
				noDeclarationSpecifierFunctionDeclaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1235);
				functionDefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1236);
				templateDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1237);
				deductionGuide();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1238);
				explicitInstantiation();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1239);
				explicitSpecialization();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1240);
				linkageSpecification();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1241);
				namespaceDefinition();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1242);
				emptyDeclaration();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1243);
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
			setState(1254);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,113,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1246);
				simpleDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1247);
				asmDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1248);
				namespaceAliasDefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1249);
				usingDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1250);
				usingDirective();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1251);
				staticAssertDeclaration();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1252);
				aliasDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1253);
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
			setState(1257);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1256);
				attributeSpecifierSequence(0);
				}
			}

			setState(1259);
			declarator();
			setState(1260);
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
			setState(1262);
			match(Using);
			setState(1263);
			match(Identifier);
			setState(1265);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1264);
				attributeSpecifierSequence(0);
				}
			}

			setState(1267);
			match(Equal);
			setState(1268);
			definingTypeIdentifier();
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
		enterRule(_localctx, 156, RULE_simpleDeclaration);
		int _la;
		try {
			setState(1295);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,119,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1271);
				declarationSpecifierSequence();
				setState(1273);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || _la==Operator || ((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (OpenParenthesis - 84)) | (1L << (Ellipsis - 84)) | (1L << (DoubleColon - 84)) | (1L << (Asterisk - 84)) | (1L << (Ampersand - 84)) | (1L << (Tilde - 84)) | (1L << (DoubleAmpersand - 84)) | (1L << (Identifier - 84)))) != 0)) {
					{
					setState(1272);
					initializerDeclaratorList(0);
					}
				}

				setState(1275);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1277);
				attributeSpecifierSequence(0);
				setState(1278);
				declarationSpecifierSequence();
				setState(1279);
				initializerDeclaratorList(0);
				setState(1280);
				match(Semicolon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1283);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1282);
					attributeSpecifierSequence(0);
					}
				}

				setState(1285);
				declarationSpecifierSequence();
				setState(1287);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(1286);
					referenceQualifier();
					}
				}

				setState(1289);
				match(OpenBracket);
				setState(1290);
				identifierList(0);
				setState(1291);
				match(CloseBracket);
				setState(1292);
				initializer();
				setState(1293);
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
		enterRule(_localctx, 158, RULE_staticAssertDeclaration);
		try {
			setState(1311);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,120,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1297);
				match(StaticAssert);
				setState(1298);
				match(OpenParenthesis);
				setState(1299);
				constantExpression();
				setState(1300);
				match(CloseParenthesis);
				setState(1301);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1303);
				match(StaticAssert);
				setState(1304);
				match(OpenParenthesis);
				setState(1305);
				constantExpression();
				setState(1306);
				match(Comma);
				setState(1307);
				match(StringLiteral);
				setState(1308);
				match(CloseParenthesis);
				setState(1309);
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
			setState(1313);
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
			setState(1315);
			attributeSpecifierSequence(0);
			setState(1316);
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
		enterRule(_localctx, 164, RULE_declarationModifier);
		try {
			setState(1324);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Extern:
			case Mutable:
			case Static:
			case ThreadLocal:
				enterOuterAlt(_localctx, 1);
				{
				setState(1318);
				storageClassSpecifier();
				}
				break;
			case Explicit:
			case Virtual:
				enterOuterAlt(_localctx, 2);
				{
				setState(1319);
				functionSpecifier();
				}
				break;
			case Friend:
				enterOuterAlt(_localctx, 3);
				{
				setState(1320);
				match(Friend);
				}
				break;
			case TypeDef:
				enterOuterAlt(_localctx, 4);
				{
				setState(1321);
				match(TypeDef);
				}
				break;
			case ConstExpr:
				enterOuterAlt(_localctx, 5);
				{
				setState(1322);
				match(ConstExpr);
				}
				break;
			case Inline:
				enterOuterAlt(_localctx, 6);
				{
				setState(1323);
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
		enterRule(_localctx, 166, RULE_declarationSpecifierSequence);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1327);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 18)) & ~0x3f) == 0 && ((1L << (_la - 18)) & ((1L << (ConstExpr - 18)) | (1L << (Explicit - 18)) | (1L << (Extern - 18)) | (1L << (Friend - 18)) | (1L << (Inline - 18)) | (1L << (Mutable - 18)) | (1L << (Static - 18)) | (1L << (ThreadLocal - 18)) | (1L << (TypeDef - 18)) | (1L << (Virtual - 18)))) != 0)) {
				{
				setState(1326);
				leadingDeclarationModifierSequence();
				}
			}

			setState(1329);
			definingTypeSpecifier();
			setState(1331);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 18)) & ~0x3f) == 0 && ((1L << (_la - 18)) & ((1L << (ConstExpr - 18)) | (1L << (Explicit - 18)) | (1L << (Extern - 18)) | (1L << (Friend - 18)) | (1L << (Inline - 18)) | (1L << (Mutable - 18)) | (1L << (Static - 18)) | (1L << (ThreadLocal - 18)) | (1L << (TypeDef - 18)) | (1L << (Virtual - 18)))) != 0)) {
				{
				setState(1330);
				trailingDeclarationModifierSequence();
				}
			}

			setState(1334);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,124,_ctx) ) {
			case 1:
				{
				setState(1333);
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
		enterRule(_localctx, 168, RULE_leadingDeclarationModifierSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1336);
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
		enterRule(_localctx, 170, RULE_trailingDeclarationModifierSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1338);
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
		enterRule(_localctx, 172, RULE_declarationModifierSequence);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1340);
			declarationModifier();
			setState(1342);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 18)) & ~0x3f) == 0 && ((1L << (_la - 18)) & ((1L << (ConstExpr - 18)) | (1L << (Explicit - 18)) | (1L << (Extern - 18)) | (1L << (Friend - 18)) | (1L << (Inline - 18)) | (1L << (Mutable - 18)) | (1L << (Static - 18)) | (1L << (ThreadLocal - 18)) | (1L << (TypeDef - 18)) | (1L << (Virtual - 18)))) != 0)) {
				{
				setState(1341);
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
		enterRule(_localctx, 174, RULE_storageClassSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1344);
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
		enterRule(_localctx, 176, RULE_functionSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1346);
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
		enterRule(_localctx, 178, RULE_typeSpecifier);
		try {
			setState(1352);
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
				setState(1348);
				simpleTypeSpecifier();
				}
				break;
			case Class:
			case Enum:
			case Struct:
			case Union:
				enterOuterAlt(_localctx, 2);
				{
				setState(1349);
				elaboratedTypeSpecifier();
				}
				break;
			case TypeName:
				enterOuterAlt(_localctx, 3);
				{
				setState(1350);
				typenameSpecifier();
				}
				break;
			case Const:
			case Volatile:
				enterOuterAlt(_localctx, 4);
				{
				setState(1351);
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
		enterRule(_localctx, 180, RULE_typeSpecifierSequence);
		try {
			setState(1361);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,128,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1354);
				typeSpecifier();
				setState(1356);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,127,_ctx) ) {
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
				typeSpecifier();
				setState(1359);
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
		enterRule(_localctx, 182, RULE_definingTypeSpecifier);
		try {
			setState(1366);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,129,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1363);
				typeSpecifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1364);
				classSpecifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1365);
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
		enterRule(_localctx, 184, RULE_definingTypeSpecifierSequence);
		try {
			setState(1375);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,131,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1368);
				definingTypeSpecifier();
				setState(1370);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,130,_ctx) ) {
				case 1:
					{
					setState(1369);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1372);
				definingTypeSpecifier();
				setState(1373);
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
		enterRule(_localctx, 186, RULE_simpleTypeSpecifier);
		try {
			setState(1396);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,133,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1378);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,132,_ctx) ) {
				case 1:
					{
					setState(1377);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1380);
				typeName();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1381);
				match(Char);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1382);
				match(Char16);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1383);
				match(Char32);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1384);
				match(WChar);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1385);
				match(Bool);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1386);
				match(Short);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1387);
				match(Int);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1388);
				match(Long);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1389);
				match(Signed);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1390);
				match(Unsigned);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(1391);
				match(Float);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(1392);
				match(Double);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(1393);
				match(Void);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(1394);
				match(Auto);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(1395);
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
		enterRule(_localctx, 188, RULE_typeName);
		try {
			setState(1400);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,134,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1398);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1399);
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
		enterRule(_localctx, 190, RULE_declarationTypeSpecifier);
		try {
			setState(1411);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,135,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1402);
				match(DeclType);
				setState(1403);
				match(OpenParenthesis);
				setState(1404);
				expression(0);
				setState(1405);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1407);
				match(DeclType);
				setState(1408);
				match(OpenParenthesis);
				setState(1409);
				match(Auto);
				setState(1410);
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
		enterRule(_localctx, 192, RULE_elaboratedTypeSpecifier);
		int _la;
		try {
			setState(1437);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,140,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1413);
				classKey();
				setState(1415);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1414);
					attributeSpecifierSequence(0);
					}
				}

				setState(1418);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,137,_ctx) ) {
				case 1:
					{
					setState(1417);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1420);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1422);
				classKey();
				setState(1423);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1425);
				classKey();
				setState(1426);
				nestedNameSpecifier();
				setState(1428);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(1427);
					match(Template);
					}
				}

				setState(1430);
				simpleTemplateIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1432);
				match(Enum);
				setState(1434);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,139,_ctx) ) {
				case 1:
					{
					setState(1433);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1436);
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
		enterRule(_localctx, 194, RULE_enumSpecifier);
		int _la;
		try {
			setState(1452);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,142,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1439);
				enumHead();
				setState(1440);
				match(OpenBrace);
				setState(1442);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1441);
					enumeratorList(0);
					}
				}

				setState(1444);
				match(CloseBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1446);
				enumHead();
				setState(1447);
				match(OpenBrace);
				setState(1448);
				enumeratorList(0);
				setState(1449);
				match(Comma);
				setState(1450);
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
		enterRule(_localctx, 196, RULE_enumHead);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1454);
			enumKey();
			setState(1456);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1455);
				attributeSpecifierSequence(0);
				}
			}

			setState(1459);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || _la==DoubleColon || _la==Identifier) {
				{
				setState(1458);
				enumHeadName();
				}
			}

			setState(1462);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1461);
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
		enterRule(_localctx, 198, RULE_enumHeadName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1465);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,146,_ctx) ) {
			case 1:
				{
				setState(1464);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1467);
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
		enterRule(_localctx, 200, RULE_opaqueEnumDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1469);
			enumKey();
			setState(1471);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1470);
				attributeSpecifierSequence(0);
				}
			}

			setState(1474);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,148,_ctx) ) {
			case 1:
				{
				setState(1473);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1476);
			match(Identifier);
			setState(1478);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1477);
				enumBase();
				}
			}

			setState(1480);
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
		enterRule(_localctx, 202, RULE_enumKey);
		try {
			setState(1487);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,150,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1482);
				match(Enum);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1483);
				match(Enum);
				setState(1484);
				match(Class);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1485);
				match(Enum);
				setState(1486);
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
		enterRule(_localctx, 204, RULE_enumBase);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1489);
			match(Colon);
			setState(1490);
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
		int _startState = 206;
		enterRecursionRule(_localctx, 206, RULE_enumeratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1493);
			enumeratorDefinition();
			}
			_ctx.stop = _input.LT(-1);
			setState(1500);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,151,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new EnumeratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_enumeratorList);
					setState(1495);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1496);
					match(Comma);
					setState(1497);
					enumeratorDefinition();
					}
					} 
				}
				setState(1502);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,151,_ctx);
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
		enterRule(_localctx, 208, RULE_enumeratorDefinition);
		try {
			setState(1508);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,152,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1503);
				enumerator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1504);
				enumerator();
				setState(1505);
				match(Equal);
				setState(1506);
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
		enterRule(_localctx, 210, RULE_enumerator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1510);
			match(Identifier);
			setState(1512);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,153,_ctx) ) {
			case 1:
				{
				setState(1511);
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
		enterRule(_localctx, 212, RULE_namespaceDefinition);
		try {
			setState(1517);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,154,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1514);
				namedNamespaceDefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1515);
				unnamedNamespaceDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1516);
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
		enterRule(_localctx, 214, RULE_namedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1520);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1519);
				match(Inline);
				}
			}

			setState(1522);
			match(Namespace);
			setState(1524);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1523);
				attributeSpecifierSequence(0);
				}
			}

			setState(1526);
			match(Identifier);
			setState(1527);
			match(OpenBrace);
			setState(1528);
			namespaceBody();
			setState(1529);
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
		enterRule(_localctx, 216, RULE_unnamedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1532);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1531);
				match(Inline);
				}
			}

			setState(1534);
			match(Namespace);
			setState(1536);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1535);
				attributeSpecifierSequence(0);
				}
			}

			setState(1538);
			match(OpenBrace);
			setState(1539);
			namespaceBody();
			setState(1540);
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
		enterRule(_localctx, 218, RULE_nestedNamespaceDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1542);
			match(Namespace);
			setState(1543);
			enclosingNamespaceSpecifier(0);
			setState(1544);
			match(DoubleColon);
			setState(1545);
			match(Identifier);
			setState(1546);
			match(OpenBrace);
			setState(1547);
			namespaceBody();
			setState(1548);
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
		int _startState = 220;
		enterRecursionRule(_localctx, 220, RULE_enclosingNamespaceSpecifier, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1551);
			match(Identifier);
			}
			_ctx.stop = _input.LT(-1);
			setState(1558);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,159,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new EnclosingNamespaceSpecifierContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_enclosingNamespaceSpecifier);
					setState(1553);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1554);
					match(DoubleColon);
					setState(1555);
					match(Identifier);
					}
					} 
				}
				setState(1560);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,159,_ctx);
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
		enterRule(_localctx, 222, RULE_namespaceBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1562);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (OpenBracket - 67)) | (1L << (OpenParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
				{
				setState(1561);
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
		enterRule(_localctx, 224, RULE_namespaceAliasDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1564);
			match(Namespace);
			setState(1565);
			match(Identifier);
			setState(1566);
			match(Equal);
			setState(1567);
			qualifiedNamespaceSpecifier();
			setState(1568);
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
		enterRule(_localctx, 226, RULE_qualifiedNamespaceSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1571);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,161,_ctx) ) {
			case 1:
				{
				setState(1570);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1573);
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
		enterRule(_localctx, 228, RULE_usingDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1575);
			match(Using);
			setState(1576);
			usingDeclaratorList(0);
			setState(1577);
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
		int _startState = 230;
		enterRecursionRule(_localctx, 230, RULE_usingDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1580);
			usingDeclarator();
			setState(1582);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,162,_ctx) ) {
			case 1:
				{
				setState(1581);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(1592);
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
					setState(1584);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1585);
					match(Comma);
					setState(1586);
					usingDeclarator();
					setState(1588);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,163,_ctx) ) {
					case 1:
						{
						setState(1587);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(1594);
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
		enterRule(_localctx, 232, RULE_usingDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1596);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,165,_ctx) ) {
			case 1:
				{
				setState(1595);
				typeName();
				}
				break;
			}
			setState(1598);
			nestedNameSpecifier();
			setState(1599);
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
		enterRule(_localctx, 234, RULE_usingDirective);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1602);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1601);
				attributeSpecifierSequence(0);
				}
			}

			setState(1604);
			match(Using);
			setState(1605);
			match(Namespace);
			setState(1607);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,167,_ctx) ) {
			case 1:
				{
				setState(1606);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1609);
			namespaceName();
			setState(1610);
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
		enterRule(_localctx, 236, RULE_asmDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1613);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1612);
				attributeSpecifierSequence(0);
				}
			}

			setState(1615);
			match(Asm);
			setState(1616);
			match(OpenParenthesis);
			setState(1617);
			match(StringLiteral);
			setState(1618);
			match(CloseParenthesis);
			setState(1619);
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
		enterRule(_localctx, 238, RULE_linkageSpecification);
		int _la;
		try {
			setState(1631);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,170,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1621);
				match(Extern);
				setState(1622);
				match(StringLiteral);
				setState(1623);
				match(OpenBrace);
				setState(1625);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (OpenBracket - 67)) | (1L << (OpenParenthesis - 67)) | (1L << (Semicolon - 67)) | (1L << (Ellipsis - 67)) | (1L << (DoubleColon - 67)) | (1L << (Asterisk - 67)) | (1L << (Ampersand - 67)) | (1L << (Tilde - 67)) | (1L << (DoubleAmpersand - 67)))) != 0) || _la==Identifier) {
					{
					setState(1624);
					declarationSequence(0);
					}
				}

				setState(1627);
				match(CloseBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1628);
				match(Extern);
				setState(1629);
				match(StringLiteral);
				setState(1630);
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
		int _startState = 240;
		enterRecursionRule(_localctx, 240, RULE_attributeSpecifierSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1634);
			attributeSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(1640);
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
					setState(1636);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1637);
					attributeSpecifier();
					}
					} 
				}
				setState(1642);
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
		enterRule(_localctx, 242, RULE_attributeSpecifier);
		try {
			setState(1653);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1643);
				match(OpenBracket);
				setState(1644);
				match(OpenBracket);
				setState(1646);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,172,_ctx) ) {
				case 1:
					{
					setState(1645);
					attributeUsingPrefix();
					}
					break;
				}
				setState(1648);
				attributeList(0);
				setState(1649);
				match(CloseBracket);
				setState(1650);
				match(CloseBracket);
				}
				break;
			case AlignAs:
				enterOuterAlt(_localctx, 2);
				{
				setState(1652);
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
		enterRule(_localctx, 244, RULE_alignmentSpecifier);
		int _la;
		try {
			setState(1671);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,176,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1655);
				match(AlignAs);
				setState(1656);
				match(OpenParenthesis);
				setState(1657);
				typeIdentifier();
				setState(1659);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1658);
					match(Ellipsis);
					}
				}

				setState(1661);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1663);
				match(AlignAs);
				setState(1664);
				match(CloseParenthesis);
				setState(1665);
				constantExpression();
				setState(1667);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1666);
					match(Ellipsis);
					}
				}

				setState(1669);
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
		enterRule(_localctx, 246, RULE_attributeUsingPrefix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1673);
			match(Using);
			setState(1674);
			attributeNamespace();
			setState(1675);
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
		int _startState = 248;
		enterRecursionRule(_localctx, 248, RULE_attributeList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1684);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,178,_ctx) ) {
			case 1:
				{
				setState(1679);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,177,_ctx) ) {
				case 1:
					{
					setState(1678);
					attribute();
					}
					break;
				}
				}
				break;
			case 2:
				{
				setState(1681);
				attribute();
				setState(1682);
				match(Ellipsis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1698);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,181,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1696);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,180,_ctx) ) {
					case 1:
						{
						_localctx = new AttributeListContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_attributeList);
						setState(1686);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1687);
						match(Comma);
						setState(1689);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,179,_ctx) ) {
						case 1:
							{
							setState(1688);
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
						setState(1691);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1692);
						match(Comma);
						setState(1693);
						attribute();
						setState(1694);
						match(Ellipsis);
						}
						break;
					}
					} 
				}
				setState(1700);
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
		enterRule(_localctx, 250, RULE_attribute);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1701);
			attributeToken();
			setState(1703);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,182,_ctx) ) {
			case 1:
				{
				setState(1702);
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
		enterRule(_localctx, 252, RULE_attributeToken);
		try {
			setState(1707);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,183,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1705);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1706);
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
		enterRule(_localctx, 254, RULE_attributeScopedToken);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1709);
			attributeNamespace();
			setState(1710);
			match(DoubleColon);
			setState(1711);
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
		enterRule(_localctx, 256, RULE_attributeNamespace);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1713);
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
		enterRule(_localctx, 258, RULE_attributeArgumentClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1715);
			match(OpenParenthesis);
			setState(1717);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
				{
				setState(1716);
				balancedTokenSequence(0);
				}
			}

			setState(1719);
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
		int _startState = 260;
		enterRecursionRule(_localctx, 260, RULE_balancedTokenSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1722);
			balancedToken();
			}
			_ctx.stop = _input.LT(-1);
			setState(1728);
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
					setState(1724);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1725);
					balancedToken();
					}
					} 
				}
				setState(1730);
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
		public TerminalNode OpenParenthesis() { return getToken(CppParser.OpenParenthesis, 0); }
		public TerminalNode CloseParenthesis() { return getToken(CppParser.CloseParenthesis, 0); }
		public BalancedTokenSequenceContext balancedTokenSequence() {
			return getRuleContext(BalancedTokenSequenceContext.class,0);
		}
		public TerminalNode OpenBracket() { return getToken(CppParser.OpenBracket, 0); }
		public TerminalNode CloseBracket() { return getToken(CppParser.CloseBracket, 0); }
		public TerminalNode OpenBrace() { return getToken(CppParser.OpenBrace, 0); }
		public TerminalNode CloseBrace() { return getToken(CppParser.CloseBrace, 0); }
		public BalancedTokenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_balancedToken; }
	}

	public final BalancedTokenContext balancedToken() throws RecognitionException {
		BalancedTokenContext _localctx = new BalancedTokenContext(_ctx, getState());
		enterRule(_localctx, 262, RULE_balancedToken);
		int _la;
		try {
			setState(1747);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1731);
				match(OpenParenthesis);
				setState(1733);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1732);
					balancedTokenSequence(0);
					}
				}

				setState(1735);
				match(CloseParenthesis);
				}
				break;
			case OpenBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1736);
				match(OpenBracket);
				setState(1738);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1737);
					balancedTokenSequence(0);
					}
				}

				setState(1740);
				match(CloseBracket);
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 3);
				{
				setState(1741);
				match(OpenBrace);
				setState(1743);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template) | (1L << This) | (1L << ThreadLocal))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleGreaterThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)) | (1L << (ArrowAsterisk - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1742);
					balancedTokenSequence(0);
					}
				}

				setState(1745);
				match(CloseBrace);
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
				setState(1746);
				_la = _input.LA(1);
				if ( _la <= 0 || (((((_la - 80)) & ~0x3f) == 0 && ((1L << (_la - 80)) & ((1L << (OpenBrace - 80)) | (1L << (CloseBrace - 80)) | (1L << (OpenBracket - 80)) | (1L << (CloseBracket - 80)) | (1L << (OpenParenthesis - 80)) | (1L << (CloseParenthesis - 80)))) != 0)) ) {
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
		int _startState = 264;
		enterRecursionRule(_localctx, 264, RULE_initializerDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1750);
			initializerDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(1757);
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
					setState(1752);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1753);
					match(Comma);
					setState(1754);
					initializerDeclarator();
					}
					} 
				}
				setState(1759);
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
		enterRule(_localctx, 266, RULE_initializerDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1760);
			declarator();
			setState(1762);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,191,_ctx) ) {
			case 1:
				{
				setState(1761);
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
		enterRule(_localctx, 268, RULE_declarator);
		try {
			setState(1766);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,192,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1764);
				pointerDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1765);
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
		enterRule(_localctx, 270, RULE_pointerDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1768);
			pointerOperator();
			setState(1769);
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
		int _startState = 272;
		enterRecursionRule(_localctx, 272, RULE_noPointerDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1783);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DeclType:
			case Operator:
			case Ellipsis:
			case DoubleColon:
			case Tilde:
			case Identifier:
				{
				setState(1773);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1772);
					match(Ellipsis);
					}
				}

				setState(1775);
				identifierExpression();
				setState(1777);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,194,_ctx) ) {
				case 1:
					{
					setState(1776);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case OpenParenthesis:
				{
				setState(1779);
				match(OpenParenthesis);
				setState(1780);
				pointerDeclarator();
				setState(1781);
				match(CloseParenthesis);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1798);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,199,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1796);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,198,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerDeclarator);
						setState(1785);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1786);
						match(OpenBracket);
						setState(1788);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (OpenParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1787);
							constantExpression();
							}
						}

						setState(1790);
						match(CloseBracket);
						setState(1792);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,197,_ctx) ) {
						case 1:
							{
							setState(1791);
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
						setState(1794);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1795);
						parametersAndQualifiers();
						}
						break;
					}
					} 
				}
				setState(1800);
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
		enterRule(_localctx, 274, RULE_parametersAndQualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1801);
			functionParameters();
			setState(1802);
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
		enterRule(_localctx, 276, RULE_functionParameters);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1804);
			match(OpenParenthesis);
			setState(1805);
			parameterDeclarationClause();
			setState(1806);
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
		enterRule(_localctx, 278, RULE_functionQualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1809);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,200,_ctx) ) {
			case 1:
				{
				setState(1808);
				constVolatileQualifierSequence();
				}
				break;
			}
			setState(1812);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,201,_ctx) ) {
			case 1:
				{
				setState(1811);
				referenceQualifier();
				}
				break;
			}
			setState(1815);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,202,_ctx) ) {
			case 1:
				{
				setState(1814);
				noExceptionSpecifier();
				}
				break;
			}
			setState(1818);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,203,_ctx) ) {
			case 1:
				{
				setState(1817);
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
		enterRule(_localctx, 280, RULE_trailingReturnType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1820);
			match(Arrow);
			setState(1821);
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
		enterRule(_localctx, 282, RULE_pointerOperator);
		try {
			setState(1846);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Asterisk:
				enterOuterAlt(_localctx, 1);
				{
				setState(1823);
				match(Asterisk);
				setState(1825);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,204,_ctx) ) {
				case 1:
					{
					setState(1824);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1828);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,205,_ctx) ) {
				case 1:
					{
					setState(1827);
					constVolatileQualifierSequence();
					}
					break;
				}
				}
				break;
			case Ampersand:
				enterOuterAlt(_localctx, 2);
				{
				setState(1830);
				match(Ampersand);
				setState(1832);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,206,_ctx) ) {
				case 1:
					{
					setState(1831);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case DoubleAmpersand:
				enterOuterAlt(_localctx, 3);
				{
				setState(1834);
				match(DoubleAmpersand);
				setState(1836);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,207,_ctx) ) {
				case 1:
					{
					setState(1835);
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
				setState(1838);
				nestedNameSpecifier();
				setState(1839);
				match(Asterisk);
				setState(1841);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,208,_ctx) ) {
				case 1:
					{
					setState(1840);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1844);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,209,_ctx) ) {
				case 1:
					{
					setState(1843);
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
		enterRule(_localctx, 284, RULE_constVolatileQualifierSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1848);
			constVolatileQualifier();
			setState(1850);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,211,_ctx) ) {
			case 1:
				{
				setState(1849);
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
		enterRule(_localctx, 286, RULE_constVolatileQualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1852);
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
		enterRule(_localctx, 288, RULE_referenceQualifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1854);
			match(Ampersand);
			setState(1855);
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
		enterRule(_localctx, 290, RULE_typeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1857);
			typeSpecifierSequence();
			setState(1859);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,212,_ctx) ) {
			case 1:
				{
				setState(1858);
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
		enterRule(_localctx, 292, RULE_definingTypeIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1861);
			definingTypeSpecifierSequence();
			setState(1863);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || ((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (OpenBracket - 82)) | (1L << (OpenParenthesis - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
				{
				setState(1862);
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
		enterRule(_localctx, 294, RULE_abstractDeclarator);
		try {
			setState(1873);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,215,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1865);
				pointerAbstractDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1867);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,214,_ctx) ) {
				case 1:
					{
					setState(1866);
					noPointerAbstractDeclarator(0);
					}
					break;
				}
				setState(1869);
				parametersAndQualifiers();
				setState(1870);
				trailingReturnType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1872);
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
		enterRule(_localctx, 296, RULE_pointerAbstractDeclarator);
		try {
			setState(1880);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenBracket:
			case OpenParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1875);
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
				setState(1876);
				pointerOperator();
				setState(1878);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,216,_ctx) ) {
				case 1:
					{
					setState(1877);
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
		int _startState = 298;
		enterRecursionRule(_localctx, 298, RULE_noPointerAbstractDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1896);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,220,_ctx) ) {
			case 1:
				{
				setState(1883);
				parametersAndQualifiers();
				}
				break;
			case 2:
				{
				setState(1884);
				match(OpenBracket);
				setState(1886);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (OpenParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(1885);
					constantExpression();
					}
				}

				setState(1888);
				match(CloseBracket);
				setState(1890);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,219,_ctx) ) {
				case 1:
					{
					setState(1889);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 3:
				{
				setState(1892);
				match(OpenParenthesis);
				setState(1893);
				pointerAbstractDeclarator();
				setState(1894);
				match(CloseParenthesis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1911);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,224,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1909);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,223,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1898);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1899);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1900);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1901);
						match(OpenBracket);
						setState(1903);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (OpenParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1902);
							constantExpression();
							}
						}

						setState(1905);
						match(CloseBracket);
						setState(1907);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,222,_ctx) ) {
						case 1:
							{
							setState(1906);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1913);
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
		enterRule(_localctx, 300, RULE_abstractPackDeclarator);
		try {
			setState(1918);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ellipsis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1914);
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
				setState(1915);
				pointerOperator();
				setState(1916);
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
		int _startState = 302;
		enterRecursionRule(_localctx, 302, RULE_noPointerAbstractPackDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1921);
			match(Ellipsis);
			}
			_ctx.stop = _input.LT(-1);
			setState(1936);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,229,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1934);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,228,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1923);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1924);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1925);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1926);
						match(OpenBracket);
						setState(1928);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (True - 65)) | (1L << (TypeId - 65)) | (1L << (TypeName - 65)) | (1L << (Unsigned - 65)) | (1L << (Void - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (OpenParenthesis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Plus - 65)) | (1L << (Minus - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (VerticalBar - 65)) | (1L << (Tilde - 65)) | (1L << (ExclamationMark - 65)) | (1L << (DoublePlus - 65)) | (1L << (DoubleMinus - 65)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
							{
							setState(1927);
							constantExpression();
							}
						}

						setState(1930);
						match(CloseBracket);
						setState(1932);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,227,_ctx) ) {
						case 1:
							{
							setState(1931);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1938);
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
		enterRule(_localctx, 304, RULE_parameterDeclarationClause);
		int _la;
		try {
			setState(1949);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,232,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1940);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << Struct) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (OpenBracket - 67)) | (1L << (DoubleColon - 67)))) != 0) || _la==Identifier) {
					{
					setState(1939);
					parameterDeclarationList(0);
					}
				}

				setState(1943);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1942);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1945);
				parameterDeclarationList(0);
				setState(1946);
				match(Comma);
				setState(1947);
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
		int _startState = 306;
		enterRecursionRule(_localctx, 306, RULE_parameterDeclarationList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1952);
			parameterDeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1959);
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
					setState(1954);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1955);
					match(Comma);
					setState(1956);
					parameterDeclaration();
					}
					} 
				}
				setState(1961);
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
		enterRule(_localctx, 308, RULE_parameterDeclaration);
		int _la;
		try {
			setState(1976);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,236,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1963);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1962);
					attributeSpecifierSequence(0);
					}
				}

				setState(1965);
				declarationSpecifierSequence();
				setState(1966);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1969);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1968);
					attributeSpecifierSequence(0);
					}
				}

				setState(1971);
				declarationSpecifierSequence();
				setState(1972);
				declarator();
				setState(1973);
				match(Equal);
				setState(1974);
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
		enterRule(_localctx, 310, RULE_functionDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1979);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1978);
				attributeSpecifierSequence(0);
				}
			}

			setState(1982);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,238,_ctx) ) {
			case 1:
				{
				setState(1981);
				declarationSpecifierSequence();
				}
				break;
			}
			setState(1984);
			functionDeclarator();
			setState(1986);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Override || _la==Final) {
				{
				setState(1985);
				virtualSpecifierSequence(0);
				}
			}

			setState(1988);
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
		enterRule(_localctx, 312, RULE_functionDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1990);
			identifierExpression();
			setState(1991);
			functionParameters();
			setState(1992);
			functionQualifiers();
			setState(1994);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(1993);
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
		enterRule(_localctx, 314, RULE_functionBody);
		try {
			setState(2000);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,241,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1996);
				regularFunctionBody();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1997);
				functionTryBlock();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1998);
				explicitlyDefaultedFunction();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1999);
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
		enterRule(_localctx, 316, RULE_regularFunctionBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2003);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2002);
				constructorInitializer();
				}
			}

			setState(2005);
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
		enterRule(_localctx, 318, RULE_explicitlyDefaultedFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2007);
			match(Equal);
			setState(2008);
			match(Default);
			setState(2009);
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
		enterRule(_localctx, 320, RULE_deletedFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2011);
			match(Equal);
			setState(2012);
			match(Delete);
			setState(2013);
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
		enterRule(_localctx, 322, RULE_initializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2015);
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
		enterRule(_localctx, 324, RULE_braceOrEqualInitializer);
		try {
			setState(2020);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Equal:
				enterOuterAlt(_localctx, 1);
				{
				setState(2017);
				match(Equal);
				setState(2018);
				initializerClause();
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2019);
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
		enterRule(_localctx, 326, RULE_initializerClause);
		try {
			setState(2024);
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
				setState(2022);
				assignmentExpression();
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2023);
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
		int _startState = 328;
		enterRecursionRule(_localctx, 328, RULE_initializerList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2027);
			initializerClause();
			setState(2029);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,245,_ctx) ) {
			case 1:
				{
				setState(2028);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2039);
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
					setState(2031);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2032);
					match(Comma);
					setState(2033);
					initializerClause();
					setState(2035);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,246,_ctx) ) {
					case 1:
						{
						setState(2034);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2041);
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
		enterRule(_localctx, 330, RULE_bracedInitializerList);
		int _la;
		try {
			setState(2051);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,249,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2042);
				match(OpenBrace);
				setState(2043);
				initializerList(0);
				setState(2045);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(2044);
					match(Comma);
					}
				}

				setState(2047);
				match(CloseBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2049);
				match(OpenBrace);
				setState(2050);
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
		enterRule(_localctx, 332, RULE_expressionOrBracedInitializerList);
		try {
			setState(2055);
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
				setState(2053);
				expression(0);
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2054);
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
		enterRule(_localctx, 334, RULE_classSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2057);
			classHead();
			setState(2058);
			match(OpenBrace);
			setState(2060);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (OpenBracket - 67)) | (1L << (Semicolon - 67)) | (1L << (DoubleColon - 67)) | (1L << (Tilde - 67)))) != 0) || _la==Identifier) {
				{
				setState(2059);
				memberSpecification();
				}
			}

			setState(2062);
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
		enterRule(_localctx, 336, RULE_classHead);
		int _la;
		try {
			setState(2082);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,257,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2064);
				classKey();
				setState(2066);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2065);
					attributeSpecifierSequence(0);
					}
				}

				setState(2068);
				classHeadName();
				setState(2070);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Final) {
					{
					setState(2069);
					classVirtualSpecifier();
					}
				}

				setState(2073);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2072);
					baseClause();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2075);
				classKey();
				setState(2077);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2076);
					attributeSpecifier();
					}
				}

				setState(2080);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2079);
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
		enterRule(_localctx, 338, RULE_classHeadName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2085);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,258,_ctx) ) {
			case 1:
				{
				setState(2084);
				nestedNameSpecifier();
				}
				break;
			}
			setState(2087);
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
		enterRule(_localctx, 340, RULE_classVirtualSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2089);
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
		enterRule(_localctx, 342, RULE_classKey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2091);
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
		enterRule(_localctx, 344, RULE_memberSpecification);
		int _la;
		try {
			setState(2102);
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
			case OpenBracket:
			case Semicolon:
			case DoubleColon:
			case Tilde:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(2093);
				memberDeclaration();
				setState(2095);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (OpenBracket - 67)) | (1L << (Semicolon - 67)) | (1L << (DoubleColon - 67)) | (1L << (Tilde - 67)))) != 0) || _la==Identifier) {
					{
					setState(2094);
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
				setState(2097);
				accessSpecifier();
				setState(2098);
				match(Colon);
				setState(2100);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template) | (1L << ThreadLocal))) != 0) || ((((_la - 67)) & ~0x3f) == 0 && ((1L << (_la - 67)) & ((1L << (TypeDef - 67)) | (1L << (TypeName - 67)) | (1L << (Union - 67)) | (1L << (Unsigned - 67)) | (1L << (Using - 67)) | (1L << (Virtual - 67)) | (1L << (Void - 67)) | (1L << (Volatile - 67)) | (1L << (WChar - 67)) | (1L << (OpenBracket - 67)) | (1L << (Semicolon - 67)) | (1L << (DoubleColon - 67)) | (1L << (Tilde - 67)))) != 0) || _la==Identifier) {
					{
					setState(2099);
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
		enterRule(_localctx, 346, RULE_memberDeclaration);
		int _la;
		try {
			setState(2118);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,263,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2105);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2104);
					attributeSpecifierSequence(0);
					}
				}

				setState(2107);
				declarationSpecifierSequence();
				setState(2108);
				memberDeclaratorList(0);
				setState(2109);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2111);
				functionDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2112);
				usingDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2113);
				staticAssertDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2114);
				templateDeclaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2115);
				deductionGuide();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2116);
				aliasDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2117);
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
		int _startState = 348;
		enterRecursionRule(_localctx, 348, RULE_memberDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2121);
			memberDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(2128);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,264,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberDeclaratorList);
					setState(2123);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2124);
					match(Comma);
					setState(2125);
					memberDeclarator();
					}
					} 
				}
				setState(2130);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,264,_ctx);
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
		enterRule(_localctx, 350, RULE_memberDeclarator);
		int _la;
		try {
			setState(2146);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,268,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2131);
				declarator();
				setState(2133);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,265,_ctx) ) {
				case 1:
					{
					setState(2132);
					virtualSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2135);
				declarator();
				setState(2136);
				braceOrEqualInitializer();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2139);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2138);
					match(Identifier);
					}
				}

				setState(2142);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2141);
					attributeSpecifierSequence(0);
					}
				}

				setState(2144);
				match(Colon);
				setState(2145);
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
		int _startState = 352;
		enterRecursionRule(_localctx, 352, RULE_virtualSpecifierSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2149);
			virtualSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(2155);
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
					setState(2151);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2152);
					virtualSpecifier();
					}
					} 
				}
				setState(2157);
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
		enterRule(_localctx, 354, RULE_virtualSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2158);
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
		enterRule(_localctx, 356, RULE_pureSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2160);
			match(Equal);
			setState(2161);
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
		enterRule(_localctx, 358, RULE_baseClause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2163);
			match(Colon);
			setState(2164);
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
		int _startState = 360;
		enterRecursionRule(_localctx, 360, RULE_baseSpecifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2167);
			baseSpecifier();
			setState(2169);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,270,_ctx) ) {
			case 1:
				{
				setState(2168);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2179);
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
					setState(2171);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2172);
					match(Comma);
					setState(2173);
					baseSpecifier();
					setState(2175);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,271,_ctx) ) {
					case 1:
						{
						setState(2174);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2181);
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
		enterRule(_localctx, 362, RULE_baseSpecifier);
		int _la;
		try {
			setState(2203);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,278,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2183);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2182);
					attributeSpecifierSequence(0);
					}
				}

				setState(2185);
				classOrDecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2187);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2186);
					attributeSpecifierSequence(0);
					}
				}

				setState(2189);
				match(Virtual);
				setState(2191);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Private) | (1L << Protected) | (1L << Public))) != 0)) {
					{
					setState(2190);
					accessSpecifier();
					}
				}

				setState(2193);
				classOrDecltype();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2195);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2194);
					attributeSpecifierSequence(0);
					}
				}

				setState(2197);
				accessSpecifier();
				setState(2199);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Virtual) {
					{
					setState(2198);
					match(Virtual);
					}
				}

				setState(2201);
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
		enterRule(_localctx, 364, RULE_classOrDecltype);
		try {
			setState(2214);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,280,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2206);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,279,_ctx) ) {
				case 1:
					{
					setState(2205);
					nestedNameSpecifier();
					}
					break;
				}
				setState(2208);
				className();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2209);
				nestedNameSpecifier();
				setState(2210);
				match(Template);
				setState(2211);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2213);
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
		enterRule(_localctx, 366, RULE_accessSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2216);
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
		enterRule(_localctx, 368, RULE_conversionFunctionIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2218);
			match(Operator);
			setState(2219);
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
		enterRule(_localctx, 370, RULE_conversionTypeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2221);
			typeSpecifierSequence();
			setState(2223);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,281,_ctx) ) {
			case 1:
				{
				setState(2222);
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
		enterRule(_localctx, 372, RULE_conversionDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2225);
			pointerOperator();
			setState(2227);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,282,_ctx) ) {
			case 1:
				{
				setState(2226);
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
		enterRule(_localctx, 374, RULE_constructorInitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2229);
			match(Colon);
			setState(2230);
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
		int _startState = 376;
		enterRecursionRule(_localctx, 376, RULE_memberInitializerList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2233);
			memberInitializer();
			setState(2235);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,283,_ctx) ) {
			case 1:
				{
				setState(2234);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2245);
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
					setState(2237);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2238);
					match(Comma);
					setState(2239);
					memberInitializer();
					setState(2241);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,284,_ctx) ) {
					case 1:
						{
						setState(2240);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2247);
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
		enterRule(_localctx, 378, RULE_memberInitializer);
		int _la;
		try {
			setState(2258);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,287,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2248);
				memberInitializerIdentifier();
				setState(2249);
				match(OpenParenthesis);
				setState(2251);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast) | (1L << This))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 129)) & ~0x3f) == 0 && ((1L << (_la - 129)) & ((1L << (Zero - 129)) | (1L << (IntegerLiteral - 129)) | (1L << (FloatingPointLiteral - 129)) | (1L << (CharacterLiteral - 129)) | (1L << (StringLiteral - 129)) | (1L << (UserDefinedIntegerLiteral - 129)) | (1L << (UserDefinedFloatingPointLiteral - 129)) | (1L << (UserDefinedCharacterLiteral - 129)) | (1L << (UserDefinedStringLiteral - 129)) | (1L << (Identifier - 129)))) != 0)) {
					{
					setState(2250);
					expressionList();
					}
				}

				setState(2253);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2255);
				memberInitializerIdentifier();
				setState(2256);
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
		enterRule(_localctx, 380, RULE_memberInitializerIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2260);
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
		enterRule(_localctx, 382, RULE_operatorFunctionIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2262);
			match(Operator);
			setState(2263);
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
		enterRule(_localctx, 384, RULE_anyOperator);
		try {
			setState(2313);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,288,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2265);
				match(New);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2266);
				match(Delete);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2267);
				match(New);
				setState(2268);
				match(OpenBrace);
				setState(2269);
				match(CloseBracket);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2270);
				match(Delete);
				setState(2271);
				match(OpenBrace);
				setState(2272);
				match(CloseBracket);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2273);
				match(Plus);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2274);
				match(Minus);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2275);
				match(Asterisk);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2276);
				match(ForwardSlash);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2277);
				match(Percent);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2278);
				match(Caret);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2279);
				match(Ampersand);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(2280);
				match(VerticalBar);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(2281);
				match(Tilde);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(2282);
				match(ExclamationMark);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(2283);
				match(Equal);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(2284);
				match(LessThan);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(2285);
				match(GreaterThan);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(2286);
				match(PlusEqual);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(2287);
				match(MinusEqual);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(2288);
				match(AsteriskEqual);
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(2289);
				match(ForwardSlashEqual);
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(2290);
				match(PercentEqual);
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(2291);
				match(CaretEqual);
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(2292);
				match(AmpersandEqual);
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(2293);
				match(VerticalBarEqual);
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(2294);
				match(DoubleLessThan);
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(2295);
				match(DoubleGreaterThan);
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(2296);
				match(DoubleGreaterThanEqual);
				}
				break;
			case 29:
				enterOuterAlt(_localctx, 29);
				{
				setState(2297);
				match(DoubleLessThanEqual);
				}
				break;
			case 30:
				enterOuterAlt(_localctx, 30);
				{
				setState(2298);
				match(DoubleEqual);
				}
				break;
			case 31:
				enterOuterAlt(_localctx, 31);
				{
				setState(2299);
				match(ExclamationMarkEqual);
				}
				break;
			case 32:
				enterOuterAlt(_localctx, 32);
				{
				setState(2300);
				match(LessThanEqual);
				}
				break;
			case 33:
				enterOuterAlt(_localctx, 33);
				{
				setState(2301);
				match(GreaterThanEqual);
				}
				break;
			case 34:
				enterOuterAlt(_localctx, 34);
				{
				setState(2302);
				match(DoubleAmpersand);
				}
				break;
			case 35:
				enterOuterAlt(_localctx, 35);
				{
				setState(2303);
				match(DoubleVerticalBar);
				}
				break;
			case 36:
				enterOuterAlt(_localctx, 36);
				{
				setState(2304);
				match(DoublePlus);
				}
				break;
			case 37:
				enterOuterAlt(_localctx, 37);
				{
				setState(2305);
				match(DoubleMinus);
				}
				break;
			case 38:
				enterOuterAlt(_localctx, 38);
				{
				setState(2306);
				match(Comma);
				}
				break;
			case 39:
				enterOuterAlt(_localctx, 39);
				{
				setState(2307);
				match(ArrowAsterisk);
				}
				break;
			case 40:
				enterOuterAlt(_localctx, 40);
				{
				setState(2308);
				match(Arrow);
				}
				break;
			case 41:
				enterOuterAlt(_localctx, 41);
				{
				setState(2309);
				match(OpenParenthesis);
				setState(2310);
				match(CloseParenthesis);
				}
				break;
			case 42:
				enterOuterAlt(_localctx, 42);
				{
				setState(2311);
				match(OpenBracket);
				setState(2312);
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
		enterRule(_localctx, 386, RULE_literalOperatorIdentifier);
		try {
			setState(2320);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,289,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2315);
				match(Operator);
				setState(2316);
				match(StringLiteral);
				setState(2317);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2318);
				match(Operator);
				setState(2319);
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
		enterRule(_localctx, 388, RULE_templateDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2322);
			match(Template);
			setState(2323);
			match(LessThan);
			setState(2324);
			templateParameterList(0);
			setState(2325);
			match(GreaterThan);
			setState(2326);
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
		int _startState = 390;
		enterRecursionRule(_localctx, 390, RULE_templateParameterList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2329);
			templateParameter();
			}
			_ctx.stop = _input.LT(-1);
			setState(2336);
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
					setState(2331);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2332);
					match(Comma);
					setState(2333);
					templateParameter();
					}
					} 
				}
				setState(2338);
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
		enterRule(_localctx, 392, RULE_templateParameter);
		try {
			setState(2341);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,291,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2339);
				typeParameter();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2340);
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
		enterRule(_localctx, 394, RULE_typeParameter);
		int _la;
		try {
			setState(2379);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,298,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2343);
				typeParameterKey();
				setState(2345);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,292,_ctx) ) {
				case 1:
					{
					setState(2344);
					match(Ellipsis);
					}
					break;
				}
				setState(2348);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,293,_ctx) ) {
				case 1:
					{
					setState(2347);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2350);
				typeParameterKey();
				setState(2352);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2351);
					match(Identifier);
					}
				}

				setState(2354);
				match(Equal);
				setState(2355);
				typeIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2357);
				match(Template);
				setState(2358);
				match(LessThan);
				setState(2359);
				templateParameterList(0);
				setState(2360);
				match(GreaterThan);
				setState(2361);
				typeParameterKey();
				setState(2363);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,295,_ctx) ) {
				case 1:
					{
					setState(2362);
					match(Ellipsis);
					}
					break;
				}
				setState(2366);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,296,_ctx) ) {
				case 1:
					{
					setState(2365);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
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
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2373);
					match(Identifier);
					}
				}

				setState(2376);
				match(Equal);
				setState(2377);
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
		enterRule(_localctx, 396, RULE_typeParameterKey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2381);
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
		enterRule(_localctx, 398, RULE_simpleTemplateIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2383);
			templateName();
			setState(2384);
			match(LessThan);
			setState(2386);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || _la==Operator || ((((_la - 90)) & ~0x3f) == 0 && ((1L << (_la - 90)) & ((1L << (DoubleColon - 90)) | (1L << (Tilde - 90)) | (1L << (Identifier - 90)))) != 0)) {
				{
				setState(2385);
				templateArgumentList(0);
				}
			}

			setState(2388);
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
		enterRule(_localctx, 400, RULE_templateIdentifier);
		int _la;
		try {
			setState(2405);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,302,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2390);
				simpleTemplateIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2391);
				operatorFunctionIdentifier();
				setState(2392);
				match(LessThan);
				setState(2394);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || _la==Operator || ((((_la - 90)) & ~0x3f) == 0 && ((1L << (_la - 90)) & ((1L << (DoubleColon - 90)) | (1L << (Tilde - 90)) | (1L << (Identifier - 90)))) != 0)) {
					{
					setState(2393);
					templateArgumentList(0);
					}
				}

				setState(2396);
				match(GreaterThan);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2398);
				literalOperatorIdentifier();
				setState(2399);
				match(LessThan);
				setState(2401);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || _la==Operator || ((((_la - 90)) & ~0x3f) == 0 && ((1L << (_la - 90)) & ((1L << (DoubleColon - 90)) | (1L << (Tilde - 90)) | (1L << (Identifier - 90)))) != 0)) {
					{
					setState(2400);
					templateArgumentList(0);
					}
				}

				setState(2403);
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
		int _startState = 402;
		enterRecursionRule(_localctx, 402, RULE_templateArgumentList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2408);
			templateArgument();
			setState(2410);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,303,_ctx) ) {
			case 1:
				{
				setState(2409);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2420);
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
					setState(2412);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2413);
					match(Comma);
					setState(2414);
					templateArgument();
					setState(2416);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,304,_ctx) ) {
					case 1:
						{
						setState(2415);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2422);
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
		enterRule(_localctx, 404, RULE_templateArgument);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2423);
			identifierExpression();
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 406, RULE_typenameSpecifier);
		int _la;
		try {
			setState(2436);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,307,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2425);
				match(TypeName);
				setState(2426);
				nestedNameSpecifier();
				setState(2427);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2429);
				match(TypeName);
				setState(2430);
				nestedNameSpecifier();
				setState(2432);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(2431);
					match(Template);
					}
				}

				setState(2434);
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
		enterRule(_localctx, 408, RULE_explicitInstantiation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2439);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Extern) {
				{
				setState(2438);
				match(Extern);
				}
			}

			setState(2441);
			match(Template);
			setState(2442);
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
		enterRule(_localctx, 410, RULE_explicitSpecialization);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2444);
			match(Template);
			setState(2445);
			match(LessThan);
			setState(2446);
			match(GreaterThan);
			setState(2447);
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
		enterRule(_localctx, 412, RULE_deductionGuide);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2450);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Explicit) {
				{
				setState(2449);
				match(Explicit);
				}
			}

			setState(2452);
			templateName();
			setState(2453);
			match(OpenParenthesis);
			setState(2454);
			parameterDeclarationClause();
			setState(2455);
			match(CloseParenthesis);
			setState(2456);
			match(Arrow);
			setState(2457);
			simpleTemplateIdentifier();
			setState(2458);
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
		enterRule(_localctx, 414, RULE_tryBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2460);
			match(Try);
			setState(2461);
			compoundStatement();
			setState(2462);
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
		enterRule(_localctx, 416, RULE_functionTryBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2464);
			match(Try);
			setState(2466);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2465);
				constructorInitializer();
				}
			}

			setState(2468);
			compoundStatement();
			setState(2469);
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
		enterRule(_localctx, 418, RULE_handlerSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2471);
			handler();
			setState(2473);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,311,_ctx) ) {
			case 1:
				{
				setState(2472);
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
		enterRule(_localctx, 420, RULE_handler);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2475);
			match(Catch);
			setState(2476);
			match(OpenParenthesis);
			setState(2477);
			exceptionDeclaration();
			setState(2478);
			match(CloseParenthesis);
			setState(2479);
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
		enterRule(_localctx, 422, RULE_exceptionDeclaration);
		int _la;
		try {
			setState(2495);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,315,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2482);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2481);
					attributeSpecifierSequence(0);
					}
				}

				setState(2484);
				typeSpecifierSequence();
				setState(2485);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2488);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2487);
					attributeSpecifierSequence(0);
					}
				}

				setState(2490);
				typeSpecifierSequence();
				setState(2492);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || ((((_la - 82)) & ~0x3f) == 0 && ((1L << (_la - 82)) & ((1L << (OpenBracket - 82)) | (1L << (OpenParenthesis - 82)) | (1L << (Ellipsis - 82)) | (1L << (DoubleColon - 82)) | (1L << (Asterisk - 82)) | (1L << (Ampersand - 82)) | (1L << (DoubleAmpersand - 82)) | (1L << (Identifier - 82)))) != 0)) {
					{
					setState(2491);
					abstractDeclarator();
					}
				}

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2494);
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
		enterRule(_localctx, 424, RULE_noExceptionSpecifier);
		try {
			setState(2506);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,316,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2497);
				match(NoExcept);
				setState(2498);
				match(OpenParenthesis);
				setState(2499);
				constantExpression();
				setState(2500);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2502);
				match(NoExcept);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2503);
				match(Throw);
				setState(2504);
				match(OpenParenthesis);
				setState(2505);
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
		int _startState = 426;
		enterRecursionRule(_localctx, 426, RULE_identifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2509);
			match(Identifier);
			}
			_ctx.stop = _input.LT(-1);
			setState(2516);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,317,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new IdentifierListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_identifierList);
					setState(2511);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2512);
					match(Comma);
					setState(2513);
					match(Identifier);
					}
					} 
				}
				setState(2518);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,317,_ctx);
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
		enterRule(_localctx, 428, RULE_literal);
		try {
			setState(2526);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Zero:
			case IntegerLiteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(2519);
				integerLiteral();
				}
				break;
			case FloatingPointLiteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(2520);
				match(FloatingPointLiteral);
				}
				break;
			case CharacterLiteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(2521);
				match(CharacterLiteral);
				}
				break;
			case StringLiteral:
				enterOuterAlt(_localctx, 4);
				{
				setState(2522);
				match(StringLiteral);
				}
				break;
			case False:
			case True:
				enterOuterAlt(_localctx, 5);
				{
				setState(2523);
				booleanLiteral();
				}
				break;
			case Nullptr:
				enterOuterAlt(_localctx, 6);
				{
				setState(2524);
				pointerLiteral();
				}
				break;
			case UserDefinedIntegerLiteral:
			case UserDefinedFloatingPointLiteral:
			case UserDefinedCharacterLiteral:
			case UserDefinedStringLiteral:
				enterOuterAlt(_localctx, 7);
				{
				setState(2525);
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
		enterRule(_localctx, 430, RULE_integerLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2528);
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
		enterRule(_localctx, 432, RULE_booleanLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2530);
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
		enterRule(_localctx, 434, RULE_pointerLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2532);
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
		enterRule(_localctx, 436, RULE_userDefinedLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2534);
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
		case 103:
			return enumeratorList_sempred((EnumeratorListContext)_localctx, predIndex);
		case 110:
			return enclosingNamespaceSpecifier_sempred((EnclosingNamespaceSpecifierContext)_localctx, predIndex);
		case 115:
			return usingDeclaratorList_sempred((UsingDeclaratorListContext)_localctx, predIndex);
		case 120:
			return attributeSpecifierSequence_sempred((AttributeSpecifierSequenceContext)_localctx, predIndex);
		case 124:
			return attributeList_sempred((AttributeListContext)_localctx, predIndex);
		case 130:
			return balancedTokenSequence_sempred((BalancedTokenSequenceContext)_localctx, predIndex);
		case 132:
			return initializerDeclaratorList_sempred((InitializerDeclaratorListContext)_localctx, predIndex);
		case 136:
			return noPointerDeclarator_sempred((NoPointerDeclaratorContext)_localctx, predIndex);
		case 149:
			return noPointerAbstractDeclarator_sempred((NoPointerAbstractDeclaratorContext)_localctx, predIndex);
		case 151:
			return noPointerAbstractPackDeclarator_sempred((NoPointerAbstractPackDeclaratorContext)_localctx, predIndex);
		case 153:
			return parameterDeclarationList_sempred((ParameterDeclarationListContext)_localctx, predIndex);
		case 164:
			return initializerList_sempred((InitializerListContext)_localctx, predIndex);
		case 174:
			return memberDeclaratorList_sempred((MemberDeclaratorListContext)_localctx, predIndex);
		case 176:
			return virtualSpecifierSequence_sempred((VirtualSpecifierSequenceContext)_localctx, predIndex);
		case 180:
			return baseSpecifierList_sempred((BaseSpecifierListContext)_localctx, predIndex);
		case 188:
			return memberInitializerList_sempred((MemberInitializerListContext)_localctx, predIndex);
		case 195:
			return templateParameterList_sempred((TemplateParameterListContext)_localctx, predIndex);
		case 201:
			return templateArgumentList_sempred((TemplateArgumentListContext)_localctx, predIndex);
		case 213:
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
	private boolean enclosingNamespaceSpecifier_sempred(EnclosingNamespaceSpecifierContext _localctx, int predIndex) {
		switch (predIndex) {
		case 31:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean usingDeclaratorList_sempred(UsingDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 32:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean attributeSpecifierSequence_sempred(AttributeSpecifierSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 33:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean attributeList_sempred(AttributeListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 34:
			return precpred(_ctx, 3);
		case 35:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean balancedTokenSequence_sempred(BalancedTokenSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 36:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initializerDeclaratorList_sempred(InitializerDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 37:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean noPointerDeclarator_sempred(NoPointerDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 38:
			return precpred(_ctx, 3);
		case 39:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean noPointerAbstractDeclarator_sempred(NoPointerAbstractDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 40:
			return precpred(_ctx, 4);
		case 41:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean noPointerAbstractPackDeclarator_sempred(NoPointerAbstractPackDeclaratorContext _localctx, int predIndex) {
		switch (predIndex) {
		case 42:
			return precpred(_ctx, 3);
		case 43:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean parameterDeclarationList_sempred(ParameterDeclarationListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 44:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean initializerList_sempred(InitializerListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 45:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean memberDeclaratorList_sempred(MemberDeclaratorListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 46:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean virtualSpecifierSequence_sempred(VirtualSpecifierSequenceContext _localctx, int predIndex) {
		switch (predIndex) {
		case 47:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean baseSpecifierList_sempred(BaseSpecifierListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 48:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean memberInitializerList_sempred(MemberInitializerListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 49:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean templateParameterList_sempred(TemplateParameterListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 50:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean templateArgumentList_sempred(TemplateArgumentListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 51:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean identifierList_sempred(IdentifierListContext _localctx, int predIndex) {
		switch (predIndex) {
		case 52:
			return precpred(_ctx, 1);
		}
		return true;
	}

	private static final int _serializedATNSegments = 2;
	private static final String _serializedATNSegment0 =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u008c\u09eb\4\2\t"+
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
		"\4\u00db\t\u00db\4\u00dc\t\u00dc\3\2\3\2\5\2\u01bb\n\2\3\3\3\3\3\4\3\4"+
		"\5\4\u01c1\n\4\3\5\3\5\3\6\5\6\u01c6\n\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\5\7\u01d3\n\7\3\b\3\b\5\b\u01d7\n\b\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\t\3\t\3\t\5\t\u01e2\n\t\3\n\3\n\5\n\u01e6\n\n\3\n\3\n\3\13\3\13"+
		"\5\13\u01ec\n\13\3\13\3\13\3\13\5\13\u01f1\n\13\3\13\3\13\3\13\5\13\u01f6"+
		"\n\13\5\13\u01f8\n\13\3\f\3\f\3\f\5\f\u01fd\n\f\3\f\5\f\u0200\n\f\3\f"+
		"\3\f\3\f\5\f\u0205\n\f\5\f\u0207\n\f\3\r\3\r\5\r\u020b\n\r\3\r\3\r\3\16"+
		"\3\16\5\16\u0211\n\16\3\16\3\16\3\17\3\17\3\17\3\17\5\17\u0219\n\17\3"+
		"\17\5\17\u021c\n\17\3\17\5\17\u021f\n\17\3\17\5\17\u0222\n\17\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\5\20\u022a\n\20\3\21\3\21\3\22\3\22\3\22\5\22\u0231"+
		"\n\22\3\22\3\22\3\22\3\22\5\22\u0237\n\22\7\22\u0239\n\22\f\22\16\22\u023c"+
		"\13\22\3\23\3\23\3\23\3\24\5\24\u0242\n\24\3\24\3\24\3\24\3\24\5\24\u0248"+
		"\n\24\3\25\5\25\u024b\n\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26"+
		"\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\26"+
		"\5\26\u0264\n\26\3\27\3\27\3\30\3\30\3\30\5\30\u026b\n\30\3\30\3\30\3"+
		"\31\3\31\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3\34\3\34\3"+
		"\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\3\35\5\35\u0287\n\35\3\36"+
		"\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u0294\n\36\3\36"+
		"\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u029e\n\36\3\36\3\36\3\36\3\36"+
		"\5\36\u02a4\n\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\7\36\u02ae\n"+
		"\36\f\36\16\36\u02b1\13\36\3\37\3\37\3 \5 \u02b6\n \3 \3 \3 \3 \3 \3 "+
		"\3 \3 \3 \3 \3 \3 \3 \3 \3 \3 \5 \u02c8\n \3!\3!\3!\3!\3!\3!\3!\3!\3!"+
		"\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\5!\u02e6\n!"+
		"\3\"\3\"\3#\5#\u02eb\n#\3#\3#\5#\u02ef\n#\3#\3#\5#\u02f3\n#\3#\5#\u02f6"+
		"\n#\3#\3#\5#\u02fa\n#\3#\3#\3#\3#\5#\u0300\n#\5#\u0302\n#\3$\3$\3$\3$"+
		"\3%\3%\5%\u030a\n%\3&\3&\5&\u030e\n&\3&\3&\3\'\3\'\3\'\3\'\3\'\5\'\u0317"+
		"\n\'\3\'\3\'\3\'\3\'\3\'\5\'\u031e\n\'\7\'\u0320\n\'\f\'\16\'\u0323\13"+
		"\'\3(\3(\5(\u0327\n(\3(\3(\5(\u032b\n(\3)\5)\u032e\n)\3)\3)\3)\5)\u0333"+
		"\n)\3)\3)\3)\3)\5)\u0339\n)\3*\3*\3*\3*\3*\3+\3+\3+\3+\3+\3+\5+\u0346"+
		"\n+\3,\3,\3,\3,\3,\3,\3,\3,\3,\7,\u0351\n,\f,\16,\u0354\13,\3-\3-\3-\3"+
		"-\3-\3-\3-\3-\3-\3-\3-\3-\7-\u0362\n-\f-\16-\u0365\13-\3.\3.\3.\3.\3."+
		"\3.\3.\3.\3.\7.\u0370\n.\f.\16.\u0373\13.\3/\3/\3/\3/\3/\3/\3/\3/\3/\7"+
		"/\u037e\n/\f/\16/\u0381\13/\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3\60\3"+
		"\60\3\60\3\60\3\60\3\60\3\60\3\60\7\60\u0392\n\60\f\60\16\60\u0395\13"+
		"\60\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\7\61\u03a0\n\61\f\61"+
		"\16\61\u03a3\13\61\3\62\3\62\3\62\3\62\3\62\3\62\7\62\u03ab\n\62\f\62"+
		"\16\62\u03ae\13\62\3\63\3\63\3\63\3\63\3\63\3\63\7\63\u03b6\n\63\f\63"+
		"\16\63\u03b9\13\63\3\64\3\64\3\64\3\64\3\64\3\64\7\64\u03c1\n\64\f\64"+
		"\16\64\u03c4\13\64\3\65\3\65\3\65\3\65\3\65\3\65\7\65\u03cc\n\65\f\65"+
		"\16\65\u03cf\13\65\3\66\3\66\3\66\3\66\3\66\3\66\7\66\u03d7\n\66\f\66"+
		"\16\66\u03da\13\66\3\67\3\67\3\67\3\67\3\67\3\67\3\67\5\67\u03e3\n\67"+
		"\38\38\58\u03e7\n8\39\39\39\39\39\39\59\u03ef\n9\3:\3:\3;\3;\3;\3;\3;"+
		"\3;\7;\u03f9\n;\f;\16;\u03fc\13;\3<\3<\3=\3=\5=\u0402\n=\3=\3=\5=\u0406"+
		"\n=\3=\3=\5=\u040a\n=\3=\3=\5=\u040e\n=\3=\3=\5=\u0412\n=\3=\3=\3=\5="+
		"\u0417\n=\3=\5=\u041a\n=\3>\3>\5>\u041e\n>\3?\3?\5?\u0422\n?\3?\3?\3?"+
		"\3?\5?\u0428\n?\3@\5@\u042b\n@\3@\3@\3@\3@\5@\u0431\n@\3@\3@\3@\3@\3@"+
		"\3@\5@\u0439\n@\3@\3@\3@\5@\u043e\n@\3A\5A\u0441\nA\3A\3A\3B\3B\5B\u0447"+
		"\nB\3B\3B\3C\3C\3C\3C\3C\7C\u0450\nC\fC\16C\u0453\13C\3D\3D\5D\u0457\n"+
		"D\3D\3D\5D\u045b\nD\3D\3D\3D\3D\3D\3D\5D\u0463\nD\3D\3D\5D\u0467\nD\3"+
		"D\3D\3D\3D\3D\3D\3D\3D\3D\5D\u0472\nD\3D\3D\3D\3D\5D\u0478\nD\3E\3E\3"+
		"E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\5E\u048c\nE\3E\3E\5E\u0490"+
		"\nE\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\3E\5E\u049d\nE\3F\5F\u04a0\nF\3F\3F"+
		"\3F\3F\5F\u04a6\nF\3F\3F\5F\u04aa\nF\3F\3F\3F\3F\5F\u04b0\nF\3G\5G\u04b3"+
		"\nG\3G\3G\3G\3H\3H\3I\3I\3I\3I\3I\3I\5I\u04c0\nI\3I\3I\3I\3I\5I\u04c6"+
		"\nI\3J\3J\3K\3K\3K\3K\3K\7K\u04cf\nK\fK\16K\u04d2\13K\3L\3L\3L\3L\3L\3"+
		"L\3L\3L\3L\3L\3L\5L\u04df\nL\3M\3M\3M\3M\3M\3M\3M\3M\5M\u04e9\nM\3N\5"+
		"N\u04ec\nN\3N\3N\3N\3O\3O\3O\5O\u04f4\nO\3O\3O\3O\3O\3P\3P\5P\u04fc\n"+
		"P\3P\3P\3P\3P\3P\3P\3P\3P\5P\u0506\nP\3P\3P\5P\u050a\nP\3P\3P\3P\3P\3"+
		"P\3P\5P\u0512\nP\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\5Q\u0522\n"+
		"Q\3R\3R\3S\3S\3S\3T\3T\3T\3T\3T\3T\5T\u052f\nT\3U\5U\u0532\nU\3U\3U\5"+
		"U\u0536\nU\3U\5U\u0539\nU\3V\3V\3W\3W\3X\3X\5X\u0541\nX\3Y\3Y\3Z\3Z\3"+
		"[\3[\3[\3[\5[\u054b\n[\3\\\3\\\5\\\u054f\n\\\3\\\3\\\3\\\5\\\u0554\n\\"+
		"\3]\3]\3]\5]\u0559\n]\3^\3^\5^\u055d\n^\3^\3^\3^\5^\u0562\n^\3_\5_\u0565"+
		"\n_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\3_\5_\u0577\n_\3`\3`"+
		"\5`\u057b\n`\3a\3a\3a\3a\3a\3a\3a\3a\3a\5a\u0586\na\3b\3b\5b\u058a\nb"+
		"\3b\5b\u058d\nb\3b\3b\3b\3b\3b\3b\3b\3b\5b\u0597\nb\3b\3b\3b\3b\5b\u059d"+
		"\nb\3b\5b\u05a0\nb\3c\3c\3c\5c\u05a5\nc\3c\3c\3c\3c\3c\3c\3c\3c\5c\u05af"+
		"\nc\3d\3d\5d\u05b3\nd\3d\5d\u05b6\nd\3d\5d\u05b9\nd\3e\5e\u05bc\ne\3e"+
		"\3e\3f\3f\5f\u05c2\nf\3f\5f\u05c5\nf\3f\3f\5f\u05c9\nf\3f\3f\3g\3g\3g"+
		"\3g\3g\5g\u05d2\ng\3h\3h\3h\3i\3i\3i\3i\3i\3i\7i\u05dd\ni\fi\16i\u05e0"+
		"\13i\3j\3j\3j\3j\3j\5j\u05e7\nj\3k\3k\5k\u05eb\nk\3l\3l\3l\5l\u05f0\n"+
		"l\3m\5m\u05f3\nm\3m\3m\5m\u05f7\nm\3m\3m\3m\3m\3m\3n\5n\u05ff\nn\3n\3"+
		"n\5n\u0603\nn\3n\3n\3n\3n\3o\3o\3o\3o\3o\3o\3o\3o\3p\3p\3p\3p\3p\3p\7"+
		"p\u0617\np\fp\16p\u061a\13p\3q\5q\u061d\nq\3r\3r\3r\3r\3r\3r\3s\5s\u0626"+
		"\ns\3s\3s\3t\3t\3t\3t\3u\3u\3u\5u\u0631\nu\3u\3u\3u\3u\5u\u0637\nu\7u"+
		"\u0639\nu\fu\16u\u063c\13u\3v\5v\u063f\nv\3v\3v\3v\3w\5w\u0645\nw\3w\3"+
		"w\3w\5w\u064a\nw\3w\3w\3w\3x\5x\u0650\nx\3x\3x\3x\3x\3x\3x\3y\3y\3y\3"+
		"y\5y\u065c\ny\3y\3y\3y\3y\5y\u0662\ny\3z\3z\3z\3z\3z\7z\u0669\nz\fz\16"+
		"z\u066c\13z\3{\3{\3{\5{\u0671\n{\3{\3{\3{\3{\3{\5{\u0678\n{\3|\3|\3|\3"+
		"|\5|\u067e\n|\3|\3|\3|\3|\3|\3|\5|\u0686\n|\3|\3|\5|\u068a\n|\3}\3}\3"+
		"}\3}\3~\3~\5~\u0692\n~\3~\3~\3~\5~\u0697\n~\3~\3~\3~\5~\u069c\n~\3~\3"+
		"~\3~\3~\3~\7~\u06a3\n~\f~\16~\u06a6\13~\3\177\3\177\5\177\u06aa\n\177"+
		"\3\u0080\3\u0080\5\u0080\u06ae\n\u0080\3\u0081\3\u0081\3\u0081\3\u0081"+
		"\3\u0082\3\u0082\3\u0083\3\u0083\5\u0083\u06b8\n\u0083\3\u0083\3\u0083"+
		"\3\u0084\3\u0084\3\u0084\3\u0084\3\u0084\7\u0084\u06c1\n\u0084\f\u0084"+
		"\16\u0084\u06c4\13\u0084\3\u0085\3\u0085\5\u0085\u06c8\n\u0085\3\u0085"+
		"\3\u0085\3\u0085\5\u0085\u06cd\n\u0085\3\u0085\3\u0085\3\u0085\5\u0085"+
		"\u06d2\n\u0085\3\u0085\3\u0085\5\u0085\u06d6\n\u0085\3\u0086\3\u0086\3"+
		"\u0086\3\u0086\3\u0086\3\u0086\7\u0086\u06de\n\u0086\f\u0086\16\u0086"+
		"\u06e1\13\u0086\3\u0087\3\u0087\5\u0087\u06e5\n\u0087\3\u0088\3\u0088"+
		"\5\u0088\u06e9\n\u0088\3\u0089\3\u0089\3\u0089\3\u008a\3\u008a\5\u008a"+
		"\u06f0\n\u008a\3\u008a\3\u008a\5\u008a\u06f4\n\u008a\3\u008a\3\u008a\3"+
		"\u008a\3\u008a\5\u008a\u06fa\n\u008a\3\u008a\3\u008a\3\u008a\5\u008a\u06ff"+
		"\n\u008a\3\u008a\3\u008a\5\u008a\u0703\n\u008a\3\u008a\3\u008a\7\u008a"+
		"\u0707\n\u008a\f\u008a\16\u008a\u070a\13\u008a\3\u008b\3\u008b\3\u008b"+
		"\3\u008c\3\u008c\3\u008c\3\u008c\3\u008d\5\u008d\u0714\n\u008d\3\u008d"+
		"\5\u008d\u0717\n\u008d\3\u008d\5\u008d\u071a\n\u008d\3\u008d\5\u008d\u071d"+
		"\n\u008d\3\u008e\3\u008e\3\u008e\3\u008f\3\u008f\5\u008f\u0724\n\u008f"+
		"\3\u008f\5\u008f\u0727\n\u008f\3\u008f\3\u008f\5\u008f\u072b\n\u008f\3"+
		"\u008f\3\u008f\5\u008f\u072f\n\u008f\3\u008f\3\u008f\3\u008f\5\u008f\u0734"+
		"\n\u008f\3\u008f\5\u008f\u0737\n\u008f\5\u008f\u0739\n\u008f\3\u0090\3"+
		"\u0090\5\u0090\u073d\n\u0090\3\u0091\3\u0091\3\u0092\3\u0092\3\u0092\3"+
		"\u0093\3\u0093\5\u0093\u0746\n\u0093\3\u0094\3\u0094\5\u0094\u074a\n\u0094"+
		"\3\u0095\3\u0095\5\u0095\u074e\n\u0095\3\u0095\3\u0095\3\u0095\3\u0095"+
		"\5\u0095\u0754\n\u0095\3\u0096\3\u0096\3\u0096\5\u0096\u0759\n\u0096\5"+
		"\u0096\u075b\n\u0096\3\u0097\3\u0097\3\u0097\3\u0097\5\u0097\u0761\n\u0097"+
		"\3\u0097\3\u0097\5\u0097\u0765\n\u0097\3\u0097\3\u0097\3\u0097\3\u0097"+
		"\5\u0097\u076b\n\u0097\3\u0097\3\u0097\3\u0097\3\u0097\3\u0097\5\u0097"+
		"\u0772\n\u0097\3\u0097\3\u0097\5\u0097\u0776\n\u0097\7\u0097\u0778\n\u0097"+
		"\f\u0097\16\u0097\u077b\13\u0097\3\u0098\3\u0098\3\u0098\3\u0098\5\u0098"+
		"\u0781\n\u0098\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099\3\u0099"+
		"\3\u0099\5\u0099\u078b\n\u0099\3\u0099\3\u0099\5\u0099\u078f\n\u0099\7"+
		"\u0099\u0791\n\u0099\f\u0099\16\u0099\u0794\13\u0099\3\u009a\5\u009a\u0797"+
		"\n\u009a\3\u009a\5\u009a\u079a\n\u009a\3\u009a\3\u009a\3\u009a\3\u009a"+
		"\5\u009a\u07a0\n\u009a\3\u009b\3\u009b\3\u009b\3\u009b\3\u009b\3\u009b"+
		"\7\u009b\u07a8\n\u009b\f\u009b\16\u009b\u07ab\13\u009b\3\u009c\5\u009c"+
		"\u07ae\n\u009c\3\u009c\3\u009c\3\u009c\3\u009c\5\u009c\u07b4\n\u009c\3"+
		"\u009c\3\u009c\3\u009c\3\u009c\3\u009c\5\u009c\u07bb\n\u009c\3\u009d\5"+
		"\u009d\u07be\n\u009d\3\u009d\5\u009d\u07c1\n\u009d\3\u009d\3\u009d\5\u009d"+
		"\u07c5\n\u009d\3\u009d\3\u009d\3\u009e\3\u009e\3\u009e\3\u009e\5\u009e"+
		"\u07cd\n\u009e\3\u009f\3\u009f\3\u009f\3\u009f\5\u009f\u07d3\n\u009f\3"+
		"\u00a0\5\u00a0\u07d6\n\u00a0\3\u00a0\3\u00a0\3\u00a1\3\u00a1\3\u00a1\3"+
		"\u00a1\3\u00a2\3\u00a2\3\u00a2\3\u00a2\3\u00a3\3\u00a3\3\u00a4\3\u00a4"+
		"\3\u00a4\5\u00a4\u07e7\n\u00a4\3\u00a5\3\u00a5\5\u00a5\u07eb\n\u00a5\3"+
		"\u00a6\3\u00a6\3\u00a6\5\u00a6\u07f0\n\u00a6\3\u00a6\3\u00a6\3\u00a6\3"+
		"\u00a6\5\u00a6\u07f6\n\u00a6\7\u00a6\u07f8\n\u00a6\f\u00a6\16\u00a6\u07fb"+
		"\13\u00a6\3\u00a7\3\u00a7\3\u00a7\5\u00a7\u0800\n\u00a7\3\u00a7\3\u00a7"+
		"\3\u00a7\3\u00a7\5\u00a7\u0806\n\u00a7\3\u00a8\3\u00a8\5\u00a8\u080a\n"+
		"\u00a8\3\u00a9\3\u00a9\3\u00a9\5\u00a9\u080f\n\u00a9\3\u00a9\3\u00a9\3"+
		"\u00aa\3\u00aa\5\u00aa\u0815\n\u00aa\3\u00aa\3\u00aa\5\u00aa\u0819\n\u00aa"+
		"\3\u00aa\5\u00aa\u081c\n\u00aa\3\u00aa\3\u00aa\5\u00aa\u0820\n\u00aa\3"+
		"\u00aa\5\u00aa\u0823\n\u00aa\5\u00aa\u0825\n\u00aa\3\u00ab\5\u00ab\u0828"+
		"\n\u00ab\3\u00ab\3\u00ab\3\u00ac\3\u00ac\3\u00ad\3\u00ad\3\u00ae\3\u00ae"+
		"\5\u00ae\u0832\n\u00ae\3\u00ae\3\u00ae\3\u00ae\5\u00ae\u0837\n\u00ae\5"+
		"\u00ae\u0839\n\u00ae\3\u00af\5\u00af\u083c\n\u00af\3\u00af\3\u00af\3\u00af"+
		"\3\u00af\3\u00af\3\u00af\3\u00af\3\u00af\3\u00af\3\u00af\3\u00af\5\u00af"+
		"\u0849\n\u00af\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0\3\u00b0\7\u00b0"+
		"\u0851\n\u00b0\f\u00b0\16\u00b0\u0854\13\u00b0\3\u00b1\3\u00b1\5\u00b1"+
		"\u0858\n\u00b1\3\u00b1\3\u00b1\3\u00b1\3\u00b1\5\u00b1\u085e\n\u00b1\3"+
		"\u00b1\5\u00b1\u0861\n\u00b1\3\u00b1\3\u00b1\5\u00b1\u0865\n\u00b1\3\u00b2"+
		"\3\u00b2\3\u00b2\3\u00b2\3\u00b2\7\u00b2\u086c\n\u00b2\f\u00b2\16\u00b2"+
		"\u086f\13\u00b2\3\u00b3\3\u00b3\3\u00b4\3\u00b4\3\u00b4\3\u00b5\3\u00b5"+
		"\3\u00b5\3\u00b6\3\u00b6\3\u00b6\5\u00b6\u087c\n\u00b6\3\u00b6\3\u00b6"+
		"\3\u00b6\3\u00b6\5\u00b6\u0882\n\u00b6\7\u00b6\u0884\n\u00b6\f\u00b6\16"+
		"\u00b6\u0887\13\u00b6\3\u00b7\5\u00b7\u088a\n\u00b7\3\u00b7\3\u00b7\5"+
		"\u00b7\u088e\n\u00b7\3\u00b7\3\u00b7\5\u00b7\u0892\n\u00b7\3\u00b7\3\u00b7"+
		"\5\u00b7\u0896\n\u00b7\3\u00b7\3\u00b7\5\u00b7\u089a\n\u00b7\3\u00b7\3"+
		"\u00b7\5\u00b7\u089e\n\u00b7\3\u00b8\5\u00b8\u08a1\n\u00b8\3\u00b8\3\u00b8"+
		"\3\u00b8\3\u00b8\3\u00b8\3\u00b8\5\u00b8\u08a9\n\u00b8\3\u00b9\3\u00b9"+
		"\3\u00ba\3\u00ba\3\u00ba\3\u00bb\3\u00bb\5\u00bb\u08b2\n\u00bb\3\u00bc"+
		"\3\u00bc\5\u00bc\u08b6\n\u00bc\3\u00bd\3\u00bd\3\u00bd\3\u00be\3\u00be"+
		"\3\u00be\5\u00be\u08be\n\u00be\3\u00be\3\u00be\3\u00be\3\u00be\5\u00be"+
		"\u08c4\n\u00be\7\u00be\u08c6\n\u00be\f\u00be\16\u00be\u08c9\13\u00be\3"+
		"\u00bf\3\u00bf\3\u00bf\5\u00bf\u08ce\n\u00bf\3\u00bf\3\u00bf\3\u00bf\3"+
		"\u00bf\3\u00bf\5\u00bf\u08d5\n\u00bf\3\u00c0\3\u00c0\3\u00c1\3\u00c1\3"+
		"\u00c1\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2"+
		"\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2"+
		"\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2"+
		"\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2"+
		"\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2\3\u00c2"+
		"\3\u00c2\3\u00c2\3\u00c2\3\u00c2\5\u00c2\u090c\n\u00c2\3\u00c3\3\u00c3"+
		"\3\u00c3\3\u00c3\3\u00c3\5\u00c3\u0913\n\u00c3\3\u00c4\3\u00c4\3\u00c4"+
		"\3\u00c4\3\u00c4\3\u00c4\3\u00c5\3\u00c5\3\u00c5\3\u00c5\3\u00c5\3\u00c5"+
		"\7\u00c5\u0921\n\u00c5\f\u00c5\16\u00c5\u0924\13\u00c5\3\u00c6\3\u00c6"+
		"\5\u00c6\u0928\n\u00c6\3\u00c7\3\u00c7\5\u00c7\u092c\n\u00c7\3\u00c7\5"+
		"\u00c7\u092f\n\u00c7\3\u00c7\3\u00c7\5\u00c7\u0933\n\u00c7\3\u00c7\3\u00c7"+
		"\3\u00c7\3\u00c7\3\u00c7\3\u00c7\3\u00c7\3\u00c7\3\u00c7\5\u00c7\u093e"+
		"\n\u00c7\3\u00c7\5\u00c7\u0941\n\u00c7\3\u00c7\3\u00c7\3\u00c7\3\u00c7"+
		"\3\u00c7\3\u00c7\5\u00c7\u0949\n\u00c7\3\u00c7\3\u00c7\3\u00c7\5\u00c7"+
		"\u094e\n\u00c7\3\u00c8\3\u00c8\3\u00c9\3\u00c9\3\u00c9\5\u00c9\u0955\n"+
		"\u00c9\3\u00c9\3\u00c9\3\u00ca\3\u00ca\3\u00ca\3\u00ca\5\u00ca\u095d\n"+
		"\u00ca\3\u00ca\3\u00ca\3\u00ca\3\u00ca\3\u00ca\5\u00ca\u0964\n\u00ca\3"+
		"\u00ca\3\u00ca\5\u00ca\u0968\n\u00ca\3\u00cb\3\u00cb\3\u00cb\5\u00cb\u096d"+
		"\n\u00cb\3\u00cb\3\u00cb\3\u00cb\3\u00cb\5\u00cb\u0973\n\u00cb\7\u00cb"+
		"\u0975\n\u00cb\f\u00cb\16\u00cb\u0978\13\u00cb\3\u00cc\3\u00cc\3\u00cd"+
		"\3\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00cd\3\u00cd\5\u00cd\u0983\n\u00cd"+
		"\3\u00cd\3\u00cd\5\u00cd\u0987\n\u00cd\3\u00ce\5\u00ce\u098a\n\u00ce\3"+
		"\u00ce\3\u00ce\3\u00ce\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00d0"+
		"\5\u00d0\u0995\n\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d0"+
		"\3\u00d0\3\u00d0\3\u00d1\3\u00d1\3\u00d1\3\u00d1\3\u00d2\3\u00d2\5\u00d2"+
		"\u09a5\n\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d3\3\u00d3\5\u00d3\u09ac\n"+
		"\u00d3\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d4\3\u00d5\5\u00d5"+
		"\u09b5\n\u00d5\3\u00d5\3\u00d5\3\u00d5\3\u00d5\5\u00d5\u09bb\n\u00d5\3"+
		"\u00d5\3\u00d5\5\u00d5\u09bf\n\u00d5\3\u00d5\5\u00d5\u09c2\n\u00d5\3\u00d6"+
		"\3\u00d6\3\u00d6\3\u00d6\3\u00d6\3\u00d6\3\u00d6\3\u00d6\3\u00d6\5\u00d6"+
		"\u09cd\n\u00d6\3\u00d7\3\u00d7\3\u00d7\3\u00d7\3\u00d7\3\u00d7\7\u00d7"+
		"\u09d5\n\u00d7\f\u00d7\16\u00d7\u09d8\13\u00d7\3\u00d8\3\u00d8\3\u00d8"+
		"\3\u00d8\3\u00d8\3\u00d8\3\u00d8\5\u00d8\u09e1\n\u00d8\3\u00d9\3\u00d9"+
		"\3\u00da\3\u00da\3\u00db\3\u00db\3\u00dc\3\u00dc\3\u00dc\2&\":LVXZ\\^"+
		"`bdfhjt\u0084\u0094\u00d0\u00de\u00e8\u00f2\u00fa\u0106\u010a\u0112\u012c"+
		"\u0130\u0134\u014a\u015e\u0162\u016a\u017a\u0188\u0194\u01ac\u00dd\2\4"+
		"\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNP"+
		"RTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082\u0084\u0086\u0088\u008a\u008c\u008e"+
		"\u0090\u0092\u0094\u0096\u0098\u009a\u009c\u009e\u00a0\u00a2\u00a4\u00a6"+
		"\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2\u00b4\u00b6\u00b8\u00ba\u00bc\u00be"+
		"\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca\u00cc\u00ce\u00d0\u00d2\u00d4\u00d6"+
		"\u00d8\u00da\u00dc\u00de\u00e0\u00e2\u00e4\u00e6\u00e8\u00ea\u00ec\u00ee"+
		"\u00f0\u00f2\u00f4\u00f6\u00f8\u00fa\u00fc\u00fe\u0100\u0102\u0104\u0106"+
		"\u0108\u010a\u010c\u010e\u0110\u0112\u0114\u0116\u0118\u011a\u011c\u011e"+
		"\u0120\u0122\u0124\u0126\u0128\u012a\u012c\u012e\u0130\u0132\u0134\u0136"+
		"\u0138\u013a\u013c\u013e\u0140\u0142\u0144\u0146\u0148\u014a\u014c\u014e"+
		"\u0150\u0152\u0154\u0156\u0158\u015a\u015c\u015e\u0160\u0162\u0164\u0166"+
		"\u0168\u016a\u016c\u016e\u0170\u0172\u0174\u0176\u0178\u017a\u017c\u017e"+
		"\u0180\u0182\u0184\u0186\u0188\u018a\u018c\u018e\u0190\u0192\u0194\u0196"+
		"\u0198\u019a\u019c\u019e\u01a0\u01a2\u01a4\u01a6\u01a8\u01aa\u01ac\u01ae"+
		"\u01b0\u01b2\u01b4\u01b6\2\24\4\2eeii\5\2^fi}\u0080\u0081\3\2~\177\4\2"+
		"]]\u0082\u0082\6\2\25\25\34\34\65\65<<\4\2_aeh\5\2iilsvw\6\2!!++::AA\4"+
		"\2\37\37KK\3\2RW\4\2\23\23MM\5\2\22\22==HH\3\2PQ\3\2\61\63\4\2\22\22G"+
		"G\3\2\u0083\u0084\4\2\"\"CC\3\2\u0088\u008b\2\u0ae9\2\u01ba\3\2\2\2\4"+
		"\u01bc\3\2\2\2\6\u01c0\3\2\2\2\b\u01c2\3\2\2\2\n\u01c5\3\2\2\2\f\u01d2"+
		"\3\2\2\2\16\u01d6\3\2\2\2\20\u01e1\3\2\2\2\22\u01e3\3\2\2\2\24\u01f7\3"+
		"\2\2\2\26\u0206\3\2\2\2\30\u0208\3\2\2\2\32\u020e\3\2\2\2\34\u0214\3\2"+
		"\2\2\36\u0229\3\2\2\2 \u022b\3\2\2\2\"\u022d\3\2\2\2$\u023d\3\2\2\2&\u0247"+
		"\3\2\2\2(\u024a\3\2\2\2*\u0263\3\2\2\2,\u0265\3\2\2\2.\u0267\3\2\2\2\60"+
		"\u026e\3\2\2\2\62\u0270\3\2\2\2\64\u0278\3\2\2\2\66\u027a\3\2\2\28\u0286"+
		"\3\2\2\2:\u0293\3\2\2\2<\u02b2\3\2\2\2>\u02c7\3\2\2\2@\u02e5\3\2\2\2B"+
		"\u02e7\3\2\2\2D\u0301\3\2\2\2F\u0303\3\2\2\2H\u0307\3\2\2\2J\u030b\3\2"+
		"\2\2L\u0311\3\2\2\2N\u032a\3\2\2\2P\u0338\3\2\2\2R\u033a\3\2\2\2T\u0345"+
		"\3\2\2\2V\u0347\3\2\2\2X\u0355\3\2\2\2Z\u0366\3\2\2\2\\\u0374\3\2\2\2"+
		"^\u0382\3\2\2\2`\u0396\3\2\2\2b\u03a4\3\2\2\2d\u03af\3\2\2\2f\u03ba\3"+
		"\2\2\2h\u03c5\3\2\2\2j\u03d0\3\2\2\2l\u03e2\3\2\2\2n\u03e4\3\2\2\2p\u03ee"+
		"\3\2\2\2r\u03f0\3\2\2\2t\u03f2\3\2\2\2v\u03fd\3\2\2\2x\u0419\3\2\2\2z"+
		"\u041d\3\2\2\2|\u0427\3\2\2\2~\u043d\3\2\2\2\u0080\u0440\3\2\2\2\u0082"+
		"\u0444\3\2\2\2\u0084\u044a\3\2\2\2\u0086\u0477\3\2\2\2\u0088\u049c\3\2"+
		"\2\2\u008a\u04af\3\2\2\2\u008c\u04b2\3\2\2\2\u008e\u04b7\3\2\2\2\u0090"+
		"\u04c5\3\2\2\2\u0092\u04c7\3\2\2\2\u0094\u04c9\3\2\2\2\u0096\u04de\3\2"+
		"\2\2\u0098\u04e8\3\2\2\2\u009a\u04eb\3\2\2\2\u009c\u04f0\3\2\2\2\u009e"+
		"\u0511\3\2\2\2\u00a0\u0521\3\2\2\2\u00a2\u0523\3\2\2\2\u00a4\u0525\3\2"+
		"\2\2\u00a6\u052e\3\2\2\2\u00a8\u0531\3\2\2\2\u00aa\u053a\3\2\2\2\u00ac"+
		"\u053c\3\2\2\2\u00ae\u053e\3\2\2\2\u00b0\u0542\3\2\2\2\u00b2\u0544\3\2"+
		"\2\2\u00b4\u054a\3\2\2\2\u00b6\u0553\3\2\2\2\u00b8\u0558\3\2\2\2\u00ba"+
		"\u0561\3\2\2\2\u00bc\u0576\3\2\2\2\u00be\u057a\3\2\2\2\u00c0\u0585\3\2"+
		"\2\2\u00c2\u059f\3\2\2\2\u00c4\u05ae\3\2\2\2\u00c6\u05b0\3\2\2\2\u00c8"+
		"\u05bb\3\2\2\2\u00ca\u05bf\3\2\2\2\u00cc\u05d1\3\2\2\2\u00ce\u05d3\3\2"+
		"\2\2\u00d0\u05d6\3\2\2\2\u00d2\u05e6\3\2\2\2\u00d4\u05e8\3\2\2\2\u00d6"+
		"\u05ef\3\2\2\2\u00d8\u05f2\3\2\2\2\u00da\u05fe\3\2\2\2\u00dc\u0608\3\2"+
		"\2\2\u00de\u0610\3\2\2\2\u00e0\u061c\3\2\2\2\u00e2\u061e\3\2\2\2\u00e4"+
		"\u0625\3\2\2\2\u00e6\u0629\3\2\2\2\u00e8\u062d\3\2\2\2\u00ea\u063e\3\2"+
		"\2\2\u00ec\u0644\3\2\2\2\u00ee\u064f\3\2\2\2\u00f0\u0661\3\2\2\2\u00f2"+
		"\u0663\3\2\2\2\u00f4\u0677\3\2\2\2\u00f6\u0689\3\2\2\2\u00f8\u068b\3\2"+
		"\2\2\u00fa\u0696\3\2\2\2\u00fc\u06a7\3\2\2\2\u00fe\u06ad\3\2\2\2\u0100"+
		"\u06af\3\2\2\2\u0102\u06b3\3\2\2\2\u0104\u06b5\3\2\2\2\u0106\u06bb\3\2"+
		"\2\2\u0108\u06d5\3\2\2\2\u010a\u06d7\3\2\2\2\u010c\u06e2\3\2\2\2\u010e"+
		"\u06e8\3\2\2\2\u0110\u06ea\3\2\2\2\u0112\u06f9\3\2\2\2\u0114\u070b\3\2"+
		"\2\2\u0116\u070e\3\2\2\2\u0118\u0713\3\2\2\2\u011a\u071e\3\2\2\2\u011c"+
		"\u0738\3\2\2\2\u011e\u073a\3\2\2\2\u0120\u073e\3\2\2\2\u0122\u0740\3\2"+
		"\2\2\u0124\u0743\3\2\2\2\u0126\u0747\3\2\2\2\u0128\u0753\3\2\2\2\u012a"+
		"\u075a\3\2\2\2\u012c\u076a\3\2\2\2\u012e\u0780\3\2\2\2\u0130\u0782\3\2"+
		"\2\2\u0132\u079f\3\2\2\2\u0134\u07a1\3\2\2\2\u0136\u07ba\3\2\2\2\u0138"+
		"\u07bd\3\2\2\2\u013a\u07c8\3\2\2\2\u013c\u07d2\3\2\2\2\u013e\u07d5\3\2"+
		"\2\2\u0140\u07d9\3\2\2\2\u0142\u07dd\3\2\2\2\u0144\u07e1\3\2\2\2\u0146"+
		"\u07e6\3\2\2\2\u0148\u07ea\3\2\2\2\u014a\u07ec\3\2\2\2\u014c\u0805\3\2"+
		"\2\2\u014e\u0809\3\2\2\2\u0150\u080b\3\2\2\2\u0152\u0824\3\2\2\2\u0154"+
		"\u0827\3\2\2\2\u0156\u082b\3\2\2\2\u0158\u082d\3\2\2\2\u015a\u0838\3\2"+
		"\2\2\u015c\u0848\3\2\2\2\u015e\u084a\3\2\2\2\u0160\u0864\3\2\2\2\u0162"+
		"\u0866\3\2\2\2\u0164\u0870\3\2\2\2\u0166\u0872\3\2\2\2\u0168\u0875\3\2"+
		"\2\2\u016a\u0878\3\2\2\2\u016c\u089d\3\2\2\2\u016e\u08a8\3\2\2\2\u0170"+
		"\u08aa\3\2\2\2\u0172\u08ac\3\2\2\2\u0174\u08af\3\2\2\2\u0176\u08b3\3\2"+
		"\2\2\u0178\u08b7\3\2\2\2\u017a\u08ba\3\2\2\2\u017c\u08d4\3\2\2\2\u017e"+
		"\u08d6\3\2\2\2\u0180\u08d8\3\2\2\2\u0182\u090b\3\2\2\2\u0184\u0912\3\2"+
		"\2\2\u0186\u0914\3\2\2\2\u0188\u091a\3\2\2\2\u018a\u0927\3\2\2\2\u018c"+
		"\u094d\3\2\2\2\u018e\u094f\3\2\2\2\u0190\u0951\3\2\2\2\u0192\u0967\3\2"+
		"\2\2\u0194\u0969\3\2\2\2\u0196\u0979\3\2\2\2\u0198\u0986\3\2\2\2\u019a"+
		"\u0989\3\2\2\2\u019c\u098e\3\2\2\2\u019e\u0994\3\2\2\2\u01a0\u099e\3\2"+
		"\2\2\u01a2\u09a2\3\2\2\2\u01a4\u09a9\3\2\2\2\u01a6\u09ad\3\2\2\2\u01a8"+
		"\u09c1\3\2\2\2\u01aa\u09cc\3\2\2\2\u01ac\u09ce\3\2\2\2\u01ae\u09e0\3\2"+
		"\2\2\u01b0\u09e2\3\2\2\2\u01b2\u09e4\3\2\2\2\u01b4\u09e6\3\2\2\2\u01b6"+
		"\u09e8\3\2\2\2\u01b8\u01bb\7\u008c\2\2\u01b9\u01bb\5\4\3\2\u01ba\u01b8"+
		"\3\2\2\2\u01ba\u01b9\3\2\2\2\u01bb\3\3\2\2\2\u01bc\u01bd\7\u008c\2\2\u01bd"+
		"\5\3\2\2\2\u01be\u01c1\7\u008c\2\2\u01bf\u01c1\5\u0190\u00c9\2\u01c0\u01be"+
		"\3\2\2\2\u01c0\u01bf\3\2\2\2\u01c1\7\3\2\2\2\u01c2\u01c3\7\u008c\2\2\u01c3"+
		"\t\3\2\2\2\u01c4\u01c6\5\u0094K\2\u01c5\u01c4\3\2\2\2\u01c5\u01c6\3\2"+
		"\2\2\u01c6\u01c7\3\2\2\2\u01c7\u01c8\7\2\2\3\u01c8\13\3\2\2\2\u01c9\u01d3"+
		"\5\u01ae\u00d8\2\u01ca\u01d3\7@\2\2\u01cb\u01cc\7V\2\2\u01cc\u01cd\5t"+
		";\2\u01cd\u01ce\7W\2\2\u01ce\u01d3\3\2\2\2\u01cf\u01d3\5\16\b\2\u01d0"+
		"\u01d3\5\30\r\2\u01d1\u01d3\5*\26\2\u01d2\u01c9\3\2\2\2\u01d2\u01ca\3"+
		"\2\2\2\u01d2\u01cb\3\2\2\2\u01d2\u01cf\3\2\2\2\u01d2\u01d0\3\2\2\2\u01d2"+
		"\u01d1\3\2\2\2\u01d3\r\3\2\2\2\u01d4\u01d7\5\20\t\2\u01d5\u01d7\5\22\n"+
		"\2\u01d6\u01d4\3\2\2\2\u01d6\u01d5\3\2\2\2\u01d7\17\3\2\2\2\u01d8\u01e2"+
		"\7\u008c\2\2\u01d9\u01e2\5\u0180\u00c1\2\u01da\u01e2\5\u0172\u00ba\2\u01db"+
		"\u01e2\5\u0184\u00c3\2\u01dc\u01dd\7g\2\2\u01dd\u01e2\5\6\4\2\u01de\u01df"+
		"\7g\2\2\u01df\u01e2\5\u00c0a\2\u01e0\u01e2\5\u0192\u00ca\2\u01e1\u01d8"+
		"\3\2\2\2\u01e1\u01d9\3\2\2\2\u01e1\u01da\3\2\2\2\u01e1\u01db\3\2\2\2\u01e1"+
		"\u01dc\3\2\2\2\u01e1\u01de\3\2\2\2\u01e1\u01e0\3\2\2\2\u01e2\21\3\2\2"+
		"\2\u01e3\u01e5\5\24\13\2\u01e4\u01e6\7?\2\2\u01e5\u01e4\3\2\2\2\u01e5"+
		"\u01e6\3\2\2\2\u01e6\u01e7\3\2\2\2\u01e7\u01e8\5\20\t\2\u01e8\23\3\2\2"+
		"\2\u01e9\u01eb\7\\\2\2\u01ea\u01ec\5\26\f\2\u01eb\u01ea\3\2\2\2\u01eb"+
		"\u01ec\3\2\2\2\u01ec\u01f8\3\2\2\2\u01ed\u01ee\7\u008c\2\2\u01ee\u01f0"+
		"\7\\\2\2\u01ef\u01f1\5\26\f\2\u01f0\u01ef\3\2\2\2\u01f0\u01f1\3\2\2\2"+
		"\u01f1\u01f8\3\2\2\2\u01f2\u01f3\5\u00c0a\2\u01f3\u01f5\7\\\2\2\u01f4"+
		"\u01f6\5\26\f\2\u01f5\u01f4\3\2\2\2\u01f5\u01f6\3\2\2\2\u01f6\u01f8\3"+
		"\2\2\2\u01f7\u01e9\3\2\2\2\u01f7\u01ed\3\2\2\2\u01f7\u01f2\3\2\2\2\u01f8"+
		"\25\3\2\2\2\u01f9\u01fa\7\u008c\2\2\u01fa\u01fc\7\\\2\2\u01fb\u01fd\5"+
		"\26\f\2\u01fc\u01fb\3\2\2\2\u01fc\u01fd\3\2\2\2\u01fd\u0207\3\2\2\2\u01fe"+
		"\u0200\7?\2\2\u01ff\u01fe\3\2\2\2\u01ff\u0200\3\2\2\2\u0200\u0201\3\2"+
		"\2\2\u0201\u0202\5\u0190\u00c9\2\u0202\u0204\7\\\2\2\u0203\u0205\5\26"+
		"\f\2\u0204\u0203\3\2\2\2\u0204\u0205\3\2\2\2\u0205\u0207\3\2\2\2\u0206"+
		"\u01f9\3\2\2\2\u0206\u01ff\3\2\2\2\u0207\27\3\2\2\2\u0208\u020a\5\32\16"+
		"\2\u0209\u020b\5\34\17\2\u020a\u0209\3\2\2\2\u020a\u020b\3\2\2\2\u020b"+
		"\u020c\3\2\2\2\u020c\u020d\5\u0082B\2\u020d\31\3\2\2\2\u020e\u0210\7T"+
		"\2\2\u020f\u0211\5\36\20\2\u0210\u020f\3\2\2\2\u0210\u0211\3\2\2\2\u0211"+
		"\u0212\3\2\2\2\u0212\u0213\7U\2\2\u0213\33\3\2\2\2\u0214\u0215\7V\2\2"+
		"\u0215\u0216\5\u0132\u009a\2\u0216\u0218\7W\2\2\u0217\u0219\5\u00a8U\2"+
		"\u0218\u0217\3\2\2\2\u0218\u0219\3\2\2\2\u0219\u021b\3\2\2\2\u021a\u021c"+
		"\5\u01aa\u00d6\2\u021b\u021a\3\2\2\2\u021b\u021c\3\2\2\2\u021c\u021e\3"+
		"\2\2\2\u021d\u021f\5\u00f2z\2\u021e\u021d\3\2\2\2\u021e\u021f\3\2\2\2"+
		"\u021f\u0221\3\2\2\2\u0220\u0222\5\u011a\u008e\2\u0221\u0220\3\2\2\2\u0221"+
		"\u0222\3\2\2\2\u0222\35\3\2\2\2\u0223\u022a\5 \21\2\u0224\u022a\5\"\22"+
		"\2\u0225\u0226\5 \21\2\u0226\u0227\7\u0080\2\2\u0227\u0228\5\"\22\2\u0228"+
		"\u022a\3\2\2\2\u0229\u0223\3\2\2\2\u0229\u0224\3\2\2\2\u0229\u0225\3\2"+
		"\2\2\u022a\37\3\2\2\2\u022b\u022c\t\2\2\2\u022c!\3\2\2\2\u022d\u022e\b"+
		"\22\1\2\u022e\u0230\5$\23\2\u022f\u0231\7Z\2\2\u0230\u022f\3\2\2\2\u0230"+
		"\u0231\3\2\2\2\u0231\u023a\3\2\2\2\u0232\u0233\f\3\2\2\u0233\u0234\7\u0080"+
		"\2\2\u0234\u0236\5$\23\2\u0235\u0237\7Z\2\2\u0236\u0235\3\2\2\2\u0236"+
		"\u0237\3\2\2\2\u0237\u0239\3\2\2\2\u0238\u0232\3\2\2\2\u0239\u023c\3\2"+
		"\2\2\u023a\u0238\3\2\2\2\u023a\u023b\3\2\2\2\u023b#\3\2\2\2\u023c\u023a"+
		"\3\2\2\2\u023d\u023e\5&\24\2\u023e\u023f\5(\25\2\u023f%\3\2\2\2\u0240"+
		"\u0242\7e\2\2\u0241\u0240\3\2\2\2\u0241\u0242\3\2\2\2\u0242\u0243\3\2"+
		"\2\2\u0243\u0248\7\u008c\2\2\u0244\u0248\7@\2\2\u0245\u0246\7a\2\2\u0246"+
		"\u0248\7@\2\2\u0247\u0241\3\2\2\2\u0247\u0244\3\2\2\2\u0247\u0245\3\2"+
		"\2\2\u0248\'\3\2\2\2\u0249\u024b\7e\2\2\u024a\u0249\3\2\2\2\u024a\u024b"+
		"\3\2\2\2\u024b\u024c\3\2\2\2\u024c\u024d\7\u008c\2\2\u024d\u024e\5\u0144"+
		"\u00a3\2\u024e)\3\2\2\2\u024f\u0250\7V\2\2\u0250\u0251\5T+\2\u0251\u0252"+
		"\5,\27\2\u0252\u0253\7Z\2\2\u0253\u0254\7W\2\2\u0254\u0264\3\2\2\2\u0255"+
		"\u0256\7V\2\2\u0256\u0257\7Z\2\2\u0257\u0258\5,\27\2\u0258\u0259\5T+\2"+
		"\u0259\u025a\7W\2\2\u025a\u0264\3\2\2\2\u025b\u025c\7V\2\2\u025c\u025d"+
		"\5T+\2\u025d\u025e\5,\27\2\u025e\u025f\7Z\2\2\u025f\u0260\5,\27\2\u0260"+
		"\u0261\5T+\2\u0261\u0262\7W\2\2\u0262\u0264\3\2\2\2\u0263\u024f\3\2\2"+
		"\2\u0263\u0255\3\2\2\2\u0263\u025b\3\2\2\2\u0264+\3\2\2\2\u0265\u0266"+
		"\t\3\2\2\u0266-\3\2\2\2\u0267\u0268\5\u0198\u00cd\2\u0268\u026a\7V\2\2"+
		"\u0269\u026b\5<\37\2\u026a\u0269\3\2\2\2\u026a\u026b\3\2\2\2\u026b\u026c"+
		"\3\2\2\2\u026c\u026d\7W\2\2\u026d/\3\2\2\2\u026e\u026f\t\4\2\2\u026f\61"+
		"\3\2\2\2\u0270\u0271\5\66\34\2\u0271\u0272\7j\2\2\u0272\u0273\5\u0124"+
		"\u0093\2\u0273\u0274\7k\2\2\u0274\u0275\7V\2\2\u0275\u0276\5t;\2\u0276"+
		"\u0277\7W\2\2\u0277\63\3\2\2\2\u0278\u0279\t\5\2\2\u0279\65\3\2\2\2\u027a"+
		"\u027b\t\6\2\2\u027b\67\3\2\2\2\u027c\u027d\7F\2\2\u027d\u027e\7V\2\2"+
		"\u027e\u027f\5t;\2\u027f\u0280\7W\2\2\u0280\u0287\3\2\2\2\u0281\u0282"+
		"\7F\2\2\u0282\u0283\7V\2\2\u0283\u0284\5\u0124\u0093\2\u0284\u0285\7W"+
		"\2\2\u0285\u0287\3\2\2\2\u0286\u027c\3\2\2\2\u0286\u0281\3\2\2\2\u0287"+
		"9\3\2\2\2\u0288\u0289\b\36\1\2\u0289\u0294\5\f\7\2\u028a\u0294\5.\30\2"+
		"\u028b\u028c\5\u00bc_\2\u028c\u028d\5\u014c\u00a7\2\u028d\u0294\3\2\2"+
		"\2\u028e\u028f\5\u0198\u00cd\2\u028f\u0290\5\u014c\u00a7\2\u0290\u0294"+
		"\3\2\2\2\u0291\u0294\5\62\32\2\u0292\u0294\58\35\2\u0293\u0288\3\2\2\2"+
		"\u0293\u028a\3\2\2\2\u0293\u028b\3\2\2\2\u0293\u028e\3\2\2\2\u0293\u0291"+
		"\3\2\2\2\u0293\u0292\3\2\2\2\u0294\u02af\3\2\2\2\u0295\u0296\f\f\2\2\u0296"+
		"\u0297\7T\2\2\u0297\u0298\5\u014e\u00a8\2\u0298\u0299\7U\2\2\u0299\u02ae"+
		"\3\2\2\2\u029a\u029b\f\13\2\2\u029b\u029d\7V\2\2\u029c\u029e\5<\37\2\u029d"+
		"\u029c\3\2\2\2\u029d\u029e\3\2\2\2\u029e\u029f\3\2\2\2\u029f\u02ae\7W"+
		"\2\2\u02a0\u02a1\f\7\2\2\u02a1\u02a3\5\64\33\2\u02a2\u02a4\7?\2\2\u02a3"+
		"\u02a2\3\2\2\2\u02a3\u02a4\3\2\2\2\u02a4\u02a5\3\2\2\2\u02a5\u02a6\5\16"+
		"\b\2\u02a6\u02ae\3\2\2\2\u02a7\u02a8\f\6\2\2\u02a8\u02a9\5\64\33\2\u02a9"+
		"\u02aa\5> \2\u02aa\u02ae\3\2\2\2\u02ab\u02ac\f\5\2\2\u02ac\u02ae\5\60"+
		"\31\2\u02ad\u0295\3\2\2\2\u02ad\u029a\3\2\2\2\u02ad\u02a0\3\2\2\2\u02ad"+
		"\u02a7\3\2\2\2\u02ad\u02ab\3\2\2\2\u02ae\u02b1\3\2\2\2\u02af\u02ad\3\2"+
		"\2\2\u02af\u02b0\3\2\2\2\u02b0;\3\2\2\2\u02b1\u02af\3\2\2\2\u02b2\u02b3"+
		"\5\u014a\u00a6\2\u02b3=\3\2\2\2\u02b4\u02b6\5\24\13\2\u02b5\u02b4\3\2"+
		"\2\2\u02b5\u02b6\3\2\2\2\u02b6\u02b7\3\2\2\2\u02b7\u02b8\5\u00be`\2\u02b8"+
		"\u02b9\7\\\2\2\u02b9\u02ba\7g\2\2\u02ba\u02bb\5\u00be`\2\u02bb\u02c8\3"+
		"\2\2\2\u02bc\u02bd\5\24\13\2\u02bd\u02be\7?\2\2\u02be\u02bf\5\u0190\u00c9"+
		"\2\u02bf\u02c0\7\\\2\2\u02c0\u02c1\7g\2\2\u02c1\u02c2\5\u00be`\2\u02c2"+
		"\u02c8\3\2\2\2\u02c3\u02c4\7g\2\2\u02c4\u02c8\5\u00be`\2\u02c5\u02c6\7"+
		"g\2\2\u02c6\u02c8\5\u00c0a\2\u02c7\u02b5\3\2\2\2\u02c7\u02bc\3\2\2\2\u02c7"+
		"\u02c3\3\2\2\2\u02c7\u02c5\3\2\2\2\u02c8?\3\2\2\2\u02c9\u02e6\5:\36\2"+
		"\u02ca\u02cb\7~\2\2\u02cb\u02e6\5T+\2\u02cc\u02cd\7\177\2\2\u02cd\u02e6"+
		"\5T+\2\u02ce\u02cf\5B\"\2\u02cf\u02d0\5T+\2\u02d0\u02e6\3\2\2\2\u02d1"+
		"\u02d2\79\2\2\u02d2\u02e6\5@!\2\u02d3\u02d4\79\2\2\u02d4\u02d5\7V\2\2"+
		"\u02d5\u02d6\5\u0124\u0093\2\u02d6\u02d7\7W\2\2\u02d7\u02e6\3\2\2\2\u02d8"+
		"\u02d9\79\2\2\u02d9\u02da\7Z\2\2\u02da\u02db\7V\2\2\u02db\u02dc\7\u008c"+
		"\2\2\u02dc\u02e6\7W\2\2\u02dd\u02de\7\b\2\2\u02de\u02df\7V\2\2\u02df\u02e0"+
		"\5\u0124\u0093\2\u02e0\u02e1\7W\2\2\u02e1\u02e6\3\2\2\2\u02e2\u02e6\5"+
		"R*\2\u02e3\u02e6\5D#\2\u02e4\u02e6\5P)\2\u02e5\u02c9\3\2\2\2\u02e5\u02ca"+
		"\3\2\2\2\u02e5\u02cc\3\2\2\2\u02e5\u02ce\3\2\2\2\u02e5\u02d1\3\2\2\2\u02e5"+
		"\u02d3\3\2\2\2\u02e5\u02d8\3\2\2\2\u02e5\u02dd\3\2\2\2\u02e5\u02e2\3\2"+
		"\2\2\u02e5\u02e3\3\2\2\2\u02e5\u02e4\3\2\2\2\u02e6A\3\2\2\2\u02e7\u02e8"+
		"\t\7\2\2\u02e8C\3\2\2\2\u02e9\u02eb\7\\\2\2\u02ea\u02e9\3\2\2\2\u02ea"+
		"\u02eb\3\2\2\2\u02eb\u02ec\3\2\2\2\u02ec\u02ee\7-\2\2\u02ed\u02ef\5F$"+
		"\2\u02ee\u02ed\3\2\2\2\u02ee\u02ef\3\2\2\2\u02ef\u02f0\3\2\2\2\u02f0\u02f2"+
		"\5H%\2\u02f1\u02f3\5N(\2\u02f2\u02f1\3\2\2\2\u02f2\u02f3\3\2\2\2\u02f3"+
		"\u0302\3\2\2\2\u02f4\u02f6\7\\\2\2\u02f5\u02f4\3\2\2\2\u02f5\u02f6\3\2"+
		"\2\2\u02f6\u02f7\3\2\2\2\u02f7\u02f9\7-\2\2\u02f8\u02fa\5F$\2\u02f9\u02f8"+
		"\3\2\2\2\u02f9\u02fa\3\2\2\2\u02fa\u02fb\3\2\2\2\u02fb\u02fc\7V\2\2\u02fc"+
		"\u02fd\5\u0124\u0093\2\u02fd\u02ff\7W\2\2\u02fe\u0300\5N(\2\u02ff\u02fe"+
		"\3\2\2\2\u02ff\u0300\3\2\2\2\u0300\u0302\3\2\2\2\u0301\u02ea\3\2\2\2\u0301"+
		"\u02f5\3\2\2\2\u0302E\3\2\2\2\u0303\u0304\7V\2\2\u0304\u0305\5<\37\2\u0305"+
		"\u0306\7W\2\2\u0306G\3\2\2\2\u0307\u0309\5\u00b6\\\2\u0308\u030a\5J&\2"+
		"\u0309\u0308\3\2\2\2\u0309\u030a\3\2\2\2\u030aI\3\2\2\2\u030b\u030d\5"+
		"\u011c\u008f\2\u030c\u030e\5J&\2\u030d\u030c\3\2\2\2\u030d\u030e\3\2\2"+
		"\2\u030e\u030f\3\2\2\2\u030f\u0310\5L\'\2\u0310K\3\2\2\2\u0311\u0312\b"+
		"\'\1\2\u0312\u0313\7T\2\2\u0313\u0314\5t;\2\u0314\u0316\7U\2\2\u0315\u0317"+
		"\5\u00f2z\2\u0316\u0315\3\2\2\2\u0316\u0317\3\2\2\2\u0317\u0321\3\2\2"+
		"\2\u0318\u0319\f\3\2\2\u0319\u031a\7T\2\2\u031a\u031b\5v<\2\u031b\u031d"+
		"\7U\2\2\u031c\u031e\5\u00f2z\2\u031d\u031c\3\2\2\2\u031d\u031e\3\2\2\2"+
		"\u031e\u0320\3\2\2\2\u031f\u0318\3\2\2\2\u0320\u0323\3\2\2\2\u0321\u031f"+
		"\3\2\2\2\u0321\u0322\3\2\2\2\u0322M\3\2\2\2\u0323\u0321\3\2\2\2\u0324"+
		"\u0326\7V\2\2\u0325\u0327\5<\37\2\u0326\u0325\3\2\2\2\u0326\u0327\3\2"+
		"\2\2\u0327\u0328\3\2\2\2\u0328\u032b\7W\2\2\u0329\u032b\5\u014c\u00a7"+
		"\2\u032a\u0324\3\2\2\2\u032a\u0329\3\2\2\2\u032bO\3\2\2\2\u032c\u032e"+
		"\7\\\2\2\u032d\u032c\3\2\2\2\u032d\u032e\3\2\2\2\u032e\u032f\3\2\2\2\u032f"+
		"\u0330\7\31\2\2\u0330\u0339\5T+\2\u0331\u0333\7\\\2\2\u0332\u0331\3\2"+
		"\2\2\u0332\u0333\3\2\2\2\u0333\u0334\3\2\2\2\u0334\u0335\7\31\2\2\u0335"+
		"\u0336\7T\2\2\u0336\u0337\7U\2\2\u0337\u0339\5T+\2\u0338\u032d\3\2\2\2"+
		"\u0338\u0332\3\2\2\2\u0339Q\3\2\2\2\u033a\u033b\7.\2\2\u033b\u033c\7V"+
		"\2\2\u033c\u033d\5t;\2\u033d\u033e\7W\2\2\u033eS\3\2\2\2\u033f\u0346\5"+
		"@!\2\u0340\u0341\7V\2\2\u0341\u0342\5\u0124\u0093\2\u0342\u0343\7W\2\2"+
		"\u0343\u0344\5T+\2\u0344\u0346\3\2\2\2\u0345\u033f\3\2\2\2\u0345\u0340"+
		"\3\2\2\2\u0346U\3\2\2\2\u0347\u0348\b,\1\2\u0348\u0349\5T+\2\u0349\u0352"+
		"\3\2\2\2\u034a\u034b\f\4\2\2\u034b\u034c\7^\2\2\u034c\u0351\5T+\2\u034d"+
		"\u034e\f\3\2\2\u034e\u034f\7\u0081\2\2\u034f\u0351\5T+\2\u0350\u034a\3"+
		"\2\2\2\u0350\u034d\3\2\2\2\u0351\u0354\3\2\2\2\u0352\u0350\3\2\2\2\u0352"+
		"\u0353\3\2\2\2\u0353W\3\2\2\2\u0354\u0352\3\2\2\2\u0355\u0356\b-\1\2\u0356"+
		"\u0357\5V,\2\u0357\u0363\3\2\2\2\u0358\u0359\f\5\2\2\u0359\u035a\7a\2"+
		"\2\u035a\u0362\5V,\2\u035b\u035c\f\4\2\2\u035c\u035d\7b\2\2\u035d\u0362"+
		"\5V,\2\u035e\u035f\f\3\2\2\u035f\u0360\7c\2\2\u0360\u0362\5V,\2\u0361"+
		"\u0358\3\2\2\2\u0361\u035b\3\2\2\2\u0361\u035e\3\2\2\2\u0362\u0365\3\2"+
		"\2\2\u0363\u0361\3\2\2\2\u0363\u0364\3\2\2\2\u0364Y\3\2\2\2\u0365\u0363"+
		"\3\2\2\2\u0366\u0367\b.\1\2\u0367\u0368\5X-\2\u0368\u0371\3\2\2\2\u0369"+
		"\u036a\f\4\2\2\u036a\u036b\7_\2\2\u036b\u0370\5X-\2\u036c\u036d\f\3\2"+
		"\2\u036d\u036e\7`\2\2\u036e\u0370\5X-\2\u036f\u0369\3\2\2\2\u036f\u036c"+
		"\3\2\2\2\u0370\u0373\3\2\2\2\u0371\u036f\3\2\2\2\u0371\u0372\3\2\2\2\u0372"+
		"[\3\2\2\2\u0373\u0371\3\2\2\2\u0374\u0375\b/\1\2\u0375\u0376\5Z.\2\u0376"+
		"\u037f\3\2\2\2\u0377\u0378\f\4\2\2\u0378\u0379\7t\2\2\u0379\u037e\5Z."+
		"\2\u037a\u037b\f\3\2\2\u037b\u037c\7u\2\2\u037c\u037e\5Z.\2\u037d\u0377"+
		"\3\2\2\2\u037d\u037a\3\2\2\2\u037e\u0381\3\2\2\2\u037f\u037d\3\2\2\2\u037f"+
		"\u0380\3\2\2\2\u0380]\3\2\2\2\u0381\u037f\3\2\2\2\u0382\u0383\b\60\1\2"+
		"\u0383\u0384\5\\/\2\u0384\u0393\3\2\2\2\u0385\u0386\f\6\2\2\u0386\u0387"+
		"\7j\2\2\u0387\u0392\5\\/\2\u0388\u0389\f\5\2\2\u0389\u038a\7k\2\2\u038a"+
		"\u0392\5\\/\2\u038b\u038c\f\4\2\2\u038c\u038d\7z\2\2\u038d\u0392\5\\/"+
		"\2\u038e\u038f\f\3\2\2\u038f\u0390\7{\2\2\u0390\u0392\5\\/\2\u0391\u0385"+
		"\3\2\2\2\u0391\u0388\3\2\2\2\u0391\u038b\3\2\2\2\u0391\u038e\3\2\2\2\u0392"+
		"\u0395\3\2\2\2\u0393\u0391\3\2\2\2\u0393\u0394\3\2\2\2\u0394_\3\2\2\2"+
		"\u0395\u0393\3\2\2\2\u0396\u0397\b\61\1\2\u0397\u0398\5^\60\2\u0398\u03a1"+
		"\3\2\2\2\u0399\u039a\f\4\2\2\u039a\u039b\7x\2\2\u039b\u03a0\5^\60\2\u039c"+
		"\u039d\f\3\2\2\u039d\u039e\7y\2\2\u039e\u03a0\5^\60\2\u039f\u0399\3\2"+
		"\2\2\u039f\u039c\3\2\2\2\u03a0\u03a3\3\2\2\2\u03a1\u039f\3\2\2\2\u03a1"+
		"\u03a2\3\2\2\2\u03a2a\3\2\2\2\u03a3\u03a1\3\2\2\2\u03a4\u03a5\b\62\1\2"+
		"\u03a5\u03a6\5`\61\2\u03a6\u03ac\3\2\2\2\u03a7\u03a8\f\3\2\2\u03a8\u03a9"+
		"\7e\2\2\u03a9\u03ab\5`\61\2\u03aa\u03a7\3\2\2\2\u03ab\u03ae\3\2\2\2\u03ac"+
		"\u03aa\3\2\2\2\u03ac\u03ad\3\2\2\2\u03adc\3\2\2\2\u03ae\u03ac\3\2\2\2"+
		"\u03af\u03b0\b\63\1\2\u03b0\u03b1\5b\62\2\u03b1\u03b7\3\2\2\2\u03b2\u03b3"+
		"\f\3\2\2\u03b3\u03b4\7d\2\2\u03b4\u03b6\5b\62\2\u03b5\u03b2\3\2\2\2\u03b6"+
		"\u03b9\3\2\2\2\u03b7\u03b5\3\2\2\2\u03b7\u03b8\3\2\2\2\u03b8e\3\2\2\2"+
		"\u03b9\u03b7\3\2\2\2\u03ba\u03bb\b\64\1\2\u03bb\u03bc\5d\63\2\u03bc\u03c2"+
		"\3\2\2\2\u03bd\u03be\f\3\2\2\u03be\u03bf\7f\2\2\u03bf\u03c1\5d\63\2\u03c0"+
		"\u03bd\3\2\2\2\u03c1\u03c4\3\2\2\2\u03c2\u03c0\3\2\2\2\u03c2\u03c3\3\2"+
		"\2\2\u03c3g\3\2\2\2\u03c4\u03c2\3\2\2\2\u03c5\u03c6\b\65\1\2\u03c6\u03c7"+
		"\5f\64\2\u03c7\u03cd\3\2\2\2\u03c8\u03c9\f\3\2\2\u03c9\u03ca\7|\2\2\u03ca"+
		"\u03cc\5f\64\2\u03cb\u03c8\3\2\2\2\u03cc\u03cf\3\2\2\2\u03cd\u03cb\3\2"+
		"\2\2\u03cd\u03ce\3\2\2\2\u03cei\3\2\2\2\u03cf\u03cd\3\2\2\2\u03d0\u03d1"+
		"\b\66\1\2\u03d1\u03d2\5h\65\2\u03d2\u03d8\3\2\2\2\u03d3\u03d4\f\3\2\2"+
		"\u03d4\u03d5\7}\2\2\u03d5\u03d7\5h\65\2\u03d6\u03d3\3\2\2\2\u03d7\u03da"+
		"\3\2\2\2\u03d8\u03d6\3\2\2\2\u03d8\u03d9\3\2\2\2\u03d9k\3\2\2\2\u03da"+
		"\u03d8\3\2\2\2\u03db\u03e3\5j\66\2\u03dc\u03dd\5j\66\2\u03dd\u03de\7["+
		"\2\2\u03de\u03df\5t;\2\u03df\u03e0\7Y\2\2\u03e0\u03e1\5p9\2\u03e1\u03e3"+
		"\3\2\2\2\u03e2\u03db\3\2\2\2\u03e2\u03dc\3\2\2\2\u03e3m\3\2\2\2\u03e4"+
		"\u03e6\7B\2\2\u03e5\u03e7\5p9\2\u03e6\u03e5\3\2\2\2\u03e6\u03e7\3\2\2"+
		"\2\u03e7o\3\2\2\2\u03e8\u03ef\5l\67\2\u03e9\u03ea\5j\66\2\u03ea\u03eb"+
		"\5r:\2\u03eb\u03ec\5\u0148\u00a5\2\u03ec\u03ef\3\2\2\2\u03ed\u03ef\5n"+
		"8\2\u03ee\u03e8\3\2\2\2\u03ee\u03e9\3\2\2\2\u03ee\u03ed\3\2\2\2\u03ef"+
		"q\3\2\2\2\u03f0\u03f1\t\b\2\2\u03f1s\3\2\2\2\u03f2\u03f3\b;\1\2\u03f3"+
		"\u03f4\5p9\2\u03f4\u03fa\3\2\2\2\u03f5\u03f6\f\3\2\2\u03f6\u03f7\7\u0080"+
		"\2\2\u03f7\u03f9\5p9\2\u03f8\u03f5\3\2\2\2\u03f9\u03fc\3\2\2\2\u03fa\u03f8"+
		"\3\2\2\2\u03fa\u03fb\3\2\2\2\u03fbu\3\2\2\2\u03fc\u03fa\3\2\2\2\u03fd"+
		"\u03fe\5l\67\2\u03few\3\2\2\2\u03ff\u041a\5~@\2\u0400\u0402\5\u00f2z\2"+
		"\u0401\u0400\3\2\2\2\u0401\u0402\3\2\2\2\u0402\u0403\3\2\2\2\u0403\u041a"+
		"\5\u0080A\2\u0404\u0406\5\u00f2z\2\u0405\u0404\3\2\2\2\u0405\u0406\3\2"+
		"\2\2\u0406\u0407\3\2\2\2\u0407\u041a\5\u0082B\2\u0408\u040a\5\u00f2z\2"+
		"\u0409\u0408\3\2\2\2\u0409\u040a\3\2\2\2\u040a\u040b\3\2\2\2\u040b\u041a"+
		"\5\u0086D\2\u040c\u040e\5\u00f2z\2\u040d\u040c\3\2\2\2\u040d\u040e\3\2"+
		"\2\2\u040e\u040f\3\2\2\2\u040f\u041a\5\u0088E\2\u0410\u0412\5\u00f2z\2"+
		"\u0411\u0410\3\2\2\2\u0411\u0412\3\2\2\2\u0412\u0413\3\2\2\2\u0413\u041a"+
		"\5\u0090I\2\u0414\u041a\5\u0092J\2\u0415\u0417\5\u00f2z\2\u0416\u0415"+
		"\3\2\2\2\u0416\u0417\3\2\2\2\u0417\u0418\3\2\2\2\u0418\u041a\5\u01a0\u00d1"+
		"\2\u0419\u03ff\3\2\2\2\u0419\u0401\3\2\2\2\u0419\u0405\3\2\2\2\u0419\u0409"+
		"\3\2\2\2\u0419\u040d\3\2\2\2\u0419\u0411\3\2\2\2\u0419\u0414\3\2\2\2\u0419"+
		"\u0416\3\2\2\2\u041ay\3\2\2\2\u041b\u041e\5\u0080A\2\u041c\u041e\5\u009e"+
		"P\2\u041d\u041b\3\2\2\2\u041d\u041c\3\2\2\2\u041e{\3\2\2\2\u041f\u0428"+
		"\5t;\2\u0420\u0422\5\u00f2z\2\u0421\u0420\3\2\2\2\u0421\u0422\3\2\2\2"+
		"\u0422\u0423\3\2\2\2\u0423\u0424\5\u00a8U\2\u0424\u0425\5\u010e\u0088"+
		"\2\u0425\u0426\5\u0146\u00a4\2\u0426\u0428\3\2\2\2\u0427\u041f\3\2\2\2"+
		"\u0427\u0421\3\2\2\2\u0428}\3\2\2\2\u0429\u042b\5\u00f2z\2\u042a\u0429"+
		"\3\2\2\2\u042a\u042b\3\2\2\2\u042b\u042c\3\2\2\2\u042c\u042d\7\u008c\2"+
		"\2\u042d\u042e\7Y\2\2\u042e\u043e\5x=\2\u042f\u0431\5\u00f2z\2\u0430\u042f"+
		"\3\2\2\2\u0430\u0431\3\2\2\2\u0431\u0432\3\2\2\2\u0432\u0433\7\r\2\2\u0433"+
		"\u0434\5v<\2\u0434\u0435\7Y\2\2\u0435\u0436\5x=\2\u0436\u043e\3\2\2\2"+
		"\u0437\u0439\5\u00f2z\2\u0438\u0437\3\2\2\2\u0438\u0439\3\2\2\2\u0439"+
		"\u043a\3\2\2\2\u043a\u043b\7\30\2\2\u043b\u043c\7Y\2\2\u043c\u043e\5x"+
		"=\2\u043d\u042a\3\2\2\2\u043d\u0430\3\2\2\2\u043d\u0438\3\2\2\2\u043e"+
		"\177\3\2\2\2\u043f\u0441\5t;\2\u0440\u043f\3\2\2\2\u0440\u0441\3\2\2\2"+
		"\u0441\u0442\3\2\2\2\u0442\u0443\7X\2\2\u0443\u0081\3\2\2\2\u0444\u0446"+
		"\7R\2\2\u0445\u0447\5\u0084C\2\u0446\u0445\3\2\2\2\u0446\u0447\3\2\2\2"+
		"\u0447\u0448\3\2\2\2\u0448\u0449\7S\2\2\u0449\u0083\3\2\2\2\u044a\u044b"+
		"\bC\1\2\u044b\u044c\5x=\2\u044c\u0451\3\2\2\2\u044d\u044e\f\3\2\2\u044e"+
		"\u0450\5x=\2\u044f\u044d\3\2\2\2\u0450\u0453\3\2\2\2\u0451\u044f\3\2\2"+
		"\2\u0451\u0452\3\2\2\2\u0452\u0085\3\2\2\2\u0453\u0451\3\2\2\2\u0454\u0456"+
		"\7\'\2\2\u0455\u0457\7\24\2\2\u0456\u0455\3\2\2\2\u0456\u0457\3\2\2\2"+
		"\u0457\u0458\3\2\2\2\u0458\u045a\7V\2\2\u0459\u045b\5z>\2\u045a\u0459"+
		"\3\2\2\2\u045a\u045b\3\2\2\2\u045b\u045c\3\2\2\2\u045c\u045d\5|?\2\u045d"+
		"\u045e\7W\2\2\u045e\u045f\5x=\2\u045f\u0478\3\2\2\2\u0460\u0462\7\'\2"+
		"\2\u0461\u0463\7\24\2\2\u0462\u0461\3\2\2\2\u0462\u0463\3\2\2\2\u0463"+
		"\u0464\3\2\2\2\u0464\u0466\7V\2\2\u0465\u0467\5z>\2\u0466\u0465\3\2\2"+
		"\2\u0466\u0467\3\2\2\2\u0467\u0468\3\2\2\2\u0468\u0469\5|?\2\u0469\u046a"+
		"\7W\2\2\u046a\u046b\5x=\2\u046b\u046c\7\35\2\2\u046c\u046d\5x=\2\u046d"+
		"\u0478\3\2\2\2\u046e\u046f\7>\2\2\u046f\u0471\7V\2\2\u0470\u0472\5z>\2"+
		"\u0471\u0470\3\2\2\2\u0471\u0472\3\2\2\2\u0472\u0473\3\2\2\2\u0473\u0474"+
		"\5|?\2\u0474\u0475\7W\2\2\u0475\u0476\5x=\2\u0476\u0478\3\2\2\2\u0477"+
		"\u0454\3\2\2\2\u0477\u0460\3\2\2\2\u0477\u046e\3\2\2\2\u0478\u0087\3\2"+
		"\2\2\u0479\u047a\7O\2\2\u047a\u047b\7V\2\2\u047b\u047c\5|?\2\u047c\u047d"+
		"\7W\2\2\u047d\u047e\5x=\2\u047e\u049d\3\2\2\2\u047f\u0480\7\32\2\2\u0480"+
		"\u0481\5x=\2\u0481\u0482\7O\2\2\u0482\u0483\7V\2\2\u0483\u0484\5t;\2\u0484"+
		"\u0485\7W\2\2\u0485\u0486\7X\2\2\u0486\u049d\3\2\2\2\u0487\u0488\7$\2"+
		"\2\u0488\u0489\7V\2\2\u0489\u048b\5z>\2\u048a\u048c\5|?\2\u048b\u048a"+
		"\3\2\2\2\u048b\u048c\3\2\2\2\u048c\u048d\3\2\2\2\u048d\u048f\7X\2\2\u048e"+
		"\u0490\5t;\2\u048f\u048e\3\2\2\2\u048f\u0490\3\2\2\2\u0490\u0491\3\2\2"+
		"\2\u0491\u0492\7W\2\2\u0492\u0493\5x=\2\u0493\u049d\3\2\2\2\u0494\u0495"+
		"\7$\2\2\u0495\u0496\7V\2\2\u0496\u0497\5\u008cG\2\u0497\u0498\7Y\2\2\u0498"+
		"\u0499\5\u008eH\2\u0499\u049a\7W\2\2\u049a\u049b\5x=\2\u049b\u049d\3\2"+
		"\2\2\u049c\u0479\3\2\2\2\u049c\u047f\3\2\2\2\u049c\u0487\3\2\2\2\u049c"+
		"\u0494\3\2\2\2\u049d\u0089\3\2\2\2\u049e\u04a0\5\u00f2z\2\u049f\u049e"+
		"\3\2\2\2\u049f\u04a0\3\2\2\2\u04a0\u04a1\3\2\2\2\u04a1\u04a2\5\u00a8U"+
		"\2\u04a2\u04a3\5\u010e\u0088\2\u04a3\u04b0\3\2\2\2\u04a4\u04a6\5\u00f2"+
		"z\2\u04a5\u04a4\3\2\2\2\u04a5\u04a6\3\2\2\2\u04a6\u04a7\3\2\2\2\u04a7"+
		"\u04a9\5\u00a8U\2\u04a8\u04aa\5\u0122\u0092\2\u04a9\u04a8\3\2\2\2\u04a9"+
		"\u04aa\3\2\2\2\u04aa\u04ab\3\2\2\2\u04ab\u04ac\7T\2\2\u04ac\u04ad\5\u01ac"+
		"\u00d7\2\u04ad\u04ae\7U\2\2\u04ae\u04b0\3\2\2\2\u04af\u049f\3\2\2\2\u04af"+
		"\u04a5\3\2\2\2\u04b0\u008b\3\2\2\2\u04b1\u04b3\5\u00f2z\2\u04b2\u04b1"+
		"\3\2\2\2\u04b2\u04b3\3\2\2\2\u04b3\u04b4\3\2\2\2\u04b4\u04b5\5\u00a8U"+
		"\2\u04b5\u04b6\5\u010e\u0088\2\u04b6\u008d\3\2\2\2\u04b7\u04b8\5\u014e"+
		"\u00a8\2\u04b8\u008f\3\2\2\2\u04b9\u04ba\7\f\2\2\u04ba\u04c6\7X\2\2\u04bb"+
		"\u04bc\7\26\2\2\u04bc\u04c6\7X\2\2\u04bd\u04bf\7\66\2\2\u04be\u04c0\5"+
		"\u014e\u00a8\2\u04bf\u04be\3\2\2\2\u04bf\u04c0\3\2\2\2\u04c0\u04c1\3\2"+
		"\2\2\u04c1\u04c6\7X\2\2\u04c2\u04c3\7&\2\2\u04c3\u04c4\7\u008c\2\2\u04c4"+
		"\u04c6\7X\2\2\u04c5\u04b9\3\2\2\2\u04c5\u04bb\3\2\2\2\u04c5\u04bd\3\2"+
		"\2\2\u04c5\u04c2\3\2\2\2\u04c6\u0091\3\2\2\2\u04c7\u04c8\5\u0098M\2\u04c8"+
		"\u0093\3\2\2\2\u04c9\u04ca\bK\1\2\u04ca\u04cb\5\u0096L\2\u04cb\u04d0\3"+
		"\2\2\2\u04cc\u04cd\f\3\2\2\u04cd\u04cf\5\u0096L\2\u04ce\u04cc\3\2\2\2"+
		"\u04cf\u04d2\3\2\2\2\u04d0\u04ce\3\2\2\2\u04d0\u04d1\3\2\2\2\u04d1\u0095"+
		"\3\2\2\2\u04d2\u04d0\3\2\2\2\u04d3\u04df\5\u0098M\2\u04d4\u04df\5\u009a"+
		"N\2\u04d5\u04df\5\u0138\u009d\2\u04d6\u04df\5\u0186\u00c4\2\u04d7\u04df"+
		"\5\u019e\u00d0\2\u04d8\u04df\5\u019a\u00ce\2\u04d9\u04df\5\u019c\u00cf"+
		"\2\u04da\u04df\5\u00f0y\2\u04db\u04df\5\u00d6l\2\u04dc\u04df\5\u00a2R"+
		"\2\u04dd\u04df\5\u00a4S\2\u04de\u04d3\3\2\2\2\u04de\u04d4\3\2\2\2\u04de"+
		"\u04d5\3\2\2\2\u04de\u04d6\3\2\2\2\u04de\u04d7\3\2\2\2\u04de\u04d8\3\2"+
		"\2\2\u04de\u04d9\3\2\2\2\u04de\u04da\3\2\2\2\u04de\u04db\3\2\2\2\u04de"+
		"\u04dc\3\2\2\2\u04de\u04dd\3\2\2\2\u04df\u0097\3\2\2\2\u04e0\u04e9\5\u009e"+
		"P\2\u04e1\u04e9\5\u00eex\2\u04e2\u04e9\5\u00e2r\2\u04e3\u04e9\5\u00e6"+
		"t\2\u04e4\u04e9\5\u00ecw\2\u04e5\u04e9\5\u00a0Q\2\u04e6\u04e9\5\u009c"+
		"O\2\u04e7\u04e9\5\u00caf\2\u04e8\u04e0\3\2\2\2\u04e8\u04e1\3\2\2\2\u04e8"+
		"\u04e2\3\2\2\2\u04e8\u04e3\3\2\2\2\u04e8\u04e4\3\2\2\2\u04e8\u04e5\3\2"+
		"\2\2\u04e8\u04e6\3\2\2\2\u04e8\u04e7\3\2\2\2\u04e9\u0099\3\2\2\2\u04ea"+
		"\u04ec\5\u00f2z\2\u04eb\u04ea\3\2\2\2\u04eb\u04ec\3\2\2\2\u04ec\u04ed"+
		"\3\2\2\2\u04ed\u04ee\5\u010e\u0088\2\u04ee\u04ef\7X\2\2\u04ef\u009b\3"+
		"\2\2\2\u04f0\u04f1\7J\2\2\u04f1\u04f3\7\u008c\2\2\u04f2\u04f4\5\u00f2"+
		"z\2\u04f3\u04f2\3\2\2\2\u04f3\u04f4\3\2\2\2\u04f4\u04f5\3\2\2\2\u04f5"+
		"\u04f6\7i\2\2\u04f6\u04f7\5\u0126\u0094\2\u04f7\u04f8\7X\2\2\u04f8\u009d"+
		"\3\2\2\2\u04f9\u04fb\5\u00a8U\2\u04fa\u04fc\5\u010a\u0086\2\u04fb\u04fa"+
		"\3\2\2\2\u04fb\u04fc\3\2\2\2\u04fc\u04fd\3\2\2\2\u04fd\u04fe\7X\2\2\u04fe"+
		"\u0512\3\2\2\2\u04ff\u0500\5\u00f2z\2\u0500\u0501\5\u00a8U\2\u0501\u0502"+
		"\5\u010a\u0086\2\u0502\u0503\7X\2\2\u0503\u0512\3\2\2\2\u0504\u0506\5"+
		"\u00f2z\2\u0505\u0504\3\2\2\2\u0505\u0506\3\2\2\2\u0506\u0507\3\2\2\2"+
		"\u0507\u0509\5\u00a8U\2\u0508\u050a\5\u0122\u0092\2\u0509\u0508\3\2\2"+
		"\2\u0509\u050a\3\2\2\2\u050a\u050b\3\2\2\2\u050b\u050c\7T\2\2\u050c\u050d"+
		"\5\u01ac\u00d7\2\u050d\u050e\7U\2\2\u050e\u050f\5\u0144\u00a3\2\u050f"+
		"\u0510\7X\2\2\u0510\u0512\3\2\2\2\u0511\u04f9\3\2\2\2\u0511\u04ff\3\2"+
		"\2\2\u0511\u0505\3\2\2\2\u0512\u009f\3\2\2\2\u0513\u0514\7;\2\2\u0514"+
		"\u0515\7V\2\2\u0515\u0516\5v<\2\u0516\u0517\7W\2\2\u0517\u0518\7X\2\2"+
		"\u0518\u0522\3\2\2\2\u0519\u051a\7;\2\2\u051a\u051b\7V\2\2\u051b\u051c"+
		"\5v<\2\u051c\u051d\7\u0080\2\2\u051d\u051e\7\u0087\2\2\u051e\u051f\7W"+
		"\2\2\u051f\u0520\7X\2\2\u0520\u0522\3\2\2\2\u0521\u0513\3\2\2\2\u0521"+
		"\u0519\3\2\2\2\u0522\u00a1\3\2\2\2\u0523\u0524\7X\2\2\u0524\u00a3\3\2"+
		"\2\2\u0525\u0526\5\u00f2z\2\u0526\u0527\7X\2\2\u0527\u00a5\3\2\2\2\u0528"+
		"\u052f\5\u00b0Y\2\u0529\u052f\5\u00b2Z\2\u052a\u052f\7%\2\2\u052b\u052f"+
		"\7E\2\2\u052c\u052f\7\24\2\2\u052d\u052f\7(\2\2\u052e\u0528\3\2\2\2\u052e"+
		"\u0529\3\2\2\2\u052e\u052a\3\2\2\2\u052e\u052b\3\2\2\2\u052e\u052c\3\2"+
		"\2\2\u052e\u052d\3\2\2\2\u052f\u00a7\3\2\2\2\u0530\u0532\5\u00aaV\2\u0531"+
		"\u0530\3\2\2\2\u0531\u0532\3\2\2\2\u0532\u0533\3\2\2\2\u0533\u0535\5\u00b8"+
		"]\2\u0534\u0536\5\u00acW\2\u0535\u0534\3\2\2\2\u0535\u0536\3\2\2\2\u0536"+
		"\u0538\3\2\2\2\u0537\u0539\5\u00f2z\2\u0538\u0537\3\2\2\2\u0538\u0539"+
		"\3\2\2\2\u0539\u00a9\3\2\2\2\u053a\u053b\5\u00aeX\2\u053b\u00ab\3\2\2"+
		"\2\u053c\u053d\5\u00aeX\2\u053d\u00ad\3\2\2\2\u053e\u0540\5\u00a6T\2\u053f"+
		"\u0541\5\u00aeX\2\u0540\u053f\3\2\2\2\u0540\u0541\3\2\2\2\u0541\u00af"+
		"\3\2\2\2\u0542\u0543\t\t\2\2\u0543\u00b1\3\2\2\2\u0544\u0545\t\n\2\2\u0545"+
		"\u00b3\3\2\2\2\u0546\u054b\5\u00bc_\2\u0547\u054b\5\u00c2b\2\u0548\u054b"+
		"\5\u0198\u00cd\2\u0549\u054b\5\u0120\u0091\2\u054a\u0546\3\2\2\2\u054a"+
		"\u0547\3\2\2\2\u054a\u0548\3\2\2\2\u054a\u0549\3\2\2\2\u054b\u00b5\3\2"+
		"\2\2\u054c\u054e\5\u00b4[\2\u054d\u054f\5\u00f2z\2\u054e\u054d\3\2\2\2"+
		"\u054e\u054f\3\2\2\2\u054f\u0554\3\2\2\2\u0550\u0551\5\u00b4[\2\u0551"+
		"\u0552\5\u00b6\\\2\u0552\u0554\3\2\2\2\u0553\u054c\3\2\2\2\u0553\u0550"+
		"\3\2\2\2\u0554\u00b7\3\2\2\2\u0555\u0559\5\u00b4[\2\u0556\u0559\5\u0150"+
		"\u00a9\2\u0557\u0559\5\u00c4c\2\u0558\u0555\3\2\2\2\u0558\u0556\3\2\2"+
		"\2\u0558\u0557\3\2\2\2\u0559\u00b9\3\2\2\2\u055a\u055c\5\u00b8]\2\u055b"+
		"\u055d\5\u00f2z\2\u055c\u055b\3\2\2\2\u055c\u055d\3\2\2\2\u055d\u0562"+
		"\3\2\2\2\u055e\u055f\5\u00b8]\2\u055f\u0560\5\u00ba^\2\u0560\u0562\3\2"+
		"\2\2\u0561\u055a\3\2\2\2\u0561\u055e\3\2\2\2\u0562\u00bb\3\2\2\2\u0563"+
		"\u0565\5\24\13\2\u0564\u0563\3\2\2\2\u0564\u0565\3\2\2\2\u0565\u0566\3"+
		"\2\2\2\u0566\u0577\5\u00be`\2\u0567\u0577\7\17\2\2\u0568\u0577\7\20\2"+
		"\2\u0569\u0577\7\21\2\2\u056a\u0577\7N\2\2\u056b\u0577\7\13\2\2\u056c"+
		"\u0577\7\67\2\2\u056d\u0577\7)\2\2\u056e\u0577\7*\2\2\u056f\u0577\78\2"+
		"\2\u0570\u0577\7I\2\2\u0571\u0577\7#\2\2\u0572\u0577\7\33\2\2\u0573\u0577"+
		"\7L\2\2\u0574\u0577\7\n\2\2\u0575\u0577\5\u00c0a\2\u0576\u0564\3\2\2\2"+
		"\u0576\u0567\3\2\2\2\u0576\u0568\3\2\2\2\u0576\u0569\3\2\2\2\u0576\u056a"+
		"\3\2\2\2\u0576\u056b\3\2\2\2\u0576\u056c\3\2\2\2\u0576\u056d\3\2\2\2\u0576"+
		"\u056e\3\2\2\2\u0576\u056f\3\2\2\2\u0576\u0570\3\2\2\2\u0576\u0571\3\2"+
		"\2\2\u0576\u0572\3\2\2\2\u0576\u0573\3\2\2\2\u0576\u0574\3\2\2\2\u0576"+
		"\u0575\3\2\2\2\u0577\u00bd\3\2\2\2\u0578\u057b\7\u008c\2\2\u0579\u057b"+
		"\5\u0190\u00c9\2\u057a\u0578\3\2\2\2\u057a\u0579\3\2\2\2\u057b\u00bf\3"+
		"\2\2\2\u057c\u057d\7\27\2\2\u057d\u057e\7V\2\2\u057e\u057f\5t;\2\u057f"+
		"\u0580\7W\2\2\u0580\u0586\3\2\2\2\u0581\u0582\7\27\2\2\u0582\u0583\7V"+
		"\2\2\u0583\u0584\7\n\2\2\u0584\u0586\7W\2\2\u0585\u057c\3\2\2\2\u0585"+
		"\u0581\3\2\2\2\u0586\u00c1\3\2\2\2\u0587\u0589\5\u0158\u00ad\2\u0588\u058a"+
		"\5\u00f2z\2\u0589\u0588\3\2\2\2\u0589\u058a\3\2\2\2\u058a\u058c\3\2\2"+
		"\2\u058b\u058d\5\24\13\2\u058c\u058b\3\2\2\2\u058c\u058d\3\2\2\2\u058d"+
		"\u058e\3\2\2\2\u058e\u058f\7\u008c\2\2\u058f\u05a0\3\2\2\2\u0590\u0591"+
		"\5\u0158\u00ad\2\u0591\u0592\5\u0190\u00c9\2\u0592\u05a0\3\2\2\2\u0593"+
		"\u0594\5\u0158\u00ad\2\u0594\u0596\5\24\13\2\u0595\u0597\7?\2\2\u0596"+
		"\u0595\3\2\2\2\u0596\u0597\3\2\2\2\u0597\u0598\3\2\2\2\u0598\u0599\5\u0190"+
		"\u00c9\2\u0599\u05a0\3\2\2\2\u059a\u059c\7\36\2\2\u059b\u059d\5\24\13"+
		"\2\u059c\u059b\3\2\2\2\u059c\u059d\3\2\2\2\u059d\u059e\3\2\2\2\u059e\u05a0"+
		"\7\u008c\2\2\u059f\u0587\3\2\2\2\u059f\u0590\3\2\2\2\u059f\u0593\3\2\2"+
		"\2\u059f\u059a\3\2\2\2\u05a0\u00c3\3\2\2\2\u05a1\u05a2\5\u00c6d\2\u05a2"+
		"\u05a4\7R\2\2\u05a3\u05a5\5\u00d0i\2\u05a4\u05a3\3\2\2\2\u05a4\u05a5\3"+
		"\2\2\2\u05a5\u05a6\3\2\2\2\u05a6\u05a7\7S\2\2\u05a7\u05af\3\2\2\2\u05a8"+
		"\u05a9\5\u00c6d\2\u05a9\u05aa\7R\2\2\u05aa\u05ab\5\u00d0i\2\u05ab\u05ac"+
		"\7\u0080\2\2\u05ac\u05ad\7S\2\2\u05ad\u05af\3\2\2\2\u05ae\u05a1\3\2\2"+
		"\2\u05ae\u05a8\3\2\2\2\u05af\u00c5\3\2\2\2\u05b0\u05b2\5\u00ccg\2\u05b1"+
		"\u05b3\5\u00f2z\2\u05b2\u05b1\3\2\2\2\u05b2\u05b3\3\2\2\2\u05b3\u05b5"+
		"\3\2\2\2\u05b4\u05b6\5\u00c8e\2\u05b5\u05b4\3\2\2\2\u05b5\u05b6\3\2\2"+
		"\2\u05b6\u05b8\3\2\2\2\u05b7\u05b9\5\u00ceh\2\u05b8\u05b7\3\2\2\2\u05b8"+
		"\u05b9\3\2\2\2\u05b9\u00c7\3\2\2\2\u05ba\u05bc\5\24\13\2\u05bb\u05ba\3"+
		"\2\2\2\u05bb\u05bc\3\2\2\2\u05bc\u05bd\3\2\2\2\u05bd\u05be\7\u008c\2\2"+
		"\u05be\u00c9\3\2\2\2\u05bf\u05c1\5\u00ccg\2\u05c0\u05c2\5\u00f2z\2\u05c1"+
		"\u05c0\3\2\2\2\u05c1\u05c2\3\2\2\2\u05c2\u05c4\3\2\2\2\u05c3\u05c5\5\24"+
		"\13\2\u05c4\u05c3\3\2\2\2\u05c4\u05c5\3\2\2\2\u05c5\u05c6\3\2\2\2\u05c6"+
		"\u05c8\7\u008c\2\2\u05c7\u05c9\5\u00ceh\2\u05c8\u05c7\3\2\2\2\u05c8\u05c9"+
		"\3\2\2\2\u05c9\u05ca\3\2\2\2\u05ca\u05cb\7X\2\2\u05cb\u00cb\3\2\2\2\u05cc"+
		"\u05d2\7\36\2\2\u05cd\u05ce\7\36\2\2\u05ce\u05d2\7\22\2\2\u05cf\u05d0"+
		"\7\36\2\2\u05d0\u05d2\7=\2\2\u05d1\u05cc\3\2\2\2\u05d1\u05cd\3\2\2\2\u05d1"+
		"\u05cf\3\2\2\2\u05d2\u00cd\3\2\2\2\u05d3\u05d4\7Y\2\2\u05d4\u05d5\5\u00b6"+
		"\\\2\u05d5\u00cf\3\2\2\2\u05d6\u05d7\bi\1\2\u05d7\u05d8\5\u00d2j\2\u05d8"+
		"\u05de\3\2\2\2\u05d9\u05da\f\3\2\2\u05da\u05db\7\u0080\2\2\u05db\u05dd"+
		"\5\u00d2j\2\u05dc\u05d9\3\2\2\2\u05dd\u05e0\3\2\2\2\u05de\u05dc\3\2\2"+
		"\2\u05de\u05df\3\2\2\2\u05df\u00d1\3\2\2\2\u05e0\u05de\3\2\2\2\u05e1\u05e7"+
		"\5\u00d4k\2\u05e2\u05e3\5\u00d4k\2\u05e3\u05e4\7i\2\2\u05e4\u05e5\5v<"+
		"\2\u05e5\u05e7\3\2\2\2\u05e6\u05e1\3\2\2\2\u05e6\u05e2\3\2\2\2\u05e7\u00d3"+
		"\3\2\2\2\u05e8\u05ea\7\u008c\2\2\u05e9\u05eb\5\u00f2z\2\u05ea\u05e9\3"+
		"\2\2\2\u05ea\u05eb\3\2\2\2\u05eb\u00d5\3\2\2\2\u05ec\u05f0\5\u00d8m\2"+
		"\u05ed\u05f0\5\u00dan\2\u05ee\u05f0\5\u00dco\2\u05ef\u05ec\3\2\2\2\u05ef"+
		"\u05ed\3\2\2\2\u05ef\u05ee\3\2\2\2\u05f0\u00d7\3\2\2\2\u05f1\u05f3\7("+
		"\2\2\u05f2\u05f1\3\2\2\2\u05f2\u05f3\3\2\2\2\u05f3\u05f4\3\2\2\2\u05f4"+
		"\u05f6\7,\2\2\u05f5\u05f7\5\u00f2z\2\u05f6\u05f5\3\2\2\2\u05f6\u05f7\3"+
		"\2\2\2\u05f7\u05f8\3\2\2\2\u05f8\u05f9\7\u008c\2\2\u05f9\u05fa\7R\2\2"+
		"\u05fa\u05fb\5\u00e0q\2\u05fb\u05fc\7S\2\2\u05fc\u00d9\3\2\2\2\u05fd\u05ff"+
		"\7(\2\2\u05fe\u05fd\3\2\2\2\u05fe\u05ff\3\2\2\2\u05ff\u0600\3\2\2\2\u0600"+
		"\u0602\7,\2\2\u0601\u0603\5\u00f2z\2\u0602\u0601\3\2\2\2\u0602\u0603\3"+
		"\2\2\2\u0603\u0604\3\2\2\2\u0604\u0605\7R\2\2\u0605\u0606\5\u00e0q\2\u0606"+
		"\u0607\7S\2\2\u0607\u00db\3\2\2\2\u0608\u0609\7,\2\2\u0609\u060a\5\u00de"+
		"p\2\u060a\u060b\7\\\2\2\u060b\u060c\7\u008c\2\2\u060c\u060d\7R\2\2\u060d"+
		"\u060e\5\u00e0q\2\u060e\u060f\7S\2\2\u060f\u00dd\3\2\2\2\u0610\u0611\b"+
		"p\1\2\u0611\u0612\7\u008c\2\2\u0612\u0618\3\2\2\2\u0613\u0614\f\3\2\2"+
		"\u0614\u0615\7\\\2\2\u0615\u0617\7\u008c\2\2\u0616\u0613\3\2\2\2\u0617"+
		"\u061a\3\2\2\2\u0618\u0616\3\2\2\2\u0618\u0619\3\2\2\2\u0619\u00df\3\2"+
		"\2\2\u061a\u0618\3\2\2\2\u061b\u061d\5\u0094K\2\u061c\u061b\3\2\2\2\u061c"+
		"\u061d\3\2\2\2\u061d\u00e1\3\2\2\2\u061e\u061f\7,\2\2\u061f\u0620\7\u008c"+
		"\2\2\u0620\u0621\7i\2\2\u0621\u0622\5\u00e4s\2\u0622\u0623\7X\2\2\u0623"+
		"\u00e3\3\2\2\2\u0624\u0626\5\24\13\2\u0625\u0624\3\2\2\2\u0625\u0626\3"+
		"\2\2\2\u0626\u0627\3\2\2\2\u0627\u0628\5\2\2\2\u0628\u00e5\3\2\2\2\u0629"+
		"\u062a\7J\2\2\u062a\u062b\5\u00e8u\2\u062b\u062c\7X\2\2\u062c\u00e7\3"+
		"\2\2\2\u062d\u062e\bu\1\2\u062e\u0630\5\u00eav\2\u062f\u0631\7Z\2\2\u0630"+
		"\u062f\3\2\2\2\u0630\u0631\3\2\2\2\u0631\u063a\3\2\2\2\u0632\u0633\f\3"+
		"\2\2\u0633\u0634\7\u0080\2\2\u0634\u0636\5\u00eav\2\u0635\u0637\7Z\2\2"+
		"\u0636\u0635\3\2\2\2\u0636\u0637\3\2\2\2\u0637\u0639\3\2\2\2\u0638\u0632"+
		"\3\2\2\2\u0639\u063c\3\2\2\2\u063a\u0638\3\2\2\2\u063a\u063b\3\2\2\2\u063b"+
		"\u00e9\3\2\2\2\u063c\u063a\3\2\2\2\u063d\u063f\5\u00be`\2\u063e\u063d"+
		"\3\2\2\2\u063e\u063f\3\2\2\2\u063f\u0640\3\2\2\2\u0640\u0641\5\24\13\2"+
		"\u0641\u0642\5\20\t\2\u0642\u00eb\3\2\2\2\u0643\u0645\5\u00f2z\2\u0644"+
		"\u0643\3\2\2\2\u0644\u0645\3\2\2\2\u0645\u0646\3\2\2\2\u0646\u0647\7J"+
		"\2\2\u0647\u0649\7,\2\2\u0648\u064a\5\24\13\2\u0649\u0648\3\2\2\2\u0649"+
		"\u064a\3\2\2\2\u064a\u064b\3\2\2\2\u064b\u064c\5\2\2\2\u064c\u064d\7X"+
		"\2\2\u064d\u00ed\3\2\2\2\u064e\u0650\5\u00f2z\2\u064f\u064e\3\2\2\2\u064f"+
		"\u0650\3\2\2\2\u0650\u0651\3\2\2\2\u0651\u0652\7\t\2\2\u0652\u0653\7V"+
		"\2\2\u0653\u0654\7\u0087\2\2\u0654\u0655\7W\2\2\u0655\u0656\7X\2\2\u0656"+
		"\u00ef\3\2\2\2\u0657\u0658\7!\2\2\u0658\u0659\7\u0087\2\2\u0659\u065b"+
		"\7R\2\2\u065a\u065c\5\u0094K\2\u065b\u065a\3\2\2\2\u065b\u065c\3\2\2\2"+
		"\u065c\u065d\3\2\2\2\u065d\u0662\7S\2\2\u065e\u065f\7!\2\2\u065f\u0660"+
		"\7\u0087\2\2\u0660\u0662\5\u0096L\2\u0661\u0657\3\2\2\2\u0661\u065e\3"+
		"\2\2\2\u0662\u00f1\3\2\2\2\u0663\u0664\bz\1\2\u0664\u0665\5\u00f4{\2\u0665"+
		"\u066a\3\2\2\2\u0666\u0667\f\3\2\2\u0667\u0669\5\u00f4{\2\u0668\u0666"+
		"\3\2\2\2\u0669\u066c\3\2\2\2\u066a\u0668\3\2\2\2\u066a\u066b\3\2\2\2\u066b"+
		"\u00f3\3\2\2\2\u066c\u066a\3\2\2\2\u066d\u066e\7T\2\2\u066e\u0670\7T\2"+
		"\2\u066f\u0671\5\u00f8}\2\u0670\u066f\3\2\2\2\u0670\u0671\3\2\2\2\u0671"+
		"\u0672\3\2\2\2\u0672\u0673\5\u00fa~\2\u0673\u0674\7U\2\2\u0674\u0675\7"+
		"U\2\2\u0675\u0678\3\2\2\2\u0676\u0678\5\u00f6|\2\u0677\u066d\3\2\2\2\u0677"+
		"\u0676\3\2\2\2\u0678\u00f5\3\2\2\2\u0679\u067a\7\7\2\2\u067a\u067b\7V"+
		"\2\2\u067b\u067d\5\u0124\u0093\2\u067c\u067e\7Z\2\2\u067d\u067c\3\2\2"+
		"\2\u067d\u067e\3\2\2\2\u067e\u067f\3\2\2\2\u067f\u0680\7W\2\2\u0680\u068a"+
		"\3\2\2\2\u0681\u0682\7\7\2\2\u0682\u0683\7W\2\2\u0683\u0685\5v<\2\u0684"+
		"\u0686\7Z\2\2\u0685\u0684\3\2\2\2\u0685\u0686\3\2\2\2\u0686\u0687\3\2"+
		"\2\2\u0687\u0688\7W\2\2\u0688\u068a\3\2\2\2\u0689\u0679\3\2\2\2\u0689"+
		"\u0681\3\2\2\2\u068a\u00f7\3\2\2\2\u068b\u068c\7J\2\2\u068c\u068d\5\u0102"+
		"\u0082\2\u068d\u068e\7Y\2\2\u068e\u00f9\3\2\2\2\u068f\u0691\b~\1\2\u0690"+
		"\u0692\5\u00fc\177\2\u0691\u0690\3\2\2\2\u0691\u0692\3\2\2\2\u0692\u0697"+
		"\3\2\2\2\u0693\u0694\5\u00fc\177\2\u0694\u0695\7Z\2\2\u0695\u0697\3\2"+
		"\2\2\u0696\u068f\3\2\2\2\u0696\u0693\3\2\2\2\u0697\u06a4\3\2\2\2\u0698"+
		"\u0699\f\5\2\2\u0699\u069b\7\u0080\2\2\u069a\u069c\5\u00fc\177\2\u069b"+
		"\u069a\3\2\2\2\u069b\u069c\3\2\2\2\u069c\u06a3\3\2\2\2\u069d\u069e\f\3"+
		"\2\2\u069e\u069f\7\u0080\2\2\u069f\u06a0\5\u00fc\177\2\u06a0\u06a1\7Z"+
		"\2\2\u06a1\u06a3\3\2\2\2\u06a2\u0698\3\2\2\2\u06a2\u069d\3\2\2\2\u06a3"+
		"\u06a6\3\2\2\2\u06a4\u06a2\3\2\2\2\u06a4\u06a5\3\2\2\2\u06a5\u00fb\3\2"+
		"\2\2\u06a6\u06a4\3\2\2\2\u06a7\u06a9\5\u00fe\u0080\2\u06a8\u06aa\5\u0104"+
		"\u0083\2\u06a9\u06a8\3\2\2\2\u06a9\u06aa\3\2\2\2\u06aa\u00fd\3\2\2\2\u06ab"+
		"\u06ae\7\u008c\2\2\u06ac\u06ae\5\u0100\u0081\2\u06ad\u06ab\3\2\2\2\u06ad"+
		"\u06ac\3\2\2\2\u06ae\u00ff\3\2\2\2\u06af\u06b0\5\u0102\u0082\2\u06b0\u06b1"+
		"\7\\\2\2\u06b1\u06b2\7\u008c\2\2\u06b2\u0101\3\2\2\2\u06b3\u06b4\7\u008c"+
		"\2\2\u06b4\u0103\3\2\2\2\u06b5\u06b7\7V\2\2\u06b6\u06b8\5\u0106\u0084"+
		"\2\u06b7\u06b6\3\2\2\2\u06b7\u06b8\3\2\2\2\u06b8\u06b9\3\2\2\2\u06b9\u06ba"+
		"\7W\2\2\u06ba\u0105\3\2\2\2\u06bb\u06bc\b\u0084\1\2\u06bc\u06bd\5\u0108"+
		"\u0085\2\u06bd\u06c2\3\2\2\2\u06be\u06bf\f\3\2\2\u06bf\u06c1\5\u0108\u0085"+
		"\2\u06c0\u06be\3\2\2\2\u06c1\u06c4\3\2\2\2\u06c2\u06c0\3\2\2\2\u06c2\u06c3"+
		"\3\2\2\2\u06c3\u0107\3\2\2\2\u06c4\u06c2\3\2\2\2\u06c5\u06c7\7V\2\2\u06c6"+
		"\u06c8\5\u0106\u0084\2\u06c7\u06c6\3\2\2\2\u06c7\u06c8\3\2\2\2\u06c8\u06c9"+
		"\3\2\2\2\u06c9\u06d6\7W\2\2\u06ca\u06cc\7T\2\2\u06cb\u06cd\5\u0106\u0084"+
		"\2\u06cc\u06cb\3\2\2\2\u06cc\u06cd\3\2\2\2\u06cd\u06ce\3\2\2\2\u06ce\u06d6"+
		"\7U\2\2\u06cf\u06d1\7R\2\2\u06d0\u06d2\5\u0106\u0084\2\u06d1\u06d0\3\2"+
		"\2\2\u06d1\u06d2\3\2\2\2\u06d2\u06d3\3\2\2\2\u06d3\u06d6\7S\2\2\u06d4"+
		"\u06d6\n\13\2\2\u06d5\u06c5\3\2\2\2\u06d5\u06ca\3\2\2\2\u06d5\u06cf\3"+
		"\2\2\2\u06d5\u06d4\3\2\2\2\u06d6\u0109\3\2\2\2\u06d7\u06d8\b\u0086\1\2"+
		"\u06d8\u06d9\5\u010c\u0087\2\u06d9\u06df\3\2\2\2\u06da\u06db\f\3\2\2\u06db"+
		"\u06dc\7\u0080\2\2\u06dc\u06de\5\u010c\u0087\2\u06dd\u06da\3\2\2\2\u06de"+
		"\u06e1\3\2\2\2\u06df\u06dd\3\2\2\2\u06df\u06e0\3\2\2\2\u06e0\u010b\3\2"+
		"\2\2\u06e1\u06df\3\2\2\2\u06e2\u06e4\5\u010e\u0088\2\u06e3\u06e5\5\u0144"+
		"\u00a3\2\u06e4\u06e3\3\2\2\2\u06e4\u06e5\3\2\2\2\u06e5\u010d\3\2\2\2\u06e6"+
		"\u06e9\5\u0110\u0089\2\u06e7\u06e9\5\u0112\u008a\2\u06e8\u06e6\3\2\2\2"+
		"\u06e8\u06e7\3\2\2\2\u06e9\u010f\3\2\2\2\u06ea\u06eb\5\u011c\u008f\2\u06eb"+
		"\u06ec\5\u010e\u0088\2\u06ec\u0111\3\2\2\2\u06ed\u06ef\b\u008a\1\2\u06ee"+
		"\u06f0\7Z\2\2\u06ef\u06ee\3\2\2\2\u06ef\u06f0\3\2\2\2\u06f0\u06f1\3\2"+
		"\2\2\u06f1\u06f3\5\16\b\2\u06f2\u06f4\5\u00f2z\2\u06f3\u06f2\3\2\2\2\u06f3"+
		"\u06f4\3\2\2\2\u06f4\u06fa\3\2\2\2\u06f5\u06f6\7V\2\2\u06f6\u06f7\5\u0110"+
		"\u0089\2\u06f7\u06f8\7W\2\2\u06f8\u06fa\3\2\2\2\u06f9\u06ed\3\2\2\2\u06f9"+
		"\u06f5\3\2\2\2\u06fa\u0708\3\2\2\2\u06fb\u06fc\f\5\2\2\u06fc\u06fe\7T"+
		"\2\2\u06fd\u06ff\5v<\2\u06fe\u06fd\3\2\2\2\u06fe\u06ff\3\2\2\2\u06ff\u0700"+
		"\3\2\2\2\u0700\u0702\7U\2\2\u0701\u0703\5\u00f2z\2\u0702\u0701\3\2\2\2"+
		"\u0702\u0703\3\2\2\2\u0703\u0707\3\2\2\2\u0704\u0705\f\4\2\2\u0705\u0707"+
		"\5\u0114\u008b\2\u0706\u06fb\3\2\2\2\u0706\u0704\3\2\2\2\u0707\u070a\3"+
		"\2\2\2\u0708\u0706\3\2\2\2\u0708\u0709\3\2\2\2\u0709\u0113\3\2\2\2\u070a"+
		"\u0708\3\2\2\2\u070b\u070c\5\u0116\u008c\2\u070c\u070d\5\u0118\u008d\2"+
		"\u070d\u0115\3\2\2\2\u070e\u070f\7V\2\2\u070f\u0710\5\u0132\u009a\2\u0710"+
		"\u0711\7W\2\2\u0711\u0117\3\2\2\2\u0712\u0714\5\u011e\u0090\2\u0713\u0712"+
		"\3\2\2\2\u0713\u0714\3\2\2\2\u0714\u0716\3\2\2\2\u0715\u0717\5\u0122\u0092"+
		"\2\u0716\u0715\3\2\2\2\u0716\u0717\3\2\2\2\u0717\u0719\3\2\2\2\u0718\u071a"+
		"\5\u01aa\u00d6\2\u0719\u0718\3\2\2\2\u0719\u071a\3\2\2\2\u071a\u071c\3"+
		"\2\2\2\u071b\u071d\5\u00f2z\2\u071c\u071b\3\2\2\2\u071c\u071d\3\2\2\2"+
		"\u071d\u0119\3\2\2\2\u071e\u071f\7\u0082\2\2\u071f\u0720\5\u0124\u0093"+
		"\2\u0720\u011b\3\2\2\2\u0721\u0723\7a\2\2\u0722\u0724\5\u00f2z\2\u0723"+
		"\u0722\3\2\2\2\u0723\u0724\3\2\2\2\u0724\u0726\3\2\2\2\u0725\u0727\5\u011e"+
		"\u0090\2\u0726\u0725\3\2\2\2\u0726\u0727\3\2\2\2\u0727\u0739\3\2\2\2\u0728"+
		"\u072a\7e\2\2\u0729\u072b\5\u00f2z\2\u072a\u0729\3\2\2\2\u072a\u072b\3"+
		"\2\2\2\u072b\u0739\3\2\2\2\u072c\u072e\7|\2\2\u072d\u072f\5\u00f2z\2\u072e"+
		"\u072d\3\2\2\2\u072e\u072f\3\2\2\2\u072f\u0739\3\2\2\2\u0730\u0731\5\24"+
		"\13\2\u0731\u0733\7a\2\2\u0732\u0734\5\u00f2z\2\u0733\u0732\3\2\2\2\u0733"+
		"\u0734\3\2\2\2\u0734\u0736\3\2\2\2\u0735\u0737\5\u011e\u0090\2\u0736\u0735"+
		"\3\2\2\2\u0736\u0737\3\2\2\2\u0737\u0739\3\2\2\2\u0738\u0721\3\2\2\2\u0738"+
		"\u0728\3\2\2\2\u0738\u072c\3\2\2\2\u0738\u0730\3\2\2\2\u0739\u011d\3\2"+
		"\2\2\u073a\u073c\5\u0120\u0091\2\u073b\u073d\5\u011e\u0090\2\u073c\u073b"+
		"\3\2\2\2\u073c\u073d\3\2\2\2\u073d\u011f\3\2\2\2\u073e\u073f\t\f\2\2\u073f"+
		"\u0121\3\2\2\2\u0740\u0741\7e\2\2\u0741\u0742\7|\2\2\u0742\u0123\3\2\2"+
		"\2\u0743\u0745\5\u00b6\\\2\u0744\u0746\5\u0128\u0095\2\u0745\u0744\3\2"+
		"\2\2\u0745\u0746\3\2\2\2\u0746\u0125\3\2\2\2\u0747\u0749\5\u00ba^\2\u0748"+
		"\u074a\5\u0128\u0095\2\u0749\u0748\3\2\2\2\u0749\u074a\3\2\2\2\u074a\u0127"+
		"\3\2\2\2\u074b\u0754\5\u012a\u0096\2\u074c\u074e\5\u012c\u0097\2\u074d"+
		"\u074c\3\2\2\2\u074d\u074e\3\2\2\2\u074e\u074f\3\2\2\2\u074f\u0750\5\u0114"+
		"\u008b\2\u0750\u0751\5\u011a\u008e\2\u0751\u0754\3\2\2\2\u0752\u0754\5"+
		"\u012e\u0098\2\u0753\u074b\3\2\2\2\u0753\u074d\3\2\2\2\u0753\u0752\3\2"+
		"\2\2\u0754\u0129\3\2\2\2\u0755\u075b\5\u012c\u0097\2\u0756\u0758\5\u011c"+
		"\u008f\2\u0757\u0759\5\u012a\u0096\2\u0758\u0757\3\2\2\2\u0758\u0759\3"+
		"\2\2\2\u0759\u075b\3\2\2\2\u075a\u0755\3\2\2\2\u075a\u0756\3\2\2\2\u075b"+
		"\u012b\3\2\2\2\u075c\u075d\b\u0097\1\2\u075d\u076b\5\u0114\u008b\2\u075e"+
		"\u0760\7T\2\2\u075f\u0761\5v<\2\u0760\u075f\3\2\2\2\u0760\u0761\3\2\2"+
		"\2\u0761\u0762\3\2\2\2\u0762\u0764\7U\2\2\u0763\u0765\5\u00f2z\2\u0764"+
		"\u0763\3\2\2\2\u0764\u0765\3\2\2\2\u0765\u076b\3\2\2\2\u0766\u0767\7V"+
		"\2\2\u0767\u0768\5\u012a\u0096\2\u0768\u0769\7W\2\2\u0769\u076b\3\2\2"+
		"\2\u076a\u075c\3\2\2\2\u076a\u075e\3\2\2\2\u076a\u0766\3\2\2\2\u076b\u0779"+
		"\3\2\2\2\u076c\u076d\f\6\2\2\u076d\u0778\5\u0114\u008b\2\u076e\u076f\f"+
		"\4\2\2\u076f\u0771\7T\2\2\u0770\u0772\5v<\2\u0771\u0770\3\2\2\2\u0771"+
		"\u0772\3\2\2\2\u0772\u0773\3\2\2\2\u0773\u0775\7U\2\2\u0774\u0776\5\u00f2"+
		"z\2\u0775\u0774\3\2\2\2\u0775\u0776\3\2\2\2\u0776\u0778\3\2\2\2\u0777"+
		"\u076c\3\2\2\2\u0777\u076e\3\2\2\2\u0778\u077b\3\2\2\2\u0779\u0777\3\2"+
		"\2\2\u0779\u077a\3\2\2\2\u077a\u012d\3\2\2\2\u077b\u0779\3\2\2\2\u077c"+
		"\u0781\5\u0130\u0099\2\u077d\u077e\5\u011c\u008f\2\u077e\u077f\5\u012e"+
		"\u0098\2\u077f\u0781\3\2\2\2\u0780\u077c\3\2\2\2\u0780\u077d\3\2\2\2\u0781"+
		"\u012f\3\2\2\2\u0782\u0783\b\u0099\1\2\u0783\u0784\7Z\2\2\u0784\u0792"+
		"\3\2\2\2\u0785\u0786\f\5\2\2\u0786\u0791\5\u0114\u008b\2\u0787\u0788\f"+
		"\4\2\2\u0788\u078a\7T\2\2\u0789\u078b\5v<\2\u078a\u0789\3\2\2\2\u078a"+
		"\u078b\3\2\2\2\u078b\u078c\3\2\2\2\u078c\u078e\7U\2\2\u078d\u078f\5\u00f2"+
		"z\2\u078e\u078d\3\2\2\2\u078e\u078f\3\2\2\2\u078f\u0791\3\2\2\2\u0790"+
		"\u0785\3\2\2\2\u0790\u0787\3\2\2\2\u0791\u0794\3\2\2\2\u0792\u0790\3\2"+
		"\2\2\u0792\u0793\3\2\2\2\u0793\u0131\3\2\2\2\u0794\u0792\3\2\2\2\u0795"+
		"\u0797\5\u0134\u009b\2\u0796\u0795\3\2\2\2\u0796\u0797\3\2\2\2\u0797\u0799"+
		"\3\2\2\2\u0798\u079a\7Z\2\2\u0799\u0798\3\2\2\2\u0799\u079a\3\2\2\2\u079a"+
		"\u07a0\3\2\2\2\u079b\u079c\5\u0134\u009b\2\u079c\u079d\7\u0080\2\2\u079d"+
		"\u079e\7Z\2\2\u079e\u07a0\3\2\2\2\u079f\u0796\3\2\2\2\u079f\u079b\3\2"+
		"\2\2\u07a0\u0133\3\2\2\2\u07a1\u07a2\b\u009b\1\2\u07a2\u07a3\5\u0136\u009c"+
		"\2\u07a3\u07a9\3\2\2\2\u07a4\u07a5\f\3\2\2\u07a5\u07a6\7\u0080\2\2\u07a6"+
		"\u07a8\5\u0136\u009c\2\u07a7\u07a4\3\2\2\2\u07a8\u07ab\3\2\2\2\u07a9\u07a7"+
		"\3\2\2\2\u07a9\u07aa\3\2\2\2\u07aa\u0135\3\2\2\2\u07ab\u07a9\3\2\2\2\u07ac"+
		"\u07ae\5\u00f2z\2\u07ad\u07ac\3\2\2\2\u07ad\u07ae\3\2\2\2\u07ae\u07af"+
		"\3\2\2\2\u07af\u07b0\5\u00a8U\2\u07b0\u07b1\5\u010e\u0088\2\u07b1\u07bb"+
		"\3\2\2\2\u07b2\u07b4\5\u00f2z\2\u07b3\u07b2\3\2\2\2\u07b3\u07b4\3\2\2"+
		"\2\u07b4\u07b5\3\2\2\2\u07b5\u07b6\5\u00a8U\2\u07b6\u07b7\5\u010e\u0088"+
		"\2\u07b7\u07b8\7i\2\2\u07b8\u07b9\5\u0148\u00a5\2\u07b9\u07bb\3\2\2\2"+
		"\u07ba\u07ad\3\2\2\2\u07ba\u07b3\3\2\2\2\u07bb\u0137\3\2\2\2\u07bc\u07be"+
		"\5\u00f2z\2\u07bd\u07bc\3\2\2\2\u07bd\u07be\3\2\2\2\u07be\u07c0\3\2\2"+
		"\2\u07bf\u07c1\5\u00a8U\2\u07c0\u07bf\3\2\2\2\u07c0\u07c1\3\2\2\2\u07c1"+
		"\u07c2\3\2\2\2\u07c2\u07c4\5\u013a\u009e\2\u07c3\u07c5\5\u0162\u00b2\2"+
		"\u07c4\u07c3\3\2\2\2\u07c4\u07c5\3\2\2\2\u07c5\u07c6\3\2\2\2\u07c6\u07c7"+
		"\5\u013c\u009f\2\u07c7\u0139\3\2\2\2\u07c8\u07c9\5\16\b\2\u07c9\u07ca"+
		"\5\u0116\u008c\2\u07ca\u07cc\5\u0118\u008d\2\u07cb\u07cd\5\u011a\u008e"+
		"\2\u07cc\u07cb\3\2\2\2\u07cc\u07cd\3\2\2\2\u07cd\u013b\3\2\2\2\u07ce\u07d3"+
		"\5\u013e\u00a0\2\u07cf\u07d3\5\u01a2\u00d2\2\u07d0\u07d3\5\u0140\u00a1"+
		"\2\u07d1\u07d3\5\u0142\u00a2\2\u07d2\u07ce\3\2\2\2\u07d2\u07cf\3\2\2\2"+
		"\u07d2\u07d0\3\2\2\2\u07d2\u07d1\3\2\2\2\u07d3\u013d\3\2\2\2\u07d4\u07d6"+
		"\5\u0178\u00bd\2\u07d5\u07d4\3\2\2\2\u07d5\u07d6\3\2\2\2\u07d6\u07d7\3"+
		"\2\2\2\u07d7\u07d8\5\u0082B\2\u07d8\u013f\3\2\2\2\u07d9\u07da\7i\2\2\u07da"+
		"\u07db\7\30\2\2\u07db\u07dc\7X\2\2\u07dc\u0141\3\2\2\2\u07dd\u07de\7i"+
		"\2\2\u07de\u07df\7\31\2\2\u07df\u07e0\7X\2\2\u07e0\u0143\3\2\2\2\u07e1"+
		"\u07e2\5\u0146\u00a4\2\u07e2\u0145\3\2\2\2\u07e3\u07e4\7i\2\2\u07e4\u07e7"+
		"\5\u0148\u00a5\2\u07e5\u07e7\5\u014c\u00a7\2\u07e6\u07e3\3\2\2\2\u07e6"+
		"\u07e5\3\2\2\2\u07e7\u0147\3\2\2\2\u07e8\u07eb\5p9\2\u07e9\u07eb\5\u014c"+
		"\u00a7\2\u07ea\u07e8\3\2\2\2\u07ea\u07e9\3\2\2\2\u07eb\u0149\3\2\2\2\u07ec"+
		"\u07ed\b\u00a6\1\2\u07ed\u07ef\5\u0148\u00a5\2\u07ee\u07f0\7Z\2\2\u07ef"+
		"\u07ee\3\2\2\2\u07ef\u07f0\3\2\2\2\u07f0\u07f9\3\2\2\2\u07f1\u07f2\f\3"+
		"\2\2\u07f2\u07f3\7\u0080\2\2\u07f3\u07f5\5\u0148\u00a5\2\u07f4\u07f6\7"+
		"Z\2\2\u07f5\u07f4\3\2\2\2\u07f5\u07f6\3\2\2\2\u07f6\u07f8\3\2\2\2\u07f7"+
		"\u07f1\3\2\2\2\u07f8\u07fb\3\2\2\2\u07f9\u07f7\3\2\2\2\u07f9\u07fa\3\2"+
		"\2\2\u07fa\u014b\3\2\2\2\u07fb\u07f9\3\2\2\2\u07fc\u07fd\7R\2\2\u07fd"+
		"\u07ff\5\u014a\u00a6\2\u07fe\u0800\7\u0080\2\2\u07ff\u07fe\3\2\2\2\u07ff"+
		"\u0800\3\2\2\2\u0800\u0801\3\2\2\2\u0801\u0802\7S\2\2\u0802\u0806\3\2"+
		"\2\2\u0803\u0804\7R\2\2\u0804\u0806\7S\2\2\u0805\u07fc\3\2\2\2\u0805\u0803"+
		"\3\2\2\2\u0806\u014d\3\2\2\2\u0807\u080a\5t;\2\u0808\u080a\5\u014c\u00a7"+
		"\2\u0809\u0807\3\2\2\2\u0809\u0808\3\2\2\2\u080a\u014f\3\2\2\2\u080b\u080c"+
		"\5\u0152\u00aa\2\u080c\u080e\7R\2\2\u080d\u080f\5\u015a\u00ae\2\u080e"+
		"\u080d\3\2\2\2\u080e\u080f\3\2\2\2\u080f\u0810\3\2\2\2\u0810\u0811\7S"+
		"\2\2\u0811\u0151\3\2\2\2\u0812\u0814\5\u0158\u00ad\2\u0813\u0815\5\u00f2"+
		"z\2\u0814\u0813\3\2\2\2\u0814\u0815\3\2\2\2\u0815\u0816\3\2\2\2\u0816"+
		"\u0818\5\u0154\u00ab\2\u0817\u0819\5\u0156\u00ac\2\u0818\u0817\3\2\2\2"+
		"\u0818\u0819\3\2\2\2\u0819\u081b\3\2\2\2\u081a\u081c\5\u0168\u00b5\2\u081b"+
		"\u081a\3\2\2\2\u081b\u081c\3\2\2\2\u081c\u0825\3\2\2\2\u081d\u081f\5\u0158"+
		"\u00ad\2\u081e\u0820\5\u00f4{\2\u081f\u081e\3\2\2\2\u081f\u0820\3\2\2"+
		"\2\u0820\u0822\3\2\2\2\u0821\u0823\5\u0168\u00b5\2\u0822\u0821\3\2\2\2"+
		"\u0822\u0823\3\2\2\2\u0823\u0825\3\2\2\2\u0824\u0812\3\2\2\2\u0824\u081d"+
		"\3\2\2\2\u0825\u0153\3\2\2\2\u0826\u0828\5\24\13\2\u0827\u0826\3\2\2\2"+
		"\u0827\u0828\3\2\2\2\u0828\u0829\3\2\2\2\u0829\u082a\5\6\4\2\u082a\u0155"+
		"\3\2\2\2\u082b\u082c\7Q\2\2\u082c\u0157\3\2\2\2\u082d\u082e\t\r\2\2\u082e"+
		"\u0159\3\2\2\2\u082f\u0831\5\u015c\u00af\2\u0830\u0832\5\u015a\u00ae\2"+
		"\u0831\u0830\3\2\2\2\u0831\u0832\3\2\2\2\u0832\u0839\3\2\2\2\u0833\u0834"+
		"\5\u0170\u00b9\2\u0834\u0836\7Y\2\2\u0835\u0837\5\u015a\u00ae\2\u0836"+
		"\u0835\3\2\2\2\u0836\u0837\3\2\2\2\u0837\u0839\3\2\2\2\u0838\u082f\3\2"+
		"\2\2\u0838\u0833\3\2\2\2\u0839\u015b\3\2\2\2\u083a\u083c\5\u00f2z\2\u083b"+
		"\u083a\3\2\2\2\u083b\u083c\3\2\2\2\u083c\u083d\3\2\2\2\u083d\u083e\5\u00a8"+
		"U\2\u083e\u083f\5\u015e\u00b0\2\u083f\u0840\7X\2\2\u0840\u0849\3\2\2\2"+
		"\u0841\u0849\5\u0138\u009d\2\u0842\u0849\5\u00e6t\2\u0843\u0849\5\u00a0"+
		"Q\2\u0844\u0849\5\u0186\u00c4\2\u0845\u0849\5\u019e\u00d0\2\u0846\u0849"+
		"\5\u009cO\2\u0847\u0849\5\u00a2R\2\u0848\u083b\3\2\2\2\u0848\u0841\3\2"+
		"\2\2\u0848\u0842\3\2\2\2\u0848\u0843\3\2\2\2\u0848\u0844\3\2\2\2\u0848"+
		"\u0845\3\2\2\2\u0848\u0846\3\2\2\2\u0848\u0847\3\2\2\2\u0849\u015d\3\2"+
		"\2\2\u084a\u084b\b\u00b0\1\2\u084b\u084c\5\u0160\u00b1\2\u084c\u0852\3"+
		"\2\2\2\u084d\u084e\f\3\2\2\u084e\u084f\7\u0080\2\2\u084f\u0851\5\u0160"+
		"\u00b1\2\u0850\u084d\3\2\2\2\u0851\u0854\3\2\2\2\u0852\u0850\3\2\2\2\u0852"+
		"\u0853\3\2\2\2\u0853\u015f\3\2\2\2\u0854\u0852\3\2\2\2\u0855\u0857\5\u010e"+
		"\u0088\2\u0856\u0858\5\u0162\u00b2\2\u0857\u0856\3\2\2\2\u0857\u0858\3"+
		"\2\2\2\u0858\u0865\3\2\2\2\u0859\u085a\5\u010e\u0088\2\u085a\u085b\5\u0146"+
		"\u00a4\2\u085b\u0865\3\2\2\2\u085c\u085e\7\u008c\2\2\u085d\u085c\3\2\2"+
		"\2\u085d\u085e\3\2\2\2\u085e\u0860\3\2\2\2\u085f\u0861\5\u00f2z\2\u0860"+
		"\u085f\3\2\2\2\u0860\u0861\3\2\2\2\u0861\u0862\3\2\2\2\u0862\u0863\7Y"+
		"\2\2\u0863\u0865\5v<\2\u0864\u0855\3\2\2\2\u0864\u0859\3\2\2\2\u0864\u085d"+
		"\3\2\2\2\u0865\u0161\3\2\2\2\u0866\u0867\b\u00b2\1\2\u0867\u0868\5\u0164"+
		"\u00b3\2\u0868\u086d\3\2\2\2\u0869\u086a\f\3\2\2\u086a\u086c\5\u0164\u00b3"+
		"\2\u086b\u0869\3\2\2\2\u086c\u086f\3\2\2\2\u086d\u086b\3\2\2\2\u086d\u086e"+
		"\3\2\2\2\u086e\u0163\3\2\2\2\u086f\u086d\3\2\2\2\u0870\u0871\t\16\2\2"+
		"\u0871\u0165\3\2\2\2\u0872\u0873\7i\2\2\u0873\u0874\7\u0083\2\2\u0874"+
		"\u0167\3\2\2\2\u0875\u0876\7Y\2\2\u0876\u0877\5\u016a\u00b6\2\u0877\u0169"+
		"\3\2\2\2\u0878\u0879\b\u00b6\1\2\u0879\u087b\5\u016c\u00b7\2\u087a\u087c"+
		"\7Z\2\2\u087b\u087a\3\2\2\2\u087b\u087c\3\2\2\2\u087c\u0885\3\2\2\2\u087d"+
		"\u087e\f\3\2\2\u087e\u087f\7\u0080\2\2\u087f\u0881\5\u016c\u00b7\2\u0880"+
		"\u0882\7Z\2\2\u0881\u0880\3\2\2\2\u0881\u0882\3\2\2\2\u0882\u0884\3\2"+
		"\2\2\u0883\u087d\3\2\2\2\u0884\u0887\3\2\2\2\u0885\u0883\3\2\2\2\u0885"+
		"\u0886\3\2\2\2\u0886\u016b\3\2\2\2\u0887\u0885\3\2\2\2\u0888\u088a\5\u00f2"+
		"z\2\u0889\u0888\3\2\2\2\u0889\u088a\3\2\2\2\u088a\u088b\3\2\2\2\u088b"+
		"\u089e\5\u016e\u00b8\2\u088c\u088e\5\u00f2z\2\u088d\u088c\3\2\2\2\u088d"+
		"\u088e\3\2\2\2\u088e\u088f\3\2\2\2\u088f\u0891\7K\2\2\u0890\u0892\5\u0170"+
		"\u00b9\2\u0891\u0890\3\2\2\2\u0891\u0892\3\2\2\2\u0892\u0893\3\2\2\2\u0893"+
		"\u089e\5\u016e\u00b8\2\u0894\u0896\5\u00f2z\2\u0895\u0894\3\2\2\2\u0895"+
		"\u0896\3\2\2\2\u0896\u0897\3\2\2\2\u0897\u0899\5\u0170\u00b9\2\u0898\u089a"+
		"\7K\2\2\u0899\u0898\3\2\2\2\u0899\u089a\3\2\2\2\u089a\u089b\3\2\2\2\u089b"+
		"\u089c\5\u016e\u00b8\2\u089c\u089e\3\2\2\2\u089d\u0889\3\2\2\2\u089d\u088d"+
		"\3\2\2\2\u089d\u0895\3\2\2\2\u089e\u016d\3\2\2\2\u089f\u08a1\5\24\13\2"+
		"\u08a0\u089f\3\2\2\2\u08a0\u08a1\3\2\2\2\u08a1\u08a2\3\2\2\2\u08a2\u08a9"+
		"\5\6\4\2\u08a3\u08a4\5\24\13\2\u08a4\u08a5\7?\2\2\u08a5\u08a6\5\u0190"+
		"\u00c9\2\u08a6\u08a9\3\2\2\2\u08a7\u08a9\5\u00c0a\2\u08a8\u08a0\3\2\2"+
		"\2\u08a8\u08a3\3\2\2\2\u08a8\u08a7\3\2\2\2\u08a9\u016f\3\2\2\2\u08aa\u08ab"+
		"\t\17\2\2\u08ab\u0171\3\2\2\2\u08ac\u08ad\7\60\2\2\u08ad\u08ae\5\u0174"+
		"\u00bb\2\u08ae\u0173\3\2\2\2\u08af\u08b1\5\u00b6\\\2\u08b0\u08b2\5\u0176"+
		"\u00bc\2\u08b1\u08b0\3\2\2\2\u08b1\u08b2\3\2\2\2\u08b2\u0175\3\2\2\2\u08b3"+
		"\u08b5\5\u011c\u008f\2\u08b4\u08b6\5\u0176\u00bc\2\u08b5\u08b4\3\2\2\2"+
		"\u08b5\u08b6\3\2\2\2\u08b6\u0177\3\2\2\2\u08b7\u08b8\7Y\2\2\u08b8\u08b9"+
		"\5\u017a\u00be\2\u08b9\u0179\3\2\2\2\u08ba\u08bb\b\u00be\1\2\u08bb\u08bd"+
		"\5\u017c\u00bf\2\u08bc\u08be\7Z\2\2\u08bd\u08bc\3\2\2\2\u08bd\u08be\3"+
		"\2\2\2\u08be\u08c7\3\2\2\2\u08bf\u08c0\f\3\2\2\u08c0\u08c1\7\u0080\2\2"+
		"\u08c1\u08c3\5\u017c\u00bf\2\u08c2\u08c4\7Z\2\2\u08c3\u08c2\3\2\2\2\u08c3"+
		"\u08c4\3\2\2\2\u08c4\u08c6\3\2\2\2\u08c5\u08bf\3\2\2\2\u08c6\u08c9\3\2"+
		"\2\2\u08c7\u08c5\3\2\2\2\u08c7\u08c8\3\2\2\2\u08c8\u017b\3\2\2\2\u08c9"+
		"\u08c7\3\2\2\2\u08ca\u08cb\5\u017e\u00c0\2\u08cb\u08cd\7V\2\2\u08cc\u08ce"+
		"\5<\37\2\u08cd\u08cc\3\2\2\2\u08cd\u08ce\3\2\2\2\u08ce\u08cf\3\2\2\2\u08cf"+
		"\u08d0\7W\2\2\u08d0\u08d5\3\2\2\2\u08d1\u08d2\5\u017e\u00c0\2\u08d2\u08d3"+
		"\5\u014c\u00a7\2\u08d3\u08d5\3\2\2\2\u08d4\u08ca\3\2\2\2\u08d4\u08d1\3"+
		"\2\2\2\u08d5\u017d\3\2\2\2\u08d6\u08d7\7\u008c\2\2\u08d7\u017f\3\2\2\2"+
		"\u08d8\u08d9\7\60\2\2\u08d9\u08da\5\u0182\u00c2\2\u08da\u0181\3\2\2\2"+
		"\u08db\u090c\7-\2\2\u08dc\u090c\7\31\2\2\u08dd\u08de\7-\2\2\u08de\u08df"+
		"\7R\2\2\u08df\u090c\7U\2\2\u08e0\u08e1\7\31\2\2\u08e1\u08e2\7R\2\2\u08e2"+
		"\u090c\7U\2\2\u08e3\u090c\7_\2\2\u08e4\u090c\7`\2\2\u08e5\u090c\7a\2\2"+
		"\u08e6\u090c\7b\2\2\u08e7\u090c\7c\2\2\u08e8\u090c\7d\2\2\u08e9\u090c"+
		"\7e\2\2\u08ea\u090c\7f\2\2\u08eb\u090c\7g\2\2\u08ec\u090c\7h\2\2\u08ed"+
		"\u090c\7i\2\2\u08ee\u090c\7j\2\2\u08ef\u090c\7k\2\2\u08f0\u090c\7l\2\2"+
		"\u08f1\u090c\7m\2\2\u08f2\u090c\7n\2\2\u08f3\u090c\7o\2\2\u08f4\u090c"+
		"\7p\2\2\u08f5\u090c\7q\2\2\u08f6\u090c\7r\2\2\u08f7\u090c\7s\2\2\u08f8"+
		"\u090c\7t\2\2\u08f9\u090c\7u\2\2\u08fa\u090c\7w\2\2\u08fb\u090c\7v\2\2"+
		"\u08fc\u090c\7x\2\2\u08fd\u090c\7y\2\2\u08fe\u090c\7z\2\2\u08ff\u090c"+
		"\7{\2\2\u0900\u090c\7|\2\2\u0901\u090c\7}\2\2\u0902\u090c\7~\2\2\u0903"+
		"\u090c\7\177\2\2\u0904\u090c\7\u0080\2\2\u0905\u090c\7\u0081\2\2\u0906"+
		"\u090c\7\u0082\2\2\u0907\u0908\7V\2\2\u0908\u090c\7W\2\2\u0909\u090a\7"+
		"T\2\2\u090a\u090c\7U\2\2\u090b\u08db\3\2\2\2\u090b\u08dc\3\2\2\2\u090b"+
		"\u08dd\3\2\2\2\u090b\u08e0\3\2\2\2\u090b\u08e3\3\2\2\2\u090b\u08e4\3\2"+
		"\2\2\u090b\u08e5\3\2\2\2\u090b\u08e6\3\2\2\2\u090b\u08e7\3\2\2\2\u090b"+
		"\u08e8\3\2\2\2\u090b\u08e9\3\2\2\2\u090b\u08ea\3\2\2\2\u090b\u08eb\3\2"+
		"\2\2\u090b\u08ec\3\2\2\2\u090b\u08ed\3\2\2\2\u090b\u08ee\3\2\2\2\u090b"+
		"\u08ef\3\2\2\2\u090b\u08f0\3\2\2\2\u090b\u08f1\3\2\2\2\u090b\u08f2\3\2"+
		"\2\2\u090b\u08f3\3\2\2\2\u090b\u08f4\3\2\2\2\u090b\u08f5\3\2\2\2\u090b"+
		"\u08f6\3\2\2\2\u090b\u08f7\3\2\2\2\u090b\u08f8\3\2\2\2\u090b\u08f9\3\2"+
		"\2\2\u090b\u08fa\3\2\2\2\u090b\u08fb\3\2\2\2\u090b\u08fc\3\2\2\2\u090b"+
		"\u08fd\3\2\2\2\u090b\u08fe\3\2\2\2\u090b\u08ff\3\2\2\2\u090b\u0900\3\2"+
		"\2\2\u090b\u0901\3\2\2\2\u090b\u0902\3\2\2\2\u090b\u0903\3\2\2\2\u090b"+
		"\u0904\3\2\2\2\u090b\u0905\3\2\2\2\u090b\u0906\3\2\2\2\u090b\u0907\3\2"+
		"\2\2\u090b\u0909\3\2\2\2\u090c\u0183\3\2\2\2\u090d\u090e\7\60\2\2\u090e"+
		"\u090f\7\u0087\2\2\u090f\u0913\7\u008c\2\2\u0910\u0911\7\60\2\2\u0911"+
		"\u0913\7\u008b\2\2\u0912\u090d\3\2\2\2\u0912\u0910\3\2\2\2\u0913\u0185"+
		"\3\2\2\2\u0914\u0915\7?\2\2\u0915\u0916\7j\2\2\u0916\u0917\5\u0188\u00c5"+
		"\2\u0917\u0918\7k\2\2\u0918\u0919\5\u0096L\2\u0919\u0187\3\2\2\2\u091a"+
		"\u091b\b\u00c5\1\2\u091b\u091c\5\u018a\u00c6\2\u091c\u0922\3\2\2\2\u091d"+
		"\u091e\f\3\2\2\u091e\u091f\7\u0080\2\2\u091f\u0921\5\u018a\u00c6\2\u0920"+
		"\u091d\3\2\2\2\u0921\u0924\3\2\2\2\u0922\u0920\3\2\2\2\u0922\u0923\3\2"+
		"\2\2\u0923\u0189\3\2\2\2\u0924\u0922\3\2\2\2\u0925\u0928\5\u018c\u00c7"+
		"\2\u0926\u0928\5\u0136\u009c\2\u0927\u0925\3\2\2\2\u0927\u0926\3\2\2\2"+
		"\u0928\u018b\3\2\2\2\u0929\u092b\5\u018e\u00c8\2\u092a\u092c\7Z\2\2\u092b"+
		"\u092a\3\2\2\2\u092b\u092c\3\2\2\2\u092c\u092e\3\2\2\2\u092d\u092f\7\u008c"+
		"\2\2\u092e\u092d\3\2\2\2\u092e\u092f\3\2\2\2\u092f\u094e\3\2\2\2\u0930"+
		"\u0932\5\u018e\u00c8\2\u0931\u0933\7\u008c\2\2\u0932\u0931\3\2\2\2\u0932"+
		"\u0933\3\2\2\2\u0933\u0934\3\2\2\2\u0934\u0935\7i\2\2\u0935\u0936\5\u0124"+
		"\u0093\2\u0936\u094e\3\2\2\2\u0937\u0938\7?\2\2\u0938\u0939\7j\2\2\u0939"+
		"\u093a\5\u0188\u00c5\2\u093a\u093b\7k\2\2\u093b\u093d\5\u018e\u00c8\2"+
		"\u093c\u093e\7Z\2\2\u093d\u093c\3\2\2\2\u093d\u093e\3\2\2\2\u093e\u0940"+
		"\3\2\2\2\u093f\u0941\7\u008c\2\2\u0940\u093f\3\2\2\2\u0940\u0941\3\2\2"+
		"\2\u0941\u094e\3\2\2\2\u0942\u0943\7?\2\2\u0943\u0944\7j\2\2\u0944\u0945"+
		"\5\u0188\u00c5\2\u0945\u0946\7k\2\2\u0946\u0948\5\u018e\u00c8\2\u0947"+
		"\u0949\7\u008c\2\2\u0948\u0947\3\2\2\2\u0948\u0949\3\2\2\2\u0949\u094a"+
		"\3\2\2\2\u094a\u094b\7i\2\2\u094b\u094c\5\16\b\2\u094c\u094e\3\2\2\2\u094d"+
		"\u0929\3\2\2\2\u094d\u0930\3\2\2\2\u094d\u0937\3\2\2\2\u094d\u0942\3\2"+
		"\2\2\u094e\u018d\3\2\2\2\u094f\u0950\t\20\2\2\u0950\u018f\3\2\2\2\u0951"+
		"\u0952\5\b\5\2\u0952\u0954\7j\2\2\u0953\u0955\5\u0194\u00cb\2\u0954\u0953"+
		"\3\2\2\2\u0954\u0955\3\2\2\2\u0955\u0956\3\2\2\2\u0956\u0957\7k\2\2\u0957"+
		"\u0191\3\2\2\2\u0958\u0968\5\u0190\u00c9\2\u0959\u095a\5\u0180\u00c1\2"+
		"\u095a\u095c\7j\2\2\u095b\u095d\5\u0194\u00cb\2\u095c\u095b\3\2\2\2\u095c"+
		"\u095d\3\2\2\2\u095d\u095e\3\2\2\2\u095e\u095f\7k\2\2\u095f\u0968\3\2"+
		"\2\2\u0960\u0961\5\u0184\u00c3\2\u0961\u0963\7j\2\2\u0962\u0964\5\u0194"+
		"\u00cb\2\u0963\u0962\3\2\2\2\u0963\u0964\3\2\2\2\u0964\u0965\3\2\2\2\u0965"+
		"\u0966\7k\2\2\u0966\u0968\3\2\2\2\u0967\u0958\3\2\2\2\u0967\u0959\3\2"+
		"\2\2\u0967\u0960\3\2\2\2\u0968\u0193\3\2\2\2\u0969\u096a\b\u00cb\1\2\u096a"+
		"\u096c\5\u0196\u00cc\2\u096b\u096d\7Z\2\2\u096c\u096b\3\2\2\2\u096c\u096d"+
		"\3\2\2\2\u096d\u0976\3\2\2\2\u096e\u096f\f\3\2\2\u096f\u0970\7\u0080\2"+
		"\2\u0970\u0972\5\u0196\u00cc\2\u0971\u0973\7Z\2\2\u0972\u0971\3\2\2\2"+
		"\u0972\u0973\3\2\2\2\u0973\u0975\3\2\2\2\u0974\u096e\3\2\2\2\u0975\u0978"+
		"\3\2\2\2\u0976\u0974\3\2\2\2\u0976\u0977\3\2\2\2\u0977\u0195\3\2\2\2\u0978"+
		"\u0976\3\2\2\2\u0979\u097a\5\16\b\2\u097a\u0197\3\2\2\2\u097b\u097c\7"+
		"G\2\2\u097c\u097d\5\24\13\2\u097d\u097e\7\u008c\2\2\u097e\u0987\3\2\2"+
		"\2\u097f\u0980\7G\2\2\u0980\u0982\5\24\13\2\u0981\u0983\7?\2\2\u0982\u0981"+
		"\3\2\2\2\u0982\u0983\3\2\2\2\u0983\u0984\3\2\2\2\u0984\u0985\5\u0190\u00c9"+
		"\2\u0985\u0987\3\2\2\2\u0986\u097b\3\2\2\2\u0986\u097f\3\2\2";
	private static final String _serializedATNSegment1 =
		"\2\u0987\u0199\3\2\2\2\u0988\u098a\7!\2\2\u0989\u0988\3\2\2\2\u0989\u098a"+
		"\3\2\2\2\u098a\u098b\3\2\2\2\u098b\u098c\7?\2\2\u098c\u098d\5\u0096L\2"+
		"\u098d\u019b\3\2\2\2\u098e\u098f\7?\2\2\u098f\u0990\7j\2\2\u0990\u0991"+
		"\7k\2\2\u0991\u0992\5\u0096L\2\u0992\u019d\3\2\2\2\u0993\u0995\7\37\2"+
		"\2\u0994\u0993\3\2\2\2\u0994\u0995\3\2\2\2\u0995\u0996\3\2\2\2\u0996\u0997"+
		"\5\b\5\2\u0997\u0998\7V\2\2\u0998\u0999\5\u0132\u009a\2\u0999\u099a\7"+
		"W\2\2\u099a\u099b\7\u0082\2\2\u099b\u099c\5\u0190\u00c9\2\u099c\u099d"+
		"\7X\2\2\u099d\u019f\3\2\2\2\u099e\u099f\7D\2\2\u099f\u09a0\5\u0082B\2"+
		"\u09a0\u09a1\5\u01a4\u00d3\2\u09a1\u01a1\3\2\2\2\u09a2\u09a4\7D\2\2\u09a3"+
		"\u09a5\5\u0178\u00bd\2\u09a4\u09a3\3\2\2\2\u09a4\u09a5\3\2\2\2\u09a5\u09a6"+
		"\3\2\2\2\u09a6\u09a7\5\u0082B\2\u09a7\u09a8\5\u01a4\u00d3\2\u09a8\u01a3"+
		"\3\2\2\2\u09a9\u09ab\5\u01a6\u00d4\2\u09aa\u09ac\5\u01a4\u00d3\2\u09ab"+
		"\u09aa\3\2\2\2\u09ab\u09ac\3\2\2\2\u09ac\u01a5\3\2\2\2\u09ad\u09ae\7\16"+
		"\2\2\u09ae\u09af\7V\2\2\u09af\u09b0\5\u01a8\u00d5\2\u09b0\u09b1\7W\2\2"+
		"\u09b1\u09b2\5\u0082B\2\u09b2\u01a7\3\2\2\2\u09b3\u09b5\5\u00f2z\2\u09b4"+
		"\u09b3\3\2\2\2\u09b4\u09b5\3\2\2\2\u09b5\u09b6\3\2\2\2\u09b6\u09b7\5\u00b6"+
		"\\\2\u09b7\u09b8\5\u010e\u0088\2\u09b8\u09c2\3\2\2\2\u09b9\u09bb\5\u00f2"+
		"z\2\u09ba\u09b9\3\2\2\2\u09ba\u09bb\3\2\2\2\u09bb\u09bc\3\2\2\2\u09bc"+
		"\u09be\5\u00b6\\\2\u09bd\u09bf\5\u0128\u0095\2\u09be\u09bd\3\2\2\2\u09be"+
		"\u09bf\3\2\2\2\u09bf\u09c2\3\2\2\2\u09c0\u09c2\7Z\2\2\u09c1\u09b4\3\2"+
		"\2\2\u09c1\u09ba\3\2\2\2\u09c1\u09c0\3\2\2\2\u09c2\u01a9\3\2\2\2\u09c3"+
		"\u09c4\7.\2\2\u09c4\u09c5\7V\2\2\u09c5\u09c6\5v<\2\u09c6\u09c7\7W\2\2"+
		"\u09c7\u09cd\3\2\2\2\u09c8\u09cd\7.\2\2\u09c9\u09ca\7B\2\2\u09ca\u09cb"+
		"\7V\2\2\u09cb\u09cd\7W\2\2\u09cc\u09c3\3\2\2\2\u09cc\u09c8\3\2\2\2\u09cc"+
		"\u09c9\3\2\2\2\u09cd\u01ab\3\2\2\2\u09ce\u09cf\b\u00d7\1\2\u09cf\u09d0"+
		"\7\u008c\2\2\u09d0\u09d6\3\2\2\2\u09d1\u09d2\f\3\2\2\u09d2\u09d3\7\u0080"+
		"\2\2\u09d3\u09d5\7\u008c\2\2\u09d4\u09d1\3\2\2\2\u09d5\u09d8\3\2\2\2\u09d6"+
		"\u09d4\3\2\2\2\u09d6\u09d7\3\2\2\2\u09d7\u01ad\3\2\2\2\u09d8\u09d6\3\2"+
		"\2\2\u09d9\u09e1\5\u01b0\u00d9\2\u09da\u09e1\7\u0085\2\2\u09db\u09e1\7"+
		"\u0086\2\2\u09dc\u09e1\7\u0087\2\2\u09dd\u09e1\5\u01b2\u00da\2\u09de\u09e1"+
		"\5\u01b4\u00db\2\u09df\u09e1\5\u01b6\u00dc\2\u09e0\u09d9\3\2\2\2\u09e0"+
		"\u09da\3\2\2\2\u09e0\u09db\3\2\2\2\u09e0\u09dc\3\2\2\2\u09e0\u09dd\3\2"+
		"\2\2\u09e0\u09de\3\2\2\2\u09e0\u09df\3\2\2\2\u09e1\u01af\3\2\2\2\u09e2"+
		"\u09e3\t\21\2\2\u09e3\u01b1\3\2\2\2\u09e4\u09e5\t\22\2\2\u09e5\u01b3\3"+
		"\2\2\2\u09e6\u09e7\7/\2\2\u09e7\u01b5\3\2\2\2\u09e8\u09e9\t\23\2\2\u09e9"+
		"\u01b7\3\2\2\2\u0141\u01ba\u01c0\u01c5\u01d2\u01d6\u01e1\u01e5\u01eb\u01f0"+
		"\u01f5\u01f7\u01fc\u01ff\u0204\u0206\u020a\u0210\u0218\u021b\u021e\u0221"+
		"\u0229\u0230\u0236\u023a\u0241\u0247\u024a\u0263\u026a\u0286\u0293\u029d"+
		"\u02a3\u02ad\u02af\u02b5\u02c7\u02e5\u02ea\u02ee\u02f2\u02f5\u02f9\u02ff"+
		"\u0301\u0309\u030d\u0316\u031d\u0321\u0326\u032a\u032d\u0332\u0338\u0345"+
		"\u0350\u0352\u0361\u0363\u036f\u0371\u037d\u037f\u0391\u0393\u039f\u03a1"+
		"\u03ac\u03b7\u03c2\u03cd\u03d8\u03e2\u03e6\u03ee\u03fa\u0401\u0405\u0409"+
		"\u040d\u0411\u0416\u0419\u041d\u0421\u0427\u042a\u0430\u0438\u043d\u0440"+
		"\u0446\u0451\u0456\u045a\u0462\u0466\u0471\u0477\u048b\u048f\u049c\u049f"+
		"\u04a5\u04a9\u04af\u04b2\u04bf\u04c5\u04d0\u04de\u04e8\u04eb\u04f3\u04fb"+
		"\u0505\u0509\u0511\u0521\u052e\u0531\u0535\u0538\u0540\u054a\u054e\u0553"+
		"\u0558\u055c\u0561\u0564\u0576\u057a\u0585\u0589\u058c\u0596\u059c\u059f"+
		"\u05a4\u05ae\u05b2\u05b5\u05b8\u05bb\u05c1\u05c4\u05c8\u05d1\u05de\u05e6"+
		"\u05ea\u05ef\u05f2\u05f6\u05fe\u0602\u0618\u061c\u0625\u0630\u0636\u063a"+
		"\u063e\u0644\u0649\u064f\u065b\u0661\u066a\u0670\u0677\u067d\u0685\u0689"+
		"\u0691\u0696\u069b\u06a2\u06a4\u06a9\u06ad\u06b7\u06c2\u06c7\u06cc\u06d1"+
		"\u06d5\u06df\u06e4\u06e8\u06ef\u06f3\u06f9\u06fe\u0702\u0706\u0708\u0713"+
		"\u0716\u0719\u071c\u0723\u0726\u072a\u072e\u0733\u0736\u0738\u073c\u0745"+
		"\u0749\u074d\u0753\u0758\u075a\u0760\u0764\u076a\u0771\u0775\u0777\u0779"+
		"\u0780\u078a\u078e\u0790\u0792\u0796\u0799\u079f\u07a9\u07ad\u07b3\u07ba"+
		"\u07bd\u07c0\u07c4\u07cc\u07d2\u07d5\u07e6\u07ea\u07ef\u07f5\u07f9\u07ff"+
		"\u0805\u0809\u080e\u0814\u0818\u081b\u081f\u0822\u0824\u0827\u0831\u0836"+
		"\u0838\u083b\u0848\u0852\u0857\u085d\u0860\u0864\u086d\u087b\u0881\u0885"+
		"\u0889\u088d\u0891\u0895\u0899\u089d\u08a0\u08a8\u08b1\u08b5\u08bd\u08c3"+
		"\u08c7\u08cd\u08d4\u090b\u0912\u0922\u0927\u092b\u092e\u0932\u093d\u0940"+
		"\u0948\u094d\u0954\u095c\u0963\u0967\u096c\u0972\u0976\u0982\u0986\u0989"+
		"\u0994\u09a4\u09ab\u09b4\u09ba\u09be\u09c1\u09cc\u09d6\u09e0";
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