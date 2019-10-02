module Soup.Syntax.Parser;

using namespace Soup::Syntax;

/*static*/ std::shared_ptr<const SyntaxTree> SyntaxParser::Parse(const std::string& source)
{
	auto input = std::make_unique<antlr4::ANTLRInputStream>(source);
	return Parse(input.get());
}

/*static*/ std::shared_ptr<const SyntaxTree> SyntaxParser::Parse(std::istream& source)
{
	auto input = std::make_unique<antlr4::ANTLRInputStream>(source);
	return Parse(input.get());
}

/*static*/ void SyntaxParser::PrintAllTokens(const std::string& source)
{
	auto input = std::make_unique<antlr4::ANTLRInputStream>(source);
	PrintAllTokens(input.get());
}

/*static*/ void SyntaxParser::PrintAllTokens(std::istream& source)
{
	auto input = std::make_unique<antlr4::ANTLRInputStream>(source);
	PrintAllTokens(input.get());
}

/*static*/ std::shared_ptr<const SyntaxTree> SyntaxParser::Parse(antlr4::ANTLRInputStream* input)
{
	// Parse the file
	auto lexer = std::make_unique<CppLexer>(input);
	auto tokenStream = std::make_unique<antlr4::CommonTokenStream>(lexer.get());
	auto parser = std::make_unique<CppParser>(tokenStream.get());

	// Setup error handling
	auto lexerErrorListener = std::make_unique<LexerExceptionErrorListener>();
	lexer->removeErrorListeners();
	lexer->addErrorListener(lexerErrorListener.get());
	auto parserErrorListener = std::make_unique<ParserExceptionErrorListener>();
	parser->removeErrorListeners();
	parser->addErrorListener(parserErrorListener.get());

	// Create the final AST visitor
	auto visitor = std::make_unique<ASTCppParserVisitor>(tokenStream.get());

	// Parse the translation unit
	auto context = parser->translationUnit();

	// Convert the the abstract syntax tree
	auto node = std::any_cast<std::shared_ptr<const InnerTree::TranslationUnit>>(
		visitor->visit(context));

	return std::make_shared<const SyntaxTree>(std::move(node));
}

/*static*/ void SyntaxParser::PrintAllTokens(antlr4::ANTLRInputStream* input)
{
	// Parse the file
	auto lexer = std::make_unique<CppLexer>(input);
	auto tokenStream = std::make_unique<antlr4::CommonTokenStream>(lexer.get());

	auto tokenCount = tokenStream->size();
	std::cout << "Tokens: ";

	// Consume all of the tokens
	tokenStream->fill();
	for (auto token : tokenStream->getTokens())
	{
		std::cout << token->toString() << "\n";
	}

	std::cout << "\n";
}
