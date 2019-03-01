#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The default function body
    /// </summary>
    export class DefaultFunctionBody final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        DefaultFunctionBody() :
            SyntaxNode(SyntaxNodeType::DefaultFunctionBody)
        {
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            return std::vector<SyntaxNodeChild>(
                {
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
        bool operator ==(const DefaultFunctionBody& rhs) const
        {
            return true;
        }

        bool operator !=(const DefaultFunctionBody& rhs) const
        {
            return false;
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DefaultFunctionBody&>(rhs);
        }
    };
}
