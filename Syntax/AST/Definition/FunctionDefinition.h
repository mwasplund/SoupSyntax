#pragma once
#include "Declaration.h"
#include "DeclarationSpecifierSequence.h"
#include "ParameterList.h"
#include "SimpleNameExpression.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The function definition
    /// </summary>
    export class FunctionDefinition final : public Declaration
    {
    public:
        FunctionDefinition(
            std::shared_ptr<DeclarationSpecifierSequence>&& returnType,
            std::shared_ptr<NameExpression>&& identifier,
            std::shared_ptr<ParameterList>&& parameterList,
            std::shared_ptr<SyntaxNode>&& body);

        /// <summary>
        /// Gets or sets the return type
        /// </summary>
        const DeclarationSpecifierSequence& GetReturnType() const;

        /// <summary>
        /// Gets or sets the identifier
        /// </summary>
        const NameExpression& GetIdentifier() const;

        /// <summary>
        /// Gets or sets the parameter list
        /// </summary>
        const ParameterList& GetParameterList() const;

        /// <summary>
        /// Gets or sets the body
        /// </summary>
        const SyntaxNode& GetBody() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const FunctionDefinition& rhs) const;
        bool operator !=(const FunctionDefinition& rhs) const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final;

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final;

    private:
        std::shared_ptr<DeclarationSpecifierSequence> m_returnType;
        std::shared_ptr<NameExpression> m_identifier;
        std::shared_ptr<ParameterList> m_parameterList;
        std::shared_ptr<SyntaxNode> m_body;

    };
}
