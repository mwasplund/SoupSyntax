
module SoupSyntax;
using namespace Soup::Syntax;

const DeclarationSpecifierSequence& FunctionDefinition::GetReturnType() const
{
    return this->returnType;
}

const Identifier& FunctionDefinition::GetIdentifier() const
{
    return this->identifier;
}

const ParameterList& FunctionDefinition::GetParameterList() const
{
    return this->parameterList;
}

const Node& FunctionDefinition::GetBody() const
{
    return *this->body;
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
    return !(*this == rhs);
}
