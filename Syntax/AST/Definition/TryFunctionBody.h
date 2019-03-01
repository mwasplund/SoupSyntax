#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The try function body
    /// </summary>
    export class TryFunctionBody final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        TryFunctionBody() :
            SyntaxNode(SyntaxNodeType::TryFunctionBody),
            m_statements(nullptr)
        {
        }

        /// <summary>
        /// Gets or sets the statements
        /// </summary>
        const CompoundStatement& GetStatements() const
        {
            return *m_statements;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(*m_statements),
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
        bool operator ==(const TryFunctionBody& rhs) const
        {
            return *m_statements == *rhs.m_statements;
        }

        bool operator !=(const TryFunctionBody& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const TryFunctionBody&>(rhs);
        }

    private:
        std::shared_ptr<const CompoundStatement> m_statements;
    };
}
