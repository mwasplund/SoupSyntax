
// Generated from Grammar\CppLexer.g4 by ANTLR 4.7.1

#pragma once


//#include "antlr4-runtime.h"




export class  CppLexer : public antlr4::Lexer {
public:
  enum {
    BlockComment = 1, LineComment = 2, Whitespace = 3, Preprocessor = 4, 
    Newline = 5, AlignAs = 6, AlignOf = 7, Asm = 8, Auto = 9, Bool = 10, 
    Break = 11, Case = 12, Catch = 13, Char = 14, Char16 = 15, Char32 = 16, 
    Class = 17, Const = 18, ConstExpr = 19, ConstCast = 20, Continue = 21, 
    DeclType = 22, Default = 23, Delete = 24, Do = 25, Double = 26, DynamicCast = 27, 
    Else = 28, Enum = 29, Explicit = 30, Export = 31, Extern = 32, False = 33, 
    Float = 34, For = 35, Friend = 36, GoTo = 37, If = 38, Inline = 39, 
    Int = 40, Long = 41, Mutable = 42, Namespace = 43, New = 44, NoExcept = 45, 
    Nullptr = 46, Operator = 47, Private = 48, Protected = 49, Public = 50, 
    Register = 51, ReinterpretCast = 52, Return = 53, Short = 54, Signed = 55, 
    SizeOf = 56, Static = 57, StaticAssert = 58, StaticCast = 59, Struct = 60, 
    Switch = 61, Template = 62, This = 63, ThreadLocal = 64, Throw = 65, 
    True = 66, Try = 67, TypeDef = 68, TypeId = 69, TypeName = 70, Union = 71, 
    Unsigned = 72, Using = 73, Virtual = 74, Void = 75, Volatile = 76, WChar = 77, 
    While = 78, Override = 79, Final = 80, OpenBrace = 81, CloseBrace = 82, 
    OpenBracket = 83, CloseBracket = 84, OpenParenthesis = 85, CloseParenthesis = 86, 
    Semicolon = 87, Colon = 88, Ellipsis = 89, QuestionMark = 90, DoubleColon = 91, 
    Period = 92, PeriodAsterisk = 93, Plus = 94, Minus = 95, Asterisk = 96, 
    ForwardSlash = 97, Percent = 98, Caret = 99, Ampersand = 100, VerticalBar = 101, 
    Tilde = 102, ExclamationMark = 103, Equal = 104, LessThan = 105, GreaterThan = 106, 
    PlusEqual = 107, MinusEqual = 108, AsteriskEqual = 109, ForwardSlashEqual = 110, 
    PercentEqual = 111, CaretEqual = 112, AmpersandEqual = 113, VerticalBarEqual = 114, 
    DoubleLessThan = 115, DoubleLessThanEqual = 116, DoubleGreaterThanEqual = 117, 
    DoubleEqual = 118, ExclamationMarkEqual = 119, LessThanEqual = 120, 
    GreaterThanEqual = 121, DoubleAmpersand = 122, DoubleVerticalBar = 123, 
    DoublePlus = 124, DoubleMinus = 125, Comma = 126, ArrowAsterisk = 127, 
    Arrow = 128, Zero = 129, IntegerLiteral = 130, FloatingPointLiteral = 131, 
    CharacterLiteral = 132, StringLiteral = 133, UserDefinedIntegerLiteral = 134, 
    UserDefinedFloatingPointLiteral = 135, UserDefinedCharacterLiteral = 136, 
    UserDefinedStringLiteral = 137, Identifier = 138
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

