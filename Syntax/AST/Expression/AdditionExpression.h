#pragma once
#include "ArithmeticExpression.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Addition
    /// </summary>
    export class AdditionExpression final : public ArithmeticExpression
    {
    public:
        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const AdditionExpression& rhs) const;
        bool operator !=(const AdditionExpression& rhs) const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
