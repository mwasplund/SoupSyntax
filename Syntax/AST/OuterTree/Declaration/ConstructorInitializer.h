#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The optional constructor initializer
    /// </summary>
    export class ConstructorInitializer final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ConstructorInitializer(
            std::shared_ptr<const SyntaxToken> colonToken,
            std::shared_ptr<const SyntaxSeparatorList<MemberInitializer>> initializers) :
            SyntaxNode(SyntaxNodeType::ConstructorInitializer),
            m_colonToken(std::move(colonToken)),
            m_initializers(std::move(initializers))
        {
        }

    public:
        /// <summary>
        /// Gets the colon token
        /// </summary>
        const SyntaxToken& GetColonToken() const
        {
            return *m_colonToken;
        }

        /// <summary>
        /// Gets the list of initializers
        /// </summary>
        const SyntaxSeparatorList<MemberInitializer>& GetInitializers() const
        {
            return *m_initializers;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_colonToken));

            auto initializerChildren = m_initializers->GetChildren();
            children.insert(children.end(), initializerChildren.begin(), initializerChildren.end());

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
        bool operator ==(const ConstructorInitializer& rhs) const
        {
            return *m_colonToken == *rhs.m_colonToken &&
                *m_initializers == *rhs.m_initializers;
        }

        bool operator !=(const ConstructorInitializer& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ConstructorInitializer&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_colonToken;
        std::shared_ptr<const SyntaxSeparatorList<MemberInitializer>> m_initializers;
    };
}
