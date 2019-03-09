
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Primitive data type
    /// </summary>
    export class PrimitiveDataTypeDeclaration final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        PrimitiveDataTypeDeclaration(
            PrimitiveDataType type,
            std::shared_ptr<const SyntaxToken> token) :
            SyntaxNode(SyntaxNodeType::PrimitiveDataTypeDeclaration),
            m_type(type),
            m_token(std::move(token))
        {
        }

    public:
        /// <summary>
        /// Gets the type
        /// </summary>
        PrimitiveDataType GetPrimitiveType() const
        {
            return m_type;
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
                    SyntaxNodeChild(*m_token),
                });
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
        bool operator ==(const PrimitiveDataTypeDeclaration& rhs) const
        {
            return m_type == rhs.m_type &&
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
        PrimitiveDataType m_type;
        std::shared_ptr<const SyntaxToken> m_token;
    };
}
