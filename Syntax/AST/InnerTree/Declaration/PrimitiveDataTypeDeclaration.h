
#pragma once

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// Primitive data type
    /// </summary>
    export class PrimitiveDataTypeDeclaration final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        PrimitiveDataTypeDeclaration(
            PrimitiveDataType primitiveType,
            std::shared_ptr<const SyntaxToken> token) :
            SyntaxNode(SyntaxNodeType::PrimitiveDataTypeDeclaration),
            m_primitiveType(primitiveType),
            m_token(std::move(token))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::PrimitiveDataTypeDeclaration> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<PrimitiveDataTypeDeclaration>(),
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
        /// Equality operator
        /// </summary>
        bool operator ==(const PrimitiveDataTypeDeclaration& rhs) const
        {
            return m_primitiveType == rhs.m_primitiveType &&
                *m_token == *rhs.m_token;
        }

        bool operator !=(const PrimitiveDataTypeDeclaration& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const PrimitiveDataTypeDeclaration&>(rhs);
        }

    private:
        PrimitiveDataType m_primitiveType;
        std::shared_ptr<const SyntaxToken> m_token;
    };
}
