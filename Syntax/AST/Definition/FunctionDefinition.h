#pragma once
#include "Declaration.h"
#include "DeclarationSpecifierSequence.h"
#include "ParameterList.h"
namespace Soup::Syntax
{
    /// <summary>
    /// The function definition
    /// </summary>
    export class FunctionDefinition : public Declaration
    {
    public:
        /// <summary>
        /// Gets or sets the return type
        /// </summary>
        const DeclarationSpecifierSequence& GetReturnType() const;

        /// <summary>
        /// Gets or sets the identifier
        /// </summary>
        const Identifier& GetIdentifier() const;

        /// <summary>
        /// Gets or sets the parameter list
        /// </summary>
        const ParameterList& ParameterList() const;

        /// <summary>
        /// Gets or sets the body
        /// </summary>
        const Node& GetBody() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const FunctionDefinition& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const FunctionDefinition& rhs) const;
    };
}
