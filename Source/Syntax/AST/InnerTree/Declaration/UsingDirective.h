#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// Using directive
	/// </summary>
	export class UsingDirective final : public Declaration
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		UsingDirective(
			std::shared_ptr<const SyntaxToken> usingToken,
			std::shared_ptr<const SyntaxToken> namespaceToken,
			std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> nameIdentifierList,
			std::shared_ptr<const SyntaxToken> semicolonToken) :
			Declaration(SyntaxNodeType::UsingDirective),
			m_usingToken(std::move(usingToken)),
			m_namespaceToken(std::move(namespaceToken)),
			m_nameIdentifierList(std::move(nameIdentifierList)),
			m_semicolonToken(std::move(semicolonToken))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::UsingDirective> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<UsingDirective>(),
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
		/// Gets the optional SyntaxToken for the using keyword.
		/// </summary>
		const SyntaxToken& GetUsingToken() const
		{
			return *m_usingToken;
		}

		/// <summary>
		/// Gets the optional SyntaxToken for the namespace keyword.
		/// </summary>
		const SyntaxToken& GetNamespaceToken() const
		{
			return *m_namespaceToken;
		}

		/// <summary>
		/// Gets the list of colon separated name identifiers.
		/// </summary>
		const SyntaxSeparatorList<SyntaxToken>& GetNameIdentifierList() const
		{
			return *m_nameIdentifierList;
		}

		/// <summary>
		/// Gets the SyntaxToken for the semicolon.
		/// </summary>
		const SyntaxToken& GetSemicolonToken() const
		{
			return *m_semicolonToken;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const UsingDirective& rhs) const
		{
			return *m_usingToken == *rhs.m_usingToken &&
				*m_namespaceToken == *rhs.m_namespaceToken &&
				*m_nameIdentifierList == *rhs.m_nameIdentifierList &&
				*m_semicolonToken == *rhs.m_semicolonToken;
		}

		bool operator !=(const UsingDirective& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const UsingDirective&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_usingToken;
		std::shared_ptr<const SyntaxToken> m_namespaceToken;
		std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> m_nameIdentifierList;
		std::shared_ptr<const SyntaxToken> m_semicolonToken;
	};
}
