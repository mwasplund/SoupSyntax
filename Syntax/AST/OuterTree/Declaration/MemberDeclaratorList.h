#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The member declarator list node
    /// TODO: Can this be a direct list on the parent?
    /// </summary>
    export class MemberDeclaratorList final : public SyntaxNode
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        MemberDeclaratorList(
            std::shared_ptr<const InnerTree::MemberDeclaratorList> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(innerNode, parentNode),
            m_items(innerNode->GetItems().CreateOuter<MemberDeclarator>(this))
        {
        }

    public:
        /// <summary>
        /// Gets the list of items
        /// </summary>
        const SyntaxSeparatorList<MemberDeclarator>& GetItems() const
        {
            return *m_items;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            auto itemsChildren = m_items->GetChildren();
            children.insert(children.end(), itemsChildren.begin(), itemsChildren.end());

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
        std::shared_ptr<const SyntaxSeparatorList<MemberDeclarator>> m_items;
    };
}
