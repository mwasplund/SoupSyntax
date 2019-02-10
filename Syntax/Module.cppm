﻿
export module SoupSyntax;

import std.core;
import Antlr4.Runtime;

#include "SyntaxTree.h"
#include "AST\Identifier.h"
#include "AST\PrimitiveDataType.h"
#include "AST\QualifiedName.h"
#include "AST\SyntaxNode.h"
#include "AST\SyntaxToken.h"
#include "AST\SyntaxTrivia.h"
#include "AST\TextSpan.h"
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
#include "AST\Definition\SimpleDefinition.h"
#include "AST\Definition\TranslationUnit.h"
#include "AST\Definition\TryFunctionBody.h"
#include "AST\Expression\BinaryExpression.h"
#include "AST\Expression\BinaryOperator.h"
#include "AST\Expression\Expression.h"
#include "AST\Expression\IntegerLiteralExpression.h"
#include "AST\Expression\LiteralExpression.h"
#include "AST\Expression\UnaryOperator.h"
#include "AST\Statement\CompoundStatement.h"
#include "AST\Statement\ReturnStatement.h"
#include "AST\Statement\Statement.h"
#include "Parser\Grammar\CppLexer.h"
#include "Parser\Grammar\CppParser.h"
#include "Parser\Grammar\CppParserBaseVisitor.h"
#include "Parser\Grammar\CppParserListener.h"
#include "Parser\Grammar\CppParserVisitor.h"
#include "Parser\ASTVisitor.h"
#include "Parser\LexerExceptionErrorListener.h"
#include "Parser\ParserExceptionErrorListener.h"
