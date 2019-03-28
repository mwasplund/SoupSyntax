#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The Enumerator Definition
    /// </summary>
    export class EnumeratorDefinition final : public SyntaxNode
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        EnumeratorDefinition(
            std::shared_ptr<const SyntaxToken> identifierToken) :
            SyntaxNode(SyntaxNodeType::EnumeratorDefinition),
            m_identifierToken(std::move(identifierToken))
        {
        }

    public:
        /// <summary>
        /// Gets the identifier token
        /// </summary>
        const SyntaxToken& GetIdentifierToken() const
        {
            return *m_identifierToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(m_identifierToken),
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
        bool operator ==(const EnumeratorDefinition& rhs) const
        {
            return *m_identifierToken == *rhs.m_identifierToken;
        }

        bool operator !=(const EnumeratorDefinition& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const EnumeratorDefinition&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_identifierToken;
    };
}
