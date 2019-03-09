
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax factory
    /// </summary>
    export class SyntaxFactory
    {
    public:
        /// <summary>
        /// Create a BinaryExpression
        /// </summary>
        static std::shared_ptr<const BinaryExpression> CreateBinaryExpression(
            BinaryOperator binaryOperator,
            std::shared_ptr<const SyntaxToken> operatorToken,
            std::shared_ptr<const Expression> leftOperand,
            std::shared_ptr<const Expression> rightOperand)
        {
            if (operatorToken == nullptr)
                throw std::runtime_error("ArgumentNull - operatorToken");
            if (leftOperand == nullptr)
                throw std::runtime_error("ArgumentNull - leftOperand");
            if (rightOperand == nullptr)
                throw std::runtime_error("ArgumentNull - rightOperand");

            return std::shared_ptr<const BinaryExpression>(
                new BinaryExpression(
                    binaryOperator,
                    std::move(operatorToken),
                    std::move(leftOperand),
                    std::move(rightOperand)));
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
        /// Create a FunctionDeclaration
        /// </summary>
        static std::shared_ptr<const FunctionDeclaration> CreateFunctionDeclaration(
            std::shared_ptr<const DeclarationSpecifierSequence> returnType,
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
            std::shared_ptr<const DeclarationSpecifierSequence> returnType,
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
            std::shared_ptr<const SyntaxNode> declarationSpecifierSequence,
            std::shared_ptr<const SyntaxNode> declarator)
        {
            if (declarationSpecifierSequence == nullptr)
                throw std::runtime_error("ArgumentNull - declarationSpecifierSequence");
            if (declarator == nullptr)
                throw std::runtime_error("ArgumentNull - declarator");

            return std::shared_ptr<const Parameter>(
                new Parameter(
                    std::move(declarationSpecifierSequence),
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
    };
}
