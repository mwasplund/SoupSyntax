#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The initializer declarator node
    /// </summary>
    export class InitializerDeclarator final : public SyntaxNode
    {
    public:
        InitializerDeclarator(
            std::shared_ptr<const SyntaxNode>&& declarator,
            std::shared_ptr<const SyntaxNode>&& initializer) :
            SyntaxNode(SyntaxNodeType::InitializerDeclarator),
            m_declarator(std::move(declarator)),
            m_initializer(std::move(initializer))
        {
        }

        /// <summary>
        /// Gets or sets the declarator
        /// </summary>
        const SyntaxNode& GetDeclarator() const
        {
            return *m_declarator;
        }

        /// <summary>
        /// Gets or sets the optional initializer
        /// </summary>
        const SyntaxNode& GetInitializer() const
        {
            return *m_initializer;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(*m_declarator));

            if (m_initializer != nullptr)
            {
                children.push_back(SyntaxNodeChild(*m_initializer));
            }

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
        bool operator ==(const InitializerDeclarator& rhs) const
        {
            if (*m_declarator != *rhs.m_declarator)
            {
                return false;
            }
            else if (m_initializer == nullptr || rhs.m_initializer == nullptr)
            {
                return m_initializer == nullptr && rhs.m_initializer == nullptr;
            }
            else
            {
                return *m_initializer == *rhs.m_initializer;
            }
        }

        bool operator !=(const InitializerDeclarator& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const InitializerDeclarator&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxNode> m_declarator;
        std::shared_ptr<const SyntaxNode> m_initializer;
    };
}
