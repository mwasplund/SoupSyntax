#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Compound statement node that represents a collection of statments wrapped
    /// by a left and right curly brace. "{ int i = 0; }"
    /// Otherwise known as Block statements
    /// </summary>
    export class CompoundStatement final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        CompoundStatement(
            std::shared_ptr<const SyntaxToken> leftBraceToken,
            std::vector<std::shared_ptr<const Statement>> statements,
            std::shared_ptr<const SyntaxToken> rightBraceToken) :
            SyntaxNode(SyntaxNodeType::CompoundStatement),
            m_leftBraceToken(std::move(leftBraceToken)),
            m_statements(std::move(statements)),
            m_rightBraceToken(std::move(rightBraceToken))
        {
        }

    public:
        /// <summary>
        /// Gets the SyntaxToken for the left brace.
        /// </summary>
        const SyntaxToken& GetLeftBraceToken() const
        {
            return *m_leftBraceToken;
        }

        /// <summary>
        /// Gets the list of statements
        /// </summary>
        const std::vector<std::shared_ptr<const Statement>>& GetStatements() const
        {
            return m_statements;
        }

        /// <summary>
        /// Gets the SyntaxToken for the right brace.
        /// </summary>
        const SyntaxToken& GetRightBraceToken() const
        {
            return *m_rightBraceToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_leftBraceToken));
    
            for (auto& statement : m_statements)
            {
                children.push_back(SyntaxNodeChild(statement));
            }

            children.push_back(SyntaxNodeChild(m_rightBraceToken));

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
            return *m_leftBraceToken == *rhs.m_leftBraceToken &&
                *m_rightBraceToken == *rhs.m_rightBraceToken &&
                std::equal(
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
        std::shared_ptr<const SyntaxToken> m_leftBraceToken;
        std::vector<std::shared_ptr<const Statement>> m_statements;
        std::shared_ptr<const SyntaxToken> m_rightBraceToken;
    };
}
