
module SoupSyntax;
using namespace Soup::Syntax;

const Node& InitializerDeclarator::GetDeclarator() const
{
    return *this->declarator;
}

const Node& InitializerDeclarator::GetInitializer() const
{
    return *this->initializer;
}

bool InitializerDeclarator::operator ==(const InitializerDeclarator& rhs) const
{
    return this->declarator == rhs.declarator &&
        this->initializer == rhs.initializer;
}

bool InitializerDeclarator::operator !=(const InitializerDeclarator& rhs) const
{
    return !(*this == rhs);
}
