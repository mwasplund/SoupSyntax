#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// If statement else clause node
	/// </summary>
	export class ElseClause final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		ElseClause(
			std::shared_ptr<const InnerTree::ElseClause> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_elseToken(innerNode->GetElseToken().CreateOuter(this)),
			m_statement(innerNode->GetStatement().CreateOuter<Statement>(this))
		{
		}

	public:
		/// <summary>
		/// Gets the SyntaxToken for the else keyword.
		/// </summary>
		const SyntaxToken& GetElseToken() const
		{
			return *m_elseToken;
		}

		/// <summary>
		/// Gets the Statement that is executed when the condition evaluates to true.
		/// </summary>
		const Statement& GetStatement() const
		{
			return *m_statement;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			return std::vector<SyntaxNodeChild>(
			{
				SyntaxNodeChild(m_elseToken),
				SyntaxNodeChild(m_statement),
			});
		}

		/// <summary>
		/// Visitor Accept
		/// </summary>
		virtual void Accept(ISyntaxVisitor& visitor) const override final
		{
			visitor.Visit(*this);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_elseToken;
		std::shared_ptr<const Statement> m_statement;
	};
}
