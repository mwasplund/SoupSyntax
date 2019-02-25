#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The delete function body
    /// </summary>
    export class DeleteFunctionBody final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DeleteFunctionBody& rhs) const
        {
            return true;
        }

        bool operator !=(const DeleteFunctionBody& rhs) const
        {
            return false;
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::wstring ToString() const override final
        {
            return L"DeleteFunctionBody";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DeleteFunctionBody&>(rhs);
        }
    };
}
