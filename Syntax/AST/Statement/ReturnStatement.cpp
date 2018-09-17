
module SoupSyntax;
using namespace Soup::Syntax;

bool ReturnStatement::operator ==(const ReturnStatement& rhs) const
{
    return true;
}

bool ReturnStatement::operator !=(const ReturnStatement& rhs) const
{
    return !(*this == rhs);
}
