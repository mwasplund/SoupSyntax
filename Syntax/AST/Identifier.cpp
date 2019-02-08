
module SoupSyntax;
using namespace Soup::Syntax;

Identifier::Identifier(std::string value)
{
    this->value = std::move(value);
}

const std::string& Identifier::GetValue() const
{
    return this->value;
}

bool Identifier::operator ==(const Identifier& rhs) const
{
    return this->value == rhs.value;
}

bool Identifier::operator !=(const Identifier& rhs) const
{
    return !(*this == rhs);
}

std::string Identifier::ToString() const
{
    return "Identifier<" + value + ">";
}

bool Identifier::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const Identifier&>(rhs);
}
