#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The lambda expression
	/// </summary>
	export class LambdaExpression final : public Expression
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	private:
		LambdaExpression(
			std::shared_ptr<const InnerTree::LambdaExpression> innerNode,
			const SyntaxNode* parentNode) :
			Expression(innerNode, parentNode),
			m_openBracketToken(innerNode->GetOpenBracketToken().CreateOuter(this)),
			m_captureList(innerNode->GetCaptureList().CreateOuter<LambdaCaptureClause>(this)),
			m_closeBracketToken(innerNode->GetCloseBracketToken().CreateOuter(this)),
			m_parameterList(
				innerNode->HasParameterList() ?
					innerNode->GetParameterList().CreateOuter(this) :
					nullptr),
			m_body(innerNode->GetBody().CreateOuter(this))
		{
		}

	public:
		/// <summary>
		/// Gets the open bracket token
		/// </summary>
		const SyntaxToken& GetOpenBracketToken() const
		{
			return *m_openBracketToken;
		}

		/// <summary>
		/// Gets the optional capture list
		/// </summary>
		const SyntaxSeparatorList<LambdaCaptureClause>& GetCaptureList() const
		{
			return *m_captureList;
		}

		/// <summary>
		/// Gets the close bracket token
		/// </summary>
		const SyntaxToken& GetCloseBracketToken() const
		{
			return *m_closeBracketToken;
		}

		/// <summary>
		/// Gets a value indicating whether there is a parameter list
		/// </summary>
		bool HasParameterList() const
		{
			return m_parameterList != nullptr;
		}

		/// <summary>
		/// Gets the parameter list
		/// </summary>
		const ParameterList& GetParameterList() const
		{
			if (!HasParameterList())
				throw std::runtime_error("No Parameter List.");
			return *m_parameterList;
		}

		/// <summary>
		/// Gets the body
		/// </summary>
		const CompoundStatement& GetBody() const
		{
			return *m_body;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			children.push_back(SyntaxNodeChild(m_openBracketToken));

			auto captureChildren = m_captureList->GetChildren();
			children.insert(children.end(), captureChildren.begin(), captureChildren.end());

			children.push_back(SyntaxNodeChild(m_closeBracketToken));

			if (HasParameterList())
			{
				children.push_back(SyntaxNodeChild(m_parameterList));
			}

			children.push_back(SyntaxNodeChild(m_body));

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
		std::shared_ptr<const SyntaxToken> m_openBracketToken;
		std::shared_ptr<const SyntaxSeparatorList<LambdaCaptureClause>> m_captureList;
		std::shared_ptr<const SyntaxToken> m_closeBracketToken;
		std::shared_ptr<const ParameterList> m_parameterList;
		std::shared_ptr<const CompoundStatement> m_body;
	};
}
