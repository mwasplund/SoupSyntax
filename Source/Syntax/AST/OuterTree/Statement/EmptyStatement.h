#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// An empty statement that consists of a single semicolon
	/// </summary>
	export class EmptyStatement final : public Statement
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		EmptyStatement(
			std::shared_ptr<const InnerTree::EmptyStatement> innerNode,
			const SyntaxNode* parentNode) :
			Statement(innerNode, parentNode),
			m_semicolonToken(innerNode->GetSemicolonToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the SyntaxToken for the semicolon.
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
			std::vector<SyntaxNodeChild> children(
			{
				SyntaxNodeChild(m_semicolonToken),
			});

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
		std::shared_ptr<const SyntaxToken> m_semicolonToken;
	};
}
