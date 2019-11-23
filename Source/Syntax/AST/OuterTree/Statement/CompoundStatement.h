#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Compound statement node that represents a collection of statments wrapped
	/// by a left and right curly brace. "{ int i = 0; }"
	/// Otherwise known as Block statements
	/// </summary>
	export class CompoundStatement final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		CompoundStatement(
			std::shared_ptr<const InnerTree::CompoundStatement> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_openBraceToken(innerNode->GetOpenBraceToken().CreateOuter(this)),
			m_statements(innerNode->GetStatements().CreateOuter<Statement>(this)),
			m_closeBraceToken(innerNode->GetCloseBraceToken().CreateOuter(this))
		{
		}

	public:
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
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_openBraceToken));

			auto statementChildren = m_statements->GetChildren();
			children.insert(children.end(), statementChildren.begin(), statementChildren.end());

			children.push_back(SyntaxNodeChild(m_closeBraceToken));

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
		std::shared_ptr<const SyntaxToken> m_openBraceToken;
		std::shared_ptr<const SyntaxList<Statement>> m_statements;
		std::shared_ptr<const SyntaxToken> m_closeBraceToken;
	};
}
