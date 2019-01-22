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
        std::vector<std::shared_ptr<Declaration>> m_declarations;

    public:
        /// <summary>
        /// Initialize
        /// </summary>
        DeclarationSequence();
        DeclarationSequence(std::vector<std::shared_ptr<Declaration>>&& declarations);
        DeclarationSequence(DeclarationSequence&& other);

        /// <summary>
        /// Assign
        /// </summary>
        DeclarationSequence& operator =(DeclarationSequence&& rhs);

        /// <summary>
        /// Disable copy
        /// </summary>
        DeclarationSequence(const DeclarationSequence&) = delete;
        DeclarationSequence& operator =(const DeclarationSequence& rhs) = delete;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const DeclarationSequence& rhs) const;
        bool operator !=(const DeclarationSequence& rhs) const;

        /// <summary>
        /// Gets or sets the list of declarations
        /// </summary>
        const std::vector<std::shared_ptr<Declaration>>& GetDeclarations() const;
        std::vector<std::shared_ptr<Declaration>>& GetDeclarations();

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
