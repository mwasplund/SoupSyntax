#pragma once
#include "Parameter.h"

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The function parameter list
	/// </summary>
	export class ParameterList final : public SyntaxNode
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		ParameterList(
			std::shared_ptr<const InnerTree::ParameterList> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode),
			m_openParenthesisToken(innerNode->GetOpenParenthesisToken().CreateOuter(this)),
			m_parameters(innerNode->GetParameters().CreateOuter<Parameter>(this)),
			m_closeParenthesisToken(innerNode->GetCloseParenthesisToken().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the left parenthesis token
		/// </summary>
		const SyntaxToken& GetOpenParenthesisToken() const
		{
			return *m_openParenthesisToken;
		}

		/// <summary>
		/// Gets the list of parameters
		/// </summary>
		const SyntaxSeparatorList<Parameter>& GetParameters() const
		{
			return *m_parameters;
		}

		/// <summary>
		/// Gets the right parenthesis token
		/// </summary>
		const SyntaxToken& GetCloseParenthesisToken() const
		{
			return *m_closeParenthesisToken;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_openParenthesisToken));

			auto parameterChildren = m_parameters->GetChildren();
			children.insert(children.end(), parameterChildren.begin(), parameterChildren.end());

			children.push_back(SyntaxNodeChild(m_closeParenthesisToken));

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
		std::shared_ptr<const SyntaxToken> m_openParenthesisToken;
		std::shared_ptr<const SyntaxSeparatorList<Parameter>> m_parameters;
		std::shared_ptr<const SyntaxToken> m_closeParenthesisToken;
	};
}
