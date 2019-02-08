
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

bool PrimitiveDataTypeNode::operator ==(const PrimitiveDataTypeNode& rhs) const
{
    return this->type == rhs.type;
}

bool PrimitiveDataTypeNode::operator !=(const PrimitiveDataTypeNode& rhs) const
{
    return !(*this == rhs);
}

std::string PrimitiveDataTypeNode::ToString() const
{
    return "PrimitiveDataTypeNode<" + std::to_string(static_cast<int>(type)) + ">";
}

bool PrimitiveDataTypeNode::Equals(const SyntaxNode& rhs) const
{
    return *this == static_cast<const PrimitiveDataTypeNode&>(rhs);
}