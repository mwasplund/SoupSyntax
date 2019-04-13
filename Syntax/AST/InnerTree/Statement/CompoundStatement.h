#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Compound statement node that represents a collection of statments wrapped
    /// by a left and right curly brace. "{ int i = 0; }"
    /// Otherwise known as Block statements
    /// </summary>
    export class CompoundStatement final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        CompoundStatement(
            std::shared_ptr<const SyntaxToken> openBraceToken,
            std::vector<std::shared_ptr<const Statement>> statements,
            std::shared_ptr<const SyntaxToken> closeBraceToken) :
            SyntaxNode(SyntaxNodeType::CompoundStatement),
            m_openBraceToken(std::move(openBraceToken)),
            m_statements(std::move(statements)),
            m_closeBraceToken(std::move(closeBraceToken))
        {
        }

    public:
        /// <summary>
        /// Gets the SyntaxToken for the left brace.
        /// </summary>
        const SyntaxToken& GetOpenBraceToken() const
        {
            return *m_openBraceToken;
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
        const SyntaxToken& GetCloseBraceToken() const
        {
            return *m_closeBraceToken;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const CompoundStatement& rhs) const
        {
            return *m_openBraceToken == *rhs.m_openBraceToken &&
                *m_closeBraceToken == *rhs.m_closeBraceToken &&
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
        std::shared_ptr<const SyntaxToken> m_openBraceToken;
        std::vector<std::shared_ptr<const Statement>> m_statements;
        std::shared_ptr<const SyntaxToken> m_closeBraceToken;
    };
}
