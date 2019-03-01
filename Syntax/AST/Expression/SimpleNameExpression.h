#pragma once

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
            NameExpression(SyntaxNodeType::SimpleNameExpression),
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
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(*m_identifier),
                });
        }

        /// <summary>
        /// Visitor Accept
        /// </summary>
        virtual void Accept(ISyntaxVisitor& visitor) const override final
        {
            visitor.Visit(*this);
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
