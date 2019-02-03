#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The function definition
    /// </summary>
    export class ParameterList final : public Node
    {
    private:
        std::vector<Node> parameters;

    public:
        /// <summary>
        /// Gets or sets the list of parameters
        /// </summary>
        const std::vector<Node>& GetParameters() const;

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
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
