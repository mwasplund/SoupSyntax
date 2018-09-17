

using System;
using System.Collections.Generic;
using System.Linq;

namespace Soup::Syntax

const std::vector<Statement>& GetStatements() const
{
    return this->statments;
}

bool operator ==(const CompoundStatement& rhs)
{
    return this->statements == rhs.statements;
}

bool operator !=(const CompoundStatement& rhs)
{
    return !(lhs == rhs);
}
