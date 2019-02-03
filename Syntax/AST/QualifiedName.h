#pragma once
#include "Node.h"
#include "LiteralNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// An integer value
    /// </summary>
    export class QualifiedName final : public Node
    {
    private:
        std::shared_ptr<LiteralNode> m_qualifier;
        std::shared_ptr<Node> m_name;

    public:
        /// <summary>
        /// Initialize
        /// </summary>
        QualifiedName(
            std::shared_ptr<LiteralNode>&& qualifier,
            std::shared_ptr<Node>&& name);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const QualifiedName& rhs) const;
        bool operator !=(const QualifiedName& rhs) const;

        /// <summary>
        /// Gets or sets the Qualifier
        /// </summary>
        const LiteralNode& GetQualifier() const;

        /// <summary>
        /// Gets or sets the Qualifier
        /// </summary>
        const Node& GetName() const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
