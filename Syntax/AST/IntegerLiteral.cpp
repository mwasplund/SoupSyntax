
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

bool IntegerLiteral::operator ==(IntegerLiteral rhs)
{
    return this->value == rhs.value;
}

bool IntegerLiteral::operator !=(IntegerLiteral lhs, IntegerLiteral rhs)
{
    return !(lhs == rhs);
}
