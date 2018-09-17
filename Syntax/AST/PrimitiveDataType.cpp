
module SoupSyntax;
using namespace Soup::Syntax;

PrimitiveDataType PrimitiveDataTypeNode::GetType() const
{
    return this->type;
}

PrimitiveDataTypeNode::PrimitiveDataTypeNode(PrimitiveDataType type)
{
    this->type = type;
}

bool PrimitiveDataTypeNode::operator ==(const PrimitiveDataTypeNode& rhs)
{
    return this->type == rhs.type;
}

bool PrimitiveDataTypeNode::operator !=(const PrimitiveDataTypeNode& rhs)
{
    return !(lhs == rhs);
}
