#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The lambda capture clause
	/// </summary>
	export class LambdaCaptureClause final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		LambdaCaptureClause(
			std::shared_ptr<const InnerTree::LambdaCaptureClause> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_ampersandToken(
				innerNode->HasAmpersandToken() ?
					innerNode->GetAmpersandToken().CreateOuter(this) :
					nullptr),
			m_identifierToken(innerNode->GetIdentifierToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets a value indiciating whether there is an optional ampersand token
		/// </summary>
		bool HasAmpersandToken() const
		{
			return m_ampersandToken != nullptr;
		}

		/// <summary>
		/// Gets the optional ampersand token
		/// </summary>
		const SyntaxToken& GetAmpersandToken() const
		{
			return *m_ampersandToken;
		}

		/// <summary>
		/// Gets the optional identifier token
		/// </summary>
		const SyntaxToken& GetIdentifierToken() const
		{
			return *m_identifierToken;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			if (HasAmpersandToken())
			{
				children.push_back(SyntaxNodeChild(m_ampersandToken));
			}

			children.push_back(SyntaxNodeChild(m_identifierToken));

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
		std::shared_ptr<const SyntaxToken> m_ampersandToken;
		std::shared_ptr<const SyntaxToken> m_identifierToken;
	};
}
