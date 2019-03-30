#pragma once
#include "LexerTests.h"
#include "../RunTest.h"

TestState RunLexerTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::LexerTests>();
    TestState state = { 0, 0 };

    std::cout << "Running LexerTests:" << std::endl;

    std::cout << "SingleToken_Keyword" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("alignas", CppLexer::AlignAs); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("asm", CppLexer::Asm); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("auto", CppLexer::Auto); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("bool", CppLexer::Bool); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("break", CppLexer::Break); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("case", CppLexer::Case); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("catch", CppLexer::Catch); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("char", CppLexer::Char); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("char16_t", CppLexer::Char16); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("char32_t", CppLexer::Char32); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("class", CppLexer::Class); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("const", CppLexer::Const); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("constexpr", CppLexer::ConstExpr); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("const_cast", CppLexer::ConstCast); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("continue", CppLexer::Continue); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("decltype", CppLexer::DeclType); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("default", CppLexer::Default); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("delete", CppLexer::Delete); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("do", CppLexer::Do); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("double", CppLexer::Double); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("dynamic_cast", CppLexer::DynamicCast); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("else", CppLexer::Else); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("enum", CppLexer::Enum); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("explicit", CppLexer::Explicit); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("export", CppLexer::Export); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("extern", CppLexer::Extern); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("false", CppLexer::False); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("float", CppLexer::Float); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("for", CppLexer::For); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("friend", CppLexer::Friend); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("goto", CppLexer::GoTo); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("if", CppLexer::If); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("inline", CppLexer::Inline); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("int", CppLexer::Int); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("long", CppLexer::Long); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("mutable", CppLexer::Mutable); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("namespace", CppLexer::Namespace); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("new", CppLexer::New); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("noexcept", CppLexer::NoExcept); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("nullptr", CppLexer::Nullptr); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("operator", CppLexer::Operator); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("private", CppLexer::Private); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("protected", CppLexer::Protected); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("public", CppLexer::Public); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("register", CppLexer::Register); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("reinterpret_cast", CppLexer::ReinterpretCast); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("return", CppLexer::Return); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("short", CppLexer::Short); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("signed", CppLexer::Signed); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("sizeof", CppLexer::SizeOf); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("static", CppLexer::Static); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("static_assert", CppLexer::StaticAssert); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("static_cast", CppLexer::StaticCast); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("struct", CppLexer::Struct); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("switch", CppLexer::Switch); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("template", CppLexer::Template); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("this", CppLexer::This); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("thread_local", CppLexer::ThreadLocal); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("throw", CppLexer::Throw); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("true", CppLexer::True); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("try", CppLexer::Try); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("typedef", CppLexer::TypeDef); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("typeid", CppLexer::TypeId); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("typename", CppLexer::TypeName); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("union", CppLexer::Union); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("unsigned", CppLexer::Unsigned); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("using", CppLexer::Using); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("virtual", CppLexer::Virtual); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("void", CppLexer::Void); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("volatile", CppLexer::Volatile); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("wchar_t", CppLexer::WChar); });
    state += RunTest([&testClass]() { testClass->SingleToken_Keyword("while", CppLexer::While); });

    std::cout << "SingleToken_OperatorsAndPunctuation" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("{", CppLexer::OpenBrace); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("}", CppLexer::CloseBrace); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("[", CppLexer::OpenBracket); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("]", CppLexer::CloseBracket); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("(", CppLexer::OpenParenthesis); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(")", CppLexer::CloseParenthesis); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(";", CppLexer::Semicolon); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(":", CppLexer::Colon); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("...", CppLexer::Ellipsis); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("new", CppLexer::New); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("delete", CppLexer::Delete); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("?", CppLexer::QuestionMark); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("::", CppLexer::DoubleColon); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(".", CppLexer::Period); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(".*", CppLexer::PeriodAsterisk); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("+", CppLexer::Plus); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("-", CppLexer::Minus); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("*", CppLexer::Asterisk); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("/", CppLexer::ForwardSlash); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("%", CppLexer::Percent); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("^", CppLexer::Caret); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("&", CppLexer::Ampersand); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("|", CppLexer::VerticalBar); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("~", CppLexer::Tilde); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("!", CppLexer::ExclamationMark); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("=", CppLexer::Equal); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("<", CppLexer::LessThan); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(">", CppLexer::GreaterThan); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("+=", CppLexer::PlusEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("-=", CppLexer::MinusEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("*=", CppLexer::AsteriskEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("/=", CppLexer::ForwardSlashEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("%=", CppLexer::PercentEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("^=", CppLexer::CaretEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("&=", CppLexer::AmpersandEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("|=", CppLexer::VerticalBarEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("<<", CppLexer::DoubleLessThan); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(">>", CppLexer::DoubleGreaterThan); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("<<=", CppLexer::DoubleLessThanEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(">>=", CppLexer::DoubleGreaterThanEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("==", CppLexer::DoubleEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("!=", CppLexer::ExclamationMarkEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("<=", CppLexer::LessThanEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(">=", CppLexer::GreaterThanEqual); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("&&", CppLexer::DoubleAmpersand); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("||", CppLexer::DoubleVerticalBar); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("++", CppLexer::DoublePlus); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("--", CppLexer::DoubleMinus); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(",", CppLexer::Comma); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("->*", CppLexer::ArrowAsterisk); });
    state += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("->", CppLexer::Arrow); });

    std::cout << "SingleToken_OperatorsAndPunctuation" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_Zero("0"); });

    std::cout << "SingleToken_IntegerLiteral" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("1"); });
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("42"); });
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("052"); });
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("0x2a"); });
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("0X2A"); });
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("0b101010"); });
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("18446744073709550592ull"); });
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("18'446'744'073'709'550'592llu"); });
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("1844'6744'0737'0955'0592uL"); });
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("184467'440737'0'95505'92LLU"); });
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("0xDeAdBeEfU"); });
    state += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("0XdeadBEEFu"); });

    std::cout << "SingleToken_FloatingPointLiteral" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("0.0f"); });
    state += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("1.0"); });
    state += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("1'00.1f"); });
    state += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("0x1.2p3"); });
    state += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("58."); });
    state += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("4e2"); });
    state += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("123.456e-67"); });
    state += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral(".1E4f"); });
    state += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("0x10.1p0"); });

    std::cout << "SingleToken_CharacterLiteral" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("'1'"); });
    state += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("'\\0'"); });
    state += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("L'A'"); });
    state += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("u'A'"); });
    state += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("u8'A'"); });
    state += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("U'A'"); });

    std::cout << "SingleToken_StringLiteral" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("\"\""); });
    state += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("\" \""); });
    state += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("\"Some cool text!\tYay.\""); });
    state += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("U\" \""); });
    state += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("u\" \""); });
    state += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("u8\" \""); });
    state += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("L\" \""); });

    std::cout << "SingleToken_UserDefinedIntegerLiteral" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("12_km"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("123_mytype"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("0x123ABC_print"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("10if"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("2h"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("33m"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("15s"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("20000ms"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("100'000us"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("1ns"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("1y"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("1d"); });

    std::cout << "SingleToken_UserDefinedFloatingPointLiteral" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedFloatingPointLiteral("2.2_km"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedFloatingPointLiteral("0.5_Pa"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedFloatingPointLiteral("90.0_deg"); });

    std::cout << "SingleToken_UserDefinedCharacterLiteral" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedCharacterLiteral("'c'_X"); });

    std::cout << "SingleToken_UserDefinedStringLiteral" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedStringLiteral("\"abc\"_"); });
    state += RunTest([&testClass]() { testClass->SingleToken_UserDefinedStringLiteral("\"xyz\"_M"); });

    std::cout << "SingleToken_BlockComment" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_BlockComment("/**/"); });
    state += RunTest([&testClass]() { testClass->SingleToken_BlockComment("/* */"); });
    state += RunTest([&testClass]() { testClass->SingleToken_BlockComment("/* Hey a comment\n On many lines\n */"); });

    std::cout << "SingleToken_LineComment" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_LineComment("//"); });
    state += RunTest([&testClass]() { testClass->SingleToken_LineComment("// "); });
    state += RunTest([&testClass]() { testClass->SingleToken_LineComment("// A longer comment text"); });

    std::cout << "SingleToken_Identifier" << std::endl;
    state += RunTest([&testClass]() { testClass->SingleToken_Identifier("a"); });
    state += RunTest([&testClass]() { testClass->SingleToken_Identifier("x"); });
    state += RunTest([&testClass]() { testClass->SingleToken_Identifier("myVariable"); });
    state += RunTest([&testClass]() { testClass->SingleToken_Identifier("ClassName"); });
    state += RunTest([&testClass]() { testClass->SingleToken_Identifier("NameSpace"); });

    return state;
}