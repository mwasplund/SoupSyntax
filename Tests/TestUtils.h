#pragma once
#include "SoupAssert.h"

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

    std::unique_ptr<ASTCppParserVisitor> Visitor;
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

        // Create the final AST visitor
        container.Visitor = std::make_unique<ASTCppParserVisitor>(container.TokenStream.get());

        return container;
    }

    static std::shared_ptr<const TranslationUnit> GenerateAST(const std::string& source)
    {
        auto container = BuildParser(source);

        // Parse the concrete syntax tree
        auto translationUnit = container.Parser->translationUnit();

        // Convert the the abstract syntax tree
        auto ast = container.Visitor->visit(translationUnit)
            .as<std::shared_ptr<const TranslationUnit>>();

        return ast;
    }

    static std::shared_ptr<const TranslationUnit> CreateSingleDeclaration(
        std::shared_ptr<const Declaration> &&declaration)
    {
        return std::make_unique<const TranslationUnit>(
            std::make_shared<const DeclarationSequence>(
                std::vector<std::shared_ptr<const Declaration>>{
                    std::move(declaration)}));
    }

    static void AreEqual(
        const std::shared_ptr<const SyntaxNode>& expected,
        const std::shared_ptr<const SyntaxNode>& actual,
        const std::wstring& message)
    {
        if (actual == nullptr)
        {
            Assert::Fail(L"Actual was null.");
        }
        else if (expected == nullptr)
        {
            Assert::Fail(L"Expected was null.");
        }

        AreEqual(*expected, *actual, message);
    }

    static void AreEqual(
        const SyntaxNode& expected,
        const SyntaxNode& actual,
        const std::wstring& message)
    {
        if (expected != actual)
        {
            std::wstringstream errorMessage;
            SyntaxWriter writer(errorMessage);
            errorMessage << message << L"\n";
            errorMessage << L"Expected:\n";
            expected.Accept(writer);
            errorMessage << L"Actual:\n";
            actual.Accept(writer);

            Assert::Fail(errorMessage.str());
        }
    }

    static void AreNotEqual(
        const std::shared_ptr<const SyntaxNode>& expected,
        const std::shared_ptr<const SyntaxNode>& actual,
        const std::wstring& message)
    {
        if (*expected == *actual)
        {
            std::wstringstream errorMessage;
            SyntaxWriter writer(errorMessage);
            errorMessage << message << L"\n";
            errorMessage << L"Expected:\n";
            expected->Accept(writer);
            errorMessage << L"Actual:\n";
            actual->Accept(writer);

            Assert::Fail(errorMessage.str());
        }
    }
};
} // namespace Soup::Syntax::UnitTests
