
#pragma once
#include "SyntaxTrivia.h"
#include "SyntaxTokenType.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The leaf elements of the syntax tree
    /// </summary>
    export class SyntaxToken
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        SyntaxToken(
            SyntaxTokenType type,
            std::string value);

        /// <summary>
        /// Get the token type
        /// </summary>
        SyntaxTokenType GetType() const;

        /// <summary>
        /// Get the raw token value
        /// </summary>
        const std::string& GetValue() const;

        /// <summary>
        /// Get the leading Trivia
        /// </summary>
        const std::vector<SyntaxTrivia>& GetLeadingTrivia() const;

        /// <summary>
        /// Get the trailing Trivia
        /// </summary>
        const std::vector<SyntaxTrivia>& GetTrailingTrivia() const;

        /// <summary>
        /// Convert to string representation
        /// </summary>
        std::string ToString() const;

    private:
        SyntaxTokenType m_type;
        std::string m_value;
        std::vector<SyntaxTrivia> m_leadingTrivia;
        std::vector<SyntaxTrivia> m_trailingTrivia;
    };
}
