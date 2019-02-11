
module SoupSyntax;
using namespace Soup::Syntax;

BinaryExpression::BinaryExpression(
    BinaryOperator binaryOperator,
    std::shared_ptr<Expression> leftOperand,
    std::shared_ptr<Expression> rightOperand) :
    m_operator(binaryOperator),
    m_leftOperand(std::move(leftOperand)),
    m_rightOperand(std::move(rightOperand))
{
}

BinaryOperator BinaryExpression::GetOperator() const
{
    return m_operator;
}

const Expression& BinaryExpression::GetLeftOperand() const
{
    return *m_leftOperand;
}

const Expression& BinaryExpression::GetRightOperand() const
{
    return *m_rightOperand;
}

bool BinaryExpression::operator ==(const BinaryExpression& rhs) const
{
    return m_operator == rhs.m_operator &&
        *m_leftOperand == *rhs.m_leftOperand &&
        *m_rightOperand == *rhs.m_rightOperand;
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
