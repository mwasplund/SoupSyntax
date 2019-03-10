#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The simple definition
    /// </summary>
    export class SimpleDefinition final : public Declaration
    {
    public:
        SimpleDefinition(
            std::shared_ptr<const DeclarationSpecifierSequence>&& declarationSpecifierSequence,
            std::shared_ptr<const InitializerDeclaratorList>&& initializerDeclaratorList) :
            Declaration(SyntaxNodeType::SimpleDefinition),
            m_declarationSpecifierSequence(std::move(declarationSpecifierSequence)),
            m_initializerDeclaratorList(std::move(initializerDeclaratorList))
        {
        }

        /// <summary>
        /// Gets the specifiers
        /// </summary>
        const DeclarationSpecifierSequence& GetDeclarationSpecifierSequence() const
        {
            return *m_declarationSpecifierSequence;
        }

        /// <summary>
        /// Gets the optional initializer
        /// </summary>
        const InitializerDeclaratorList& GetInitializerDeclaratorList() const
        {
            return *m_initializerDeclaratorList;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
                    SyntaxNodeChild(m_declarationSpecifierSequence),
                    SyntaxNodeChild(m_initializerDeclaratorList),
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
        bool operator ==(const SimpleDefinition& rhs) const
        {
            return *m_declarationSpecifierSequence == *rhs.m_declarationSpecifierSequence &&
                *m_initializerDeclaratorList == *rhs.m_initializerDeclaratorList;
        }

        bool operator !=(const SimpleDefinition& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const SimpleDefinition&>(rhs);
        }

    private:
        std::shared_ptr<const DeclarationSpecifierSequence> m_declarationSpecifierSequence;
        std::shared_ptr<const InitializerDeclaratorList> m_initializerDeclaratorList;
    };
}
