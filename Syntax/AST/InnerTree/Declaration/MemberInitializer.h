#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// A member initializer for initializing member values in a constructor initializer
    /// </summary>
    export class MemberInitializer final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        MemberInitializer(
            std::shared_ptr<const SyntaxToken> identifierToken,
            std::shared_ptr<const InitializerList> initializerList) :
            SyntaxNode(SyntaxNodeType::MemberInitializer),
            m_identifierToken(std::move(identifierToken)),
            m_initializerList(std::move(initializerList))
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
        /// Gets the initializer list
        /// </summary>
        const InitializerList& GetInitializerList() const
        {
            return *m_initializerList;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const MemberInitializer& rhs) const
        {
            return *m_identifierToken == *rhs.m_identifierToken &&
                *m_initializerList == *rhs.m_initializerList;
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
        std::shared_ptr<const InitializerList> m_initializerList;
    };
}
