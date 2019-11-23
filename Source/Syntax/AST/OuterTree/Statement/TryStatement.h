#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Try statement node
	/// </summary>
	export class TryStatement final : public Statement
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		TryStatement(
			std::shared_ptr<const InnerTree::TryStatement> innerNode,
			const SyntaxNode* parentNode) :
			Statement(innerNode, parentNode),
			m_tryToken(innerNode->GetTryToken().CreateOuter(this)),
			m_compoundStatement(innerNode->GetCompoundStatement().CreateOuter(this)),
			m_catchClauses(innerNode->GetCatchClauses().CreateOuter<CatchClause>(this))
		{
		}

	public:
		/// <summary>
		/// Gets the SyntaxToken for the try keyword.
		/// </summary>
		const SyntaxToken& GetTryToken() const
		{
			return *m_tryToken;
		}

		/// <summary>
		/// Gets the CompoundStatement for the try block.
		/// </summary>
		const CompoundStatement& GetCompoundStatement() const
		{
			return *m_compoundStatement;
		}

		/// <summary>
		/// Gets the list of catch clauses
		/// </summary>
		const std::shared_ptr<const SyntaxList<CatchClause>>& GetCatchClauses() const
		{
			return m_catchClauses;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_tryToken));
			children.push_back(SyntaxNodeChild(m_compoundStatement));

			auto catchChildren = m_catchClauses->GetChildren();
			children.insert(children.end(), catchChildren.begin(), catchChildren.end());

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
		std::shared_ptr<const SyntaxToken> m_tryToken;
		std::shared_ptr<const CompoundStatement> m_compoundStatement;
		std::shared_ptr<const SyntaxList<CatchClause>> m_catchClauses;
	};
}
