#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// Compound statement node that represents a collection of statments wrapped
	/// by a left and right curly brace. "{ int i = 0; }"
	/// Otherwise known as Block statements
	/// </summary>
	export class CompoundStatement final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		CompoundStatement(
			std::shared_ptr<const SyntaxToken> openBraceToken,
			std::shared_ptr<const SyntaxList<Statement>> statements,
			std::shared_ptr<const SyntaxToken> closeBraceToken) :
			SyntaxNode(SyntaxNodeType::CompoundStatement),
			m_openBraceToken(std::move(openBraceToken)),
			m_statements(std::move(statements)),
			m_closeBraceToken(std::move(closeBraceToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::CompoundStatement> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<CompoundStatement>(),
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
		/// Gets the SyntaxToken for the left brace.
		/// </summary>
		const SyntaxToken& GetOpenBraceToken() const
		{
			return *m_openBraceToken;
		}

		/// <summary>
		/// Gets the list of statements
		/// </summary>
		const SyntaxList<Statement>& GetStatements() const
		{
			return *m_statements;
		}

		/// <summary>
		/// Gets the SyntaxToken for the right brace.
		/// </summary>
		const SyntaxToken& GetCloseBraceToken() const
		{
			return *m_closeBraceToken;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const CompoundStatement& rhs) const
		{
			return *m_openBraceToken == *rhs.m_openBraceToken &&
				*m_statements == *rhs.m_statements &&
				*m_closeBraceToken == *rhs.m_closeBraceToken;
		}

		bool operator !=(const CompoundStatement& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const CompoundStatement&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_openBraceToken;
		std::shared_ptr<const SyntaxList<Statement>> m_statements;
		std::shared_ptr<const SyntaxToken> m_closeBraceToken;
	};
}
