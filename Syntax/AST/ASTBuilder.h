#pragma once
#include "Expression/QualifiedNameExpression.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax tree builder
    /// </summary>
    export class ASTBuilder
    {
    public:
        static std::shared_ptr<QualifiedNameExpression> AddNameLeft(
            std::shared_ptr<SimpleNameExpression> newName,
            std::shared_ptr<NameExpression>& current)
        {
            auto simpleCurrent = std::dynamic_pointer_cast<SimpleNameExpression>(current);
            if (simpleCurrent != nullptr)
            {
                return std::make_shared<QualifiedNameExpression>(
                  std::move(newName),
                  std::move(simpleCurrent));
            }
            else
            {
                auto qualifiedCurrent = std::dynamic_pointer_cast<QualifiedNameExpression>(current);
                auto& currentLeft = qualifiedCurrent->m_left;
                auto& currentRight = qualifiedCurrent->m_right;

                // Recursively replace the current left until we find another
                // SimpleName to attach to
                auto result = AddNameLeft(std::move(newName), currentLeft);

                // Rebuild the qualified names left to right
                return std::make_shared<QualifiedNameExpression>(
                  std::move(result),
                  currentRight);
            }
        }
    };
}
