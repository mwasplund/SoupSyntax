#pragma once

namespace Soup::Syntax::InnerTree
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
        /// Gets the statements
        /// </summary>
        const CompoundStatement& GetStatements() const
        {
            return *m_statements;
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
