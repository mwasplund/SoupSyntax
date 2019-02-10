
module SoupSyntax;
using namespace Soup::Syntax;


QualifiedNameExpression::QualifiedNameExpression(
    std::shared_ptr<NameExpression> left,
    std::shared_ptr<SimpleNameExpression> right) :
    m_left(std::move(left)),
    m_right(std::move(right))
{
}

const NameExpression& QualifiedNameExpression::GetLeft() const
{
    return *m_left;
}

const SimpleNameExpression& QualifiedNameExpression::GetRight() const
{
    return *m_right;
}

bool QualifiedNameExpression::operator ==(const QualifiedNameExpression& rhs) const
{
    return *m_left == *rhs.m_left &&
        *m_right == *rhs.m_right;
}

bool QualifiedNameExpression::operator !=(const QualifiedNameExpression& rhs) const
{
    return !(*this == rhs);
}

std::string QualifiedNameExpression::ToString() const
{
    return "QualifiedNameExpression<" + m_left->ToString() + ", " + m_right->ToString() + ">";
}

bool QualifiedNameExpression::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const QualifiedNameExpression&>(rhs);
}
