#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The initializer declarator list node
    /// </summary>
    export class InitializerDeclaratorList final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        InitializerDeclaratorList() :
            m_items()
        {
        }

        InitializerDeclaratorList(
            std::vector<std::shared_ptr<const InitializerDeclarator>> items) :
            m_items(std::move(items))
        {
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const InitializerDeclaratorList& rhs) const
        {
            return std::equal(
                begin(m_items),
                end(m_items),
                begin(rhs.m_items),
                end(rhs.m_items),
                [](const std::shared_ptr<const InitializerDeclarator>& lhs, const std::shared_ptr<const InitializerDeclarator>& rhs)
                {
                    return *lhs == *rhs;
                });
        }

        bool operator !=(const InitializerDeclaratorList& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Gets or sets the list of items
        /// </summary>
        const std::vector<std::shared_ptr<const InitializerDeclarator>>& GetItems() const
        {
            return m_items;
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            std::string result = "InitializerDeclaratorList";
            for (auto item : m_items)
            {
                result += "\n" + item->ToString();
            }

            return result;
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const InitializerDeclaratorList&>(rhs);
        }

    private:
        std::vector<std::shared_ptr<const InitializerDeclarator>> m_items;
    };
}
