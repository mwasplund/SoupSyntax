#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The regular function body
    /// </summary>
    export class RegularFunctionBody final : public SyntaxNode
    {
    public:
        RegularFunctionBody(std::shared_ptr<const CompoundStatement> statements) :
            SyntaxNode(SyntaxNodeType::RegularFunctionBody),
            m_statements(std::move(statements))
        {
        }

        /// <summary>
        /// Gets the statements
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
                    SyntaxNodeChild(m_statements),
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
        bool operator ==(const RegularFunctionBody& rhs) const
        {
            return *m_statements == *rhs.m_statements;
        }

        bool operator !=(const RegularFunctionBody& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const RegularFunctionBody&>(rhs);
        }

    private:
        std::shared_ptr<const CompoundStatement> m_statements;
    };
}
