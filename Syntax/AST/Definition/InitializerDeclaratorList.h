﻿#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The initializer declarator list node
    /// </summary>
    export class InitializerDeclaratorList : public Node
    {
    private:
        std::vector<InitializerDeclarator> items;

    public:
        /// <summary>
        /// Gets or sets the list of items
        /// </summary>
        const std::vector<InitializerDeclarator>& GetItems() const;

        /// <summary>
        /// Initialize
        /// </summary>
        InitializerDeclaratorList();

        /// <summary>
        /// Initialize
        /// </summary>
        InitializerDeclaratorList(std::vector<InitializerDeclarator>&& items);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const InitializerDeclaratorList& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const InitializerDeclaratorList& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}