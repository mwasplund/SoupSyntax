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
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        SimpleNameExpression(std::shared_ptr<SyntaxToken> identifier) :
            m_identifier(std::move(identifier))
        {
        }

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
        virtual std::string ToString() const override final
        {
            return "SimpleNameExpression<" + m_identifier->ToString() + ">";
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
        std::shared_ptr<SyntaxToken> m_identifier;
    };
}
