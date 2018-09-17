
module SoupSyntax;
using namespace Soup::Syntax;

const LiteralNode& QualifiedName::GetQualifier() const
{
    return *this->qualifier;
}

const Node& QualifiedName::GetName() const
{
    return *this->name;
}

QualifiedName::QualifiedName()
{
}

bool QualifiedName::operator ==(const QualifiedName& rhs) const
{
    return this->qualifier == rhs.qualifier &&
        this->name == rhs.name;
}

bool QualifiedName::operator !=(const QualifiedName& rhs) const
{
    return !(*this == rhs);
}
