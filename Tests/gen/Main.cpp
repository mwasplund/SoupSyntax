import std.core;
import Antlr4.Runtime;
import SoupSyntax;

#include "AST\InnerTree\Attribute\AttributeTests.gen.h"
#include "AST\InnerTree\Attribute\AttributeSpecifierTests.gen.h"

#include "AST\InnerTree\Declaration\AccessorSpecifierTests.gen.h"
#include "AST\InnerTree\Declaration\ClassDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\ConstructorDefinitionTests.gen.h"
#include "AST\InnerTree\Declaration\ConstructorInitializerTests.gen.h"
#include "AST\InnerTree\Declaration\DeclarationSpecifierTests.gen.h"
#include "AST\InnerTree\Declaration\DefaultFunctionBodyTests.gen.h"
#include "AST\InnerTree\Declaration\DeleteFunctionBodyTests.gen.h"
#include "AST\InnerTree\Declaration\EmptyDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\EnumDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\EnumeratorDefinitionTests.gen.h"
#include "AST\InnerTree\Declaration\FunctionDefinitionTests.gen.h"
#include "AST\InnerTree\Declaration\InitializerDeclaratorListTests.gen.h"
#include "AST\InnerTree\Declaration\InitializerDeclaratorTests.gen.h"
#include "AST\InnerTree\Declaration\InitializerListTests.gen.h"
#include "AST\InnerTree\Declaration\MemberDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\MemberDeclaratorListTests.gen.h"
#include "AST\InnerTree\Declaration\MemberDeclaratorTests.gen.h"
#include "AST\InnerTree\Declaration\MemberInitializerTests.gen.h"
#include "AST\InnerTree\Declaration\NamespaceDefinitionTests.gen.h"
#include "AST\InnerTree\Declaration\ParameterListTests.gen.h"
#include "AST\InnerTree\Declaration\ParameterTests.gen.h"
#include "AST\InnerTree\Declaration\PrimitiveDataTypeDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\SimpleDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\ValueEqualInitializerTests.gen.h"

#include "AST\InnerTree\Expression\BinaryExpressionTests.gen.h"
#include "AST\InnerTree\Expression\DestructorIdentifierExpressionTests.gen.h"
#include "AST\InnerTree\Expression\InvocationExpressionTests.gen.h"
#include "AST\InnerTree\Expression\LiteralExpressionTests.gen.h"
#include "AST\InnerTree\Expression\QualifiedIdentifierExpressionTests.gen.h"
#include "AST\InnerTree\Expression\SimpleIdentifierExpressionTests.gen.h"
#include "AST\InnerTree\Expression\SimpleTemplateIdentifierExpressionTests.gen.h"
#include "AST\InnerTree\Expression\SubscriptExpressionTests.gen.h"
#include "AST\InnerTree\Expression\ThisExpressionTests.gen.h"
#include "AST\InnerTree\Expression\UnaryExpressionTests.gen.h"

#include "AST\InnerTree\Statement\CompoundStatementTests.gen.h"
#include "AST\InnerTree\Statement\DeclarationStatementTests.gen.h"
#include "AST\InnerTree\Statement\ElseClauseTests.gen.h"
#include "AST\InnerTree\Statement\EmptyStatementTests.gen.h"
#include "AST\InnerTree\Statement\ExpressionStatementTests.gen.h"
#include "AST\InnerTree\Statement\IfStatementTests.gen.h"
#include "AST\InnerTree\Statement\ReturnStatementTests.gen.h"

#include "AST\InnerTree\TranslationUnitTests.gen.h"

//#include "AST\SyntaxNodeChildTests.gen.h"
#include "AST\SyntaxTokenTests.gen.h"

// #include "Parser\LexerTests.gen.h"
// #include "Parser\ParserAttributesTests.gen.h"
// #include "Parser\ParserExpressionTests.gen.h"
// #include "Parser\ParseTranslationUnitTests.gen.h"
// #include "Parser\SyntaxNamespaceTests.gen.h"

// #include "Parser\Attribute\ParseAttributeSpecifierTests.gen.h"

// #include "Parser\Declaration\ParseAccessorSpecifierTests.gen.h"
// #include "Parser\Declaration\ParseClassDeclarationTests.gen.h"
// #include "Parser\Declaration\ParseConstructorDefinitionTests.gen.h"
// #include "Parser\Declaration\ParseEnumDeclarationTests.gen.h"
// #include "Parser\Declaration\ParseFunctionDefinitionTests.gen.h"
// #include "Parser\Declaration\ParseMemberDeclarationTests.gen.h"
// #include "Parser\Declaration\ParseNamespaceDefinitionTests.gen.h"
// #include "Parser\Declaration\ParseSimpleDeclarationTests.gen.h"

// #include "Parser\Expression\ParseBinaryExpressionTests.gen.h"
// #include "Parser\Expression\ParseIdentifierExpressionTests.gen.h"
// #include "Parser\Expression\ParseInvocationExpressionTests.gen.h"
// #include "Parser\Expression\ParseLiteralExpressionTests.gen.h"
// #include "Parser\Expression\ParseSubscriptExpressionTests.gen.h"
// #include "Parser\Expression\ParseThisExpressionTests.gen.h"
// #include "Parser\Expression\ParseUnaryExpressionTests.gen.h"

// #include "Parser\Statement\ParseCompoundStatementTests.gen.h"
// #include "Parser\Statement\ParseEmptyStatementTests.gen.h"
// #include "Parser\Statement\ParseExpressionStatementTests.gen.h"
// #include "Parser\Statement\ParseIfStatementTests.gen.h"
// #include "Parser\Statement\ParseReturnStatementTests.gen.h"

// #include "RoundTrip\RoundTripTests.gen.h"

int main()
{
    std::cout << "Running Tests..." << std::endl;

    TestState state = { 0, 0 };

    state += RunAttributeTests();
    state += RunAttributeSpecifierTests();

    state += RunAccessorSpecifierTests();
    state += RunClassDeclarationTests();
    state += RunConstructorDefinitionTests();
    state += RunConstructorInitializerTests();
    state += RunDeclarationSpecifierTests();
    state += RunDefaultFunctionBodyTests();
    state += RunDeleteFunctionBodyTests();
    state += RunEmptyDeclarationTests();
    state += RunEnumDeclarationTests();
    state += RunEnumeratorDefinitionTests();
    state += RunFunctionDefinitionTests();
    state += RunInitializerDeclaratorListTests();
    state += RunInitializerDeclaratorTests();
    state += RunInitializerListTests();
    state += RunMemberDeclarationTests();
    state += RunMemberDeclaratorListTests();
    state += RunMemberDeclaratorTests();
    state += RunMemberInitializerTests();
    state += RunNamespaceDefinitionTests();
    state += RunParameterListTests();
    state += RunParameterTests();
    state += RunPrimitiveDataTypeDeclarationTests();
    state += RunSimpleDeclarationTests();
    state += RunValueEqualInitializerTests();

    state += RunBinaryExpressionTests();
    state += RunDestructorIdentifierExpressionTests();
    state += RunInvocationExpressionTests();
    state += RunLiteralExpressionTests();
    state += RunQualifiedIdentifierExpressionTests();
    state += RunSimpleIdentifierExpressionTests();
    state += RunSimpleTemplateIdentifierExpressionTests();
    state += RunSubscriptExpressionTests();
    state += RunThisExpressionTests();
    state += RunUnaryExpressionTests();

    state += RunCompoundStatementTests();
    state += RunElseClauseTests();
    state += RunEmptyStatementTests();
    state += RunExpressionStatementTests();
    state += RunIfStatementTests();
    state += RunReturnStatementTests();
    state += RunDeclarationStatementTests();

    // state += RunSyntaxNodeChildTests();
    state += RunSyntaxTokenTests();
    state += RunTranslationUnitTests();

    // state += RunLexerTests();
    // state += RunParserAttributesTests();
    // state += RunParserExpressionTests();
    // state += RunParseTranslationUnitTests();
    // state += RunSyntaxNamespaceTests();

    // state += RunParseAttributeSpecifierTests();

    // state += RunParseAccessorSpecifierTests();
    // state += RunParseClassDeclarationTests();
    // state += RunParseConstructorDefinitionTests();
    // state += RunParseEnumDeclarationTests();
    // state += RunParseFunctionDefinitionTests();
    // state += RunParseMemberDeclarationTests();
    // state += RunParseNamespaceDefinitionTests();
    // state += RunParseSimpleDeclarationTests();

    // state += RunParseBinaryExpressionTests();
    // state += RunParseIdentifierExpressionTests();
    // state += RunParseInvocationExpressionTests();
    // state += RunParseLiteralExpressionTests();
    // state += RunParseSubscriptExpressionTests();
    // state += RunParseThisExpressionTests();
    // state += RunParseUnaryExpressionTests();

    // state += RunParseCompoundStatementTests();
    // state += RunParseIfStatementTests();
    // state += RunParseReturnStatementTests();
    // state += RunParseEmptyStatementTests();
    // state += RunParseExpressionStatementTests();

    // state += RunRoundTripTests();

    std::cout << state.FailCount << " FAILED." << std::endl;
    std::cout << state.PassCount << " PASSED." << std::endl;

    return 0;
}
