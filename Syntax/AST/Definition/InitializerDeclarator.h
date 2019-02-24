#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The initializer declarator node
    /// </summary>
    export class InitializerDeclarator final : public SyntaxNode
    {
    public:
        InitializerDeclarator(
            std::shared_ptr<const SyntaxNode>&& declarator,
            std::shared_ptr<const SyntaxNode>&& initializer) :
            m_declarator(std::move(declarator)),
            m_initializer(std::move(initializer))
        {
        }

        /// <summary>
        /// Gets or sets the declarator
        /// </summary>
        const SyntaxNode& GetDeclarator() const
        {
            return *m_declarator;
        }

        /// <summary>
        /// Gets or sets the optional initializer
        /// </summary>
        const SyntaxNode& GetInitializer() const
        {
            return *m_initializer;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const InitializerDeclarator& rhs) const
        {
            if (*m_declarator != *rhs.m_declarator)
            {
                return false;
            }
            else if (m_initializer == nullptr || rhs.m_initializer == nullptr)
            {
                return m_initializer == nullptr && rhs.m_initializer == nullptr;
            }
            else
            {
                return *m_initializer == *rhs.m_initializer;
            }
        }

        bool operator !=(const InitializerDeclarator& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            std::string result = "InitializerDeclarator";
            result += "\n" + m_declarator->ToString();
            if (m_initializer != nullptr)
            {
                result += "\n" + m_initializer->ToString();
            }

            return result;
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const InitializerDeclarator&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxNode> m_declarator;
        std::shared_ptr<const SyntaxNode> m_initializer;
    };
}
