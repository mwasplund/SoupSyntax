#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Declaration sequence
    /// </summary>
    export class DeclarationSequence : public Node
    {
    private:
        std::vector<Declaration> declarations;

    public:
        /// <summary>
        /// Gets or sets the list of declarations
        /// </summary>
        const std::vector<Declaration>& GetDeclarations() const;

        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSequence();

        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSequence(std::vector<Declaration>&& declarations);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DeclarationSequence& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const DeclarationSequence& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
