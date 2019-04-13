#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The function parameter list
    /// </summary>
    export class ParameterList final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ParameterList(
            std::shared_ptr<const SyntaxToken> openParenthesisToken,
            std::shared_ptr<const SyntaxSeparatorList<Parameter>> parameters,
            std::shared_ptr<const SyntaxToken> closeParenthesisToken) :
            SyntaxNode(SyntaxNodeType::ParameterList),
            m_openParenthesisToken(std::move(openParenthesisToken)),
            m_parameters(std::move(parameters)),
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
        /// Gets the list of parameters
        /// </summary>
        const SyntaxSeparatorList<Parameter>& GetParameters() const
        {
            return *m_parameters;
        }

        /// <summary>
        /// Gets the right parenthesis token
        /// </summary>
        const SyntaxToken& GetCloseParenthesisToken() const
        {
            return *m_closeParenthesisToken;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ParameterList& rhs) const
        {
            return *m_openParenthesisToken == *rhs.m_openParenthesisToken &&
                *m_parameters == *rhs.m_parameters &&
                *m_closeParenthesisToken == *rhs.m_closeParenthesisToken;
        }

        bool operator !=(const ParameterList& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ParameterList&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_openParenthesisToken;
        std::shared_ptr<const SyntaxSeparatorList<Parameter>> m_parameters;
        std::shared_ptr<const SyntaxToken> m_closeParenthesisToken;
    };
}
