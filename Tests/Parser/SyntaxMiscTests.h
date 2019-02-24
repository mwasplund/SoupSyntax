#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class SyntaxMiscTests
    {
    public:
        // [Fact]
        void EmptyFile()
        {
            auto source = std::string("");

            auto expected = std::make_shared<const TranslationUnit>(nullptr);

            auto actual = TestUtils::GenerateAST(source);
            Assert::AreEqual(expected, actual, "Verify AST matches.");
        }
    };
}
