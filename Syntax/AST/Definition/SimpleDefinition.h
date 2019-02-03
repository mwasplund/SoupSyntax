#pragma once
#include "Declaration.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The simple definition
    /// </summary>
    export class SimpleDefinition final : public Declaration
    {
    private:
        std::shared_ptr<DeclarationSpecifierSequence> m_declarationSpecifierSequence;
        std::shared_ptr<InitializerDeclaratorList> m_initializerDeclaratorList;

    public:
        SimpleDefinition(
            std::shared_ptr<DeclarationSpecifierSequence>&& declarationSpecifierSequence,
            std::shared_ptr<InitializerDeclaratorList>&& initializerDeclaratorList);

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
        bool operator !=(const SimpleDefinition& rhs) const;

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
