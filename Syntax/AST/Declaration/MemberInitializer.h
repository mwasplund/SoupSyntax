#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// A member initializer for initializing member values in a constructor initializer
    /// </summary>
    export class MemberInitializer final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        MemberInitializer(
            std::shared_ptr<const SyntaxToken> identifierToken,
            std::shared_ptr<const BracedInitializerList> initializer) :
            SyntaxNode(SyntaxNodeType::MemberInitializer),
            m_identifierToken(std::move(identifierToken)),
            m_initializer(std::move(initializer))
        {
        }

    public:
        /// <summary>
        /// Gets the initializer token
        /// </summary>
        const SyntaxToken& GetIdentifierToken() const
        {
            return *m_identifierToken;
        }

        /// <summary>
        /// Gets the initializer
        /// </summary>
        const BracedInitializerList& GetInitializer() const
        {
            return *m_initializer;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(m_identifierToken),
                    SyntaxNodeChild(m_initializer),
                });
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
        bool operator ==(const MemberInitializer& rhs) const
        {
            return *m_identifierToken == *rhs.m_identifierToken &&
                *m_initializer == *rhs.m_initializer;
        }

        bool operator !=(const MemberInitializer& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const MemberInitializer&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_identifierToken;
        std::shared_ptr<const BracedInitializerList> m_initializer;
    };
}
