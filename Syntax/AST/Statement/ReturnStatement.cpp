
module SoupSyntax;
using namespace Soup::Syntax;

bool ReturnStatement::operator ==(const ReturnStatement& rhs)
{
    return true;
}

bool ReturnStatement::operator !=(const ReturnStatement& rhs)
{
    return !(*this == rhs);
}
