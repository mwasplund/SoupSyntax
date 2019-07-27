#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The member declarator node
    /// </summary>
    export class MemberDeclarator final : public SyntaxNode
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        MemberDeclarator(
            std::shared_ptr<const InnerTree::MemberDeclarator> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(innerNode, parentNode),
            m_declarator(innerNode->GetDeclarator().CreateOuterAny(this)),
            m_initializer(
                innerNode->HasInitializer() ? 
                    innerNode->GetInitializer().CreateOuterAny(this) :
                    nullptr)
        {
        }

    public:
        /// <summary>
        /// Gets the declarator
        /// </summary>
        const SyntaxNode& GetDeclarator() const
        {
            return *m_declarator;
        }

        /// <summary>
        /// Gets a value indicating whether the optional initialize exists
        /// </summary>
        bool HasInitializer() const
        {
            return m_initializer != nullptr;
        }

        /// <summary>
        /// Gets the optional initializer
        /// </summary>
        const SyntaxNode& GetInitializer() const
        {
            if (!HasInitializer())
                throw std::runtime_error("No Initializer present.");
            return *m_initializer;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_declarator));

            if (HasInitializer())
            {
                children.push_back(SyntaxNodeChild(m_initializer));
            }

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
        std::shared_ptr<const SyntaxNode> m_declarator;
        std::shared_ptr<const SyntaxNode> m_initializer;
    };
}
