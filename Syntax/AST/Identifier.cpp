
module ModuleSyntax;

using Soup::Syntax;

Identifier(std::string value)
{
    Value = std::move(value);
}

const std::string& GetValue()
{

}

bool operator ==(const Identifier& rhs)
{
    if (object.ReferenceEquals(lhs, null))
        return object.ReferenceEquals(rhs, null);
    else
        return lhs.Equals(rhs);
}

bool operator !=(const Identifier& rhs)
{
    return !(lhs == rhs);
}
