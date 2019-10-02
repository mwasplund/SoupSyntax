#pragma once

namespace Soup::Syntax
{
	export class SyntaxTree
	{
	public:
		/// <summary>
		/// Initialize
		/// </summary>
		SyntaxTree(const std::shared_ptr<const InnerTree::TranslationUnit>& translationUnit) :
			m_translationUnit(translationUnit->CreateOuter(nullptr))
		{
		}

		/// <summary>
		/// Gets the root translation unit
		/// </summary>
		const OuterTree::TranslationUnit& GetTranslationUnit() const
		{
			return *m_translationUnit;
		}

		/// <summary>
		/// Write the contents of the entire translation unit to the stream
		/// </summary>
		void Write(std::ostream& stream) const
		{
			// Visit the entire tree writing all of the raw tokens
			SyntaxSourceWriter writer(stream);
			m_translationUnit->Accept(writer);
		}

		/// <summary>
		/// Equality operator
		/// </summary>
		bool operator ==(const SyntaxTree& rhs) const
		{
			return *m_translationUnit == *rhs.m_translationUnit;
		}

		bool operator !=(const SyntaxTree& rhs) const
		{
			return !(*this == rhs);
		}

	private:
		std::shared_ptr<const OuterTree::TranslationUnit> m_translationUnit;
	};
}