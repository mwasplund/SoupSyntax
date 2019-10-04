#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The root translation unit node
	/// </summary>
	export class TranslationUnit : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		TranslationUnit(
			std::shared_ptr<const SyntaxList<Declaration>> declarations,
			std::shared_ptr<const SyntaxToken> endOfFileToken) :
			SyntaxNode(SyntaxNodeType::TranslationUnit),
			m_declarations(std::move(declarations)),
			m_endOfFileToken(std::move(endOfFileToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::TranslationUnit> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<TranslationUnit>(),
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
		/// Gets the option declaration sequence
		/// </summary>
		const SyntaxList<Declaration>& GetDeclarations() const
		{
			return *m_declarations;
		}

		/// <summary>
		/// Gets the option declaration sequence
		/// </summary>
		const SyntaxToken& GetEndOfFileToken() const
		{
			return *m_endOfFileToken;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const TranslationUnit& rhs) const
		{
			return *m_declarations == *rhs.m_declarations &&
				*m_endOfFileToken == *rhs.m_endOfFileToken;
		}

		bool operator !=(const TranslationUnit& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const TranslationUnit&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxList<Declaration>> m_declarations;
		std::shared_ptr<const SyntaxToken> m_endOfFileToken;
	};
}
