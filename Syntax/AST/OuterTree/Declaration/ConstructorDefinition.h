#pragma once
#include "ConstructorInitializer.h"
#include "ParameterList.h"

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The class constructor definition class.
    /// TODO: The constructor inializer can only be present with a regular body.
    /// </summary>
    export class ConstructorDefinition final : public Declaration
    {
        friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

    private:
        ConstructorDefinition(
            std::shared_ptr<const InnerTree::ConstructorDefinition> innerNode,
            const SyntaxNode* parentNode) :
            Declaration(innerNode, parentNode),
            m_identifier(innerNode->GetIdentifier().CreateOuter(this)),
            m_parameterList(innerNode->GetParameterList().CreateOuter(this)),
            m_constructorInitializer(
                innerNode->HasConstructorInitializer() ?
                    innerNode->GetConstructorInitializer().CreateOuter(this) :
                    nullptr),
            m_body(innerNode->GetBody().CreateOuterAny(this))
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

    private:
        std::shared_ptr<const IdentifierExpression> m_identifier;
        std::shared_ptr<const ParameterList> m_parameterList;
        std::shared_ptr<const ConstructorInitializer> m_constructorInitializer;
        std::shared_ptr<const SyntaxNode> m_body;
    };
}
