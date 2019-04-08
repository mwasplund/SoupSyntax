
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax parser
    /// </summary>
    export class SyntaxParser
    {
    public:
        /// <summary>
        /// Parse a source file
        /// </summary>
        static std::shared_ptr<const SyntaxTree> Parse(const std::string& source)
        {
            auto input = std::make_unique<antlr4::ANTLRInputStream>(source);
            return Parse(input.get());
        }

        /// <summary>
        /// Parse a source file
        /// </summary>
        static std::shared_ptr<const SyntaxTree> Parse(std::istream& source)
        {
            auto input = std::make_unique<antlr4::ANTLRInputStream>(source);
            return Parse(input.get());
        }

        // TODO: Helper method?
        static void PrintAllTokens(const std::string& source)
        {
            auto input = std::make_unique<antlr4::ANTLRInputStream>(source);
            PrintAllTokens(input.get());
        }

    private:
        static std::shared_ptr<const SyntaxTree> Parse(antlr4::ANTLRInputStream* input)
        {
            // Parse the file
            auto lexer = std::make_unique<CppLexer>(input);
            auto tokenStream = std::make_unique<antlr4::CommonTokenStream>(lexer.get());
            auto parser = std::make_unique<CppParser>(tokenStream.get());

            // Setup error handling
            auto lexerErrorListener = std::make_unique<LexerExceptionErrorListener>();
            lexer->removeErrorListeners();
            lexer->addErrorListener(lexerErrorListener.get());
            auto parserErrorListener = std::make_unique<ParserExceptionErrorListener>();
            parser->removeErrorListeners();
            parser->addErrorListener(parserErrorListener.get());

            // Create the final AST visitor
            auto visitor = std::make_unique<ASTCppParserVisitor>(tokenStream.get());

            // Parse the translation unit
            auto context = parser->translationUnit();

            // Convert the the abstract syntax tree
            auto node = visitor->visit(context)
                .as<std::shared_ptr<const TranslationUnit>>();

            return std::make_shared<const SyntaxTree>(std::move(node));
        }

        static void PrintAllTokens(antlr4::ANTLRInputStream* input)
        {
            // Parse the file
            auto lexer = std::make_unique<CppLexer>(input);
            auto tokenStream = std::make_unique<antlr4::CommonTokenStream>(lexer.get());

            auto tokenCount = tokenStream->size();
            std::cout << "Tokens: ";

            // Consume all of the tokens
            tokenStream->fill();
            for (auto token : tokenStream->getTokens())
            {
                std::cout << token->toString() << std::endl;
            }

            std::cout << std::endl;
        }
    };
}
