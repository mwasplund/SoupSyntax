#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The initializer declarator list node
    /// </summary>
    export class InitializerDeclaratorList final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        InitializerDeclaratorList(
            std::vector<std::shared_ptr<const InitializerDeclarator>> items) :
            SyntaxNode(SyntaxNodeType::InitializerDeclaratorList),
            m_items(std::move(items))
        {
        }

        /// <summary>
        /// Gets the list of items
        /// </summary>
        const std::vector<std::shared_ptr<const InitializerDeclarator>>& GetItems() const
        {
            return m_items;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;
            for (auto& item : m_items)
            {
                children.push_back(SyntaxNodeChild(*item));
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

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const InitializerDeclaratorList& rhs) const
        {
            return std::equal(
                begin(m_items),
                end(m_items),
                begin(rhs.m_items),
                end(rhs.m_items),
                [](const std::shared_ptr<const InitializerDeclarator>& lhs, const std::shared_ptr<const InitializerDeclarator>& rhs)
                {
                    return *lhs == *rhs;
                });
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
        std::vector<std::shared_ptr<const InitializerDeclarator>> m_items;
    };
}
