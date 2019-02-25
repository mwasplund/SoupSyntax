#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The default function body
    /// </summary>
    export class DefaultFunctionBody final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DefaultFunctionBody& rhs) const
        {
            return true;
        }

        bool operator !=(const DefaultFunctionBody& rhs) const
        {
            return false;
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::wstring ToString() const override final
        {
            return L"DefaultFunctionBody";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DefaultFunctionBody&>(rhs);
        }
    };
}
