#pragma once
#include "NameExpression.h"
#include "SyntaxToken.h"

namespace Soup::Syntax
{
    /// <summary>
    /// A simple name expression referencing a single Identifier
    /// </summary>
    export class SimpleNameExpression final : public NameExpression
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        SimpleNameExpression(std::shared_ptr<const SyntaxToken> identifier) :
            m_identifier(std::move(identifier))
        {
        }

    public:
        /// <summary>
        /// Gets the identifier token
        /// </summary>
        const SyntaxToken& GetIdentifier() const
        {
            return *m_identifier;
        }

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const SimpleNameExpression& rhs) const
        {
            return *m_identifier == *rhs.m_identifier;
        }

        bool operator !=(const SimpleNameExpression& rhs) const
        {
            return !(*this == rhs);
        }

        /// <summary>
        /// Convert to string representation
        /// </summary>
        virtual std::wstring ToString() const override final
        {
            return L"SimpleNameExpression<" + m_identifier->ToString() + L">";
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const SimpleNameExpression&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_identifier;
    };
}
