#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Try statement node
    /// </summary>
    export class TryStatement final : public Statement
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        TryStatement(
            std::shared_ptr<const SyntaxToken> tryToken,
            std::shared_ptr<const CompoundStatement> compoundStatement,
            std::vector<std::shared_ptr<const CatchClause>> catchClauses) :
            Statement(SyntaxNodeType::TryStatement),
            m_tryToken(std::move(tryToken)),
            m_compoundStatement(std::move(compoundStatement)),
            m_catchClauses(std::move(catchClauses))
        {
        }

    public:
        /// <summary>
        /// Gets the SyntaxToken for the try keyword.
        /// </summary>
        const SyntaxToken& GetTryToken() const
        {
            return *m_tryToken;
        }

        /// <summary>
        /// Gets the CompoundStatement for the try block.
        /// </summary>
        const CompoundStatement& GetCompoundStatement() const
        {
            return *m_compoundStatement;
        }

        /// <summary>
        /// Gets the list of catch clauses
        /// </summary>
        const std::vector<std::shared_ptr<const CatchClause>>& GetCatchClauses() const
        {
            return m_catchClauses;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_tryToken));
            children.push_back(SyntaxNodeChild(m_compoundStatement));
    
            for (auto& catchClause : m_catchClauses)
            {
                children.push_back(SyntaxNodeChild(catchClause));
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
        bool operator ==(const TryStatement& rhs) const
        {
            return *m_tryToken == *rhs.m_tryToken &&
                *m_compoundStatement == *rhs.m_compoundStatement &&
                std::equal(
                    begin(m_catchClauses),
                    end(m_catchClauses),
                    begin(rhs.m_catchClauses),
                    end(rhs.m_catchClauses),
                    [](const std::shared_ptr<const CatchClause>& lhs, const std::shared_ptr<const CatchClause>& rhs)
                    {
                        return *lhs == *rhs;
                    });
        }

        bool operator !=(const TryStatement& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const TryStatement&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_tryToken;
        std::shared_ptr<const CompoundStatement> m_compoundStatement;
        std::vector<std::shared_ptr<const CatchClause>> m_catchClauses;
    };
}
