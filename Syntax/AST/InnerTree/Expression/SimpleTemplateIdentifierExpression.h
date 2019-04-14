﻿#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// A simple template identifier expression referencing a single Identifier
    /// </summary>
    export class SimpleTemplateIdentifierExpression final : public UnqualifiedIdentifierExpression
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        SimpleTemplateIdentifierExpression(
            std::shared_ptr<const SyntaxToken> identifierToken,
            std::shared_ptr<const SyntaxToken> lessThanToken,
            std::shared_ptr<const SyntaxSeparatorList<Expression>> templateArgumentList,
            std::shared_ptr<const SyntaxToken> greaterThanToken) :
            UnqualifiedIdentifierExpression(SyntaxNodeType::SimpleTemplateIdentifierExpression),
            m_identifierToken(std::move(identifierToken)),
            m_lessThanToken(std::move(lessThanToken)),
            m_templateArgumentList(std::move(templateArgumentList)),
            m_greaterThanToken(std::move(greaterThanToken))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::SimpleTemplateIdentifierExpression> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<SimpleTemplateIdentifierExpression>(),
                parentNode);
        }

        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        virtual std::shared_ptr<const OuterTree::SyntaxNode> CreateOuterAny(
            const OuterTree::SyntaxNode* parentNode) const override final
        {
            return std::static_pointer_cast<const OuterTree::SyntaxNode>(
                CreateOuter(parentNode));
        }

        /// <summary>
        /// Gets the identifier token
        /// </summary>
        const SyntaxToken& GetIdentifierToken() const
        {
            return *m_identifierToken;
        }

        /// <summary>
        /// Gets the less than token
        /// </summary>
        const SyntaxToken& GetLessThanToken() const
        {
            return *m_lessThanToken;
        }

        /// <summary>
        /// Gets the template argument list
        /// </summary>
        const SyntaxSeparatorList<Expression>& GetTemplateArgumentList() const
        {
            return *m_templateArgumentList;
        }

        /// <summary>
        /// Gets the greater than token
        /// </summary>
        const SyntaxToken& GetGreaterThanToken() const
        {
            return *m_greaterThanToken;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SimpleTemplateIdentifierExpression& rhs) const
        {
            return *m_identifierToken == *rhs.m_identifierToken &&
                *m_lessThanToken == *rhs.m_lessThanToken &&
                *m_templateArgumentList == *rhs.m_templateArgumentList &&
                *m_greaterThanToken == *rhs.m_greaterThanToken;
        }

        bool operator !=(const SimpleTemplateIdentifierExpression& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const SimpleTemplateIdentifierExpression&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_identifierToken;
        std::shared_ptr<const SyntaxToken> m_lessThanToken;
        std::shared_ptr<const SyntaxSeparatorList<Expression>> m_templateArgumentList;
        std::shared_ptr<const SyntaxToken> m_greaterThanToken;
    };
}
