
#pragma once
#include "BinaryExpression.h"
#include "LiteralExpression.h"
#include "QualifiedNameExpression.h"
#include "SubscriptExpression.h"
#include "ThisExpression.h"
#include "UnaryExpression.h"

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
            return std::shared_ptr<const BinaryExpression>(
                new BinaryExpression(
                    binaryOperator,
                    std::move(operatorToken),
                    std::move(leftOperand),
                    std::move(rightOperand)));
        }

        /// <summary>
        /// Create a LiteralExpression
        /// </summary>
        static std::shared_ptr<const LiteralExpression> CreateLiteralExpression(
            LiteralType type,
            std::shared_ptr<const SyntaxToken> token)
        {
            return std::shared_ptr<const LiteralExpression>(
                new LiteralExpression(
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
            return std::shared_ptr<const ThisExpression>(
                new ThisExpression(
                    std::move(token)));
        }

        /// <summary>
        /// Create a UnaryExpression
        /// </summary>
        static std::shared_ptr<const UnaryExpression> CreateUnaryExpression(
            UnaryOperator unaryOperator,
            std::shared_ptr<const SyntaxToken> operatorToken,
            std::shared_ptr<const Expression> operand)
        {
            return std::shared_ptr<const UnaryExpression>(
                new UnaryExpression(
                    unaryOperator,
                    std::move(operatorToken),
                    std::move(operand)));
        }
    };
}
