
module SoupSyntax;
using namespace Soup::Syntax;

UnaryExpression::UnaryExpression(
    UnaryOperator unaryOperator,
    std::shared_ptr<SyntaxToken> operatorToken,
    std::shared_ptr<Expression> operand) :
    m_operator(unaryOperator),
    m_operatorToken(std::move(operatorToken)),
    m_operand(std::move(operand))
{
}

UnaryOperator UnaryExpression::GetOperator() const
{
    return m_operator;
}

const SyntaxToken& UnaryExpression::GetOperatorToken() const
{
    return *m_operatorToken;
}

const Expression& UnaryExpression::GetOperand() const
{
    return *m_operand;
}

bool UnaryExpression::operator ==(const UnaryExpression& rhs) const
{
    return m_operator == rhs.m_operator &&
        *m_operatorToken == *rhs.m_operatorToken &&
        *m_operand == *rhs.m_operand;
}

bool UnaryExpression::operator !=(const UnaryExpression& rhs) const
{
    return !(*this == rhs);
}

std::string UnaryExpression::ToString() const
{
    return std::string("UnaryExpression<") + std::to_string((int)m_operator) + ">";
}

bool UnaryExpression::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const UnaryExpression&>(rhs);
}
