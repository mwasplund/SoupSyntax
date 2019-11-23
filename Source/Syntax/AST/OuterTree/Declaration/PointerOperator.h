#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The pointer operator
	/// </summary>
	export class PointerOperator final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		PointerOperator(
			std::shared_ptr<const InnerTree::PointerOperator> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_operatorToken(innerNode->GetOperatorToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the operator token
		/// </summary>
		const SyntaxToken& GetOperatorToken() const
		{
			return *m_operatorToken;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			return std::vector<SyntaxNodeChild>(
				{
					SyntaxNodeChild(m_operatorToken),
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
		std::shared_ptr<const SyntaxToken> m_operatorToken;
	};
}
