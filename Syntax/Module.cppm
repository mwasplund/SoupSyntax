
export module SoupSyntax;

import std.core;
import Antlr4.Runtime;


// Predefine nodes to get around circular references
namespace Soup::Syntax
{
    class SyntaxNode;
    class SyntaxToken;

    class TranslationUnit;
    class PrimitiveDataTypeNode;

    // Expressions
    class BinaryExpression;
    class LiteralExpression;
    class QualifiedNameExpression;
    class SimpleNameExpression;
    class SubscriptExpression;
    class ThisExpression;
    class UnaryExpression;

    // Declarations
    class DeclarationSequence;
    class DeclarationSpecifierSequence;
    class DefaultFunctionBody;
    class DeleteFunctionBody;
    class FunctionDefinition;
    class InitializerDeclarator;
    class InitializerDeclaratorList;
    class ParameterList;
    class RegularFunctionBody;
    class SimpleDefinition;
    class TryFunctionBody;

    // Statements
    class CompoundStatement;
    class ReturnStatement;
}

#include "AST\TextSpan.h"
#include "AST\SyntaxTrivia.h"
#include "AST\SyntaxNodeChild.h"
#include "AST\SyntaxTokenType.h"
#include "AST\SyntaxToken.h"
#include "AST\ISyntaxVisitor.h"
#include "AST\SyntaxNodeType.h"
#include "AST\SyntaxNode.h"
#include "AST\Expression\Expression.h"
#include "AST\Expression\BinaryOperator.h"
#include "AST\Expression\BinaryExpression.h"
#include "AST\Expression\LiteralType.h"
#include "AST\Expression\LiteralExpression.h"
#include "AST\Expression\NameExpression.h"
#include "AST\Expression\SimpleNameExpression.h"
#include "AST\Expression\SubscriptExpression.h"
#include "AST\Expression\ThisExpression.h"
#include "AST\Expression\QualifiedNameExpression.h"
#include "AST\Expression\UnaryOperator.h"
#include "AST\Expression\UnaryExpression.h"
#include "AST\Statement\Statement.h"
#include "AST\Statement\CompoundStatement.h"
#include "AST\Statement\ReturnStatement.h"
#include "AST\Definition\Declaration.h"
#include "AST\Definition\DeclarationSequence.h"
#include "AST\Definition\DeclarationSpecifierSequence.h"
#include "AST\Definition\DefaultFunctionBody.h"
#include "AST\Definition\DeleteFunctionBody.h"
#include "AST\Definition\ParameterList.h"
#include "AST\Definition\FunctionDefinition.h"
#include "AST\Definition\InitializerDeclarator.h"
#include "AST\Definition\InitializerDeclaratorList.h"
#include "AST\Definition\RegularFunctionBody.h"
#include "AST\Definition\SimpleDefinition.h"
#include "AST\Definition\TranslationUnit.h"
#include "AST\Definition\TryFunctionBody.h"
#include "AST\PrimitiveDataType.h"
#include "AST\PrimitiveDataTypeNode.h"
#include "AST\SyntaxTree.h"
#include "AST\DefaultSyntaxVisitor.h"
#include "AST\SyntaxWalker.h"
#include "AST\SyntaxTreeWriter.h"
#include "AST\SyntaxFactory.h"
#include "Parser\Grammar\CppLexer.h"
#include "Parser\Grammar\CppParser.h"
#include "Parser\Grammar\CppParserBaseVisitor.h"
#include "Parser\Grammar\CppParserListener.h"
#include "Parser\Grammar\CppParserVisitor.h"
#include "Parser\ASTCppParserVisitor.h"
#include "Parser\LexerExceptionErrorListener.h"
#include "Parser\ParserExceptionErrorListener.h"
