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
            std::shared_ptr<const DeclarationSpecifierSequence>&& returnType,
            std::shared_ptr<const NameExpression>&& identifier,
            std::shared_ptr<const ParameterList>&& parameterList,
            std::shared_ptr<const SyntaxNode>&& body) :
            m_returnType(std::move(returnType)),
            m_identifier(std::move(identifier)),
            m_parameterList(std::move(parameterList)),
            m_body(std::move(body))
        {
        }

        /// <summary>
        /// Gets or sets the return type
        /// </summary>
        const DeclarationSpecifierSequence& GetReturnType() const
        {
            return *m_returnType;
        }

        /// <summary>
        /// Gets or sets the identifier
        /// </summary>
        const NameExpression& GetIdentifier() const
        {
            return *m_identifier;
        }

        /// <summary>
        /// Gets or sets the parameter list
        /// </summary>
        const ParameterList& GetParameterList() const
        {
            return *m_parameterList;
        }

        /// <summary>
        /// Gets or sets the body
        /// </summary>
        const SyntaxNode& GetBody() const
        {
            return *m_body;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const FunctionDefinition& rhs) const
        {
            return 
                m_returnType == rhs.m_returnType &&
                m_identifier == rhs.m_identifier &&
                m_parameterList == rhs.m_parameterList &&
                m_body == rhs.m_body;
        }

        bool operator !=(const FunctionDefinition& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::string ToString() const override final
        {
            return "FunctionDefinition";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const FunctionDefinition&>(rhs);
        }

    private:
        std::shared_ptr<const DeclarationSpecifierSequence> m_returnType;
        std::shared_ptr<const NameExpression> m_identifier;
        std::shared_ptr<const ParameterList> m_parameterList;
        std::shared_ptr<const SyntaxNode> m_body;
    };
}
