﻿#pragma once

namespace Soup::Syntax
{
    export class SyntaxTree
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        SyntaxTree(std::shared_ptr<const TranslationUnit> translationUnit) :
            m_translationUnit(std::move(translationUnit))
        {
        }

        /// <summary>
        /// Gets the root translation unit
        /// </summary>
        const TranslationUnit& GetTranslationUnit() const
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
        std::shared_ptr<const TranslationUnit> m_translationUnit;
    };
}