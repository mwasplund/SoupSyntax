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
        std::vector<std::shared_ptr<Node>> m_specifiers;

    public:
        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSpecifierSequence();
        DeclarationSpecifierSequence(std::vector<std::shared_ptr<Node>>&& specifiers);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DeclarationSpecifierSequence& rhs) const;
        bool operator !=(const DeclarationSpecifierSequence& rhs) const;

        /// <summary>
        /// Gets or sets the list of declaration specifiers
        /// </summary>
        const std::vector<std::shared_ptr<Node>>& GetSpecifiers() const;
        std::vector<std::shared_ptr<Node>>& GetSpecifiers();

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
