#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The lambda capture clause
	/// </summary>
	export class LambdaCaptureClause final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		LambdaCaptureClause(
			std::shared_ptr<const SyntaxToken> ampersandToken,
			std::shared_ptr<const SyntaxToken> identifierToken) :
			SyntaxNode(SyntaxNodeType::LambdaCaptureClause),
			m_ampersandToken(std::move(ampersandToken)),
			m_identifierToken(std::move(identifierToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::LambdaCaptureClause> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<LambdaCaptureClause>(),
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
		/// Gets a value indiciating whether there is an optional ampersand token
		/// </summary>
		bool HasAmpersandToken() const
		{
			return m_ampersandToken != nullptr;
		}

		/// <summary>
		/// Gets the optional ampersand token
		/// </summary>
		const SyntaxToken& GetAmpersandToken() const
		{
			return *m_ampersandToken;
		}

		/// <summary>
		/// Gets the optional identifier token
		/// </summary>
		const SyntaxToken& GetIdentifierToken() const
		{
			return *m_identifierToken;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const LambdaCaptureClause& rhs) const
		{
			return SyntaxUtils::AreOptionalValuesEqual(m_ampersandToken, rhs.m_ampersandToken) &&
				*m_identifierToken == *rhs.m_identifierToken;
		}

		bool operator !=(const LambdaCaptureClause& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const LambdaCaptureClause&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_ampersandToken;
		std::shared_ptr<const SyntaxToken> m_identifierToken;
	};
}
