#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// A simple identifier referencing a single Identifier
	/// </summary>
	export class SimpleIdentifier final : public UnqualifiedIdentifier
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		SimpleIdentifier(std::shared_ptr<const SyntaxToken> identifierToken) :
			UnqualifiedIdentifier(SyntaxNodeType::SimpleIdentifier),
			m_identifierToken(std::move(identifierToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::SimpleIdentifier> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<SimpleIdentifier>(),
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
		bool operator ==(const SimpleIdentifier& rhs) const
		{
			return *m_identifierToken == *rhs.m_identifierToken;
		}

		bool operator !=(const SimpleIdentifier& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const SimpleIdentifier&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_identifierToken;
	};
}
