#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The parameter
	/// </summary>
	export class Parameter final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		Parameter(
			std::shared_ptr<const InnerTree::Parameter> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_declarationSpecifierSequence(innerNode->GetDeclarationSpecifierSequence().CreateOuterAny(this)),
			m_declarator(innerNode->GetDeclarator().CreateOuterAny(this))
		{
		}

	public:
		/// <summary>
		/// Gets the list of declaration specifier sequence
		/// </summary>
		const SyntaxNode& GetDeclarationSpecifierSequence() const
		{
			return *m_declarationSpecifierSequence;
		}

		/// <summary>
		/// Gets the declarator
		/// </summary>
		const SyntaxNode& GetDeclarator() const
		{
			return *m_declarator;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			return std::vector<SyntaxNodeChild>(
			{
				SyntaxNodeChild(m_declarationSpecifierSequence),
				SyntaxNodeChild(m_declarator),
			});
		}

		/// <summary>
		/// Visitor Accept
		/// </summary>
		virtual void Accept(ISyntaxVisitor& visitor) const override final
		{
			visitor.Visit(*this);
		}

	private:
		std::shared_ptr<const SyntaxNode> m_declarationSpecifierSequence;
		std::shared_ptr<const SyntaxNode> m_declarator;
	};
}
