
#pragma once

namespace Soup::Syntax::OuterTree
{
	/// <summary>
	/// The leaf elements of the syntax tree
	/// </summary>
	export class SyntaxToken
	{
		friend class ::Soup::Syntax::OuterTree::SyntaxWrapper;

	// TODO: Friend broken in MSVC modules
	public: // private:
		/// <summary>
		/// Initialize
		/// </summary>
		SyntaxToken(
			std::shared_ptr<const InnerTree::SyntaxToken> innerToken,
			const SyntaxNode* parentNode) :
			m_innerToken(innerToken),
			m_parentNode(parentNode)
		{
		}

	public:
		/// <summary>
		/// Get the text span excluding trivia
		/// </summary>
		TextSpan GetSpan() const
		{
			return TextSpan();
		}

		/// <summary>
		/// Get the token type
		/// </summary>
		SyntaxTokenType GetType() const
		{
			return m_innerToken->GetType();
		}

		/// <summary>
		/// Get the raw token value
		/// </summary>
		const std::string& GetValue() const
		{
			return m_innerToken->GetValue();
		}

		/// <summary>
		/// Get the leading Trivia
		/// </summary>
		const std::vector<SyntaxTrivia>& GetLeadingTrivia() const
		{
			return m_innerToken->GetLeadingTrivia();
		}

		/// <summary>
		/// Get the trailing Trivia
		/// </summary>
		const std::vector<SyntaxTrivia>& GetTrailingTrivia() const
		{
			return m_innerToken->GetTrailingTrivia();
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator==(const SyntaxToken &rhs) const
		{
			// TODO: Compare span
			return *m_innerToken == *rhs.m_innerToken;
		}

		bool operator!=(const SyntaxToken &rhs) const
		{
			return !(*this == rhs);
		}

		/// <summary>
		/// Write the contents of the token to the provided stream
		/// </summary>
		void Write(std::ostream& stream) const
		{
			// Write the leading trivia
			for (auto& trivia : GetLeadingTrivia())
			{
				trivia.Write(stream);
			}

			// Write the raw token value
			stream << GetValue();

			// Write the trailing trivia
			for (auto& trivia : GetTrailingTrivia())
			{
				trivia.Write(stream);
			}
		}

	private:
		std::shared_ptr<const InnerTree::SyntaxToken> m_innerToken;
		const SyntaxNode* m_parentNode;
	};
}
