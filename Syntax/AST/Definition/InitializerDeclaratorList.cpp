
module SoupSyntax;
using namespace Soup::Syntax;

InitializerDeclaratorList::InitializerDeclaratorList() :
    m_items()
{
}

InitializerDeclaratorList::InitializerDeclaratorList(
    std::vector<std::shared_ptr<InitializerDeclarator>>&& items) :
    m_items(std::move(items))
{
}

bool InitializerDeclaratorList::operator ==(const InitializerDeclaratorList& rhs) const
{
    return m_items == rhs.m_items;
}

bool InitializerDeclaratorList::operator !=(const InitializerDeclaratorList& rhs) const
{
    return !(*this == rhs);
}

const std::vector<std::shared_ptr<InitializerDeclarator>>& InitializerDeclaratorList::GetItems() const
{
    return m_items;
}

std::vector<std::shared_ptr<InitializerDeclarator>>& InitializerDeclaratorList::GetItems()
{
    return m_items;
}

bool InitializerDeclaratorList::Equals(const Node& rhs) const
{
    throw std::runtime_error("NotImplemented");
}
