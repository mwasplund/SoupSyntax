
#pragma once

namespace Soup::Syntax::InnerTree
{
	/// <summary>
	/// The leaf elements of the syntax tree
	/// </summary>
	export class SyntaxToken
	{
		friend class ::Soup::Syntax::SyntaxFactory;

	private:
		/// <summary>
		/// Initialize
		/// </summary>
		SyntaxToken(
			SyntaxTokenType type,
			std::string value,
			std::vector<SyntaxTrivia> leadingTrivia,
			std::vector<SyntaxTrivia> trailingTrivia) :
			m_type(type),
			m_value(std::move(value)),
			m_leadingTrivia(std::move(leadingTrivia)),
			m_trailingTrivia(std::move(trailingTrivia))
		{
		}

	public:
		/// <summary>
		/// Create an outer token with this token and the provided parent
		/// </summary>
		std::shared_ptr<const OuterTree::SyntaxToken> CreateOuter(
			const OuterTree::SyntaxNode* parentNode) const
		{
			return OuterTree::SyntaxWrapper::CreateOuter(
				GetSelf(),
				parentNode);
		}

		/// <summary>
		/// Get the token type
		/// </summary>
		SyntaxTokenType GetType() const
		{
			return m_type;
		}

		/// <summary>
		/// Get the raw token value
		/// </summary>
		const std::string& GetValue() const
		{
			return m_value;
		}

		/// <summary>
		/// Get the leading Trivia
		/// </summary>
		const std::vector<SyntaxTrivia>& GetLeadingTrivia() const
		{
			return m_leadingTrivia;
		}

		/// <summary>
		/// Get the trailing Trivia
		/// </summary>
		const std::vector<SyntaxTrivia>& GetTrailingTrivia() const
		{
			return m_trailingTrivia;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator==(const SyntaxToken &rhs) const
		{
			return m_type == rhs.m_type &&
				m_value == rhs.m_value &&
				m_leadingTrivia == rhs.m_leadingTrivia &&
				m_trailingTrivia == rhs.m_trailingTrivia;
		}

		bool operator!=(const SyntaxToken &rhs) const
		{
			return !(*this == rhs);
		}

	private:
		/// <summary>
		/// Get the shared pointer to myself
		/// </summary>
		std::shared_ptr<const SyntaxToken> GetSelf() const
		{
			auto sharedSelf = m_self.lock();
			if (sharedSelf == nullptr)
				throw std::runtime_error("Failed to get self pointer for token.");

			return sharedSelf;
		}

		/// <summary>
		/// Set the weak reference to myself
		/// </summary>
		void SetSelf(const std::shared_ptr<const SyntaxToken>& self) const
		{
			m_self = self;
		}

	private:
		mutable std::weak_ptr<const SyntaxToken> m_self;
		SyntaxTokenType m_type;
		std::string m_value;
		std::vector<SyntaxTrivia> m_leadingTrivia;
		std::vector<SyntaxTrivia> m_trailingTrivia;
	};
}
