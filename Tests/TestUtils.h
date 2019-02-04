#pragma once

namespace Soup::Syntax::UnitTests
{

struct CppParserContainer
{
    std::unique_ptr<antlr4::ANTLRInputStream> Input;

    std::unique_ptr<CppLexer> Lexer;
    std::unique_ptr<antlr4::CommonTokenStream> TokenStream;
    std::unique_ptr<CppParser> Parser;

    std::unique_ptr<LexerExceptionErrorListener> LexerErrorListener;
    std::unique_ptr<ParserExceptionErrorListener> ParserErrorListener;
};

class TestUtils
{
  public:
    static CppParserContainer BuildParser(const std::string& source)
    {
        CppParserContainer container;

        container.Input = std::make_unique<antlr4::ANTLRInputStream>(source);

        // Parse the file
        container.Lexer = std::make_unique<CppLexer>(container.Input.get());
        container.TokenStream = std::make_unique<antlr4::CommonTokenStream>(container.Lexer.get());
        container.Parser = std::make_unique<CppParser>(container.TokenStream.get());

        // Setup error handling
        container.LexerErrorListener = std::make_unique<LexerExceptionErrorListener>();
        container.Lexer->removeErrorListeners();
        container.Lexer->addErrorListener(container.LexerErrorListener.get());
        container.ParserErrorListener = std::make_unique<ParserExceptionErrorListener>();
        container.Parser->removeErrorListeners();
        container.Parser->addErrorListener(container.ParserErrorListener.get());

        return container;
    }

    static std::shared_ptr<TranslationUnit> GenerateAST(const std::string& source)
    {
        auto container = BuildParser(source);

        // Parse the concrete syntax tree
        auto translationUnit = container.Parser->translationUnit();

        // Convert the the abstract syntax tree
        auto visitor = std::make_unique<ASTVisitor>();
        auto ast = visitor->visit(translationUnit).as<std::shared_ptr<TranslationUnit>>();

        return ast;
    }

    static std::shared_ptr<TranslationUnit> CreateSingleDeclaration(
        std::shared_ptr<Declaration> &&declaration)
    {
        return std::make_unique<TranslationUnit>(
            std::make_shared<DeclarationSequence>(
                std::vector<std::shared_ptr<Declaration>>{
                    std::move(declaration)}));
    }
};
} // namespace Soup::Syntax::UnitTests
