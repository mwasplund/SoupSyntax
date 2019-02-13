
#pragma once
#include "TextSpan.h"

namespace Soup::Syntax
{
    /// <summary>
    /// Trivial elements of the source that are attacked to tokens
    /// Such as whitespace and comments.
    /// </summary>
    export class SyntaxTrivia
    {
    public:
        SyntaxTrivia() :
            m_span()
        {
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        TextSpan GetSpan() const
        {
            return m_span;
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        std::string ToString() const
        {
            return "SyntaxTrivia";
        }

    private:
        TextSpan m_span;
    };
}
