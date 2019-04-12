#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Declaration specifier sequence
    /// </summary>
    export class DeclarationSpecifier final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSpecifier(
            std::vector<std::shared_ptr<const SyntaxToken>> leadingModifiers,
            std::shared_ptr<const SyntaxNode> typeSpecifier,
            std::vector<std::shared_ptr<const SyntaxToken>> trailingModifiers) :
            SyntaxNode(SyntaxNodeType::DeclarationSpecifier),
            m_leadingModifiers(std::move(leadingModifiers)),
            m_typeSpecifier(std::move(typeSpecifier)),
            m_trailingModifiers(std::move(trailingModifiers))
        {
        }

    public:
        /// <summary>
        /// Gets the collection of leading modifier specifiers before the type
        /// </summary>
        const std::vector<std::shared_ptr<const SyntaxToken>>& GetLeadingModifiers() const
        {
            return m_leadingModifiers;
        }

        /// <summary>
        /// Gets the type specifier
        /// </summary>
        const SyntaxNode& GetTypeSpecifier() const
        {
            return *m_typeSpecifier;
        }

        /// <summary>
        /// Gets the collection of trailing modifier specifiers after the type
        /// </summary>
        const std::vector<std::shared_ptr<const SyntaxToken>>& GetTrailingModifiers() const
        {
            return m_trailingModifiers;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;
            for (auto& specifier : m_leadingModifiers)
            {
                children.push_back(SyntaxNodeChild(specifier));
            }

            children.push_back(SyntaxNodeChild(m_typeSpecifier));

            for (auto& specifier : m_trailingModifiers)
            {
                children.push_back(SyntaxNodeChild(specifier));
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
        bool operator ==(const DeclarationSpecifier& rhs) const
        {
            bool leadingModifiersEqual = 
                std::equal(
                    begin(m_leadingModifiers),
                    end(m_leadingModifiers),
                    begin(rhs.m_leadingModifiers),
                    end(rhs.m_leadingModifiers),
                    [](const std::shared_ptr<const SyntaxToken>& lhs, const std::shared_ptr<const SyntaxToken>& rhs)
                    {
                        return *lhs == *rhs;
                    });
            if (!leadingModifiersEqual)
            {
                return false;
            }

            bool trailingModifiersEqual = 
                std::equal(
                    begin(m_trailingModifiers),
                    end(m_trailingModifiers),
                    begin(rhs.m_trailingModifiers),
                    end(rhs.m_trailingModifiers),
                    [](const std::shared_ptr<const SyntaxToken>& lhs, const std::shared_ptr<const SyntaxToken>& rhs)
                    {
                        return *lhs == *rhs;
                    });
            if (!trailingModifiersEqual)
            {
                return false;
            }
    
            return *m_typeSpecifier == *rhs.m_typeSpecifier;
        }

        bool operator !=(const DeclarationSpecifier& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DeclarationSpecifier&>(rhs);
        }

    private:
        std::vector<std::shared_ptr<const SyntaxToken>> m_leadingModifiers;
        std::shared_ptr<const SyntaxNode> m_typeSpecifier;
        std::vector<std::shared_ptr<const SyntaxToken>> m_trailingModifiers;
    };
}
