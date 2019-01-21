
// Generated from Grammar\CppLexer.g4 by ANTLR 4.7.1

#pragma once

export class  CppLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, Whitespace = 3, Newline = 4, AlignAs = 5, 
    AlignOf = 6, Asm = 7, Auto = 8, Bool = 9, Break = 10, Case = 11, Catch = 12, 
    Char = 13, Char16 = 14, Char32 = 15, Class = 16, Const = 17, ConstExpr = 18, 
    ConstCast = 19, Continue = 20, DeclType = 21, Default = 22, Delete = 23, 
    Do = 24, Double = 25, DynamicCast = 26, Else = 27, Enum = 28, Explicit = 29, 
    Export = 30, Extern = 31, False = 32, Float = 33, For = 34, Friend = 35, 
    GoTo = 36, If = 37, Inline = 38, Int = 39, Long = 40, Mutable = 41, 
    Namespace = 42, New = 43, NoExcept = 44, Nullptr = 45, Operator = 46, 
    Private = 47, Protected = 48, Public = 49, Register = 50, ReinterpretCast = 51, 
    Return = 52, Short = 53, Signed = 54, SizeOf = 55, Static = 56, StaticAssert = 57, 
    StaticCast = 58, Struct = 59, Switch = 60, Template = 61, This = 62, 
    ThreadLocal = 63, Throw = 64, True = 65, Try = 66, TypeDef = 67, TypeId = 68, 
    TypeName = 69, Union = 70, Unsigned = 71, Using = 72, Virtual = 73, 
    Void = 74, Volatile = 75, WChar = 76, While = 77, Override = 78, Final = 79, 
    LeftBrace = 80, RightBrace = 81, LeftBracket = 82, RightBracket = 83, 
    LeftParenthesis = 84, RightParenthesis = 85, Semicolon = 86, Colon = 87, 
    Ellipsis = 88, QuestionMark = 89, DoubleColon = 90, Period = 91, PeriodAsterisk = 92, 
    Plus = 93, Minus = 94, Asterisk = 95, ForwardSlash = 96, Percent = 97, 
    Caret = 98, Ampersand = 99, VerticalBar = 100, Tilde = 101, ExclamationMark = 102, 
    Equal = 103, LessThan = 104, GreaterThan = 105, PlusEqual = 106, MinusEqual = 107, 
    AsteriskEqual = 108, ForwardSlashEqual = 109, PercentEqual = 110, CaretEqual = 111, 
    AmpersandEqual = 112, VerticalBarEqual = 113, DoubleLessThan = 114, 
    DoubleGreaterThan = 115, DoubleLessThanEqual = 116, DoubleGreaterThanEqual = 117, 
    DoubleEqual = 118, ExclamationMarkEqual = 119, LessThanEqual = 120, 
    GreaterThanEqual = 121, DoubleAmpersand = 122, DoubleVerticalBar = 123, 
    DoublePlus = 124, DoubleMinus = 125, Comma = 126, ArrowAsterisk = 127, 
    Arrow = 128, Zero = 129, IntegerLiteral = 130, FloatingPointLiteral = 131, 
    CharacterLiteral = 132, StringLiteral = 133, UserDefinedIntegerLiteral = 134, 
    UserDefinedFloatingPointLiteral = 135, UserDefinedCharacterLiteral = 136, 
    UserDefinedStringLiteral = 137, Identifier = 138
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

