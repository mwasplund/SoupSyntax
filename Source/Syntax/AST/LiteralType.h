#pragma once

namespace Soup::Syntax
{
	/// <summary>
	/// The list of literal types
	/// </summary>
	export enum class LiteralType
	{
		Integer,
		Character,
		Floating,
		String,
		Boolean,
		Pointer,
		UserDefined,
	};
}
