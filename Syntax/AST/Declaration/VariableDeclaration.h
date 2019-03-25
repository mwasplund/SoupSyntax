#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The varaible declaration
    /// </summary>
    export class VariableDeclaration final : public Declaration
    {
    public:
        VariableDeclaration(
            std::shared_ptr<const DeclarationSpecifier>&& DeclarationSpecifier,
            std::shared_ptr<const InitializerDeclaratorList>&& initializerDeclaratorList) :
            Declaration(SyntaxNodeType::SimpleDefinition),
            m_DeclarationSpecifier(std::move(DeclarationSpecifier)),
            m_initializerDeclaratorList(std::move(initializerDeclaratorList))
        {
        }

        /// <summary>
        /// Gets the specifiers
        /// </summary>
        const DeclarationSpecifier& GetDeclarationSpecifier() const
        {
            return *m_DeclarationSpecifier;
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
                    SyntaxNodeChild(m_DeclarationSpecifier),
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
            return *m_DeclarationSpecifier == *rhs.m_DeclarationSpecifier &&
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
        std::shared_ptr<const DeclarationSpecifier> m_DeclarationSpecifier;
        std::shared_ptr<const InitializerDeclaratorList> m_initializerDeclaratorList;
    };
}
