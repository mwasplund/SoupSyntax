#pragma once
#include "Declaration.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The simple declaration
    /// </summary>
    export class SimpleDefinition : public Declaration
    {
    private:
        DeclarationSpecifierSequence declarationSpecifierSequence;
        InitializerDeclaratorList initializerDeclaratorList;

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

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
