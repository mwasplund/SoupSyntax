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
        const std::vector<SyntaxNode>& GetParameters() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ParameterList& rhs) const;
        bool operator !=(const ParameterList& rhs) const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final;
    };
}
