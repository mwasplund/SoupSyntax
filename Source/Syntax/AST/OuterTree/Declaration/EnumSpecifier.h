#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Enum declaration
	/// </summary>
	export class EnumSpecifier final : public TypeSpecifier
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		EnumSpecifier(
			std::shared_ptr<const InnerTree::EnumSpecifier> innerNode,
			const SyntaxNode* parentNode) :
			TypeSpecifier(innerNode, parentNode),
			m_enumToken(innerNode->GetEnumToken().CreateOuter(this)),
			m_classToken(
				innerNode->HasClassToken() ?
					innerNode->GetClassToken().CreateOuter(this) :
					nullptr),
			m_identifierToken(
				innerNode->HasIdentifierToken() ?
					innerNode->GetIdentifierToken().CreateOuter(this) :
					nullptr),
			m_openBraceToken(innerNode->GetOpenBraceToken().CreateOuter(this)),
			m_enumeratorList(innerNode->GetEnumeratorList().CreateOuter<EnumeratorDefinition>(this)),
			m_closeBraceToken(innerNode->GetCloseBraceToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the SyntaxToken for the enum keyword.
		/// </summary>
		const SyntaxToken& GetEnumToken() const
		{
			return *m_enumToken;
		}

		/// <summary>
		/// Gets a value indicating whether the optional SyntaxToken 
		/// for the class/struct keyword is present.
		/// </summary>
		bool HasClassToken() const
		{
			return m_classToken != nullptr;
		}

		/// <summary>
		/// Gets the optional SyntaxToken for the class/struct keyword.
		/// </summary>
		const SyntaxToken& GetClassToken() const
		{
			if (!HasClassToken())
				throw std::runtime_error("No ClassToken present.");
			return *m_classToken;
		}

		/// <summary>
		/// Gets a value indicating whether the optional SyntaxToken 
		/// for the identifier is present.
		/// </summary>
		bool HasIdentifierToken() const
		{
			return m_identifierToken != nullptr;
		}

		/// <summary>
		/// Gets the optional SyntaxToken for the class/struct keyword.
		/// </summary>
		const SyntaxToken& GetIdentifierToken() const
		{
			if (!HasIdentifierToken())
				throw std::runtime_error("No IdentifierToken present.");
			return *m_identifierToken;
		}

		/// <summary>
		/// Gets the SyntaxToken for the left brace.
		/// </summary>
		const SyntaxToken& GetOpenBraceToken() const
		{
			return *m_openBraceToken;
		}

		/// <summary>
		/// Gets the list of enumerators
		/// </summary>
		const SyntaxSeparatorList<EnumeratorDefinition>& GetEnumeratorList() const
		{
			return *m_enumeratorList;
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

			children.push_back(SyntaxNodeChild(m_enumToken));

			if (HasClassToken())
			{
				children.push_back(SyntaxNodeChild(m_classToken));
			}

			if (HasIdentifierToken())
			{
				children.push_back(SyntaxNodeChild(m_identifierToken));
			}

			children.push_back(SyntaxNodeChild(m_openBraceToken));
	
			auto enumeratorListChildren = m_enumeratorList->GetChildren();
			children.insert(children.end(), enumeratorListChildren.begin(), enumeratorListChildren.end());

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
		std::shared_ptr<const SyntaxToken> m_enumToken;
		std::shared_ptr<const SyntaxToken> m_classToken;
		std::shared_ptr<const SyntaxToken> m_identifierToken;
		std::shared_ptr<const SyntaxToken> m_openBraceToken;
		std::shared_ptr<const SyntaxSeparatorList<EnumeratorDefinition>> m_enumeratorList;
		std::shared_ptr<const SyntaxToken> m_closeBraceToken;
	};
}
