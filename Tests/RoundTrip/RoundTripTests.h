#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class RoundTripTests
    {
    public:
        // [[Theory]]
        // [[InlineData("BlockComment.cpp")]]
        // [[InlineData("EmptyFile.cpp")]]
        // [[InlineData("HelloWorld.cpp")]]
        // [[InlineData("LineComment.cpp")]]
        // [[InlineData("Namespace.cpp")]]
        // [[InlineData("SimpleClass.cpp")]]
        // [[InlineData("TemplateArguments.cpp")]]
        void RoundTrip(std::string name)
        {
            std::filesystem::path sourceFilePath("RoundTrip/Input/" + name);
            std::ifstream sourceFile(sourceFilePath);

            // Read the whole file
            sourceFile.seekg(0, std::ios::end);
            size_t size = sourceFile.tellg();
            std::string source(size, ' ');
            sourceFile.seekg(0);
            sourceFile.read(&source[0], size); 

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
