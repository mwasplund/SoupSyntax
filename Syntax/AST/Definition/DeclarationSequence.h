﻿#pragma once
#include "SyntaxNode.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Declaration sequence
    /// </summary>
    export class DeclarationSequence final : public SyntaxNode
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

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    private:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final;
    };
}
