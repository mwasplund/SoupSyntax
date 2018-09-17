#pragma once
#include <memory>

namespace Soup::Syntax
{
  export class SyntaxTree
  {
  public:
    static std::unique_ptr<SyntaxTree> Parse();
  };
}