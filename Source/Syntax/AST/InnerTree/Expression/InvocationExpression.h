#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// Invocation Expression that represents an invocation of a single
	/// function.
	/// Ex. "DoWork(1, 2)"
	/// </summary>
	export class InvocationExpression : public Expression
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		InvocationExpression(
			std::shared_ptr<const Expression> leftExpression,
			std::shared_ptr<const SyntaxToken> openParenthesisToken, 
			std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> parameters,
			std::shared_ptr<const SyntaxToken> closeParenthesisToken) :
			Expression(SyntaxNodeType::InvocationExpression),
			m_leftExpression(std::move(leftExpression)),
			m_openParenthesisToken(std::move(openParenthesisToken)),
			m_parameters(std::move(parameters)),
			m_closeParenthesisToken(std::move(closeParenthesisToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::InvocationExpression> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<InvocationExpression>(),
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
		/// The left expression
		/// </summary>
		const Expression& GetLeftExpression() const
		{
			return *m_leftExpression;
		}

		/// <summary>
		/// The open parenthesis token
		/// </summary>
		const SyntaxToken& GetOpenParenthesisToken() const
		{
			return *m_openParenthesisToken;
		}

		/// <summary>
		/// Gets the list of parameters
		/// TODO: Can be expression or braced initializer...
		/// </summary>
		const SyntaxSeparatorList<SyntaxNode>& GetParameters() const
		{
			return *m_parameters;
		}

		/// <summary>
		/// The close parenthesis token
		/// </summary>
		const SyntaxToken& GetCloseParenthesisToken() const
		{
			return *m_closeParenthesisToken;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const InvocationExpression& rhs) const
		{
			return *m_leftExpression == *rhs.m_leftExpression &&
				*m_openParenthesisToken == *rhs.m_openParenthesisToken &&
				*m_parameters == *rhs.m_parameters &&
				*m_closeParenthesisToken == *rhs.m_closeParenthesisToken;
		}

		bool operator !=(const InvocationExpression& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const InvocationExpression&>(rhs);
		}

	private:
		std::shared_ptr<const Expression> m_leftExpression;
		std::shared_ptr<const SyntaxToken> m_openParenthesisToken;
		std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> m_parameters;
		std::shared_ptr<const SyntaxToken> m_closeParenthesisToken;
	};
}
