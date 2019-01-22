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
        std::shared_ptr<DeclarationSequence> m_declarations;

    public:
        TranslationUnit(std::shared_ptr<DeclarationSequence>&& declarations);

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const TranslationUnit& rhs) const;
        bool operator !=(const TranslationUnit& rhs) const;

        /// <summary>
        /// Gets or sets the option declaration sequence
        /// </summary>
        const DeclarationSequence& GetDeclarations() const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
