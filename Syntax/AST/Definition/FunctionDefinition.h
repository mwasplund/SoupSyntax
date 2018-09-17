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
        DeclarationSpecifierSequence returnType;
        Identifier identifier;
        ParameterList parameterList;
        std::unique_ptr<Node> body;

    public:
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

        /// <summary>
        /// Inequality operator
        /// </summary>
        bool operator !=(const FunctionDefinition& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
