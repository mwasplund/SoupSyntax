#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The function definition class.
	/// </summary>
	export class FunctionDefinition final : public Declaration
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		FunctionDefinition(
			std::shared_ptr<const InnerTree::FunctionDefinition> innerNode,
			const SyntaxNode* parentNode) :
			Declaration(innerNode, parentNode),
			m_attributeSpecifierSequence(innerNode->GetAttributeSpecifierSequence().CreateOuter<AttributeSpecifier>(this)),
			m_returnType(innerNode->GetReturnType().CreateOuter(this)),
			m_identifier(innerNode->GetIdentifier().CreateOuter(this)),
			m_parameterList(innerNode->GetParameterList().CreateOuter(this)),
			m_body(innerNode->GetBody().CreateOuterAny(this))
		{
		}

	public:
		/// <summary>
		/// Gets the attribute specifier sequence
		/// </summary>
		const SyntaxList<AttributeSpecifier>& GetAttributeSpecifierSequence() const
		{
			return *m_attributeSpecifierSequence;
		}

		/// <summary>
		/// Gets the return type
		/// </summary>
		const DeclarationSpecifierSequence& GetReturnType() const
		{
			return *m_returnType;
		}

		/// <summary>
		/// Gets the identifier
		/// </summary>
		const IdentifierExpression& GetIdentifier() const
		{
			return *m_identifier;
		}

		/// <summary>
		/// Gets the parameter list
		/// </summary>
		const ParameterList& GetParameterList() const
		{
			return *m_parameterList;
		}

		/// <summary>
		/// Gets the body
		/// </summary>
		const SyntaxNode& GetBody() const
		{
			return *m_body;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const override final
		{
			std::vector<SyntaxNodeChild> children;

			auto attributeSpecifierChildren = m_attributeSpecifierSequence->GetChildren();
			children.insert(children.end(), attributeSpecifierChildren.begin(), attributeSpecifierChildren.end());

			children.push_back(SyntaxNodeChild(m_returnType));
			children.push_back(SyntaxNodeChild(m_identifier));
			children.push_back(SyntaxNodeChild(m_parameterList));
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
		std::shared_ptr<const SyntaxList<AttributeSpecifier>> m_attributeSpecifierSequence;
		std::shared_ptr<const DeclarationSpecifierSequence> m_returnType;
		std::shared_ptr<const IdentifierExpression> m_identifier;
		std::shared_ptr<const ParameterList> m_parameterList;
		std::shared_ptr<const SyntaxNode> m_body;
	};
}
