
module SoupSyntax;
using Soup::Syntax;

const LiteralNode& Qualifier() const
{

}

const Node& QualifiedName::GetName() const
{
}

QualifiedName::QualifiedName()
{
}

bool QualifiedName::operator ==(const QualifiedName& rhs)
{
    if (object.ReferenceEquals(lhs, null))
        return object.ReferenceEquals(rhs, null);
    else
        return lhs.Equals(rhs);
}

bool QualifiedName::operator !=(const QualifiedName& rhs)
{
    return !(lhs == rhs);
}
