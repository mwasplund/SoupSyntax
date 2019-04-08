﻿#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The member declarator node
    /// </summary>
    export class MemberDeclarator final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        MemberDeclarator(
            std::shared_ptr<const SyntaxNode> declarator,
            std::shared_ptr<const SyntaxNode> initializer) :
            SyntaxNode(SyntaxNodeType::InitializerDeclarator),
            m_declarator(std::move(declarator)),
            m_initializer(std::move(initializer))
        {
        }

    public:
        /// <summary>
        /// Gets the declarator
        /// </summary>
        const SyntaxNode& GetDeclarator() const
        {
            return *m_declarator;
        }

        /// <summary>
        /// Gets a value indicating whether the optional initialize exists
        /// </summary>
        bool HasInitializer() const
        {
            return m_initializer != nullptr;
        }

        /// <summary>
        /// Gets the optional initializer
        /// </summary>
        const SyntaxNode& GetInitializer() const
        {
            if (!HasInitializer())
                throw std::runtime_error("No Initializer present.");
            return *m_initializer;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_declarator));

            if (HasInitializer())
            {
                children.push_back(SyntaxNodeChild(m_initializer));
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
        bool operator ==(const MemberDeclarator& rhs) const
        {
            if (*m_declarator != *rhs.m_declarator)
            {
                return false;
            }
            else if (!HasInitializer() || !rhs.HasInitializer())
            {
                return !HasInitializer() && !rhs.HasInitializer();
            }
            else
            {
                return *m_initializer == *rhs.m_initializer;
            }
        }

        bool operator !=(const MemberDeclarator& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const MemberDeclarator&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxNode> m_declarator;
        std::shared_ptr<const SyntaxNode> m_initializer;
    };
}