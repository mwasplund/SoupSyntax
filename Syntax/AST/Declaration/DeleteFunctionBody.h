#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The delete function body
    /// </summary>
    export class DeleteFunctionBody final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        DeleteFunctionBody(
            std::shared_ptr<const SyntaxToken> equalToken,
            std::shared_ptr<const SyntaxToken> deleteToken,
            std::shared_ptr<const SyntaxToken> semicolonToken) :
            SyntaxNode(SyntaxNodeType::DeleteFunctionBody),
            m_equalToken(std::move(equalToken)),
            m_deleteToken(std::move(deleteToken)),
            m_semicolonToken(std::move(semicolonToken))
        {
        }

    public:
        /// <summary>
        /// Get the equal token
        /// </summary>
        const SyntaxToken& GetEqualToken() const
        {
            return *m_equalToken;
        }

        /// <summary>
        /// Get the delete token
        /// </summary>
        const SyntaxToken& GetDeleteToken() const
        {
            return *m_deleteToken;
        }

        /// <summary>
        /// Get the semicolon token
        /// </summary>
        const SyntaxToken& GetSemicolonToken() const
        {
            return *m_semicolonToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(*m_equalToken),
                    SyntaxNodeChild(*m_deleteToken),
                    SyntaxNodeChild(*m_semicolonToken),
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
        bool operator ==(const DeleteFunctionBody& rhs) const
        {
            return *m_equalToken == *rhs.m_equalToken &&
                *m_deleteToken == *rhs.m_deleteToken &&
                *m_semicolonToken == *rhs.m_semicolonToken;
        }

        bool operator !=(const DeleteFunctionBody& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DeleteFunctionBody&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_equalToken;
        std::shared_ptr<const SyntaxToken> m_deleteToken;
        std::shared_ptr<const SyntaxToken> m_semicolonToken;
    };
}
