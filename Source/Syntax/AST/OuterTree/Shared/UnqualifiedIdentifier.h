#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The base identifier class for all unqualified identifiers.
	/// </summary>
	export class UnqualifiedIdentifier : public SyntaxNode
	{
	protected:
		UnqualifiedIdentifier(
			std::shared_ptr<const InnerTree::SyntaxNode> innerNode,
			const SyntaxNode* parentNode) :
			SyntaxNode(innerNode, parentNode)
		{
		}
	};
}
