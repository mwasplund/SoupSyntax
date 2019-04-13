﻿#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The initializer list used to initialize values surrounded by either 
    /// braces or parenthesis "(a, b)" or "{a, b}"
    /// </summary>
    export class InitializerList final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        InitializerList(
            std::shared_ptr<const SyntaxToken> openToken,
            std::shared_ptr<const SyntaxSeparatorList<Expression>> values,
            std::shared_ptr<const SyntaxToken> closeToken) :
            SyntaxNode(SyntaxNodeType::InitializerList),
            m_openToken(std::move(openToken)),
            m_values(std::move(values)),
            m_closeToken(std::move(closeToken))
        {
        }

    public:
        /// <summary>
        /// Gets the left token
        /// </summary>
        const SyntaxToken& GetOpenToken() const
        {
            return *m_openToken;
        }

        /// <summary>
        /// Gets the list of values
        /// </summary>
        const SyntaxSeparatorList<Expression>& GetValues() const
        {
            return *m_values;
        }

        /// <summary>
        /// Gets the right token
        /// </summary>
        const SyntaxToken& GetCloseToken() const
        {
            return *m_closeToken;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const InitializerList& rhs) const
        {
            return *m_openToken == *rhs.m_openToken &&
                *m_values == *rhs.m_values &&
                *m_closeToken == *rhs.m_closeToken;
        }

        bool operator !=(const InitializerList& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const InitializerList&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_openToken;
        std::shared_ptr<const SyntaxSeparatorList<Expression>> m_values;
        std::shared_ptr<const SyntaxToken> m_closeToken;
    };
}