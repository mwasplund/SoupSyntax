
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// A span of text with a start location and length
    /// </summary>
    export class TextSpan
    {
    public:
        TextSpan() :
            m_start(0),
            m_length(0)
        {
        }

        TextSpan(uint32_t start, uint32_t length) :
            m_start(start),
            m_length(length)
        {
        }

        /// <summary>
        /// Get the Span start location
        /// </summary>
        uint32_t GetStart() const
        {
            return m_start;
        }

        /// <summary>
        /// Get the Span length
        /// </summary>
        uint32_t GetLength() const
        {
            return m_length;
        }

    private:
        uint32_t m_start;
        uint32_t m_length;
    };
}
