
export module SoupSyntax;

import std.core;
import Antlr4.Runtime;


// Predefine nodes to get around circular references
namespace Soup::Syntax
{
    class SyntaxNode;
    class SyntaxNodeChild;
    class SyntaxToken;

    class TranslationUnit;

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
    class DeclarationSpecifier;
    class DefaultFunctionBody;
    class DeleteFunctionBody;
    class EnumDeclaration;
    class EnumeratorDefinition;
    class FunctionDeclaration;
    class FunctionDefinition;
    class InitializerDeclarator;
    class InitializerDeclaratorList;
    class Parameter;
    class ParameterList;
    class PrimitiveDataTypeDeclaration;
    class RegularFunctionBody;
    class TryFunctionBody;
    class ValueEqualInitializer;

    // Statements
    class CatchClause;
    class CompoundStatement;
    class ElseClause;
    class EmptyStatement;
    class IfStatement;
    class ReturnStatement;
    class SimpleDeclarationStatement;
    class TryStatement;
}

#include "AST\TextSpan.h"
#include "AST\SyntaxTrivia.h"
#include "AST\SyntaxTokenType.h"
#include "AST\SyntaxToken.h"
#include "AST\SyntaxUtils.h"
#include "AST\Visitor\ISyntaxVisitor.h"
#include "AST\SyntaxNodeType.h"
#include "AST\SyntaxNode.h"
#include "AST\SyntaxNodeChild.h"
#include "AST\SyntaxList.h"
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
#include "AST\Statement\CatchClause.h"
#include "AST\Statement\ElseClause.h"
#include "AST\Statement\EmptyStatement.h"
#include "AST\Statement\IfStatement.h"
#include "AST\Statement\ReturnStatement.h"
#include "AST\Statement\TryStatement.h"
#include "AST\Declaration\DeclarationSpecifier.h"
#include "AST\Declaration\Declaration.h"
#include "AST\Declaration\DeclarationSequence.h"
#include "AST\Declaration\DefaultFunctionBody.h"
#include "AST\Declaration\DeleteFunctionBody.h"
#include "AST\Declaration\EnumeratorDefinition.h"
#include "AST\Declaration\EnumDeclaration.h"
#include "AST\Declaration\Parameter.h"
#include "AST\Declaration\ParameterList.h"
#include "AST\Declaration\PrimitiveDataType.h"
#include "AST\Declaration\PrimitiveDataTypeDeclaration.h"
#include "AST\Declaration\FunctionDeclaration.h"
#include "AST\Declaration\FunctionDefinition.h"
#include "AST\Declaration\InitializerDeclarator.h"
#include "AST\Declaration\InitializerDeclaratorList.h"
#include "AST\Declaration\RegularFunctionBody.h"
#include "AST\Declaration\TranslationUnit.h"
#include "AST\Declaration\TryFunctionBody.h"
#include "AST\Declaration\ValueEqualInitializer.h"
#include "AST\Statement\SimpleDeclarationStatement.h"
#include "AST\SyntaxTree.h"
#include "AST\Visitor\DefaultSyntaxVisitor.h"
#include "AST\Visitor\SyntaxWalker.h"
#include "AST\Visitor\SyntaxTreeWriter.h"
#include "AST\SyntaxFactory.h"
#include "Parser\Grammar\CppLexer.h"
#include "Parser\Grammar\CppParser.h"
#include "Parser\Grammar\CppParserBaseVisitor.h"
#include "Parser\Grammar\CppParserListener.h"
#include "Parser\Grammar\CppParserVisitor.h"
#include "Parser\ASTCppParserVisitor.h"
#include "Parser\LexerExceptionErrorListener.h"
#include "Parser\ParserExceptionErrorListener.h"
