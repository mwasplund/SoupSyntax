#pragma once
#include "Node.h"
#include "Declaration.h"
#include "DeclarationSpecifierSequence.h"
#include "ParameterList.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The function definition
    /// </summary>
    export class FunctionDefinition : public Declaration
    {
    private:
        std::shared_ptr<DeclarationSpecifierSequence> m_returnType;
        std::shared_ptr<Identifier> m_identifier;
        std::shared_ptr<ParameterList> m_parameterList;
        std::shared_ptr<Node> m_body;

    public:
        FunctionDefinition(
            std::shared_ptr<DeclarationSpecifierSequence>&& returnType,
            std::shared_ptr<Identifier>&& identifier,
            std::shared_ptr<ParameterList>&& parameterList,
            std::shared_ptr<Node>&& body);

        /// <summary>
        /// Gets or sets the return type
        /// </summary>
        const DeclarationSpecifierSequence& GetReturnType() const;

        /// <summary>
        /// Gets or sets the identifier
        /// </summary>
        const Identifier& GetIdentifier() const;

        /// <summary>
        /// Gets or sets the parameter list
        /// </summary>
        const ParameterList& GetParameterList() const;

        /// <summary>
        /// Gets or sets the body
        /// </summary>
        const Node& GetBody() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const FunctionDefinition& rhs) const;
        bool operator !=(const FunctionDefinition& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
