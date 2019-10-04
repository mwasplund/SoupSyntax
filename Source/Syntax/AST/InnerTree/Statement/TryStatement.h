#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// Try statement node
	/// </summary>
	export class TryStatement final : public Statement
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		TryStatement(
			std::shared_ptr<const SyntaxToken> tryToken,
			std::shared_ptr<const CompoundStatement> compoundStatement,
			std::shared_ptr<const SyntaxList<CatchClause>> catchClauses) :
			Statement(SyntaxNodeType::TryStatement),
			m_tryToken(std::move(tryToken)),
			m_compoundStatement(std::move(compoundStatement)),
			m_catchClauses(std::move(catchClauses))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::TryStatement> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<TryStatement>(),
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
		const SyntaxList<CatchClause>& GetCatchClauses() const
		{
			return *m_catchClauses;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const TryStatement& rhs) const
		{
			return *m_tryToken == *rhs.m_tryToken &&
				*m_compoundStatement == *rhs.m_compoundStatement &&
				*m_catchClauses == *rhs.m_catchClauses;
		}

		bool operator !=(const TryStatement& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const TryStatement&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_tryToken;
		std::shared_ptr<const CompoundStatement> m_compoundStatement;
		std::shared_ptr<const SyntaxList<CatchClause>> m_catchClauses;
	};
}
