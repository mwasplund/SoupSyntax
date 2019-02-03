﻿

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

std::string ParameterList::ToString() const
{
    return "ParameterList";
}

bool ParameterList::Equals(const Node& rhs) const
{
    return *this == static_cast<const ParameterList&>(rhs);
}
