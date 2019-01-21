import std.core;
import Antlr4.Runtime;
import SoupSyntax;

#include "LexerTests.h"

using namespace Soup::Syntax::UnitTests;

int RunTest(std::function<void(void)> test)
{
  try
  {
    test();
    std::wcout << L"Tests PASS!" << std::endl;
    return 0;
  }
  catch (...)
  {
    std::wcout << L"Tests FAIL!" << std::endl;
    return 1;
  }
}

int RunLexerTests()
{
  auto lexerTests = std::make_unique<LexerTests>();
  int failedCount = 0;

  std::wcout << L"Running LexerTests:" << std::endl;

  std::wcout << L"SingleToken_Keywoard" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("alignas", CppLexer::AlignAs); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("asm", CppLexer::Asm); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("auto", CppLexer::Auto); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("bool", CppLexer::Bool); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("break", CppLexer::Break); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("case", CppLexer::Case); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("catch", CppLexer::Catch); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("char", CppLexer::Char); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("char16_t", CppLexer::Char16); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("char32_t", CppLexer::Char32); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("class", CppLexer::Class); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("const", CppLexer::Const); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("constexpr", CppLexer::ConstExpr); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("const_cast", CppLexer::ConstCast); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("continue", CppLexer::Continue); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("decltype", CppLexer::DeclType); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("default", CppLexer::Default); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("delete", CppLexer::Delete); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("do", CppLexer::Do); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("double", CppLexer::Double); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("dynamic_cast", CppLexer::DynamicCast); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("else", CppLexer::Else); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("enum", CppLexer::Enum); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("explicit", CppLexer::Explicit); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("export", CppLexer::Export); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("extern", CppLexer::Extern); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("false", CppLexer::False); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("float", CppLexer::Float); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("for", CppLexer::For); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("friend", CppLexer::Friend); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("goto", CppLexer::GoTo); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("if", CppLexer::If); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("inline", CppLexer::Inline); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("int", CppLexer::Int); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("long", CppLexer::Long); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("mutable", CppLexer::Mutable); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("namespace", CppLexer::Namespace); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("new", CppLexer::New); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("noexcept", CppLexer::NoExcept); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("nullptr", CppLexer::Nullptr); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("operator", CppLexer::Operator); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("private", CppLexer::Private); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("protected", CppLexer::Protected); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("public", CppLexer::Public); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("register", CppLexer::Register); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("reinterpret_cast", CppLexer::ReinterpretCast); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("return", CppLexer::Return); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("short", CppLexer::Short); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("signed", CppLexer::Signed); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("sizeof", CppLexer::SizeOf); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("static", CppLexer::Static); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("static_assert", CppLexer::StaticAssert); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("static_cast", CppLexer::StaticCast); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("struct", CppLexer::Struct); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("switch", CppLexer::Switch); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("template", CppLexer::Template); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("this", CppLexer::This); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("thread_local", CppLexer::ThreadLocal); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("throw", CppLexer::Throw); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("true", CppLexer::True); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("try", CppLexer::Try); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("typedef", CppLexer::TypeDef); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("typeid", CppLexer::TypeId); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("typename", CppLexer::TypeName); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("union", CppLexer::Union); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("unsigned", CppLexer::Unsigned); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("using", CppLexer::Using); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("virtual", CppLexer::Virtual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("void", CppLexer::Void); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("volatile", CppLexer::Volatile); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("wchar_t", CppLexer::WChar); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Keywoard("while", CppLexer::While); });

  std::wcout << L"SingleToken_OperatorsAndPunctuation" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("{", CppLexer::LeftBrace); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("}", CppLexer::RightBrace); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("[", CppLexer::LeftBracket); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("]", CppLexer::RightBracket); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("(", CppLexer::LeftParenthesis); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation(")", CppLexer::RightParenthesis); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation(";", CppLexer::Semicolon); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation(":", CppLexer::Colon); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("...", CppLexer::Ellipsis); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("new", CppLexer::New); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("delete", CppLexer::Delete); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("?", CppLexer::QuestionMark); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("::", CppLexer::DoubleColon); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation(".", CppLexer::Period); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation(".*", CppLexer::PeriodAsterisk); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("+", CppLexer::Plus); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("-", CppLexer::Minus); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("*", CppLexer::Asterisk); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("/", CppLexer::ForwardSlash); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("%", CppLexer::Percent); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("^", CppLexer::Caret); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("&", CppLexer::Ampersand); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("|", CppLexer::VerticalBar); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("~", CppLexer::Tilde); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("!", CppLexer::ExclamationMark); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("=", CppLexer::Equal); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("<", CppLexer::LessThan); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation(">", CppLexer::GreaterThan); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("+=", CppLexer::PlusEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("-=", CppLexer::MinusEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("*=", CppLexer::AsteriskEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("/=", CppLexer::ForwardSlashEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("%=", CppLexer::PercentEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("^=", CppLexer::CaretEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("&=", CppLexer::AmpersandEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("|=", CppLexer::VerticalBarEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("<<", CppLexer::DoubleLessThan); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation(">>", CppLexer::DoubleGreaterThan); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("<<=", CppLexer::DoubleLessThanEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation(">>=", CppLexer::DoubleGreaterThanEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("==", CppLexer::DoubleEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("!=", CppLexer::ExclamationMarkEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("<=", CppLexer::LessThanEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation(">=", CppLexer::GreaterThanEqual); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("&&", CppLexer::DoubleAmpersand); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("||", CppLexer::DoubleVerticalBar); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("++", CppLexer::DoublePlus); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("--", CppLexer::DoubleMinus); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation(",", CppLexer::Comma); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("->*", CppLexer::ArrowAsterisk); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_OperatorsAndPunctuation("->", CppLexer::Arrow); });

  std::wcout << L"SingleToken_OperatorsAndPunctuation" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Zero("0"); });

  std::wcout << L"SingleToken_IntegerLiteral" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("1"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("42"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("052"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("0x2a"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("0X2A"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("0b101010"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("18446744073709550592ull"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("18'446'744'073'709'550'592llu"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("1844'6744'0737'0955'0592uLL"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("184467'440737'0'95505'92LLU"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("0xDeAdBeEfU"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_IntegerLiteral("0XdeadBEEFu"); });

  std::wcout << L"SingleToken_FloatingPointLiteral" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_FloatingPointLiteral("0.0f"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_FloatingPointLiteral("1.0"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_FloatingPointLiteral("1'00.1f"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_FloatingPointLiteral("0x1.2p3"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_FloatingPointLiteral("58."); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_FloatingPointLiteral("4e2"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_FloatingPointLiteral("123.456e-67"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_FloatingPointLiteral(".1E4f"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_FloatingPointLiteral("0x10.1p0"); });

  std::wcout << L"SingleToken_CharacterLiteral" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_CharacterLiteral("'1'"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_CharacterLiteral("'\\0'"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_CharacterLiteral("L'A'"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_CharacterLiteral("u'A'"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_CharacterLiteral("u8'A'"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_CharacterLiteral("U'A'"); });

  std::wcout << L"SingleToken_StringLiteral" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_StringLiteral("\"\""); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_StringLiteral("\" \""); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_StringLiteral("\"Some cool text!\tYay.\""); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_StringLiteral("U\" \""); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_StringLiteral("u\" \""); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_StringLiteral("u8\" \""); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_StringLiteral("L\" \""); });

  std::wcout << L"SingleToken_UserDefinedIntegerLiteral" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("12_km"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("123_mytype"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("0x123ABC_print"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("10if"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("2h"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("33m"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("15s"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("20000ms"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("100'000us"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("1ns"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("1y"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedIntegerLiteral("1d"); });

  std::wcout << L"SingleToken_UserDefinedFloatingPointLiteral" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedFloatingPointLiteral("2.2_km"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedFloatingPointLiteral("0.5_Pa"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedFloatingPointLiteral("90.0_deg"); });

  std::wcout << L"SingleToken_UserDefinedCharacterLiteral" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedCharacterLiteral("'c'_X"); });

  std::wcout << L"SingleToken_UserDefinedStringLiteral" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedStringLiteral("\"abc\"_L"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_UserDefinedStringLiteral("\"xyz\"_M"); });

  std::wcout << L"SingleToken_BlockComment" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_BlockComment("/**/"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_BlockComment("/* */"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_BlockComment("/* Hey a comment\n On many lines\n */"); });

  std::wcout << L"SingleToken_LineComment" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_LineComment("//"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_LineComment("// "); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_LineComment("// A longer comment text"); });

  std::wcout << L"SingleToken_Identifier" << std::endl;
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Identifier("a"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Identifier("x"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Identifier("myVariable"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Identifier("ClassName"); });
  failedCount += RunTest([&lexerTests]() { lexerTests->SingleToken_Identifier("NameSpace"); });

  return failedCount;
}

int main()
{
  std::wcout << L"Running Tests..." << std::endl;

  int failedCount = 0;
  failedCount += RunLexerTests();

  std::wcout << failedCount << L" FAILED." << std::endl;
  return 0;
}