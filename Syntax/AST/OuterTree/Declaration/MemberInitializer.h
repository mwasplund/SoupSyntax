#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// A member initializer for initializing member values in a constructor initializer
    /// </summary>
    export class MemberInitializer final : public SyntaxNode
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        MemberInitializer(
            std::shared_ptr<const InnerTree::MemberInitializer> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(innerNode, parentNode),
            m_identifierToken(innerNode->GetIdentifierToken().CreateOuter(this)),
            m_initializerList(innerNode->GetInitializerList().CreateOuter(this))
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
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(m_identifierToken),
                    SyntaxNodeChild(m_initializerList),
                });
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_identifierToken;
        std::shared_ptr<const InitializerList> m_initializerList;
    };
}
