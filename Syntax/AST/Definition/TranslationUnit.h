#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The root translation unit node
    /// </summary>
    export class TranslationUnit : public SyntaxNode
    {
    public:
        TranslationUnit(std::shared_ptr<const DeclarationSequence>&& declarations) :
            SyntaxNode(SyntaxNodeType::TranslationUnit),
            m_declarations(std::move(declarations))
        {
        }

        /// <summary>
        /// Gets or sets the option declaration sequence
        /// </summary>
        const DeclarationSequence& GetDeclarations() const
        {
            return *m_declarations;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(*m_declarations),
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
        bool operator ==(const TranslationUnit& rhs) const
        {
            return *m_declarations == *rhs.m_declarations;
        }

        bool operator !=(const TranslationUnit& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const TranslationUnit&>(rhs);
        }

    private:
        std::shared_ptr<const DeclarationSequence> m_declarations;
    };
}
