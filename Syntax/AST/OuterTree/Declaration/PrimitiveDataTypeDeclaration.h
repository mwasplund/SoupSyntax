
#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// Primitive data type
    /// </summary>
    export class PrimitiveDataTypeDeclaration final : public SyntaxNode
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        PrimitiveDataTypeDeclaration(
            std::shared_ptr<const InnerTree::PrimitiveDataTypeDeclaration> innerNode,
            const SyntaxNode* parentNode) :
            SyntaxNode(innerNode, parentNode),
            m_primitiveType(innerNode->GetPrimitiveType()),
            m_token(innerNode->GetToken().CreateOuter(this))
        {
        }

    public:
        /// <summary>
        /// Gets the type
        /// </summary>
        PrimitiveDataType GetPrimitiveType() const
        {
            return m_primitiveType;
        }

        /// <summary>
        /// Gets the token
        /// </summary>
        const SyntaxToken& GetToken() const
        {
            return *m_token;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(m_token),
                });
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
        }

    private:
        PrimitiveDataType m_primitiveType;
        std::shared_ptr<const SyntaxToken> m_token;
    };
}
