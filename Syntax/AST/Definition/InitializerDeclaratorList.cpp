
module SoupSyntax;
using namespace Soup::Syntax;

const std::vector<InitializerDeclarator>& InitializerDeclaratorList::GetItems() const
{
    return this->items;
}

InitializerDeclaratorList::InitializerDeclaratorList() :
    items()
{
}

InitializerDeclaratorList::InitializerDeclaratorList(std::vector<InitializerDeclarator>&& items)
{
    this->items = std::move(items);
}

bool InitializerDeclaratorList::operator ==(const InitializerDeclaratorList& rhs) const
{
    return this->items == rhs.items;
}

bool InitializerDeclaratorList::operator !=(const InitializerDeclaratorList& rhs) const
{
    return !(*this == rhs);
}
