#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The root translation unit node
    /// </summary>
    export class TranslationUnit : public Node
    {
    private:
        DeclarationSequence declarations;

    public:
        /// <summary>
        /// Gets or sets the option declaration sequence
        /// </summary>
        const DeclarationSequence& GetDeclarations() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const TranslationUnit& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const TranslationUnit& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
