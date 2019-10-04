#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The parameter
	/// </summary>
	export class Parameter final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		Parameter(
			std::shared_ptr<const SyntaxNode> declarationSpecifierSequence,
			std::shared_ptr<const SyntaxNode> declarator) :
			SyntaxNode(SyntaxNodeType::Parameter),
			m_declarationSpecifierSequence(std::move(declarationSpecifierSequence)),
			m_declarator(std::move(declarator))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::Parameter> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<Parameter>(),
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
		/// Equality operator
		/// </summary>
		bool operator ==(const Parameter& rhs) const
		{
			return *m_declarationSpecifierSequence == *rhs.m_declarationSpecifierSequence &&
				*m_declarator == *rhs.m_declarator;
		}

		bool operator !=(const Parameter& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const Parameter&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxNode> m_declarationSpecifierSequence;
		std::shared_ptr<const SyntaxNode> m_declarator;
	};
}
