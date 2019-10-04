#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// A literal expression
	/// </summary>
	export class LiteralExpression final : public Expression
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		LiteralExpression(
			LiteralType literalType,
			std::shared_ptr<const SyntaxToken> token) :
			Expression(SyntaxNodeType::LiteralExpression),
			m_literalType(literalType),
			m_token(std::move(token))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::LiteralExpression> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<LiteralExpression>(),
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
		/// Gets the type
		/// </summary>
		LiteralType GetLiteralType() const
		{
			return m_literalType;
		}

		/// <summary>
		/// Gets the token
		/// </summary>
		const SyntaxToken& GetToken() const
		{
			return *m_token;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const LiteralExpression& rhs) const
		{
			return m_literalType == rhs.m_literalType &&
				*m_token == *rhs.m_token;
		}

		bool operator !=(const LiteralExpression& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const LiteralExpression&>(rhs);
		}

	private:
		LiteralType m_literalType;
		std::shared_ptr<const SyntaxToken> m_token;
	};
}
