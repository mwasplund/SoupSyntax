
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
    return std::equal(
        begin(m_items),
        end(m_items),
        begin(rhs.m_items),
        end(rhs.m_items),
        [](const std::shared_ptr<InitializerDeclarator>& lhs, const std::shared_ptr<InitializerDeclarator>& rhs)
        {
            return *lhs == *rhs;
        });
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

std::string InitializerDeclaratorList::ToString() const
{
    std::string result = "InitializerDeclaratorList";
    for (auto item : m_items)
    {
        result += "\n" + item->ToString();
    }

    return result;
}

bool InitializerDeclaratorList::Equals(const Node& rhs) const
{
    return *this == static_cast<const InitializerDeclaratorList&>(rhs);
}
