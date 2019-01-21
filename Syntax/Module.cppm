
export module SoupSyntax;

import std.core;
import Antlr4.Runtime;

#include "SyntaxTree.h"
#include "AST\Identifier.h"
#include "AST\IntegerLiteral.h"
#include "AST\LiteralNode.h"
#include "AST\Node.h"
#include "AST\PrimitiveDataType.h"
#include "AST\QualifiedName.h"
#include "AST\Definition\Declaration.h"
#include "AST\Definition\DeclarationSequence.h"
#include "AST\Definition\DeclarationSpecifierSequence.h"
#include "AST\Definition\DefaultFunctionBody.h"
#include "AST\Definition\DeleteFunctionBody.h"
#include "AST\Definition\FunctionDefinition.h"
#include "AST\Definition\InitializerDeclarator.h"
#include "AST\Definition\InitializerDeclaratorList.h"
#include "AST\Definition\ParameterList.h"
#include "AST\Definition\RegularFunctionBody.h"
#include "AST\Definition\SimpleDeclaration.h"
#include "AST\Definition\TranslationUnit.h"
#include "AST\Definition\TryFunctionBody.h"
#include "AST\Expression\AdditionExpression.h"
#include "AST\Expression\ArithmeticExpression.h"
#include "AST\Expression\ExpressionNode.h"
#include "AST\Statement\CompoundStatement.h"
#include "AST\Statement\ReturnStatement.h"
#include "AST\Statement\Statement.h"
#include "Parser\Grammar\CppLexer.h"