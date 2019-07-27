#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The identifier expression
    /// Includes a double colon qualifier for a simple name along with
    /// an optional recursive name expression that can be either another
    /// qualified name or a simple name.
    /// TODO: All items to the left must be either identifier or template
    /// see if we can subclass the left to force this
    /// </summary>
    export class IdentifierExpression final : public Expression
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        IdentifierExpression(
            std::shared_ptr<const InnerTree::IdentifierExpression> innerNode,
            const SyntaxNode* parentNode) :
            Expression(innerNode, parentNode),
            m_qualifier(
                innerNode->HasQualifier() ? 
                    innerNode->GetQualifier().CreateOuter(this) :
                    nullptr),
            m_unqualifiedIdentifier(innerNode->GetUnqualifiedIdentifier().CreateOuter<UnqualifiedIdentifier>(this))
        {
        }

    public:
        /// <summary>
        /// Gets a value indicating whether the identifier has a qualifier
        /// </summary>
        bool HasQualifier() const
        {
            return m_qualifier != nullptr;
        }

        /// <summary>
        /// Gets the nested name specifier qualifier
        /// </summary>
        const NestedNameSpecifier& GetQualifier() const
        {
            if (!HasQualifier())
                throw std::runtime_error("Has no qualifier.");
            return *m_qualifier;
        }

        /// <summary>
        /// Gets the unqualified identifier
        /// </summary>
        const UnqualifiedIdentifier& GetUnqualifiedIdentifier() const
        {
            return *m_unqualifiedIdentifier;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            if (HasQualifier())
            {
                children.push_back(SyntaxNodeChild(m_qualifier));
            }

            children.push_back(SyntaxNodeChild(m_unqualifiedIdentifier));

            return children;
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
        }

    private:
        std::shared_ptr<const NestedNameSpecifier> m_qualifier;
        std::shared_ptr<const UnqualifiedIdentifier> m_unqualifiedIdentifier;
    };
}
