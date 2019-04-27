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
		RULE_castExpression = 42, RULE_pointerManipulationExpression = 43, RULE_multiplicativeExpression = 44, 
		RULE_additiveExpression = 45, RULE_shiftExpression = 46, RULE_relationalExpression = 47, 
		RULE_equalityExpression = 48, RULE_andExpression = 49, RULE_exclusiveOrExpression = 50, 
		RULE_inclusiveOrExpression = 51, RULE_logicalAndExpression = 52, RULE_logicalOrExpression = 53, 
		RULE_conditionalExpression = 54, RULE_throwExpression = 55, RULE_assignmentExpression = 56, 
		RULE_assignmentOperator = 57, RULE_expression = 58, RULE_constantExpression = 59, 
		RULE_statement = 60, RULE_initializerStatement = 61, RULE_condition = 62, 
		RULE_labeledStatement = 63, RULE_expressionStatement = 64, RULE_compoundStatement = 65, 
		RULE_statementSequence = 66, RULE_selectionStatement = 67, RULE_iterationStatement = 68, 
		RULE_forInitializerStatement = 69, RULE_forRangeDeclaration = 70, RULE_forRangeInitializer = 71, 
		RULE_jumpStatement = 72, RULE_declarationStatement = 73, RULE_declarationSequence = 74, 
		RULE_declaration = 75, RULE_blockDeclaration = 76, RULE_noDeclarationSpecifierFunctionDeclaration = 77, 
		RULE_aliasDeclaration = 78, RULE_simpleDeclaration = 79, RULE_staticAssertDeclaration = 80, 
		RULE_emptyDeclaration = 81, RULE_attributeDeclaration = 82, RULE_declarationModifier = 83, 
		RULE_declarationSpecifierSequence = 84, RULE_leadingDeclarationModifierSequence = 85, 
		RULE_trailingDeclarationModifierSequence = 86, RULE_declarationModifierSequence = 87, 
		RULE_storageClassSpecifier = 88, RULE_functionSpecifier = 89, RULE_typeSpecifier = 90, 
		RULE_typeSpecifierSequence = 91, RULE_definingTypeSpecifier = 92, RULE_definingTypeSpecifierSequence = 93, 
		RULE_simpleTypeSpecifier = 94, RULE_typeName = 95, RULE_declarationTypeSpecifier = 96, 
		RULE_elaboratedTypeSpecifier = 97, RULE_enumSpecifier = 98, RULE_enumHead = 99, 
		RULE_enumHeadName = 100, RULE_opaqueEnumSpecifier = 101, RULE_enumKey = 102, 
		RULE_enumBase = 103, RULE_enumeratorList = 104, RULE_enumeratorDefinition = 105, 
		RULE_enumerator = 106, RULE_namespaceDefinition = 107, RULE_namedNamespaceDefinition = 108, 
		RULE_unnamedNamespaceDefinition = 109, RULE_nestedNamespaceDefinition = 110, 
		RULE_enclosingNamespaceSpecifier = 111, RULE_namespaceBody = 112, RULE_namespaceAliasDefinition = 113, 
		RULE_qualifiedNamespaceSpecifier = 114, RULE_usingDeclaration = 115, RULE_usingDeclaratorList = 116, 
		RULE_usingDeclarator = 117, RULE_usingDirective = 118, RULE_asmDefinition = 119, 
		RULE_linkageSpecification = 120, RULE_attributeSpecifierSequence = 121, 
		RULE_attributeSpecifier = 122, RULE_alignmentSpecifier = 123, RULE_attributeUsingPrefix = 124, 
		RULE_attributeList = 125, RULE_attribute = 126, RULE_attributeToken = 127, 
		RULE_attributeScopedToken = 128, RULE_attributeNamespace = 129, RULE_attributeArgumentClause = 130, 
		RULE_balancedTokenSequence = 131, RULE_balancedToken = 132, RULE_nonBalancedToken = 133, 
		RULE_initializerDeclaratorList = 134, RULE_initializerDeclarator = 135, 
		RULE_declarator = 136, RULE_pointerDeclarator = 137, RULE_noPointerDeclarator = 138, 
		RULE_parametersAndQualifiers = 139, RULE_functionParameters = 140, RULE_functionQualifiers = 141, 
		RULE_trailingReturnType = 142, RULE_pointerOperator = 143, RULE_constVolatileQualifierSequence = 144, 
		RULE_constVolatileQualifier = 145, RULE_referenceQualifier = 146, RULE_typeIdentifier = 147, 
		RULE_definingTypeIdentifier = 148, RULE_abstractDeclarator = 149, RULE_pointerAbstractDeclarator = 150, 
		RULE_noPointerAbstractDeclarator = 151, RULE_abstractPackDeclarator = 152, 
		RULE_noPointerAbstractPackDeclarator = 153, RULE_parameterDeclarationClause = 154, 
		RULE_parameterDeclarationList = 155, RULE_parameterDeclaration = 156, 
		RULE_functionDefinition = 157, RULE_functionDeclarator = 158, RULE_functionBody = 159, 
		RULE_regularFunctionBody = 160, RULE_explicitlyDefaultedFunction = 161, 
		RULE_deletedFunction = 162, RULE_initializer = 163, RULE_braceOrEqualInitializer = 164, 
		RULE_initializerClause = 165, RULE_initializerList = 166, RULE_bracedInitializerList = 167, 
		RULE_expressionOrBracedInitializerList = 168, RULE_classSpecifier = 169, 
		RULE_classHead = 170, RULE_classHeadName = 171, RULE_classVirtualSpecifier = 172, 
		RULE_classKey = 173, RULE_memberSpecification = 174, RULE_memberDeclaration = 175, 
		RULE_memberDeclaratorList = 176, RULE_memberDeclarator = 177, RULE_virtualSpecifierSequence = 178, 
		RULE_virtualSpecifier = 179, RULE_pureSpecifier = 180, RULE_baseClause = 181, 
		RULE_baseSpecifierList = 182, RULE_baseSpecifier = 183, RULE_classOrDecltype = 184, 
		RULE_accessSpecifier = 185, RULE_conversionFunctionIdentifier = 186, RULE_conversionTypeIdentifier = 187, 
		RULE_conversionDeclarator = 188, RULE_constructorInitializer = 189, RULE_memberInitializerList = 190, 
		RULE_memberInitializer = 191, RULE_memberInitializerIdentifier = 192, 
		RULE_operatorFunctionIdentifier = 193, RULE_anyOperator = 194, RULE_literalOperatorIdentifier = 195, 
		RULE_templateDeclaration = 196, RULE_templateParameterList = 197, RULE_templateParameter = 198, 
		RULE_typeParameter = 199, RULE_typeParameterKey = 200, RULE_simpleTemplateIdentifier = 201, 
		RULE_templateIdentifier = 202, RULE_templateArgumentList = 203, RULE_templateArgument = 204, 
		RULE_typenameSpecifier = 205, RULE_explicitInstantiation = 206, RULE_explicitSpecialization = 207, 
		RULE_deductionGuide = 208, RULE_tryBlock = 209, RULE_functionTryBlock = 210, 
		RULE_handlerSequence = 211, RULE_handler = 212, RULE_exceptionDeclaration = 213, 
		RULE_noExceptionSpecifier = 214, RULE_identifierList = 215, RULE_literal = 216, 
		RULE_integerLiteral = 217, RULE_booleanLiteral = 218, RULE_pointerLiteral = 219, 
		RULE_userDefinedLiteral = 220;
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
		"enumHead", "enumHeadName", "opaqueEnumSpecifier", "enumKey", "enumBase", 
		"enumeratorList", "enumeratorDefinition", "enumerator", "namespaceDefinition", 
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
			setState(442);
			match(GreaterThan);
			setState(443);
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
			setState(447);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(445);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(446);
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
			setState(449);
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
			setState(453);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(451);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(452);
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
			setState(455);
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
			setState(458);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (OpenParenthesis - 65)) | (1L << (Semicolon - 65)) | (1L << (Ellipsis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (Tilde - 65)) | (1L << (DoubleAmpersand - 65)))) != 0) || _la==Identifier) {
				{
				setState(457);
				declarationSequence(0);
				}
			}

			setState(460);
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
			setState(471);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(462);
				literal();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(463);
				match(This);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(464);
				match(OpenParenthesis);
				setState(465);
				expression(0);
				setState(466);
				match(CloseParenthesis);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(468);
				identifierExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(469);
				lambdaExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(470);
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
			setState(475);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(473);
				unqualifiedIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(474);
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
			setState(486);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(477);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(478);
				operatorFunctionIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(479);
				conversionFunctionIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(480);
				literalOperatorIdentifier();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(481);
				match(Tilde);
				setState(482);
				className();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(483);
				match(Tilde);
				setState(484);
				declarationTypeSpecifier();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(485);
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
			setState(488);
			nestedNameSpecifier();
			setState(490);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Template) {
				{
				setState(489);
				match(Template);
				}
			}

			setState(492);
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
			setState(508);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DoubleColon:
				enterOuterAlt(_localctx, 1);
				{
				setState(494);
				match(DoubleColon);
				setState(496);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
				case 1:
					{
					setState(495);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case Identifier:
				enterOuterAlt(_localctx, 2);
				{
				setState(498);
				match(Identifier);
				setState(499);
				match(DoubleColon);
				setState(501);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
				case 1:
					{
					setState(500);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case DeclType:
				enterOuterAlt(_localctx, 3);
				{
				setState(503);
				declarationTypeSpecifier();
				setState(504);
				match(DoubleColon);
				setState(506);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
				case 1:
					{
					setState(505);
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
			setState(523);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(510);
				match(Identifier);
				setState(511);
				match(DoubleColon);
				setState(513);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
				case 1:
					{
					setState(512);
					nestedNameSpecifierSequence();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(516);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(515);
					match(Template);
					}
				}

				setState(518);
				simpleTemplateIdentifier();
				setState(519);
				match(DoubleColon);
				setState(521);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
				case 1:
					{
					setState(520);
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
			setState(525);
			lambdaIntroducer();
			setState(527);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OpenParenthesis) {
				{
				setState(526);
				lambdaDeclarator();
				}
			}

			setState(529);
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
			setState(531);
			match(OpenBracket);
			setState(533);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (Equal - 64)))) != 0) || _la==Identifier) {
				{
				setState(532);
				lambdaCapture();
				}
			}

			setState(535);
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
			setState(537);
			match(OpenParenthesis);
			setState(538);
			parameterDeclarationClause();
			setState(539);
			match(CloseParenthesis);
			setState(541);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << Struct))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (DoubleColon - 65)))) != 0) || _la==Identifier) {
				{
				setState(540);
				declarationSpecifierSequence();
				}
			}

			setState(544);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NoExcept || _la==Throw) {
				{
				setState(543);
				noExceptionSpecifier();
				}
			}

			setState(547);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(546);
				attributeSpecifierSequence(0);
				}
			}

			setState(550);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(549);
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
			setState(558);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(552);
				captureDefault();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(553);
				captureList(0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(554);
				captureDefault();
				setState(555);
				match(Comma);
				setState(556);
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
			setState(560);
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
			setState(563);
			capture();
			setState(565);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				{
				setState(564);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(575);
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
					setState(567);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(568);
					match(Comma);
					setState(569);
					capture();
					setState(571);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
					case 1:
						{
						setState(570);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(577);
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
			setState(578);
			simpleCapture();
			setState(579);
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
			setState(588);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ampersand:
			case Identifier:
				enterOuterAlt(_localctx, 1);
				{
				setState(582);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(581);
					match(Ampersand);
					}
				}

				setState(584);
				match(Identifier);
				}
				break;
			case This:
				enterOuterAlt(_localctx, 2);
				{
				setState(585);
				match(This);
				}
				break;
			case Asterisk:
				enterOuterAlt(_localctx, 3);
				{
				setState(586);
				match(Asterisk);
				setState(587);
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
			setState(591);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Ampersand) {
				{
				setState(590);
				match(Ampersand);
				}
			}

			setState(593);
			match(Identifier);
			setState(594);
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
			setState(616);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(596);
				match(OpenParenthesis);
				setState(597);
				castExpression();
				setState(598);
				foldOperator();
				setState(599);
				match(Ellipsis);
				setState(600);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(602);
				match(OpenParenthesis);
				setState(603);
				match(Ellipsis);
				setState(604);
				foldOperator();
				setState(605);
				castExpression();
				setState(606);
				match(CloseParenthesis);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(608);
				match(OpenParenthesis);
				setState(609);
				castExpression();
				setState(610);
				foldOperator();
				setState(611);
				match(Ellipsis);
				setState(612);
				foldOperator();
				setState(613);
				castExpression();
				setState(614);
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
			setState(650);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(618);
				match(Plus);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(619);
				match(Minus);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(620);
				match(Asterisk);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(621);
				match(ForwardSlash);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(622);
				match(Percent);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(623);
				match(Caret);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(624);
				match(Ampersand);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(625);
				match(VerticalBar);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(626);
				match(DoubleLessThan);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(627);
				doubleGreaterThan();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(628);
				match(PlusEqual);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(629);
				match(MinusEqual);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(630);
				match(AsteriskEqual);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(631);
				match(ForwardSlashEqual);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(632);
				match(PercentEqual);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(633);
				match(CaretEqual);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(634);
				match(AmpersandEqual);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(635);
				match(VerticalBarEqual);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(636);
				match(DoubleLessThanEqual);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(637);
				match(DoubleGreaterThanEqual);
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(638);
				match(Equal);
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(639);
				match(DoubleEqual);
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(640);
				match(ExclamationMarkEqual);
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(641);
				match(LessThan);
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(642);
				match(GreaterThan);
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(643);
				match(LessThanEqual);
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(644);
				match(GreaterThanEqual);
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(645);
				match(DoubleAmpersand);
				}
				break;
			case 29:
				enterOuterAlt(_localctx, 29);
				{
				setState(646);
				match(DoubleVerticalBar);
				}
				break;
			case 30:
				enterOuterAlt(_localctx, 30);
				{
				setState(647);
				match(Comma);
				}
				break;
			case 31:
				enterOuterAlt(_localctx, 31);
				{
				setState(648);
				match(PeriodAsterisk);
				}
				break;
			case 32:
				enterOuterAlt(_localctx, 32);
				{
				setState(649);
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
			setState(652);
			typenameSpecifier();
			setState(653);
			match(OpenParenthesis);
			setState(655);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
				{
				setState(654);
				expressionList();
				}
			}

			setState(657);
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
			setState(659);
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
			setState(661);
			namedCastType();
			setState(662);
			match(LessThan);
			setState(663);
			typeIdentifier();
			setState(664);
			match(GreaterThan);
			setState(665);
			match(OpenParenthesis);
			setState(666);
			expression(0);
			setState(667);
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
			setState(669);
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
			setState(671);
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
			setState(683);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(673);
				match(TypeId);
				setState(674);
				match(OpenParenthesis);
				setState(675);
				expression(0);
				setState(676);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(678);
				match(TypeId);
				setState(679);
				match(OpenParenthesis);
				setState(680);
				typeIdentifier();
				setState(681);
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
			setState(696);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				{
				setState(686);
				primaryExpression();
				}
				break;
			case 2:
				{
				setState(687);
				explicitTypeCoversionOperatorExpression();
				}
				break;
			case 3:
				{
				setState(688);
				simpleTypeSpecifier();
				setState(689);
				bracedInitializerList();
				}
				break;
			case 4:
				{
				setState(691);
				typenameSpecifier();
				setState(692);
				bracedInitializerList();
				}
				break;
			case 5:
				{
				setState(694);
				namedCastExpression();
				}
				break;
			case 6:
				{
				setState(695);
				typeIdentificationExpression();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(724);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(722);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
					case 1:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(698);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(699);
						match(OpenBracket);
						setState(700);
						expressionOrBracedInitializerList();
						setState(701);
						match(CloseBracket);
						}
						break;
					case 2:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(703);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(704);
						match(OpenParenthesis);
						setState(706);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
							{
							setState(705);
							expressionList();
							}
						}

						setState(708);
						match(CloseParenthesis);
						}
						break;
					case 3:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(709);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(710);
						memberAccessOperator();
						setState(712);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==Template) {
							{
							setState(711);
							match(Template);
							}
						}

						setState(714);
						identifierExpression();
						}
						break;
					case 4:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(716);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(717);
						memberAccessOperator();
						setState(718);
						pseudoDestructorName();
						}
						break;
					case 5:
						{
						_localctx = new PostfixExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_postfixExpression);
						setState(720);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(721);
						postfixOperator();
						}
						break;
					}
					} 
				}
				setState(726);
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
			setState(727);
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
			setState(748);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(730);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
				case 1:
					{
					setState(729);
					nestedNameSpecifier();
					}
					break;
				}
				setState(732);
				typeName();
				setState(733);
				match(DoubleColon);
				setState(734);
				match(Tilde);
				setState(735);
				typeName();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(737);
				nestedNameSpecifier();
				setState(738);
				match(Template);
				setState(739);
				simpleTemplateIdentifier();
				setState(740);
				match(DoubleColon);
				setState(741);
				match(Tilde);
				setState(742);
				typeName();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(744);
				match(Tilde);
				setState(745);
				typeName();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(746);
				match(Tilde);
				setState(747);
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
			setState(778);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,39,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(750);
				postfixExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(751);
				match(DoublePlus);
				setState(752);
				castExpression();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(753);
				match(DoubleMinus);
				setState(754);
				castExpression();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(755);
				unaryOperator();
				setState(756);
				castExpression();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(758);
				match(SizeOf);
				setState(759);
				unaryExpression();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(760);
				match(SizeOf);
				setState(761);
				match(OpenParenthesis);
				setState(762);
				typeIdentifier();
				setState(763);
				match(CloseParenthesis);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(765);
				match(SizeOf);
				setState(766);
				match(Ellipsis);
				setState(767);
				match(OpenParenthesis);
				setState(768);
				match(Identifier);
				setState(769);
				match(CloseParenthesis);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(770);
				match(AlignOf);
				setState(771);
				match(OpenParenthesis);
				setState(772);
				typeIdentifier();
				setState(773);
				match(CloseParenthesis);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(775);
				noExceptionExpression();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(776);
				newExpression();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(777);
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
			setState(780);
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
			setState(806);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,46,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(783);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(782);
					match(DoubleColon);
					}
				}

				setState(785);
				match(New);
				setState(787);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OpenParenthesis) {
					{
					setState(786);
					newPlacement();
					}
				}

				setState(789);
				newTypeIdentifier();
				setState(791);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
				case 1:
					{
					setState(790);
					newInitializer();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(794);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(793);
					match(DoubleColon);
					}
				}

				setState(796);
				match(New);
				setState(798);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,44,_ctx) ) {
				case 1:
					{
					setState(797);
					newPlacement();
					}
					break;
				}
				setState(800);
				match(OpenParenthesis);
				setState(801);
				typeIdentifier();
				setState(802);
				match(CloseParenthesis);
				setState(804);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,45,_ctx) ) {
				case 1:
					{
					setState(803);
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
			setState(808);
			match(OpenParenthesis);
			setState(809);
			expressionList();
			setState(810);
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
			setState(812);
			typeSpecifierSequence();
			setState(814);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,47,_ctx) ) {
			case 1:
				{
				setState(813);
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
			setState(816);
			pointerOperator();
			setState(818);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || ((((_la - 92)) & ~0x3f) == 0 && ((1L << (_la - 92)) & ((1L << (DoubleColon - 92)) | (1L << (Asterisk - 92)) | (1L << (Ampersand - 92)) | (1L << (DoubleAmpersand - 92)) | (1L << (Identifier - 92)))) != 0)) {
				{
				setState(817);
				newDeclarator();
				}
			}

			setState(820);
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
			setState(823);
			match(OpenBracket);
			setState(824);
			expression(0);
			setState(825);
			match(CloseBracket);
			setState(827);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,49,_ctx) ) {
			case 1:
				{
				setState(826);
				attributeSpecifierSequence(0);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(838);
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
					setState(829);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(830);
					match(OpenBracket);
					setState(831);
					constantExpression();
					setState(832);
					match(CloseBracket);
					setState(834);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,50,_ctx) ) {
					case 1:
						{
						setState(833);
						attributeSpecifierSequence(0);
						}
						break;
					}
					}
					} 
				}
				setState(840);
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
			setState(847);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(841);
				match(OpenParenthesis);
				setState(843);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(842);
					expressionList();
					}
				}

				setState(845);
				match(CloseParenthesis);
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(846);
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
			setState(861);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,56,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(850);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(849);
					match(DoubleColon);
					}
				}

				setState(852);
				match(Delete);
				setState(853);
				castExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(855);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DoubleColon) {
					{
					setState(854);
					match(DoubleColon);
					}
				}

				setState(857);
				match(Delete);
				setState(858);
				match(OpenBracket);
				setState(859);
				match(CloseBracket);
				setState(860);
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
			setState(863);
			match(NoExcept);
			setState(864);
			match(OpenParenthesis);
			setState(865);
			expression(0);
			setState(866);
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
			setState(874);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,57,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(868);
				unaryExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(869);
				match(OpenParenthesis);
				setState(870);
				typeIdentifier();
				setState(871);
				match(CloseParenthesis);
				setState(872);
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
		int _startState = 86;
		enterRecursionRule(_localctx, 86, RULE_pointerManipulationExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(877);
			castExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(887);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,59,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(885);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,58,_ctx) ) {
					case 1:
						{
						_localctx = new PointerManipulationExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pointerManipulationExpression);
						setState(879);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(880);
						match(PeriodAsterisk);
						setState(881);
						castExpression();
						}
						break;
					case 2:
						{
						_localctx = new PointerManipulationExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_pointerManipulationExpression);
						setState(882);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(883);
						match(ArrowAsterisk);
						setState(884);
						castExpression();
						}
						break;
					}
					} 
				}
				setState(889);
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
		int _startState = 88;
		enterRecursionRule(_localctx, 88, RULE_multiplicativeExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(891);
			pointerManipulationExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(904);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(902);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,60,_ctx) ) {
					case 1:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(893);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(894);
						match(Asterisk);
						setState(895);
						pointerManipulationExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(896);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(897);
						match(ForwardSlash);
						setState(898);
						pointerManipulationExpression(0);
						}
						break;
					case 3:
						{
						_localctx = new MultiplicativeExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_multiplicativeExpression);
						setState(899);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(900);
						match(Percent);
						setState(901);
						pointerManipulationExpression(0);
						}
						break;
					}
					} 
				}
				setState(906);
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
		int _startState = 90;
		enterRecursionRule(_localctx, 90, RULE_additiveExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(908);
			multiplicativeExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(918);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(916);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,62,_ctx) ) {
					case 1:
						{
						_localctx = new AdditiveExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveExpression);
						setState(910);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(911);
						match(Plus);
						setState(912);
						multiplicativeExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new AdditiveExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_additiveExpression);
						setState(913);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(914);
						match(Minus);
						setState(915);
						multiplicativeExpression(0);
						}
						break;
					}
					} 
				}
				setState(920);
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

	public static class ShiftExpressionContext extends ParserRuleContext {
		public AdditiveExpressionContext additiveExpression() {
			return getRuleContext(AdditiveExpressionContext.class,0);
		}
		public ShiftExpressionContext shiftExpression() {
			return getRuleContext(ShiftExpressionContext.class,0);
		}
		public TerminalNode DoubleLessThan() { return getToken(CppParser.DoubleLessThan, 0); }
		public DoubleGreaterThanContext doubleGreaterThan() {
			return getRuleContext(DoubleGreaterThanContext.class,0);
		}
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
		int _startState = 92;
		enterRecursionRule(_localctx, 92, RULE_shiftExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(922);
			additiveExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(933);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,65,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(931);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,64,_ctx) ) {
					case 1:
						{
						_localctx = new ShiftExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shiftExpression);
						setState(924);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(925);
						match(DoubleLessThan);
						setState(926);
						additiveExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new ShiftExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_shiftExpression);
						setState(927);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(928);
						doubleGreaterThan();
						setState(929);
						additiveExpression(0);
						}
						break;
					}
					} 
				}
				setState(935);
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
		int _startState = 94;
		enterRecursionRule(_localctx, 94, RULE_relationalExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(937);
			shiftExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(953);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,67,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(951);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,66,_ctx) ) {
					case 1:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(939);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(940);
						match(LessThan);
						setState(941);
						shiftExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(942);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(943);
						match(GreaterThan);
						setState(944);
						shiftExpression(0);
						}
						break;
					case 3:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(945);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(946);
						match(LessThanEqual);
						setState(947);
						shiftExpression(0);
						}
						break;
					case 4:
						{
						_localctx = new RelationalExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_relationalExpression);
						setState(948);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(949);
						match(GreaterThanEqual);
						setState(950);
						shiftExpression(0);
						}
						break;
					}
					} 
				}
				setState(955);
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
		int _startState = 96;
		enterRecursionRule(_localctx, 96, RULE_equalityExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(957);
			relationalExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(967);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,69,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(965);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,68,_ctx) ) {
					case 1:
						{
						_localctx = new EqualityExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityExpression);
						setState(959);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(960);
						match(DoubleEqual);
						setState(961);
						relationalExpression(0);
						}
						break;
					case 2:
						{
						_localctx = new EqualityExpressionContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_equalityExpression);
						setState(962);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(963);
						match(ExclamationMarkEqual);
						setState(964);
						relationalExpression(0);
						}
						break;
					}
					} 
				}
				setState(969);
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
		int _startState = 98;
		enterRecursionRule(_localctx, 98, RULE_andExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(971);
			equalityExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(978);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AndExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_andExpression);
					setState(973);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(974);
					match(Ampersand);
					setState(975);
					equalityExpression(0);
					}
					} 
				}
				setState(980);
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
		int _startState = 100;
		enterRecursionRule(_localctx, 100, RULE_exclusiveOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(982);
			andExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(989);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,71,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExclusiveOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_exclusiveOrExpression);
					setState(984);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(985);
					match(Caret);
					setState(986);
					andExpression(0);
					}
					} 
				}
				setState(991);
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
		int _startState = 102;
		enterRecursionRule(_localctx, 102, RULE_inclusiveOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(993);
			exclusiveOrExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1000);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,72,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InclusiveOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_inclusiveOrExpression);
					setState(995);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(996);
					match(VerticalBar);
					setState(997);
					exclusiveOrExpression(0);
					}
					} 
				}
				setState(1002);
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
		int _startState = 104;
		enterRecursionRule(_localctx, 104, RULE_logicalAndExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1004);
			inclusiveOrExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1011);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,73,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalAndExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_logicalAndExpression);
					setState(1006);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1007);
					match(DoubleAmpersand);
					setState(1008);
					inclusiveOrExpression(0);
					}
					} 
				}
				setState(1013);
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
		int _startState = 106;
		enterRecursionRule(_localctx, 106, RULE_logicalOrExpression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1015);
			logicalAndExpression(0);
			}
			_ctx.stop = _input.LT(-1);
			setState(1022);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,74,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalOrExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_logicalOrExpression);
					setState(1017);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1018);
					match(DoubleVerticalBar);
					setState(1019);
					logicalAndExpression(0);
					}
					} 
				}
				setState(1024);
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
		enterRule(_localctx, 108, RULE_conditionalExpression);
		try {
			setState(1032);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,75,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1025);
				logicalOrExpression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1026);
				logicalOrExpression(0);
				setState(1027);
				match(QuestionMark);
				setState(1028);
				expression(0);
				setState(1029);
				match(Colon);
				setState(1030);
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
		enterRule(_localctx, 110, RULE_throwExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1034);
			match(Throw);
			setState(1036);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,76,_ctx) ) {
			case 1:
				{
				setState(1035);
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
		enterRule(_localctx, 112, RULE_assignmentExpression);
		try {
			setState(1044);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,77,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1038);
				conditionalExpression();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1039);
				logicalOrExpression(0);
				setState(1040);
				assignmentOperator();
				setState(1041);
				initializerClause();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1043);
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
		enterRule(_localctx, 114, RULE_assignmentOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1046);
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
		int _startState = 116;
		enterRecursionRule(_localctx, 116, RULE_expression, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1049);
			assignmentExpression();
			}
			_ctx.stop = _input.LT(-1);
			setState(1056);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,78,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expression);
					setState(1051);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1052);
					match(Comma);
					setState(1053);
					assignmentExpression();
					}
					} 
				}
				setState(1058);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,78,_ctx);
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
		enterRule(_localctx, 118, RULE_constantExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1059);
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
		enterRule(_localctx, 120, RULE_statement);
		int _la;
		try {
			setState(1087);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,85,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1061);
				labeledStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1063);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,79,_ctx) ) {
				case 1:
					{
					setState(1062);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1065);
				expressionStatement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1067);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1066);
					attributeSpecifierSequence(0);
					}
				}

				setState(1069);
				compoundStatement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1071);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1070);
					attributeSpecifierSequence(0);
					}
				}

				setState(1073);
				selectionStatement();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1075);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1074);
					attributeSpecifierSequence(0);
					}
				}

				setState(1077);
				iterationStatement();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1079);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1078);
					attributeSpecifierSequence(0);
					}
				}

				setState(1081);
				jumpStatement();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1082);
				declarationStatement();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1084);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1083);
					attributeSpecifierSequence(0);
					}
				}

				setState(1086);
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
		enterRule(_localctx, 122, RULE_initializerStatement);
		try {
			setState(1091);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,86,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1089);
				expressionStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1090);
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
		enterRule(_localctx, 124, RULE_condition);
		int _la;
		try {
			setState(1101);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,88,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1093);
				expression(0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1095);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1094);
					attributeSpecifierSequence(0);
					}
				}

				setState(1097);
				declarationSpecifierSequence();
				setState(1098);
				declarator();
				setState(1099);
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
		enterRule(_localctx, 126, RULE_labeledStatement);
		int _la;
		try {
			setState(1123);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1104);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1103);
					attributeSpecifierSequence(0);
					}
				}

				setState(1106);
				match(Identifier);
				setState(1107);
				match(Colon);
				setState(1108);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1110);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1109);
					attributeSpecifierSequence(0);
					}
				}

				setState(1112);
				match(Case);
				setState(1113);
				constantExpression();
				setState(1114);
				match(Colon);
				setState(1115);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1118);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1117);
					attributeSpecifierSequence(0);
					}
				}

				setState(1120);
				match(Default);
				setState(1121);
				match(Colon);
				setState(1122);
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
		enterRule(_localctx, 128, RULE_expressionStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1126);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
				{
				setState(1125);
				expression(0);
				}
			}

			setState(1128);
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
		enterRule(_localctx, 130, RULE_compoundStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1130);
			match(OpenBrace);
			setState(1132);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
				{
				setState(1131);
				statementSequence(0);
				}
			}

			setState(1134);
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
		int _startState = 132;
		enterRecursionRule(_localctx, 132, RULE_statementSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1137);
			statement();
			}
			_ctx.stop = _input.LT(-1);
			setState(1143);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,95,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new StatementSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_statementSequence);
					setState(1139);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1140);
					statement();
					}
					} 
				}
				setState(1145);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,95,_ctx);
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
		enterRule(_localctx, 134, RULE_selectionStatement);
		int _la;
		try {
			setState(1181);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,101,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1146);
				match(If);
				setState(1148);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ConstExpr) {
					{
					setState(1147);
					match(ConstExpr);
					}
				}

				setState(1150);
				match(OpenParenthesis);
				setState(1152);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,97,_ctx) ) {
				case 1:
					{
					setState(1151);
					initializerStatement();
					}
					break;
				}
				setState(1154);
				condition();
				setState(1155);
				match(CloseParenthesis);
				setState(1156);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1158);
				match(If);
				setState(1160);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ConstExpr) {
					{
					setState(1159);
					match(ConstExpr);
					}
				}

				setState(1162);
				match(OpenParenthesis);
				setState(1164);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,99,_ctx) ) {
				case 1:
					{
					setState(1163);
					initializerStatement();
					}
					break;
				}
				setState(1166);
				condition();
				setState(1167);
				match(CloseParenthesis);
				setState(1168);
				statement();
				setState(1169);
				match(Else);
				setState(1170);
				statement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1172);
				match(Switch);
				setState(1173);
				match(OpenParenthesis);
				setState(1175);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,100,_ctx) ) {
				case 1:
					{
					setState(1174);
					initializerStatement();
					}
					break;
				}
				setState(1177);
				condition();
				setState(1178);
				match(CloseParenthesis);
				setState(1179);
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
		enterRule(_localctx, 136, RULE_iterationStatement);
		int _la;
		try {
			setState(1218);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,104,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1183);
				match(While);
				setState(1184);
				match(OpenParenthesis);
				setState(1185);
				condition();
				setState(1186);
				match(CloseParenthesis);
				setState(1187);
				statement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1189);
				match(Do);
				setState(1190);
				statement();
				setState(1191);
				match(While);
				setState(1192);
				match(OpenParenthesis);
				setState(1193);
				expression(0);
				setState(1194);
				match(CloseParenthesis);
				setState(1195);
				match(Semicolon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1197);
				match(For);
				setState(1198);
				match(OpenParenthesis);
				setState(1199);
				initializerStatement();
				setState(1201);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticCast) | (1L << Struct))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(1200);
					condition();
					}
				}

				setState(1203);
				match(Semicolon);
				setState(1205);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(1204);
					expression(0);
					}
				}

				setState(1207);
				match(CloseParenthesis);
				setState(1208);
				statement();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1210);
				match(For);
				setState(1211);
				match(OpenParenthesis);
				setState(1212);
				forRangeDeclaration();
				setState(1213);
				match(Colon);
				setState(1214);
				forRangeInitializer();
				setState(1215);
				match(CloseParenthesis);
				setState(1216);
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
		enterRule(_localctx, 138, RULE_forInitializerStatement);
		int _la;
		try {
			setState(1237);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,108,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1221);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1220);
					attributeSpecifierSequence(0);
					}
				}

				setState(1223);
				declarationSpecifierSequence();
				setState(1224);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1227);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1226);
					attributeSpecifierSequence(0);
					}
				}

				setState(1229);
				declarationSpecifierSequence();
				setState(1231);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(1230);
					referenceQualifier();
					}
				}

				setState(1233);
				match(OpenBracket);
				setState(1234);
				identifierList(0);
				setState(1235);
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
		enterRule(_localctx, 140, RULE_forRangeDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1240);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1239);
				attributeSpecifierSequence(0);
				}
			}

			setState(1242);
			declarationSpecifierSequence();
			setState(1243);
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
		enterRule(_localctx, 142, RULE_forRangeInitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1245);
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
		enterRule(_localctx, 144, RULE_jumpStatement);
		int _la;
		try {
			setState(1259);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Break:
				enterOuterAlt(_localctx, 1);
				{
				setState(1247);
				match(Break);
				setState(1248);
				match(Semicolon);
				}
				break;
			case Continue:
				enterOuterAlt(_localctx, 2);
				{
				setState(1249);
				match(Continue);
				setState(1250);
				match(Semicolon);
				}
				break;
			case Return:
				enterOuterAlt(_localctx, 3);
				{
				setState(1251);
				match(Return);
				setState(1253);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(1252);
					expressionOrBracedInitializerList();
					}
				}

				setState(1255);
				match(Semicolon);
				}
				break;
			case GoTo:
				enterOuterAlt(_localctx, 4);
				{
				setState(1256);
				match(GoTo);
				setState(1257);
				match(Identifier);
				setState(1258);
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
		enterRule(_localctx, 146, RULE_declarationStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1261);
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
		int _startState = 148;
		enterRecursionRule(_localctx, 148, RULE_declarationSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1264);
			declaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(1270);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,112,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new DeclarationSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_declarationSequence);
					setState(1266);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1267);
					declaration();
					}
					} 
				}
				setState(1272);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,112,_ctx);
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
		enterRule(_localctx, 150, RULE_declaration);
		try {
			setState(1284);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,113,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1273);
				blockDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1274);
				noDeclarationSpecifierFunctionDeclaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1275);
				functionDefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1276);
				templateDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1277);
				deductionGuide();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1278);
				explicitInstantiation();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1279);
				explicitSpecialization();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1280);
				linkageSpecification();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1281);
				namespaceDefinition();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1282);
				emptyDeclaration();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1283);
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
		enterRule(_localctx, 152, RULE_blockDeclaration);
		try {
			setState(1294);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,114,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1286);
				simpleDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1287);
				asmDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1288);
				namespaceAliasDefinition();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1289);
				usingDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1290);
				usingDirective();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1291);
				staticAssertDeclaration();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1292);
				aliasDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1293);
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
		enterRule(_localctx, 154, RULE_noDeclarationSpecifierFunctionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1297);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1296);
				attributeSpecifierSequence(0);
				}
			}

			setState(1299);
			declarator();
			setState(1300);
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
		enterRule(_localctx, 156, RULE_aliasDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1302);
			match(Using);
			setState(1303);
			match(Identifier);
			setState(1305);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1304);
				attributeSpecifierSequence(0);
				}
			}

			setState(1307);
			match(Equal);
			setState(1308);
			definingTypeIdentifier();
			setState(1309);
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
		enterRule(_localctx, 158, RULE_simpleDeclaration);
		int _la;
		try {
			setState(1335);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,120,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1311);
				declarationSpecifierSequence();
				setState(1313);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || _la==Operator || ((((_la - 86)) & ~0x3f) == 0 && ((1L << (_la - 86)) & ((1L << (OpenParenthesis - 86)) | (1L << (Ellipsis - 86)) | (1L << (DoubleColon - 86)) | (1L << (Asterisk - 86)) | (1L << (Ampersand - 86)) | (1L << (Tilde - 86)) | (1L << (DoubleAmpersand - 86)) | (1L << (Identifier - 86)))) != 0)) {
					{
					setState(1312);
					initializerDeclaratorList(0);
					}
				}

				setState(1315);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1317);
				attributeSpecifierSequence(0);
				setState(1318);
				declarationSpecifierSequence();
				setState(1319);
				initializerDeclaratorList(0);
				setState(1320);
				match(Semicolon);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1323);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1322);
					attributeSpecifierSequence(0);
					}
				}

				setState(1325);
				declarationSpecifierSequence();
				setState(1327);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ampersand) {
					{
					setState(1326);
					referenceQualifier();
					}
				}

				setState(1329);
				match(OpenBracket);
				setState(1330);
				identifierList(0);
				setState(1331);
				match(CloseBracket);
				setState(1332);
				initializer();
				setState(1333);
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
		enterRule(_localctx, 160, RULE_staticAssertDeclaration);
		try {
			setState(1351);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,121,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1337);
				match(StaticAssert);
				setState(1338);
				match(OpenParenthesis);
				setState(1339);
				constantExpression();
				setState(1340);
				match(CloseParenthesis);
				setState(1341);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1343);
				match(StaticAssert);
				setState(1344);
				match(OpenParenthesis);
				setState(1345);
				constantExpression();
				setState(1346);
				match(Comma);
				setState(1347);
				match(StringLiteral);
				setState(1348);
				match(CloseParenthesis);
				setState(1349);
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
		enterRule(_localctx, 162, RULE_emptyDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1353);
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
		enterRule(_localctx, 164, RULE_attributeDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1355);
			attributeSpecifierSequence(0);
			setState(1356);
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
		enterRule(_localctx, 166, RULE_declarationModifier);
		try {
			setState(1365);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Const:
			case Volatile:
				enterOuterAlt(_localctx, 1);
				{
				setState(1358);
				constVolatileQualifier();
				}
				break;
			case Extern:
			case Mutable:
			case Static:
			case ThreadLocal:
				enterOuterAlt(_localctx, 2);
				{
				setState(1359);
				storageClassSpecifier();
				}
				break;
			case Explicit:
			case Virtual:
				enterOuterAlt(_localctx, 3);
				{
				setState(1360);
				functionSpecifier();
				}
				break;
			case Friend:
				enterOuterAlt(_localctx, 4);
				{
				setState(1361);
				match(Friend);
				}
				break;
			case TypeDef:
				enterOuterAlt(_localctx, 5);
				{
				setState(1362);
				match(TypeDef);
				}
				break;
			case ConstExpr:
				enterOuterAlt(_localctx, 6);
				{
				setState(1363);
				match(ConstExpr);
				}
				break;
			case Inline:
				enterOuterAlt(_localctx, 7);
				{
				setState(1364);
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
		enterRule(_localctx, 168, RULE_declarationSpecifierSequence);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1368);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 19)) & ~0x3f) == 0 && ((1L << (_la - 19)) & ((1L << (Const - 19)) | (1L << (ConstExpr - 19)) | (1L << (Explicit - 19)) | (1L << (Extern - 19)) | (1L << (Friend - 19)) | (1L << (Inline - 19)) | (1L << (Mutable - 19)) | (1L << (Static - 19)) | (1L << (ThreadLocal - 19)) | (1L << (TypeDef - 19)) | (1L << (Virtual - 19)) | (1L << (Volatile - 19)))) != 0)) {
				{
				setState(1367);
				leadingDeclarationModifierSequence();
				}
			}

			setState(1370);
			definingTypeSpecifier();
			setState(1372);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 19)) & ~0x3f) == 0 && ((1L << (_la - 19)) & ((1L << (Const - 19)) | (1L << (ConstExpr - 19)) | (1L << (Explicit - 19)) | (1L << (Extern - 19)) | (1L << (Friend - 19)) | (1L << (Inline - 19)) | (1L << (Mutable - 19)) | (1L << (Static - 19)) | (1L << (ThreadLocal - 19)) | (1L << (TypeDef - 19)) | (1L << (Virtual - 19)) | (1L << (Volatile - 19)))) != 0)) {
				{
				setState(1371);
				trailingDeclarationModifierSequence();
				}
			}

			setState(1375);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,125,_ctx) ) {
			case 1:
				{
				setState(1374);
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
		enterRule(_localctx, 170, RULE_leadingDeclarationModifierSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1377);
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
		enterRule(_localctx, 172, RULE_trailingDeclarationModifierSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1379);
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
		enterRule(_localctx, 174, RULE_declarationModifierSequence);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1381);
			declarationModifier();
			setState(1383);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 19)) & ~0x3f) == 0 && ((1L << (_la - 19)) & ((1L << (Const - 19)) | (1L << (ConstExpr - 19)) | (1L << (Explicit - 19)) | (1L << (Extern - 19)) | (1L << (Friend - 19)) | (1L << (Inline - 19)) | (1L << (Mutable - 19)) | (1L << (Static - 19)) | (1L << (ThreadLocal - 19)) | (1L << (TypeDef - 19)) | (1L << (Virtual - 19)) | (1L << (Volatile - 19)))) != 0)) {
				{
				setState(1382);
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
		enterRule(_localctx, 176, RULE_storageClassSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1385);
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
		enterRule(_localctx, 178, RULE_functionSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1387);
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
		enterRule(_localctx, 180, RULE_typeSpecifier);
		try {
			setState(1392);
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
				setState(1389);
				simpleTypeSpecifier();
				}
				break;
			case Class:
			case Enum:
			case Struct:
			case Union:
				enterOuterAlt(_localctx, 2);
				{
				setState(1390);
				elaboratedTypeSpecifier();
				}
				break;
			case TypeName:
				enterOuterAlt(_localctx, 3);
				{
				setState(1391);
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
		enterRule(_localctx, 182, RULE_typeSpecifierSequence);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1395);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Const || _la==Volatile) {
				{
				setState(1394);
				constVolatileQualifier();
				}
			}

			setState(1397);
			typeSpecifier();
			setState(1399);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,129,_ctx) ) {
			case 1:
				{
				setState(1398);
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
		enterRule(_localctx, 184, RULE_definingTypeSpecifier);
		try {
			setState(1404);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,130,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1401);
				typeSpecifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1402);
				classSpecifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1403);
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
		enterRule(_localctx, 186, RULE_definingTypeSpecifierSequence);
		try {
			setState(1413);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,132,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1406);
				definingTypeSpecifier();
				setState(1408);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,131,_ctx) ) {
				case 1:
					{
					setState(1407);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1410);
				definingTypeSpecifier();
				setState(1411);
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
		enterRule(_localctx, 188, RULE_simpleTypeSpecifier);
		try {
			setState(1435);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,134,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1416);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,133,_ctx) ) {
				case 1:
					{
					setState(1415);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1418);
				typeName();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1419);
				match(Char);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1420);
				match(Char8);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1421);
				match(Char16);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(1422);
				match(Char32);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(1423);
				match(WChar);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(1424);
				match(Bool);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(1425);
				match(Short);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(1426);
				match(Int);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(1427);
				match(Long);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(1428);
				match(Signed);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(1429);
				match(Unsigned);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(1430);
				match(Float);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(1431);
				match(Double);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(1432);
				match(Void);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(1433);
				match(Auto);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(1434);
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
		enterRule(_localctx, 190, RULE_typeName);
		try {
			setState(1439);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,135,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1437);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1438);
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
		enterRule(_localctx, 192, RULE_declarationTypeSpecifier);
		try {
			setState(1450);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,136,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1441);
				match(DeclType);
				setState(1442);
				match(OpenParenthesis);
				setState(1443);
				expression(0);
				setState(1444);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1446);
				match(DeclType);
				setState(1447);
				match(OpenParenthesis);
				setState(1448);
				match(Auto);
				setState(1449);
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
		enterRule(_localctx, 194, RULE_elaboratedTypeSpecifier);
		int _la;
		try {
			setState(1476);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,141,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1452);
				classKey();
				setState(1454);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(1453);
					attributeSpecifierSequence(0);
					}
				}

				setState(1457);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,138,_ctx) ) {
				case 1:
					{
					setState(1456);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1459);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1461);
				classKey();
				setState(1462);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1464);
				classKey();
				setState(1465);
				nestedNameSpecifier();
				setState(1467);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(1466);
					match(Template);
					}
				}

				setState(1469);
				simpleTemplateIdentifier();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(1471);
				match(Enum);
				setState(1473);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,140,_ctx) ) {
				case 1:
					{
					setState(1472);
					nestedNameSpecifier();
					}
					break;
				}
				setState(1475);
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
		enterRule(_localctx, 196, RULE_enumSpecifier);
		int _la;
		try {
			setState(1491);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,143,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1478);
				enumHead();
				setState(1479);
				match(OpenBrace);
				setState(1481);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(1480);
					enumeratorList(0);
					}
				}

				setState(1483);
				match(CloseBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1485);
				enumHead();
				setState(1486);
				match(OpenBrace);
				setState(1487);
				enumeratorList(0);
				setState(1488);
				match(Comma);
				setState(1489);
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
		enterRule(_localctx, 198, RULE_enumHead);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1493);
			enumKey();
			setState(1495);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1494);
				attributeSpecifierSequence(0);
				}
			}

			setState(1498);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || _la==DoubleColon || _la==Identifier) {
				{
				setState(1497);
				enumHeadName();
				}
			}

			setState(1501);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1500);
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
		enterRule(_localctx, 200, RULE_enumHeadName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1504);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,147,_ctx) ) {
			case 1:
				{
				setState(1503);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1506);
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
		enterRule(_localctx, 202, RULE_opaqueEnumSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1508);
			enumKey();
			setState(1510);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1509);
				attributeSpecifierSequence(0);
				}
			}

			setState(1513);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,149,_ctx) ) {
			case 1:
				{
				setState(1512);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1515);
			match(Identifier);
			setState(1517);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(1516);
				enumBase();
				}
			}

			setState(1519);
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
		enterRule(_localctx, 204, RULE_enumKey);
		try {
			setState(1526);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,151,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1521);
				match(Enum);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1522);
				match(Enum);
				setState(1523);
				match(Class);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1524);
				match(Enum);
				setState(1525);
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
		enterRule(_localctx, 206, RULE_enumBase);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1528);
			match(Colon);
			setState(1529);
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
		int _startState = 208;
		enterRecursionRule(_localctx, 208, RULE_enumeratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1532);
			enumeratorDefinition();
			}
			_ctx.stop = _input.LT(-1);
			setState(1539);
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
					setState(1534);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1535);
					match(Comma);
					setState(1536);
					enumeratorDefinition();
					}
					} 
				}
				setState(1541);
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
		enterRule(_localctx, 210, RULE_enumeratorDefinition);
		try {
			setState(1547);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,153,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1542);
				enumerator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1543);
				enumerator();
				setState(1544);
				match(Equal);
				setState(1545);
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
		enterRule(_localctx, 212, RULE_enumerator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1549);
			match(Identifier);
			setState(1551);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,154,_ctx) ) {
			case 1:
				{
				setState(1550);
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
		enterRule(_localctx, 214, RULE_namespaceDefinition);
		try {
			setState(1556);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,155,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1553);
				namedNamespaceDefinition();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1554);
				unnamedNamespaceDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1555);
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
		enterRule(_localctx, 216, RULE_namedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1559);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1558);
				match(Inline);
				}
			}

			setState(1561);
			match(Namespace);
			setState(1563);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1562);
				attributeSpecifierSequence(0);
				}
			}

			setState(1565);
			match(Identifier);
			setState(1566);
			match(OpenBrace);
			setState(1567);
			namespaceBody();
			setState(1568);
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
		enterRule(_localctx, 218, RULE_unnamedNamespaceDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1571);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Inline) {
				{
				setState(1570);
				match(Inline);
				}
			}

			setState(1573);
			match(Namespace);
			setState(1575);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1574);
				attributeSpecifierSequence(0);
				}
			}

			setState(1577);
			match(OpenBrace);
			setState(1578);
			namespaceBody();
			setState(1579);
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
		enterRule(_localctx, 220, RULE_nestedNamespaceDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1581);
			match(Namespace);
			setState(1582);
			enclosingNamespaceSpecifier(0);
			setState(1583);
			match(DoubleColon);
			setState(1584);
			match(Identifier);
			setState(1585);
			match(OpenBrace);
			setState(1586);
			namespaceBody();
			setState(1587);
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
		int _startState = 222;
		enterRecursionRule(_localctx, 222, RULE_enclosingNamespaceSpecifier, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1590);
			match(Identifier);
			}
			_ctx.stop = _input.LT(-1);
			setState(1597);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,160,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new EnclosingNamespaceSpecifierContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_enclosingNamespaceSpecifier);
					setState(1592);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1593);
					match(DoubleColon);
					setState(1594);
					match(Identifier);
					}
					} 
				}
				setState(1599);
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
		enterRule(_localctx, 224, RULE_namespaceBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1601);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (OpenParenthesis - 65)) | (1L << (Semicolon - 65)) | (1L << (Ellipsis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (Tilde - 65)) | (1L << (DoubleAmpersand - 65)))) != 0) || _la==Identifier) {
				{
				setState(1600);
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
		enterRule(_localctx, 226, RULE_namespaceAliasDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1603);
			match(Namespace);
			setState(1604);
			match(Identifier);
			setState(1605);
			match(Equal);
			setState(1606);
			qualifiedNamespaceSpecifier();
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
		enterRule(_localctx, 228, RULE_qualifiedNamespaceSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1610);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,162,_ctx) ) {
			case 1:
				{
				setState(1609);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1612);
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
		enterRule(_localctx, 230, RULE_usingDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1614);
			match(Using);
			setState(1615);
			usingDeclaratorList(0);
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
		int _startState = 232;
		enterRecursionRule(_localctx, 232, RULE_usingDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1619);
			usingDeclarator();
			setState(1621);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,163,_ctx) ) {
			case 1:
				{
				setState(1620);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(1631);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,165,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new UsingDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_usingDeclaratorList);
					setState(1623);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1624);
					match(Comma);
					setState(1625);
					usingDeclarator();
					setState(1627);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,164,_ctx) ) {
					case 1:
						{
						setState(1626);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(1633);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,165,_ctx);
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
		enterRule(_localctx, 234, RULE_usingDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1635);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,166,_ctx) ) {
			case 1:
				{
				setState(1634);
				typeName();
				}
				break;
			}
			setState(1637);
			nestedNameSpecifier();
			setState(1638);
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
		enterRule(_localctx, 236, RULE_usingDirective);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1641);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1640);
				attributeSpecifierSequence(0);
				}
			}

			setState(1643);
			match(Using);
			setState(1644);
			match(Namespace);
			setState(1646);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,168,_ctx) ) {
			case 1:
				{
				setState(1645);
				nestedNameSpecifier();
				}
				break;
			}
			setState(1648);
			namespaceName();
			setState(1649);
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
		enterRule(_localctx, 238, RULE_asmDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1652);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(1651);
				attributeSpecifierSequence(0);
				}
			}

			setState(1654);
			match(Asm);
			setState(1655);
			match(OpenParenthesis);
			setState(1656);
			match(StringLiteral);
			setState(1657);
			match(CloseParenthesis);
			setState(1658);
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
		enterRule(_localctx, 240, RULE_linkageSpecification);
		int _la;
		try {
			setState(1670);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,171,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1660);
				match(Extern);
				setState(1661);
				match(StringLiteral);
				setState(1662);
				match(OpenBrace);
				setState(1664);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << Operator) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (OpenParenthesis - 65)) | (1L << (Semicolon - 65)) | (1L << (Ellipsis - 65)) | (1L << (DoubleColon - 65)) | (1L << (Asterisk - 65)) | (1L << (Ampersand - 65)) | (1L << (Tilde - 65)) | (1L << (DoubleAmpersand - 65)))) != 0) || _la==Identifier) {
					{
					setState(1663);
					declarationSequence(0);
					}
				}

				setState(1666);
				match(CloseBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1667);
				match(Extern);
				setState(1668);
				match(StringLiteral);
				setState(1669);
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
		int _startState = 242;
		enterRecursionRule(_localctx, 242, RULE_attributeSpecifierSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1673);
			attributeSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(1679);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,172,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AttributeSpecifierSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_attributeSpecifierSequence);
					setState(1675);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1676);
					attributeSpecifier();
					}
					} 
				}
				setState(1681);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,172,_ctx);
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
		enterRule(_localctx, 244, RULE_attributeSpecifier);
		try {
			setState(1692);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenBracket:
				enterOuterAlt(_localctx, 1);
				{
				setState(1682);
				match(OpenBracket);
				setState(1683);
				match(OpenBracket);
				setState(1685);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,173,_ctx) ) {
				case 1:
					{
					setState(1684);
					attributeUsingPrefix();
					}
					break;
				}
				setState(1687);
				attributeList(0);
				setState(1688);
				match(CloseBracket);
				setState(1689);
				match(CloseBracket);
				}
				break;
			case AlignAs:
				enterOuterAlt(_localctx, 2);
				{
				setState(1691);
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
		enterRule(_localctx, 246, RULE_alignmentSpecifier);
		int _la;
		try {
			setState(1710);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,177,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1694);
				match(AlignAs);
				setState(1695);
				match(OpenParenthesis);
				setState(1696);
				typeIdentifier();
				setState(1698);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1697);
					match(Ellipsis);
					}
				}

				setState(1700);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1702);
				match(AlignAs);
				setState(1703);
				match(CloseParenthesis);
				setState(1704);
				constantExpression();
				setState(1706);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1705);
					match(Ellipsis);
					}
				}

				setState(1708);
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
		enterRule(_localctx, 248, RULE_attributeUsingPrefix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1712);
			match(Using);
			setState(1713);
			attributeNamespace();
			setState(1714);
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
		int _startState = 250;
		enterRecursionRule(_localctx, 250, RULE_attributeList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1723);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,179,_ctx) ) {
			case 1:
				{
				setState(1718);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,178,_ctx) ) {
				case 1:
					{
					setState(1717);
					attribute();
					}
					break;
				}
				}
				break;
			case 2:
				{
				setState(1720);
				attribute();
				setState(1721);
				match(Ellipsis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1737);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,182,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1735);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,181,_ctx) ) {
					case 1:
						{
						_localctx = new AttributeListContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_attributeList);
						setState(1725);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1726);
						match(Comma);
						setState(1728);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,180,_ctx) ) {
						case 1:
							{
							setState(1727);
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
						setState(1730);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(1731);
						match(Comma);
						setState(1732);
						attribute();
						setState(1733);
						match(Ellipsis);
						}
						break;
					}
					} 
				}
				setState(1739);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,182,_ctx);
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
		enterRule(_localctx, 252, RULE_attribute);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1740);
			attributeToken();
			setState(1742);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,183,_ctx) ) {
			case 1:
				{
				setState(1741);
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
		enterRule(_localctx, 254, RULE_attributeToken);
		try {
			setState(1746);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,184,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1744);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1745);
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
		enterRule(_localctx, 256, RULE_attributeScopedToken);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1748);
			attributeNamespace();
			setState(1749);
			match(DoubleColon);
			setState(1750);
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
		enterRule(_localctx, 258, RULE_attributeNamespace);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1752);
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
		enterRule(_localctx, 260, RULE_attributeArgumentClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1754);
			match(OpenParenthesis);
			setState(1756);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Preprocessor) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (ArrowAsterisk - 128)) | (1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
				{
				setState(1755);
				balancedTokenSequence(0);
				}
			}

			setState(1758);
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
		int _startState = 262;
		enterRecursionRule(_localctx, 262, RULE_balancedTokenSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1761);
			balancedToken();
			}
			_ctx.stop = _input.LT(-1);
			setState(1767);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,186,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new BalancedTokenSequenceContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_balancedTokenSequence);
					setState(1763);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1764);
					balancedToken();
					}
					} 
				}
				setState(1769);
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
		enterRule(_localctx, 264, RULE_balancedToken);
		int _la;
		try {
			setState(1786);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1770);
				match(OpenParenthesis);
				setState(1772);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Preprocessor) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (ArrowAsterisk - 128)) | (1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1771);
					balancedTokenSequence(0);
					}
				}

				setState(1774);
				match(CloseParenthesis);
				}
				break;
			case OpenBracket:
				enterOuterAlt(_localctx, 2);
				{
				setState(1775);
				match(OpenBracket);
				setState(1777);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Preprocessor) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (ArrowAsterisk - 128)) | (1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1776);
					balancedTokenSequence(0);
					}
				}

				setState(1779);
				match(CloseBracket);
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 3);
				{
				setState(1780);
				match(OpenBrace);
				setState(1782);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BlockComment) | (1L << LineComment) | (1L << Whitespace) | (1L << Preprocessor) | (1L << Newline) | (1L << AlignAs) | (1L << AlignOf) | (1L << Asm) | (1L << Auto) | (1L << Bool) | (1L << Break) | (1L << Case) | (1L << Catch) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << ConstCast) | (1L << Continue) | (1L << DeclType) | (1L << Default) | (1L << Delete) | (1L << Do) | (1L << Double) | (1L << DynamicCast) | (1L << Else) | (1L << Enum) | (1L << Explicit) | (1L << Export) | (1L << Extern) | (1L << False) | (1L << Float) | (1L << For) | (1L << Friend) | (1L << GoTo) | (1L << If) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Namespace) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Register) | (1L << ReinterpretCast) | (1L << Return) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << Static) | (1L << StaticAssert) | (1L << StaticCast) | (1L << Struct) | (1L << Switch) | (1L << Template))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (ThreadLocal - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (Try - 64)) | (1L << (TypeDef - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Union - 64)) | (1L << (Unsigned - 64)) | (1L << (Using - 64)) | (1L << (Virtual - 64)) | (1L << (Void - 64)) | (1L << (Volatile - 64)) | (1L << (WChar - 64)) | (1L << (While - 64)) | (1L << (Override - 64)) | (1L << (Final - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (Semicolon - 64)) | (1L << (Colon - 64)) | (1L << (Ellipsis - 64)) | (1L << (QuestionMark - 64)) | (1L << (DoubleColon - 64)) | (1L << (Period - 64)) | (1L << (PeriodAsterisk - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (ForwardSlash - 64)) | (1L << (Percent - 64)) | (1L << (Caret - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (Equal - 64)) | (1L << (LessThan - 64)) | (1L << (GreaterThan - 64)) | (1L << (PlusEqual - 64)) | (1L << (MinusEqual - 64)) | (1L << (AsteriskEqual - 64)) | (1L << (ForwardSlashEqual - 64)) | (1L << (PercentEqual - 64)) | (1L << (CaretEqual - 64)) | (1L << (AmpersandEqual - 64)) | (1L << (VerticalBarEqual - 64)) | (1L << (DoubleLessThan - 64)) | (1L << (DoubleLessThanEqual - 64)) | (1L << (DoubleGreaterThanEqual - 64)) | (1L << (DoubleEqual - 64)) | (1L << (ExclamationMarkEqual - 64)) | (1L << (LessThanEqual - 64)) | (1L << (GreaterThanEqual - 64)) | (1L << (DoubleAmpersand - 64)) | (1L << (DoubleVerticalBar - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)) | (1L << (Comma - 64)))) != 0) || ((((_la - 128)) & ~0x3f) == 0 && ((1L << (_la - 128)) & ((1L << (ArrowAsterisk - 128)) | (1L << (Arrow - 128)) | (1L << (Zero - 128)) | (1L << (IntegerLiteral - 128)) | (1L << (FloatingPointLiteral - 128)) | (1L << (CharacterLiteral - 128)) | (1L << (StringLiteral - 128)) | (1L << (UserDefinedIntegerLiteral - 128)) | (1L << (UserDefinedFloatingPointLiteral - 128)) | (1L << (UserDefinedCharacterLiteral - 128)) | (1L << (UserDefinedStringLiteral - 128)) | (1L << (Identifier - 128)))) != 0)) {
					{
					setState(1781);
					balancedTokenSequence(0);
					}
				}

				setState(1784);
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
				setState(1785);
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
		enterRule(_localctx, 266, RULE_nonBalancedToken);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1788);
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
		int _startState = 268;
		enterRecursionRule(_localctx, 268, RULE_initializerDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1791);
			initializerDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(1798);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,191,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerDeclaratorList);
					setState(1793);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1794);
					match(Comma);
					setState(1795);
					initializerDeclarator();
					}
					} 
				}
				setState(1800);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,191,_ctx);
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
		enterRule(_localctx, 270, RULE_initializerDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1801);
			declarator();
			setState(1803);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,192,_ctx) ) {
			case 1:
				{
				setState(1802);
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
		enterRule(_localctx, 272, RULE_declarator);
		try {
			setState(1807);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,193,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1805);
				pointerDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1806);
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
		enterRule(_localctx, 274, RULE_pointerDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1809);
			pointerOperator();
			setState(1810);
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
		int _startState = 276;
		enterRecursionRule(_localctx, 276, RULE_noPointerDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1824);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DeclType:
			case Operator:
			case Ellipsis:
			case DoubleColon:
			case Tilde:
			case Identifier:
				{
				setState(1814);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1813);
					match(Ellipsis);
					}
				}

				setState(1816);
				identifierExpression();
				setState(1818);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,195,_ctx) ) {
				case 1:
					{
					setState(1817);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case OpenParenthesis:
				{
				setState(1820);
				match(OpenParenthesis);
				setState(1821);
				pointerDeclarator();
				setState(1822);
				match(CloseParenthesis);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(1839);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,200,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1837);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,199,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerDeclarator);
						setState(1826);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1827);
						match(OpenBracket);
						setState(1829);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
							{
							setState(1828);
							constantExpression();
							}
						}

						setState(1831);
						match(CloseBracket);
						setState(1833);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,198,_ctx) ) {
						case 1:
							{
							setState(1832);
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
						setState(1835);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1836);
						parametersAndQualifiers();
						}
						break;
					}
					} 
				}
				setState(1841);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,200,_ctx);
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
		enterRule(_localctx, 278, RULE_parametersAndQualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1842);
			functionParameters();
			setState(1843);
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
		enterRule(_localctx, 280, RULE_functionParameters);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1845);
			match(OpenParenthesis);
			setState(1846);
			parameterDeclarationClause();
			setState(1847);
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
		enterRule(_localctx, 282, RULE_functionQualifiers);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1850);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,201,_ctx) ) {
			case 1:
				{
				setState(1849);
				constVolatileQualifierSequence();
				}
				break;
			}
			setState(1853);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,202,_ctx) ) {
			case 1:
				{
				setState(1852);
				referenceQualifier();
				}
				break;
			}
			setState(1856);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,203,_ctx) ) {
			case 1:
				{
				setState(1855);
				noExceptionSpecifier();
				}
				break;
			}
			setState(1859);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,204,_ctx) ) {
			case 1:
				{
				setState(1858);
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
		enterRule(_localctx, 284, RULE_trailingReturnType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1861);
			match(Arrow);
			setState(1862);
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
		enterRule(_localctx, 286, RULE_pointerOperator);
		try {
			setState(1887);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Asterisk:
				enterOuterAlt(_localctx, 1);
				{
				setState(1864);
				match(Asterisk);
				setState(1866);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,205,_ctx) ) {
				case 1:
					{
					setState(1865);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1869);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,206,_ctx) ) {
				case 1:
					{
					setState(1868);
					constVolatileQualifierSequence();
					}
					break;
				}
				}
				break;
			case Ampersand:
				enterOuterAlt(_localctx, 2);
				{
				setState(1871);
				match(Ampersand);
				setState(1873);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,207,_ctx) ) {
				case 1:
					{
					setState(1872);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case DoubleAmpersand:
				enterOuterAlt(_localctx, 3);
				{
				setState(1875);
				match(DoubleAmpersand);
				setState(1877);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,208,_ctx) ) {
				case 1:
					{
					setState(1876);
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
				setState(1879);
				nestedNameSpecifier();
				setState(1880);
				match(Asterisk);
				setState(1882);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,209,_ctx) ) {
				case 1:
					{
					setState(1881);
					attributeSpecifierSequence(0);
					}
					break;
				}
				setState(1885);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,210,_ctx) ) {
				case 1:
					{
					setState(1884);
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
		enterRule(_localctx, 288, RULE_constVolatileQualifierSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1889);
			constVolatileQualifier();
			setState(1891);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,212,_ctx) ) {
			case 1:
				{
				setState(1890);
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
		enterRule(_localctx, 290, RULE_constVolatileQualifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1893);
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
		enterRule(_localctx, 292, RULE_referenceQualifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1895);
			match(Ampersand);
			setState(1896);
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
		enterRule(_localctx, 294, RULE_typeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1898);
			typeSpecifierSequence();
			setState(1900);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,213,_ctx) ) {
			case 1:
				{
				setState(1899);
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
		enterRule(_localctx, 296, RULE_definingTypeIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1902);
			definingTypeSpecifierSequence();
			setState(1904);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==DeclType || ((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (OpenBracket - 84)) | (1L << (OpenParenthesis - 84)) | (1L << (Ellipsis - 84)) | (1L << (DoubleColon - 84)) | (1L << (Asterisk - 84)) | (1L << (Ampersand - 84)) | (1L << (DoubleAmpersand - 84)) | (1L << (Identifier - 84)))) != 0)) {
				{
				setState(1903);
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
		enterRule(_localctx, 298, RULE_abstractDeclarator);
		try {
			setState(1914);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,216,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1906);
				pointerAbstractDeclarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1908);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,215,_ctx) ) {
				case 1:
					{
					setState(1907);
					noPointerAbstractDeclarator(0);
					}
					break;
				}
				setState(1910);
				parametersAndQualifiers();
				setState(1911);
				trailingReturnType();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(1913);
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
		enterRule(_localctx, 300, RULE_pointerAbstractDeclarator);
		try {
			setState(1921);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OpenBracket:
			case OpenParenthesis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1916);
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
				setState(1917);
				pointerOperator();
				setState(1919);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,217,_ctx) ) {
				case 1:
					{
					setState(1918);
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
		int _startState = 302;
		enterRecursionRule(_localctx, 302, RULE_noPointerAbstractDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1937);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,221,_ctx) ) {
			case 1:
				{
				setState(1924);
				parametersAndQualifiers();
				}
				break;
			case 2:
				{
				setState(1925);
				match(OpenBracket);
				setState(1927);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(1926);
					constantExpression();
					}
				}

				setState(1929);
				match(CloseBracket);
				setState(1931);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,220,_ctx) ) {
				case 1:
					{
					setState(1930);
					attributeSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 3:
				{
				setState(1933);
				match(OpenParenthesis);
				setState(1934);
				pointerAbstractDeclarator();
				setState(1935);
				match(CloseParenthesis);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(1952);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,225,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1950);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,224,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1939);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(1940);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractDeclarator);
						setState(1941);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1942);
						match(OpenBracket);
						setState(1944);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
							{
							setState(1943);
							constantExpression();
							}
						}

						setState(1946);
						match(CloseBracket);
						setState(1948);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,223,_ctx) ) {
						case 1:
							{
							setState(1947);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1954);
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
		enterRule(_localctx, 304, RULE_abstractPackDeclarator);
		try {
			setState(1959);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Ellipsis:
				enterOuterAlt(_localctx, 1);
				{
				setState(1955);
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
				setState(1956);
				pointerOperator();
				setState(1957);
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
		int _startState = 306;
		enterRecursionRule(_localctx, 306, RULE_noPointerAbstractPackDeclarator, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1962);
			match(Ellipsis);
			}
			_ctx.stop = _input.LT(-1);
			setState(1977);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,230,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(1975);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,229,_ctx) ) {
					case 1:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1964);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(1965);
						parametersAndQualifiers();
						}
						break;
					case 2:
						{
						_localctx = new NoPointerAbstractPackDeclaratorContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_noPointerAbstractPackDeclarator);
						setState(1966);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(1967);
						match(OpenBracket);
						setState(1969);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
							{
							setState(1968);
							constantExpression();
							}
						}

						setState(1971);
						match(CloseBracket);
						setState(1973);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,228,_ctx) ) {
						case 1:
							{
							setState(1972);
							attributeSpecifierSequence(0);
							}
							break;
						}
						}
						break;
					}
					} 
				}
				setState(1979);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,230,_ctx);
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
		enterRule(_localctx, 308, RULE_parameterDeclarationClause);
		int _la;
		try {
			setState(1990);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,233,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1981);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << Struct))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (DoubleColon - 65)))) != 0) || _la==Identifier) {
					{
					setState(1980);
					parameterDeclarationList(0);
					}
				}

				setState(1984);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Ellipsis) {
					{
					setState(1983);
					match(Ellipsis);
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(1986);
				parameterDeclarationList(0);
				setState(1987);
				match(Comma);
				setState(1988);
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
		int _startState = 310;
		enterRecursionRule(_localctx, 310, RULE_parameterDeclarationList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(1993);
			parameterDeclaration();
			}
			_ctx.stop = _input.LT(-1);
			setState(2000);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,234,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ParameterDeclarationListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_parameterDeclarationList);
					setState(1995);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(1996);
					match(Comma);
					setState(1997);
					parameterDeclaration();
					}
					} 
				}
				setState(2002);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,234,_ctx);
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
		enterRule(_localctx, 312, RULE_parameterDeclaration);
		int _la;
		try {
			setState(2017);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,237,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2004);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2003);
					attributeSpecifierSequence(0);
					}
				}

				setState(2006);
				declarationSpecifierSequence();
				setState(2007);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2010);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2009);
					attributeSpecifierSequence(0);
					}
				}

				setState(2012);
				declarationSpecifierSequence();
				setState(2013);
				declarator();
				setState(2014);
				match(Equal);
				setState(2015);
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
		enterRule(_localctx, 314, RULE_functionDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2020);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AlignAs || _la==OpenBracket) {
				{
				setState(2019);
				attributeSpecifierSequence(0);
				}
			}

			setState(2023);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,239,_ctx) ) {
			case 1:
				{
				setState(2022);
				declarationSpecifierSequence();
				}
				break;
			}
			setState(2025);
			functionDeclarator();
			setState(2027);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Override || _la==Final) {
				{
				setState(2026);
				virtualSpecifierSequence(0);
				}
			}

			setState(2029);
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
		enterRule(_localctx, 316, RULE_functionDeclarator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2031);
			identifierExpression();
			setState(2032);
			functionParameters();
			setState(2033);
			functionQualifiers();
			setState(2035);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Arrow) {
				{
				setState(2034);
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
		enterRule(_localctx, 318, RULE_functionBody);
		try {
			setState(2041);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,242,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2037);
				regularFunctionBody();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2038);
				functionTryBlock();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2039);
				explicitlyDefaultedFunction();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2040);
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
		enterRule(_localctx, 320, RULE_regularFunctionBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2044);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2043);
				constructorInitializer();
				}
			}

			setState(2046);
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
		enterRule(_localctx, 322, RULE_explicitlyDefaultedFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2048);
			match(Equal);
			setState(2049);
			match(Default);
			setState(2050);
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
		enterRule(_localctx, 324, RULE_deletedFunction);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2052);
			match(Equal);
			setState(2053);
			match(Delete);
			setState(2054);
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
		enterRule(_localctx, 326, RULE_initializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2056);
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
		enterRule(_localctx, 328, RULE_braceOrEqualInitializer);
		try {
			setState(2061);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Equal:
				enterOuterAlt(_localctx, 1);
				{
				setState(2058);
				match(Equal);
				setState(2059);
				initializerClause();
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2060);
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
		enterRule(_localctx, 330, RULE_initializerClause);
		try {
			setState(2065);
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
				setState(2063);
				assignmentExpression();
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2064);
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
		int _startState = 332;
		enterRecursionRule(_localctx, 332, RULE_initializerList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2068);
			initializerClause();
			setState(2070);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,246,_ctx) ) {
			case 1:
				{
				setState(2069);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2080);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,248,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new InitializerListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_initializerList);
					setState(2072);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2073);
					match(Comma);
					setState(2074);
					initializerClause();
					setState(2076);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,247,_ctx) ) {
					case 1:
						{
						setState(2075);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2082);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,248,_ctx);
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
		enterRule(_localctx, 334, RULE_bracedInitializerList);
		int _la;
		try {
			setState(2092);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,250,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2083);
				match(OpenBrace);
				setState(2084);
				initializerList(0);
				setState(2086);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(2085);
					match(Comma);
					}
				}

				setState(2088);
				match(CloseBrace);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2090);
				match(OpenBrace);
				setState(2091);
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
		enterRule(_localctx, 336, RULE_expressionOrBracedInitializerList);
		try {
			setState(2096);
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
				setState(2094);
				expression(0);
				}
				break;
			case OpenBrace:
				enterOuterAlt(_localctx, 2);
				{
				setState(2095);
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
		enterRule(_localctx, 338, RULE_classSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2098);
			classHead();
			setState(2099);
			match(OpenBrace);
			setState(2101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (Semicolon - 65)) | (1L << (DoubleColon - 65)) | (1L << (Tilde - 65)))) != 0) || _la==Identifier) {
				{
				setState(2100);
				memberSpecification();
				}
			}

			setState(2103);
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
		enterRule(_localctx, 340, RULE_classHead);
		int _la;
		try {
			setState(2123);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,258,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2105);
				classKey();
				setState(2107);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2106);
					attributeSpecifierSequence(0);
					}
				}

				setState(2109);
				classHeadName();
				setState(2111);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Final) {
					{
					setState(2110);
					classVirtualSpecifier();
					}
				}

				setState(2114);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2113);
					baseClause();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2116);
				classKey();
				setState(2118);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2117);
					attributeSpecifier();
					}
				}

				setState(2121);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Colon) {
					{
					setState(2120);
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
		enterRule(_localctx, 342, RULE_classHeadName);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2126);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,259,_ctx) ) {
			case 1:
				{
				setState(2125);
				nestedNameSpecifier();
				}
				break;
			}
			setState(2128);
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
		enterRule(_localctx, 344, RULE_classVirtualSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2130);
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
		enterRule(_localctx, 346, RULE_classKey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2132);
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
		enterRule(_localctx, 348, RULE_memberSpecification);
		int _la;
		try {
			setState(2143);
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
				setState(2134);
				memberDeclaration();
				setState(2136);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (Semicolon - 65)) | (1L << (DoubleColon - 65)) | (1L << (Tilde - 65)))) != 0) || _la==Identifier) {
					{
					setState(2135);
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
				setState(2138);
				accessSpecifier();
				setState(2139);
				match(Colon);
				setState(2141);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignAs) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << ConstExpr) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Explicit) | (1L << Extern) | (1L << Float) | (1L << Friend) | (1L << Inline) | (1L << Int) | (1L << Long) | (1L << Mutable) | (1L << Operator) | (1L << Private) | (1L << Protected) | (1L << Public) | (1L << Short) | (1L << Signed) | (1L << Static) | (1L << StaticAssert) | (1L << Struct) | (1L << Template))) != 0) || ((((_la - 65)) & ~0x3f) == 0 && ((1L << (_la - 65)) & ((1L << (ThreadLocal - 65)) | (1L << (TypeDef - 65)) | (1L << (TypeName - 65)) | (1L << (Union - 65)) | (1L << (Unsigned - 65)) | (1L << (Using - 65)) | (1L << (Virtual - 65)) | (1L << (Void - 65)) | (1L << (Volatile - 65)) | (1L << (WChar - 65)) | (1L << (OpenBracket - 65)) | (1L << (Semicolon - 65)) | (1L << (DoubleColon - 65)) | (1L << (Tilde - 65)))) != 0) || _la==Identifier) {
					{
					setState(2140);
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
		enterRule(_localctx, 350, RULE_memberDeclaration);
		int _la;
		try {
			setState(2159);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,264,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2146);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2145);
					attributeSpecifierSequence(0);
					}
				}

				setState(2148);
				declarationSpecifierSequence();
				setState(2149);
				memberDeclaratorList(0);
				setState(2150);
				match(Semicolon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2152);
				functionDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2153);
				usingDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2154);
				staticAssertDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2155);
				templateDeclaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2156);
				deductionGuide();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2157);
				aliasDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2158);
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
		int _startState = 352;
		enterRecursionRule(_localctx, 352, RULE_memberDeclaratorList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2162);
			memberDeclarator();
			}
			_ctx.stop = _input.LT(-1);
			setState(2169);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,265,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new MemberDeclaratorListContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_memberDeclaratorList);
					setState(2164);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2165);
					match(Comma);
					setState(2166);
					memberDeclarator();
					}
					} 
				}
				setState(2171);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,265,_ctx);
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
		enterRule(_localctx, 354, RULE_memberDeclarator);
		int _la;
		try {
			setState(2187);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,269,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2172);
				declarator();
				setState(2174);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,266,_ctx) ) {
				case 1:
					{
					setState(2173);
					virtualSpecifierSequence(0);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2176);
				declarator();
				setState(2177);
				braceOrEqualInitializer();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2180);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2179);
					match(Identifier);
					}
				}

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
				match(Colon);
				setState(2186);
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
		int _startState = 356;
		enterRecursionRule(_localctx, 356, RULE_virtualSpecifierSequence, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2190);
			virtualSpecifier();
			}
			_ctx.stop = _input.LT(-1);
			setState(2196);
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
					setState(2192);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2193);
					virtualSpecifier();
					}
					} 
				}
				setState(2198);
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
		enterRule(_localctx, 358, RULE_virtualSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2199);
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
		enterRule(_localctx, 360, RULE_pureSpecifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2201);
			match(Equal);
			setState(2202);
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
		enterRule(_localctx, 362, RULE_baseClause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2204);
			match(Colon);
			setState(2205);
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
		int _startState = 364;
		enterRecursionRule(_localctx, 364, RULE_baseSpecifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2208);
			baseSpecifier();
			setState(2210);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,271,_ctx) ) {
			case 1:
				{
				setState(2209);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2220);
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
					setState(2212);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2213);
					match(Comma);
					setState(2214);
					baseSpecifier();
					setState(2216);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,272,_ctx) ) {
					case 1:
						{
						setState(2215);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2222);
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
		enterRule(_localctx, 366, RULE_baseSpecifier);
		int _la;
		try {
			setState(2244);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,279,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2224);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2223);
					attributeSpecifierSequence(0);
					}
				}

				setState(2226);
				classOrDecltype();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2228);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2227);
					attributeSpecifierSequence(0);
					}
				}

				setState(2230);
				match(Virtual);
				setState(2232);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Private) | (1L << Protected) | (1L << Public))) != 0)) {
					{
					setState(2231);
					accessSpecifier();
					}
				}

				setState(2234);
				classOrDecltype();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2236);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2235);
					attributeSpecifierSequence(0);
					}
				}

				setState(2238);
				accessSpecifier();
				setState(2240);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Virtual) {
					{
					setState(2239);
					match(Virtual);
					}
				}

				setState(2242);
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
		enterRule(_localctx, 368, RULE_classOrDecltype);
		try {
			setState(2255);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,281,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2247);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,280,_ctx) ) {
				case 1:
					{
					setState(2246);
					nestedNameSpecifier();
					}
					break;
				}
				setState(2249);
				className();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2250);
				nestedNameSpecifier();
				setState(2251);
				match(Template);
				setState(2252);
				simpleTemplateIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2254);
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
		enterRule(_localctx, 370, RULE_accessSpecifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2257);
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
		enterRule(_localctx, 372, RULE_conversionFunctionIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2259);
			match(Operator);
			setState(2260);
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
		enterRule(_localctx, 374, RULE_conversionTypeIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2262);
			typeSpecifierSequence();
			setState(2264);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,282,_ctx) ) {
			case 1:
				{
				setState(2263);
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
		enterRule(_localctx, 376, RULE_conversionDeclarator);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2266);
			pointerOperator();
			setState(2268);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,283,_ctx) ) {
			case 1:
				{
				setState(2267);
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
		enterRule(_localctx, 378, RULE_constructorInitializer);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2270);
			match(Colon);
			setState(2271);
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
		int _startState = 380;
		enterRecursionRule(_localctx, 380, RULE_memberInitializerList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2274);
			memberInitializer();
			setState(2276);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,284,_ctx) ) {
			case 1:
				{
				setState(2275);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2286);
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
					setState(2278);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2279);
					match(Comma);
					setState(2280);
					memberInitializer();
					setState(2282);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,285,_ctx) ) {
					case 1:
						{
						setState(2281);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2288);
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
		enterRule(_localctx, 382, RULE_memberInitializer);
		int _la;
		try {
			setState(2299);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,288,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2289);
				memberInitializerIdentifier();
				setState(2290);
				match(OpenParenthesis);
				setState(2292);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AlignOf) | (1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << ConstCast) | (1L << DeclType) | (1L << Delete) | (1L << Double) | (1L << DynamicCast) | (1L << False) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << New) | (1L << NoExcept) | (1L << Nullptr) | (1L << Operator) | (1L << ReinterpretCast) | (1L << Short) | (1L << Signed) | (1L << SizeOf) | (1L << StaticCast))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (This - 64)) | (1L << (Throw - 64)) | (1L << (True - 64)) | (1L << (TypeId - 64)) | (1L << (TypeName - 64)) | (1L << (Unsigned - 64)) | (1L << (Void - 64)) | (1L << (WChar - 64)) | (1L << (OpenBrace - 64)) | (1L << (OpenBracket - 64)) | (1L << (OpenParenthesis - 64)) | (1L << (DoubleColon - 64)) | (1L << (Plus - 64)) | (1L << (Minus - 64)) | (1L << (Asterisk - 64)) | (1L << (Ampersand - 64)) | (1L << (VerticalBar - 64)) | (1L << (Tilde - 64)) | (1L << (ExclamationMark - 64)) | (1L << (DoublePlus - 64)) | (1L << (DoubleMinus - 64)))) != 0) || ((((_la - 130)) & ~0x3f) == 0 && ((1L << (_la - 130)) & ((1L << (Zero - 130)) | (1L << (IntegerLiteral - 130)) | (1L << (FloatingPointLiteral - 130)) | (1L << (CharacterLiteral - 130)) | (1L << (StringLiteral - 130)) | (1L << (UserDefinedIntegerLiteral - 130)) | (1L << (UserDefinedFloatingPointLiteral - 130)) | (1L << (UserDefinedCharacterLiteral - 130)) | (1L << (UserDefinedStringLiteral - 130)) | (1L << (Identifier - 130)))) != 0)) {
					{
					setState(2291);
					expressionList();
					}
				}

				setState(2294);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2296);
				memberInitializerIdentifier();
				setState(2297);
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
		enterRule(_localctx, 384, RULE_memberInitializerIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2301);
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
		enterRule(_localctx, 386, RULE_operatorFunctionIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2303);
			match(Operator);
			setState(2304);
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
		enterRule(_localctx, 388, RULE_anyOperator);
		try {
			setState(2354);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,289,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2306);
				match(New);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2307);
				match(Delete);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2308);
				match(New);
				setState(2309);
				match(OpenBrace);
				setState(2310);
				match(CloseBracket);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2311);
				match(Delete);
				setState(2312);
				match(OpenBrace);
				setState(2313);
				match(CloseBracket);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(2314);
				match(Plus);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(2315);
				match(Minus);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(2316);
				match(Asterisk);
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(2317);
				match(ForwardSlash);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(2318);
				match(Percent);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(2319);
				match(Caret);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(2320);
				match(Ampersand);
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(2321);
				match(VerticalBar);
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(2322);
				match(Tilde);
				}
				break;
			case 14:
				enterOuterAlt(_localctx, 14);
				{
				setState(2323);
				match(ExclamationMark);
				}
				break;
			case 15:
				enterOuterAlt(_localctx, 15);
				{
				setState(2324);
				match(Equal);
				}
				break;
			case 16:
				enterOuterAlt(_localctx, 16);
				{
				setState(2325);
				match(LessThan);
				}
				break;
			case 17:
				enterOuterAlt(_localctx, 17);
				{
				setState(2326);
				match(GreaterThan);
				}
				break;
			case 18:
				enterOuterAlt(_localctx, 18);
				{
				setState(2327);
				match(PlusEqual);
				}
				break;
			case 19:
				enterOuterAlt(_localctx, 19);
				{
				setState(2328);
				match(MinusEqual);
				}
				break;
			case 20:
				enterOuterAlt(_localctx, 20);
				{
				setState(2329);
				match(AsteriskEqual);
				}
				break;
			case 21:
				enterOuterAlt(_localctx, 21);
				{
				setState(2330);
				match(ForwardSlashEqual);
				}
				break;
			case 22:
				enterOuterAlt(_localctx, 22);
				{
				setState(2331);
				match(PercentEqual);
				}
				break;
			case 23:
				enterOuterAlt(_localctx, 23);
				{
				setState(2332);
				match(CaretEqual);
				}
				break;
			case 24:
				enterOuterAlt(_localctx, 24);
				{
				setState(2333);
				match(AmpersandEqual);
				}
				break;
			case 25:
				enterOuterAlt(_localctx, 25);
				{
				setState(2334);
				match(VerticalBarEqual);
				}
				break;
			case 26:
				enterOuterAlt(_localctx, 26);
				{
				setState(2335);
				match(DoubleLessThan);
				}
				break;
			case 27:
				enterOuterAlt(_localctx, 27);
				{
				setState(2336);
				doubleGreaterThan();
				}
				break;
			case 28:
				enterOuterAlt(_localctx, 28);
				{
				setState(2337);
				match(DoubleGreaterThanEqual);
				}
				break;
			case 29:
				enterOuterAlt(_localctx, 29);
				{
				setState(2338);
				match(DoubleLessThanEqual);
				}
				break;
			case 30:
				enterOuterAlt(_localctx, 30);
				{
				setState(2339);
				match(DoubleEqual);
				}
				break;
			case 31:
				enterOuterAlt(_localctx, 31);
				{
				setState(2340);
				match(ExclamationMarkEqual);
				}
				break;
			case 32:
				enterOuterAlt(_localctx, 32);
				{
				setState(2341);
				match(LessThanEqual);
				}
				break;
			case 33:
				enterOuterAlt(_localctx, 33);
				{
				setState(2342);
				match(GreaterThanEqual);
				}
				break;
			case 34:
				enterOuterAlt(_localctx, 34);
				{
				setState(2343);
				match(DoubleAmpersand);
				}
				break;
			case 35:
				enterOuterAlt(_localctx, 35);
				{
				setState(2344);
				match(DoubleVerticalBar);
				}
				break;
			case 36:
				enterOuterAlt(_localctx, 36);
				{
				setState(2345);
				match(DoublePlus);
				}
				break;
			case 37:
				enterOuterAlt(_localctx, 37);
				{
				setState(2346);
				match(DoubleMinus);
				}
				break;
			case 38:
				enterOuterAlt(_localctx, 38);
				{
				setState(2347);
				match(Comma);
				}
				break;
			case 39:
				enterOuterAlt(_localctx, 39);
				{
				setState(2348);
				match(ArrowAsterisk);
				}
				break;
			case 40:
				enterOuterAlt(_localctx, 40);
				{
				setState(2349);
				match(Arrow);
				}
				break;
			case 41:
				enterOuterAlt(_localctx, 41);
				{
				setState(2350);
				match(OpenParenthesis);
				setState(2351);
				match(CloseParenthesis);
				}
				break;
			case 42:
				enterOuterAlt(_localctx, 42);
				{
				setState(2352);
				match(OpenBracket);
				setState(2353);
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
		enterRule(_localctx, 390, RULE_literalOperatorIdentifier);
		try {
			setState(2361);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,290,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2356);
				match(Operator);
				setState(2357);
				match(StringLiteral);
				setState(2358);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2359);
				match(Operator);
				setState(2360);
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
		enterRule(_localctx, 392, RULE_templateDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2363);
			match(Template);
			setState(2364);
			match(LessThan);
			setState(2365);
			templateParameterList(0);
			setState(2366);
			match(GreaterThan);
			setState(2367);
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
		int _startState = 394;
		enterRecursionRule(_localctx, 394, RULE_templateParameterList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2370);
			templateParameter();
			}
			_ctx.stop = _input.LT(-1);
			setState(2377);
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
					setState(2372);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2373);
					match(Comma);
					setState(2374);
					templateParameter();
					}
					} 
				}
				setState(2379);
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
		enterRule(_localctx, 396, RULE_templateParameter);
		try {
			setState(2382);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,292,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2380);
				typeParameter();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2381);
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
		enterRule(_localctx, 398, RULE_typeParameter);
		int _la;
		try {
			setState(2420);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,299,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2384);
				typeParameterKey();
				setState(2386);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,293,_ctx) ) {
				case 1:
					{
					setState(2385);
					match(Ellipsis);
					}
					break;
				}
				setState(2389);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,294,_ctx) ) {
				case 1:
					{
					setState(2388);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2391);
				typeParameterKey();
				setState(2393);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2392);
					match(Identifier);
					}
				}

				setState(2395);
				match(Equal);
				setState(2396);
				typeIdentifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2398);
				match(Template);
				setState(2399);
				match(LessThan);
				setState(2400);
				templateParameterList(0);
				setState(2401);
				match(GreaterThan);
				setState(2402);
				typeParameterKey();
				setState(2404);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,296,_ctx) ) {
				case 1:
					{
					setState(2403);
					match(Ellipsis);
					}
					break;
				}
				setState(2407);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,297,_ctx) ) {
				case 1:
					{
					setState(2406);
					match(Identifier);
					}
					break;
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(2409);
				match(Template);
				setState(2410);
				match(LessThan);
				setState(2411);
				templateParameterList(0);
				setState(2412);
				match(GreaterThan);
				setState(2413);
				typeParameterKey();
				setState(2415);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Identifier) {
					{
					setState(2414);
					match(Identifier);
					}
				}

				setState(2417);
				match(Equal);
				setState(2418);
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
		enterRule(_localctx, 400, RULE_typeParameterKey);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2422);
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
		enterRule(_localctx, 402, RULE_simpleTemplateIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2424);
			templateName();
			setState(2425);
			match(LessThan);
			setState(2427);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Short) | (1L << Signed) | (1L << Struct))) != 0) || ((((_la - 71)) & ~0x3f) == 0 && ((1L << (_la - 71)) & ((1L << (TypeName - 71)) | (1L << (Union - 71)) | (1L << (Unsigned - 71)) | (1L << (Void - 71)) | (1L << (Volatile - 71)) | (1L << (WChar - 71)) | (1L << (DoubleColon - 71)))) != 0) || _la==Identifier) {
				{
				setState(2426);
				templateArgumentList(0);
				}
			}

			setState(2429);
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
		enterRule(_localctx, 404, RULE_templateIdentifier);
		int _la;
		try {
			setState(2446);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,303,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2431);
				simpleTemplateIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2432);
				operatorFunctionIdentifier();
				setState(2433);
				match(LessThan);
				setState(2435);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Short) | (1L << Signed) | (1L << Struct))) != 0) || ((((_la - 71)) & ~0x3f) == 0 && ((1L << (_la - 71)) & ((1L << (TypeName - 71)) | (1L << (Union - 71)) | (1L << (Unsigned - 71)) | (1L << (Void - 71)) | (1L << (Volatile - 71)) | (1L << (WChar - 71)) | (1L << (DoubleColon - 71)))) != 0) || _la==Identifier) {
					{
					setState(2434);
					templateArgumentList(0);
					}
				}

				setState(2437);
				match(GreaterThan);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2439);
				literalOperatorIdentifier();
				setState(2440);
				match(LessThan);
				setState(2442);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Auto) | (1L << Bool) | (1L << Char) | (1L << Char8) | (1L << Char16) | (1L << Char32) | (1L << Class) | (1L << Const) | (1L << DeclType) | (1L << Double) | (1L << Enum) | (1L << Float) | (1L << Int) | (1L << Long) | (1L << Short) | (1L << Signed) | (1L << Struct))) != 0) || ((((_la - 71)) & ~0x3f) == 0 && ((1L << (_la - 71)) & ((1L << (TypeName - 71)) | (1L << (Union - 71)) | (1L << (Unsigned - 71)) | (1L << (Void - 71)) | (1L << (Volatile - 71)) | (1L << (WChar - 71)) | (1L << (DoubleColon - 71)))) != 0) || _la==Identifier) {
					{
					setState(2441);
					templateArgumentList(0);
					}
				}

				setState(2444);
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
		int _startState = 406;
		enterRecursionRule(_localctx, 406, RULE_templateArgumentList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2449);
			templateArgument();
			setState(2451);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,304,_ctx) ) {
			case 1:
				{
				setState(2450);
				match(Ellipsis);
				}
				break;
			}
			}
			_ctx.stop = _input.LT(-1);
			setState(2461);
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
					setState(2453);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2454);
					match(Comma);
					setState(2455);
					templateArgument();
					setState(2457);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,305,_ctx) ) {
					case 1:
						{
						setState(2456);
						match(Ellipsis);
						}
						break;
					}
					}
					} 
				}
				setState(2463);
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
		enterRule(_localctx, 408, RULE_templateArgument);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2464);
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
		enterRule(_localctx, 410, RULE_typenameSpecifier);
		int _la;
		try {
			setState(2477);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,308,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2466);
				match(TypeName);
				setState(2467);
				nestedNameSpecifier();
				setState(2468);
				match(Identifier);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2470);
				match(TypeName);
				setState(2471);
				nestedNameSpecifier();
				setState(2473);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Template) {
					{
					setState(2472);
					match(Template);
					}
				}

				setState(2475);
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
		enterRule(_localctx, 412, RULE_explicitInstantiation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2480);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Extern) {
				{
				setState(2479);
				match(Extern);
				}
			}

			setState(2482);
			match(Template);
			setState(2483);
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
		enterRule(_localctx, 414, RULE_explicitSpecialization);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2485);
			match(Template);
			setState(2486);
			match(LessThan);
			setState(2487);
			match(GreaterThan);
			setState(2488);
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
		enterRule(_localctx, 416, RULE_deductionGuide);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2491);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Explicit) {
				{
				setState(2490);
				match(Explicit);
				}
			}

			setState(2493);
			templateName();
			setState(2494);
			match(OpenParenthesis);
			setState(2495);
			parameterDeclarationClause();
			setState(2496);
			match(CloseParenthesis);
			setState(2497);
			match(Arrow);
			setState(2498);
			simpleTemplateIdentifier();
			setState(2499);
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
		enterRule(_localctx, 418, RULE_tryBlock);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2501);
			match(Try);
			setState(2502);
			compoundStatement();
			setState(2503);
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
		enterRule(_localctx, 420, RULE_functionTryBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2505);
			match(Try);
			setState(2507);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Colon) {
				{
				setState(2506);
				constructorInitializer();
				}
			}

			setState(2509);
			compoundStatement();
			setState(2510);
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
		enterRule(_localctx, 422, RULE_handlerSequence);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2512);
			handler();
			setState(2514);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,312,_ctx) ) {
			case 1:
				{
				setState(2513);
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
		enterRule(_localctx, 424, RULE_handler);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2516);
			match(Catch);
			setState(2517);
			match(OpenParenthesis);
			setState(2518);
			exceptionDeclaration();
			setState(2519);
			match(CloseParenthesis);
			setState(2520);
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
		enterRule(_localctx, 426, RULE_exceptionDeclaration);
		int _la;
		try {
			setState(2536);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,316,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2523);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2522);
					attributeSpecifierSequence(0);
					}
				}

				setState(2525);
				typeSpecifierSequence();
				setState(2526);
				declarator();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2529);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AlignAs || _la==OpenBracket) {
					{
					setState(2528);
					attributeSpecifierSequence(0);
					}
				}

				setState(2531);
				typeSpecifierSequence();
				setState(2533);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==DeclType || ((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (OpenBracket - 84)) | (1L << (OpenParenthesis - 84)) | (1L << (Ellipsis - 84)) | (1L << (DoubleColon - 84)) | (1L << (Asterisk - 84)) | (1L << (Ampersand - 84)) | (1L << (DoubleAmpersand - 84)) | (1L << (Identifier - 84)))) != 0)) {
					{
					setState(2532);
					abstractDeclarator();
					}
				}

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2535);
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
		enterRule(_localctx, 428, RULE_noExceptionSpecifier);
		try {
			setState(2547);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,317,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(2538);
				match(NoExcept);
				setState(2539);
				match(OpenParenthesis);
				setState(2540);
				constantExpression();
				setState(2541);
				match(CloseParenthesis);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(2543);
				match(NoExcept);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(2544);
				match(Throw);
				setState(2545);
				match(OpenParenthesis);
				setState(2546);
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
		int _startState = 430;
		enterRecursionRule(_localctx, 430, RULE_identifierList, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(2550);
			match(Identifier);
			}
			_ctx.stop = _input.LT(-1);
			setState(2557);
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
					setState(2552);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(2553);
					match(Comma);
					setState(2554);
					match(Identifier);
					}
					} 
				}
				setState(2559);
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
		enterRule(_localctx, 432, RULE_literal);
		try {
			setState(2567);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case Zero:
			case IntegerLiteral:
				enterOuterAlt(_localctx, 1);
				{
				setState(2560);
				integerLiteral();
				}
				break;
			case FloatingPointLiteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(2561);
				match(FloatingPointLiteral);
				}
				break;
			case CharacterLiteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(2562);
				match(CharacterLiteral);
				}
				break;
			case StringLiteral:
				enterOuterAlt(_localctx, 4);
				{
				setState(2563);
				match(StringLiteral);
				}
				break;
			case False:
			case True:
				enterOuterAlt(_localctx, 5);
				{
				setState(2564);
				booleanLiteral();
				}
				break;
			case Nullptr:
				enterOuterAlt(_localctx, 6);
				{
				setState(2565);
				pointerLiteral();
				}
				break;
			case UserDefinedIntegerLiteral:
			case UserDefinedFloatingPointLiteral:
			case UserDefinedCharacterLiteral:
			case UserDefinedStringLiteral:
				enterOuterAlt(_localctx, 7);
				{
				setState(2566);
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
		enterRule(_localctx, 434, RULE_integerLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2569);
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
		enterRule(_localctx, 436, RULE_booleanLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2571);
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
		enterRule(_localctx, 438, RULE_pointerLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2573);
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
		enterRule(_localctx, 440, RULE_userDefinedLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(2575);
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
			return pointerManipulationExpression_sempred((PointerManipulationExpressionContext)_localctx, predIndex);
		case 44:
			return multiplicativeExpression_sempred((MultiplicativeExpressionContext)_localctx, predIndex);
		case 45:
			return additiveExpression_sempred((AdditiveExpressionContext)_localctx, predIndex);
		case 46:
			return shiftExpression_sempred((ShiftExpressionContext)_localctx, predIndex);
		case 47:
			return relationalExpression_sempred((RelationalExpressionContext)_localctx, predIndex);
		case 48:
			return equalityExpression_sempred((EqualityExpressionContext)_localctx, predIndex);
		case 49:
			return andExpression_sempred((AndExpressionContext)_localctx, predIndex);
		case 50:
			return exclusiveOrExpression_sempred((ExclusiveOrExpressionContext)_localctx, predIndex);
		case 51:
			return inclusiveOrExpression_sempred((InclusiveOrExpressionContext)_localctx, predIndex);
		case 52:
			return logicalAndExpression_sempred((LogicalAndExpressionContext)_localctx, predIndex);
		case 53:
			return logicalOrExpression_sempred((LogicalOrExpressionContext)_localctx, predIndex);
		case 58:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		case 66:
			return statementSequence_sempred((StatementSequenceContext)_localctx, predIndex);
		case 74:
			return declarationSequence_sempred((DeclarationSequenceContext)_localctx, predIndex);
		case 104:
			return enumeratorList_sempred((EnumeratorListContext)_localctx, predIndex);
		case 111:
			return enclosingNamespaceSpecifier_sempred((EnclosingNamespaceSpecifierContext)_localctx, predIndex);
		case 116:
			return usingDeclaratorList_sempred((UsingDeclaratorListContext)_localctx, predIndex);
		case 121:
			return attributeSpecifierSequence_sempred((AttributeSpecifierSequenceContext)_localctx, predIndex);
		case 125:
			return attributeList_sempred((AttributeListContext)_localctx, predIndex);
		case 131:
			return balancedTokenSequence_sempred((BalancedTokenSequenceContext)_localctx, predIndex);
		case 134:
			return initializerDeclaratorList_sempred((InitializerDeclaratorListContext)_localctx, predIndex);
		case 138:
			return noPointerDeclarator_sempred((NoPointerDeclaratorContext)_localctx, predIndex);
		case 151:
			return noPointerAbstractDeclarator_sempred((NoPointerAbstractDeclaratorContext)_localctx, predIndex);
		case 153:
			return noPointerAbstractPackDeclarator_sempred((NoPointerAbstractPackDeclaratorContext)_localctx, predIndex);
		case 155:
			return parameterDeclarationList_sempred((ParameterDeclarationListContext)_localctx, predIndex);
		case 166:
			return initializerList_sempred((InitializerListContext)_localctx, predIndex);
		case 176:
			return memberDeclaratorList_sempred((MemberDeclaratorListContext)_localctx, predIndex);
		case 178:
			return virtualSpecifierSequence_sempred((VirtualSpecifierSequenceContext)_localctx, predIndex);
		case 182:
			return baseSpecifierList_sempred((BaseSpecifierListContext)_localctx, predIndex);
		case 190:
			return memberInitializerList_sempred((MemberInitializerListContext)_localctx, predIndex);
		case 197:
			return templateParameterList_sempred((TemplateParameterListContext)_localctx, predIndex);
		case 203:
			return templateArgumentList_sempred((TemplateArgumentListContext)_localctx, predIndex);
		case 215:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u008d\u0a14\4\2\t"+
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
		"\4\u00db\t\u00db\4\u00dc\t\u00dc\4\u00dd\t\u00dd\4\u00de\t\u00de\3\2\3"+
		"\2\3\2\3\3\3\3\5\3\u01c2\n\3\3\4\3\4\3\5\3\5\5\5\u01c8\n\5\3\6\3\6\3\7"+
		"\5\7\u01cd\n\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u01da\n"+
		"\b\3\t\3\t\5\t\u01de\n\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\5\n\u01e9"+
		"\n\n\3\13\3\13\5\13\u01ed\n\13\3\13\3\13\3\f\3\f\5\f\u01f3\n\f\3\f\3\f"+
		"\3\f\5\f\u01f8\n\f\3\f\3\f\3\f\5\f\u01fd\n\f\5\f\u01ff\n\f\3\r\3\r\3\r"+
		"\5\r\u0204\n\r\3\r\5\r\u0207\n\r\3\r\3\r\3\r\5\r\u020c\n\r\5\r\u020e\n"+
		"\r\3\16\3\16\5\16\u0212\n\16\3\16\3\16\3\17\3\17\5\17\u0218\n\17\3\17"+
		"\3\17\3\20\3\20\3\20\3\20\5\20\u0220\n\20\3\20\5\20\u0223\n\20\3\20\5"+
		"\20\u0226\n\20\3\20\5\20\u0229\n\20\3\21\3\21\3\21\3\21\3\21\3\21\5\21"+
		"\u0231\n\21\3\22\3\22\3\23\3\23\3\23\5\23\u0238\n\23\3\23\3\23\3\23\3"+
		"\23\5\23\u023e\n\23\7\23\u0240\n\23\f\23\16\23\u0243\13\23\3\24\3\24\3"+
		"\24\3\25\5\25\u0249\n\25\3\25\3\25\3\25\3\25\5\25\u024f\n\25\3\26\5\26"+
		"\u0252\n\26\3\26\3\26\3\26\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27"+
		"\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\3\27\5\27\u026b\n\27"+
		"\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30"+
		"\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30"+
		"\3\30\3\30\3\30\3\30\5\30\u028d\n\30\3\31\3\31\3\31\5\31\u0292\n\31\3"+
		"\31\3\31\3\32\3\32\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\33\3\34\3\34\3"+
		"\35\3\35\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\3\36\5\36\u02ae"+
		"\n\36\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\5\37\u02bb"+
		"\n\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\5\37\u02c5\n\37\3\37\3\37"+
		"\3\37\3\37\5\37\u02cb\n\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\7\37"+
		"\u02d5\n\37\f\37\16\37\u02d8\13\37\3 \3 \3!\5!\u02dd\n!\3!\3!\3!\3!\3"+
		"!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\3!\5!\u02ef\n!\3\"\3\"\3\"\3\"\3\"\3\""+
		"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3"+
		"\"\3\"\3\"\3\"\3\"\5\"\u030d\n\"\3#\3#\3$\5$\u0312\n$\3$\3$\5$\u0316\n"+
		"$\3$\3$\5$\u031a\n$\3$\5$\u031d\n$\3$\3$\5$\u0321\n$\3$\3$\3$\3$\5$\u0327"+
		"\n$\5$\u0329\n$\3%\3%\3%\3%\3&\3&\5&\u0331\n&\3\'\3\'\5\'\u0335\n\'\3"+
		"\'\3\'\3(\3(\3(\3(\3(\5(\u033e\n(\3(\3(\3(\3(\3(\5(\u0345\n(\7(\u0347"+
		"\n(\f(\16(\u034a\13(\3)\3)\5)\u034e\n)\3)\3)\5)\u0352\n)\3*\5*\u0355\n"+
		"*\3*\3*\3*\5*\u035a\n*\3*\3*\3*\3*\5*\u0360\n*\3+\3+\3+\3+\3+\3,\3,\3"+
		",\3,\3,\3,\5,\u036d\n,\3-\3-\3-\3-\3-\3-\3-\3-\3-\7-\u0378\n-\f-\16-\u037b"+
		"\13-\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\3.\7.\u0389\n.\f.\16.\u038c\13."+
		"\3/\3/\3/\3/\3/\3/\3/\3/\3/\7/\u0397\n/\f/\16/\u039a\13/\3\60\3\60\3\60"+
		"\3\60\3\60\3\60\3\60\3\60\3\60\3\60\7\60\u03a6\n\60\f\60\16\60\u03a9\13"+
		"\60\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\7\61\u03ba\n\61\f\61\16\61\u03bd\13\61\3\62\3\62\3\62\3\62\3"+
		"\62\3\62\3\62\3\62\3\62\7\62\u03c8\n\62\f\62\16\62\u03cb\13\62\3\63\3"+
		"\63\3\63\3\63\3\63\3\63\7\63\u03d3\n\63\f\63\16\63\u03d6\13\63\3\64\3"+
		"\64\3\64\3\64\3\64\3\64\7\64\u03de\n\64\f\64\16\64\u03e1\13\64\3\65\3"+
		"\65\3\65\3\65\3\65\3\65\7\65\u03e9\n\65\f\65\16\65\u03ec\13\65\3\66\3"+
		"\66\3\66\3\66\3\66\3\66\7\66\u03f4\n\66\f\66\16\66\u03f7\13\66\3\67\3"+
		"\67\3\67\3\67\3\67\3\67\7\67\u03ff\n\67\f\67\16\67\u0402\13\67\38\38\3"+
		"8\38\38\38\38\58\u040b\n8\39\39\59\u040f\n9\3:\3:\3:\3:\3:\3:\5:\u0417"+
		"\n:\3;\3;\3<\3<\3<\3<\3<\3<\7<\u0421\n<\f<\16<\u0424\13<\3=\3=\3>\3>\5"+
		">\u042a\n>\3>\3>\5>\u042e\n>\3>\3>\5>\u0432\n>\3>\3>\5>\u0436\n>\3>\3"+
		">\5>\u043a\n>\3>\3>\3>\5>\u043f\n>\3>\5>\u0442\n>\3?\3?\5?\u0446\n?\3"+
		"@\3@\5@\u044a\n@\3@\3@\3@\3@\5@\u0450\n@\3A\5A\u0453\nA\3A\3A\3A\3A\5"+
		"A\u0459\nA\3A\3A\3A\3A\3A\3A\5A\u0461\nA\3A\3A\3A\5A\u0466\nA\3B\5B\u0469"+
		"\nB\3B\3B\3C\3C\5C\u046f\nC\3C\3C\3D\3D\3D\3D\3D\7D\u0478\nD\fD\16D\u047b"+
		"\13D\3E\3E\5E\u047f\nE\3E\3E\5E\u0483\nE\3E\3E\3E\3E\3E\3E\5E\u048b\n"+
		"E\3E\3E\5E\u048f\nE\3E\3E\3E\3E\3E\3E\3E\3E\3E\5E\u049a\nE\3E\3E\3E\3"+
		"E\5E\u04a0\nE\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\5"+
		"F\u04b4\nF\3F\3F\5F\u04b8\nF\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\3F\5F\u04c5"+
		"\nF\3G\5G\u04c8\nG\3G\3G\3G\3G\5G\u04ce\nG\3G\3G\5G\u04d2\nG\3G\3G\3G"+
		"\3G\5G\u04d8\nG\3H\5H\u04db\nH\3H\3H\3H\3I\3I\3J\3J\3J\3J\3J\3J\5J\u04e8"+
		"\nJ\3J\3J\3J\3J\5J\u04ee\nJ\3K\3K\3L\3L\3L\3L\3L\7L\u04f7\nL\fL\16L\u04fa"+
		"\13L\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\3M\5M\u0507\nM\3N\3N\3N\3N\3N\3N\3"+
		"N\3N\5N\u0511\nN\3O\5O\u0514\nO\3O\3O\3O\3P\3P\3P\5P\u051c\nP\3P\3P\3"+
		"P\3P\3Q\3Q\5Q\u0524\nQ\3Q\3Q\3Q\3Q\3Q\3Q\3Q\3Q\5Q\u052e\nQ\3Q\3Q\5Q\u0532"+
		"\nQ\3Q\3Q\3Q\3Q\3Q\3Q\5Q\u053a\nQ\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R\3R"+
		"\3R\3R\5R\u054a\nR\3S\3S\3T\3T\3T\3U\3U\3U\3U\3U\3U\3U\5U\u0558\nU\3V"+
		"\5V\u055b\nV\3V\3V\5V\u055f\nV\3V\5V\u0562\nV\3W\3W\3X\3X\3Y\3Y\5Y\u056a"+
		"\nY\3Z\3Z\3[\3[\3\\\3\\\3\\\5\\\u0573\n\\\3]\5]\u0576\n]\3]\3]\5]\u057a"+
		"\n]\3^\3^\3^\5^\u057f\n^\3_\3_\5_\u0583\n_\3_\3_\3_\5_\u0588\n_\3`\5`"+
		"\u058b\n`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\3`\5`\u059e"+
		"\n`\3a\3a\5a\u05a2\na\3b\3b\3b\3b\3b\3b\3b\3b\3b\5b\u05ad\nb\3c\3c\5c"+
		"\u05b1\nc\3c\5c\u05b4\nc\3c\3c\3c\3c\3c\3c\3c\3c\5c\u05be\nc\3c\3c\3c"+
		"\3c\5c\u05c4\nc\3c\5c\u05c7\nc\3d\3d\3d\5d\u05cc\nd\3d\3d\3d\3d\3d\3d"+
		"\3d\3d\5d\u05d6\nd\3e\3e\5e\u05da\ne\3e\5e\u05dd\ne\3e\5e\u05e0\ne\3f"+
		"\5f\u05e3\nf\3f\3f\3g\3g\5g\u05e9\ng\3g\5g\u05ec\ng\3g\3g\5g\u05f0\ng"+
		"\3g\3g\3h\3h\3h\3h\3h\5h\u05f9\nh\3i\3i\3i\3j\3j\3j\3j\3j\3j\7j\u0604"+
		"\nj\fj\16j\u0607\13j\3k\3k\3k\3k\3k\5k\u060e\nk\3l\3l\5l\u0612\nl\3m\3"+
		"m\3m\5m\u0617\nm\3n\5n\u061a\nn\3n\3n\5n\u061e\nn\3n\3n\3n\3n\3n\3o\5"+
		"o\u0626\no\3o\3o\5o\u062a\no\3o\3o\3o\3o\3p\3p\3p\3p\3p\3p\3p\3p\3q\3"+
		"q\3q\3q\3q\3q\7q\u063e\nq\fq\16q\u0641\13q\3r\5r\u0644\nr\3s\3s\3s\3s"+
		"\3s\3s\3t\5t\u064d\nt\3t\3t\3u\3u\3u\3u\3v\3v\3v\5v\u0658\nv\3v\3v\3v"+
		"\3v\5v\u065e\nv\7v\u0660\nv\fv\16v\u0663\13v\3w\5w\u0666\nw\3w\3w\3w\3"+
		"x\5x\u066c\nx\3x\3x\3x\5x\u0671\nx\3x\3x\3x\3y\5y\u0677\ny\3y\3y\3y\3"+
		"y\3y\3y\3z\3z\3z\3z\5z\u0683\nz\3z\3z\3z\3z\5z\u0689\nz\3{\3{\3{\3{\3"+
		"{\7{\u0690\n{\f{\16{\u0693\13{\3|\3|\3|\5|\u0698\n|\3|\3|\3|\3|\3|\5|"+
		"\u069f\n|\3}\3}\3}\3}\5}\u06a5\n}\3}\3}\3}\3}\3}\3}\5}\u06ad\n}\3}\3}"+
		"\5}\u06b1\n}\3~\3~\3~\3~\3\177\3\177\5\177\u06b9\n\177\3\177\3\177\3\177"+
		"\5\177\u06be\n\177\3\177\3\177\3\177\5\177\u06c3\n\177\3\177\3\177\3\177"+
		"\3\177\3\177\7\177\u06ca\n\177\f\177\16\177\u06cd\13\177\3\u0080\3\u0080"+
		"\5\u0080\u06d1\n\u0080\3\u0081\3\u0081\5\u0081\u06d5\n\u0081\3\u0082\3"+
		"\u0082\3\u0082\3\u0082\3\u0083\3\u0083\3\u0084\3\u0084\5\u0084\u06df\n"+
		"\u0084\3\u0084\3\u0084\3\u0085\3\u0085\3\u0085\3\u0085\3\u0085\7\u0085"+
		"\u06e8\n\u0085\f\u0085\16\u0085\u06eb\13\u0085\3\u0086\3\u0086\5\u0086"+
		"\u06ef\n\u0086\3\u0086\3\u0086\3\u0086\5\u0086\u06f4\n\u0086\3\u0086\3"+
		"\u0086\3\u0086\5\u0086\u06f9\n\u0086\3\u0086\3\u0086\5\u0086\u06fd\n\u0086"+
		"\3\u0087\3\u0087\3\u0088\3\u0088\3\u0088\3\u0088\3\u0088\3\u0088\7\u0088"+
		"\u0707\n\u0088\f\u0088\16\u0088\u070a\13\u0088\3\u0089\3\u0089\5\u0089"+
		"\u070e\n\u0089\3\u008a\3\u008a\5\u008a\u0712\n\u008a\3\u008b\3\u008b\3"+
		"\u008b\3\u008c\3\u008c\5\u008c\u0719\n\u008c\3\u008c\3\u008c\5\u008c\u071d"+
		"\n\u008c\3\u008c\3\u008c\3\u008c\3\u008c\5\u008c\u0723\n\u008c\3\u008c"+
		"\3\u008c\3\u008c\5\u008c\u0728\n\u008c\3\u008c\3\u008c\5\u008c\u072c\n"+
		"\u008c\3\u008c\3\u008c\7\u008c\u0730\n\u008c\f\u008c\16\u008c\u0733\13"+
		"\u008c\3\u008d\3\u008d\3\u008d\3\u008e\3\u008e\3\u008e\3\u008e\3\u008f"+
		"\5\u008f\u073d\n\u008f\3\u008f\5\u008f\u0740\n\u008f\3\u008f\5\u008f\u0743"+
		"\n\u008f\3\u008f\5\u008f\u0746\n\u008f\3\u0090\3\u0090\3\u0090\3\u0091"+
		"\3\u0091\5\u0091\u074d\n\u0091\3\u0091\5\u0091\u0750\n\u0091\3\u0091\3"+
		"\u0091\5\u0091\u0754\n\u0091\3\u0091\3\u0091\5\u0091\u0758\n\u0091\3\u0091"+
		"\3\u0091\3\u0091\5\u0091\u075d\n\u0091\3\u0091\5\u0091\u0760\n\u0091\5"+
		"\u0091\u0762\n\u0091\3\u0092\3\u0092\5\u0092\u0766\n\u0092\3\u0093\3\u0093"+
		"\3\u0094\3\u0094\3\u0094\3\u0095\3\u0095\5\u0095\u076f\n\u0095\3\u0096"+
		"\3\u0096\5\u0096\u0773\n\u0096\3\u0097\3\u0097\5\u0097\u0777\n\u0097\3"+
		"\u0097\3\u0097\3\u0097\3\u0097\5\u0097\u077d\n\u0097\3\u0098\3\u0098\3"+
		"\u0098\5\u0098\u0782\n\u0098\5\u0098\u0784\n\u0098\3\u0099\3\u0099\3\u0099"+
		"\3\u0099\5\u0099\u078a\n\u0099\3\u0099\3\u0099\5\u0099\u078e\n\u0099\3"+
		"\u0099\3\u0099\3\u0099\3\u0099\5\u0099\u0794\n\u0099\3\u0099\3\u0099\3"+
		"\u0099\3\u0099\3\u0099\5\u0099\u079b\n\u0099\3\u0099\3\u0099\5\u0099\u079f"+
		"\n\u0099\7\u0099\u07a1\n\u0099\f\u0099\16\u0099\u07a4\13\u0099\3\u009a"+
		"\3\u009a\3\u009a\3\u009a\5\u009a\u07aa\n\u009a\3\u009b\3\u009b\3\u009b"+
		"\3\u009b\3\u009b\3\u009b\3\u009b\3\u009b\5\u009b\u07b4\n\u009b\3\u009b"+
		"\3\u009b\5\u009b\u07b8\n\u009b\7\u009b\u07ba\n\u009b\f\u009b\16\u009b"+
		"\u07bd\13\u009b\3\u009c\5\u009c\u07c0\n\u009c\3\u009c\5\u009c\u07c3\n"+
		"\u009c\3\u009c\3\u009c\3\u009c\3\u009c\5\u009c\u07c9\n\u009c\3\u009d\3"+
		"\u009d\3\u009d\3\u009d\3\u009d\3\u009d\7\u009d\u07d1\n\u009d\f\u009d\16"+
		"\u009d\u07d4\13\u009d\3\u009e\5\u009e\u07d7\n\u009e\3\u009e\3\u009e\3"+
		"\u009e\3\u009e\5\u009e\u07dd\n\u009e\3\u009e\3\u009e\3\u009e\3\u009e\3"+
		"\u009e\5\u009e\u07e4\n\u009e\3\u009f\5\u009f\u07e7\n\u009f\3\u009f\5\u009f"+
		"\u07ea\n\u009f\3\u009f\3\u009f\5\u009f\u07ee\n\u009f\3\u009f\3\u009f\3"+
		"\u00a0\3\u00a0\3\u00a0\3\u00a0\5\u00a0\u07f6\n\u00a0\3\u00a1\3\u00a1\3"+
		"\u00a1\3\u00a1\5\u00a1\u07fc\n\u00a1\3\u00a2\5\u00a2\u07ff\n\u00a2\3\u00a2"+
		"\3\u00a2\3\u00a3\3\u00a3\3\u00a3\3\u00a3\3\u00a4\3\u00a4\3\u00a4\3\u00a4"+
		"\3\u00a5\3\u00a5\3\u00a6\3\u00a6\3\u00a6\5\u00a6\u0810\n\u00a6\3\u00a7"+
		"\3\u00a7\5\u00a7\u0814\n\u00a7\3\u00a8\3\u00a8\3\u00a8\5\u00a8\u0819\n"+
		"\u00a8\3\u00a8\3\u00a8\3\u00a8\3\u00a8\5\u00a8\u081f\n\u00a8\7\u00a8\u0821"+
		"\n\u00a8\f\u00a8\16\u00a8\u0824\13\u00a8\3\u00a9\3\u00a9\3\u00a9\5\u00a9"+
		"\u0829\n\u00a9\3\u00a9\3\u00a9\3\u00a9\3\u00a9\5\u00a9\u082f\n\u00a9\3"+
		"\u00aa\3\u00aa\5\u00aa\u0833\n\u00aa\3\u00ab\3\u00ab\3\u00ab\5\u00ab\u0838"+
		"\n\u00ab\3\u00ab\3\u00ab\3\u00ac\3\u00ac\5\u00ac\u083e\n\u00ac\3\u00ac"+
		"\3\u00ac\5\u00ac\u0842\n\u00ac\3\u00ac\5\u00ac\u0845\n\u00ac\3\u00ac\3"+
		"\u00ac\5\u00ac\u0849\n\u00ac\3\u00ac\5\u00ac\u084c\n\u00ac\5\u00ac\u084e"+
		"\n\u00ac\3\u00ad\5\u00ad\u0851\n\u00ad\3\u00ad\3\u00ad\3\u00ae\3\u00ae"+
		"\3\u00af\3\u00af\3\u00b0\3\u00b0\5\u00b0\u085b\n\u00b0\3\u00b0\3\u00b0"+
		"\3\u00b0\5\u00b0\u0860\n\u00b0\5\u00b0\u0862\n\u00b0\3\u00b1\5\u00b1\u0865"+
		"\n\u00b1\3\u00b1\3\u00b1\3\u00b1\3\u00b1\3\u00b1\3\u00b1\3\u00b1\3\u00b1"+
		"\3\u00b1\3\u00b1\3\u00b1\5\u00b1\u0872\n\u00b1\3\u00b2\3\u00b2\3\u00b2"+
		"\3\u00b2\3\u00b2\3\u00b2\7\u00b2\u087a\n\u00b2\f\u00b2\16\u00b2\u087d"+
		"\13\u00b2\3\u00b3\3\u00b3\5\u00b3\u0881\n\u00b3\3\u00b3\3\u00b3\3\u00b3"+
		"\3\u00b3\5\u00b3\u0887\n\u00b3\3\u00b3\5\u00b3\u088a\n\u00b3\3\u00b3\3"+
		"\u00b3\5\u00b3\u088e\n\u00b3\3\u00b4\3\u00b4\3\u00b4\3\u00b4\3\u00b4\7"+
		"\u00b4\u0895\n\u00b4\f\u00b4\16\u00b4\u0898\13\u00b4\3\u00b5\3\u00b5\3"+
		"\u00b6\3\u00b6\3\u00b6\3\u00b7\3\u00b7\3\u00b7\3\u00b8\3\u00b8\3\u00b8"+
		"\5\u00b8\u08a5\n\u00b8\3\u00b8\3\u00b8\3\u00b8\3\u00b8\5\u00b8\u08ab\n"+
		"\u00b8\7\u00b8\u08ad\n\u00b8\f\u00b8\16\u00b8\u08b0\13\u00b8\3\u00b9\5"+
		"\u00b9\u08b3\n\u00b9\3\u00b9\3\u00b9\5\u00b9\u08b7\n\u00b9\3\u00b9\3\u00b9"+
		"\5\u00b9\u08bb\n\u00b9\3\u00b9\3\u00b9\5\u00b9\u08bf\n\u00b9\3\u00b9\3"+
		"\u00b9\5\u00b9\u08c3\n\u00b9\3\u00b9\3\u00b9\5\u00b9\u08c7\n\u00b9\3\u00ba"+
		"\5\u00ba\u08ca\n\u00ba\3\u00ba\3\u00ba\3\u00ba\3\u00ba\3\u00ba\3\u00ba"+
		"\5\u00ba\u08d2\n\u00ba\3\u00bb\3\u00bb\3\u00bc\3\u00bc\3\u00bc\3\u00bd"+
		"\3\u00bd\5\u00bd\u08db\n\u00bd\3\u00be\3\u00be\5\u00be\u08df\n\u00be\3"+
		"\u00bf\3\u00bf\3\u00bf\3\u00c0\3\u00c0\3\u00c0\5\u00c0\u08e7\n\u00c0\3"+
		"\u00c0\3\u00c0\3\u00c0\3\u00c0\5\u00c0\u08ed\n\u00c0\7\u00c0\u08ef\n\u00c0"+
		"\f\u00c0\16\u00c0\u08f2\13\u00c0\3\u00c1\3\u00c1\3\u00c1\5\u00c1\u08f7"+
		"\n\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\3\u00c1\5\u00c1\u08fe\n\u00c1"+
		"\3\u00c2\3\u00c2\3\u00c3\3\u00c3\3\u00c3\3\u00c4\3\u00c4\3\u00c4\3\u00c4"+
		"\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4"+
		"\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4"+
		"\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4"+
		"\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4"+
		"\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\3\u00c4\5\u00c4"+
		"\u0935\n\u00c4\3\u00c5\3\u00c5\3\u00c5\3\u00c5\3\u00c5\5\u00c5\u093c\n"+
		"\u00c5\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c6\3\u00c7\3\u00c7"+
		"\3\u00c7\3\u00c7\3\u00c7\3\u00c7\7\u00c7\u094a\n\u00c7\f\u00c7\16\u00c7"+
		"\u094d\13\u00c7\3\u00c8\3\u00c8\5\u00c8\u0951\n\u00c8\3\u00c9\3\u00c9"+
		"\5\u00c9\u0955\n\u00c9\3\u00c9\5\u00c9\u0958\n\u00c9\3\u00c9\3\u00c9\5"+
		"\u00c9\u095c\n\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9\3"+
		"\u00c9\3\u00c9\3\u00c9\5\u00c9\u0967\n\u00c9\3\u00c9\5\u00c9\u096a\n\u00c9"+
		"\3\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9\3\u00c9\5\u00c9\u0972\n\u00c9"+
		"\3\u00c9\3\u00c9\3\u00c9\5\u00c9\u0977\n\u00c9\3\u00ca\3\u00ca\3\u00cb"+
		"\3\u00cb\3\u00cb\5\u00cb\u097e\n\u00cb\3\u00cb\3\u00cb\3\u00cc\3\u00cc"+
		"\3\u00cc\3\u00cc\5\u00cc\u0986\n\u00cc\3\u00cc\3\u00cc\3\u00cc\3\u00cc"+
		"\3\u00cc\5\u00cc\u098d\n\u00cc\3\u00cc\3\u00cc\5\u00cc\u0991\n\u00cc\3"+
		"\u00cd\3\u00cd\3\u00cd\5\u00cd\u0996\n\u00cd\3\u00cd\3\u00cd\3\u00cd\3"+
		"\u00cd\5\u00cd\u099c\n\u00cd\7\u00cd\u099e\n\u00cd\f\u00cd\16\u00cd\u09a1"+
		"\13\u00cd\3\u00ce\3\u00ce\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf\3\u00cf"+
		"\3\u00cf\5\u00cf\u09ac\n\u00cf\3\u00cf\3\u00cf\5\u00cf\u09b0\n\u00cf\3"+
		"\u00d0\5\u00d0\u09b3\n\u00d0\3\u00d0\3\u00d0\3\u00d0\3\u00d1\3\u00d1\3"+
		"\u00d1\3\u00d1\3\u00d1\3\u00d2\5\u00d2\u09be\n\u00d2\3\u00d2\3\u00d2\3"+
		"\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d2\3\u00d3\3\u00d3\3\u00d3"+
		"\3\u00d3\3\u00d4\3\u00d4\5\u00d4\u09ce\n\u00d4\3\u00d4\3\u00d4\3\u00d4"+
		"\3\u00d5\3\u00d5\5\u00d5\u09d5\n\u00d5\3\u00d6\3\u00d6\3\u00d6\3\u00d6"+
		"\3\u00d6\3\u00d6\3\u00d7\5\u00d7\u09de\n\u00d7\3\u00d7\3\u00d7\3\u00d7"+
		"\3\u00d7\5\u00d7\u09e4\n\u00d7\3\u00d7\3\u00d7\5\u00d7\u09e8\n\u00d7\3"+
		"\u00d7\5\u00d7\u09eb\n\u00d7\3\u00d8\3\u00d8\3\u00d8\3\u00d8\3\u00d8\3"+
		"\u00d8\3\u00d8\3\u00d8\3\u00d8\5\u00d8\u09f6\n\u00d8\3\u00d9\3\u00d9\3"+
		"\u00d9\3\u00d9\3\u00d9\3\u00d9\7\u00d9\u09fe\n\u00d9\f\u00d9\16\u00d9"+
		"\u0a01\13\u00d9\3\u00da\3\u00da\3\u00da\3\u00da\3\u00da\3\u00da\3\u00da"+
		"\5\u00da\u0a0a\n\u00da\3\u00db\3\u00db\3\u00dc\3\u00dc\3\u00dd\3\u00dd"+
		"\3\u00de\3\u00de\3\u00de\2&$<NXZ\\^`bdfhjlv\u0086\u0096\u00d2\u00e0\u00ea"+
		"\u00f4\u00fc\u0108\u010e\u0116\u0130\u0134\u0138\u014e\u0162\u0166\u016e"+
		"\u017e\u018c\u0198\u01b0\u00df\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36"+
		" \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^`bdfhjlnprtvxz|~\u0080\u0082"+
		"\u0084\u0086\u0088\u008a\u008c\u008e\u0090\u0092\u0094\u0096\u0098\u009a"+
		"\u009c\u009e\u00a0\u00a2\u00a4\u00a6\u00a8\u00aa\u00ac\u00ae\u00b0\u00b2"+
		"\u00b4\u00b6\u00b8\u00ba\u00bc\u00be\u00c0\u00c2\u00c4\u00c6\u00c8\u00ca"+
		"\u00cc\u00ce\u00d0\u00d2\u00d4\u00d6\u00d8\u00da\u00dc\u00de\u00e0\u00e2"+
		"\u00e4\u00e6\u00e8\u00ea\u00ec\u00ee\u00f0\u00f2\u00f4\u00f6\u00f8\u00fa"+
		"\u00fc\u00fe\u0100\u0102\u0104\u0106\u0108\u010a\u010c\u010e\u0110\u0112"+
		"\u0114\u0116\u0118\u011a\u011c\u011e\u0120\u0122\u0124\u0126\u0128\u012a"+
		"\u012c\u012e\u0130\u0132\u0134\u0136\u0138\u013a\u013c\u013e\u0140\u0142"+
		"\u0144\u0146\u0148\u014a\u014c\u014e\u0150\u0152\u0154\u0156\u0158\u015a"+
		"\u015c\u015e\u0160\u0162\u0164\u0166\u0168\u016a\u016c\u016e\u0170\u0172"+
		"\u0174\u0176\u0178\u017a\u017c\u017e\u0180\u0182\u0184\u0186\u0188\u018a"+
		"\u018c\u018e\u0190\u0192\u0194\u0196\u0198\u019a\u019c\u019e\u01a0\u01a2"+
		"\u01a4\u01a6\u01a8\u01aa\u01ac\u01ae\u01b0\u01b2\u01b4\u01b6\u01b8\u01ba"+
		"\2\23\4\2ggkk\3\2\177\u0080\4\2__\u0083\u0083\6\2\27\27\36\36\67\67>>"+
		"\4\2acgj\5\2kknuwx\6\2##--<<CC\4\2!!MM\3\2TY\4\2\25\25OO\5\2\24\24??J"+
		"J\3\2RS\3\2\63\65\4\2\24\24II\3\2\u0084\u0085\4\2$$EE\3\2\u0089\u008c"+
		"\2\u0b30\2\u01bc\3\2\2\2\4\u01c1\3\2\2\2\6\u01c3\3\2\2\2\b\u01c7\3\2\2"+
		"\2\n\u01c9\3\2\2\2\f\u01cc\3\2\2\2\16\u01d9\3\2\2\2\20\u01dd\3\2\2\2\22"+
		"\u01e8\3\2\2\2\24\u01ea\3\2\2\2\26\u01fe\3\2\2\2\30\u020d\3\2\2\2\32\u020f"+
		"\3\2\2\2\34\u0215\3\2\2\2\36\u021b\3\2\2\2 \u0230\3\2\2\2\"\u0232\3\2"+
		"\2\2$\u0234\3\2\2\2&\u0244\3\2\2\2(\u024e\3\2\2\2*\u0251\3\2\2\2,\u026a"+
		"\3\2\2\2.\u028c\3\2\2\2\60\u028e\3\2\2\2\62\u0295\3\2\2\2\64\u0297\3\2"+
		"\2\2\66\u029f\3\2\2\28\u02a1\3\2\2\2:\u02ad\3\2\2\2<\u02ba\3\2\2\2>\u02d9"+
		"\3\2\2\2@\u02ee\3\2\2\2B\u030c\3\2\2\2D\u030e\3\2\2\2F\u0328\3\2\2\2H"+
		"\u032a\3\2\2\2J\u032e\3\2\2\2L\u0332\3\2\2\2N\u0338\3\2\2\2P\u0351\3\2"+
		"\2\2R\u035f\3\2\2\2T\u0361\3\2\2\2V\u036c\3\2\2\2X\u036e\3\2\2\2Z\u037c"+
		"\3\2\2\2\\\u038d\3\2\2\2^\u039b\3\2\2\2`\u03aa\3\2\2\2b\u03be\3\2\2\2"+
		"d\u03cc\3\2\2\2f\u03d7\3\2\2\2h\u03e2\3\2\2\2j\u03ed\3\2\2\2l\u03f8\3"+
		"\2\2\2n\u040a\3\2\2\2p\u040c\3\2\2\2r\u0416\3\2\2\2t\u0418\3\2\2\2v\u041a"+
		"\3\2\2\2x\u0425\3\2\2\2z\u0441\3\2\2\2|\u0445\3\2\2\2~\u044f\3\2\2\2\u0080"+
		"\u0465\3\2\2\2\u0082\u0468\3\2\2\2\u0084\u046c\3\2\2\2\u0086\u0472\3\2"+
		"\2\2\u0088\u049f\3\2\2\2\u008a\u04c4\3\2\2\2\u008c\u04d7\3\2\2\2\u008e"+
		"\u04da\3\2\2\2\u0090\u04df\3\2\2\2\u0092\u04ed\3\2\2\2\u0094\u04ef\3\2"+
		"\2\2\u0096\u04f1\3\2\2\2\u0098\u0506\3\2\2\2\u009a\u0510\3\2\2\2\u009c"+
		"\u0513\3\2\2\2\u009e\u0518\3\2\2\2\u00a0\u0539\3\2\2\2\u00a2\u0549\3\2"+
		"\2\2\u00a4\u054b\3\2\2\2\u00a6\u054d\3\2\2\2\u00a8\u0557\3\2\2\2\u00aa"+
		"\u055a\3\2\2\2\u00ac\u0563\3\2\2\2\u00ae\u0565\3\2\2\2\u00b0\u0567\3\2"+
		"\2\2\u00b2\u056b\3\2\2\2\u00b4\u056d\3\2\2\2\u00b6\u0572\3\2\2\2\u00b8"+
		"\u0575\3\2\2\2\u00ba\u057e\3\2\2\2\u00bc\u0587\3\2\2\2\u00be\u059d\3\2"+
		"\2\2\u00c0\u05a1\3\2\2\2\u00c2\u05ac\3\2\2\2\u00c4\u05c6\3\2\2\2\u00c6"+
		"\u05d5\3\2\2\2\u00c8\u05d7\3\2\2\2\u00ca\u05e2\3\2\2\2\u00cc\u05e6\3\2"+
		"\2\2\u00ce\u05f8\3\2\2\2\u00d0\u05fa\3\2\2\2\u00d2\u05fd\3\2\2\2\u00d4"+
		"\u060d\3\2\2\2\u00d6\u060f\3\2\2\2\u00d8\u0616\3\2\2\2\u00da\u0619\3\2"+
		"\2\2\u00dc\u0625\3\2\2\2\u00de\u062f\3\2\2\2\u00e0\u0637\3\2\2\2\u00e2"+
		"\u0643\3\2\2\2\u00e4\u0645\3\2\2\2\u00e6\u064c\3\2\2\2\u00e8\u0650\3\2"+
		"\2\2\u00ea\u0654\3\2\2\2\u00ec\u0665\3\2\2\2\u00ee\u066b\3\2\2\2\u00f0"+
		"\u0676\3\2\2\2\u00f2\u0688\3\2\2\2\u00f4\u068a\3\2\2\2\u00f6\u069e\3\2"+
		"\2\2\u00f8\u06b0\3\2\2\2\u00fa\u06b2\3\2\2\2\u00fc\u06bd\3\2\2\2\u00fe"+
		"\u06ce\3\2\2\2\u0100\u06d4\3\2\2\2\u0102\u06d6\3\2\2\2\u0104\u06da\3\2"+
		"\2\2\u0106\u06dc\3\2\2\2\u0108\u06e2\3\2\2\2\u010a\u06fc\3\2\2\2\u010c"+
		"\u06fe\3\2\2\2\u010e\u0700\3\2\2\2\u0110\u070b\3\2\2\2\u0112\u0711\3\2"+
		"\2\2\u0114\u0713\3\2\2\2\u0116\u0722\3\2\2\2\u0118\u0734\3\2\2\2\u011a"+
		"\u0737\3\2\2\2\u011c\u073c\3\2\2\2\u011e\u0747\3\2\2\2\u0120\u0761\3\2"+
		"\2\2\u0122\u0763\3\2\2\2\u0124\u0767\3\2\2\2\u0126\u0769\3\2\2\2\u0128"+
		"\u076c\3\2\2\2\u012a\u0770\3\2\2\2\u012c\u077c\3\2\2\2\u012e\u0783\3\2"+
		"\2\2\u0130\u0793\3\2\2\2\u0132\u07a9\3\2\2\2\u0134\u07ab\3\2\2\2\u0136"+
		"\u07c8\3\2\2\2\u0138\u07ca\3\2\2\2\u013a\u07e3\3\2\2\2\u013c\u07e6\3\2"+
		"\2\2\u013e\u07f1\3\2\2\2\u0140\u07fb\3\2\2\2\u0142\u07fe\3\2\2\2\u0144"+
		"\u0802\3\2\2\2\u0146\u0806\3\2\2\2\u0148\u080a\3\2\2\2\u014a\u080f\3\2"+
		"\2\2\u014c\u0813\3\2\2\2\u014e\u0815\3\2\2\2\u0150\u082e\3\2\2\2\u0152"+
		"\u0832\3\2\2\2\u0154\u0834\3\2\2\2\u0156\u084d\3\2\2\2\u0158\u0850\3\2"+
		"\2\2\u015a\u0854\3\2\2\2\u015c\u0856\3\2\2\2\u015e\u0861\3\2\2\2\u0160"+
		"\u0871\3\2\2\2\u0162\u0873\3\2\2\2\u0164\u088d\3\2\2\2\u0166\u088f\3\2"+
		"\2\2\u0168\u0899\3\2\2\2\u016a\u089b\3\2\2\2\u016c\u089e\3\2\2\2\u016e"+
		"\u08a1\3\2\2\2\u0170\u08c6\3\2\2\2\u0172\u08d1\3\2\2\2\u0174\u08d3\3\2"+
		"\2\2\u0176\u08d5\3\2\2\2\u0178\u08d8\3\2\2\2\u017a\u08dc\3\2\2\2\u017c"+
		"\u08e0\3\2\2\2\u017e\u08e3\3\2\2\2\u0180\u08fd\3\2\2\2\u0182\u08ff\3\2"+
		"\2\2\u0184\u0901\3\2\2\2\u0186\u0934\3\2\2\2\u0188\u093b\3\2\2\2\u018a"+
		"\u093d\3\2\2\2\u018c\u0943\3\2\2\2\u018e\u0950\3\2\2\2\u0190\u0976\3\2"+
		"\2\2\u0192\u0978\3\2\2\2\u0194\u097a\3\2\2\2\u0196\u0990\3\2\2\2\u0198"+
		"\u0992\3\2\2\2\u019a\u09a2\3\2\2\2\u019c\u09af\3\2\2\2\u019e\u09b2\3\2"+
		"\2\2\u01a0\u09b7\3\2\2\2\u01a2\u09bd\3\2\2\2\u01a4\u09c7\3\2\2\2\u01a6"+
		"\u09cb\3\2\2\2\u01a8\u09d2\3\2\2\2\u01aa\u09d6\3\2\2\2\u01ac\u09ea\3\2"+
		"\2\2\u01ae\u09f5\3\2\2\2\u01b0\u09f7\3\2\2\2\u01b2\u0a09\3\2\2\2\u01b4"+
		"\u0a0b\3\2\2\2\u01b6\u0a0d\3\2\2\2\u01b8\u0a0f\3\2\2\2\u01ba\u0a11\3\2"+
		"\2\2\u01bc\u01bd\7m\2\2\u01bd\u01be\7m\2\2\u01be\3\3\2\2\2\u01bf\u01c2"+
		"\7\u008d\2\2\u01c0\u01c2\5\6\4\2\u01c1\u01bf\3\2\2\2\u01c1\u01c0\3\2\2"+
		"\2\u01c2\5\3\2\2\2\u01c3\u01c4\7\u008d\2\2\u01c4\7\3\2\2\2\u01c5\u01c8"+
		"\7\u008d\2\2\u01c6\u01c8\5\u0194\u00cb\2\u01c7\u01c5\3\2\2\2\u01c7\u01c6"+
		"\3\2\2\2\u01c8\t\3\2\2\2\u01c9\u01ca\7\u008d\2\2\u01ca\13\3\2\2\2\u01cb"+
		"\u01cd\5\u0096L\2\u01cc\u01cb\3\2\2\2\u01cc\u01cd\3\2\2\2\u01cd\u01ce"+
		"\3\2\2\2\u01ce\u01cf\7\2\2\3\u01cf\r\3\2\2\2\u01d0\u01da\5\u01b2\u00da"+
		"\2\u01d1\u01da\7B\2\2\u01d2\u01d3\7X\2\2\u01d3\u01d4\5v<\2\u01d4\u01d5"+
		"\7Y\2\2\u01d5\u01da\3\2\2\2\u01d6\u01da\5\20\t\2\u01d7\u01da\5\32\16\2"+
		"\u01d8\u01da\5,\27\2\u01d9\u01d0\3\2\2\2\u01d9\u01d1\3\2\2\2\u01d9\u01d2"+
		"\3\2\2\2\u01d9\u01d6\3\2\2\2\u01d9\u01d7\3\2\2\2\u01d9\u01d8\3\2\2\2\u01da"+
		"\17\3\2\2\2\u01db\u01de\5\22\n\2\u01dc\u01de\5\24\13\2\u01dd\u01db\3\2"+
		"\2\2\u01dd\u01dc\3\2\2\2\u01de\21\3\2\2\2\u01df\u01e9\7\u008d\2\2\u01e0"+
		"\u01e9\5\u0184\u00c3\2\u01e1\u01e9\5\u0176\u00bc\2\u01e2\u01e9\5\u0188"+
		"\u00c5\2\u01e3\u01e4\7i\2\2\u01e4\u01e9\5\b\5\2\u01e5\u01e6\7i\2\2\u01e6"+
		"\u01e9\5\u00c2b\2\u01e7\u01e9\5\u0196\u00cc\2\u01e8\u01df\3\2\2\2\u01e8"+
		"\u01e0\3\2\2\2\u01e8\u01e1\3\2\2\2\u01e8\u01e2\3\2\2\2\u01e8\u01e3\3\2"+
		"\2\2\u01e8\u01e5\3\2\2\2\u01e8\u01e7\3\2\2\2\u01e9\23\3\2\2\2\u01ea\u01ec"+
		"\5\26\f\2\u01eb\u01ed\7A\2\2\u01ec\u01eb\3\2\2\2\u01ec\u01ed\3\2\2\2\u01ed"+
		"\u01ee\3\2\2\2\u01ee\u01ef\5\22\n\2\u01ef\25\3\2\2\2\u01f0\u01f2\7^\2"+
		"\2\u01f1\u01f3\5\30\r\2\u01f2\u01f1\3\2\2\2\u01f2\u01f3\3\2\2\2\u01f3"+
		"\u01ff\3\2\2\2\u01f4\u01f5\7\u008d\2\2\u01f5\u01f7\7^\2\2\u01f6\u01f8"+
		"\5\30\r\2\u01f7\u01f6\3\2\2\2\u01f7\u01f8\3\2\2\2\u01f8\u01ff\3\2\2\2"+
		"\u01f9\u01fa\5\u00c2b\2\u01fa\u01fc\7^\2\2\u01fb\u01fd\5\30\r\2\u01fc"+
		"\u01fb\3\2\2\2\u01fc\u01fd\3\2\2\2\u01fd\u01ff\3\2\2\2\u01fe\u01f0\3\2"+
		"\2\2\u01fe\u01f4\3\2\2\2\u01fe\u01f9\3\2\2\2\u01ff\27\3\2\2\2\u0200\u0201"+
		"\7\u008d\2\2\u0201\u0203\7^\2\2\u0202\u0204\5\30\r\2\u0203\u0202\3\2\2"+
		"\2\u0203\u0204\3\2\2\2\u0204\u020e\3\2\2\2\u0205\u0207\7A\2\2\u0206\u0205"+
		"\3\2\2\2\u0206\u0207\3\2\2\2\u0207\u0208\3\2\2\2\u0208\u0209\5\u0194\u00cb"+
		"\2\u0209\u020b\7^\2\2\u020a\u020c\5\30\r\2\u020b\u020a\3\2\2\2\u020b\u020c"+
		"\3\2\2\2\u020c\u020e\3\2\2\2\u020d\u0200\3\2\2\2\u020d\u0206\3\2\2\2\u020e"+
		"\31\3\2\2\2\u020f\u0211\5\34\17\2\u0210\u0212\5\36\20\2\u0211\u0210\3"+
		"\2\2\2\u0211\u0212\3\2\2\2\u0212\u0213\3\2\2\2\u0213\u0214\5\u0084C\2"+
		"\u0214\33\3\2\2\2\u0215\u0217\7V\2\2\u0216\u0218\5 \21\2\u0217\u0216\3"+
		"\2\2\2\u0217\u0218\3\2\2\2\u0218\u0219\3\2\2\2\u0219\u021a\7W\2\2\u021a"+
		"\35\3\2\2\2\u021b\u021c\7X\2\2\u021c\u021d\5\u0136\u009c\2\u021d\u021f"+
		"\7Y\2\2\u021e\u0220\5\u00aaV\2\u021f\u021e\3\2\2\2\u021f\u0220\3\2\2\2"+
		"\u0220\u0222\3\2\2\2\u0221\u0223\5\u01ae\u00d8\2\u0222\u0221\3\2\2\2\u0222"+
		"\u0223\3\2\2\2\u0223\u0225\3\2\2\2\u0224\u0226\5\u00f4{\2\u0225\u0224"+
		"\3\2\2\2\u0225\u0226\3\2\2\2\u0226\u0228\3\2\2\2\u0227\u0229\5\u011e\u0090"+
		"\2\u0228\u0227\3\2\2\2\u0228\u0229\3\2\2\2\u0229\37\3\2\2\2\u022a\u0231"+
		"\5\"\22\2\u022b\u0231\5$\23\2\u022c\u022d\5\"\22\2\u022d\u022e\7\u0081"+
		"\2\2\u022e\u022f\5$\23\2\u022f\u0231\3\2\2\2\u0230\u022a\3\2\2\2\u0230"+
		"\u022b\3\2\2\2\u0230\u022c\3\2\2\2\u0231!\3\2\2\2\u0232\u0233\t\2\2\2"+
		"\u0233#\3\2\2\2\u0234\u0235\b\23\1\2\u0235\u0237\5&\24\2\u0236\u0238\7"+
		"\\\2\2\u0237\u0236\3\2\2\2\u0237\u0238\3\2\2\2\u0238\u0241\3\2\2\2\u0239"+
		"\u023a\f\3\2\2\u023a\u023b\7\u0081\2\2\u023b\u023d\5&\24\2\u023c\u023e"+
		"\7\\\2\2\u023d\u023c\3\2\2\2\u023d\u023e\3\2\2\2\u023e\u0240\3\2\2\2\u023f"+
		"\u0239\3\2\2\2\u0240\u0243\3\2\2\2\u0241\u023f\3\2\2\2\u0241\u0242\3\2"+
		"\2\2\u0242%\3\2\2\2\u0243\u0241\3\2\2\2\u0244\u0245\5(\25\2\u0245\u0246"+
		"\5*\26\2\u0246\'\3\2\2\2\u0247\u0249\7g\2\2\u0248\u0247\3\2\2\2\u0248"+
		"\u0249\3\2\2\2\u0249\u024a\3\2\2\2\u024a\u024f\7\u008d\2\2\u024b\u024f"+
		"\7B\2\2\u024c\u024d\7c\2\2\u024d\u024f\7B\2\2\u024e\u0248\3\2\2\2\u024e"+
		"\u024b\3\2\2\2\u024e\u024c\3\2\2\2\u024f)\3\2\2\2\u0250\u0252\7g\2\2\u0251"+
		"\u0250\3\2\2\2\u0251\u0252\3\2\2\2\u0252\u0253\3\2\2\2\u0253\u0254\7\u008d"+
		"\2\2\u0254\u0255\5\u0148\u00a5\2\u0255+\3\2\2\2\u0256\u0257\7X\2\2\u0257"+
		"\u0258\5V,\2\u0258\u0259\5.\30\2\u0259\u025a\7\\\2\2\u025a\u025b\7Y\2"+
		"\2\u025b\u026b\3\2\2\2\u025c\u025d\7X\2\2\u025d\u025e\7\\\2\2\u025e\u025f"+
		"\5.\30\2\u025f\u0260\5V,\2\u0260\u0261\7Y\2\2\u0261\u026b\3\2\2\2\u0262"+
		"\u0263\7X\2\2\u0263\u0264\5V,\2\u0264\u0265\5.\30\2\u0265\u0266\7\\\2"+
		"\2\u0266\u0267\5.\30\2\u0267\u0268\5V,\2\u0268\u0269\7Y\2\2\u0269\u026b"+
		"\3\2\2\2\u026a\u0256\3\2\2\2\u026a\u025c\3\2\2\2\u026a\u0262\3\2\2\2\u026b"+
		"-\3\2\2\2\u026c\u028d\7a\2\2\u026d\u028d\7b\2\2\u026e\u028d\7c\2\2\u026f"+
		"\u028d\7d\2\2\u0270\u028d\7e\2\2\u0271\u028d\7f\2\2\u0272\u028d\7g\2\2"+
		"\u0273\u028d\7h\2\2\u0274\u028d\7v\2\2\u0275\u028d\5\2\2\2\u0276\u028d"+
		"\7n\2\2\u0277\u028d\7o\2\2\u0278\u028d\7p\2\2\u0279\u028d\7q\2\2\u027a"+
		"\u028d\7r\2\2\u027b\u028d\7s\2\2\u027c\u028d\7t\2\2\u027d\u028d\7u\2\2"+
		"\u027e\u028d\7w\2\2\u027f\u028d\7x\2\2\u0280\u028d\7k\2\2\u0281\u028d"+
		"\7y\2\2\u0282\u028d\7z\2\2\u0283\u028d\7l\2\2\u0284\u028d\7m\2\2\u0285"+
		"\u028d\7{\2\2\u0286\u028d\7|\2\2\u0287\u028d\7}\2\2\u0288\u028d\7~\2\2"+
		"\u0289\u028d\7\u0081\2\2\u028a\u028d\7`\2\2\u028b\u028d\7\u0082\2\2\u028c"+
		"\u026c\3\2\2\2\u028c\u026d\3\2\2\2\u028c\u026e\3\2\2\2\u028c\u026f\3\2"+
		"\2\2\u028c\u0270\3\2\2\2\u028c\u0271\3\2\2\2\u028c\u0272\3\2\2\2\u028c"+
		"\u0273\3\2\2\2\u028c\u0274\3\2\2\2\u028c\u0275\3\2\2\2\u028c\u0276\3\2"+
		"\2\2\u028c\u0277\3\2\2\2\u028c\u0278\3\2\2\2\u028c\u0279\3\2\2\2\u028c"+
		"\u027a\3\2\2\2\u028c\u027b\3\2\2\2\u028c\u027c\3\2\2\2\u028c\u027d\3\2"+
		"\2\2\u028c\u027e\3\2\2\2\u028c\u027f\3\2\2\2\u028c\u0280\3\2\2\2\u028c"+
		"\u0281\3\2\2\2\u028c\u0282\3\2\2\2\u028c\u0283\3\2\2\2\u028c\u0284\3\2"+
		"\2\2\u028c\u0285\3\2\2\2\u028c\u0286\3\2\2\2\u028c\u0287\3\2\2\2\u028c"+
		"\u0288\3\2\2\2\u028c\u0289\3\2\2\2\u028c\u028a\3\2\2\2\u028c\u028b\3\2"+
		"\2\2\u028d/\3\2\2\2\u028e\u028f\5\u019c\u00cf\2\u028f\u0291\7X\2\2\u0290"+
		"\u0292\5> \2\u0291\u0290\3\2\2\2\u0291\u0292\3\2\2\2\u0292\u0293\3\2\2"+
		"\2\u0293\u0294\7Y\2\2\u0294\61\3\2\2\2\u0295\u0296\t\3\2\2\u0296\63\3"+
		"\2\2\2\u0297\u0298\58\35\2\u0298\u0299\7l\2\2\u0299\u029a\5\u0128\u0095"+
		"\2\u029a\u029b\7m\2\2\u029b\u029c\7X\2\2\u029c\u029d\5v<\2\u029d\u029e"+
		"\7Y\2\2\u029e\65\3\2\2\2\u029f\u02a0\t\4\2\2\u02a0\67\3\2\2\2\u02a1\u02a2"+
		"\t\5\2\2\u02a29\3\2\2\2\u02a3\u02a4\7H\2\2\u02a4\u02a5\7X\2\2\u02a5\u02a6"+
		"\5v<\2\u02a6\u02a7\7Y\2\2\u02a7\u02ae\3\2\2\2\u02a8\u02a9\7H\2\2\u02a9"+
		"\u02aa\7X\2\2\u02aa\u02ab\5\u0128\u0095\2\u02ab\u02ac\7Y\2\2\u02ac\u02ae"+
		"\3\2\2\2\u02ad\u02a3\3\2\2\2\u02ad\u02a8\3\2\2\2\u02ae;\3\2\2\2\u02af"+
		"\u02b0\b\37\1\2\u02b0\u02bb\5\16\b\2\u02b1\u02bb\5\60\31\2\u02b2\u02b3"+
		"\5\u00be`\2\u02b3\u02b4\5\u0150\u00a9\2\u02b4\u02bb\3\2\2\2\u02b5\u02b6"+
		"\5\u019c\u00cf\2\u02b6\u02b7\5\u0150\u00a9\2\u02b7\u02bb\3\2\2\2\u02b8"+
		"\u02bb\5\64\33\2\u02b9\u02bb\5:\36\2\u02ba\u02af\3\2\2\2\u02ba\u02b1\3"+
		"\2\2\2\u02ba\u02b2\3\2\2\2\u02ba\u02b5\3\2\2\2\u02ba\u02b8\3\2\2\2\u02ba"+
		"\u02b9\3\2\2\2\u02bb\u02d6\3\2\2\2\u02bc\u02bd\f\f\2\2\u02bd\u02be\7V"+
		"\2\2\u02be\u02bf\5\u0152\u00aa\2\u02bf\u02c0\7W\2\2\u02c0\u02d5\3\2\2"+
		"\2\u02c1\u02c2\f\13\2\2\u02c2\u02c4\7X\2\2\u02c3\u02c5\5> \2\u02c4\u02c3"+
		"\3\2\2\2\u02c4\u02c5\3\2\2\2\u02c5\u02c6\3\2\2\2\u02c6\u02d5\7Y\2\2\u02c7"+
		"\u02c8\f\7\2\2\u02c8\u02ca\5\66\34\2\u02c9\u02cb\7A\2\2\u02ca\u02c9\3"+
		"\2\2\2\u02ca\u02cb\3\2\2\2\u02cb\u02cc\3\2\2\2\u02cc\u02cd\5\20\t\2\u02cd"+
		"\u02d5\3\2\2\2\u02ce\u02cf\f\6\2\2\u02cf\u02d0\5\66\34\2\u02d0\u02d1\5"+
		"@!\2\u02d1\u02d5\3\2\2\2\u02d2\u02d3\f\5\2\2\u02d3\u02d5\5\62\32\2\u02d4"+
		"\u02bc\3\2\2\2\u02d4\u02c1\3\2\2\2\u02d4\u02c7\3\2\2\2\u02d4\u02ce\3\2"+
		"\2\2\u02d4\u02d2\3\2\2\2\u02d5\u02d8\3\2\2\2\u02d6\u02d4\3\2\2\2\u02d6"+
		"\u02d7\3\2\2\2\u02d7=\3\2\2\2\u02d8\u02d6\3\2\2\2\u02d9\u02da\5\u014e"+
		"\u00a8\2\u02da?\3\2\2\2\u02db\u02dd\5\26\f\2\u02dc\u02db\3\2\2\2\u02dc"+
		"\u02dd\3\2\2\2\u02dd\u02de\3\2\2\2\u02de\u02df\5\u00c0a\2\u02df\u02e0"+
		"\7^\2\2\u02e0\u02e1\7i\2\2\u02e1\u02e2\5\u00c0a\2\u02e2\u02ef\3\2\2\2"+
		"\u02e3\u02e4\5\26\f\2\u02e4\u02e5\7A\2\2\u02e5\u02e6\5\u0194\u00cb\2\u02e6"+
		"\u02e7\7^\2\2\u02e7\u02e8\7i\2\2\u02e8\u02e9\5\u00c0a\2\u02e9\u02ef\3"+
		"\2\2\2\u02ea\u02eb\7i\2\2\u02eb\u02ef\5\u00c0a\2\u02ec\u02ed\7i\2\2\u02ed"+
		"\u02ef\5\u00c2b\2\u02ee\u02dc\3\2\2\2\u02ee\u02e3\3\2\2\2\u02ee\u02ea"+
		"\3\2\2\2\u02ee\u02ec\3\2\2\2\u02efA\3\2\2\2\u02f0\u030d\5<\37\2\u02f1"+
		"\u02f2\7\177\2\2\u02f2\u030d\5V,\2\u02f3\u02f4\7\u0080\2\2\u02f4\u030d"+
		"\5V,\2\u02f5\u02f6\5D#\2\u02f6\u02f7\5V,\2\u02f7\u030d\3\2\2\2\u02f8\u02f9"+
		"\7;\2\2\u02f9\u030d\5B\"\2\u02fa\u02fb\7;\2\2\u02fb\u02fc\7X\2\2\u02fc"+
		"\u02fd\5\u0128\u0095\2\u02fd\u02fe\7Y\2\2\u02fe\u030d\3\2\2\2\u02ff\u0300"+
		"\7;\2\2\u0300\u0301\7\\\2\2\u0301\u0302\7X\2\2\u0302\u0303\7\u008d\2\2"+
		"\u0303\u030d\7Y\2\2\u0304\u0305\7\t\2\2\u0305\u0306\7X\2\2\u0306\u0307"+
		"\5\u0128\u0095\2\u0307\u0308\7Y\2\2\u0308\u030d\3\2\2\2\u0309\u030d\5"+
		"T+\2\u030a\u030d\5F$\2\u030b\u030d\5R*\2\u030c\u02f0\3\2\2\2\u030c\u02f1"+
		"\3\2\2\2\u030c\u02f3\3\2\2\2\u030c\u02f5\3\2\2\2\u030c\u02f8\3\2\2\2\u030c"+
		"\u02fa\3\2\2\2\u030c\u02ff\3\2\2\2\u030c\u0304\3\2\2\2\u030c\u0309\3\2"+
		"\2\2\u030c\u030a\3\2\2\2\u030c\u030b\3\2\2\2\u030dC\3\2\2\2\u030e\u030f"+
		"\t\6\2\2\u030fE\3\2\2\2\u0310\u0312\7^\2\2\u0311\u0310\3\2\2\2\u0311\u0312"+
		"\3\2\2\2\u0312\u0313\3\2\2\2\u0313\u0315\7/\2\2\u0314\u0316\5H%\2\u0315"+
		"\u0314\3\2\2\2\u0315\u0316\3\2\2\2\u0316\u0317\3\2\2\2\u0317\u0319\5J"+
		"&\2\u0318\u031a\5P)\2\u0319\u0318\3\2\2\2\u0319\u031a\3\2\2\2\u031a\u0329"+
		"\3\2\2\2\u031b\u031d\7^\2\2\u031c\u031b\3\2\2\2\u031c\u031d\3\2\2\2\u031d"+
		"\u031e\3\2\2\2\u031e\u0320\7/\2\2\u031f\u0321\5H%\2\u0320\u031f\3\2\2"+
		"\2\u0320\u0321\3\2\2\2\u0321\u0322\3\2\2\2\u0322\u0323\7X\2\2\u0323\u0324"+
		"\5\u0128\u0095\2\u0324\u0326\7Y\2\2\u0325\u0327\5P)\2\u0326\u0325\3\2"+
		"\2\2\u0326\u0327\3\2\2\2\u0327\u0329\3\2\2\2\u0328\u0311\3\2\2\2\u0328"+
		"\u031c\3\2\2\2\u0329G\3\2\2\2\u032a\u032b\7X\2\2\u032b\u032c\5> \2\u032c"+
		"\u032d\7Y\2\2\u032dI\3\2\2\2\u032e\u0330\5\u00b8]\2\u032f\u0331\5L\'\2"+
		"\u0330\u032f\3\2\2\2\u0330\u0331\3\2\2\2\u0331K\3\2\2\2\u0332\u0334\5"+
		"\u0120\u0091\2\u0333\u0335\5L\'\2\u0334\u0333\3\2\2\2\u0334\u0335\3\2"+
		"\2\2\u0335\u0336\3\2\2\2\u0336\u0337\5N(\2\u0337M\3\2\2\2\u0338\u0339"+
		"\b(\1\2\u0339\u033a\7V\2\2\u033a\u033b\5v<\2\u033b\u033d\7W\2\2\u033c"+
		"\u033e\5\u00f4{\2\u033d\u033c\3\2\2\2\u033d\u033e\3\2\2\2\u033e\u0348"+
		"\3\2\2\2\u033f\u0340\f\3\2\2\u0340\u0341\7V\2\2\u0341\u0342\5x=\2\u0342"+
		"\u0344\7W\2\2\u0343\u0345\5\u00f4{\2\u0344\u0343\3\2\2\2\u0344\u0345\3"+
		"\2\2\2\u0345\u0347\3\2\2\2\u0346\u033f\3\2\2\2\u0347\u034a\3\2\2\2\u0348"+
		"\u0346\3\2\2\2\u0348\u0349\3\2\2\2\u0349O\3\2\2\2\u034a\u0348\3\2\2\2"+
		"\u034b\u034d\7X\2\2\u034c\u034e\5> \2\u034d\u034c\3\2\2\2\u034d\u034e"+
		"\3\2\2\2\u034e\u034f\3\2\2\2\u034f\u0352\7Y\2\2\u0350\u0352\5\u0150\u00a9"+
		"\2\u0351\u034b\3\2\2\2\u0351\u0350\3\2\2\2\u0352Q\3\2\2\2\u0353\u0355"+
		"\7^\2\2\u0354\u0353\3\2\2\2\u0354\u0355\3\2\2\2\u0355\u0356\3\2\2\2\u0356"+
		"\u0357\7\33\2\2\u0357\u0360\5V,\2\u0358\u035a\7^\2\2\u0359\u0358\3\2\2"+
		"\2\u0359\u035a\3\2\2\2\u035a\u035b\3\2\2\2\u035b\u035c\7\33\2\2\u035c"+
		"\u035d\7V\2\2\u035d\u035e\7W\2\2\u035e\u0360\5V,\2\u035f\u0354\3\2\2\2"+
		"\u035f\u0359\3\2\2\2\u0360S\3\2\2\2\u0361\u0362\7\60\2\2\u0362\u0363\7"+
		"X\2\2\u0363\u0364\5v<\2\u0364\u0365\7Y\2\2\u0365U\3\2\2\2\u0366\u036d"+
		"\5B\"\2\u0367\u0368\7X\2\2\u0368\u0369\5\u0128\u0095\2\u0369\u036a\7Y"+
		"\2\2\u036a\u036b\5V,\2\u036b\u036d\3\2\2\2\u036c\u0366\3\2\2\2\u036c\u0367"+
		"\3\2\2\2\u036dW\3\2\2\2\u036e\u036f\b-\1\2\u036f\u0370\5V,\2\u0370\u0379"+
		"\3\2\2\2\u0371\u0372\f\4\2\2\u0372\u0373\7`\2\2\u0373\u0378\5V,\2\u0374"+
		"\u0375\f\3\2\2\u0375\u0376\7\u0082\2\2\u0376\u0378\5V,\2\u0377\u0371\3"+
		"\2\2\2\u0377\u0374\3\2\2\2\u0378\u037b\3\2\2\2\u0379\u0377\3\2\2\2\u0379"+
		"\u037a\3\2\2\2\u037aY\3\2\2\2\u037b\u0379\3\2\2\2\u037c\u037d\b.\1\2\u037d"+
		"\u037e\5X-\2\u037e\u038a\3\2\2\2\u037f\u0380\f\5\2\2\u0380\u0381\7c\2"+
		"\2\u0381\u0389\5X-\2\u0382\u0383\f\4\2\2\u0383\u0384\7d\2\2\u0384\u0389"+
		"\5X-\2\u0385\u0386\f\3\2\2\u0386\u0387\7e\2\2\u0387\u0389\5X-\2\u0388"+
		"\u037f\3\2\2\2\u0388\u0382\3\2\2\2\u0388\u0385\3\2\2\2\u0389\u038c\3\2"+
		"\2\2\u038a\u0388\3\2\2\2\u038a\u038b\3\2\2\2\u038b[\3\2\2\2\u038c\u038a"+
		"\3\2\2\2\u038d\u038e\b/\1\2\u038e\u038f\5Z.\2\u038f\u0398\3\2\2\2\u0390"+
		"\u0391\f\4\2\2\u0391\u0392\7a\2\2\u0392\u0397\5Z.\2\u0393\u0394\f\3\2"+
		"\2\u0394\u0395\7b\2\2\u0395\u0397\5Z.\2\u0396\u0390\3\2\2\2\u0396\u0393"+
		"\3\2\2\2\u0397\u039a\3\2\2\2\u0398\u0396\3\2\2\2\u0398\u0399\3\2\2\2\u0399"+
		"]\3\2\2\2\u039a\u0398\3\2\2\2\u039b\u039c\b\60\1\2\u039c\u039d\5\\/\2"+
		"\u039d\u03a7\3\2\2\2\u039e\u039f\f\4\2\2\u039f\u03a0\7v\2\2\u03a0\u03a6"+
		"\5\\/\2\u03a1\u03a2\f\3\2\2\u03a2\u03a3\5\2\2\2\u03a3\u03a4\5\\/\2\u03a4"+
		"\u03a6\3\2\2\2\u03a5\u039e\3\2\2\2\u03a5\u03a1\3\2\2\2\u03a6\u03a9\3\2"+
		"\2\2\u03a7\u03a5\3\2\2\2\u03a7\u03a8\3\2\2\2\u03a8_\3\2\2\2\u03a9\u03a7"+
		"\3\2\2\2\u03aa\u03ab\b\61\1\2\u03ab\u03ac\5^\60\2\u03ac\u03bb\3\2\2\2"+
		"\u03ad\u03ae\f\6\2\2\u03ae\u03af\7l\2\2\u03af\u03ba\5^\60\2\u03b0\u03b1"+
		"\f\5\2\2\u03b1\u03b2\7m\2\2\u03b2\u03ba\5^\60\2\u03b3\u03b4\f\4\2\2\u03b4"+
		"\u03b5\7{\2\2\u03b5\u03ba\5^\60\2\u03b6\u03b7\f\3\2\2\u03b7\u03b8\7|\2"+
		"\2\u03b8\u03ba\5^\60\2\u03b9\u03ad\3\2\2\2\u03b9\u03b0\3\2\2\2\u03b9\u03b3"+
		"\3\2\2\2\u03b9\u03b6\3\2\2\2\u03ba\u03bd\3\2\2\2\u03bb\u03b9\3\2\2\2\u03bb"+
		"\u03bc\3\2\2\2\u03bca\3\2\2\2\u03bd\u03bb\3\2\2\2\u03be\u03bf\b\62\1\2"+
		"\u03bf\u03c0\5`\61\2\u03c0\u03c9\3\2\2\2\u03c1\u03c2\f\4\2\2\u03c2\u03c3"+
		"\7y\2\2\u03c3\u03c8\5`\61\2\u03c4\u03c5\f\3\2\2\u03c5\u03c6\7z\2\2\u03c6"+
		"\u03c8\5`\61\2\u03c7\u03c1\3\2\2\2\u03c7\u03c4\3\2\2\2\u03c8\u03cb\3\2"+
		"\2\2\u03c9\u03c7\3\2\2\2\u03c9\u03ca\3\2\2\2\u03cac\3\2\2\2\u03cb\u03c9"+
		"\3\2\2\2\u03cc\u03cd\b\63\1\2\u03cd\u03ce\5b\62\2\u03ce\u03d4\3\2\2\2"+
		"\u03cf\u03d0\f\3\2\2\u03d0\u03d1\7g\2\2\u03d1\u03d3\5b\62\2\u03d2\u03cf"+
		"\3\2\2\2\u03d3\u03d6\3\2\2\2\u03d4\u03d2\3\2\2\2\u03d4\u03d5\3\2\2\2\u03d5"+
		"e\3\2\2\2\u03d6\u03d4\3\2\2\2\u03d7\u03d8\b\64\1\2\u03d8\u03d9\5d\63\2"+
		"\u03d9\u03df\3\2\2\2\u03da\u03db\f\3\2\2\u03db\u03dc\7f\2\2\u03dc\u03de"+
		"\5d\63\2\u03dd\u03da\3\2\2\2\u03de\u03e1\3\2\2\2\u03df\u03dd\3\2\2\2\u03df"+
		"\u03e0\3\2\2\2\u03e0g\3\2\2\2\u03e1\u03df\3\2\2\2\u03e2\u03e3\b\65\1\2"+
		"\u03e3\u03e4\5f\64\2\u03e4\u03ea\3\2\2\2\u03e5\u03e6\f\3\2\2\u03e6\u03e7"+
		"\7h\2\2\u03e7\u03e9\5f\64\2\u03e8\u03e5\3\2\2\2\u03e9\u03ec\3\2\2\2\u03ea"+
		"\u03e8\3\2\2\2\u03ea\u03eb\3\2\2\2\u03ebi\3\2\2\2\u03ec\u03ea\3\2\2\2"+
		"\u03ed\u03ee\b\66\1\2\u03ee\u03ef\5h\65\2\u03ef\u03f5\3\2\2\2\u03f0\u03f1"+
		"\f\3\2\2\u03f1\u03f2\7}\2\2\u03f2\u03f4\5h\65\2\u03f3\u03f0\3\2\2\2\u03f4"+
		"\u03f7\3\2\2\2\u03f5\u03f3\3\2\2\2\u03f5\u03f6\3\2\2\2\u03f6k\3\2\2\2"+
		"\u03f7\u03f5\3\2\2\2\u03f8\u03f9\b\67\1\2\u03f9\u03fa\5j\66\2\u03fa\u0400"+
		"\3\2\2\2\u03fb\u03fc\f\3\2\2\u03fc\u03fd\7~\2\2\u03fd\u03ff\5j\66\2\u03fe"+
		"\u03fb\3\2\2\2\u03ff\u0402\3\2\2\2\u0400\u03fe\3\2\2\2\u0400\u0401\3\2"+
		"\2\2\u0401m\3\2\2\2\u0402\u0400\3\2\2\2\u0403\u040b\5l\67\2\u0404\u0405"+
		"\5l\67\2\u0405\u0406\7]\2\2\u0406\u0407\5v<\2\u0407\u0408\7[\2\2\u0408"+
		"\u0409\5r:\2\u0409\u040b\3\2\2\2\u040a\u0403\3\2\2\2\u040a\u0404\3\2\2"+
		"\2\u040bo\3\2\2\2\u040c\u040e\7D\2\2\u040d\u040f\5r:\2\u040e\u040d\3\2"+
		"\2\2\u040e\u040f\3\2\2\2\u040fq\3\2\2\2\u0410\u0417\5n8\2\u0411\u0412"+
		"\5l\67\2\u0412\u0413\5t;\2\u0413\u0414\5\u014c\u00a7\2\u0414\u0417\3\2"+
		"\2\2\u0415\u0417\5p9\2\u0416\u0410\3\2\2\2\u0416\u0411\3\2\2\2\u0416\u0415"+
		"\3\2\2\2\u0417s\3\2\2\2\u0418\u0419\t\7\2\2\u0419u\3\2\2\2\u041a\u041b"+
		"\b<\1\2\u041b\u041c\5r:\2\u041c\u0422\3\2\2\2\u041d\u041e\f\3\2\2\u041e"+
		"\u041f\7\u0081\2\2\u041f\u0421\5r:\2\u0420\u041d\3\2\2\2\u0421\u0424\3"+
		"\2\2\2\u0422\u0420\3\2\2\2\u0422\u0423\3\2\2\2\u0423w\3\2\2\2\u0424\u0422"+
		"\3\2\2\2\u0425\u0426\5n8\2\u0426y\3\2\2\2\u0427\u0442\5\u0080A\2\u0428"+
		"\u042a\5\u00f4{\2\u0429\u0428\3\2\2\2\u0429\u042a\3\2\2\2\u042a\u042b"+
		"\3\2\2\2\u042b\u0442\5\u0082B\2\u042c\u042e\5\u00f4{\2\u042d\u042c\3\2"+
		"\2\2\u042d\u042e\3\2\2\2\u042e\u042f\3\2\2\2\u042f\u0442\5\u0084C\2\u0430"+
		"\u0432\5\u00f4{\2\u0431\u0430\3\2\2\2\u0431\u0432\3\2\2\2\u0432\u0433"+
		"\3\2\2\2\u0433\u0442\5\u0088E\2\u0434\u0436\5\u00f4{\2\u0435\u0434\3\2"+
		"\2\2\u0435\u0436\3\2\2\2\u0436\u0437\3\2\2\2\u0437\u0442\5\u008aF\2\u0438"+
		"\u043a\5\u00f4{\2\u0439\u0438\3\2\2\2\u0439\u043a\3\2\2\2\u043a\u043b"+
		"\3\2\2\2\u043b\u0442\5\u0092J\2\u043c\u0442\5\u0094K\2\u043d\u043f\5\u00f4"+
		"{\2\u043e\u043d\3\2\2\2\u043e\u043f\3\2\2\2\u043f\u0440\3\2\2\2\u0440"+
		"\u0442\5\u01a4\u00d3\2\u0441\u0427\3\2\2\2\u0441\u0429\3\2\2\2\u0441\u042d"+
		"\3\2\2\2\u0441\u0431\3\2\2\2\u0441\u0435\3\2\2\2\u0441\u0439\3\2\2\2\u0441"+
		"\u043c\3\2\2\2\u0441\u043e\3\2\2\2\u0442{\3\2\2\2\u0443\u0446\5\u0082"+
		"B\2\u0444\u0446\5\u00a0Q\2\u0445\u0443\3\2\2\2\u0445\u0444\3\2\2\2\u0446"+
		"}\3\2\2\2\u0447\u0450\5v<\2\u0448\u044a\5\u00f4{\2\u0449\u0448\3\2\2\2"+
		"\u0449\u044a\3\2\2\2\u044a\u044b\3\2\2\2\u044b\u044c\5\u00aaV\2\u044c"+
		"\u044d\5\u0112\u008a\2\u044d\u044e\5\u014a\u00a6\2\u044e\u0450\3\2\2\2"+
		"\u044f\u0447\3\2\2\2\u044f\u0449\3\2\2\2\u0450\177\3\2\2\2\u0451\u0453"+
		"\5\u00f4{\2\u0452\u0451\3\2\2\2\u0452\u0453\3\2\2\2\u0453\u0454\3\2\2"+
		"\2\u0454\u0455\7\u008d\2\2\u0455\u0456\7[\2\2\u0456\u0466\5z>\2\u0457"+
		"\u0459\5\u00f4{\2\u0458\u0457\3\2\2\2\u0458\u0459\3\2\2\2\u0459\u045a"+
		"\3\2\2\2\u045a\u045b\7\16\2\2\u045b\u045c\5x=\2\u045c\u045d\7[\2\2\u045d"+
		"\u045e\5z>\2\u045e\u0466\3\2\2\2\u045f\u0461\5\u00f4{\2\u0460\u045f\3"+
		"\2\2\2\u0460\u0461\3\2\2\2\u0461\u0462\3\2\2\2\u0462\u0463\7\32\2\2\u0463"+
		"\u0464\7[\2\2\u0464\u0466\5z>\2\u0465\u0452\3\2\2\2\u0465\u0458\3\2\2"+
		"\2\u0465\u0460\3\2\2\2\u0466\u0081\3\2\2\2\u0467\u0469\5v<\2\u0468\u0467"+
		"\3\2\2\2\u0468\u0469\3\2\2\2\u0469\u046a\3\2\2\2\u046a\u046b\7Z\2\2\u046b"+
		"\u0083\3\2\2\2\u046c\u046e\7T\2\2\u046d\u046f\5\u0086D\2\u046e\u046d\3"+
		"\2\2\2\u046e\u046f\3\2\2\2\u046f\u0470\3\2\2\2\u0470\u0471\7U\2\2\u0471"+
		"\u0085\3\2\2\2\u0472\u0473\bD\1\2\u0473\u0474\5z>\2\u0474\u0479\3\2\2"+
		"\2\u0475\u0476\f\3\2\2\u0476\u0478\5z>\2\u0477\u0475\3\2\2\2\u0478\u047b"+
		"\3\2\2\2\u0479\u0477\3\2\2\2\u0479\u047a\3\2\2\2\u047a\u0087\3\2\2\2\u047b"+
		"\u0479\3\2\2\2\u047c\u047e\7)\2\2\u047d\u047f\7\26\2\2\u047e\u047d\3\2"+
		"\2\2\u047e\u047f\3\2\2\2\u047f\u0480\3\2\2\2\u0480\u0482\7X\2\2\u0481"+
		"\u0483\5|?\2\u0482\u0481\3\2\2\2\u0482\u0483\3\2\2\2\u0483\u0484\3\2\2"+
		"\2\u0484\u0485\5~@\2\u0485\u0486\7Y\2\2\u0486\u0487\5z>\2\u0487\u04a0"+
		"\3\2\2\2\u0488\u048a\7)\2\2\u0489\u048b\7\26\2\2\u048a\u0489\3\2\2\2\u048a"+
		"\u048b\3\2\2\2\u048b\u048c\3\2\2\2\u048c\u048e\7X\2\2\u048d\u048f\5|?"+
		"\2\u048e\u048d\3\2\2\2\u048e\u048f\3\2\2\2\u048f\u0490\3\2\2\2\u0490\u0491"+
		"\5~@\2\u0491\u0492\7Y\2\2\u0492\u0493\5z>\2\u0493\u0494\7\37\2\2\u0494"+
		"\u0495\5z>\2\u0495\u04a0\3\2\2\2\u0496\u0497\7@\2\2\u0497\u0499\7X\2\2"+
		"\u0498\u049a\5|?\2\u0499\u0498\3\2\2\2\u0499\u049a\3\2\2\2\u049a\u049b"+
		"\3\2\2\2\u049b\u049c\5~@\2\u049c\u049d\7Y\2\2\u049d\u049e\5z>\2\u049e"+
		"\u04a0\3\2\2\2\u049f\u047c\3\2\2\2\u049f\u0488\3\2\2\2\u049f\u0496\3\2"+
		"\2\2\u04a0\u0089\3\2\2\2\u04a1\u04a2\7Q\2\2\u04a2\u04a3\7X\2\2\u04a3\u04a4"+
		"\5~@\2\u04a4\u04a5\7Y\2\2\u04a5\u04a6\5z>\2\u04a6\u04c5\3\2\2\2\u04a7"+
		"\u04a8\7\34\2\2\u04a8\u04a9\5z>\2\u04a9\u04aa\7Q\2\2\u04aa\u04ab\7X\2"+
		"\2\u04ab\u04ac\5v<\2\u04ac\u04ad\7Y\2\2\u04ad\u04ae\7Z\2\2\u04ae\u04c5"+
		"\3\2\2\2\u04af\u04b0\7&\2\2\u04b0\u04b1\7X\2\2\u04b1\u04b3\5|?\2\u04b2"+
		"\u04b4\5~@\2\u04b3\u04b2\3\2\2\2\u04b3\u04b4\3\2\2\2\u04b4\u04b5\3\2\2"+
		"\2\u04b5\u04b7\7Z\2\2\u04b6\u04b8\5v<\2\u04b7\u04b6\3\2\2\2\u04b7\u04b8"+
		"\3\2\2\2\u04b8\u04b9\3\2\2\2\u04b9\u04ba\7Y\2\2\u04ba\u04bb\5z>\2\u04bb"+
		"\u04c5\3\2\2\2\u04bc\u04bd\7&\2\2\u04bd\u04be\7X\2\2\u04be\u04bf\5\u008e"+
		"H\2\u04bf\u04c0\7[\2\2\u04c0\u04c1\5\u0090I\2\u04c1\u04c2\7Y\2\2\u04c2"+
		"\u04c3\5z>\2\u04c3\u04c5\3\2\2\2\u04c4\u04a1\3\2\2\2\u04c4\u04a7\3\2\2"+
		"\2\u04c4\u04af\3\2\2\2\u04c4\u04bc\3\2\2\2\u04c5\u008b\3\2\2\2\u04c6\u04c8"+
		"\5\u00f4{\2\u04c7\u04c6\3\2\2\2\u04c7\u04c8\3\2\2\2\u04c8\u04c9\3\2\2"+
		"\2\u04c9\u04ca\5\u00aaV\2\u04ca\u04cb\5\u0112\u008a\2\u04cb\u04d8\3\2"+
		"\2\2\u04cc\u04ce\5\u00f4{\2\u04cd\u04cc\3\2\2\2\u04cd\u04ce\3\2\2\2\u04ce"+
		"\u04cf\3\2\2\2\u04cf\u04d1\5\u00aaV\2\u04d0\u04d2\5\u0126\u0094\2\u04d1"+
		"\u04d0\3\2\2\2\u04d1\u04d2\3\2\2\2\u04d2\u04d3\3\2\2\2\u04d3\u04d4\7V"+
		"\2\2\u04d4\u04d5\5\u01b0\u00d9\2\u04d5\u04d6\7W\2\2\u04d6\u04d8\3\2\2"+
		"\2\u04d7\u04c7\3\2\2\2\u04d7\u04cd\3\2\2\2\u04d8\u008d\3\2\2\2\u04d9\u04db"+
		"\5\u00f4{\2\u04da\u04d9\3\2\2\2\u04da\u04db\3\2\2\2\u04db\u04dc\3\2\2"+
		"\2\u04dc\u04dd\5\u00aaV\2\u04dd\u04de\5\u0112\u008a\2\u04de\u008f\3\2"+
		"\2\2\u04df\u04e0\5\u0152\u00aa\2\u04e0\u0091\3\2\2\2\u04e1\u04e2\7\r\2"+
		"\2\u04e2\u04ee\7Z\2\2\u04e3\u04e4\7\30\2\2\u04e4\u04ee\7Z\2\2\u04e5\u04e7"+
		"\78\2\2\u04e6\u04e8\5\u0152\u00aa\2\u04e7\u04e6\3\2\2\2\u04e7\u04e8\3"+
		"\2\2\2\u04e8\u04e9\3\2\2\2\u04e9\u04ee\7Z\2\2\u04ea\u04eb\7(\2\2\u04eb"+
		"\u04ec\7\u008d\2\2\u04ec\u04ee\7Z\2\2\u04ed\u04e1\3\2\2\2\u04ed\u04e3"+
		"\3\2\2\2\u04ed\u04e5\3\2\2\2\u04ed\u04ea\3\2\2\2\u04ee\u0093\3\2\2\2\u04ef"+
		"\u04f0\5\u009aN\2\u04f0\u0095\3\2\2\2\u04f1\u04f2\bL\1\2\u04f2\u04f3\5"+
		"\u0098M\2\u04f3\u04f8\3\2\2\2\u04f4\u04f5\f\3\2\2\u04f5\u04f7\5\u0098"+
		"M\2\u04f6\u04f4\3\2\2\2\u04f7\u04fa\3\2\2\2\u04f8\u04f6\3\2\2\2\u04f8"+
		"\u04f9\3\2\2\2\u04f9\u0097\3\2\2\2\u04fa\u04f8\3\2\2\2\u04fb\u0507\5\u009a"+
		"N\2\u04fc\u0507\5\u009cO\2\u04fd\u0507\5\u013c\u009f\2\u04fe\u0507\5\u018a"+
		"\u00c6\2\u04ff\u0507\5\u01a2\u00d2\2\u0500\u0507\5\u019e\u00d0\2\u0501"+
		"\u0507\5\u01a0\u00d1\2\u0502\u0507\5\u00f2z\2\u0503\u0507\5\u00d8m\2\u0504"+
		"\u0507\5\u00a4S\2\u0505\u0507\5\u00a6T\2\u0506\u04fb\3\2\2\2\u0506\u04fc"+
		"\3\2\2\2\u0506\u04fd\3\2\2\2\u0506\u04fe\3\2\2\2\u0506\u04ff\3\2\2\2\u0506"+
		"\u0500\3\2\2\2\u0506\u0501\3\2\2\2\u0506\u0502\3\2\2\2\u0506\u0503\3\2"+
		"\2\2\u0506\u0504\3\2\2\2\u0506\u0505\3\2\2\2\u0507\u0099\3\2\2\2\u0508"+
		"\u0511\5\u00a0Q\2\u0509\u0511\5\u00f0y\2\u050a\u0511\5\u00e4s\2\u050b"+
		"\u0511\5\u00e8u\2\u050c\u0511\5\u00eex\2\u050d\u0511\5\u00a2R\2\u050e"+
		"\u0511\5\u009eP\2\u050f\u0511\5\u00ccg\2\u0510\u0508\3\2\2\2\u0510\u0509"+
		"\3\2\2\2\u0510\u050a\3\2\2\2\u0510\u050b\3\2\2\2\u0510\u050c\3\2\2\2\u0510"+
		"\u050d\3\2\2\2\u0510\u050e\3\2\2\2\u0510\u050f\3\2\2\2\u0511\u009b\3\2"+
		"\2\2\u0512\u0514\5\u00f4{\2\u0513\u0512\3\2\2\2\u0513\u0514\3\2\2\2\u0514"+
		"\u0515\3\2\2\2\u0515\u0516\5\u0112\u008a\2\u0516\u0517\7Z\2\2\u0517\u009d"+
		"\3\2\2\2\u0518\u0519\7L\2\2\u0519\u051b\7\u008d\2\2\u051a\u051c\5\u00f4"+
		"{\2\u051b\u051a\3\2\2\2\u051b\u051c\3\2\2\2\u051c\u051d\3\2\2\2\u051d"+
		"\u051e\7k\2\2\u051e\u051f\5\u012a\u0096\2\u051f\u0520\7Z\2\2\u0520\u009f"+
		"\3\2\2\2\u0521\u0523\5\u00aaV\2\u0522\u0524\5\u010e\u0088\2\u0523\u0522"+
		"\3\2\2\2\u0523\u0524\3\2\2\2\u0524\u0525\3\2\2\2\u0525\u0526\7Z\2\2\u0526"+
		"\u053a\3\2\2\2\u0527\u0528\5\u00f4{\2\u0528\u0529\5\u00aaV\2\u0529\u052a"+
		"\5\u010e\u0088\2\u052a\u052b\7Z\2\2\u052b\u053a\3\2\2\2\u052c\u052e\5"+
		"\u00f4{\2\u052d\u052c\3\2\2\2\u052d\u052e\3\2\2\2\u052e\u052f\3\2\2\2"+
		"\u052f\u0531\5\u00aaV\2\u0530\u0532\5\u0126\u0094\2\u0531\u0530\3\2\2"+
		"\2\u0531\u0532\3\2\2\2\u0532\u0533\3\2\2\2\u0533\u0534\7V\2\2\u0534\u0535"+
		"\5\u01b0\u00d9\2\u0535\u0536\7W\2\2\u0536\u0537\5\u0148\u00a5\2\u0537"+
		"\u0538\7Z\2\2\u0538\u053a\3\2\2\2\u0539\u0521\3\2\2\2\u0539\u0527\3\2"+
		"\2\2\u0539\u052d\3\2\2\2\u053a\u00a1\3\2\2\2\u053b\u053c\7=\2\2\u053c"+
		"\u053d\7X\2\2\u053d\u053e\5x=\2\u053e\u053f\7Y\2\2\u053f\u0540\7Z\2\2"+
		"\u0540\u054a\3\2\2\2\u0541\u0542\7=\2\2\u0542\u0543\7X\2\2\u0543\u0544"+
		"\5x=\2\u0544\u0545\7\u0081\2\2\u0545\u0546\7\u0088\2\2\u0546\u0547\7Y"+
		"\2\2\u0547\u0548\7Z\2\2\u0548\u054a\3\2\2\2\u0549\u053b\3\2\2\2\u0549"+
		"\u0541\3\2\2\2\u054a\u00a3\3\2\2\2\u054b\u054c\7Z\2\2\u054c\u00a5\3\2"+
		"\2\2\u054d\u054e\5\u00f4{\2\u054e\u054f\7Z\2\2\u054f\u00a7\3\2\2\2\u0550"+
		"\u0558\5\u0124\u0093\2\u0551\u0558\5\u00b2Z\2\u0552\u0558\5\u00b4[\2\u0553"+
		"\u0558\7\'\2\2\u0554\u0558\7G\2\2\u0555\u0558\7\26\2\2\u0556\u0558\7*"+
		"\2\2\u0557\u0550\3\2\2\2\u0557\u0551\3\2\2\2\u0557\u0552\3\2\2\2\u0557"+
		"\u0553\3\2\2\2\u0557\u0554\3\2\2\2\u0557\u0555\3\2\2\2\u0557\u0556\3\2"+
		"\2\2\u0558\u00a9\3\2\2\2\u0559\u055b\5\u00acW\2\u055a\u0559\3\2\2\2\u055a"+
		"\u055b\3\2\2\2\u055b\u055c\3\2\2\2\u055c\u055e\5\u00ba^\2\u055d\u055f"+
		"\5\u00aeX\2\u055e\u055d\3\2\2\2\u055e\u055f\3\2\2\2\u055f\u0561\3\2\2"+
		"\2\u0560\u0562\5\u00f4{\2\u0561\u0560\3\2\2\2\u0561\u0562\3\2\2\2\u0562"+
		"\u00ab\3\2\2\2\u0563\u0564\5\u00b0Y\2\u0564\u00ad\3\2\2\2\u0565\u0566"+
		"\5\u00b0Y\2\u0566\u00af\3\2\2\2\u0567\u0569\5\u00a8U\2\u0568\u056a\5\u00b0"+
		"Y\2\u0569\u0568\3\2\2\2\u0569\u056a\3\2\2\2\u056a\u00b1\3\2\2\2\u056b"+
		"\u056c\t\b\2\2\u056c\u00b3\3\2\2\2\u056d\u056e\t\t\2\2\u056e\u00b5\3\2"+
		"\2\2\u056f\u0573\5\u00be`\2\u0570\u0573\5\u00c4c\2\u0571\u0573\5\u019c"+
		"\u00cf\2\u0572\u056f\3\2\2\2\u0572\u0570\3\2\2\2\u0572\u0571\3\2\2\2\u0573"+
		"\u00b7\3\2\2\2\u0574\u0576\5\u0124\u0093\2\u0575\u0574\3\2\2\2\u0575\u0576"+
		"\3\2\2\2\u0576\u0577\3\2\2\2\u0577\u0579\5\u00b6\\\2\u0578\u057a\5\u00f4"+
		"{\2\u0579\u0578\3\2\2\2\u0579\u057a\3\2\2\2\u057a\u00b9\3\2\2\2\u057b"+
		"\u057f\5\u00b6\\\2\u057c\u057f\5\u0154\u00ab\2\u057d\u057f\5\u00c6d\2"+
		"\u057e\u057b\3\2\2\2\u057e\u057c\3\2\2\2\u057e\u057d\3\2\2\2\u057f\u00bb"+
		"\3\2\2\2\u0580\u0582\5\u00ba^\2\u0581\u0583\5\u00f4{\2\u0582\u0581\3\2"+
		"\2\2\u0582\u0583\3\2\2\2\u0583\u0588\3\2\2\2\u0584\u0585\5\u00ba^\2\u0585"+
		"\u0586\5\u00bc_\2\u0586\u0588\3\2\2\2\u0587\u0580\3\2\2\2\u0587\u0584"+
		"\3\2\2\2\u0588\u00bd\3\2\2\2\u0589\u058b\5\26\f\2\u058a\u0589\3\2\2\2"+
		"\u058a\u058b\3\2\2\2\u058b\u058c\3\2\2\2\u058c\u059e\5\u00c0a\2\u058d"+
		"\u059e\7\20\2\2\u058e\u059e\7\21\2\2\u058f\u059e\7\22\2\2\u0590\u059e"+
		"\7\23\2\2\u0591\u059e\7P\2\2\u0592\u059e\7\f\2\2\u0593\u059e\79\2\2\u0594"+
		"\u059e\7+\2\2\u0595\u059e\7,\2\2\u0596\u059e\7:\2\2\u0597\u059e\7K\2\2"+
		"\u0598\u059e\7%\2\2\u0599\u059e\7\35\2\2\u059a\u059e\7N\2\2\u059b\u059e"+
		"\7\13\2\2\u059c\u059e\5\u00c2b\2\u059d\u058a\3\2\2\2\u059d\u058d\3\2\2"+
		"\2\u059d\u058e\3\2\2\2\u059d\u058f\3\2\2\2\u059d\u0590\3\2\2\2\u059d\u0591"+
		"\3\2\2\2\u059d\u0592\3\2\2\2\u059d\u0593\3\2\2\2\u059d\u0594\3\2\2\2\u059d"+
		"\u0595\3\2\2\2\u059d\u0596\3\2\2\2\u059d\u0597\3\2\2\2\u059d\u0598\3\2"+
		"\2\2\u059d\u0599\3\2\2\2\u059d\u059a\3\2\2\2\u059d\u059b\3\2\2\2\u059d"+
		"\u059c\3\2\2\2\u059e\u00bf\3\2\2\2\u059f\u05a2\7\u008d\2\2\u05a0\u05a2"+
		"\5\u0194\u00cb\2\u05a1\u059f\3\2\2\2\u05a1\u05a0\3\2\2\2\u05a2\u00c1\3"+
		"\2\2\2\u05a3\u05a4\7\31\2\2\u05a4\u05a5\7X\2\2\u05a5\u05a6\5v<\2\u05a6"+
		"\u05a7\7Y\2\2\u05a7\u05ad\3\2\2\2\u05a8\u05a9\7\31\2\2\u05a9\u05aa\7X"+
		"\2\2\u05aa\u05ab\7\13\2\2\u05ab\u05ad\7Y\2\2\u05ac\u05a3\3\2\2\2\u05ac"+
		"\u05a8\3\2\2\2\u05ad\u00c3\3\2\2\2\u05ae\u05b0\5\u015c\u00af\2\u05af\u05b1"+
		"\5\u00f4{\2\u05b0\u05af\3\2\2\2\u05b0\u05b1\3\2\2\2\u05b1\u05b3\3\2\2"+
		"\2\u05b2\u05b4\5\26\f\2\u05b3\u05b2\3\2\2\2\u05b3\u05b4\3\2\2\2\u05b4"+
		"\u05b5\3\2\2\2\u05b5\u05b6\7\u008d\2\2\u05b6\u05c7\3\2\2\2\u05b7\u05b8"+
		"\5\u015c\u00af\2\u05b8\u05b9\5\u0194\u00cb\2\u05b9\u05c7\3\2\2\2\u05ba"+
		"\u05bb\5\u015c\u00af\2\u05bb\u05bd\5\26\f\2\u05bc\u05be\7A\2\2\u05bd\u05bc"+
		"\3\2\2\2\u05bd\u05be\3\2\2\2\u05be\u05bf\3\2\2\2\u05bf\u05c0\5\u0194\u00cb"+
		"\2\u05c0\u05c7\3\2\2\2\u05c1\u05c3\7 \2\2\u05c2\u05c4\5\26\f\2\u05c3\u05c2"+
		"\3\2\2\2\u05c3\u05c4\3\2\2\2\u05c4\u05c5\3\2\2\2\u05c5\u05c7\7\u008d\2"+
		"\2\u05c6\u05ae\3\2\2\2\u05c6\u05b7\3\2\2\2\u05c6\u05ba\3\2\2\2\u05c6\u05c1"+
		"\3\2\2\2\u05c7\u00c5\3\2\2\2\u05c8\u05c9\5\u00c8e\2\u05c9\u05cb\7T\2\2"+
		"\u05ca\u05cc\5\u00d2j\2\u05cb\u05ca\3\2\2\2\u05cb\u05cc\3\2\2\2\u05cc"+
		"\u05cd\3\2\2\2\u05cd\u05ce\7U\2\2\u05ce\u05d6\3\2\2\2\u05cf\u05d0\5\u00c8"+
		"e\2\u05d0\u05d1\7T\2\2\u05d1\u05d2\5\u00d2j\2\u05d2\u05d3\7\u0081\2\2"+
		"\u05d3\u05d4\7U\2\2\u05d4\u05d6\3\2\2\2\u05d5\u05c8\3\2\2\2\u05d5\u05cf"+
		"\3\2\2\2\u05d6\u00c7\3\2\2\2\u05d7\u05d9\5\u00ceh\2\u05d8\u05da\5\u00f4"+
		"{\2\u05d9\u05d8\3\2\2\2\u05d9\u05da\3\2\2\2\u05da\u05dc\3\2\2\2\u05db"+
		"\u05dd\5\u00caf\2\u05dc\u05db\3\2\2\2\u05dc\u05dd\3\2\2\2\u05dd\u05df"+
		"\3\2\2\2\u05de\u05e0\5\u00d0i\2\u05df\u05de\3\2\2\2\u05df\u05e0\3\2\2"+
		"\2\u05e0\u00c9\3\2\2\2\u05e1\u05e3\5\26\f\2\u05e2\u05e1\3\2\2\2\u05e2"+
		"\u05e3\3\2\2\2\u05e3\u05e4\3\2\2\2\u05e4\u05e5\7\u008d\2\2\u05e5\u00cb"+
		"\3\2\2\2\u05e6\u05e8\5\u00ceh\2\u05e7\u05e9\5\u00f4{\2\u05e8\u05e7\3\2"+
		"\2\2\u05e8\u05e9\3\2\2\2\u05e9\u05eb\3\2\2\2\u05ea\u05ec\5\26\f\2\u05eb"+
		"\u05ea\3\2\2\2\u05eb\u05ec\3\2\2\2\u05ec\u05ed\3\2\2\2\u05ed\u05ef\7\u008d"+
		"\2\2\u05ee\u05f0\5\u00d0i\2\u05ef\u05ee\3\2\2\2\u05ef\u05f0\3\2\2\2\u05f0"+
		"\u05f1\3\2\2\2\u05f1\u05f2\7Z\2\2\u05f2\u00cd\3\2\2\2\u05f3\u05f9\7 \2"+
		"\2\u05f4\u05f5\7 \2\2\u05f5\u05f9\7\24\2\2\u05f6\u05f7\7 \2\2\u05f7\u05f9"+
		"\7?\2\2\u05f8\u05f3\3\2\2\2\u05f8\u05f4\3\2\2\2\u05f8\u05f6\3\2\2\2\u05f9"+
		"\u00cf\3\2\2\2\u05fa\u05fb\7[\2\2\u05fb\u05fc\5\u00b8]\2\u05fc\u00d1\3"+
		"\2\2\2\u05fd\u05fe\bj\1\2\u05fe\u05ff\5\u00d4k\2\u05ff\u0605\3\2\2\2\u0600"+
		"\u0601\f\3\2\2\u0601\u0602\7\u0081\2\2\u0602\u0604\5\u00d4k\2\u0603\u0600"+
		"\3\2\2\2\u0604\u0607\3\2\2\2\u0605\u0603\3\2\2\2\u0605\u0606\3\2\2\2\u0606"+
		"\u00d3\3\2\2\2\u0607\u0605\3\2\2\2\u0608\u060e\5\u00d6l\2\u0609\u060a"+
		"\5\u00d6l\2\u060a\u060b\7k\2\2\u060b\u060c\5x=\2\u060c\u060e\3\2\2\2\u060d"+
		"\u0608\3\2\2\2\u060d\u0609\3\2\2\2\u060e\u00d5\3\2\2\2\u060f\u0611\7\u008d"+
		"\2\2\u0610\u0612\5\u00f4{\2\u0611\u0610\3\2\2\2\u0611\u0612\3\2\2\2\u0612"+
		"\u00d7\3\2\2\2\u0613\u0617\5\u00dan\2\u0614\u0617\5\u00dco\2\u0615\u0617"+
		"\5\u00dep\2\u0616\u0613\3\2\2\2\u0616\u0614\3\2\2\2\u0616\u0615\3\2\2"+
		"\2\u0617\u00d9\3\2\2\2\u0618\u061a\7*\2\2\u0619\u0618\3\2\2\2\u0619\u061a"+
		"\3\2\2\2\u061a\u061b\3\2\2\2\u061b\u061d\7.\2\2\u061c\u061e\5\u00f4{\2"+
		"\u061d\u061c\3\2\2\2\u061d\u061e\3\2\2\2\u061e\u061f\3\2\2\2\u061f\u0620"+
		"\7\u008d\2\2\u0620\u0621\7T\2\2\u0621\u0622\5\u00e2r\2\u0622\u0623\7U"+
		"\2\2\u0623\u00db\3\2\2\2\u0624\u0626\7*\2\2\u0625\u0624\3\2\2\2\u0625"+
		"\u0626\3\2\2\2\u0626\u0627\3\2\2\2\u0627\u0629\7.\2\2\u0628\u062a\5\u00f4"+
		"{\2\u0629\u0628\3\2\2\2\u0629\u062a\3\2\2\2\u062a\u062b\3\2\2\2\u062b"+
		"\u062c\7T\2\2\u062c\u062d\5\u00e2r\2\u062d\u062e\7U\2\2\u062e\u00dd\3"+
		"\2\2\2\u062f\u0630\7.\2\2\u0630\u0631\5\u00e0q\2\u0631\u0632\7^\2\2\u0632"+
		"\u0633\7\u008d\2\2\u0633\u0634\7T\2\2\u0634\u0635\5\u00e2r\2\u0635\u0636"+
		"\7U\2\2\u0636\u00df\3\2\2\2\u0637\u0638\bq\1\2\u0638\u0639\7\u008d\2\2"+
		"\u0639\u063f\3\2\2\2\u063a\u063b\f\3\2\2\u063b\u063c\7^\2\2\u063c\u063e"+
		"\7\u008d\2\2\u063d\u063a\3\2\2\2\u063e\u0641\3\2\2\2\u063f\u063d\3\2\2"+
		"\2\u063f\u0640\3\2\2\2\u0640\u00e1\3\2\2\2\u0641\u063f\3\2\2\2\u0642\u0644"+
		"\5\u0096L\2\u0643\u0642\3\2\2\2\u0643\u0644\3\2\2\2\u0644\u00e3\3\2\2"+
		"\2\u0645\u0646\7.\2\2\u0646\u0647\7\u008d\2\2\u0647\u0648\7k\2\2\u0648"+
		"\u0649\5\u00e6t\2\u0649\u064a\7Z\2\2\u064a\u00e5\3\2\2\2\u064b\u064d\5"+
		"\26\f\2\u064c\u064b\3\2\2\2\u064c\u064d\3\2\2\2\u064d\u064e\3\2\2\2\u064e"+
		"\u064f\5\4\3\2\u064f\u00e7\3\2\2\2\u0650\u0651\7L\2\2\u0651\u0652\5\u00ea"+
		"v\2\u0652\u0653\7Z\2\2\u0653\u00e9\3\2\2\2\u0654\u0655\bv\1\2\u0655\u0657"+
		"\5\u00ecw\2\u0656\u0658\7\\\2\2\u0657\u0656\3\2\2\2\u0657\u0658\3\2\2"+
		"\2\u0658\u0661\3\2\2\2\u0659\u065a\f\3\2\2\u065a\u065b\7\u0081\2\2\u065b"+
		"\u065d\5\u00ecw\2\u065c\u065e\7\\\2\2\u065d\u065c\3\2\2\2\u065d\u065e"+
		"\3\2\2\2\u065e\u0660\3\2\2\2\u065f\u0659\3\2\2\2\u0660\u0663\3\2\2\2\u0661"+
		"\u065f\3\2\2\2\u0661\u0662\3\2\2\2\u0662\u00eb\3\2\2\2\u0663\u0661\3\2"+
		"\2\2\u0664\u0666\5\u00c0a\2\u0665\u0664\3\2\2\2\u0665\u0666\3\2\2\2\u0666"+
		"\u0667\3\2\2\2\u0667\u0668\5\26\f\2\u0668\u0669\5\22\n\2\u0669\u00ed\3"+
		"\2\2\2\u066a\u066c\5\u00f4{\2\u066b\u066a\3\2\2\2\u066b\u066c\3\2\2\2"+
		"\u066c\u066d\3\2\2\2\u066d\u066e\7L\2\2\u066e\u0670\7.\2\2\u066f\u0671"+
		"\5\26\f\2\u0670\u066f\3\2\2\2\u0670\u0671\3\2\2\2\u0671\u0672\3\2\2\2"+
		"\u0672\u0673\5\4\3\2\u0673\u0674\7Z\2\2\u0674\u00ef\3\2\2\2\u0675\u0677"+
		"\5\u00f4{\2\u0676\u0675\3\2\2\2\u0676\u0677\3\2\2\2\u0677\u0678\3\2\2"+
		"\2\u0678\u0679\7\n\2\2\u0679\u067a\7X\2\2\u067a\u067b\7\u0088\2\2\u067b"+
		"\u067c\7Y\2\2\u067c\u067d\7Z\2\2\u067d\u00f1\3\2\2\2\u067e\u067f\7#\2"+
		"\2\u067f\u0680\7\u0088\2\2\u0680\u0682\7T\2\2\u0681\u0683\5\u0096L\2\u0682"+
		"\u0681\3\2\2\2\u0682\u0683\3\2\2\2\u0683\u0684\3\2\2\2\u0684\u0689\7U"+
		"\2\2\u0685\u0686\7#\2\2\u0686\u0687\7\u0088\2\2\u0687\u0689\5\u0098M\2"+
		"\u0688\u067e\3\2\2\2\u0688\u0685\3\2\2\2\u0689\u00f3\3\2\2\2\u068a\u068b"+
		"\b{\1\2\u068b\u068c\5\u00f6|\2\u068c\u0691\3\2\2\2\u068d\u068e\f\3\2\2"+
		"\u068e\u0690\5\u00f6|\2\u068f\u068d\3\2\2\2\u0690\u0693\3\2\2\2\u0691"+
		"\u068f\3\2\2\2\u0691\u0692\3\2\2\2\u0692\u00f5\3\2\2\2\u0693\u0691\3\2"+
		"\2\2\u0694\u0695\7V\2\2\u0695\u0697\7V\2\2\u0696\u0698\5\u00fa~\2\u0697"+
		"\u0696\3\2\2\2\u0697\u0698\3\2\2\2\u0698\u0699\3\2\2\2\u0699\u069a\5\u00fc"+
		"\177\2\u069a\u069b\7W\2\2\u069b\u069c\7W\2\2\u069c\u069f\3\2\2\2\u069d"+
		"\u069f\5\u00f8}\2\u069e\u0694\3\2\2\2\u069e\u069d\3\2\2\2\u069f\u00f7"+
		"\3\2\2\2\u06a0\u06a1\7\b\2\2\u06a1\u06a2\7X\2\2\u06a2\u06a4\5\u0128\u0095"+
		"\2\u06a3\u06a5\7\\\2\2\u06a4\u06a3\3\2\2\2\u06a4\u06a5\3\2\2\2\u06a5\u06a6"+
		"\3\2\2\2\u06a6\u06a7\7Y\2\2\u06a7\u06b1\3\2\2\2\u06a8\u06a9\7\b\2\2\u06a9"+
		"\u06aa\7Y\2\2\u06aa\u06ac\5x=\2\u06ab\u06ad\7\\\2\2\u06ac\u06ab\3\2\2"+
		"\2\u06ac\u06ad\3\2\2\2\u06ad\u06ae\3\2\2\2\u06ae\u06af\7Y\2\2\u06af\u06b1"+
		"\3\2\2\2\u06b0\u06a0\3\2\2\2\u06b0\u06a8\3\2\2\2\u06b1\u00f9\3\2\2\2\u06b2"+
		"\u06b3\7L\2\2\u06b3\u06b4\5\u0104\u0083\2\u06b4\u06b5\7[\2\2\u06b5\u00fb"+
		"\3\2\2\2\u06b6\u06b8\b\177\1\2\u06b7\u06b9\5\u00fe\u0080\2\u06b8\u06b7"+
		"\3\2\2\2\u06b8\u06b9\3\2\2\2\u06b9\u06be\3\2\2\2\u06ba\u06bb\5\u00fe\u0080"+
		"\2\u06bb\u06bc\7\\\2\2\u06bc\u06be\3\2\2\2\u06bd\u06b6\3\2\2\2\u06bd\u06ba"+
		"\3\2\2\2\u06be\u06cb\3\2\2\2\u06bf\u06c0\f\5\2\2\u06c0\u06c2\7\u0081\2"+
		"\2\u06c1\u06c3\5\u00fe\u0080\2\u06c2\u06c1\3\2\2\2\u06c2\u06c3\3\2\2\2"+
		"\u06c3\u06ca\3\2\2\2\u06c4\u06c5\f\3\2\2\u06c5\u06c6\7\u0081\2\2\u06c6"+
		"\u06c7\5\u00fe\u0080\2\u06c7\u06c8\7\\\2\2\u06c8\u06ca\3\2\2\2\u06c9\u06bf"+
		"\3\2\2\2\u06c9\u06c4\3\2\2\2\u06ca\u06cd\3\2\2\2\u06cb\u06c9\3\2\2\2\u06cb"+
		"\u06cc\3\2\2\2\u06cc\u00fd\3\2\2\2\u06cd\u06cb\3\2\2\2\u06ce\u06d0\5\u0100"+
		"\u0081\2\u06cf\u06d1\5\u0106\u0084\2\u06d0\u06cf\3\2\2\2\u06d0\u06d1\3"+
		"\2\2\2\u06d1\u00ff\3\2\2\2\u06d2\u06d5\7\u008d\2\2\u06d3\u06d5\5\u0102"+
		"\u0082\2\u06d4\u06d2\3\2\2\2\u06d4\u06d3\3\2\2\2\u06d5\u0101\3\2\2\2\u06d6"+
		"\u06d7\5\u0104\u0083\2\u06d7\u06d8\7^\2\2\u06d8\u06d9\7\u008d\2\2\u06d9"+
		"\u0103\3\2\2\2\u06da\u06db\7\u008d\2\2\u06db\u0105\3\2\2\2\u06dc\u06de"+
		"\7X\2\2\u06dd\u06df\5\u0108\u0085\2\u06de\u06dd\3\2\2\2\u06de\u06df\3"+
		"\2\2\2\u06df\u06e0\3\2\2\2\u06e0\u06e1\7Y\2\2\u06e1\u0107\3\2\2\2\u06e2"+
		"\u06e3\b\u0085\1\2\u06e3\u06e4\5\u010a\u0086\2\u06e4\u06e9\3\2\2\2\u06e5"+
		"\u06e6\f\3\2\2\u06e6\u06e8\5\u010a\u0086\2\u06e7\u06e5\3\2\2\2\u06e8\u06eb"+
		"\3\2\2\2\u06e9\u06e7\3\2\2\2\u06e9\u06ea\3\2\2\2\u06ea\u0109\3\2\2\2\u06eb"+
		"\u06e9\3\2\2\2\u06ec\u06ee\7X\2\2\u06ed\u06ef\5\u0108\u0085\2\u06ee\u06ed"+
		"\3\2\2\2\u06ee\u06ef\3\2\2\2\u06ef\u06f0\3\2\2\2\u06f0\u06fd\7Y\2\2\u06f1"+
		"\u06f3\7V\2\2\u06f2\u06f4\5\u0108\u0085\2\u06f3\u06f2\3\2\2\2\u06f3\u06f4"+
		"\3\2\2\2\u06f4\u06f5\3\2\2\2\u06f5\u06fd\7W\2\2\u06f6\u06f8\7T\2\2\u06f7"+
		"\u06f9\5\u0108\u0085\2\u06f8\u06f7\3\2\2\2\u06f8\u06f9\3\2\2\2\u06f9\u06fa"+
		"\3\2\2\2\u06fa\u06fd\7U\2\2\u06fb\u06fd\5\u010c\u0087\2\u06fc\u06ec\3"+
		"\2\2\2\u06fc\u06f1\3\2\2\2\u06fc\u06f6\3\2\2\2\u06fc\u06fb\3\2\2\2\u06fd"+
		"\u010b\3\2\2\2\u06fe\u06ff\n\n\2\2\u06ff\u010d\3\2\2\2\u0700\u0701\b\u0088"+
		"\1\2\u0701\u0702\5\u0110\u0089\2\u0702\u0708\3\2\2\2\u0703\u0704\f\3\2"+
		"\2\u0704\u0705\7\u0081\2\2\u0705\u0707\5\u0110\u0089\2\u0706\u0703\3\2"+
		"\2\2\u0707\u070a\3\2\2\2\u0708\u0706\3\2\2\2\u0708\u0709\3\2\2\2\u0709"+
		"\u010f\3\2\2\2\u070a\u0708\3\2\2\2\u070b\u070d\5\u0112\u008a\2\u070c\u070e"+
		"\5\u0148\u00a5\2\u070d\u070c\3\2\2\2\u070d\u070e\3\2\2\2\u070e\u0111\3"+
		"\2\2\2\u070f\u0712\5\u0114\u008b\2\u0710\u0712\5\u0116\u008c\2\u0711\u070f"+
		"\3\2\2\2\u0711\u0710\3\2\2\2\u0712\u0113\3\2\2\2\u0713\u0714\5\u0120\u0091"+
		"\2\u0714\u0715\5\u0112\u008a\2\u0715\u0115\3\2\2\2\u0716\u0718\b\u008c"+
		"\1\2\u0717\u0719\7\\\2\2\u0718\u0717\3\2\2\2\u0718\u0719\3\2\2\2\u0719"+
		"\u071a\3\2\2\2\u071a\u071c\5\20\t\2\u071b\u071d\5\u00f4{\2\u071c\u071b"+
		"\3\2\2\2\u071c\u071d\3\2\2\2\u071d\u0723\3\2\2\2\u071e\u071f\7X\2\2\u071f"+
		"\u0720\5\u0114\u008b\2\u0720\u0721\7Y\2\2\u0721\u0723\3\2\2\2\u0722\u0716"+
		"\3\2\2\2\u0722\u071e\3\2\2\2\u0723\u0731\3\2\2\2\u0724\u0725\f\5\2\2\u0725"+
		"\u0727\7V\2\2\u0726\u0728\5x=\2\u0727\u0726\3\2\2\2\u0727\u0728\3\2\2"+
		"\2\u0728\u0729\3\2\2\2\u0729\u072b\7W\2\2\u072a\u072c\5\u00f4{\2\u072b"+
		"\u072a\3\2\2\2\u072b\u072c\3\2\2\2\u072c\u0730\3\2\2\2\u072d\u072e\f\4"+
		"\2\2\u072e\u0730\5\u0118\u008d\2\u072f\u0724\3\2\2\2\u072f\u072d\3\2\2"+
		"\2\u0730\u0733\3\2\2\2\u0731\u072f\3\2\2\2\u0731\u0732\3\2\2\2\u0732\u0117"+
		"\3\2\2\2\u0733\u0731\3\2\2\2\u0734\u0735\5\u011a\u008e\2\u0735\u0736\5"+
		"\u011c\u008f\2\u0736\u0119\3\2\2\2\u0737\u0738\7X\2\2\u0738\u0739\5\u0136"+
		"\u009c\2\u0739\u073a\7Y\2\2\u073a\u011b\3\2\2\2\u073b\u073d\5\u0122\u0092"+
		"\2\u073c\u073b\3\2\2\2\u073c\u073d\3\2\2\2\u073d\u073f\3\2\2\2\u073e\u0740"+
		"\5\u0126\u0094\2\u073f\u073e\3\2\2\2\u073f\u0740\3\2\2\2\u0740\u0742\3"+
		"\2\2\2\u0741\u0743\5\u01ae\u00d8\2\u0742\u0741\3\2\2\2\u0742\u0743\3\2"+
		"\2\2\u0743\u0745\3\2\2\2\u0744\u0746\5\u00f4{\2\u0745\u0744\3\2\2\2\u0745"+
		"\u0746\3\2\2\2\u0746\u011d\3\2\2\2\u0747\u0748\7\u0083\2\2\u0748\u0749"+
		"\5\u0128\u0095\2\u0749\u011f\3\2\2\2\u074a\u074c\7c\2\2\u074b\u074d\5"+
		"\u00f4{\2\u074c\u074b\3\2\2\2\u074c\u074d\3\2\2\2\u074d\u074f\3\2\2\2"+
		"\u074e\u0750\5\u0122\u0092\2\u074f\u074e\3\2\2\2\u074f\u0750\3\2\2\2\u0750"+
		"\u0762\3\2\2\2\u0751\u0753\7g\2\2\u0752\u0754\5\u00f4{\2\u0753\u0752\3"+
		"\2\2\2\u0753\u0754\3\2\2\2\u0754\u0762\3\2\2\2\u0755\u0757\7}\2\2\u0756"+
		"\u0758\5\u00f4{\2\u0757\u0756\3\2\2\2\u0757\u0758\3\2\2\2\u0758\u0762"+
		"\3\2\2\2\u0759\u075a\5\26\f\2\u075a\u075c\7c\2\2\u075b\u075d\5\u00f4{"+
		"\2\u075c\u075b\3\2\2\2\u075c\u075d\3\2\2\2\u075d\u075f\3\2\2\2\u075e\u0760"+
		"\5\u0122\u0092\2\u075f\u075e\3\2\2\2\u075f\u0760\3\2\2\2\u0760\u0762\3"+
		"\2\2\2\u0761\u074a\3\2\2\2\u0761\u0751\3\2\2\2\u0761\u0755\3\2\2\2\u0761"+
		"\u0759\3\2\2\2\u0762\u0121\3\2\2\2\u0763\u0765\5\u0124\u0093\2\u0764\u0766"+
		"\5\u0122\u0092\2\u0765\u0764\3\2\2\2\u0765\u0766\3\2\2\2\u0766\u0123\3"+
		"\2\2\2\u0767\u0768\t\13\2\2\u0768\u0125\3\2\2\2\u0769\u076a\7g\2\2\u076a"+
		"\u076b\7}\2\2\u076b\u0127\3\2\2\2\u076c\u076e\5\u00b8]\2\u076d\u076f\5"+
		"\u012c\u0097\2\u076e\u076d\3\2\2\2\u076e\u076f\3\2\2\2\u076f\u0129\3\2"+
		"\2\2\u0770\u0772\5\u00bc_\2\u0771\u0773\5\u012c\u0097\2\u0772\u0771\3"+
		"\2\2\2\u0772\u0773\3\2\2\2\u0773\u012b\3\2\2\2\u0774\u077d\5\u012e\u0098"+
		"\2\u0775\u0777\5\u0130\u0099\2\u0776\u0775\3\2\2\2\u0776\u0777\3\2\2\2"+
		"\u0777\u0778\3\2\2\2\u0778\u0779\5\u0118\u008d\2\u0779\u077a\5\u011e\u0090"+
		"\2\u077a\u077d\3\2\2\2\u077b\u077d\5\u0132\u009a\2\u077c\u0774\3\2\2\2"+
		"\u077c\u0776\3\2\2\2\u077c\u077b\3\2\2\2\u077d\u012d\3\2\2\2\u077e\u0784"+
		"\5\u0130\u0099\2\u077f\u0781\5\u0120\u0091\2\u0780\u0782\5\u012e\u0098"+
		"\2\u0781\u0780\3\2\2\2\u0781\u0782\3\2\2\2\u0782\u0784\3\2\2\2\u0783\u077e"+
		"\3\2\2\2\u0783\u077f\3\2\2\2\u0784\u012f\3\2\2\2\u0785\u0786\b\u0099\1"+
		"\2\u0786\u0794\5\u0118\u008d\2\u0787\u0789\7V\2\2\u0788\u078a\5x=\2\u0789"+
		"\u0788\3\2\2\2\u0789\u078a\3\2\2\2\u078a\u078b\3\2\2\2\u078b\u078d\7W"+
		"\2\2\u078c\u078e\5\u00f4{\2\u078d\u078c\3\2\2\2\u078d\u078e\3\2\2\2\u078e"+
		"\u0794\3\2\2\2\u078f\u0790\7X\2\2\u0790\u0791\5\u012e\u0098\2\u0791\u0792"+
		"\7Y\2\2\u0792\u0794\3\2\2\2\u0793\u0785\3\2\2\2\u0793\u0787\3\2\2\2\u0793"+
		"\u078f\3\2\2\2\u0794\u07a2\3\2\2\2\u0795\u0796\f\6\2\2\u0796\u07a1\5\u0118"+
		"\u008d\2\u0797\u0798\f\4\2\2\u0798\u079a\7V\2\2\u0799\u079b\5x=\2\u079a"+
		"\u0799\3\2\2\2\u079a\u079b\3\2\2\2\u079b\u079c\3\2\2\2\u079c\u079e\7W"+
		"\2\2\u079d\u079f\5\u00f4{\2\u079e\u079d\3\2\2\2\u079e\u079f\3\2\2\2\u079f"+
		"\u07a1\3\2\2\2\u07a0\u0795\3\2\2\2\u07a0\u0797\3\2\2\2\u07a1\u07a4\3\2"+
		"\2\2\u07a2\u07a0\3\2\2\2\u07a2\u07a3\3\2\2\2\u07a3\u0131\3\2\2\2\u07a4"+
		"\u07a2\3\2\2\2\u07a5\u07aa\5\u0134\u009b\2\u07a6\u07a7\5\u0120\u0091\2"+
		"\u07a7\u07a8\5\u0132\u009a\2\u07a8\u07aa\3\2\2\2\u07a9\u07a5\3\2\2\2\u07a9"+
		"\u07a6\3\2\2\2\u07aa\u0133\3\2\2\2\u07ab\u07ac\b\u009b\1\2\u07ac\u07ad"+
		"\7\\\2\2\u07ad\u07bb\3\2\2\2\u07ae\u07af\f\5\2\2\u07af\u07ba\5\u0118\u008d"+
		"\2\u07b0\u07b1\f\4\2\2\u07b1\u07b3\7V\2\2\u07b2\u07b4\5x=\2\u07b3\u07b2"+
		"\3\2\2\2\u07b3\u07b4\3\2\2\2\u07b4\u07b5\3\2\2\2\u07b5\u07b7\7W\2\2\u07b6"+
		"\u07b8\5\u00f4{\2\u07b7\u07b6\3\2\2\2\u07b7\u07b8\3\2\2\2\u07b8\u07ba"+
		"\3\2\2\2\u07b9\u07ae\3\2\2\2\u07b9\u07b0\3\2\2\2\u07ba\u07bd\3\2\2\2\u07bb"+
		"\u07b9\3\2\2\2\u07bb\u07bc\3\2\2\2\u07bc\u0135\3\2\2\2\u07bd\u07bb\3\2"+
		"\2\2\u07be\u07c0\5\u0138\u009d\2\u07bf\u07be\3\2\2\2\u07bf\u07c0\3\2\2"+
		"\2\u07c0\u07c2\3\2\2\2\u07c1\u07c3\7\\\2\2\u07c2\u07c1\3\2\2\2\u07c2\u07c3"+
		"\3\2\2\2\u07c3\u07c9\3\2\2\2\u07c4\u07c5\5\u0138\u009d\2\u07c5\u07c6\7"+
		"\u0081\2\2\u07c6\u07c7\7\\\2\2\u07c7\u07c9\3\2\2\2\u07c8\u07bf\3\2\2\2"+
		"\u07c8\u07c4\3\2\2\2\u07c9\u0137\3\2\2\2\u07ca\u07cb\b\u009d\1\2\u07cb"+
		"\u07cc\5\u013a\u009e\2\u07cc\u07d2\3\2\2\2\u07cd\u07ce\f\3\2\2\u07ce\u07cf"+
		"\7\u0081\2\2\u07cf\u07d1\5\u013a\u009e\2\u07d0\u07cd\3\2\2\2\u07d1\u07d4"+
		"\3\2\2\2\u07d2\u07d0\3\2\2\2\u07d2\u07d3\3\2\2\2\u07d3\u0139\3\2\2\2\u07d4"+
		"\u07d2\3\2\2\2\u07d5\u07d7\5\u00f4{\2\u07d6\u07d5\3\2\2\2\u07d6\u07d7"+
		"\3\2\2\2\u07d7\u07d8\3\2\2\2\u07d8\u07d9\5\u00aaV\2\u07d9\u07da\5\u0112"+
		"\u008a\2\u07da\u07e4\3\2\2\2\u07db\u07dd\5\u00f4{\2\u07dc\u07db\3\2\2"+
		"\2\u07dc\u07dd\3\2\2\2\u07dd\u07de\3\2\2\2\u07de\u07df\5\u00aaV\2\u07df"+
		"\u07e0\5\u0112\u008a\2\u07e0\u07e1\7k\2\2\u07e1\u07e2\5\u014c\u00a7\2"+
		"\u07e2\u07e4\3\2\2\2\u07e3\u07d6\3\2\2\2\u07e3\u07dc\3\2\2\2\u07e4\u013b"+
		"\3\2\2\2\u07e5\u07e7\5\u00f4{\2\u07e6\u07e5\3\2\2\2\u07e6\u07e7\3\2\2"+
		"\2\u07e7\u07e9\3\2\2\2\u07e8\u07ea\5\u00aaV\2\u07e9\u07e8\3\2\2\2\u07e9"+
		"\u07ea\3\2\2\2\u07ea\u07eb\3\2\2\2\u07eb\u07ed\5\u013e\u00a0\2\u07ec\u07ee"+
		"\5\u0166\u00b4\2\u07ed\u07ec\3\2\2\2\u07ed\u07ee\3\2\2\2\u07ee\u07ef\3"+
		"\2\2\2\u07ef\u07f0\5\u0140\u00a1\2\u07f0\u013d\3\2\2\2\u07f1\u07f2\5\20"+
		"\t\2\u07f2\u07f3\5\u011a\u008e\2\u07f3\u07f5\5\u011c\u008f\2\u07f4\u07f6"+
		"\5\u011e\u0090\2\u07f5\u07f4\3\2\2\2\u07f5\u07f6\3\2\2\2\u07f6\u013f\3"+
		"\2\2\2\u07f7\u07fc\5\u0142\u00a2\2\u07f8\u07fc\5\u01a6\u00d4\2\u07f9\u07fc"+
		"\5\u0144\u00a3\2\u07fa\u07fc\5\u0146\u00a4\2\u07fb\u07f7\3\2\2\2\u07fb"+
		"\u07f8\3\2\2\2\u07fb\u07f9\3\2\2\2\u07fb\u07fa\3\2\2\2\u07fc\u0141\3\2"+
		"\2\2\u07fd\u07ff\5\u017c\u00bf\2\u07fe\u07fd\3\2\2\2\u07fe\u07ff\3\2\2"+
		"\2\u07ff\u0800\3\2\2\2\u0800\u0801\5\u0084C\2\u0801\u0143\3\2\2\2\u0802"+
		"\u0803\7k\2\2\u0803\u0804\7\32\2\2\u0804\u0805\7Z\2\2\u0805\u0145\3\2"+
		"\2\2\u0806\u0807\7k\2\2\u0807\u0808\7\33\2\2\u0808\u0809\7Z\2\2\u0809"+
		"\u0147\3\2\2\2\u080a\u080b\5\u014a\u00a6\2\u080b\u0149\3\2\2\2\u080c\u080d"+
		"\7k\2\2\u080d\u0810\5\u014c\u00a7\2\u080e\u0810\5\u0150\u00a9\2\u080f"+
		"\u080c\3\2\2\2\u080f\u080e\3\2\2\2\u0810\u014b\3\2\2\2\u0811\u0814\5r"+
		":\2\u0812\u0814\5\u0150\u00a9\2\u0813\u0811\3\2\2\2\u0813\u0812\3\2\2"+
		"\2\u0814\u014d\3\2\2\2\u0815\u0816\b\u00a8\1\2\u0816\u0818\5\u014c\u00a7"+
		"\2\u0817\u0819\7\\\2\2\u0818\u0817\3\2\2\2\u0818\u0819\3\2\2\2\u0819\u0822"+
		"\3\2\2\2\u081a\u081b\f\3\2\2\u081b\u081c\7\u0081\2\2\u081c\u081e\5\u014c"+
		"\u00a7\2\u081d\u081f\7\\\2\2\u081e\u081d\3\2\2\2\u081e\u081f\3\2\2\2\u081f"+
		"\u0821\3\2\2\2\u0820\u081a\3\2\2\2\u0821\u0824\3\2\2\2\u0822\u0820\3\2"+
		"\2\2\u0822\u0823\3\2\2\2\u0823\u014f\3\2\2\2\u0824\u0822\3\2\2\2\u0825"+
		"\u0826\7T\2\2\u0826\u0828\5\u014e\u00a8\2\u0827\u0829\7\u0081\2\2\u0828"+
		"\u0827\3\2\2\2\u0828\u0829\3\2\2\2\u0829\u082a\3\2\2\2\u082a\u082b\7U"+
		"\2\2\u082b\u082f\3\2\2\2\u082c\u082d\7T\2\2\u082d\u082f\7U\2\2\u082e\u0825"+
		"\3\2\2\2\u082e\u082c\3\2\2\2\u082f\u0151\3\2\2\2\u0830\u0833\5v<\2\u0831"+
		"\u0833\5\u0150\u00a9\2\u0832\u0830\3\2\2\2\u0832\u0831\3\2\2\2\u0833\u0153"+
		"\3\2\2\2\u0834\u0835\5\u0156\u00ac\2\u0835\u0837\7T\2\2\u0836\u0838\5"+
		"\u015e\u00b0\2\u0837\u0836\3\2\2\2\u0837\u0838\3\2\2\2\u0838\u0839\3\2"+
		"\2\2\u0839\u083a\7U\2\2\u083a\u0155\3\2\2\2\u083b\u083d\5\u015c\u00af"+
		"\2\u083c\u083e\5\u00f4{\2\u083d\u083c\3\2\2\2\u083d\u083e\3\2\2\2\u083e"+
		"\u083f\3\2\2\2\u083f\u0841\5\u0158\u00ad\2\u0840\u0842\5\u015a\u00ae\2"+
		"\u0841\u0840\3\2\2\2\u0841\u0842\3\2\2\2\u0842\u0844\3\2\2\2\u0843\u0845"+
		"\5\u016c\u00b7\2\u0844\u0843\3\2\2\2\u0844\u0845\3\2\2\2\u0845\u084e\3"+
		"\2\2\2\u0846\u0848\5\u015c\u00af\2\u0847\u0849\5\u00f6|\2\u0848\u0847"+
		"\3\2\2\2\u0848\u0849\3\2\2\2\u0849\u084b\3\2\2\2\u084a\u084c\5\u016c\u00b7"+
		"\2\u084b\u084a\3\2\2\2\u084b\u084c\3\2\2\2\u084c\u084e\3\2\2\2\u084d\u083b"+
		"\3\2\2\2\u084d\u0846\3\2\2\2\u084e\u0157\3\2\2\2\u084f\u0851\5\26\f\2"+
		"\u0850\u084f\3\2\2\2\u0850\u0851\3\2\2\2\u0851\u0852\3\2\2\2\u0852\u0853"+
		"\5\b\5\2\u0853\u0159\3\2\2\2\u0854\u0855\7S\2\2\u0855\u015b\3\2\2\2\u0856"+
		"\u0857\t\f\2\2\u0857\u015d\3\2\2\2\u0858\u085a\5\u0160\u00b1\2\u0859\u085b"+
		"\5\u015e\u00b0\2\u085a\u0859\3\2\2\2\u085a\u085b\3\2\2\2\u085b\u0862\3"+
		"\2\2\2\u085c\u085d\5\u0174\u00bb\2\u085d\u085f\7[\2\2\u085e\u0860\5\u015e"+
		"\u00b0\2\u085f\u085e\3\2\2\2\u085f\u0860\3\2\2\2\u0860\u0862\3\2\2\2\u0861"+
		"\u0858\3\2\2\2\u0861\u085c\3\2\2\2\u0862\u015f\3\2\2\2\u0863\u0865\5\u00f4"+
		"{\2\u0864\u0863\3\2\2\2\u0864\u0865\3\2\2\2\u0865\u0866\3\2\2\2\u0866"+
		"\u0867\5\u00aaV\2\u0867\u0868\5\u0162\u00b2\2\u0868\u0869\7Z\2\2\u0869"+
		"\u0872\3\2\2\2\u086a\u0872\5\u013c\u009f\2\u086b\u0872\5\u00e8u\2\u086c"+
		"\u0872\5\u00a2R\2\u086d\u0872\5\u018a\u00c6\2\u086e\u0872\5\u01a2\u00d2"+
		"\2\u086f\u0872\5\u009eP\2\u0870\u0872\5\u00a4S\2\u0871\u0864\3\2\2\2\u0871"+
		"\u086a\3\2\2\2\u0871\u086b\3\2\2\2\u0871\u086c\3\2\2\2\u0871\u086d\3\2"+
		"\2\2\u0871\u086e\3\2\2\2\u0871\u086f\3\2\2\2\u0871\u0870\3\2\2\2\u0872"+
		"\u0161\3\2\2\2\u0873\u0874\b\u00b2\1\2\u0874\u0875\5\u0164\u00b3\2\u0875"+
		"\u087b\3\2\2\2\u0876\u0877\f\3\2\2\u0877\u0878\7\u0081\2\2\u0878\u087a"+
		"\5\u0164\u00b3\2\u0879\u0876\3\2\2\2\u087a\u087d\3\2\2\2\u087b\u0879\3"+
		"\2\2\2\u087b\u087c\3\2\2\2\u087c\u0163\3\2\2\2\u087d\u087b\3\2\2\2\u087e"+
		"\u0880\5\u0112\u008a\2\u087f\u0881\5\u0166\u00b4\2\u0880\u087f\3\2\2\2"+
		"\u0880\u0881\3\2\2\2\u0881\u088e\3\2\2\2\u0882\u0883\5\u0112\u008a\2\u0883"+
		"\u0884\5\u014a\u00a6\2\u0884\u088e\3\2\2\2\u0885\u0887\7\u008d\2\2\u0886"+
		"\u0885\3\2\2\2\u0886\u0887\3\2\2\2\u0887\u0889\3\2\2\2\u0888\u088a\5\u00f4"+
		"{\2\u0889\u0888\3\2\2\2\u0889\u088a\3\2\2\2\u088a\u088b\3\2\2\2\u088b"+
		"\u088c\7[\2\2\u088c\u088e\5x=\2\u088d\u087e\3\2\2\2\u088d\u0882\3\2\2"+
		"\2\u088d\u0886\3\2\2\2\u088e\u0165\3\2\2\2\u088f\u0890\b\u00b4\1\2\u0890"+
		"\u0891\5\u0168\u00b5\2\u0891\u0896\3\2\2\2\u0892\u0893\f\3\2\2\u0893\u0895"+
		"\5\u0168\u00b5\2\u0894\u0892\3\2\2\2\u0895\u0898\3\2\2\2\u0896\u0894\3"+
		"\2\2\2\u0896\u0897\3\2\2\2\u0897\u0167\3\2\2\2\u0898\u0896\3\2\2\2\u0899"+
		"\u089a\t\r\2\2\u089a\u0169\3\2\2\2\u089b\u089c\7k\2\2\u089c\u089d\7\u0084"+
		"\2\2\u089d\u016b\3\2\2\2\u089e\u089f\7[\2\2\u089f\u08a0\5\u016e\u00b8"+
		"\2\u08a0\u016d\3\2\2\2\u08a1\u08a2\b\u00b8\1\2\u08a2\u08a4\5\u0170\u00b9"+
		"\2\u08a3\u08a5\7\\\2\2\u08a4\u08a3\3\2\2\2\u08a4\u08a5\3\2\2\2\u08a5\u08ae"+
		"\3\2\2\2\u08a6\u08a7\f\3\2\2\u08a7\u08a8\7\u0081\2\2\u08a8\u08aa\5\u0170"+
		"\u00b9\2\u08a9\u08ab\7\\\2\2\u08aa\u08a9\3\2\2\2\u08aa\u08ab\3\2\2\2\u08ab"+
		"\u08ad\3\2\2\2\u08ac\u08a6\3\2\2\2\u08ad\u08b0\3\2\2\2\u08ae\u08ac\3\2"+
		"\2\2\u08ae\u08af\3\2\2\2\u08af\u016f\3\2\2\2\u08b0\u08ae\3\2\2\2\u08b1"+
		"\u08b3\5\u00f4{\2\u08b2\u08b1\3\2\2\2\u08b2\u08b3\3\2\2\2\u08b3\u08b4"+
		"\3\2\2\2\u08b4\u08c7\5\u0172\u00ba\2\u08b5\u08b7\5\u00f4{\2\u08b6\u08b5"+
		"\3\2\2\2\u08b6\u08b7\3\2\2\2\u08b7\u08b8\3\2\2\2\u08b8\u08ba\7M\2\2\u08b9"+
		"\u08bb\5\u0174\u00bb\2\u08ba\u08b9\3\2\2\2\u08ba\u08bb\3\2\2\2\u08bb\u08bc"+
		"\3\2\2\2\u08bc\u08c7\5\u0172\u00ba\2\u08bd\u08bf\5\u00f4{\2\u08be\u08bd"+
		"\3\2\2\2\u08be\u08bf\3\2\2\2\u08bf\u08c0\3\2\2\2\u08c0\u08c2\5\u0174\u00bb"+
		"\2\u08c1\u08c3\7M\2\2\u08c2\u08c1\3\2\2\2\u08c2\u08c3\3\2\2\2\u08c3\u08c4"+
		"\3\2\2\2\u08c4\u08c5\5\u0172\u00ba\2\u08c5\u08c7\3\2\2\2\u08c6\u08b2\3"+
		"\2\2\2\u08c6\u08b6\3\2\2\2\u08c6\u08be\3\2\2\2\u08c7\u0171\3\2\2\2\u08c8"+
		"\u08ca\5\26\f\2\u08c9\u08c8\3\2\2\2\u08c9\u08ca\3\2\2\2\u08ca\u08cb\3"+
		"\2\2\2\u08cb\u08d2\5\b\5\2\u08cc\u08cd\5\26\f\2\u08cd\u08ce\7A\2\2\u08ce"+
		"\u08cf\5\u0194\u00cb\2\u08cf\u08d2\3\2\2\2\u08d0\u08d2\5\u00c2b\2\u08d1"+
		"\u08c9\3\2\2\2\u08d1\u08cc\3\2\2\2\u08d1\u08d0\3\2\2\2\u08d2\u0173\3\2"+
		"\2\2\u08d3\u08d4\t\16\2\2\u08d4\u0175\3\2\2\2\u08d5\u08d6\7\62\2\2\u08d6"+
		"\u08d7\5\u0178\u00bd\2\u08d7\u0177\3\2\2\2\u08d8\u08da\5\u00b8]\2\u08d9"+
		"\u08db\5\u017a\u00be\2\u08da\u08d9\3\2\2\2\u08da\u08db\3\2\2\2\u08db\u0179"+
		"\3\2\2\2\u08dc\u08de\5\u0120\u0091\2\u08dd\u08df\5\u017a\u00be\2\u08de"+
		"\u08dd\3\2\2\2\u08de\u08df\3\2\2\2\u08df\u017b\3\2\2\2\u08e0\u08e1\7["+
		"\2\2\u08e1\u08e2\5\u017e\u00c0\2\u08e2\u017d\3\2\2\2\u08e3\u08e4\b\u00c0"+
		"\1\2\u08e4\u08e6\5\u0180\u00c1\2\u08e5\u08e7\7\\\2\2\u08e6\u08e5\3\2\2"+
		"\2\u08e6\u08e7\3\2\2\2\u08e7\u08f0\3\2\2\2\u08e8\u08e9\f\3\2\2\u08e9\u08ea"+
		"\7\u0081\2\2\u08ea\u08ec\5\u0180\u00c1\2\u08eb\u08ed\7\\\2\2\u08ec\u08eb"+
		"\3\2\2\2\u08ec\u08ed\3\2\2\2\u08ed\u08ef\3\2\2\2\u08ee\u08e8\3\2\2\2\u08ef"+
		"\u08f2\3\2\2\2\u08f0\u08ee\3\2\2\2\u08f0\u08f1\3\2\2\2\u08f1\u017f\3\2"+
		"\2\2\u08f2\u08f0\3\2\2\2\u08f3\u08f4\5\u0182\u00c2\2\u08f4\u08f6\7X\2"+
		"\2\u08f5\u08f7\5> \2\u08f6\u08f5\3\2\2\2\u08f6\u08f7\3\2\2\2\u08f7\u08f8"+
		"\3\2\2\2\u08f8\u08f9\7Y\2\2\u08f9\u08fe\3\2\2\2\u08fa\u08fb\5\u0182\u00c2"+
		"\2\u08fb\u08fc\5\u0150\u00a9\2\u08fc\u08fe\3\2\2\2\u08fd\u08f3\3\2\2\2"+
		"\u08fd\u08fa\3\2\2\2\u08fe\u0181\3\2\2\2\u08ff\u0900\7\u008d\2\2\u0900"+
		"\u0183\3\2\2\2\u0901\u0902\7\62\2\2\u0902\u0903\5\u0186\u00c4\2\u0903"+
		"\u0185\3\2\2\2\u0904\u0935\7/\2\2\u0905\u0935\7\33\2\2\u0906\u0907\7/"+
		"\2\2\u0907\u0908\7T\2\2\u0908\u0935\7W\2\2\u0909\u090a\7\33\2\2\u090a"+
		"\u090b\7T\2\2\u090b\u0935\7W\2\2\u090c\u0935\7a\2\2\u090d\u0935\7b\2\2"+
		"\u090e\u0935\7c\2\2\u090f\u0935\7d\2\2\u0910\u0935\7e\2\2\u0911\u0935"+
		"\7f\2\2\u0912\u0935\7g\2\2\u0913\u0935\7h\2\2\u0914\u0935\7i\2\2\u0915"+
		"\u0935\7j\2\2\u0916\u0935\7k\2\2\u0917\u0935\7l\2\2\u0918\u0935\7m\2\2"+
		"\u0919\u0935\7n\2\2\u091a\u0935\7o\2\2\u091b\u0935\7p\2\2\u091c\u0935"+
		"\7q\2\2\u091d\u0935\7r\2\2\u091e\u0935\7s\2\2\u091f\u0935\7t\2\2\u0920"+
		"\u0935\7u\2\2\u0921\u0935\7v\2\2\u0922\u0935\5\2\2\2\u0923\u0935\7x\2"+
		"\2\u0924\u0935\7w\2\2\u0925\u0935\7y\2\2\u0926\u0935\7z\2\2\u0927\u0935"+
		"\7{\2\2\u0928\u0935\7|\2\2\u0929\u0935\7}\2\2\u092a\u0935\7~\2\2\u092b"+
		"\u0935\7\177\2\2\u092c\u0935\7\u0080\2\2\u092d\u0935\7\u0081\2\2\u092e"+
		"\u0935\7\u0082\2\2\u092f\u0935\7\u0083\2\2\u0930\u0931\7X\2\2\u0931\u0935"+
		"\7Y\2\2\u0932\u0933\7V\2\2\u0933\u0935\7W\2\2\u0934\u0904\3\2\2\2\u0934"+
		"\u0905\3\2\2\2\u0934\u0906\3\2\2\2\u0934\u0909\3\2\2\2\u0934\u090c\3\2"+
		"\2\2\u0934\u090d\3\2\2\2\u0934\u090e\3\2\2\2\u0934\u090f\3\2\2\2\u0934"+
		"\u0910\3\2\2\2\u0934\u0911\3\2\2\2\u0934\u0912\3\2\2\2\u0934\u0913\3\2"+
		"\2\2\u0934\u0914\3\2\2\2\u0934\u0915\3\2\2\2\u0934\u0916\3\2\2\2\u0934"+
		"\u0917\3\2\2\2\u0934\u0918\3\2\2\2\u0934\u0919\3\2\2\2\u0934\u091a\3\2"+
		"\2\2\u0934\u091b\3\2\2\2\u0934\u091c\3\2\2\2\u0934\u091d\3\2\2\2\u0934"+
		"\u091e\3\2\2\2\u0934\u091f\3\2\2\2\u0934\u0920\3\2\2\2\u0934\u0921\3\2"+
		"\2\2\u0934\u0922\3\2\2\2\u0934\u0923\3\2\2\2\u0934\u0924\3\2\2\2\u0934"+
		"\u0925\3\2\2\2\u0934\u0926\3\2\2\2\u0934\u0927\3\2\2\2\u0934\u0928\3\2"+
		"\2\2\u0934\u0929\3\2\2\2\u0934\u092a\3\2\2\2\u0934\u092b\3\2\2\2\u0934"+
		"\u092c\3\2\2\2\u0934\u092d\3\2\2\2\u0934\u092e\3\2\2\2\u0934\u092f\3\2"+
		"\2\2\u0934\u0930\3\2\2\2\u0934\u0932\3\2\2\2\u0935\u0187\3\2\2\2\u0936"+
		"\u0937\7\62\2\2\u0937\u0938\7\u0088\2\2\u0938\u093c\7\u008d\2\2\u0939"+
		"\u093a\7\62\2\2\u093a\u093c\7\u008c\2\2\u093b\u0936\3\2\2\2\u093b\u0939"+
		"\3\2\2\2\u093c\u0189\3\2\2\2\u093d\u093e\7A\2\2\u093e\u093f\7l\2\2\u093f"+
		"\u0940\5\u018c\u00c7\2\u0940\u0941\7m\2\2\u0941\u0942\5\u0098M\2\u0942"+
		"\u018b\3\2\2\2\u0943\u0944\b\u00c7\1\2\u0944\u0945\5\u018e\u00c8\2\u0945"+
		"\u094b\3\2\2\2\u0946\u0947\f\3\2\2\u0947\u0948\7\u0081\2\2\u0948\u094a"+
		"\5\u018e\u00c8\2\u0949\u0946\3\2\2\2\u094a\u094d\3\2\2\2\u094b\u0949\3"+
		"\2\2\2\u094b\u094c\3\2\2\2\u094c\u018d\3\2\2\2\u094d\u094b\3\2\2\2\u094e"+
		"\u0951\5\u0190\u00c9\2\u094f\u0951\5\u013a\u009e\2\u0950\u094e\3\2\2\2"+
		"\u0950\u094f\3\2\2\2\u0951\u018f\3\2\2\2\u0952\u0954\5\u0192\u00ca\2\u0953"+
		"\u0955\7\\\2\2\u0954\u0953\3\2\2\2\u0954\u0955\3\2\2\2\u0955\u0957\3\2"+
		"\2\2\u0956\u0958\7\u008d\2\2\u0957\u0956\3\2\2\2\u0957\u0958\3\2\2\2\u0958"+
		"\u0977\3\2\2\2\u0959\u095b\5\u0192\u00ca\2\u095a\u095c\7\u008d\2\2\u095b"+
		"\u095a\3\2\2\2\u095b\u095c\3\2\2\2\u095c\u095d\3\2\2\2\u095d\u095e\7k"+
		"\2\2\u095e\u095f\5\u0128\u0095\2\u095f\u0977\3\2\2\2\u0960\u0961\7A\2"+
		"\2\u0961\u0962\7l\2\2\u0962\u0963\5\u018c\u00c7\2\u0963\u0964\7m\2\2\u0964"+
		"\u0966\5\u0192\u00ca\2\u0965\u0967\7\\\2\2\u0966\u0965\3\2\2\2\u0966\u0967"+
		"\3\2\2\2\u0967\u0969\3\2\2\2\u0968\u096a\7\u008d\2\2\u0969\u0968\3\2\2"+
		"\2\u0969\u096a\3\2\2\2";
	private static final String _serializedATNSegment1 =
		"\u096a\u0977\3\2\2\2\u096b\u096c\7A\2\2\u096c\u096d\7l\2\2\u096d\u096e"+
		"\5\u018c\u00c7\2\u096e\u096f\7m\2\2\u096f\u0971\5\u0192\u00ca\2\u0970"+
		"\u0972\7\u008d\2\2\u0971\u0970\3\2\2\2\u0971\u0972\3\2\2\2\u0972\u0973"+
		"\3\2\2\2\u0973\u0974\7k\2\2\u0974\u0975\5\20\t\2\u0975\u0977\3\2\2\2\u0976"+
		"\u0952\3\2\2\2\u0976\u0959\3\2\2\2\u0976\u0960\3\2\2\2\u0976\u096b\3\2"+
		"\2\2\u0977\u0191\3\2\2\2\u0978\u0979\t\17\2\2\u0979\u0193\3\2\2\2\u097a"+
		"\u097b\5\n\6\2\u097b\u097d\7l\2\2\u097c\u097e\5\u0198\u00cd\2\u097d\u097c"+
		"\3\2\2\2\u097d\u097e\3\2\2\2\u097e\u097f\3\2\2\2\u097f\u0980\7m\2\2\u0980"+
		"\u0195\3\2\2\2\u0981\u0991\5\u0194\u00cb\2\u0982\u0983\5\u0184\u00c3\2"+
		"\u0983\u0985\7l\2\2\u0984\u0986\5\u0198\u00cd\2\u0985\u0984\3\2\2\2\u0985"+
		"\u0986\3\2\2\2\u0986\u0987\3\2\2\2\u0987\u0988\7m\2\2\u0988\u0991\3\2"+
		"\2\2\u0989\u098a\5\u0188\u00c5\2\u098a\u098c\7l\2\2\u098b\u098d\5\u0198"+
		"\u00cd\2\u098c\u098b\3\2\2\2\u098c\u098d\3\2\2\2\u098d\u098e\3\2\2\2\u098e"+
		"\u098f\7m\2\2\u098f\u0991\3\2\2\2\u0990\u0981\3\2\2\2\u0990\u0982\3\2"+
		"\2\2\u0990\u0989\3\2\2\2\u0991\u0197\3\2\2\2\u0992\u0993\b\u00cd\1\2\u0993"+
		"\u0995\5\u019a\u00ce\2\u0994\u0996\7\\\2\2\u0995\u0994\3\2\2\2\u0995\u0996"+
		"\3\2\2\2\u0996\u099f\3\2\2\2\u0997\u0998\f\3\2\2\u0998\u0999\7\u0081\2"+
		"\2\u0999\u099b\5\u019a\u00ce\2\u099a\u099c\7\\\2\2\u099b\u099a\3\2\2\2"+
		"\u099b\u099c\3\2\2\2\u099c\u099e\3\2\2\2\u099d\u0997\3\2\2\2\u099e\u09a1"+
		"\3\2\2\2\u099f\u099d\3\2\2\2\u099f\u09a0\3\2\2\2\u09a0\u0199\3\2\2\2\u09a1"+
		"\u099f\3\2\2\2\u09a2\u09a3\5\u0128\u0095\2\u09a3\u019b\3\2\2\2\u09a4\u09a5"+
		"\7I\2\2\u09a5\u09a6\5\26\f\2\u09a6\u09a7\7\u008d\2\2\u09a7\u09b0\3\2\2"+
		"\2\u09a8\u09a9\7I\2\2\u09a9\u09ab\5\26\f\2\u09aa\u09ac\7A\2\2\u09ab\u09aa"+
		"\3\2\2\2\u09ab\u09ac\3\2\2\2\u09ac\u09ad\3\2\2\2\u09ad\u09ae\5\u0194\u00cb"+
		"\2\u09ae\u09b0\3\2\2\2\u09af\u09a4\3\2\2\2\u09af\u09a8\3\2\2\2\u09b0\u019d"+
		"\3\2\2\2\u09b1\u09b3\7#\2\2\u09b2\u09b1\3\2\2\2\u09b2\u09b3\3\2\2\2\u09b3"+
		"\u09b4\3\2\2\2\u09b4\u09b5\7A\2\2\u09b5\u09b6\5\u0098M\2\u09b6\u019f\3"+
		"\2\2\2\u09b7\u09b8\7A\2\2\u09b8\u09b9\7l\2\2\u09b9\u09ba\7m\2\2\u09ba"+
		"\u09bb\5\u0098M\2\u09bb\u01a1\3\2\2\2\u09bc\u09be\7!\2\2\u09bd\u09bc\3"+
		"\2\2\2\u09bd\u09be\3\2\2\2\u09be\u09bf\3\2\2\2\u09bf\u09c0\5\n\6\2\u09c0"+
		"\u09c1\7X\2\2\u09c1\u09c2\5\u0136\u009c\2\u09c2\u09c3\7Y\2\2\u09c3\u09c4"+
		"\7\u0083\2\2\u09c4\u09c5\5\u0194\u00cb\2\u09c5\u09c6\7Z\2\2\u09c6\u01a3"+
		"\3\2\2\2\u09c7\u09c8\7F\2\2\u09c8\u09c9\5\u0084C\2\u09c9\u09ca\5\u01a8"+
		"\u00d5\2\u09ca\u01a5\3\2\2\2\u09cb\u09cd\7F\2\2\u09cc\u09ce\5\u017c\u00bf"+
		"\2\u09cd\u09cc\3\2\2\2\u09cd\u09ce\3\2\2\2\u09ce\u09cf\3\2\2\2\u09cf\u09d0"+
		"\5\u0084C\2\u09d0\u09d1\5\u01a8\u00d5\2\u09d1\u01a7\3\2\2\2\u09d2\u09d4"+
		"\5\u01aa\u00d6\2\u09d3\u09d5\5\u01a8\u00d5\2\u09d4\u09d3\3\2\2\2\u09d4"+
		"\u09d5\3\2\2\2\u09d5\u01a9\3\2\2\2\u09d6\u09d7\7\17\2\2\u09d7\u09d8\7"+
		"X\2\2\u09d8\u09d9\5\u01ac\u00d7\2\u09d9\u09da\7Y\2\2\u09da\u09db\5\u0084"+
		"C\2\u09db\u01ab\3\2\2\2\u09dc\u09de\5\u00f4{\2\u09dd\u09dc\3\2\2\2\u09dd"+
		"\u09de\3\2\2\2\u09de\u09df\3\2\2\2\u09df\u09e0\5\u00b8]\2\u09e0\u09e1"+
		"\5\u0112\u008a\2\u09e1\u09eb\3\2\2\2\u09e2\u09e4\5\u00f4{\2\u09e3\u09e2"+
		"\3\2\2\2\u09e3\u09e4\3\2\2\2\u09e4\u09e5\3\2\2\2\u09e5\u09e7\5\u00b8]"+
		"\2\u09e6\u09e8\5\u012c\u0097\2\u09e7\u09e6\3\2\2\2\u09e7\u09e8\3\2\2\2"+
		"\u09e8\u09eb\3\2\2\2\u09e9\u09eb\7\\\2\2\u09ea\u09dd\3\2\2\2\u09ea\u09e3"+
		"\3\2\2\2\u09ea\u09e9\3\2\2\2\u09eb\u01ad\3\2\2\2\u09ec\u09ed\7\60\2\2"+
		"\u09ed\u09ee\7X\2\2\u09ee\u09ef\5x=\2\u09ef\u09f0\7Y\2\2\u09f0\u09f6\3"+
		"\2\2\2\u09f1\u09f6\7\60\2\2\u09f2\u09f3\7D\2\2\u09f3\u09f4\7X\2\2\u09f4"+
		"\u09f6\7Y\2\2\u09f5\u09ec\3\2\2\2\u09f5\u09f1\3\2\2\2\u09f5\u09f2\3\2"+
		"\2\2\u09f6\u01af\3\2\2\2\u09f7\u09f8\b\u00d9\1\2\u09f8\u09f9\7\u008d\2"+
		"\2\u09f9\u09ff\3\2\2\2\u09fa\u09fb\f\3\2\2\u09fb\u09fc\7\u0081\2\2\u09fc"+
		"\u09fe\7\u008d\2\2\u09fd\u09fa\3\2\2\2\u09fe\u0a01\3\2\2\2\u09ff\u09fd"+
		"\3\2\2\2\u09ff\u0a00\3\2\2\2\u0a00\u01b1\3\2\2\2\u0a01\u09ff\3\2\2\2\u0a02"+
		"\u0a0a\5\u01b4\u00db\2\u0a03\u0a0a\7\u0086\2\2\u0a04\u0a0a\7\u0087\2\2"+
		"\u0a05\u0a0a\7\u0088\2\2\u0a06\u0a0a\5\u01b6\u00dc\2\u0a07\u0a0a\5\u01b8"+
		"\u00dd\2\u0a08\u0a0a\5\u01ba\u00de\2\u0a09\u0a02\3\2\2\2\u0a09\u0a03\3"+
		"\2\2\2\u0a09\u0a04\3\2\2\2\u0a09\u0a05\3\2\2\2\u0a09\u0a06\3\2\2\2\u0a09"+
		"\u0a07\3\2\2\2\u0a09\u0a08\3\2\2\2\u0a0a\u01b3\3\2\2\2\u0a0b\u0a0c\t\20"+
		"\2\2\u0a0c\u01b5\3\2\2\2\u0a0d\u0a0e\t\21\2\2\u0a0e\u01b7\3\2\2\2\u0a0f"+
		"\u0a10\7\61\2\2\u0a10\u01b9\3\2\2\2\u0a11\u0a12\t\22\2\2\u0a12\u01bb\3"+
		"\2\2\2\u0142\u01c1\u01c7\u01cc\u01d9\u01dd\u01e8\u01ec\u01f2\u01f7\u01fc"+
		"\u01fe\u0203\u0206\u020b\u020d\u0211\u0217\u021f\u0222\u0225\u0228\u0230"+
		"\u0237\u023d\u0241\u0248\u024e\u0251\u026a\u028c\u0291\u02ad\u02ba\u02c4"+
		"\u02ca\u02d4\u02d6\u02dc\u02ee\u030c\u0311\u0315\u0319\u031c\u0320\u0326"+
		"\u0328\u0330\u0334\u033d\u0344\u0348\u034d\u0351\u0354\u0359\u035f\u036c"+
		"\u0377\u0379\u0388\u038a\u0396\u0398\u03a5\u03a7\u03b9\u03bb\u03c7\u03c9"+
		"\u03d4\u03df\u03ea\u03f5\u0400\u040a\u040e\u0416\u0422\u0429\u042d\u0431"+
		"\u0435\u0439\u043e\u0441\u0445\u0449\u044f\u0452\u0458\u0460\u0465\u0468"+
		"\u046e\u0479\u047e\u0482\u048a\u048e\u0499\u049f\u04b3\u04b7\u04c4\u04c7"+
		"\u04cd\u04d1\u04d7\u04da\u04e7\u04ed\u04f8\u0506\u0510\u0513\u051b\u0523"+
		"\u052d\u0531\u0539\u0549\u0557\u055a\u055e\u0561\u0569\u0572\u0575\u0579"+
		"\u057e\u0582\u0587\u058a\u059d\u05a1\u05ac\u05b0\u05b3\u05bd\u05c3\u05c6"+
		"\u05cb\u05d5\u05d9\u05dc\u05df\u05e2\u05e8\u05eb\u05ef\u05f8\u0605\u060d"+
		"\u0611\u0616\u0619\u061d\u0625\u0629\u063f\u0643\u064c\u0657\u065d\u0661"+
		"\u0665\u066b\u0670\u0676\u0682\u0688\u0691\u0697\u069e\u06a4\u06ac\u06b0"+
		"\u06b8\u06bd\u06c2\u06c9\u06cb\u06d0\u06d4\u06de\u06e9\u06ee\u06f3\u06f8"+
		"\u06fc\u0708\u070d\u0711\u0718\u071c\u0722\u0727\u072b\u072f\u0731\u073c"+
		"\u073f\u0742\u0745\u074c\u074f\u0753\u0757\u075c\u075f\u0761\u0765\u076e"+
		"\u0772\u0776\u077c\u0781\u0783\u0789\u078d\u0793\u079a\u079e\u07a0\u07a2"+
		"\u07a9\u07b3\u07b7\u07b9\u07bb\u07bf\u07c2\u07c8\u07d2\u07d6\u07dc\u07e3"+
		"\u07e6\u07e9\u07ed\u07f5\u07fb\u07fe\u080f\u0813\u0818\u081e\u0822\u0828"+
		"\u082e\u0832\u0837\u083d\u0841\u0844\u0848\u084b\u084d\u0850\u085a\u085f"+
		"\u0861\u0864\u0871\u087b\u0880\u0886\u0889\u088d\u0896\u08a4\u08aa\u08ae"+
		"\u08b2\u08b6\u08ba\u08be\u08c2\u08c6\u08c9\u08d1\u08da\u08de\u08e6\u08ec"+
		"\u08f0\u08f6\u08fd\u0934\u093b\u094b\u0950\u0954\u0957\u095b\u0966\u0969"+
		"\u0971\u0976\u097d\u0985\u098c\u0990\u0995\u099b\u099f\u09ab\u09af\u09b2"+
		"\u09bd\u09cd\u09d4\u09dd\u09e3\u09e7\u09ea\u09f5\u09ff\u0a09";
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