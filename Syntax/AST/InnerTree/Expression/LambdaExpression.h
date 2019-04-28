#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The lambda expression
    /// </summary>
    export class LambdaExpression final : public Expression
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        LambdaExpression(
            std::shared_ptr<const SyntaxToken> openBracketToken,
            std::shared_ptr<const SyntaxToken> closeBracketToken,
            std::shared_ptr<const ParameterList> parameterList,
            std::shared_ptr<const CompoundStatement> body) :
            Expression(SyntaxNodeType::LambdaExpression),
            m_openBracketToken(std::move(openBracketToken)),
            m_closeBracketToken(std::move(closeBracketToken)),
            m_parameterList(std::move(parameterList)),
            m_body(std::move(body))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::LambdaExpression> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<LambdaExpression>(),
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
        /// Gets the open bracket token
        /// </summary>
        const SyntaxToken& GetOpenBracketToken() const
        {
            return *m_openBracketToken;
        }

        /// <summary>
        /// Gets the close bracket token
        /// </summary>
        const SyntaxToken& GetCloseBracketToken() const
        {
            return *m_closeBracketToken;
        }

        /// <summary>
        /// Gets a value indicating whether there is a parameter list
        /// </summary>
        bool HasParameterList() const
        {
            return m_parameterList != nullptr;
        }

        /// <summary>
        /// Gets the optional parameter list
        /// </summary>
        const ParameterList& GetParameterList() const
        {
            if (!HasParameterList())
                throw std::runtime_error("No Parameter List.");
            return *m_parameterList;
        }

        /// <summary>
        /// Gets the body
        /// </summary>
        const CompoundStatement& GetBody() const
        {
            return *m_body;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const LambdaExpression& rhs) const
        {
            return *m_openBracketToken == *rhs.m_openBracketToken &&
                *m_closeBracketToken == *rhs.m_closeBracketToken &&
                SyntaxUtils::AreOptionalValuesEqual(m_parameterList, rhs.m_parameterList) &&
                *m_body == *rhs.m_body;
        }

        bool operator !=(const LambdaExpression& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const LambdaExpression&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_openBracketToken;
        std::shared_ptr<const SyntaxToken> m_closeBracketToken;
        std::shared_ptr<const ParameterList> m_parameterList;
        std::shared_ptr<const CompoundStatement> m_body;
    };
}
