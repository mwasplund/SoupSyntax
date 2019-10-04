#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The attribute
	/// </summary>
	export class Attribute final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		Attribute(
			std::shared_ptr<const InnerTree::Attribute> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_identifierToken(innerNode->GetIdentifierToken().CreateOuter(this)),
			m_argumentClause(
				innerNode->HasArgumentClause() ? 
					innerNode->GetArgumentClause().CreateOuter(this) :
					nullptr)
		{
		}

	public:
		/// <summary>
		/// Gets the identifier token
		/// </summary>
		const SyntaxToken& GetIdentifierToken() const
		{
			return *m_identifierToken;
		}

		/// <summary>
		/// Gets a value indicating whether there is an argument clause
		/// </summary>
		bool HasArgumentClause() const
		{
			return m_argumentClause != nullptr;
		}

		/// <summary>
		/// Gets the argument clause
		/// </summary>
		const AttributeArgumentClause& GetArgumentClause() const
		{
			return *m_argumentClause;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_identifierToken));

			if (HasArgumentClause())
			{
				children.push_back(SyntaxNodeChild(m_argumentClause));
			}

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
		std::shared_ptr<const SyntaxToken> m_identifierToken;
		std::shared_ptr<const AttributeArgumentClause> m_argumentClause;
	};
}
