#pragma once
#include "SoupAssert.h"

namespace Soup::Syntax
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

    static std::shared_ptr<const InnerTree::TranslationUnit> GenerateAST(const std::string& source)
    {
        auto container = BuildParser(source);

        // Parse the concrete syntax tree
        auto translationUnit = container.Parser->translationUnit();

        // Convert the the abstract syntax tree
        auto ast = container.Visitor->visit(translationUnit)
            .as<std::shared_ptr<const InnerTree::TranslationUnit>>();

        return ast;
    }

    static std::shared_ptr<const InnerTree::TranslationUnit> CreateSingleDeclaration(
        std::shared_ptr<const InnerTree::Declaration> declaration)
    {
        return SyntaxFactory::CreateTranslationUnit(
            SyntaxFactory::CreateSyntaxList<InnerTree::Declaration>(
                std::vector<std::shared_ptr<const InnerTree::Declaration>>{
                    std::move(declaration)}),
            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));
    }

    static void AreEqual(
        const std::vector<std::shared_ptr<const SyntaxToken>>& expected,
        const std::vector<std::shared_ptr<const SyntaxToken>>& actual,
        const std::string& message)
    {
        bool areEqual = std::equal(
            begin(expected),
            end(expected),
            begin(actual),
            end(actual),
            [](const std::shared_ptr<const SyntaxToken>& lhs, const std::shared_ptr<const SyntaxToken>& rhs)
            {
                return *lhs == *rhs;
            });
        Assert::IsTrue(areEqual, message);
    }

    static void AreEqual(
        const std::shared_ptr<const InnerTree::SyntaxNode>& expected,
        const std::shared_ptr<const InnerTree::SyntaxNode>& actual,
        const std::string& message)
    {
        if (actual == nullptr)
        {
            Assert::Fail("Actual was null.");
        }
        else if (expected == nullptr)
        {
            Assert::Fail("Expected was null.");
        }

        AreEqual(*expected, *actual, message);
    }

    static void AreEqual(
        const InnerTree::SyntaxNode& expected,
        const InnerTree::SyntaxNode& actual,
        const std::string& message)
    {
        if (expected != actual)
        {
            std::stringstream errorMessage;
            // TODO SyntaxTreeWriter writer(errorMessage);
            errorMessage << message << "\n";
            errorMessage << "Expected:\n";
            //expected.Accept(writer);
            errorMessage << "Actual:\n";
            //actual.Accept(writer);

            Assert::Fail(errorMessage.str());
        }
    }

    static void AreNotEqual(
        const std::shared_ptr<const InnerTree::SyntaxNode>& expected,
        const std::shared_ptr<const InnerTree::SyntaxNode>& actual,
        const std::string& message)
    {
        if (*expected == *actual)
        {
            std::stringstream errorMessage;
            // TODO: SyntaxTreeWriter writer(errorMessage);
            errorMessage << message << "\n";
            errorMessage << "Expected:\n";
            //expected->Accept(writer);
            errorMessage << "Actual:\n";
            //actual->Accept(writer);

            Assert::Fail(errorMessage.str());
        }
    }
};
} // namespace Soup::Syntax::UnitTests
