#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// If statement node
	/// </summary>
	export class IfStatement final : public Statement
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		IfStatement(
			std::shared_ptr<const InnerTree::IfStatement> innerNode,
			const SyntaxNode* parentNode) :
			Statement(innerNode, parentNode),
			m_ifToken(innerNode->GetIfToken().CreateOuter(this)),
			m_openParenthesisToken(innerNode->GetOpenParenthesisToken().CreateOuter(this)),
			m_conditionExpression(innerNode->GetConditionExpression().CreateOuter<Expression>(this)),
			m_closeParenthesisToken(innerNode->GetCloseParenthesisToken().CreateOuter(this)),
			m_statement(innerNode->GetStatement().CreateOuter<Statement>(this)),
			m_elseClause(
				innerNode->HasElseClause() ?
					innerNode->GetElseClause().CreateOuter(this) :
					nullptr)
		{
		}

	public:
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
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children(
			{
				SyntaxNodeChild(m_ifToken),
				SyntaxNodeChild(m_openParenthesisToken),
				SyntaxNodeChild(m_conditionExpression),
				SyntaxNodeChild(m_closeParenthesisToken),
				SyntaxNodeChild(m_statement),
			});

			if (HasElseClause())
			{
				children.push_back(SyntaxNodeChild(m_elseClause));
			}

			return children;
		}

		/// <summary>
		/// Visitor Accept
		/// </summary>
		virtual void Accept(ISyntaxVisitor& visitor) const override final
		{
			visitor.Visit(*this);
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
