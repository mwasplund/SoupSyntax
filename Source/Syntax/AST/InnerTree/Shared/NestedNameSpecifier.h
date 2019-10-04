#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The nested name specifier sequence
	/// TODO: All items must be either identifier or template
	/// see if we can subclass the left to force this
	/// </summary>
	export class NestedNameSpecifier final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		NestedNameSpecifier(
			std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> specifierSequence) :
			SyntaxNode(SyntaxNodeType::NestedNameSpecifier),
			m_specifierSequence(std::move(specifierSequence))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::NestedNameSpecifier> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<NestedNameSpecifier>(),
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
		/// Gets the specifier sequence
		/// </summary>
		const SyntaxSeparatorList<SyntaxNode>& GetSpecifierSequence() const
		{
			return *m_specifierSequence;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const NestedNameSpecifier& rhs) const
		{
			return *m_specifierSequence == *rhs.m_specifierSequence;
		}

		bool operator !=(const NestedNameSpecifier& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const NestedNameSpecifier&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> m_specifierSequence;
	};
}
