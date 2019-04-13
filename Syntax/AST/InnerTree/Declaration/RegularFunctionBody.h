#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The regular function body
    /// </summary>
    export class RegularFunctionBody final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        RegularFunctionBody(std::shared_ptr<const CompoundStatement> statements) :
            SyntaxNode(SyntaxNodeType::RegularFunctionBody),
            m_statements(std::move(statements))
        {
        }

    public:
        /// <summary>
        /// Gets the statements
        /// </summary>
        const CompoundStatement& GetStatements() const
        {
            return *m_statements;
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
