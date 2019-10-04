#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The delete function body
	/// </summary>
	export class DeleteFunctionBody final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		DeleteFunctionBody(
			std::shared_ptr<const SyntaxToken> equalToken,
			std::shared_ptr<const SyntaxToken> deleteToken,
			std::shared_ptr<const SyntaxToken> semicolonToken) :
			SyntaxNode(SyntaxNodeType::DeleteFunctionBody),
			m_equalToken(std::move(equalToken)),
			m_deleteToken(std::move(deleteToken)),
			m_semicolonToken(std::move(semicolonToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::DeleteFunctionBody> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<DeleteFunctionBody>(),
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
		/// Get the equal token
		/// </summary>
		const SyntaxToken& GetEqualToken() const
		{
			return *m_equalToken;
		}

		/// <summary>
		/// Get the delete token
		/// </summary>
		const SyntaxToken& GetDeleteToken() const
		{
			return *m_deleteToken;
		}

		/// <summary>
		/// Get the semicolon token
		/// </summary>
		const SyntaxToken& GetSemicolonToken() const
		{
			return *m_semicolonToken;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const DeleteFunctionBody& rhs) const
		{
			return *m_equalToken == *rhs.m_equalToken &&
				*m_deleteToken == *rhs.m_deleteToken &&
				*m_semicolonToken == *rhs.m_semicolonToken;
		}

		bool operator !=(const DeleteFunctionBody& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const DeleteFunctionBody&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_equalToken;
		std::shared_ptr<const SyntaxToken> m_deleteToken;
		std::shared_ptr<const SyntaxToken> m_semicolonToken;
	};
}
