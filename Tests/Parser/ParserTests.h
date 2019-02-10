#pragma once
#include "../SoupAssert.h"

namespace Soup::Syntax::UnitTests
{
    class ParserTests
    {
    public:
        // [[Theory]]
        // [[InlineData("true")]]
        // [[InlineData("false")]]
        void SingleRule_BooleanLiterals(std::string sourceCode)
        {
            Run(
                sourceCode,
                [](CppParser& parser)
                {
                    auto context = parser.booleanLiteral();
                    Assert::NotNull(context, "Verify the context is non-null.");
                });
        }

        // [[Theory]]
        // [[InlineData("nullptr")]]
        void SingleRule_PointerLiterals(std::string sourceCode)
        {
            Run(
                sourceCode,
                [](CppParser& parser)
                {
                    auto context = parser.pointerLiteral();
                    Assert::NotNull(context, "Verify the context is non-null.");
                });
        }

        // [[Theory]]
        // [[InlineData("1")]] // Integer
        // [[InlineData("1.0")]] // FloatingPoint
        // [[InlineData("'c'")]] // Character
        // [[InlineData("\"s\"")]] // String
        // [[InlineData("true")]] // Boolean
        // [[InlineData("nullptr")]] // Pointer
        void SingleRule_Literals(std::string sourceCode)
        {
            Run(
                sourceCode,
                [](CppParser& parser)
                {
                    auto context = parser.literal();
                    Assert::NotNull(context, "Verify the context is non-null.");
                });
        }

    private:
        // TODO: Function with params is broken in modules
        typedef void (*TestMethod)(CppParser&);
        void Run(const std::string& sourceCode, TestMethod test)
        {
            // Parse the file
            auto inputStream = std::make_unique<antlr4::ANTLRInputStream>(sourceCode);
            auto lexer = std::make_unique<CppLexer>(inputStream.get());
            auto tokenStream = std::make_unique<antlr4::CommonTokenStream>(lexer.get());
            auto parser = std::make_unique<CppParser>(tokenStream.get());

            // Setup error handling
            auto lexerErrorListener = std::make_unique<LexerExceptionErrorListener>();
            lexer->removeErrorListeners();
            lexer->addErrorListener(lexerErrorListener.get());
            auto parserErrorListener = std::make_unique<ParserExceptionErrorListener>();
            parser->removeErrorListeners();
            parser->addErrorListener(parserErrorListener.get());

            test(*parser);
        }
    };
}
