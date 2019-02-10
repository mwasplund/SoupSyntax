
module SoupSyntax;
using namespace Soup::Syntax;

BinaryExpression::BinaryExpression(
    BinaryOperator binaryOperator,
    std::shared_ptr<Expression> left,
    std::shared_ptr<Expression> right) :
    m_operator(binaryOperator),
    m_left(std::move(left)),
    m_right(std::move(right))
{
}

BinaryOperator BinaryExpression::GetOperator() const
{
    return m_operator;
}

const Expression& BinaryExpression::GetLeft() const
{
    return *m_left;
}

const Expression& BinaryExpression::GetRight() const
{
    return *m_right;
}

bool BinaryExpression::operator ==(const BinaryExpression& rhs) const
{
    return m_operator == rhs.m_operator &&
        *m_left == *rhs.m_left &&
        *m_right == *rhs.m_right;
}

bool BinaryExpression::operator !=(const BinaryExpression& rhs) const
{
    return !(*this == rhs);
}

std::string BinaryExpression::ToString() const
{
    return std::string("BinaryExpression<") + std::to_string((int)m_operator) + ">";
}

bool BinaryExpression::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const BinaryExpression&>(rhs);
}
