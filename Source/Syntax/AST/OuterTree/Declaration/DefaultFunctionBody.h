#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The explicit default function body
	/// </summary>
	export class DefaultFunctionBody final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		DefaultFunctionBody(
			std::shared_ptr<const InnerTree::DefaultFunctionBody> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_equalToken(innerNode->GetEqualToken().CreateOuter(this)),
			m_defaultToken(innerNode->GetDefaultToken().CreateOuter(this)),
			m_semicolonToken(innerNode->GetSemicolonToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Get the equal token
		/// </summary>
		const SyntaxToken& GetEqualToken() const
		{
			return *m_equalToken;
		}

		/// <summary>
		/// Get the default token
		/// </summary>
		const SyntaxToken& GetDefaultToken() const
		{
			return *m_defaultToken;
		}

		/// <summary>
		/// Get the semicolon token
		/// </summary>
		const SyntaxToken& GetSemicolonToken() const
		{
			return *m_semicolonToken;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			return std::vector<SyntaxNodeChild>(
				{
					SyntaxNodeChild(m_equalToken),
					SyntaxNodeChild(m_defaultToken),
					SyntaxNodeChild(m_semicolonToken),
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
		std::shared_ptr<const SyntaxToken> m_equalToken;
		std::shared_ptr<const SyntaxToken> m_defaultToken;
		std::shared_ptr<const SyntaxToken> m_semicolonToken;
	};
}
