#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The function definition class.
    /// </summary>
    export class FunctionDefinition final : public Declaration
    {
        friend class SyntaxFactory;

    private:
        FunctionDefinition(
            std::shared_ptr<const SyntaxList<AttributeSpecifier>> attributeSpecifierSequence,
            std::shared_ptr<const DeclarationSpecifier> returnType,
            std::shared_ptr<const IdentifierExpression> identifier,
            std::shared_ptr<const ParameterList> parameterList,
            std::shared_ptr<const SyntaxNode> body) :
            Declaration(SyntaxNodeType::FunctionDefinition),
            m_attributeSpecifierSequence(std::move(attributeSpecifierSequence)),
            m_returnType(std::move(returnType)),
            m_identifier(std::move(identifier)),
            m_parameterList(std::move(parameterList)),
            m_body(std::move(body))
        {
        }

    public:
        /// <summary>
        /// Gets the attribute specifier sequence
        /// </summary>
        const SyntaxList<AttributeSpecifier>& GetAttributeSpecifierSequence() const
        {
            return *m_attributeSpecifierSequence;
        }

        /// <summary>
        /// Gets the return type
        /// </summary>
        const DeclarationSpecifier& GetReturnType() const
        {
            return *m_returnType;
        }

        /// <summary>
        /// Gets the identifier
        /// </summary>
        const IdentifierExpression& GetIdentifier() const
        {
            return *m_identifier;
        }

        /// <summary>
        /// Gets the parameter list
        /// </summary>
        const ParameterList& GetParameterList() const
        {
            return *m_parameterList;
        }

        /// <summary>
        /// Gets the body
        /// </summary>
        const SyntaxNode& GetBody() const
        {
            return *m_body;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            auto attributeSpecifierChildren = m_attributeSpecifierSequence->GetChildren();
            children.insert(children.end(), attributeSpecifierChildren.begin(), attributeSpecifierChildren.end());

            children.push_back(SyntaxNodeChild(m_returnType));
            children.push_back(SyntaxNodeChild(m_identifier));
            children.push_back(SyntaxNodeChild(m_parameterList));
            children.push_back(SyntaxNodeChild(m_body));

            return children;
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const FunctionDefinition& rhs) const
        {
            return *m_attributeSpecifierSequence == *rhs.m_attributeSpecifierSequence &&
                *m_returnType == *rhs.m_returnType &&
                *m_identifier == *rhs.m_identifier &&
                *m_parameterList == *rhs.m_parameterList &&
                *m_body == *rhs.m_body;
        }

        bool operator !=(const FunctionDefinition& rhs) const
        {
            return !(*this == rhs);
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
        std::shared_ptr<const SyntaxList<AttributeSpecifier>> m_attributeSpecifierSequence;
        std::shared_ptr<const DeclarationSpecifier> m_returnType;
        std::shared_ptr<const IdentifierExpression> m_identifier;
        std::shared_ptr<const ParameterList> m_parameterList;
        std::shared_ptr<const SyntaxNode> m_body;
    };
}
