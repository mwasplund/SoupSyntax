#pragma once

namespace Soup::Syntax
{
	/// <summary>
	/// Unary operator
	/// </summary>
	export enum class UnaryOperator
	{
		// Arithmetic
		Plus, // "+a"
		Minus, // "-a"
		BitwiseNot, // "~a"

		// Increment/Decrement
		PreIncrement, // "++a"
		PreDecrement, // "--a"
		PostIncrement, // "a++"
		PostDecrement, // "a--"

		// Logical
		LogicalNot, // "!a"

		// Member Access
		Indirection, // "*a"
		AddressOf, // "&a"
	};
}
