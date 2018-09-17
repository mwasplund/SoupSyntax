﻿
module SoupSyntax;
using namespace Soup::Syntax;

const CompoundStatement& RegularFunctionBody::GetStatements() const
{
    return this->statements;
}

bool RegularFunctionBody::operator ==(const RegularFunctionBody& rhs) const
{
    return this->statements == rhs.statements;
}

bool RegularFunctionBody::operator !=(const RegularFunctionBody& rhs) const
{
    return !(*this == rhs);
}