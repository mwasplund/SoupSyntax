#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// Accessor specifier for class declaration
	/// ex. "public:"
	/// </summary>
	export class AccessorSpecifier final : public Declaration
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		AccessorSpecifier(
			std::shared_ptr<const SyntaxToken> accessorToken,
			std::shared_ptr<const SyntaxToken> colonToken) :
			Declaration(SyntaxNodeType::AccessorSpecifier),
			m_accessorToken(std::move(accessorToken)),
			m_colonToken(std::move(colonToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::AccessorSpecifier> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<AccessorSpecifier>(),
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
		/// Gets the optional SyntaxToken for the accessor specifier.
		/// </summary>
		const SyntaxToken& GetAccessorToken() const
		{
			return *m_accessorToken;
		}

		/// <summary>
		/// Gets the SyntaxToken for the colon.
		/// </summary>
		const SyntaxToken& GetColonToken() const
		{
			return *m_colonToken;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const AccessorSpecifier& rhs) const
		{
			return *m_accessorToken == *rhs.m_accessorToken &&
				*m_colonToken == *rhs.m_colonToken;
		}

		bool operator !=(const AccessorSpecifier& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const AccessorSpecifier&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_accessorToken;
		std::shared_ptr<const SyntaxToken> m_colonToken;
	};
}
