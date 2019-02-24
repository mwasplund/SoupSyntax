#pragma once
#include "Declaration.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The simple definition
    /// </summary>
    export class SimpleDefinition final : public Declaration
    {
    public:
        SimpleDefinition(
            std::shared_ptr<const DeclarationSpecifierSequence>&& declarationSpecifierSequence,
            std::shared_ptr<const InitializerDeclaratorList>&& initializerDeclaratorList) :
            m_declarationSpecifierSequence(std::move(declarationSpecifierSequence)),
            m_initializerDeclaratorList(std::move(initializerDeclaratorList))
        {
        }

        /// <summary>
        /// Gets or sets the specifiers
        /// </summary>
        const DeclarationSpecifierSequence& GetDeclarationSpecifierSequence() const
        {
            return *m_declarationSpecifierSequence;
        }

        /// <summary>
        /// Gets or sets the optional initializer
        /// </summary>
        const InitializerDeclaratorList& GetInitializerDeclaratorList() const
        {
            return *m_initializerDeclaratorList;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SimpleDefinition& rhs) const
        {
            return *m_declarationSpecifierSequence == *rhs.m_declarationSpecifierSequence &&
                *m_initializerDeclaratorList == *rhs.m_initializerDeclaratorList;
        }

        bool operator !=(const SimpleDefinition& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            std::string result = "SimpleDefinition";
            result += "\n" + m_declarationSpecifierSequence->ToString();
            result += "\n" + m_initializerDeclaratorList->ToString();
            return result;
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const SimpleDefinition&>(rhs);
        }

    private:
        std::shared_ptr<const DeclarationSpecifierSequence> m_declarationSpecifierSequence;
        std::shared_ptr<const InitializerDeclaratorList> m_initializerDeclaratorList;
    };
}
