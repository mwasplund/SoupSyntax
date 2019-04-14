#pragma once
#include "MemberInitializer.h"

namespace Soup::Syntax::InnerTree
{
    /// <summary>
    /// The optional constructor initializer
    /// </summary>
    export class ConstructorInitializer final : public SyntaxNode
    {
        friend class ::Soup::Syntax::SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        ConstructorInitializer(
            std::shared_ptr<const SyntaxToken> colonToken,
            std::shared_ptr<const SyntaxSeparatorList<MemberInitializer>> initializers) :
            SyntaxNode(SyntaxNodeType::ConstructorInitializer),
            m_colonToken(std::move(colonToken)),
            m_initializers(std::move(initializers))
        {
        }

    public:
        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        std::shared_ptr<const OuterTree::ConstructorInitializer> CreateOuter(
            const OuterTree::SyntaxNode* parentNode) const
        {
            return OuterTree::SyntaxWrapper::CreateOuter(
                GetSelf<ConstructorInitializer>(),
                parentNode);
        }

        /// <summary>
        /// Create an outer node with this node and the provided parent
        /// </summary>
        virtual std::shared_ptr<const OuterTree::SyntaxNode> CreateOuterAny(
            const OuterTree::SyntaxNode* parentNode) const override final
        {
            return std::static_pointer_cast<const OuterTree::SyntaxNode>(
                CreateOuter(parentNode));
        }

        /// <summary>
        /// Gets the colon token
        /// </summary>
        const SyntaxToken& GetColonToken() const
        {
            return *m_colonToken;
        }

        /// <summary>
        /// Gets the list of initializers
        /// </summary>
        const SyntaxSeparatorList<MemberInitializer>& GetInitializers() const
        {
            return *m_initializers;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const ConstructorInitializer& rhs) const
        {
            return *m_colonToken == *rhs.m_colonToken &&
                *m_initializers == *rhs.m_initializers;
        }

        bool operator !=(const ConstructorInitializer& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ConstructorInitializer&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_colonToken;
        std::shared_ptr<const SyntaxSeparatorList<MemberInitializer>> m_initializers;
    };
}
