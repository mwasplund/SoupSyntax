﻿
module SoupSyntax;
using namespace Soup::Syntax;

QualifiedName::QualifiedName(
    std::shared_ptr<LiteralNode>&& qualifier,
    std::shared_ptr<Node>&& name) :
    m_qualifier(std::move(qualifier)),
    m_name(std::move(name))
{
}

bool QualifiedName::operator==(const QualifiedName &rhs) const
{
    return m_qualifier == rhs.m_qualifier &&
           m_name == rhs.m_name;
}

bool QualifiedName::operator!=(const QualifiedName &rhs) const
{
    return !(*this == rhs);
}

const LiteralNode &QualifiedName::GetQualifier() const
{
    return *m_qualifier;
}

const Node &QualifiedName::GetName() const
{
    return *m_name;
}

std::string QualifiedName::ToString() const
{
    return "QualifiedName";
}

bool QualifiedName::Equals(const Node& rhs) const
{
    return *this == static_cast<const QualifiedName&>(rhs);
}
