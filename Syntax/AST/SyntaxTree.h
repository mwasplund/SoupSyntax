#pragma once

namespace Soup::Syntax
{
    export class SyntaxTree
    {
    public:
        static std::unique_ptr<SyntaxTree> Parse()
        {
            return std::make_unique<SyntaxTree>();
        }
    };
}