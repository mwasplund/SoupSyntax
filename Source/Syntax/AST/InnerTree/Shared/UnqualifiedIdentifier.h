#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The base identifier class for all unqualified identifiers.
	/// </summary>
	export class UnqualifiedIdentifier : public SyntaxNode
	{
	protected:
		UnqualifiedIdentifier(SyntaxNodeType type) :
			SyntaxNode(type)
		{
		}
	};
}
