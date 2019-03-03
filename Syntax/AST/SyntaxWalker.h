
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Base syntax walker that that extends the default syntax walker to 
    /// walk the entier syntax tree
    /// </summary>
    export class SyntaxWalker : public DefaultSyntaxVisitor
    {
    protected:
        SyntaxWalker() :
            m_depth(0)
        {
        }

        virtual void DefaultVisit(const SyntaxNode& node) override
        {
            m_depth++;
            for (auto& child : node.GetChildren())
            {
                if (child.IsNode())
                {
                    child.AsNode().Accept(*this);
                }
                else
                {
                    VisitToken(child.AsToken());
                }
            }

            m_depth--;
        }

        virtual void VisitToken(const SyntaxToken& token)
        {
        }

        uint32_t GetDepth()
        {
            return m_depth;
        }

    private:
        uint32_t m_depth;
    };
}
