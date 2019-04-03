﻿#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// A simple template identifier expression referencing a single Identifier
    /// </summary>
    export class SimpleTemplateIdentifierExpression final : public UnqualifiedIdentifierExpression
    {
        friend class SyntaxFactory;

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
        const SyntaxSeparatorList<Expression>& GetTemplateArguments() const
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
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_identifierToken));
            children.push_back(SyntaxNodeChild(m_lessThanToken));

            auto templateArgumentChildren = m_templateArgumentList->GetChildren();
            children.insert(children.end(), templateArgumentChildren.begin(), templateArgumentChildren.end());

            children.push_back(SyntaxNodeChild(m_greaterThanToken));

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
