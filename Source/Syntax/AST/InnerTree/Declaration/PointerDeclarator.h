#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The pointer declarator wrapper
	/// TODO: Make declarator a shared declarator type
	/// </summary>
	export class PointerDeclarator final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		PointerDeclarator(
			std::shared_ptr<const PointerOperator> pointerOperator,
			std::shared_ptr<const SyntaxNode> declarator) :
			SyntaxNode(SyntaxNodeType::PointerDeclarator),
			m_pointerOperator(std::move(pointerOperator)),
			m_declarator(std::move(declarator))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::PointerDeclarator> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<PointerDeclarator>(),
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

	public:
		/// <summary>
		/// Gets the pointer operator
		/// </summary>
		const PointerOperator& GetPointerOperator() const
		{
			return *m_pointerOperator;
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
		bool operator ==(const PointerDeclarator& rhs) const
		{
			return *m_pointerOperator == *rhs.m_pointerOperator &&
				*m_declarator == *rhs.m_declarator;
		}

		bool operator !=(const PointerDeclarator& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const PointerDeclarator&>(rhs);
		}

	private:
		std::shared_ptr<const PointerOperator> m_pointerOperator;
		std::shared_ptr<const SyntaxNode> m_declarator;
	};
}
