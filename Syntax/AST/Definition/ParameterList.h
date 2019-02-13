#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The function definition
    /// </summary>
    export class ParameterList final : public SyntaxNode
    {
    private:
        std::vector<SyntaxNode> parameters;

    public:
        /// <summary>
        /// Gets or sets the list of parameters
        /// </summary>
        const std::vector<SyntaxNode>& GetParameters() const
        {
            return this->parameters;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ParameterList& rhs) const
        {
            return this->parameters == rhs.parameters;
        }

        bool operator !=(const ParameterList& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            return "ParameterList";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ParameterList&>(rhs);
        }
    };
}
