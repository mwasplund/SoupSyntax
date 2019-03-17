#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// If statement else clause node
    /// </summary>
    export class ElseClause final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ElseClause(
            std::shared_ptr<const SyntaxToken> elseToken,
            std::shared_ptr<const Statement> statement) :
            SyntaxNode(SyntaxNodeType::ElseClause),
            m_elseToken(std::move(elseToken)),
            m_statement(std::move(statement))
        {
        }

    public:
        /// <summary>
        /// Gets the SyntaxToken for the else keyword.
        /// </summary>
        const SyntaxToken& GetElseToken() const
        {
            return *m_elseToken;
        }

        /// <summary>
        /// Gets the Statement that is executed when the condition evaluates to true.
        /// </summary>
        const Statement& GetStatement() const
        {
            return *m_statement;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
            {
                SyntaxNodeChild(m_elseToken),
                SyntaxNodeChild(m_statement),
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
        bool operator ==(const ElseClause& rhs) const
        {
            return *m_elseToken == *rhs.m_elseToken &&
                *m_statement  == *rhs.m_statement;
        }

        bool operator !=(const ElseClause& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ElseClause&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_elseToken;
        std::shared_ptr<const Statement> m_statement;
    };
}
