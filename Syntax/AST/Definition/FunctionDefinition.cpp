
module SoupSyntax;
using namespace Soup::Syntax;

const DeclarationSpecifierSequence& FunctionDefinition::ReturnType() const
{
    return this->returnType;
}

const Identifier& FunctionDefinition::Identifier() const
{
    return this->identifier;
}

const ParameterList& FunctionDefinition::ParameterList() const
{
    return this->parameterList;
}

const Node& FunctionDefinition::Body() const
{
    return this->body;
}

bool FunctionDefinition::operator ==(const FunctionDefinition& rhs) const
{
    return 
        this->returnType == rhs.returnType &&
        this->identifier == rhs.identifier &&
        this->parameterList == rhs.parameterList &&
        this->body == rhs.body;
}

bool FunctionDefinition::operator !=(const FunctionDefinition& rhs) const
{
    return !(lhs == rhs);
}
