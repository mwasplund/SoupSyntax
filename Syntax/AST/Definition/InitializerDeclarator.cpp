

namespace Soup::Syntax
{
                export class  : public Node
    {
public Node InitializerDeclarator::Declarator { get; set; }

public Node InitializerDeclarator::Initializer { get; set; }

public static bool InitializerDeclarator::operator ==(InitializerDeclarator lhs, InitializerDeclarator rhs)
{
    if (object.ReferenceEquals(lhs, null))
        return object.ReferenceEquals(rhs, null);
    else
        return lhs.Equals(rhs);
}

public static bool InitializerDeclarator::operator !=(InitializerDeclarator lhs, InitializerDeclarator rhs)
{
    return !(lhs == rhs);
}
