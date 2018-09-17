
module SoupSyntax;
using namespace Soup::Syntax;

int IntegerLiteral::GetValue() const
{
    return this->value;
}

IntegerLiteral::IntegerLiteral(int value)
{
    this->value = value;
}

bool IntegerLiteral::operator ==(const IntegerLiteral& rhs) const
{
    return this->value == rhs.value;
}

bool IntegerLiteral::operator !=(const IntegerLiteral& rhs) const
{
    return !(*this == rhs);
}
