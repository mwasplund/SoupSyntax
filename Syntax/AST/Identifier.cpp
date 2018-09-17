
module SoupSyntax;
using namespace Soup::Syntax;

Identifier(std::string value)
{
    this->value = std::move(value);
}

const std::string& GetValue()
{
    return this->value;
}

bool operator ==(const Identifier& rhs)
{
    return this->value == rhs.value;
}

bool operator !=(const Identifier& rhs)
{
    return !(lhs == rhs);
}
