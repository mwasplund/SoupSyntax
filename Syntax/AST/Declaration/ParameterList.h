#pragma once
#include "SyntaxList.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The function parameter list
    /// </summary>
    export class ParameterList final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        ParameterList(
            std::shared_ptr<const SyntaxToken> leftParenthesisToken,
            std::shared_ptr<const SyntaxList<Parameter>> parameters,
            std::shared_ptr<const SyntaxToken> rightParenthesisToken) :
            SyntaxNode(SyntaxNodeType::ParameterList),
            m_leftParenthesisToken(std::move(leftParenthesisToken)),
            m_parameters(std::move(parameters)),
            m_rightParenthesisToken(std::move(rightParenthesisToken))
        {
        }

        /// <summary>
        /// Gets the left parenthesis token
        /// </summary>
        const SyntaxToken& GetLeftParenthesisToken() const
        {
            return *m_leftParenthesisToken;
        }

        /// <summary>
        /// Gets the list of parameters
        /// </summary>
        const SyntaxList<Parameter>& GetParameters() const
        {
            return *m_parameters;
        }

        /// <summary>
        /// Gets the right parenthesis token
        /// </summary>
        const SyntaxToken& GetRightParenthesisToken() const
        {
            return *m_rightParenthesisToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(*m_leftParenthesisToken));

            auto parameterChildren = m_parameters->GetChildren();
            children.insert(children.end(), parameterChildren.begin(), parameterChildren.end());

            children.push_back(SyntaxNodeChild(*m_rightParenthesisToken));

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
        bool operator ==(const ParameterList& rhs) const
        {
            return *m_leftParenthesisToken == *rhs.m_leftParenthesisToken &&
                *m_parameters == *rhs.m_parameters &&
                *m_rightParenthesisToken == *rhs.m_rightParenthesisToken;
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
        std::shared_ptr<const SyntaxToken> m_leftParenthesisToken;
        std::shared_ptr<const SyntaxList<Parameter>> m_parameters;
        std::shared_ptr<const SyntaxToken> m_rightParenthesisToken;
    };
}
