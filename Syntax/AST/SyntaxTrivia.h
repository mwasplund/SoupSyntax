
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Trivial elements of the source that are attacked to tokens
    /// Such as whitespace and comments.
    /// </summary>
    export class SyntaxTrivia
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        SyntaxTrivia(std::string value, TextSpan span) :
            m_value(std::move(value)),
            m_span(span)
        {
        }

    public:
        /// <summary>
        /// Get the string value of the trivia
        /// </summary>
        const std::string& GetValue() const
        {
            return m_value;
        }

        /// <summary>
        /// Get the trivia span
        /// </summary>
        TextSpan GetSpan() const
        {
            return m_span;
        }

        /// <summary>
        /// Write the contents of the trivia to the provided stream
        /// </summary>
        void Write(std::ostream& stream) const
        {
            stream << m_value;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator==(const SyntaxTrivia &rhs) const
        {
            return m_value == rhs.m_value &&
                m_span == rhs.m_span;
        }

        bool operator!=(const SyntaxTrivia &rhs) const
        {
            return !(*this == rhs);
        }

    private:
        std::string m_value;
        TextSpan m_span;
    };
}
