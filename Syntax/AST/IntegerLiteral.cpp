
module SoupSyntax;
using namespace Soup::Syntax;

IntegerLiteral::IntegerLiteral(int value)
{
    this->value = value;
}

int IntegerLiteral::GetValue() const
{
    return this->value;
}

bool IntegerLiteral::operator ==(const IntegerLiteral& rhs) const
{
    return this->value == rhs.value;
}

bool IntegerLiteral::operator !=(const IntegerLiteral& rhs) const
{
    return !(*this == rhs);
}

std::string IntegerLiteral::ToString() const
{
    return std::string("IntegerLiteral<") + std::to_string(value) + ">";
}

bool IntegerLiteral::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const IntegerLiteral&>(rhs);
}
