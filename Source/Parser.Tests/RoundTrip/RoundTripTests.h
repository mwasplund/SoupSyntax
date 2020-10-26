#pragma once

namespace Soup::Syntax::UnitTests
{
	class RoundTripTests
	{
	public:
		// [[Theory]]
		// [[InlineData("BlockComment.cpp")]]
		// [[InlineData("ClassComplex.cpp")]]
		// [[InlineData("ClassConstructor.cpp")]]
		// [[InlineData("ClassSimple.cpp")]]
		// [[InlineData("EmptyFile.cpp")]]
		// [[InlineData("FunctionParameters.cpp")]]
		// [[InlineData("FunctionSimple.cpp")]]
		// [[InlineData("HelloWorld.cpp")]]
		// [[InlineData("LineComment.cpp")]]
		// [[InlineData("LineComments.cpp")]]
		// [[InlineData("Namespace.cpp")]]
		// [[InlineData("TemplateArguments.cpp")]]
		void RoundTrip(std::string name)
		{
			auto filename = "RoundTrip/Input/" + name;
			auto sourceFilePath = std::filesystem::path(filename);
			auto sourceFile = std::ifstream(sourceFilePath);

			// Read the whole file
			auto source = std::string(std::istreambuf_iterator<char>(sourceFile),
				std::istreambuf_iterator<char>());

			auto syntaxTree = SyntaxParser::Parse(source);

			// Make sure the syntax tree was parsed
			Assert::NotNull(syntaxTree, "Syntax tree must exist.");

			std::stringstream output;
			syntaxTree->Write(output);
			auto result = output.str();

			Assert::AreEqual(source, result, "Verify output text matches input source.");
		}
	};
}
