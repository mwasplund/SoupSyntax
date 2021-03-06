/*******************************************************************************
 * C++ 17 Parser Grammar for ANTLR v4
 *
 * Based on N4659 final working paper
 * http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/n4659.pdf
 ******************************************************************************/

parser grammar CppParser;
options { tokenVocab = CppLexer; }
import CppParserLiterals;

/****************************************/
/* Lexer Fragments
/****************************************/
// Fill in the missing DoubleGreaterThan in the parser
// since it is ambiguous with two templates ending
doubleGreaterThan:
	GreaterThan GreaterThan;

/****************************************/
/* Keywords
/****************************************/
namespaceName:
	Identifier;

className:
	Identifier |
	simpleTemplateIdentifier;

templateName:
	Identifier;
	
/****************************************/
/* Basic Concepts
/****************************************/
// A file consists of a single translation unit with a sequence of declarations
translationUnit:
	declarationSequence? EOF;

/****************************************/
/* Expressions
/* https://en.cppreference.com/w/cpp/language/expressions#Primary_expressions
/****************************************/
primaryExpression:
	literal |
	This |
	OpenParenthesis expression CloseParenthesis |
	identifierExpression |
	lambdaExpression | // C++ 11
	foldExpression; // C++ 17

identifierExpression:
	unqualifiedIdentifier |
	qualifiedIdentifier;

unqualifiedIdentifier:
	Identifier |
	operatorFunctionIdentifier |
	conversionFunctionIdentifier |
	literalOperatorIdentifier |
	Tilde className |
	Tilde declarationTypeSpecifier |
	templateIdentifier;

qualifiedIdentifier:
	nestedNameSpecifier Template? unqualifiedIdentifier;

nestedNameSpecifier:
	// Global scoped
	DoubleColon nestedNameSpecifierSequence? |
	// NOTE: Identifier in this context must be type name or namespace name
	Identifier DoubleColon nestedNameSpecifierSequence? |
	declarationTypeSpecifier DoubleColon nestedNameSpecifierSequence?;

nestedNameSpecifierSequence:
	Identifier DoubleColon nestedNameSpecifierSequence? |
	Template? simpleTemplateIdentifier DoubleColon nestedNameSpecifierSequence?;

// Lambda Expression
// https://en.cppreference.com/w/cpp/language/lambda
lambdaExpression:
	lambdaIntroducer lambdaDeclarator? compoundStatement;

lambdaIntroducer:
	OpenBracket lambdaCapture? CloseBracket;

lambdaDeclarator:
	OpenParenthesis parameterDeclarationClause CloseParenthesis declarationSpecifierSequence? noExceptionSpecifier? attributeSpecifierSequence? trailingReturnType?;

lambdaCapture:
	captureDefault |
	captureList |
	captureDefault Comma captureList;

captureDefault:
	Ampersand |
	Equal;

captureList:
	capture Ellipsis? |
	captureList Comma capture Ellipsis?;

capture:
	simpleCapture |
	initializerCapture; // C++ 14

simpleCapture:
	Ampersand? Identifier |
	This |
	Asterisk This; // C++ 17

initializerCapture:
	Ampersand? Identifier initializer;

// Fold Expression
foldExpression:
	OpenParenthesis castExpression foldOperator Ellipsis CloseParenthesis |
	OpenParenthesis Ellipsis foldOperator castExpression CloseParenthesis |
	OpenParenthesis castExpression foldOperator Ellipsis foldOperator castExpression CloseParenthesis;

foldOperator:
	Plus |
	Minus |
	Asterisk |
	ForwardSlash |
	Percent |
	Caret |
	Ampersand |
	VerticalBar |
	DoubleLessThan |
	doubleGreaterThan |
	PlusEqual |
	MinusEqual |
	AsteriskEqual |
	ForwardSlashEqual |
	PercentEqual |
	CaretEqual |
	AmpersandEqual |
	VerticalBarEqual |
	DoubleLessThanEqual |
	DoubleGreaterThanEqual |
	Equal |
	DoubleEqual |
	ExclamationMarkEqual |
	LessThan |
	GreaterThan |
	LessThanEqual |
	GreaterThanEqual |
	DoubleAmpersand |
	DoubleVerticalBar |
	Comma |
	PeriodAsterisk |
	ArrowAsterisk;

explicitTypeCoversionOperatorExpression:
	// TODO: "Ambiguous in postfixExpression" simpleTypeSpecifier OpenParenthesis expressionList? CloseParenthesis |
	typenameSpecifier OpenParenthesis expressionList? CloseParenthesis;

postfixOperator:
	DoublePlus |
	DoubleMinus;

namedCastExpression:
	namedCastType LessThan typeIdentifier GreaterThan OpenParenthesis expression CloseParenthesis;

memberAccessOperator:
	Period |
	Arrow;

namedCastType:
	DynamicCast |
	StaticCast |
	ReinterpretCast |
	ConstCast;

typeIdentificationExpression:
	TypeId OpenParenthesis expression CloseParenthesis |
	TypeId OpenParenthesis typeIdentifier CloseParenthesis;

postfixExpression:
	primaryExpression |
	// Subscript expression
	postfixExpression OpenBracket expressionOrBracedInitializerList CloseBracket |
	// Ambiguous case, could be Function Call or could be two comparison followed by primary expression
	postfixExpression OpenParenthesis expressionList? CloseParenthesis |
	explicitTypeCoversionOperatorExpression |
	simpleTypeSpecifier bracedInitializerList |
	typenameSpecifier bracedInitializerList |
	postfixExpression memberAccessOperator Template? identifierExpression |
	postfixExpression memberAccessOperator pseudoDestructorName |
	postfixExpression postfixOperator |
	namedCastExpression |
	typeIdentificationExpression;

expressionList:
	initializerList;

pseudoDestructorName:
	nestedNameSpecifier? typeName DoubleColon Tilde typeName |
	nestedNameSpecifier Template simpleTemplateIdentifier DoubleColon Tilde typeName |
	Tilde typeName |
	Tilde declarationTypeSpecifier;

unaryExpression:
	postfixExpression |
	DoublePlus castExpression |
	DoubleMinus castExpression |
	unaryOperator castExpression |
	SizeOf unaryExpression |
	SizeOf OpenParenthesis typeIdentifier CloseParenthesis |
	SizeOf Ellipsis OpenParenthesis Identifier CloseParenthesis |
	AlignOf OpenParenthesis typeIdentifier CloseParenthesis |
	noExceptionExpression |
	newExpression |
	deleteExpression;

unaryOperator:
	VerticalBar |
	Asterisk |
	Ampersand |
	Plus |
	Minus |
	ExclamationMark |
	Tilde;

newExpression:
	DoubleColon? New newPlacement? newTypeIdentifier newInitializer? |
	DoubleColon? New newPlacement? OpenParenthesis typeIdentifier CloseParenthesis newInitializer?;

newPlacement:
	OpenParenthesis expressionList CloseParenthesis;

newTypeIdentifier:
	typeSpecifierSequence newDeclarator?;

newDeclarator:
	pointerOperator newDeclarator?
	noPointerNewDeclarator;

noPointerNewDeclarator:
	OpenBracket expression CloseBracket attributeSpecifierSequence? |
	noPointerNewDeclarator OpenBracket constantExpression CloseBracket attributeSpecifierSequence?;

newInitializer:
	OpenParenthesis expressionList? CloseParenthesis |
	bracedInitializerList;

deleteExpression:
	DoubleColon? Delete castExpression |
	DoubleColon? Delete OpenBracket CloseBracket castExpression;

noExceptionExpression:
	NoExcept OpenParenthesis expression CloseParenthesis;

castExpression:
	unaryExpression |
	OpenParenthesis typeIdentifier CloseParenthesis castExpression;

binaryExpression:
	castExpression |
	binaryExpression binaryOperator castExpression;

binaryOperator:
	PeriodAsterisk |
	ArrowAsterisk |
	Asterisk |
	ForwardSlash |
	Percent |
	Plus |
	Minus |
	DoubleLessThan |
	doubleGreaterThan |
	LessThan |
	GreaterThan |
	LessThanEqual |
	GreaterThanEqual |
	DoubleEqual |
	ExclamationMarkEqual |
	Ampersand |
	Caret |
	VerticalBar |
	DoubleAmpersand |
	DoubleVerticalBar;

conditionalExpression:
	binaryExpression |
	binaryExpression QuestionMark expression Colon assignmentExpression;

throwExpression:
	Throw assignmentExpression?;

assignmentExpression:
	conditionalExpression |
	binaryExpression assignmentOperator initializerClause |
	throwExpression;

assignmentOperator:
	Equal |
	AsteriskEqual |
	ForwardSlashEqual |
	PercentEqual |
	PlusEqual |
	MinusEqual |
	DoubleGreaterThanEqual |
	DoubleLessThanEqual |
	AmpersandEqual |
	CaretEqual |
	VerticalBarEqual;

expression:
	assignmentExpression |
	expression Comma assignmentExpression;

constantExpression:
	conditionalExpression;

/****************************************/
/* Statements
/****************************************/
statement:
	labeledStatement |
	attributeSpecifierSequence? expressionStatement |
	attributeSpecifierSequence? compoundStatement |
	attributeSpecifierSequence? selectionStatement |
	attributeSpecifierSequence? iterationStatement |
	attributeSpecifierSequence? jumpStatement |
	declarationStatement |
	attributeSpecifierSequence? tryBlock;

initializerStatement:
	expressionStatement |
	simpleDeclaration;

condition:
	expression |
	attributeSpecifierSequence? declarationSpecifierSequence declarator braceOrEqualInitializer;

labeledStatement:
	attributeSpecifierSequence? Identifier Colon statement |
	attributeSpecifierSequence? Case constantExpression Colon statement |
	attributeSpecifierSequence? Default Colon statement;

expressionStatement:
	expression? Semicolon;

compoundStatement:
	OpenBrace statementSequence? CloseBrace;

statementSequence:
	statement |
	statementSequence statement;

selectionStatement:
	If ConstExpr? OpenParenthesis initializerStatement? condition CloseParenthesis statement |
	If ConstExpr? OpenParenthesis initializerStatement? condition CloseParenthesis statement Else statement |
	Switch OpenParenthesis initializerStatement? condition CloseParenthesis statement;

iterationStatement:
	While OpenParenthesis condition CloseParenthesis statement |
	Do statement While OpenParenthesis expression CloseParenthesis Semicolon |
	For OpenParenthesis initializerStatement condition? Semicolon expression? CloseParenthesis statement |
	For OpenParenthesis forRangeDeclaration Colon forRangeInitializer CloseParenthesis statement;

forInitializerStatement:
	attributeSpecifierSequence? declarationSpecifierSequence declarator |
	attributeSpecifierSequence? declarationSpecifierSequence referenceQualifier? OpenBracket identifierList CloseBracket;

forRangeDeclaration:
	attributeSpecifierSequence? declarationSpecifierSequence declarator;

forRangeInitializer:
	expressionOrBracedInitializerList;

jumpStatement:
	Break Semicolon |
	Continue Semicolon |
	Return expressionOrBracedInitializerList? Semicolon |
	GoTo Identifier Semicolon;

declarationStatement:
	blockDeclaration;

/****************************************/
/* Declarations
/****************************************/
declarationSequence:
	declaration |
	declarationSequence declaration;

declaration:
	blockDeclaration |
	noDeclarationSpecifierFunctionDeclaration |
	functionDefinition |
	templateDeclaration |
	deductionGuide |
	explicitInstantiation |
	explicitSpecialization |
	linkageSpecification |
	namespaceDefinition |
	emptyDeclaration |
	attributeDeclaration;

blockDeclaration:
	simpleDeclaration |
	asmDefinition |
	namespaceAliasDefinition |
	usingDeclaration |
	usingDirective |
	staticAssertDeclaration |
	aliasDeclaration |
	opaqueEnumSpecifier;

noDeclarationSpecifierFunctionDeclaration:
	attributeSpecifierSequence? declarator Semicolon;

aliasDeclaration:
	Using Identifier attributeSpecifierSequence? Equal definingTypeIdentifier Semicolon;

simpleDeclaration:
	declarationSpecifierSequence initializerDeclaratorList? Semicolon |
	attributeSpecifierSequence declarationSpecifierSequence initializerDeclaratorList Semicolon |
	attributeSpecifierSequence? declarationSpecifierSequence referenceQualifier? OpenBracket identifierList CloseBracket initializer Semicolon;

staticAssertDeclaration:
	StaticAssert OpenParenthesis constantExpression CloseParenthesis Semicolon |
	StaticAssert OpenParenthesis constantExpression Comma StringLiteral CloseParenthesis Semicolon;

emptyDeclaration:
	Semicolon;

attributeDeclaration:
	attributeSpecifierSequence Semicolon;

declarationModifier:
	constVolatileQualifier |
	storageClassSpecifier |
	functionSpecifier |
	Friend |
	TypeDef |
	ConstExpr |
	Inline;

// A declaration specifier sequence can have any number of specifiers in any order.
// However because an identifier can be inside the type the simple declaration "A a;" will consume
// both identifiers as types and won't find a trailing declarator. Because of this I am breaking
// the sequence into Leading/Trailing modifiers and the single type to resolve this ambiguity. This
// also allows the single type node to be a generic SyntaxNode istead of a raw token.
// Note: The C++ specification calls for ->
// declarationSpecifier attributeSpecifierSequence? |
// declarationSpecifier declarationSpecifierSequence;
declarationSpecifierSequence:
	leadingDeclarationModifierSequence? definingTypeSpecifier trailingDeclarationModifierSequence? attributeSpecifierSequence?;

leadingDeclarationModifierSequence:
	declarationModifierSequence;

trailingDeclarationModifierSequence:
	declarationModifierSequence;

declarationModifierSequence:
	declarationModifier declarationModifierSequence?;

storageClassSpecifier:
	Static |
	ThreadLocal |
	Extern |
	Mutable;

functionSpecifier:
	Virtual |
	Explicit;

typeSpecifier:
	simpleTypeSpecifier |
	elaboratedTypeSpecifier |
	typenameSpecifier;

// Note: ConstVolitileQualifier was a part of the type specifier
// We pull this out into the sequence to make type safety easier
typeSpecifierSequence:
	constVolatileQualifier? typeSpecifier attributeSpecifierSequence?;

definingTypeSpecifier:
	typeSpecifier |
	classSpecifier |
	enumSpecifier;

definingTypeSpecifierSequence:
	definingTypeSpecifier attributeSpecifierSequence? |
	definingTypeSpecifier definingTypeSpecifierSequence;

simpleTypeSpecifier:
	nestedNameSpecifier? typeName |
	// TODO nestedNameSpecifier Template simpleTemplateIdentifier |
	// COVERTED BY ABOVE nestedNameSpecifier? templateName |
	Char |
	Char8 | // C++20
	Char16 |
	Char32 |
	WChar |
	Bool |
	Short |
	Int |
	Long |
	Signed |
	Unsigned |
	Float |
	Double |
	Void |
	Auto |
	declarationTypeSpecifier;

typeName:
	Identifier |
	simpleTemplateIdentifier;

declarationTypeSpecifier:
	DeclType OpenParenthesis expression CloseParenthesis |
	DeclType OpenParenthesis Auto CloseParenthesis;

elaboratedTypeSpecifier:
	classKey attributeSpecifierSequence? nestedNameSpecifier? Identifier |
	classKey simpleTemplateIdentifier |
	classKey nestedNameSpecifier Template? simpleTemplateIdentifier |
	Enum nestedNameSpecifier? Identifier;

enumSpecifier:
	enumHead OpenBrace enumeratorList? CloseBrace |
	enumHead OpenBrace enumeratorList Comma CloseBrace;

enumHead:
	enumKey attributeSpecifierSequence? enumHeadName? enumBase?;

enumHeadName:
	nestedNameSpecifier? Identifier;

opaqueEnumSpecifier:
	enumKey attributeSpecifierSequence? nestedNameSpecifier? Identifier enumBase? Semicolon;

enumKey:
	Enum |
	Enum Class |
	Enum Struct;

enumBase:
	Colon typeSpecifierSequence;

enumeratorList:
	enumeratorDefinition |
	enumeratorList Comma enumeratorDefinition;

enumeratorDefinition:
	enumerator |
	enumerator Equal constantExpression;

enumerator:
	Identifier attributeSpecifierSequence?;

namespaceDefinition:
	namedNamespaceDefinition |
	unnamedNamespaceDefinition |
	nestedNamespaceDefinition; // C++ 17

namedNamespaceDefinition:
	Inline? Namespace attributeSpecifierSequence? Identifier OpenBrace namespaceBody CloseBrace;

unnamedNamespaceDefinition:
	Inline? Namespace attributeSpecifierSequence? OpenBrace namespaceBody CloseBrace;

nestedNamespaceDefinition:
	Namespace enclosingNamespaceSpecifier DoubleColon Identifier OpenBrace namespaceBody CloseBrace;

enclosingNamespaceSpecifier:
	Identifier |
	enclosingNamespaceSpecifier DoubleColon Identifier;

namespaceBody:
	declarationSequence?;

namespaceAliasDefinition:
	Namespace Identifier Equal qualifiedNamespaceSpecifier Semicolon;

qualifiedNamespaceSpecifier:
	nestedNameSpecifier? namespaceName;

usingDeclaration:
	Using usingDeclaratorList Semicolon;

usingDeclaratorList:
	usingDeclarator Ellipsis? |
	usingDeclaratorList Comma usingDeclarator Ellipsis?;

usingDeclarator:
	typeName? nestedNameSpecifier unqualifiedIdentifier;

usingDirective:
	attributeSpecifierSequence? Using Namespace nestedNameSpecifier? namespaceName Semicolon;

asmDefinition:
	attributeSpecifierSequence? Asm OpenParenthesis StringLiteral CloseParenthesis Semicolon;

linkageSpecification:
	Extern StringLiteral OpenBrace declarationSequence? CloseBrace |
	Extern StringLiteral declaration;

attributeSpecifierSequence:
	attributeSpecifier |
	attributeSpecifierSequence attributeSpecifier;

attributeSpecifier:
	OpenBracket OpenBracket attributeUsingPrefix? attributeList CloseBracket CloseBracket |
	alignmentSpecifier;

alignmentSpecifier:
	AlignAs OpenParenthesis typeIdentifier Ellipsis? CloseParenthesis |
	AlignAs CloseParenthesis constantExpression Ellipsis? CloseParenthesis;

attributeUsingPrefix:
	Using attributeNamespace Colon;

attributeList:
	attribute? |
	attributeList Comma attribute? |
	attribute Ellipsis |
	attributeList Comma attribute Ellipsis;

attribute:
	attributeToken attributeArgumentClause?;

attributeToken:
	Identifier |
	attributeScopedToken;

attributeScopedToken:
	attributeNamespace DoubleColon Identifier;

attributeNamespace:
	Identifier;

attributeArgumentClause:
	OpenParenthesis balancedTokenSequence? CloseParenthesis;

balancedTokenSequence:
	balancedToken |
	balancedTokenSequence balancedToken;

balancedToken:
	OpenParenthesis balancedTokenSequence? CloseParenthesis |
	OpenBracket balancedTokenSequence? CloseBracket |
	OpenBrace balancedTokenSequence? CloseBrace |
	nonBalancedToken;

// Any token other than a parenthesis, a bracket, or a brace
nonBalancedToken:
	~(OpenParenthesis | CloseParenthesis | OpenBracket | CloseBracket | OpenBrace | CloseBrace);

/****************************************/
/* Declarators
/****************************************/
initializerDeclaratorList:
	initializerDeclarator |
	initializerDeclaratorList Comma initializerDeclarator;

initializerDeclarator:
	declarator initializer?;

declarator:
	pointerDeclarator |
	noPointerDeclarator;

pointerDeclarator:
	pointerOperator declarator;

// Ellipsis for parameter packing C++ 11
noPointerDeclarator:
	Ellipsis? identifierExpression attributeSpecifierSequence?  |
	noPointerDeclarator OpenBracket constantExpression? CloseBracket attributeSpecifierSequence? |
	noPointerDeclarator parametersAndQualifiers |
	OpenParenthesis pointerDeclarator CloseParenthesis;

parametersAndQualifiers:
	functionParameters functionQualifiers;

functionParameters:
	OpenParenthesis parameterDeclarationClause CloseParenthesis;

functionQualifiers:
	constVolatileQualifierSequence? referenceQualifier? noExceptionSpecifier? attributeSpecifierSequence?;

trailingReturnType:
	Arrow typeIdentifier;

pointerOperator:
	Asterisk attributeSpecifierSequence? constVolatileQualifierSequence? |
	Ampersand attributeSpecifierSequence? |
	DoubleAmpersand attributeSpecifierSequence? | // C++ 11
	nestedNameSpecifier Asterisk attributeSpecifierSequence? constVolatileQualifierSequence?;

constVolatileQualifierSequence:
	constVolatileQualifier constVolatileQualifierSequence?;

constVolatileQualifier:
	Const |
	Volatile;

referenceQualifier:
	Ampersand
	DoubleAmpersand;

typeIdentifier:
	typeSpecifierSequence abstractDeclarator?;

definingTypeIdentifier:
	definingTypeSpecifierSequence abstractDeclarator?;

abstractDeclarator:
	pointerAbstractDeclarator |
	noPointerAbstractDeclarator? parametersAndQualifiers trailingReturnType |
	abstractPackDeclarator;

pointerAbstractDeclarator:
	noPointerAbstractDeclarator |
	pointerOperator pointerAbstractDeclarator?;

noPointerAbstractDeclarator:
	parametersAndQualifiers |
	noPointerAbstractDeclarator parametersAndQualifiers |
	OpenBracket constantExpression? CloseBracket attributeSpecifierSequence? |
	noPointerAbstractDeclarator OpenBracket constantExpression? CloseBracket attributeSpecifierSequence? |
	OpenParenthesis pointerAbstractDeclarator CloseParenthesis;

abstractPackDeclarator:
	noPointerAbstractPackDeclarator |
	pointerOperator abstractPackDeclarator;

noPointerAbstractPackDeclarator:
	noPointerAbstractPackDeclarator parametersAndQualifiers |
	noPointerAbstractPackDeclarator OpenBracket constantExpression? CloseBracket attributeSpecifierSequence? |
	Ellipsis;

parameterDeclarationClause:
	parameterDeclarationList? Ellipsis? |
	parameterDeclarationList Comma Ellipsis;

parameterDeclarationList:
	parameterDeclaration |
	parameterDeclarationList Comma parameterDeclaration;

parameterDeclaration:
	attributeSpecifierSequence? declarationSpecifierSequence declarator |
	attributeSpecifierSequence? declarationSpecifierSequence declarator Equal initializerClause; // |
	// TODO attributeSpecifierSequence? declarationSpecifierSequence abstractDeclarator? |
	// TODO attributeSpecifierSequence? declarationSpecifierSequence abstractDeclarator? Equal initializerClause;

functionDefinition:
	attributeSpecifierSequence? declarationSpecifierSequence? functionDeclarator virtualSpecifierSequence? functionBody;

functionDeclarator:
	identifierExpression functionParameters functionQualifiers trailingReturnType?;

functionBody:
	regularFunctionBody |
	functionTryBlock |
	explicitlyDefaultedFunction |
	deletedFunction;

regularFunctionBody:
	constructorInitializer? compoundStatement;

explicitlyDefaultedFunction:
	Equal Default Semicolon;

deletedFunction:
	Equal Delete Semicolon;

initializer:
	braceOrEqualInitializer;
	// DISABLED FOR SIMPLE C++ OpenParenthesis expressionList CloseParenthesis;

braceOrEqualInitializer:
	Equal initializerClause |
	bracedInitializerList;

initializerClause:
	assignmentExpression |
	bracedInitializerList;

initializerList:
	initializerClause Ellipsis? |
	initializerList Comma initializerClause Ellipsis?;

bracedInitializerList:
	OpenBrace initializerList Comma? CloseBrace |
	OpenBrace CloseBrace;

expressionOrBracedInitializerList:
	expression |
	bracedInitializerList;

/**************************/
/* Classes
/**************************/
classSpecifier:
	classHead OpenBrace memberSpecification? CloseBrace;

classHead:
	classKey attributeSpecifierSequence? classHeadName classVirtualSpecifier? baseClause? |
	classKey attributeSpecifier? baseClause?;

classHeadName:
	nestedNameSpecifier? className;

classVirtualSpecifier:
	Final;

classKey:
	Class |
	Struct |
	Union;

memberSpecification:
	memberDeclaration memberSpecification? |
	accessSpecifier Colon memberSpecification?;

memberDeclaration:
	// TODO: Collided with Empty when all were optional...
	attributeSpecifierSequence? declarationSpecifierSequence memberDeclaratorList Semicolon |
	functionDefinition |
	usingDeclaration |
	staticAssertDeclaration |
	templateDeclaration |
	deductionGuide |
	aliasDeclaration |
	emptyDeclaration;

memberDeclaratorList:
	memberDeclarator |
	memberDeclaratorList Comma memberDeclarator;

memberDeclarator:
	// TODO: amiguous pureSpecifier must be converted from equal initializer
	declarator virtualSpecifierSequence? |
	declarator braceOrEqualInitializer |
	Identifier? attributeSpecifierSequence? Colon constantExpression;

virtualSpecifierSequence:
	virtualSpecifier |
	virtualSpecifierSequence virtualSpecifier;

virtualSpecifier:
	Override |
	Final;

pureSpecifier:
	Equal Zero;

/**************************/
/* Derived Classes
/**************************/
baseClause:
	Colon baseSpecifierList;

baseSpecifierList:
	baseSpecifier Ellipsis? |
	baseSpecifierList Comma baseSpecifier Ellipsis?;

baseSpecifier:
	attributeSpecifierSequence? classOrDecltype |
	attributeSpecifierSequence? Virtual accessSpecifier? classOrDecltype |
	attributeSpecifierSequence? accessSpecifier Virtual? classOrDecltype;

classOrDecltype:
	nestedNameSpecifier? className |
	nestedNameSpecifier Template simpleTemplateIdentifier |
	declarationTypeSpecifier;

accessSpecifier:
	Private |
	Protected |
	Public;

/**************************/
/* Special Member Functions
/**************************/
conversionFunctionIdentifier:
	Operator conversionTypeIdentifier;

conversionTypeIdentifier:
	typeSpecifierSequence conversionDeclarator?;

conversionDeclarator:
	pointerOperator conversionDeclarator?;

constructorInitializer:
	Colon memberInitializerList;

memberInitializerList:
	memberInitializer Ellipsis? |
	memberInitializerList Comma memberInitializer Ellipsis?;

memberInitializer:
	memberInitializerIdentifier OpenParenthesis expressionList? CloseParenthesis |
	memberInitializerIdentifier bracedInitializerList;

memberInitializerIdentifier:
	// TODO: classOrDecltype |
	Identifier;

/**************************/
/* Overloading
/**************************/
operatorFunctionIdentifier:
	Operator anyOperator;

anyOperator:
	New |
	Delete |
	New OpenBrace CloseBracket |
	Delete OpenBrace CloseBracket |
	Plus |
	Minus |
	Asterisk |
	ForwardSlash |
	Percent |
	Caret |
	Ampersand |
	VerticalBar |
	Tilde |
	ExclamationMark |
	Equal |
	LessThan |
	GreaterThan |
	PlusEqual |
	MinusEqual |
	AsteriskEqual |
	ForwardSlashEqual |
	PercentEqual |
	CaretEqual |
	AmpersandEqual |
	VerticalBarEqual |
	DoubleLessThan |
	doubleGreaterThan |
	DoubleGreaterThanEqual |
	DoubleLessThanEqual |
	DoubleEqual |
	ExclamationMarkEqual |
	LessThanEqual |
	GreaterThanEqual |
	DoubleAmpersand |
	DoubleVerticalBar |
	DoublePlus |
	DoubleMinus |
	Comma |
	ArrowAsterisk |
	Arrow |
	OpenParenthesis CloseParenthesis |
	OpenBracket CloseBracket;

literalOperatorIdentifier:
	Operator StringLiteral Identifier |
	Operator UserDefinedStringLiteral;

/**************************/
/* Templates
/**************************/
templateDeclaration:
	Template LessThan templateParameterList GreaterThan declaration;

templateParameterList:
	templateParameter |
	templateParameterList Comma templateParameter;

templateParameter:
	typeParameter |
	parameterDeclaration;

typeParameter:
	typeParameterKey Ellipsis? Identifier? |
	typeParameterKey Identifier? Equal typeIdentifier |
	Template LessThan templateParameterList GreaterThan typeParameterKey Ellipsis? Identifier? |
	Template LessThan templateParameterList GreaterThan typeParameterKey Identifier? Equal identifierExpression;

typeParameterKey:
	Class |
	TypeName;

simpleTemplateIdentifier:
	templateName LessThan templateArgumentList? GreaterThan;

templateIdentifier:
	simpleTemplateIdentifier |
	operatorFunctionIdentifier LessThan templateArgumentList? GreaterThan |
	literalOperatorIdentifier LessThan templateArgumentList? GreaterThan;

templateArgumentList:
	templateArgument Ellipsis? |
	templateArgumentList Comma templateArgument Ellipsis?;

templateArgument:
	// TODO constantExpression |
	typeIdentifier;// |
	// identifierExpression;

typenameSpecifier:
	TypeName nestedNameSpecifier Identifier |
	TypeName nestedNameSpecifier Template? simpleTemplateIdentifier;

explicitInstantiation:
	Extern? Template declaration;

explicitSpecialization:
	Template LessThan GreaterThan declaration;

deductionGuide:
	Explicit? templateName OpenParenthesis parameterDeclarationClause CloseParenthesis Arrow simpleTemplateIdentifier Semicolon;

/**************************/
/* Exception Handling
/**************************/
tryBlock:
	Try compoundStatement handlerSequence;

functionTryBlock:
	Try constructorInitializer? compoundStatement handlerSequence;

handlerSequence:
	handler handlerSequence?;

handler:
	Catch OpenParenthesis exceptionDeclaration CloseParenthesis compoundStatement;

exceptionDeclaration:
	attributeSpecifierSequence? typeSpecifierSequence declarator |
	attributeSpecifierSequence? typeSpecifierSequence abstractDeclarator? |
	Ellipsis;

noExceptionSpecifier:
	NoExcept OpenParenthesis constantExpression CloseParenthesis |
	NoExcept |
	Throw OpenParenthesis CloseParenthesis;


/**************************/
/* Misc
/**************************/
identifierList:
	Identifier |
	identifierList Comma Identifier;
