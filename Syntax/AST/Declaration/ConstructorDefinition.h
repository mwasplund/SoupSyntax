#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The class constructor definition class.
    /// TODO: The constructor inializer can only be present with a regular body.
    /// </summary>
    export class ConstructorDefinition final : public Declaration
    {
        friend class SyntaxFactory;

    private:
        ConstructorDefinition(
            std::shared_ptr<const IdentifierExpression> identifier,
            std::shared_ptr<const ParameterList> parameterList,
            std::shared_ptr<const ConstructorInitializer> constructorInitializer,
            std::shared_ptr<const SyntaxNode> body) :
            Declaration(SyntaxNodeType::ConstructorDefinition),
            m_identifier(std::move(identifier)),
            m_parameterList(std::move(parameterList)),
            m_constructorInitializer(std::move(constructorInitializer)),
            m_body(std::move(body))
        {
        }

    public:
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
        /// Gets a value indicating whether the optional constructor initializer is present
        /// </summary>
        bool HasConstructorInitializer() const
        {
            return m_constructorInitializer != nullptr;
        }

        /// <summary>
        /// Gets the optional constructor initializer
        /// </summary>
        const ConstructorInitializer& GetConstructorInitializer() const
        {
            if (!HasConstructorInitializer())
                throw std::runtime_error("No ConstructorInitializer present.");
            return *m_constructorInitializer;
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

            children.push_back(SyntaxNodeChild(m_identifier));
            children.push_back(SyntaxNodeChild(m_parameterList));

            if (HasConstructorInitializer())
            {
                children.push_back(SyntaxNodeChild(m_constructorInitializer));
            }

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
        bool operator ==(const ConstructorDefinition& rhs) const
        {
            return *m_identifier == *rhs.m_identifier &&
                *m_parameterList == *rhs.m_parameterList &&
                SyntaxUtils::AreOptionalValuesEqual(m_constructorInitializer, rhs.m_constructorInitializer) &&
                *m_body == *rhs.m_body;
        }

        bool operator !=(const ConstructorDefinition& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ConstructorDefinition&>(rhs);
        }

    private:
        std::shared_ptr<const IdentifierExpression> m_identifier;
        std::shared_ptr<const ParameterList> m_parameterList;
        std::shared_ptr<const ConstructorInitializer> m_constructorInitializer;
        std::shared_ptr<const SyntaxNode> m_body;
    };
}
