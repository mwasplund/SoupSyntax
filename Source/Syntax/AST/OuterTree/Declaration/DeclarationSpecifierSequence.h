#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Declaration specifier sequence made up of a sequence of specifiers in any order
	/// "typedef unsigned const long long"
	/// TODO: Possibly break out typedef since if cannot have an initializer list
	/// TODO: Possibly verify const types have an initializer
	/// TODO: Add helpers to check if IsConst etc
	/// </summary>
	export class DeclarationSpecifierSequence final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		DeclarationSpecifierSequence(
			std::shared_ptr<const InnerTree::DeclarationSpecifierSequence> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_leadingModifiers(innerNode->GetLeadingModifiers().CreateOuter<SyntaxToken>(this)),
			m_typeSpecifier(innerNode->GetTypeSpecifier().CreateOuter<TypeSpecifier>(this)),
			m_trailingModifiers(innerNode->GetTrailingModifiers().CreateOuter<SyntaxToken>(this))
		{
		}

	public:
		/// <summary>
		/// Gets the collection of leading modifier specifiers before the type
		/// </summary>
		const SyntaxList<SyntaxToken>& GetLeadingModifiers() const
		{
			return *m_leadingModifiers;
		}

		/// <summary>
		/// Gets the type specifier
		/// </summary>
		const TypeSpecifier& GetTypeSpecifier() const
		{
			return *m_typeSpecifier;
		}

		/// <summary>
		/// Gets the collection of trailing modifier specifiers after the type
		/// </summary>
		const SyntaxList<SyntaxToken>& GetTrailingModifiers() const
		{
			return *m_trailingModifiers;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			auto leadingModifierChildren = m_leadingModifiers->GetChildren();
			children.insert(children.end(), leadingModifierChildren.begin(), leadingModifierChildren.end());

			children.push_back(SyntaxNodeChild(m_typeSpecifier));

			auto trailingModifierChildren = m_trailingModifiers->GetChildren();
			children.insert(children.end(), trailingModifierChildren.begin(), trailingModifierChildren.end());

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
		std::shared_ptr<const SyntaxList<SyntaxToken>> m_leadingModifiers;
		std::shared_ptr<const TypeSpecifier> m_typeSpecifier;
		std::shared_ptr<const SyntaxList<SyntaxToken>> m_trailingModifiers;
	};
}
