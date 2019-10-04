
#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// Primitive data type
	/// </summary>
	export class PrimitiveDataTypeSpecifier final : public TypeSpecifier
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		PrimitiveDataTypeSpecifier(
			PrimitiveDataType primitiveType,
			std::shared_ptr<const SyntaxToken> token) :
			TypeSpecifier(SyntaxNodeType::PrimitiveDataTypeSpecifier),
			m_primitiveType(primitiveType),
			m_token(std::move(token))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::PrimitiveDataTypeSpecifier> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<PrimitiveDataTypeSpecifier>(),
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
		/// Gets the type
		/// </summary>
		PrimitiveDataType GetPrimitiveType() const
		{
			return m_primitiveType;
		}

		/// <summary>
		/// Gets the token
		/// </summary>
		const SyntaxToken& GetToken() const
		{
			return *m_token;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const PrimitiveDataTypeSpecifier& rhs) const
		{
			return m_primitiveType == rhs.m_primitiveType &&
				*m_token == *rhs.m_token;
		}

		bool operator !=(const PrimitiveDataTypeSpecifier& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const PrimitiveDataTypeSpecifier&>(rhs);
		}

	private:
		PrimitiveDataType m_primitiveType;
		std::shared_ptr<const SyntaxToken> m_token;
	};
}
