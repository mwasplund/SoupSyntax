
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// A span of text with a start location and length
    /// </summary>
    export class TextSpan
    {
    public:
        TextSpan();
        TextSpan(uint32_t start, uint32_t length);

        /// <summary>
        /// Get the Span start location
        /// </summary>
        uint32_t GetStart() const;

        /// <summary>
        /// Get the Span length
        /// </summary>
        uint32_t GetLength() const;

    private:
        uint32_t m_start;
        uint32_t m_length;
    };
}
