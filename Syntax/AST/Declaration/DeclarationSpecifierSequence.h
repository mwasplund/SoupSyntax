#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Declaration specifier sequence
    /// </summary>
    export class DeclarationSpecifierSequence final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSpecifierSequence(
            std::vector<std::shared_ptr<const SyntaxNode>> specifiers) :
            SyntaxNode(SyntaxNodeType::DeclarationSpecifierSequence),
            m_specifiers(std::move(specifiers))
        {
        }

        /// <summary>
        /// Gets the list of declaration specifiers
        /// </summary>
        const std::vector<std::shared_ptr<const SyntaxNode>>& GetSpecifiers() const
        {
            return m_specifiers;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;
            for (auto& specifier : m_specifiers)
            {
                children.push_back(SyntaxNodeChild(*specifier));
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
        bool operator ==(const DeclarationSpecifierSequence& rhs) const
        {
            return std::equal(
                begin(m_specifiers),
                end(m_specifiers),
                begin(rhs.m_specifiers),
                end(rhs.m_specifiers),
                [](const std::shared_ptr<const SyntaxNode>& lhs, const std::shared_ptr<const SyntaxNode>& rhs)
                {
                    return *lhs == *rhs;
                });
        }

        bool operator !=(const DeclarationSpecifierSequence& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DeclarationSpecifierSequence&>(rhs);
        }

    private:
        std::vector<std::shared_ptr<const SyntaxNode>> m_specifiers;
    };
}
