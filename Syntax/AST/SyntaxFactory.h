
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax factory
    /// </summary>
    // TODO: Test coverage for validation of input
    export class SyntaxFactory
    {
    public:
        /// <summary>
        /// Create a BinaryExpression
        /// </summary>
        static std::shared_ptr<const BinaryExpression> CreateBinaryExpression(
            BinaryOperator binaryOperator,
            std::shared_ptr<const Expression> leftOperand,
            std::shared_ptr<const SyntaxToken> operatorToken,
            std::shared_ptr<const Expression> rightOperand)
        {
            if (leftOperand == nullptr)
                throw std::runtime_error("ArgumentNull - leftOperand");
            if (operatorToken == nullptr)
                throw std::runtime_error("ArgumentNull - operatorToken");
            if (rightOperand == nullptr)
                throw std::runtime_error("ArgumentNull - rightOperand");

            return std::shared_ptr<const BinaryExpression>(
                new BinaryExpression(
                    binaryOperator,
                    std::move(leftOperand),
                    std::move(operatorToken),
                    std::move(rightOperand)));
        }

        /// <summary>
        /// Create a CompoundStatement
        /// </summary>
        static std::shared_ptr<const CompoundStatement> CreateCompoundStatement(
            std::shared_ptr<const SyntaxToken> leftBraceToken,
            std::vector<std::shared_ptr<const Statement>> statements,
            std::shared_ptr<const SyntaxToken> rightBraceToken)
        {
            if (leftBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - leftBraceToken");
            if (rightBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - rightBraceToken");

            return std::shared_ptr<const CompoundStatement>(
                new CompoundStatement(
                    std::move(leftBraceToken),
                    std::move(statements),
                    std::move(rightBraceToken)));
        }

        /// <summary>
        /// Create a DeclarationSpecifier
        /// Overload that excludes optional leading and trailing modifiers
        /// </summary>
        static std::shared_ptr<const DeclarationSpecifier> CreateDeclarationSpecifier(
            std::shared_ptr<const SyntaxNode> typeSpecifier)
        {
            // Note: both the leading and trailing modifiers are optional
            if (typeSpecifier == nullptr)
                throw std::runtime_error("ArgumentNull - typeSpecifier");

            return std::shared_ptr<const DeclarationSpecifier>(
                new DeclarationSpecifier(
                    {},
                    std::move(typeSpecifier),
                    {}));
        }

        /// <summary>
        /// Create a DeclarationSpecifier
        /// </summary>
        static std::shared_ptr<const DeclarationSpecifier> CreateDeclarationSpecifier(
            std::vector<std::shared_ptr<const SyntaxToken>> leadingModifiers,
            std::shared_ptr<const SyntaxNode> typeSpecifier,
            std::vector<std::shared_ptr<const SyntaxToken>> trailingModifiers)
        {
            // Note: both the leading and trailing modifiers are optional
            if (typeSpecifier == nullptr)
                throw std::runtime_error("ArgumentNull - typeSpecifier");

            return std::shared_ptr<const DeclarationSpecifier>(
                new DeclarationSpecifier(
                    std::move(leadingModifiers),
                    std::move(typeSpecifier),
                    std::move(trailingModifiers)));
        }

        /// <summary>
        /// Create a DefaultFunctionBody
        /// </summary>
        static std::shared_ptr<const DefaultFunctionBody> CreateDefaultFunctionBody(
            std::shared_ptr<const SyntaxToken> equalToken,
            std::shared_ptr<const SyntaxToken> defaultToken,
            std::shared_ptr<const SyntaxToken> semicolonToken)
        {
            if (equalToken == nullptr)
                throw std::runtime_error("ArgumentNull - equalToken");
            if (defaultToken == nullptr)
                throw std::runtime_error("ArgumentNull - defaultToken");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            return std::shared_ptr<const DefaultFunctionBody>(
                new DefaultFunctionBody(
                    std::move(equalToken),
                    std::move(defaultToken),
                    std::move(semicolonToken)));
        }

        /// <summary>
        /// Create a DeleteFunctionBody
        /// </summary>
        static std::shared_ptr<const DeleteFunctionBody> CreateDeleteFunctionBody(
            std::shared_ptr<const SyntaxToken> equalToken,
            std::shared_ptr<const SyntaxToken> deleteToken,
            std::shared_ptr<const SyntaxToken> semicolonToken)
        {
            if (equalToken == nullptr)
                throw std::runtime_error("ArgumentNull - equalToken");
            if (deleteToken == nullptr)
                throw std::runtime_error("ArgumentNull - deleteToken");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            return std::shared_ptr<const DeleteFunctionBody>(
                new DeleteFunctionBody(
                    std::move(equalToken),
                    std::move(deleteToken),
                    std::move(semicolonToken)));
        }

        /// <summary>
        /// Create a ElseClause
        /// </summary>
        static std::shared_ptr<const ElseClause> CreateElseClause(
            std::shared_ptr<const SyntaxToken> elseToken,
            std::shared_ptr<const Statement> statement)
        {
            if (elseToken == nullptr)
                throw std::runtime_error("ArgumentNull - elseToken");
            if (statement == nullptr)
                throw std::runtime_error("ArgumentNull - statement");

            return std::shared_ptr<const ElseClause>(
                new ElseClause(
                    std::move(elseToken),
                    std::move(statement)));
        }

        /// <summary>
        /// Create a EmptyStatement
        /// </summary>
        static std::shared_ptr<const EmptyStatement> CreateEmptyStatement(
            std::shared_ptr<const SyntaxToken> semicolonToken)
        {
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            return std::shared_ptr<const EmptyStatement>(
                new EmptyStatement(
                    std::move(semicolonToken)));
        }

        /// <summary>
        /// Create a FunctionDeclaration
        /// </summary>
        static std::shared_ptr<const FunctionDeclaration> CreateFunctionDeclaration(
            std::shared_ptr<const DeclarationSpecifier> returnType,
            std::shared_ptr<const NameExpression> identifier,
            std::shared_ptr<const ParameterList> parameterList,
            std::shared_ptr<const SyntaxNode> body)
        {
            if (returnType == nullptr)
                throw std::runtime_error("ArgumentNull - returnType");
            if (identifier == nullptr)
                throw std::runtime_error("ArgumentNull - identifier");
            if (parameterList == nullptr)
                throw std::runtime_error("ArgumentNull - parameterList");
            if (body == nullptr)
                throw std::runtime_error("ArgumentNull - body");

            return std::shared_ptr<const FunctionDeclaration>(
                new FunctionDeclaration(
                    std::move(returnType),
                    std::move(identifier),
                    std::move(parameterList),
                    std::move(body)));
        }

        /// <summary>
        /// Create a FunctionDefinition
        /// </summary>
        static std::shared_ptr<const FunctionDefinition> CreateFunctionDefinition(
            std::shared_ptr<const DeclarationSpecifier> returnType,
            std::shared_ptr<const NameExpression> identifier,
            std::shared_ptr<const ParameterList> parameterList,
            std::shared_ptr<const SyntaxNode> body)
        {
            if (returnType == nullptr)
                throw std::runtime_error("ArgumentNull - returnType");
            if (identifier == nullptr)
                throw std::runtime_error("ArgumentNull - identifier");
            if (parameterList == nullptr)
                throw std::runtime_error("ArgumentNull - parameterList");
            if (body == nullptr)
                throw std::runtime_error("ArgumentNull - body");

            return std::shared_ptr<const FunctionDefinition>(
                new FunctionDefinition(
                    std::move(returnType),
                    std::move(identifier),
                    std::move(parameterList),
                    std::move(body)));
        }

        /// <summary>
        /// Create a IfStatement
        /// </summary>
        static std::shared_ptr<const IfStatement> CreateIfStatement(
            std::shared_ptr<const SyntaxToken> ifToken,
            std::shared_ptr<const SyntaxToken> leftParenthesisToken,
            std::shared_ptr<const Expression> conditionExpression,
            std::shared_ptr<const SyntaxToken> rightParenthesisToken,
            std::shared_ptr<const Statement> statement,
            std::shared_ptr<const ElseClause> elseClause)
        {
            // Note: The else clause is optional
            if (ifToken == nullptr)
                throw std::runtime_error("ArgumentNull - ifToken");
            if (leftParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - leftParenthesisToken");
            if (conditionExpression == nullptr)
                throw std::runtime_error("ArgumentNull - conditionExpression");
            if (rightParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - rightParenthesisToken");
            if (statement == nullptr)
                throw std::runtime_error("ArgumentNull - statement");

            return std::shared_ptr<const IfStatement>(
                new IfStatement(
                    std::move(ifToken),
                    std::move(leftParenthesisToken),
                    std::move(conditionExpression),
                    std::move(rightParenthesisToken),
                    std::move(statement),
                    std::move(elseClause)));
        }

        /// <summary>
        /// Create a InitializerDeclarator
        /// </summary>
        static std::shared_ptr<const InitializerDeclarator> CreateInitializerDeclarator(
            std::shared_ptr<const SyntaxNode> declarator,
            std::shared_ptr<const SyntaxNode> initializer)
        {
            // Note: the initializer is optional
            if (declarator == nullptr)
                throw std::runtime_error("ArgumentNull - declarator");

            return std::shared_ptr<const InitializerDeclarator>(
                new InitializerDeclarator(
                    std::move(declarator),
                    std::move(initializer)));
        }

        /// <summary>
        /// Create a InitializerDeclaratorList
        /// </summary>
        static std::shared_ptr<const InitializerDeclaratorList> CreateInitializerDeclaratorList(
            std::shared_ptr<const SyntaxList<InitializerDeclarator>> items)
        {
            if (items == nullptr)
                throw std::runtime_error("ArgumentNull - items");
            if (items->GetItems().empty())
                throw std::runtime_error("InitializerDeclaratorList cannot be empty.");

            return std::shared_ptr<const InitializerDeclaratorList>(
                new InitializerDeclaratorList(
                    std::move(items)));
        }

        /// <summary>
        /// Create a LiteralExpression
        /// </summary>
        static std::shared_ptr<const LiteralExpression> CreateLiteralExpression(
            LiteralType type,
            std::shared_ptr<const SyntaxToken> token)
        {
            if (token == nullptr)
                throw std::runtime_error("ArgumentNull - token");

            return std::shared_ptr<const LiteralExpression>(
                new LiteralExpression(
                    type,
                    std::move(token)));
        }

        /// <summary>
        /// Create a Parameter
        /// </summary>
        static std::shared_ptr<const Parameter> CreateParameter(
            std::shared_ptr<const SyntaxNode> declarationSpecifier,
            std::shared_ptr<const SyntaxNode> declarator)
        {
            if (declarationSpecifier == nullptr)
                throw std::runtime_error("ArgumentNull - declarationSpecifier");
            if (declarator == nullptr)
                throw std::runtime_error("ArgumentNull - declarator");

            return std::shared_ptr<const Parameter>(
                new Parameter(
                    std::move(declarationSpecifier),
                    std::move(declarator)));
        }

        /// <summary>
        /// Create a ParameterList
        /// </summary>
        static std::shared_ptr<const ParameterList> CreateParameterList(
            std::shared_ptr<const SyntaxToken> leftParenthesisToken,
            std::shared_ptr<const SyntaxList<Parameter>> parameters,
            std::shared_ptr<const SyntaxToken> rightParenthesisToken)
        {
            if (leftParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - leftParenthesisToken");
            if (parameters == nullptr)
                throw std::runtime_error("ArgumentNull - parameters");
            if (rightParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - rightParenthesisToken");

            return std::shared_ptr<const ParameterList>(
                new ParameterList(
                    std::move(leftParenthesisToken),
                    std::move(parameters),
                    std::move(rightParenthesisToken)));
        }

        /// <summary>
        /// Create a PrimitiveDataTypeDeclaration
        /// </summary>
        static std::shared_ptr<const PrimitiveDataTypeDeclaration> CreatePrimitiveDataTypeDeclaration(
            PrimitiveDataType type,
            std::shared_ptr<const SyntaxToken> token)
        {
            if (token == nullptr)
                throw std::runtime_error("ArgumentNull - token");

            return std::shared_ptr<const PrimitiveDataTypeDeclaration>(
                new PrimitiveDataTypeDeclaration(
                    type,
                    std::move(token)));
        }

        /// <summary>
        /// Create a QualifiedNameExpression
        /// </summary>
        static std::shared_ptr<const QualifiedNameExpression> CreateQualifiedNameExpression(
            std::shared_ptr<const NameExpression> left,
            std::shared_ptr<const SyntaxToken> scopeResolutionToken,
            std::shared_ptr<const SimpleNameExpression> right)
        {
            // A null left identifier indicates a global scope
            if (scopeResolutionToken == nullptr)
                throw std::runtime_error("ArgumentNull - scopeResolutionToken");
            // TODO: if (right == nullptr)
            //     throw std::runtime_error("ArgumentNull - right");

            return std::shared_ptr<const QualifiedNameExpression>(
                new QualifiedNameExpression(
                    std::move(left),
                    std::move(scopeResolutionToken),
                    std::move(right)));
        }

        /// <summary>
        /// Create a ReturnStatement
        /// </summary>
        static std::shared_ptr<const ReturnStatement> CreateReturnStatement(
            std::shared_ptr<const SyntaxToken> returnToken,
            std::shared_ptr<const Expression> expression,
            std::shared_ptr<const SyntaxToken> semicolonToken)
        {
            // Note: The Expression is optional
            if (returnToken == nullptr)
                throw std::runtime_error("ArgumentNull - returnToken");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            return std::shared_ptr<const ReturnStatement>(
                new ReturnStatement(
                    std::move(returnToken),
                    std::move(expression),
                    std::move(semicolonToken)));
        }

        /// <summary>
        /// Create a SimpleDeclarationStatement
        /// </summary>
        static std::shared_ptr<const SimpleDeclarationStatement> CreateSimpleDeclarationStatement(
            std::shared_ptr<const DeclarationSpecifier> declarationSpecifier,
            std::shared_ptr<const InitializerDeclaratorList> initializerDeclaratorList,
            std::shared_ptr<const SyntaxToken> semicolonToken)
        {
            if (declarationSpecifier == nullptr)
                throw std::runtime_error("ArgumentNull - declarationSpecifier");
            if (initializerDeclaratorList == nullptr)
                throw std::runtime_error("ArgumentNull - initializerDeclaratorList");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            return std::shared_ptr<const SimpleDeclarationStatement>(
                new SimpleDeclarationStatement(
                    std::move(declarationSpecifier),
                    std::move(initializerDeclaratorList),
                    std::move(semicolonToken)));
        }

        /// <summary>
        /// Create a SimpleNameExpression
        /// </summary>
        static std::shared_ptr<const SimpleNameExpression> CreateSimpleNameExpression(
            std::shared_ptr<const SyntaxToken> identifier)
        {
            if (identifier == nullptr)
                throw std::runtime_error("ArgumentNull - identifier");

            return std::shared_ptr<const SimpleNameExpression>(
                new SimpleNameExpression(
                    std::move(identifier)));
        }

        /// <summary>
        /// Create a SubscriptExpression
        /// </summary>
        static std::shared_ptr<const SubscriptExpression> CreateSubscriptExpression(
            std::shared_ptr<const Expression> leftExpression,
            std::shared_ptr<const SyntaxToken> leftBracket, 
            std::shared_ptr<const Expression> rightExpression,
            std::shared_ptr<const SyntaxToken> rightBracket)
        {
            if (leftExpression == nullptr)
                throw std::runtime_error("ArgumentNull - leftExpression");
            if (leftBracket == nullptr)
                throw std::runtime_error("ArgumentNull - leftBracket");
            if (rightExpression == nullptr)
                throw std::runtime_error("ArgumentNull - rightExpression");
            if (rightBracket == nullptr)
                throw std::runtime_error("ArgumentNull - rightBracket");

            return std::shared_ptr<const SubscriptExpression>(
                new SubscriptExpression(
                    std::move(leftExpression),
                    std::move(leftBracket),
                    std::move(rightExpression),
                    std::move(rightBracket)));
        }

        /// <summary>
        /// Create a ThisExpression
        /// </summary>
        static std::shared_ptr<const ThisExpression> CreateThisExpression(
            std::shared_ptr<const SyntaxToken> token)
        {
            if (token == nullptr)
                throw std::runtime_error("ArgumentNull - token");

            return std::shared_ptr<const ThisExpression>(
                new ThisExpression(
                    std::move(token)));
        }

        /// <summary>
        /// Create a SyntaxToken
        /// </summary>
        static std::shared_ptr<const SyntaxToken> CreateToken(
            SyntaxTokenType type,
            std::wstring value,
            std::vector<SyntaxTrivia> leadingTrivia,
            std::vector<SyntaxTrivia> trailingTrivia)
        {
            return std::shared_ptr<const SyntaxToken>(
                new SyntaxToken(
                    type,
                    std::move(value),
                    std::move(leadingTrivia),
                    std::move(trailingTrivia)));
        }

        /// <summary>
        /// Create a SyntaxToken
        /// </summary>
        static std::shared_ptr<const SyntaxToken> CreateToken(
            SyntaxTokenType type,
            std::wstring value)
        {
            return std::shared_ptr<const SyntaxToken>(
                new SyntaxToken(
                    type,
                    std::move(value),
                    {},
                    {}));
        }

        /// <summary>
        /// Create a TryStatement
        /// </summary>
        static std::shared_ptr<const TryStatement> CreateTryStatement(
            std::shared_ptr<const SyntaxToken> tryToken,
            std::shared_ptr<const CompoundStatement> compoundStatement,
            std::vector<std::shared_ptr<const CatchClause>> catchClauses)
        {
            if (tryToken == nullptr)
                throw std::runtime_error("ArgumentNull - tryToken");
            if (compoundStatement == nullptr)
                throw std::runtime_error("ArgumentNull - compoundStatement");
            if (catchClauses.empty())
                throw std::runtime_error("CatchClauses must not be empty.");

            return std::shared_ptr<const TryStatement>(
                new TryStatement(
                    std::move(tryToken),
                    std::move(compoundStatement),
                    std::move(catchClauses)));
        }

        /// <summary>
        /// Create a SyntaxTrivia
        /// </summary>
        static SyntaxTrivia CreateTrivia(
            std::wstring value,
            TextSpan span)
        {
            return SyntaxTrivia(
                std::move(value),
                span);
        }

        /// <summary>
        /// Create a UnaryExpression
        /// </summary>
        static std::shared_ptr<const UnaryExpression> CreateUnaryExpression(
            UnaryOperator unaryOperator,
            std::shared_ptr<const SyntaxToken> operatorToken,
            std::shared_ptr<const Expression> operand)
        {
            if (operatorToken == nullptr)
                throw std::runtime_error("ArgumentNull - operatorToken");
            if (operand == nullptr)
                throw std::runtime_error("ArgumentNull - operand");

            return std::shared_ptr<const UnaryExpression>(
                new UnaryExpression(
                    unaryOperator,
                    std::move(operatorToken),
                    std::move(operand)));
        }

        /// <summary>
        /// Create a ValueEqualInitializer
        /// </summary>
        static std::shared_ptr<const ValueEqualInitializer> CreateValueEqualInitializer(
            std::shared_ptr<const SyntaxToken> equalToken,
            std::shared_ptr<const Expression> expression)
        {
            if (equalToken == nullptr)
                throw std::runtime_error("ArgumentNull - equalToken");
            if (expression == nullptr)
                throw std::runtime_error("ArgumentNull - expression");

            return std::shared_ptr<const ValueEqualInitializer>(
                new ValueEqualInitializer(
                    std::move(equalToken),
                    std::move(expression)));
        }
    };
}
