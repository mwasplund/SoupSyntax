
module SoupSyntax;
using namespace Soup::Syntax;

InitializerDeclarator::InitializerDeclarator(
    std::shared_ptr<Node>&& declarator,
    std::shared_ptr<Node>&& initializer) :
    m_declarator(std::move(declarator)),
    m_initializer(std::move(initializer))
{
}

const Node& InitializerDeclarator::GetDeclarator() const
{
    return *m_declarator;
}

const Node& InitializerDeclarator::GetInitializer() const
{
    return *m_initializer;
}

bool InitializerDeclarator::operator ==(const InitializerDeclarator& rhs) const
{
    return m_declarator == rhs.m_declarator &&
        m_initializer == rhs.m_initializer;
}

bool InitializerDeclarator::operator !=(const InitializerDeclarator& rhs) const
{
    return !(*this == rhs);
}

bool InitializerDeclarator::Equals(const Node& rhs) const
{
    throw std::runtime_error("NotImplemented");
}
