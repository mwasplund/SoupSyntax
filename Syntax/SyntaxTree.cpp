
module SoupSyntax;
using namespace Soup::Syntax;

/*static*/ std::unique_ptr<SyntaxTree> SyntaxTree::Parse()
{
  return std::make_unique<SyntaxTree>();
}