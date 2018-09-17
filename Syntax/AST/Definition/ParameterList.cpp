

module SoupSyntax;
using namespace Soup::Syntax;

const std::vector<Node>& ParameterList::GetParameters() const
{
    return this->parameters;
}

bool ParameterList::operator ==(const ParameterList& rhs) const
{
    return this->parameters == rhs.parameters;
}

bool ParameterList::operator !=(const ParameterList& rhs) const
{
    return !(*this == rhs);
}
