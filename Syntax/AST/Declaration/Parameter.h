#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The parameter
    /// </summary>
    export class Parameter final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        Parameter(
            std::shared_ptr<const SyntaxNode> declarationSpecifierSequence,
            std::shared_ptr<const SyntaxNode> declarator) :
            SyntaxNode(SyntaxNodeType::Parameter),
            m_declarationSpecifierSequence(std::move(declarationSpecifierSequence)),
            m_declarator(std::move(declarator))
        {
        }

    public:
        /// <summary>
        /// Gets the list of declaration specifier sequence
        /// </summary>
        const SyntaxNode& GetDeclarationSpecifierSequence() const
        {
            return *m_declarationSpecifierSequence;
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
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(m_declarationSpecifierSequence),
                    SyntaxNodeChild(m_declarator),
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
        bool operator ==(const Parameter& rhs) const
        {
            return *m_declarationSpecifierSequence == *rhs.m_declarationSpecifierSequence &&
                *m_declarator == *rhs.m_declarator;
        }

        bool operator !=(const Parameter& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const Parameter&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxNode> m_declarationSpecifierSequence;
        std::shared_ptr<const SyntaxNode> m_declarator;
    };
}
