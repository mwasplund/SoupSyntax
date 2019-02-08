#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The initializer declarator list node
    /// </summary>
    export class InitializerDeclaratorList final : public SyntaxNode
    {
    private:
        std::vector<std::shared_ptr<InitializerDeclarator>> m_items;

    public:
        /// <summary>
        /// Initialize
        /// </summary>
        InitializerDeclaratorList();
        InitializerDeclaratorList(std::vector<std::shared_ptr<InitializerDeclarator>>&& items);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const InitializerDeclaratorList& rhs) const;
        bool operator !=(const InitializerDeclaratorList& rhs) const;

        /// <summary>
        /// Gets or sets the list of items
        /// </summary>
        const std::vector<std::shared_ptr<InitializerDeclarator>>& GetItems() const;
        std::vector<std::shared_ptr<InitializerDeclarator>>& GetItems();

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final;
    };
}
