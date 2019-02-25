
#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Primitive data type
    /// </summary>
    export class PrimitiveDataTypeNode final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        PrimitiveDataTypeNode(PrimitiveDataType type) :
            m_type(type)
        {
        }

        /// <summary>
        /// Gets or sets the type
        /// </summary>
        PrimitiveDataType GetType() const
        {
            return m_type;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const PrimitiveDataTypeNode& rhs) const
        {
            return m_type == rhs.m_type;
        }

        bool operator !=(const PrimitiveDataTypeNode& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::wstring ToString() const override final
        {
            return L"PrimitiveDataTypeNode<" + std::to_wstring(static_cast<int>(m_type)) + L">";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const PrimitiveDataTypeNode&>(rhs);
        }

    private:
        PrimitiveDataType m_type;
    };
}
