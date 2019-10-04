#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The try function body
	/// </summary>
	export class TryFunctionBody final : public SyntaxNode
	{
	public:
		/// <summary>
		/// Initialize
		/// </summary>
		TryFunctionBody(
			std::shared_ptr<const InnerTree::TryFunctionBody> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_statements(innerNode->GetStatements().CreateOuter(this))
		{
		}

		/// <summary>
		/// Gets the statements
		/// </summary>
		const CompoundStatement& GetStatements() const
		{
			return *m_statements;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			return std::vector<SyntaxNodeChild>(
				{
					SyntaxNodeChild(m_statements),
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
		std::shared_ptr<const CompoundStatement> m_statements;
	};
}
