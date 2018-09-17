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
        std::unique_ptr<LiteralNode> qualifier;
        std::unique_ptr<Node> name;

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

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
