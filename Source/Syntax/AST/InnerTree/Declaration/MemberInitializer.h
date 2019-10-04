#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// A member initializer for initializing member values in a constructor initializer
	/// </summary>
	export class MemberInitializer final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		MemberInitializer(
			std::shared_ptr<const SyntaxToken> identifierToken,
			std::shared_ptr<const InitializerList> initializerList) :
			SyntaxNode(SyntaxNodeType::MemberInitializer),
			m_identifierToken(std::move(identifierToken)),
			m_initializerList(std::move(initializerList))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::MemberInitializer> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<MemberInitializer>(),
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
		/// Gets the initializer token
		/// </summary>
		const SyntaxToken& GetIdentifierToken() const
		{
			return *m_identifierToken;
		}

		/// <summary>
		/// Gets the initializer list
		/// </summary>
		const InitializerList& GetInitializerList() const
		{
			return *m_initializerList;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const MemberInitializer& rhs) const
		{
			return *m_identifierToken == *rhs.m_identifierToken &&
				*m_initializerList == *rhs.m_initializerList;
		}

		bool operator !=(const MemberInitializer& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const MemberInitializer&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxToken> m_identifierToken;
		std::shared_ptr<const InitializerList> m_initializerList;
	};
}
