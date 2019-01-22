#pragma once
#include "LexerTests.h"
#include "RunTest.h"

int RunLexerTests()
{
    auto testClass = std::make_unique<Soup::Syntax::UnitTests::LexerTests>();
    int failedCount = 0;

    std::wcout << L"Running LexerTests:" << std::endl;

    std::wcout << L"SingleToken_Keywoard" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("alignas", CppLexer::AlignAs); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("asm", CppLexer::Asm); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("auto", CppLexer::Auto); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("bool", CppLexer::Bool); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("break", CppLexer::Break); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("case", CppLexer::Case); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("catch", CppLexer::Catch); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("char", CppLexer::Char); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("char16_t", CppLexer::Char16); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("char32_t", CppLexer::Char32); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("class", CppLexer::Class); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("const", CppLexer::Const); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("constexpr", CppLexer::ConstExpr); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("const_cast", CppLexer::ConstCast); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("continue", CppLexer::Continue); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("decltype", CppLexer::DeclType); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("default", CppLexer::Default); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("delete", CppLexer::Delete); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("do", CppLexer::Do); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("double", CppLexer::Double); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("dynamic_cast", CppLexer::DynamicCast); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("else", CppLexer::Else); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("enum", CppLexer::Enum); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("explicit", CppLexer::Explicit); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("export", CppLexer::Export); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("extern", CppLexer::Extern); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("false", CppLexer::False); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("float", CppLexer::Float); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("for", CppLexer::For); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("friend", CppLexer::Friend); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("goto", CppLexer::GoTo); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("if", CppLexer::If); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("inline", CppLexer::Inline); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("int", CppLexer::Int); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("long", CppLexer::Long); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("mutable", CppLexer::Mutable); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("namespace", CppLexer::Namespace); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("new", CppLexer::New); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("noexcept", CppLexer::NoExcept); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("nullptr", CppLexer::Nullptr); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("operator", CppLexer::Operator); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("private", CppLexer::Private); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("protected", CppLexer::Protected); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("public", CppLexer::Public); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("register", CppLexer::Register); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("reinterpret_cast", CppLexer::ReinterpretCast); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("return", CppLexer::Return); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("short", CppLexer::Short); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("signed", CppLexer::Signed); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("sizeof", CppLexer::SizeOf); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("static", CppLexer::Static); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("static_assert", CppLexer::StaticAssert); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("static_cast", CppLexer::StaticCast); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("struct", CppLexer::Struct); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("switch", CppLexer::Switch); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("template", CppLexer::Template); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("this", CppLexer::This); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("thread_local", CppLexer::ThreadLocal); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("throw", CppLexer::Throw); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("true", CppLexer::True); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("try", CppLexer::Try); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("typedef", CppLexer::TypeDef); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("typeid", CppLexer::TypeId); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("typename", CppLexer::TypeName); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("union", CppLexer::Union); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("unsigned", CppLexer::Unsigned); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("using", CppLexer::Using); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("virtual", CppLexer::Virtual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("void", CppLexer::Void); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("volatile", CppLexer::Volatile); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("wchar_t", CppLexer::WChar); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Keywoard("while", CppLexer::While); });

    std::wcout << L"SingleToken_OperatorsAndPunctuation" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("{", CppLexer::LeftBrace); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("}", CppLexer::RightBrace); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("[", CppLexer::LeftBracket); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("]", CppLexer::RightBracket); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("(", CppLexer::LeftParenthesis); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(")", CppLexer::RightParenthesis); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(";", CppLexer::Semicolon); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(":", CppLexer::Colon); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("...", CppLexer::Ellipsis); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("new", CppLexer::New); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("delete", CppLexer::Delete); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("?", CppLexer::QuestionMark); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("::", CppLexer::DoubleColon); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(".", CppLexer::Period); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(".*", CppLexer::PeriodAsterisk); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("+", CppLexer::Plus); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("-", CppLexer::Minus); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("*", CppLexer::Asterisk); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("/", CppLexer::ForwardSlash); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("%", CppLexer::Percent); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("^", CppLexer::Caret); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("&", CppLexer::Ampersand); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("|", CppLexer::VerticalBar); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("~", CppLexer::Tilde); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("!", CppLexer::ExclamationMark); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("=", CppLexer::Equal); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("<", CppLexer::LessThan); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(">", CppLexer::GreaterThan); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("+=", CppLexer::PlusEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("-=", CppLexer::MinusEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("*=", CppLexer::AsteriskEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("/=", CppLexer::ForwardSlashEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("%=", CppLexer::PercentEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("^=", CppLexer::CaretEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("&=", CppLexer::AmpersandEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("|=", CppLexer::VerticalBarEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("<<", CppLexer::DoubleLessThan); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(">>", CppLexer::DoubleGreaterThan); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("<<=", CppLexer::DoubleLessThanEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(">>=", CppLexer::DoubleGreaterThanEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("==", CppLexer::DoubleEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("!=", CppLexer::ExclamationMarkEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("<=", CppLexer::LessThanEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(">=", CppLexer::GreaterThanEqual); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("&&", CppLexer::DoubleAmpersand); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("||", CppLexer::DoubleVerticalBar); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("++", CppLexer::DoublePlus); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("--", CppLexer::DoubleMinus); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation(",", CppLexer::Comma); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("->*", CppLexer::ArrowAsterisk); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_OperatorsAndPunctuation("->", CppLexer::Arrow); });

    std::wcout << L"SingleToken_OperatorsAndPunctuation" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Zero("0"); });

    std::wcout << L"SingleToken_IntegerLiteral" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("1"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("42"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("052"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("0x2a"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("0X2A"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("0b101010"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("18446744073709550592ull"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("18'446'744'073'709'550'592llu"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("1844'6744'0737'0955'0592uLL"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("184467'440737'0'95505'92LLU"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("0xDeAdBeEfU"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_IntegerLiteral("0XdeadBEEFu"); });

    std::wcout << L"SingleToken_FloatingPointLiteral" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("0.0f"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("1.0"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("1'00.1f"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("0x1.2p3"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("58."); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("4e2"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("123.456e-67"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral(".1E4f"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_FloatingPointLiteral("0x10.1p0"); });

    std::wcout << L"SingleToken_CharacterLiteral" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("'1'"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("'\\0'"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("L'A'"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("u'A'"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("u8'A'"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_CharacterLiteral("U'A'"); });

    std::wcout << L"SingleToken_StringLiteral" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("\"\""); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("\" \""); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("\"Some cool text!\tYay.\""); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("U\" \""); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("u\" \""); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("u8\" \""); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_StringLiteral("L\" \""); });

    std::wcout << L"SingleToken_UserDefinedIntegerLiteral" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("12_km"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("123_mytype"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("0x123ABC_print"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("10if"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("2h"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("33m"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("15s"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("20000ms"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("100'000us"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("1ns"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("1y"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedIntegerLiteral("1d"); });

    std::wcout << L"SingleToken_UserDefinedFloatingPointLiteral" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedFloatingPointLiteral("2.2_km"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedFloatingPointLiteral("0.5_Pa"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedFloatingPointLiteral("90.0_deg"); });

    std::wcout << L"SingleToken_UserDefinedCharacterLiteral" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedCharacterLiteral("'c'_X"); });

    std::wcout << L"SingleToken_UserDefinedStringLiteral" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedStringLiteral("\"abc\"_L"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_UserDefinedStringLiteral("\"xyz\"_M"); });

    std::wcout << L"SingleToken_BlockComment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_BlockComment("/**/"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_BlockComment("/* */"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_BlockComment("/* Hey a comment\n On many lines\n */"); });

    std::wcout << L"SingleToken_LineComment" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_LineComment("//"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_LineComment("// "); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_LineComment("// A longer comment text"); });

    std::wcout << L"SingleToken_Identifier" << std::endl;
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Identifier("a"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Identifier("x"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Identifier("myVariable"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Identifier("ClassName"); });
    failedCount += RunTest([&testClass]() { testClass->SingleToken_Identifier("NameSpace"); });

    return failedCount;
}