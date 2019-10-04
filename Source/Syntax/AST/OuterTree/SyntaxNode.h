
#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// Base syntax node of the outer tree that adds parent references 
	/// and builds up the final text locations
	/// </summary>
	export class SyntaxNode
	{
	protected:
		/// <summary>
		/// Initialize
		/// </summary>
		SyntaxNode(
			std::shared_ptr<const InnerTree::SyntaxNode> innerNode,
			const SyntaxNode* parentNode) :
			m_innerNode(std::move(innerNode)),
			m_parentNode(parentNode)
		{
		}

	public:
		/// <summary>
		/// Get the node type
		/// </summary>
		SyntaxNodeType GetType() const
		{
			return m_innerNode->GetType();
		}

		/// <summary>
		/// Get a value indicating whether the node has a parent
		/// </summary>
		bool HasParent() const
		{
			return m_parentNode != nullptr;
		}

		/// <summary>
		/// Get the parent node
		/// </summary>
		const SyntaxNode& GetParent() const
		{
			if (!HasParent())
				throw std::runtime_error("No parent attached.");
			return *m_parentNode;
		}

		/// <summary>
		/// Get the collection of children nodes and tokens
		/// </summary>
		virtual std::vector<SyntaxNodeChild> GetChildren() const = 0;

		/// <summary>
		/// Visitor Accept
		/// </summary>
		virtual void Accept(ISyntaxVisitor& visitor) const = 0;

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator==(const SyntaxNode& rhs) const
		{
			// TODO: Check size/offset
			return *m_innerNode == *rhs.m_innerNode;
		}

		bool operator!=(const SyntaxNode &rhs) const
		{
			return !(*this == rhs);
		}

	private:
		std::shared_ptr<const InnerTree::SyntaxNode> m_innerNode;
		const SyntaxNode* m_parentNode;
	};
}
