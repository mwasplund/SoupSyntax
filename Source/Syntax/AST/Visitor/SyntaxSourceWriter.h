
#pragma once

namespace Soup::Syntax
{
	/// <summary>
	/// Syntax Visitor used to write the raw source text of the tree
	/// </summary>
	export class SyntaxSourceWriter : public SyntaxWalker
	{
	public:
		SyntaxSourceWriter(std::ostream& stream) : 
			m_stream(stream)
		{
		}

	protected:
		virtual void VisitToken(const OuterTree::SyntaxToken& token) override
		{
			token.Write(m_stream);
		}

	private:
		std::ostream& m_stream;
	};
}
