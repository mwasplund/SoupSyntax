
// Generated from Grammar\CppLexer.g4 by ANTLR 4.7.1

#pragma once


//#include "antlr4-runtime.h"




export class  CppLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, Whitespace = 3, Preprocessor = 4, 
    Newline = 5, AlignAs = 6, AlignOf = 7, Asm = 8, Auto = 9, Bool = 10, 
    Break = 11, Case = 12, Catch = 13, Char = 14, Char8 = 15, Char16 = 16, 
    Char32 = 17, Class = 18, Const = 19, ConstExpr = 20, ConstCast = 21, 
    Continue = 22, DeclType = 23, Default = 24, Delete = 25, Do = 26, Double = 27, 
    DynamicCast = 28, Else = 29, Enum = 30, Explicit = 31, Export = 32, 
    Extern = 33, False = 34, Float = 35, For = 36, Friend = 37, GoTo = 38, 
    If = 39, Inline = 40, Int = 41, Long = 42, Mutable = 43, Namespace = 44, 
    New = 45, NoExcept = 46, Nullptr = 47, Operator = 48, Private = 49, 
    Protected = 50, Public = 51, Register = 52, ReinterpretCast = 53, Return = 54, 
    Short = 55, Signed = 56, SizeOf = 57, Static = 58, StaticAssert = 59, 
    StaticCast = 60, Struct = 61, Switch = 62, Template = 63, This = 64, 
    ThreadLocal = 65, Throw = 66, True = 67, Try = 68, TypeDef = 69, TypeId = 70, 
    TypeName = 71, Union = 72, Unsigned = 73, Using = 74, Virtual = 75, 
    Void = 76, Volatile = 77, WChar = 78, While = 79, Override = 80, Final = 81, 
    OpenBrace = 82, CloseBrace = 83, OpenBracket = 84, CloseBracket = 85, 
    OpenParenthesis = 86, CloseParenthesis = 87, Semicolon = 88, Colon = 89, 
    Ellipsis = 90, QuestionMark = 91, DoubleColon = 92, Period = 93, PeriodAsterisk = 94, 
    Plus = 95, Minus = 96, Asterisk = 97, ForwardSlash = 98, Percent = 99, 
    Caret = 100, Ampersand = 101, VerticalBar = 102, Tilde = 103, ExclamationMark = 104, 
    Equal = 105, LessThan = 106, GreaterThan = 107, PlusEqual = 108, MinusEqual = 109, 
    AsteriskEqual = 110, ForwardSlashEqual = 111, PercentEqual = 112, CaretEqual = 113, 
    AmpersandEqual = 114, VerticalBarEqual = 115, DoubleLessThan = 116, 
    DoubleLessThanEqual = 117, DoubleGreaterThanEqual = 118, DoubleEqual = 119, 
    ExclamationMarkEqual = 120, LessThanEqual = 121, GreaterThanEqual = 122, 
    DoubleAmpersand = 123, DoubleVerticalBar = 124, DoublePlus = 125, DoubleMinus = 126, 
    Comma = 127, ArrowAsterisk = 128, Arrow = 129, Zero = 130, IntegerLiteral = 131, 
    FloatingPointLiteral = 132, CharacterLiteral = 133, StringLiteral = 134, 
    UserDefinedIntegerLiteral = 135, UserDefinedFloatingPointLiteral = 136, 
    UserDefinedCharacterLiteral = 137, UserDefinedStringLiteral = 138, Identifier = 139
  };

  enum {
    TRIVIA = 2
  };

  CppLexer(antlr4::CharStream *input);
  ~CppLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

