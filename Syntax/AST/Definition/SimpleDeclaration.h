#pragma once
#include "Declaration.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The simple declaration
    /// </summary>
    export class SimpleDefinition : public Declaration
    {
    public:
        /// <summary>
        /// Gets or sets the specifiers
        /// </summary>
        const DeclarationSpecifierSequence& GetDeclarationSpecifierSequence() const;

        /// <summary>
        /// Gets or sets the optional initializer
        /// </summary>
        const InitializerDeclaratorList& GetInitializerDeclaratorList() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SimpleDefinition& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const SimpleDefinition& rhs) const;
    };
}
