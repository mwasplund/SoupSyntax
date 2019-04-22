import std.core;
import Antlr4.Runtime;
import SoupSyntax;

// Inner Tree
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
#include "AST\InnerTree\Declaration\PrimitiveDataTypeSpecifierTests.gen.h"
#include "AST\InnerTree\Declaration\SimpleDeclarationTests.gen.h"
#include "AST\InnerTree\Declaration\ValueEqualInitializerTests.gen.h"

#include "AST\InnerTree\Expression\BinaryExpressionTests.gen.h"
#include "AST\InnerTree\Expression\IdentifierExpressionTests.gen.h"
#include "AST\InnerTree\Expression\InvocationExpressionTests.gen.h"
#include "AST\InnerTree\Expression\LiteralExpressionTests.gen.h"
#include "AST\InnerTree\Expression\SubscriptExpressionTests.gen.h"
#include "AST\InnerTree\Expression\ThisExpressionTests.gen.h"
#include "AST\InnerTree\Expression\UnaryExpressionTests.gen.h"

#include "AST\InnerTree\Shared\DestructorIdentifierTests.gen.h"
#include "AST\InnerTree\Shared\SimpleIdentifierTests.gen.h"
#include "AST\InnerTree\Shared\SimpleTemplateIdentifierTests.gen.h"

#include "AST\InnerTree\Statement\CompoundStatementTests.gen.h"
#include "AST\InnerTree\Statement\DeclarationStatementTests.gen.h"
#include "AST\InnerTree\Statement\ElseClauseTests.gen.h"
#include "AST\InnerTree\Statement\EmptyStatementTests.gen.h"
#include "AST\InnerTree\Statement\ExpressionStatementTests.gen.h"
#include "AST\InnerTree\Statement\IfStatementTests.gen.h"
#include "AST\InnerTree\Statement\ReturnStatementTests.gen.h"

#include "AST\InnerTree\TranslationUnitTests.gen.h"
#include "AST\InnerTree\SyntaxTokenTests.gen.h"

// Outer Tree
#include "AST\OuterTree\Attribute\AttributeTests.gen.h"
#include "AST\OuterTree\Attribute\AttributeSpecifierTests.gen.h"

#include "AST\OuterTree\Declaration\AccessorSpecifierTests.gen.h"
#include "AST\OuterTree\Declaration\ClassDeclarationTests.gen.h"
#include "AST\OuterTree\Declaration\ConstructorDefinitionTests.gen.h"
#include "AST\OuterTree\Declaration\ConstructorInitializerTests.gen.h"
#include "AST\OuterTree\Declaration\DeclarationSpecifierTests.gen.h"
#include "AST\OuterTree\Declaration\DefaultFunctionBodyTests.gen.h"
#include "AST\OuterTree\Declaration\DeleteFunctionBodyTests.gen.h"
#include "AST\OuterTree\Declaration\EmptyDeclarationTests.gen.h"
#include "AST\OuterTree\Declaration\EnumDeclarationTests.gen.h"
#include "AST\OuterTree\Declaration\EnumeratorDefinitionTests.gen.h"
#include "AST\OuterTree\Declaration\FunctionDefinitionTests.gen.h"
#include "AST\OuterTree\Declaration\InitializerDeclaratorListTests.gen.h"
#include "AST\OuterTree\Declaration\InitializerDeclaratorTests.gen.h"
#include "AST\OuterTree\Declaration\InitializerListTests.gen.h"
#include "AST\OuterTree\Declaration\MemberDeclarationTests.gen.h"
#include "AST\OuterTree\Declaration\MemberDeclaratorListTests.gen.h"
#include "AST\OuterTree\Declaration\MemberDeclaratorTests.gen.h"
#include "AST\OuterTree\Declaration\MemberInitializerTests.gen.h"
#include "AST\OuterTree\Declaration\NamespaceDefinitionTests.gen.h"
#include "AST\OuterTree\Declaration\ParameterListTests.gen.h"
#include "AST\OuterTree\Declaration\ParameterTests.gen.h"
#include "AST\OuterTree\Declaration\PrimitiveDataTypeSpecifierTests.gen.h"
#include "AST\OuterTree\Declaration\SimpleDeclarationTests.gen.h"
#include "AST\OuterTree\Declaration\ValueEqualInitializerTests.gen.h"

#include "AST\OuterTree\Expression\BinaryExpressionTests.gen.h"
#include "AST\OuterTree\Expression\IdentifierExpressionTests.gen.h"
#include "AST\OuterTree\Expression\InvocationExpressionTests.gen.h"
#include "AST\OuterTree\Expression\LiteralExpressionTests.gen.h"
#include "AST\OuterTree\Expression\SubscriptExpressionTests.gen.h"
#include "AST\OuterTree\Expression\ThisExpressionTests.gen.h"
#include "AST\OuterTree\Expression\UnaryExpressionTests.gen.h"

#include "AST\OuterTree\Shared\DestructorIdentifierTests.gen.h"
#include "AST\OuterTree\Shared\SimpleIdentifierTests.gen.h"
#include "AST\OuterTree\Shared\SimpleTemplateIdentifierTests.gen.h"

#include "AST\OuterTree\Statement\CompoundStatementTests.gen.h"
#include "AST\OuterTree\Statement\DeclarationStatementTests.gen.h"
#include "AST\OuterTree\Statement\ElseClauseTests.gen.h"
#include "AST\OuterTree\Statement\EmptyStatementTests.gen.h"
#include "AST\OuterTree\Statement\ExpressionStatementTests.gen.h"
#include "AST\OuterTree\Statement\IfStatementTests.gen.h"
#include "AST\OuterTree\Statement\ReturnStatementTests.gen.h"

#include "AST\OuterTree\TranslationUnitTests.gen.h"
#include "AST\OuterTree\SyntaxNodeChildTests.gen.h"
#include "AST\OuterTree\SyntaxTokenTests.gen.h"

#include "Parser\LexerTests.gen.h"
#include "Parser\ParserAttributesTests.gen.h"
#include "Parser\ParserExpressionTests.gen.h"
#include "Parser\ParseTranslationUnitTests.gen.h"
#include "Parser\SyntaxNamespaceTests.gen.h"

#include "Parser\Attribute\ParseAttributeSpecifierTests.gen.h"

#include "Parser\Declaration\ParseAccessorSpecifierTests.gen.h"
#include "Parser\Declaration\ParseClassDeclarationTests.gen.h"
#include "Parser\Declaration\ParseConstructorDefinitionTests.gen.h"
#include "Parser\Declaration\ParseEnumDeclarationTests.gen.h"
#include "Parser\Declaration\ParseFunctionDefinitionTests.gen.h"
#include "Parser\Declaration\ParseMemberDeclarationTests.gen.h"
#include "Parser\Declaration\ParseNamespaceDefinitionTests.gen.h"
#include "Parser\Declaration\ParseSimpleDeclarationTests.gen.h"

#include "Parser\Expression\ParseBinaryExpressionTests.gen.h"
#include "Parser\Expression\ParseIdentifierExpressionTests.gen.h"
#include "Parser\Expression\ParseInvocationExpressionTests.gen.h"
#include "Parser\Expression\ParseLiteralExpressionTests.gen.h"
#include "Parser\Expression\ParseSubscriptExpressionTests.gen.h"
#include "Parser\Expression\ParseThisExpressionTests.gen.h"
#include "Parser\Expression\ParseUnaryExpressionTests.gen.h"

#include "Parser\Statement\ParseCompoundStatementTests.gen.h"
#include "Parser\Statement\ParseEmptyStatementTests.gen.h"
#include "Parser\Statement\ParseExpressionStatementTests.gen.h"
#include "Parser\Statement\ParseIfStatementTests.gen.h"
#include "Parser\Statement\ParseReturnStatementTests.gen.h"

#include "RoundTrip\RoundTripTests.gen.h"

int main()
{
    std::cout << "Running Tests..." << std::endl;

    TestState state = { 0, 0 };

    // Inner Tree
    state += RunInnerTreeAttributeTests();
    state += RunInnerTreeAttributeSpecifierTests();

    state += RunInnerTreeAccessorSpecifierTests();
    state += RunInnerTreeClassDeclarationTests();
    state += RunInnerTreeConstructorDefinitionTests();
    state += RunInnerTreeConstructorInitializerTests();
    state += RunInnerTreeDeclarationSpecifierTests();
    state += RunInnerTreeDefaultFunctionBodyTests();
    state += RunInnerTreeDeleteFunctionBodyTests();
    state += RunInnerTreeEmptyDeclarationTests();
    state += RunInnerTreeEnumDeclarationTests();
    state += RunInnerTreeEnumeratorDefinitionTests();
    state += RunInnerTreeFunctionDefinitionTests();
    state += RunInnerTreeInitializerDeclaratorListTests();
    state += RunInnerTreeInitializerDeclaratorTests();
    state += RunInnerTreeInitializerListTests();
    state += RunInnerTreeMemberDeclarationTests();
    state += RunInnerTreeMemberDeclaratorListTests();
    state += RunInnerTreeMemberDeclaratorTests();
    state += RunInnerTreeMemberInitializerTests();
    state += RunInnerTreeNamespaceDefinitionTests();
    state += RunInnerTreeParameterListTests();
    state += RunInnerTreeParameterTests();
    state += RunInnerTreePrimitiveDataTypeSpecifierTests();
    state += RunInnerTreeSimpleDeclarationTests();
    state += RunInnerTreeValueEqualInitializerTests();

    state += RunInnerTreeBinaryExpressionTests();
    state += RunInnerTreeIdentifierExpressionTests();
    state += RunInnerTreeInvocationExpressionTests();
    state += RunInnerTreeLiteralExpressionTests();
    state += RunInnerTreeSubscriptExpressionTests();
    state += RunInnerTreeThisExpressionTests();
    state += RunInnerTreeUnaryExpressionTests();

    state += RunInnerTreeDestructorIdentifierTests();
    state += RunInnerTreeSimpleIdentifierTests();
    state += RunInnerTreeSimpleTemplateIdentifierTests();

    state += RunInnerTreeCompoundStatementTests();
    state += RunInnerTreeElseClauseTests();
    state += RunInnerTreeEmptyStatementTests();
    state += RunInnerTreeExpressionStatementTests();
    state += RunInnerTreeIfStatementTests();
    state += RunInnerTreeReturnStatementTests();
    state += RunInnerTreeDeclarationStatementTests();

    state += RunInnerTreeSyntaxTokenTests();
    state += RunInnerTreeTranslationUnitTests();

    // Outer Tree
    state += RunOuterTreeAttributeTests();
    state += RunOuterTreeAttributeSpecifierTests();

    state += RunOuterTreeAccessorSpecifierTests();
    state += RunOuterTreeClassDeclarationTests();
    state += RunOuterTreeConstructorDefinitionTests();
    state += RunOuterTreeConstructorInitializerTests();
    state += RunOuterTreeDeclarationSpecifierTests();
    state += RunOuterTreeDefaultFunctionBodyTests();
    state += RunOuterTreeDeleteFunctionBodyTests();
    state += RunOuterTreeEmptyDeclarationTests();
    state += RunOuterTreeEnumDeclarationTests();
    state += RunOuterTreeEnumeratorDefinitionTests();
    state += RunOuterTreeFunctionDefinitionTests();
    state += RunOuterTreeInitializerDeclaratorListTests();
    state += RunOuterTreeInitializerDeclaratorTests();
    state += RunOuterTreeInitializerListTests();
    state += RunOuterTreeMemberDeclarationTests();
    state += RunOuterTreeMemberDeclaratorListTests();
    state += RunOuterTreeMemberDeclaratorTests();
    state += RunOuterTreeMemberInitializerTests();
    state += RunOuterTreeNamespaceDefinitionTests();
    state += RunOuterTreeParameterListTests();
    state += RunOuterTreeParameterTests();
    state += RunOuterTreePrimitiveDataTypeSpecifierTests();
    state += RunOuterTreeSimpleDeclarationTests();
    state += RunOuterTreeValueEqualInitializerTests();

    state += RunOuterTreeBinaryExpressionTests();
    state += RunOuterTreeIdentifierExpressionTests();
    state += RunOuterTreeInvocationExpressionTests();
    state += RunOuterTreeLiteralExpressionTests();
    state += RunOuterTreeSubscriptExpressionTests();
    state += RunOuterTreeThisExpressionTests();
    state += RunOuterTreeUnaryExpressionTests();

    state += RunOuterTreeDestructorIdentifierTests();
    state += RunOuterTreeSimpleIdentifierTests();
    state += RunOuterTreeSimpleTemplateIdentifierTests();

    state += RunOuterTreeCompoundStatementTests();
    state += RunOuterTreeElseClauseTests();
    state += RunOuterTreeEmptyStatementTests();
    state += RunOuterTreeExpressionStatementTests();
    state += RunOuterTreeIfStatementTests();
    state += RunOuterTreeReturnStatementTests();
    state += RunOuterTreeDeclarationStatementTests();

    state += RunOuterTreeSyntaxNodeChildTests();
    state += RunOuterTreeSyntaxTokenTests();
    state += RunOuterTreeTranslationUnitTests();

    state += RunLexerTests();
    state += RunParserAttributesTests();
    state += RunParserExpressionTests();
    state += RunParseTranslationUnitTests();
    state += RunSyntaxNamespaceTests();

    state += RunParseAttributeSpecifierTests();

    state += RunParseAccessorSpecifierTests();
    state += RunParseClassDeclarationTests();
    state += RunParseConstructorDefinitionTests();
    state += RunParseEnumDeclarationTests();
    state += RunParseFunctionDefinitionTests();
    state += RunParseMemberDeclarationTests();
    state += RunParseNamespaceDefinitionTests();
    state += RunParseSimpleDeclarationTests();

    state += RunParseBinaryExpressionTests();
    state += RunParseIdentifierExpressionTests();
    state += RunParseInvocationExpressionTests();
    state += RunParseLiteralExpressionTests();
    state += RunParseSubscriptExpressionTests();
    state += RunParseThisExpressionTests();
    state += RunParseUnaryExpressionTests();

    state += RunParseCompoundStatementTests();
    state += RunParseIfStatementTests();
    state += RunParseReturnStatementTests();
    state += RunParseEmptyStatementTests();
    state += RunParseExpressionStatementTests();

    state += RunRoundTripTests();

    std::cout << state.FailCount << " FAILED." << std::endl;
    std::cout << state.PassCount << " PASSED." << std::endl;

    return 0;
}
