#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Accessor specifier for class declaration
    /// ex. "public:"
    /// </summary>
    export class AccessorSpecifier final : public Declaration
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        AccessorSpecifier(
            std::shared_ptr<const SyntaxToken> accessorToken,
            std::shared_ptr<const SyntaxToken> colonToken) :
            Declaration(SyntaxNodeType::AccessorSpecifier),
            m_accessorToken(std::move(accessorToken)),
            m_colonToken(std::move(colonToken))
        {
        }

    public:
        /// <summary>
        /// Gets the optional SyntaxToken for the accessor specifier.
        /// </summary>
        const SyntaxToken& GetAccessorToken() const
        {
            return *m_accessorToken;
        }

        /// <summary>
        /// Gets the SyntaxToken for the colon.
        /// </summary>
        const SyntaxToken& GetColonToken() const
        {
            return *m_colonToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_accessorToken));
            children.push_back(SyntaxNodeChild(m_colonToken));

            return children;
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const AccessorSpecifier& rhs) const
        {
            return *m_accessorToken == *rhs.m_accessorToken &&
                *m_colonToken == *rhs.m_colonToken;
        }

        bool operator !=(const AccessorSpecifier& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const AccessorSpecifier&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_accessorToken;
        std::shared_ptr<const SyntaxToken> m_colonToken;
    };
}
