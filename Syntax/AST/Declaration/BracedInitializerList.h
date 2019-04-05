#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The braced initializer list used to initialize values "(a, b)"
    /// </summary>
    export class BracedInitializerList final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        BracedInitializerList(
            std::shared_ptr<const SyntaxToken> openParenthesisToken,
            std::shared_ptr<const SyntaxSeparatorList<Expression>> values,
            std::shared_ptr<const SyntaxToken> closeParenthesisToken) :
            SyntaxNode(SyntaxNodeType::BracedInitializerList),
            m_openParenthesisToken(std::move(openParenthesisToken)),
            m_values(std::move(values)),
            m_closeParenthesisToken(std::move(closeParenthesisToken))
        {
        }

    public:
        /// <summary>
        /// Gets the left parenthesis token
        /// </summary>
        const SyntaxToken& GetOpenParenthesisToken() const
        {
            return *m_openParenthesisToken;
        }

        /// <summary>
        /// Gets the list of values
        /// </summary>
        const SyntaxSeparatorList<Expression>& GetValues() const
        {
            return *m_values;
        }

        /// <summary>
        /// Gets the right parenthesis token
        /// </summary>
        const SyntaxToken& GetCloseParenthesisToken() const
        {
            return *m_closeParenthesisToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_openParenthesisToken));

            auto valueChildren = m_values->GetChildren();
            children.insert(children.end(), valueChildren.begin(), valueChildren.end());

            children.push_back(SyntaxNodeChild(m_closeParenthesisToken));

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
        bool operator ==(const BracedInitializerList& rhs) const
        {
            return *m_openParenthesisToken == *rhs.m_openParenthesisToken &&
                *m_values == *rhs.m_values &&
                *m_closeParenthesisToken == *rhs.m_closeParenthesisToken;
        }

        bool operator !=(const BracedInitializerList& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const BracedInitializerList&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_openParenthesisToken;
        std::shared_ptr<const SyntaxSeparatorList<Expression>> m_values;
        std::shared_ptr<const SyntaxToken> m_closeParenthesisToken;
    };
}
