
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
        SyntaxTrivia(std::wstring value, TextSpan span) :
            m_value(std::move(value)),
            m_span(span)
        {
        }

    public:
        /// <summary>
        /// Get the string value of the trivia
        /// </summary>
        const std::wstring& GetValue() const
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

        /// <summary>
        /// Convert to string representation
        /// </summary>
        std::wstring ToString() const
        {
            return L"SyntaxTrivia";
        }

    private:
        std::wstring m_value;
        TextSpan m_span;
    };
}
