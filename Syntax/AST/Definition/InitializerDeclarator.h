#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The initializer declarator node
    /// </summary>
    export class InitializerDeclarator : Node
    {
    public:
        /// <summary>
        /// Gets or sets the declarator
        /// </summary>
        const Node& GetDeclarator() const;

        /// <summary>
        /// Gets or sets the optional initializer
        /// </summary>
        const Node& GetInitializer() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const InitializerDeclarator& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const InitializerDeclarator& rhs) const;
    }
}
