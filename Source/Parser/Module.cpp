module;
#include <memory>
#include <string>
export module SoupSyntaxParser;

import Antlr4Runtime;
import SoupSyntax;

// Parser
#include "Grammar/CppLexer.h"
#include "Grammar/CppParser.h"
#include "Grammar/CppParserBaseVisitor.h"
#include "Grammar/CppParserListener.h"
#include "Grammar/CppParserVisitor.h"
#include "ASTCppParserVisitor.h"
#include "LexerExceptionErrorListener.h"
#include "ParserExceptionErrorListener.h"
#include "SyntaxParser.h"
