#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The try function body
	/// </summary>
	export class TryFunctionBody final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		TryFunctionBody() :
			SyntaxNode(SyntaxNodeType::TryFunctionBody),
			m_statements(nullptr)
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::TryFunctionBody> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<TryFunctionBody>(),
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
		/// Gets the statements
		/// </summary>
		const CompoundStatement& GetStatements() const
		{
			return *m_statements;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const TryFunctionBody& rhs) const
		{
			return *m_statements == *rhs.m_statements;
		}

		bool operator !=(const TryFunctionBody& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const TryFunctionBody&>(rhs);
		}

	private:
		std::shared_ptr<const CompoundStatement> m_statements;
	};
}
