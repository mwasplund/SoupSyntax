#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Declaration specifier sequence
    /// </summary>
    export class DeclarationSpecifierSequence : public Node
    {
    private:
        std::vector<Node> specifiers;

    public:
        /// <summary>
        /// Gets or sets the list of declaration specifiers
        /// </summary>
        const std::vector<Node>& GetSpecifiers() const;

        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSpecifierSequence();

        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSpecifierSequence(std::vector<Node>&& specifiers);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DeclarationSpecifierSequence& rhs) const;

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const DeclarationSpecifierSequence& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
