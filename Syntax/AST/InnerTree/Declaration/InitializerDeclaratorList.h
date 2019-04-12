#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The initializer declarator list node
    /// TODO: Can this be a direct list on the parent?
    /// </summary>
    export class InitializerDeclaratorList final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        InitializerDeclaratorList(
            std::shared_ptr<const SyntaxSeparatorList<InitializerDeclarator>> items) :
            SyntaxNode(SyntaxNodeType::InitializerDeclaratorList),
            m_items(std::move(items))
        {
        }

    public:
        /// <summary>
        /// Gets the list of items
        /// </summary>
        const SyntaxSeparatorList<InitializerDeclarator>& GetItems() const
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

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const InitializerDeclaratorList& rhs) const
        {
            return *m_items == *rhs.m_items;
        }

        bool operator !=(const InitializerDeclaratorList& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const InitializerDeclaratorList&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxSeparatorList<InitializerDeclarator>> m_items;
    };
}
