#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Binary operator
    /// </summary>
    export enum class BinaryOperator
    {
        // Arithmetic
        Addition, // "a+b"
        Subtraction, // "a-b"
        Multiplication, // "a*b"
        Division, // "a/b"
        Modulo, // "a%b"
        BitwiseAnd, // "a&b"
        BitwiseOr, // "a|b"
        BitwiseExclusiveOr, // "a^b"
        BitwiseLeftShift, // "a<<b"
        BitwiseRightShift, // "a>>b"

        // Assignment
        SimpleAssignment, // "a=b"
        AdditionAssignment, //"a+=b"
        SubtractionAssignment, // "a-=b"
        MultiplicationAssignment, // "a*=b"
        DivisionAssignment, // "a/=b"
        ModuloAssignment, // "a%=b"
        BitwiseExclusiveOrAssignment, // "a^=b"
        BitwiseAndAssignment, // "a&=b"
        BitwiseOrAssignment, // "a|=b"
        BitwiseLeftShiftAssignment, // "a<<=b"
        BitwiseRightShiftAssignment, // "a>>=b"

        // Comparision
        Equals, // "a==b"
        NotEquals, // "a!=b"
        LessThan, // "a<b"
        GreaterThan, // "a>b"
        LessThanOrEqual, // "a<=b"
        GreaterThanOrEqual, // "a>=b"
        ThreeWayComparison, // "a<=>b"

        // Logical
        LogicalAnd, // "a&&b"
        LogicalOr, // "a||b"

        // Member Access
        Subscript, // "a[b]"
        MemberOfObject, // "a.b"
        MemberOfPointer, // "a->b"
        PointerToMemberOfObject, // "a.*b"
        PointerToMemberOfPointer, // "a->*b"
    };
}
