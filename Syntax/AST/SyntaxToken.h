
#pragma once

namespace Soup::Syntax
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

        /// <summary>
        /// Write the contents of the token to the provided stream
        /// </summary>
        void Write(std::ostream& stream) const
        {
            // Write the leading trivia
            for (auto& trivia : m_leadingTrivia)
            {
                trivia.Write(stream);
            }

            // Write the raw token value
            stream << m_value;

            // Write the trailing trivia
            for (auto& trivia : m_trailingTrivia)
            {
                trivia.Write(stream);
            }
        }

    private:
        SyntaxTokenType m_type;
        std::string m_value;
        std::vector<SyntaxTrivia> m_leadingTrivia;
        std::vector<SyntaxTrivia> m_trailingTrivia;
    };
}
