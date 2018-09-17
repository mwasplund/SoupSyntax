#pragma once
#include "Node.h"
#include "LiteralNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// An integer value
    /// </summary>
    export class QualifiedName : public Node
    {
    private:
        LiteralNode qualifier;
        Node name;

    public:
        /// <summary>
        /// Gets or sets the Qualifier
        /// </summary>
        const LiteralNode& GetQualifier() const;

        /// <summary>
        /// Gets or sets the Qualifier
        /// </summary>
        const Node& GetName() const;

        /// <summary>
        /// Initialize
        /// </summary>
        QualifiedName();

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const QualifiedName& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const QualifiedName& rhs) const;
    };
}
