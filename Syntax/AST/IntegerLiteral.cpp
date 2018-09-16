
module SoupSyntax;
using Soup::Syntax;

int Value { get; set; }

IntegerLiteral(int value)
{
    Value = value;
}

bool operator ==(IntegerLiteral rhs)
{
    return this->value == rhs.value;
}

bool operator !=(IntegerLiteral lhs, IntegerLiteral rhs)
{
    return !(lhs == rhs);
}
