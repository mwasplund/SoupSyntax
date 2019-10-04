#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// If statement node
	/// </summary>
	export class IfStatement final : public Statement
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		IfStatement(
			std::shared_ptr<const SyntaxToken> ifToken,
			std::shared_ptr<const SyntaxToken> openParenthesisToken,
			std::shared_ptr<const Expression> conditionExpression,
			std::shared_ptr<const SyntaxToken> closeParenthesisToken,
			std::shared_ptr<const Statement> statement,
			std::shared_ptr<const ElseClause> elseClause) :
			Statement(SyntaxNodeType::IfStatement),
			m_ifToken(std::move(ifToken)),
			m_openParenthesisToken(std::move(openParenthesisToken)),
			m_conditionExpression(std::move(conditionExpression)),
			m_closeParenthesisToken(std::move(closeParenthesisToken)),
			m_statement(std::move(statement)),
			m_elseClause(std::move(elseClause))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::IfStatement> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<IfStatement>(),
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
		/// Gets the SyntaxToken for the if keyword.
		/// </summary>
		const SyntaxToken& GetIfToken() const
		{
			return *m_ifToken;
		}

		/// <summary>
		/// Gets the SyntaxToken for the left parenthesis of the condition.
		/// </summary>
		const SyntaxToken& GetOpenParenthesisToken() const
		{
			return *m_openParenthesisToken;
		}

		/// <summary>
		/// Gets the root expression for the condition.
		/// </summary>
		const Expression& GetConditionExpression() const
		{
			return *m_conditionExpression;
		}

		/// <summary>
		/// Gets the SyntaxToken for the right parenthesis of the condition.
		/// </summary>
		const SyntaxToken& GetCloseParenthesisToken() const
		{
			return *m_closeParenthesisToken;
		}

		/// <summary>
		/// Gets the Statement that is executed when the condition evaluates to true.
		/// </summary>
		const Statement& GetStatement() const
		{
			return *m_statement;
		}

		/// <summary>
		/// Gets the optional else clause of the if statment that is executed when the 
		/// condition evaluates to false.
		/// </summary>
		const ElseClause& GetElseClause() const
		{
			if (!HasElseClause())
				throw std::runtime_error("No ElseClause present.");
			return *m_elseClause;
		}

		/// <summary>
		/// Gets a value indicating whether there is an optional else clause.
		/// </summary>
		bool HasElseClause() const
		{
			return m_elseClause != nullptr;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const IfStatement& rhs) const
		{
			return *m_ifToken == *rhs.m_ifToken &&
				*m_openParenthesisToken  == *rhs.m_openParenthesisToken &&
				*m_conditionExpression  == *rhs.m_conditionExpression &&
				*m_closeParenthesisToken  == *rhs.m_closeParenthesisToken &&
				*m_statement  == *rhs.m_statement &&
				SyntaxUtils::AreOptionalValuesEqual(m_elseClause, rhs.m_elseClause);
		}

		bool operator !=(const IfStatement& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const IfStatement&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_ifToken;
		std::shared_ptr<const SyntaxToken> m_openParenthesisToken;
		std::shared_ptr<const Expression> m_conditionExpression;
		std::shared_ptr<const SyntaxToken> m_closeParenthesisToken;
		std::shared_ptr<const Statement> m_statement;
		std::shared_ptr<const ElseClause> m_elseClause;
	};
}
