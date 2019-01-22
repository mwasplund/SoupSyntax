#pragma once

namespace Soup::Syntax::UnitTests
{
class TestUtils
{
  public:
    static std::shared_ptr<TranslationUnit> GenerateAST(antlr4::ANTLRInputStream* inputStream)
    {
        // Parse the file
        auto lexer = std::make_unique<CppLexer>(inputStream);
        auto tokenStream = std::make_unique<antlr4::CommonTokenStream>(lexer.get());
        auto parser = std::make_unique<CppParser>(tokenStream.get());

        // auto tokens = lexer.GetAllTokens().Select(token => lexer.Vocabulary.GetSymbolicName(token.Type)).ToList();

        // Setup error handling
        auto lexerErrorListener = std::make_unique<LexerExceptionErrorListener>();
        lexer->removeErrorListeners();
        lexer->addErrorListener(lexerErrorListener.get());
        auto parserErrorListener = std::make_unique<ParserExceptionErrorListener>();
        parser->removeErrorListeners();
        parser->addErrorListener(parserErrorListener.get());

        // Parse the concrete syntax tree
        auto translationUnit = parser->translationUnit();

        // Convert the the abstract syntax tree
        auto visitor = std::make_unique<ASTVisitor>();
        auto ast = visitor->visit(translationUnit)
                       .as<std::shared_ptr<TranslationUnit>>();
        return ast;
    }

    static std::shared_ptr<TranslationUnit> CreateSingleDeclaration(
        std::shared_ptr<Declaration>&& declaration)
    {
        return std::make_unique<TranslationUnit>(
            std::make_shared<DeclarationSequence>(
                std::vector<std::shared_ptr<Declaration>>
                {
                    std::move(declaration)
                }));
    }
};
} // namespace Soup::Syntax::UnitTests
