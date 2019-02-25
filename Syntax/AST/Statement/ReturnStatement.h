#pragma once
#include "Statement.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Return statement node
    /// </summary>
    export class ReturnStatement final : Statement
    {
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ReturnStatement& rhs) const
        {
            return true;
        }

        bool operator !=(const ReturnStatement& rhs) const
        {
            return false;
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::wstring ToString() const override final
        {
            return L"ReturnStatement";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ReturnStatement&>(rhs);
        }
    };
}
