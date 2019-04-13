#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The attribute sepecifier
    /// </summary>
    export class AttributeSpecifier final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        AttributeSpecifier(
            std::shared_ptr<const SyntaxToken> outerOpenBracketTokens,
            std::shared_ptr<const SyntaxToken> innerOpenBracketTokens,
            std::shared_ptr<const SyntaxSeparatorList<Attribute>> attributes,
            std::shared_ptr<const SyntaxToken> innerCloseBracketTokens,
            std::shared_ptr<const SyntaxToken> outerCloseBracketTokens) :
            SyntaxNode(SyntaxNodeType::AttributeSpecifier),
            m_outerOpenBracketTokens(std::move(outerOpenBracketTokens)),
            m_innerOpenBracketTokens(std::move(innerOpenBracketTokens)),
            m_attributes(std::move(attributes)),
            m_innerCloseBracketTokens(std::move(innerCloseBracketTokens)),
            m_outerCloseBracketTokens(std::move(outerCloseBracketTokens))
        {
        }

    public:
        /// <summary>
        /// Gets the outer open bracket token
        /// </summary>
        const SyntaxToken& GetOuterOpenBracketToken() const
        {
            return *m_outerOpenBracketTokens;
        }

        /// <summary>
        /// Gets the inner open bracket token
        /// </summary>
        const SyntaxToken& GetInnerOpenBracketToken() const
        {
            return *m_innerOpenBracketTokens;
        }

        /// <summary>
        /// Gets the list of attributes
        /// </summary>
        const SyntaxSeparatorList<Attribute>& GetAttributes() const
        {
            return *m_attributes;
        }

        /// <summary>
        /// Gets the inner close bracket token
        /// </summary>
        const SyntaxToken& GetInnerCloseBracketToken() const
        {
            return *m_innerCloseBracketTokens;
        }

        /// <summary>
        /// Gets the outer close bracket token
        /// </summary>
        const SyntaxToken& GetOuterCloseBracketToken() const
        {
            return *m_outerCloseBracketTokens;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const AttributeSpecifier& rhs) const
        {
            return *m_outerOpenBracketTokens == *rhs.m_outerOpenBracketTokens &&
                *m_innerOpenBracketTokens == *rhs.m_innerOpenBracketTokens &&
                *m_attributes == *rhs.m_attributes &&
                *m_innerCloseBracketTokens == *rhs.m_innerCloseBracketTokens &&
                *m_outerCloseBracketTokens == *rhs.m_outerCloseBracketTokens;
        }

        bool operator !=(const AttributeSpecifier& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const AttributeSpecifier&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_outerOpenBracketTokens;
        std::shared_ptr<const SyntaxToken> m_innerOpenBracketTokens;
        std::shared_ptr<const SyntaxSeparatorList<Attribute>> m_attributes;
        std::shared_ptr<const SyntaxToken> m_innerCloseBracketTokens;
        std::shared_ptr<const SyntaxToken> m_outerCloseBracketTokens;
    };
}
