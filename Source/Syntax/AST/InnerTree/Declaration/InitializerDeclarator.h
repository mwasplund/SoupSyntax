#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The initializer declarator node
	/// </summary>
	export class InitializerDeclarator final : public SyntaxNode
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		InitializerDeclarator(
			std::shared_ptr<const SyntaxNode> declarator,
			std::shared_ptr<const SyntaxNode> initializer) :
			SyntaxNode(SyntaxNodeType::InitializerDeclarator),
			m_declarator(std::move(declarator)),
			m_initializer(std::move(initializer))
		{
		}

	public:
		/// <summary>
		/// Create an outer node with this node and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::InitializerDeclarator> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf<InitializerDeclarator>(),
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
		/// Gets the declarator
		/// </summary>
		const SyntaxNode& GetDeclarator() const
		{
			return *m_declarator;
		}

		/// <summary>
		/// Gets a value indicating whether the optional initialize exists
		/// </summary>
		bool HasInitializer() const
		{
			return m_initializer != nullptr;
		}

		/// <summary>
		/// Gets the optional initializer
		/// </summary>
		const SyntaxNode& GetInitializer() const
		{
			if (!HasInitializer())
				throw std::runtime_error("No Initializer present.");
			return *m_initializer;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const InitializerDeclarator& rhs) const
		{
			if (*m_declarator != *rhs.m_declarator)
			{
				return false;
			}
			else if (!HasInitializer() || !rhs.HasInitializer())
			{
				return !HasInitializer() && !rhs.HasInitializer();
			}
			else
			{
				return *m_initializer == *rhs.m_initializer;
			}
		}

		bool operator !=(const InitializerDeclarator& rhs) const
		{
			return !(*this == rhs);
		}

	protected:
		/// <summary>
		/// SyntaxNode Equals
		/// </summary>
		virtual bool Equals(const SyntaxNode& rhs) const final
		{
			return *this == static_cast<const InitializerDeclarator&>(rhs);
		}

	private:
		std::shared_ptr<const SyntaxNode> m_declarator;
		std::shared_ptr<const SyntaxNode> m_initializer;
	};
}
