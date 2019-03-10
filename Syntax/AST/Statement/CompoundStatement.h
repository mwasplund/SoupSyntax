#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Compound statement node
    /// </summary>
    export class CompoundStatement final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        CompoundStatement(std::vector<std::shared_ptr<const Statement>> statements) :
            SyntaxNode(SyntaxNodeType::CompoundStatement),
            m_statements(std::move(statements))
        {
        }

        /// <summary>
        /// Gets the list of statements
        /// </summary>
        const std::vector<std::shared_ptr<const Statement>>& GetStatements() const
        {
            return m_statements;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;
            for (auto& statement : m_statements)
            {
                children.push_back(SyntaxNodeChild(statement));
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
        bool operator ==(const CompoundStatement& rhs) const
        {
            return std::equal(
                begin(m_statements),
                end(m_statements),
                begin(rhs.m_statements),
                end(rhs.m_statements),
                [](const std::shared_ptr<const Statement>& lhs, const std::shared_ptr<const Statement>& rhs)
                {
                    return *lhs == *rhs;
                });
        }

        bool operator !=(const CompoundStatement& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const CompoundStatement&>(rhs);
        }

    private:
        std::vector<std::shared_ptr<const Statement>> m_statements;
    };
}
