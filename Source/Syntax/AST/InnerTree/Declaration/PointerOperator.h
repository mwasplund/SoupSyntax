#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The pointer operator that contains the token
    /// TODO: Add the other stuff
    /// </summary>
    export class PointerOperator final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        PointerOperator(std::shared_ptr<const SyntaxToken> operatorToken) :
            SyntaxNode(SyntaxNodeType::PointerOperator),
            m_operatorToken(std::move(operatorToken))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::PointerOperator> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<PointerOperator>(),
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
        /// Gets the operator token
        /// </summary>
        const SyntaxToken& GetOperatorToken() const
        {
            return *m_operatorToken;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const PointerOperator& rhs) const
        {
            return *m_operatorToken == *rhs.m_operatorToken;
        }

        bool operator !=(const PointerOperator& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const PointerOperator&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_operatorToken;
    };
}
