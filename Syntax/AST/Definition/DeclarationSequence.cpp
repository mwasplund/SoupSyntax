
module SoupSyntax;
using Soup::Syntax;

const std::vector<Declaration>& GetDeclarations() const
{
    
}

DeclarationSequence() :
    this(new List<Declaration>())
{
}

DeclarationSequence(IList<Declaration> declarations)
{
    Declarations = declarations;
}

static bool operator ==(DeclarationSequence lhs, DeclarationSequence rhs)
{
    if (object.ReferenceEquals(lhs, null))
        return object.ReferenceEquals(rhs, null);
    else
        return lhs.Equals(rhs);
}

bool operator !=(DeclarationSequence lhs, DeclarationSequence rhs)
{
    return !(lhs == rhs);
}
