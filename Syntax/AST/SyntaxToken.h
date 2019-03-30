
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The leaf elements of the syntax tree
    /// </summary>
    export class SyntaxToken
    {
        friend class SyntaxFactory;

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
        /// Get the span of the token
        /// </summary>
        TextSpan GetSpan() const
        {
            return TextSpan();
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

        /// <summary>
        /// Convert to string representation
        /// </summary>
        std::string ToString() const
        {
            return std::to_string((int)m_type) + ", " + m_value;
        }

    private:
        SyntaxTokenType m_type;
        std::string m_value;
        std::vector<SyntaxTrivia> m_leadingTrivia;
        std::vector<SyntaxTrivia> m_trailingTrivia;
    };
}
