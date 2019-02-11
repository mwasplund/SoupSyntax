
module SoupSyntax;
using namespace Soup::Syntax;

SubscriptExpression::SubscriptExpression(
    std::shared_ptr<Expression> left,
    std::shared_ptr<Expression> right) :
    m_left(std::move(left)),
    m_right(std::move(right))
{
}

const Expression& SubscriptExpression::GetLeft() const
{
    return *m_left;
}

const Expression& SubscriptExpression::GetRight() const
{
    return *m_right;
}

bool SubscriptExpression::operator ==(const SubscriptExpression& rhs) const
{
    return *m_left == *rhs.m_left &&
        *m_right == *rhs.m_right;
}

bool SubscriptExpression::operator !=(const SubscriptExpression& rhs) const
{
    return !(*this == rhs);
}

std::string SubscriptExpression::ToString() const
{
    return std::string("SubscriptExpression");
}

bool SubscriptExpression::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const SubscriptExpression&>(rhs);
}
