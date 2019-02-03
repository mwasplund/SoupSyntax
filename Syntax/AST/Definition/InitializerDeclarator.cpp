﻿
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
    if (*m_declarator != *rhs.m_declarator)
    {
        return false;
    }
    else if (m_initializer == nullptr || rhs.m_initializer == nullptr)
    {
        return m_initializer == nullptr && rhs.m_initializer == nullptr;
    }
    else
    {
        return *m_initializer == *rhs.m_initializer;
    }
}

bool InitializerDeclarator::operator !=(const InitializerDeclarator& rhs) const
{
    return !(*this == rhs);
}

std::string InitializerDeclarator::ToString() const
{
    std::string result = "InitializerDeclarator";
    result += "\n" + m_declarator->ToString();
    if (m_initializer != nullptr)
    {
        result += "\n" + m_initializer->ToString();
    }

    return result;
}

bool InitializerDeclarator::Equals(const Node& rhs) const
{
    return *this == static_cast<const InitializerDeclarator&>(rhs);
}
