#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// The function definition
    /// </summary>
    export class ParameterList final : public SyntaxNode
    {
    public:
        /// <summary>
        /// Initialize
        /// </summary>
        ParameterList(std::vector<std::shared_ptr<const SyntaxNode>> parameters) :
            SyntaxNode(SyntaxNodeType::ParameterList),
            m_parameters(std::move(parameters))
        {
        }

        /// <summary>
        /// Gets the list of parameters
        /// </summary>
        const std::vector<std::shared_ptr<const SyntaxNode>>& GetParameters() const
        {
            return m_parameters;
        }

        /// <summary>
        /// Get the collection of children nodes and tokens
        /// </summary>
        virtual std::vector<SyntaxNodeChild> GetChildren() const override final
        {
            std::vector<SyntaxNodeChild> children;
            for (auto& parameter : m_parameters)
            {
                children.push_back(SyntaxNodeChild(*parameter));
            }

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
        bool operator ==(const ParameterList& rhs) const
        {
            return std::equal(
                begin(m_parameters),
                end(m_parameters),
                begin(rhs.m_parameters),
                end(rhs.m_parameters),
                [](const std::shared_ptr<const SyntaxNode>& lhs, const std::shared_ptr<const SyntaxNode>& rhs)
                {
                    return *lhs == *rhs;
                });
        }

        bool operator !=(const ParameterList& rhs) const
        {
            return !(*this == rhs);
        }

    protected:
        /// <summary>
        /// SyntaxNode Equals
        /// </summary>
        virtual bool Equals(const SyntaxNode& rhs) const final
        {
            return *this == static_cast<const ParameterList&>(rhs);
        }

    private:
        std::vector<std::shared_ptr<const SyntaxNode>> m_parameters;
    };
}
