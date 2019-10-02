
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
		/// Get the first token outside the range of the span
		/// </summary>
		uint32_t GetEnd() const
		{
			return m_start + m_length;
		}

		/// <summary>
		/// Get the Span length
		/// </summary>
		uint32_t GetLength() const
		{
			return m_length;
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator==(const TextSpan &rhs) const
		{
			return m_start == rhs.m_start &&
				m_length == rhs.m_length;
		}

		bool operator!=(const TextSpan &rhs) const
		{
			return !(*this == rhs);
		}

	private:
		uint32_t m_start;
		uint32_t m_length;
	};
}
