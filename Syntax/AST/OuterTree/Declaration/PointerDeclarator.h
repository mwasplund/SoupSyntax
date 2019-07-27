#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The pointer declarator
    /// </summary>
    export class PointerDeclarator final : public SyntaxNode
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        PointerDeclarator(
            std::shared_ptr<const InnerTree::PointerDeclarator> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(innerNode, parentNode),
            m_pointerOperator(innerNode->GetPointerOperator().CreateOuter(this)),
            m_declarator(innerNode->GetDeclarator().CreateOuter<SyntaxNode>(this))
        {
        }

    public:
        /// <summary>
        /// Gets the pointer operator
        /// </summary>
        const PointerOperator& GetPointerOperator() const
        {
            return *m_pointerOperator;
        }

        /// <summary>
        /// Gets the declarator
        /// </summary>
        const SyntaxNode& GetDeclarator() const
        {
            return *m_declarator;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_pointerOperator));
            children.push_back(SyntaxNodeChild(m_declarator));

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
        std::shared_ptr<const PointerOperator> m_pointerOperator;
        std::shared_ptr<const SyntaxNode> m_declarator;
    };
}
