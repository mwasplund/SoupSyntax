#pragma once
#include "MemberInitializer.h"

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The optional constructor initializer
	/// </summary>
	export class ConstructorInitializer final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		ConstructorInitializer(
			std::shared_ptr<const InnerTree::ConstructorInitializer> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_colonToken(innerNode->GetColonToken().CreateOuter(this)),
			m_initializers(innerNode->GetInitializers().CreateOuter<MemberInitializer>(this))
		{
		}

	public:
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
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_colonToken));

			auto initializerChildren = m_initializers->GetChildren();
			children.insert(children.end(), initializerChildren.begin(), initializerChildren.end());

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
		std::shared_ptr<const SyntaxToken> m_colonToken;
		std::shared_ptr<const SyntaxSeparatorList<MemberInitializer>> m_initializers;
	};
}
