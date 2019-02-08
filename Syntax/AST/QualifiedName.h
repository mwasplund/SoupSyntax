#pragma once
#include "SyntaxNode.h"
#include "Literal.h"

namespace Soup::Syntax
{
    /// <summary>
    /// An integer value
    /// </summary>
    export class QualifiedName final : public SyntaxNode
    {
    private:
        std::shared_ptr<Literal> m_qualifier;
        std::shared_ptr<SyntaxNode> m_name;

    public:
        /// <summary>
        /// Initialize
        /// </summary>
        QualifiedName(
            std::shared_ptr<Literal>&& qualifier,
            std::shared_ptr<SyntaxNode>&& name);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const QualifiedName& rhs) const;
        bool operator !=(const QualifiedName& rhs) const;

        /// <summary>
        /// Gets or sets the Qualifier
        /// </summary>
        const Literal& GetQualifier() const;

        /// <summary>
        /// Gets or sets the Qualifier
        /// </summary>
        const SyntaxNode& GetName() const;

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
