
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

std::string ReturnStatement::ToString() const
{
    return "ReturnStatement";
}

bool ReturnStatement::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const ReturnStatement&>(rhs);
}
