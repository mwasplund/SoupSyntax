#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The delete function body
    /// </summary>
    export class DeleteFunctionBody final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        DeleteFunctionBody() :
            SyntaxNode(SyntaxNodeType::DeleteFunctionBody)
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
        bool operator ==(const DeleteFunctionBody& rhs) const
        {
            return true;
        }

        bool operator !=(const DeleteFunctionBody& rhs) const
        {
            return false;
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const DeleteFunctionBody&>(rhs);
        }
    };
}
