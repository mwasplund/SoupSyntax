#pragma once

namespace Soup::Syntax
{

class TestUtils
{
  public:
    static std::shared_ptr<const InnerTree::TranslationUnit> CreateSingleDeclaration(
        std::shared_ptr<const InnerTree::Declaration> declaration)
    {
        return SyntaxFactory::CreateTranslationUnit(
            SyntaxFactory::CreateSyntaxList<InnerTree::Declaration>(
                {
                    std::move(declaration),
                }),
            SyntaxFactory::CreateKeywordToken(SyntaxTokenType::EndOfFile));
    }

    static OuterTree::SyntaxNodeChild CreateChild(const std::shared_ptr<const InnerTree::SyntaxNode>& innerNode)
    {
        auto outerNode = innerNode->CreateOuterAny(nullptr);
        return OuterTree::SyntaxNodeChild(outerNode);
    }

    static OuterTree::SyntaxNodeChild CreateChild(const std::shared_ptr<const InnerTree::SyntaxToken>& innerToken)
    {
        auto outerNode = innerToken->CreateOuter(nullptr);
        return OuterTree::SyntaxNodeChild(outerNode);
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
            auto writer = SyntaxTreeWriter(errorMessage);
            errorMessage << message << "\n";
            errorMessage << "Expected:\n";
            expected.CreateOuterAny(nullptr)->Accept(writer);
            errorMessage << "Actual:\n";
            actual.CreateOuterAny(nullptr)->Accept(writer);

            Assert::Fail(errorMessage.str());
        }
    }

    static void AreNotEqual(
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

        AreNotEqual(*expected, *actual, message);
    }

    static void AreNotEqual(
        const InnerTree::SyntaxNode& expected,
        const InnerTree::SyntaxNode& actual,
        const std::string& message)
    {
        if (expected == actual)
        {
            std::stringstream errorMessage;
            auto writer = SyntaxTreeWriter(errorMessage);
            errorMessage << message << "\n";
            errorMessage << "Expected:\n";
            expected.CreateOuterAny(nullptr)->Accept(writer);
            errorMessage << "Actual:\n";
            actual.CreateOuterAny(nullptr)->Accept(writer);

            Assert::Fail(errorMessage.str());
        }
    }

    static void AreEqual(
        const std::shared_ptr<const InnerTree::SyntaxNode>& expected,
        const std::shared_ptr<const OuterTree::SyntaxNode>& actual,
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
        const OuterTree::SyntaxNode& actual,
        const std::string& message)
    {
        auto expectedOuter = expected.CreateOuterAny(nullptr);
        if (*expectedOuter != actual)
        {
            std::stringstream errorMessage;
            auto writer = SyntaxTreeWriter(errorMessage);
            errorMessage << message << "\n";
            errorMessage << "Expected:\n";
            expectedOuter->Accept(writer);
            errorMessage << "Actual:\n";
            actual.Accept(writer);

            Assert::Fail(errorMessage.str());
        }
    }

    static void AreNotEqual(
        const std::shared_ptr<const InnerTree::SyntaxNode>& expected,
        const std::shared_ptr<const OuterTree::SyntaxNode>& actual,
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

        AreNotEqual(*expected, *actual, message);
    }

    static void AreNotEqual(
        const InnerTree::SyntaxNode& expected,
        const OuterTree::SyntaxNode& actual,
        const std::string& message)
    {
        auto expectedOuter = expected.CreateOuterAny(nullptr);
        if (*expectedOuter == actual)
        {
            std::stringstream errorMessage;
            auto writer = SyntaxTreeWriter(errorMessage);
            errorMessage << message << "\n";
            errorMessage << "Expected:\n";
            expectedOuter->Accept(writer);
            errorMessage << "Actual:\n";
            actual.Accept(writer);

            Assert::Fail(errorMessage.str());
        }
    }

    static void AreNotEqual(
        const std::shared_ptr<const InnerTree::SyntaxToken>& expected,
        const std::shared_ptr<const OuterTree::SyntaxToken>& actual,
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

        AreNotEqual(*expected, *actual, message);
    }

    static void AreNotEqual(
        const InnerTree::SyntaxToken& expected,
        const OuterTree::SyntaxToken& actual,
        const std::string& message)
    {
        auto expectedOuter = expected.CreateOuter(nullptr);
        if (*expectedOuter == actual)
        {
            std::stringstream errorMessage;
            auto writer = SyntaxTreeWriter(errorMessage);
            errorMessage << message << "\n";
            Assert::Fail(errorMessage.str());
        }
    }

    static void AreEqual(
        const std::shared_ptr<const InnerTree::SyntaxToken>& expected,
        const std::shared_ptr<const OuterTree::SyntaxToken>& actual,
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
        const InnerTree::SyntaxToken& expected,
        const OuterTree::SyntaxToken& actual,
        const std::string& message)
    {
        auto expectedOuter = expected.CreateOuter(nullptr);
        if (*expectedOuter != actual)
        {
            std::stringstream errorMessage;
            auto writer = SyntaxTreeWriter(errorMessage);
            errorMessage << message << "\n";
            Assert::Fail(errorMessage.str());
        }
    }

    template<typename TOuter, typename TInner>
    static void AreEqual(
        const InnerTree::SyntaxList<TInner>& expected,
        const OuterTree::SyntaxList<TOuter>& actual,
        const std::string& message)
    {
        std::shared_ptr<const OuterTree::SyntaxList<TOuter>> expectedOuter =
            expected.template CreateOuter<TOuter>(nullptr);
        if (*expectedOuter != actual)
        {
            std::stringstream errorMessage;
            auto writer = SyntaxTreeWriter(errorMessage);
            errorMessage << message << "\n";
            Assert::Fail(errorMessage.str());
        }
    }

    template<typename TOuter, typename TInner>
    static void AreEqual(
        const InnerTree::SyntaxSeparatorList<TInner>& expected,
        const OuterTree::SyntaxSeparatorList<TOuter>& actual,
        const std::string& message)
    {
        std::shared_ptr<const OuterTree::SyntaxSeparatorList<TOuter>> expectedOuter =
            expected.template CreateOuter<TOuter>(nullptr);
        if (*expectedOuter != actual)
        {
            std::stringstream errorMessage;
            auto writer = SyntaxTreeWriter(errorMessage);
            errorMessage << message << "\n";
            Assert::Fail(errorMessage.str());
        }
    }
};
} // namespace Soup::Syntax::UnitTests
