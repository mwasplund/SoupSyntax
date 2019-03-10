#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Declaration sequence
    /// </summary>
    export class DeclarationSequence final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSequence(std::vector<std::shared_ptr<const Declaration>> declarations) :
            SyntaxNode(SyntaxNodeType::DeclarationSequence),
            m_declarations(std::move(declarations))
        {
        }

        /// <summary>
        /// Gets the list of declarations
        /// </summary>
        const std::vector<std::shared_ptr<const Declaration>>& GetDeclarations() const
        {
            return m_declarations;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;
            for (auto& declaration : m_declarations)
            {
                children.push_back(SyntaxNodeChild(declaration));
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
        bool operator ==(const DeclarationSequence& rhs) const
        {
            return std::equal(
                begin(m_declarations),
                end(m_declarations),
                begin(rhs.m_declarations),
                end(rhs.m_declarations),
                [](const std::shared_ptr<const Declaration>& lhs, const std::shared_ptr<const Declaration>& rhs)
                {
                    return *lhs == *rhs;
                });
        }

        bool operator !=(const DeclarationSequence& rhs) const
        {
            return !(*this == rhs);
        }

    private:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DeclarationSequence&>(rhs);
        }
        
    private:
        std::vector<std::shared_ptr<const Declaration>> m_declarations;
    };
}
