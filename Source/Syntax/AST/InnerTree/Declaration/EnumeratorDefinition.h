#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The Enumerator Definition
	/// </summary>
	export class EnumeratorDefinition final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		EnumeratorDefinition(
			std::shared_ptr<const SyntaxToken> identifierToken) :
			SyntaxNode(SyntaxNodeType::EnumeratorDefinition),
			m_identifierToken(std::move(identifierToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::EnumeratorDefinition> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<EnumeratorDefinition>(),
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
		/// Gets the identifier token
		/// </summary>
		const SyntaxToken& GetIdentifierToken() const
		{
			return *m_identifierToken;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const EnumeratorDefinition& rhs) const
		{
			return *m_identifierToken == *rhs.m_identifierToken;
		}

		bool operator !=(const EnumeratorDefinition& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const EnumeratorDefinition&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_identifierToken;
	};
}
