#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Namespace definition
    /// </summary>
    export class NamespaceDefinition final : public Declaration
    {
        friend class SyntaxFactory;

    private:
        /// <summary>
        /// Initialize
        /// </summary>
        NamespaceDefinition(
            std::shared_ptr<const SyntaxToken> namespaceToken,
            std::shared_ptr<const SyntaxToken> identifierToken,
            std::shared_ptr<const SyntaxToken> openBraceToken,
            std::shared_ptr<const SyntaxList<Declaration>> body,
            std::shared_ptr<const SyntaxToken> closeBraceToken) :
            Declaration(SyntaxNodeType::NamespaceDefinition),
            m_namespaceToken(std::move(namespaceToken)),
            m_identifierToken(std::move(identifierToken)),
            m_openBraceToken(std::move(openBraceToken)),
            m_body(std::move(body)),
            m_closeBraceToken(std::move(closeBraceToken))
        {
        }

    public:
        /// <summary>
        /// Gets the optional SyntaxToken for the namespace keyword.
        /// </summary>
        const SyntaxToken& GetNamespaceToken() const
        {
            return *m_namespaceToken;
        }

        /// <summary>
        /// Gets a value indicating whether the optional SyntaxToken 
        /// for the identifier is present.
        /// </summary>
        bool HasIdentifierToken() const
        {
            return m_identifierToken != nullptr;
        }

        /// <summary>
        /// Gets the optional SyntaxToken for the class/struct keyword.
        /// </summary>
        const SyntaxToken& GetIdentifierToken() const
        {
            if (!HasIdentifierToken())
                throw std::runtime_error("No IdentifierToken present.");
            return *m_identifierToken;
        }

        /// <summary>
        /// Gets the SyntaxToken for the left brace.
        /// </summary>
        const SyntaxToken& GetOpenBraceToken() const
        {
            return *m_openBraceToken;
        }

        /// <summary>
        /// Gets the list of declarations that make up the body of the namespace
        /// </summary>
        const SyntaxList<Declaration>& GetBody() const
        {
            return *m_body;
        }

        /// <summary>
        /// Gets the SyntaxToken for the right brace.
        /// </summary>
        const SyntaxToken& GetCloseBraceToken() const
        {
            return *m_closeBraceToken;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;

            children.push_back(SyntaxNodeChild(m_namespaceToken));

            if (HasIdentifierToken())
            {
                children.push_back(SyntaxNodeChild(m_identifierToken));
            }

            children.push_back(SyntaxNodeChild(m_openBraceToken));
    
            auto bodyChildren = m_body->GetChildren();
            children.insert(children.end(), bodyChildren.begin(), bodyChildren.end());

            children.push_back(SyntaxNodeChild(m_closeBraceToken));

            return children;
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
        bool operator ==(const NamespaceDefinition& rhs) const
        {
            return *m_namespaceToken == *rhs.m_namespaceToken &&
                SyntaxUtils::AreOptionalValuesEqual(m_identifierToken, rhs.m_identifierToken) &&
                *m_openBraceToken == *rhs.m_openBraceToken &&
                *m_body == *rhs.m_body &&
                *m_closeBraceToken == *rhs.m_closeBraceToken;
        }

        bool operator !=(const NamespaceDefinition& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const NamespaceDefinition&>(rhs);
        }

    private:
        std::shared_ptr<const SyntaxToken> m_namespaceToken;
        std::shared_ptr<const SyntaxToken> m_identifierToken;
        std::shared_ptr<const SyntaxToken> m_openBraceToken;
        std::shared_ptr<const SyntaxList<Declaration>> m_body;
        std::shared_ptr<const SyntaxToken> m_closeBraceToken;
    };
}
