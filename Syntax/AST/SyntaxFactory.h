
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax factory
    /// </summary>
    // TODO: Test coverage for validation of input
    export class SyntaxFactory
    {
    public:
        /// <summary>
        /// Create a BinaryExpression
        /// </summary>
        static std::shared_ptr<const BinaryExpression> CreateBinaryExpression(
            BinaryOperator binaryOperator,
            std::shared_ptr<const Expression> leftOperand,
            std::shared_ptr<const SyntaxToken> operatorToken,
            std::shared_ptr<const Expression> rightOperand)
        {
            if (leftOperand == nullptr)
                throw std::runtime_error("ArgumentNull - leftOperand");
            if (operatorToken == nullptr)
                throw std::runtime_error("ArgumentNull - operatorToken");
            if (rightOperand == nullptr)
                throw std::runtime_error("ArgumentNull - rightOperand");

            return std::shared_ptr<const BinaryExpression>(
                new BinaryExpression(
                    binaryOperator,
                    std::move(leftOperand),
                    std::move(operatorToken),
                    std::move(rightOperand)));
        }

        /// <summary>
        /// Create a ClassDeclaration
        /// </summary>
        static std::shared_ptr<const ClassDeclaration> CreateClassDeclaration(
            std::shared_ptr<const SyntaxToken> classToken,
            std::shared_ptr<const SyntaxToken> identifierToken,
            std::shared_ptr<const SyntaxToken> openBraceToken,
            std::shared_ptr<const SyntaxList<Declaration>> memberDeclarations,
            std::shared_ptr<const SyntaxToken> closeBraceToken)
        {
            // Note: The identifier token is optional
            if (classToken == nullptr)
                throw std::runtime_error("ArgumentNull - classToken");
            if (openBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - openBraceToken");
            if (memberDeclarations == nullptr)
                throw std::runtime_error("ArgumentNull - memberDeclarations");
            if (closeBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeBraceToken");

            return std::shared_ptr<const ClassDeclaration>(
                new ClassDeclaration(
                    std::move(classToken),
                    std::move(identifierToken),
                    std::move(openBraceToken),
                    std::move(memberDeclarations),
                    std::move(closeBraceToken)));
        }

        /// <summary>
        /// Create a CompoundStatement
        /// </summary>
        static std::shared_ptr<const CompoundStatement> CreateCompoundStatement(
            std::shared_ptr<const SyntaxToken> openBraceToken,
            std::vector<std::shared_ptr<const Statement>> statements,
            std::shared_ptr<const SyntaxToken> closeBraceToken)
        {
            if (openBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - openBraceToken");
            if (closeBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeBraceToken");

            return std::shared_ptr<const CompoundStatement>(
                new CompoundStatement(
                    std::move(openBraceToken),
                    std::move(statements),
                    std::move(closeBraceToken)));
        }

        /// <summary>
        /// Create a DeclarationSpecifier
        /// Overload that excludes optional leading and trailing modifiers
        /// </summary>
        static std::shared_ptr<const DeclarationSpecifier> CreateDeclarationSpecifier(
            std::shared_ptr<const SyntaxNode> typeSpecifier)
        {
            // Note: both the leading and trailing modifiers are optional
            if (typeSpecifier == nullptr)
                throw std::runtime_error("ArgumentNull - typeSpecifier");

            return std::shared_ptr<const DeclarationSpecifier>(
                new DeclarationSpecifier(
                    {},
                    std::move(typeSpecifier),
                    {}));
        }

        /// <summary>
        /// Create a DeclarationSpecifier
        /// </summary>
        static std::shared_ptr<const DeclarationSpecifier> CreateDeclarationSpecifier(
            std::vector<std::shared_ptr<const SyntaxToken>> leadingModifiers,
            std::shared_ptr<const SyntaxNode> typeSpecifier,
            std::vector<std::shared_ptr<const SyntaxToken>> trailingModifiers)
        {
            // Note: both the leading and trailing modifiers are optional
            if (typeSpecifier == nullptr)
                throw std::runtime_error("ArgumentNull - typeSpecifier");

            return std::shared_ptr<const DeclarationSpecifier>(
                new DeclarationSpecifier(
                    std::move(leadingModifiers),
                    std::move(typeSpecifier),
                    std::move(trailingModifiers)));
        }

        /// <summary>
        /// Create a DefaultFunctionBody
        /// </summary>
        static std::shared_ptr<const DefaultFunctionBody> CreateDefaultFunctionBody(
            std::shared_ptr<const SyntaxToken> equalToken,
            std::shared_ptr<const SyntaxToken> defaultToken,
            std::shared_ptr<const SyntaxToken> semicolonToken)
        {
            if (equalToken == nullptr)
                throw std::runtime_error("ArgumentNull - equalToken");
            if (defaultToken == nullptr)
                throw std::runtime_error("ArgumentNull - defaultToken");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            return std::shared_ptr<const DefaultFunctionBody>(
                new DefaultFunctionBody(
                    std::move(equalToken),
                    std::move(defaultToken),
                    std::move(semicolonToken)));
        }

        /// <summary>
        /// Create a DeleteFunctionBody
        /// </summary>
        static std::shared_ptr<const DeleteFunctionBody> CreateDeleteFunctionBody(
            std::shared_ptr<const SyntaxToken> equalToken,
            std::shared_ptr<const SyntaxToken> deleteToken,
            std::shared_ptr<const SyntaxToken> semicolonToken)
        {
            if (equalToken == nullptr)
                throw std::runtime_error("ArgumentNull - equalToken");
            if (deleteToken == nullptr)
                throw std::runtime_error("ArgumentNull - deleteToken");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            return std::shared_ptr<const DeleteFunctionBody>(
                new DeleteFunctionBody(
                    std::move(equalToken),
                    std::move(deleteToken),
                    std::move(semicolonToken)));
        }

        /// <summary>
        /// Create a ElseClause
        /// </summary>
        static std::shared_ptr<const ElseClause> CreateElseClause(
            std::shared_ptr<const SyntaxToken> elseToken,
            std::shared_ptr<const Statement> statement)
        {
            if (elseToken == nullptr)
                throw std::runtime_error("ArgumentNull - elseToken");
            if (statement == nullptr)
                throw std::runtime_error("ArgumentNull - statement");

            return std::shared_ptr<const ElseClause>(
                new ElseClause(
                    std::move(elseToken),
                    std::move(statement)));
        }

        /// <summary>
        /// Create a EmptyDeclaration
        /// </summary>
        static std::shared_ptr<const EmptyDeclaration> CreateEmptyDeclaration(
            std::shared_ptr<const SyntaxToken> semicolonToken)
        {
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            return std::shared_ptr<const EmptyDeclaration>(
                new EmptyDeclaration(
                    std::move(semicolonToken)));
        }

        /// <summary>
        /// Create a EmptyStatement
        /// </summary>
        static std::shared_ptr<const EmptyStatement> CreateEmptyStatement(
            std::shared_ptr<const SyntaxToken> semicolonToken)
        {
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            return std::shared_ptr<const EmptyStatement>(
                new EmptyStatement(
                    std::move(semicolonToken)));
        }

        /// <summary>
        /// Create a EnumDeclaration
        /// </summary>
        static std::shared_ptr<const EnumDeclaration> CreateEnumDeclaration(
            std::shared_ptr<const SyntaxToken> enumToken,
            std::shared_ptr<const SyntaxToken> classToken,
            std::shared_ptr<const SyntaxToken> identifierToken,
            std::shared_ptr<const SyntaxToken> openBraceToken,
            std::shared_ptr<const SyntaxSeparatorList<EnumeratorDefinition>> enumeratorList,
            std::shared_ptr<const SyntaxToken> closeBraceToken)
        {
            // Note: The class and identifier tokens are optional
            if (enumToken == nullptr)
                throw std::runtime_error("ArgumentNull - enumToken");
            if (openBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - openBraceToken");
            if (enumeratorList == nullptr)
                throw std::runtime_error("ArgumentNull - enumeratorList");
            if (closeBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeBraceToken");

            return std::shared_ptr<const EnumDeclaration>(
                new EnumDeclaration(
                    std::move(enumToken),
                    std::move(classToken),
                    std::move(identifierToken),
                    std::move(openBraceToken),
                    std::move(enumeratorList),
                    std::move(closeBraceToken)));
        }

        /// <summary>
        /// Create a EnumeratorDefinition
        /// </summary>
        static std::shared_ptr<const EnumeratorDefinition> CreateEnumeratorDefinition(
            std::shared_ptr<const SyntaxToken> identifierToken)
        {
            if (identifierToken == nullptr)
                throw std::runtime_error("ArgumentNull - identifierToken");

            return std::shared_ptr<const EnumeratorDefinition>(
                new EnumeratorDefinition(
                    std::move(identifierToken)));
        }

        /// <summary>
        /// Create a FunctionDeclaration
        /// </summary>
        static std::shared_ptr<const FunctionDeclaration> CreateFunctionDeclaration(
            std::shared_ptr<const DeclarationSpecifier> returnType,
            std::shared_ptr<const NameExpression> identifier,
            std::shared_ptr<const ParameterList> parameterList,
            std::shared_ptr<const SyntaxNode> body)
        {
            if (returnType == nullptr)
                throw std::runtime_error("ArgumentNull - returnType");
            if (identifier == nullptr)
                throw std::runtime_error("ArgumentNull - identifier");
            if (parameterList == nullptr)
                throw std::runtime_error("ArgumentNull - parameterList");
            if (body == nullptr)
                throw std::runtime_error("ArgumentNull - body");

            return std::shared_ptr<const FunctionDeclaration>(
                new FunctionDeclaration(
                    std::move(returnType),
                    std::move(identifier),
                    std::move(parameterList),
                    std::move(body)));
        }

        /// <summary>
        /// Create a FunctionDefinition
        /// </summary>
        static std::shared_ptr<const FunctionDefinition> CreateFunctionDefinition(
            std::shared_ptr<const DeclarationSpecifier> returnType,
            std::shared_ptr<const NameExpression> identifier,
            std::shared_ptr<const ParameterList> parameterList,
            std::shared_ptr<const SyntaxNode> body)
        {
            if (returnType == nullptr)
                throw std::runtime_error("ArgumentNull - returnType");
            if (identifier == nullptr)
                throw std::runtime_error("ArgumentNull - identifier");
            if (parameterList == nullptr)
                throw std::runtime_error("ArgumentNull - parameterList");
            if (body == nullptr)
                throw std::runtime_error("ArgumentNull - body");

            return std::shared_ptr<const FunctionDefinition>(
                new FunctionDefinition(
                    std::move(returnType),
                    std::move(identifier),
                    std::move(parameterList),
                    std::move(body)));
        }

        /// <summary>
        /// Create a IfStatement
        /// </summary>
        static std::shared_ptr<const IfStatement> CreateIfStatement(
            std::shared_ptr<const SyntaxToken> ifToken,
            std::shared_ptr<const SyntaxToken> openParenthesisToken,
            std::shared_ptr<const Expression> conditionExpression,
            std::shared_ptr<const SyntaxToken> closeParenthesisToken,
            std::shared_ptr<const Statement> statement,
            std::shared_ptr<const ElseClause> elseClause)
        {
            // Note: The else clause is optional
            if (ifToken == nullptr)
                throw std::runtime_error("ArgumentNull - ifToken");
            if (openParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - openParenthesisToken");
            if (conditionExpression == nullptr)
                throw std::runtime_error("ArgumentNull - conditionExpression");
            if (closeParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeParenthesisToken");
            if (statement == nullptr)
                throw std::runtime_error("ArgumentNull - statement");

            return std::shared_ptr<const IfStatement>(
                new IfStatement(
                    std::move(ifToken),
                    std::move(openParenthesisToken),
                    std::move(conditionExpression),
                    std::move(closeParenthesisToken),
                    std::move(statement),
                    std::move(elseClause)));
        }

        /// <summary>
        /// Create a InitializerDeclarator
        /// </summary>
        static std::shared_ptr<const InitializerDeclarator> CreateInitializerDeclarator(
            std::shared_ptr<const SyntaxNode> declarator,
            std::shared_ptr<const SyntaxNode> initializer)
        {
            // Note: the initializer is optional
            if (declarator == nullptr)
                throw std::runtime_error("ArgumentNull - declarator");

            return std::shared_ptr<const InitializerDeclarator>(
                new InitializerDeclarator(
                    std::move(declarator),
                    std::move(initializer)));
        }

        /// <summary>
        /// Create a InitializerDeclaratorList
        /// </summary>
        static std::shared_ptr<const InitializerDeclaratorList> CreateInitializerDeclaratorList(
            std::shared_ptr<const SyntaxSeparatorList<InitializerDeclarator>> items)
        {
            if (items == nullptr)
                throw std::runtime_error("ArgumentNull - items");
            if (items->GetItems().empty())
                throw std::runtime_error("InitializerDeclaratorList cannot be empty.");

            return std::shared_ptr<const InitializerDeclaratorList>(
                new InitializerDeclaratorList(
                    std::move(items)));
        }

        /// <summary>
        /// Create a SyntaxToken
        /// </summary>
        static std::shared_ptr<const SyntaxToken> CreateKeywordToken(
            SyntaxTokenType type,
            std::vector<SyntaxTrivia> leadingTrivia,
            std::vector<SyntaxTrivia> trailingTrivia)
        {
            std::string value;
            switch (type)
            {
                case SyntaxTokenType::AlignAs:
                    value = "alignas";
                    break;
                case SyntaxTokenType::AlignOf:
                     value = "alignof";
                     break;
                case SyntaxTokenType::Asm:
                     value = "asm";
                     break;
                case SyntaxTokenType::Auto:
                     value = "auto";
                     break;
                case SyntaxTokenType::Bool:
                     value = "boo";
                     break;
                case SyntaxTokenType::Break:
                     value = "break";
                     break;
                case SyntaxTokenType::Case:
                     value = "case";
                     break;
                case SyntaxTokenType::Catch:
                     value = "catch";
                     break;
                case SyntaxTokenType::Char:
                     value = "char";
                     break;
                case SyntaxTokenType::Char16:
                     value = "char16_t";
                     break;
                case SyntaxTokenType::Char32:
                     value = "char32_t";
                     break;
                case SyntaxTokenType::Class:
                     value = "class";
                     break;
                case SyntaxTokenType::Const:
                     value = "const";
                     break;
                case SyntaxTokenType::ConstExpr:
                     value = "constexpr";
                     break;
                case SyntaxTokenType::ConstCast:
                     value = "const_cast";
                     break;
                case SyntaxTokenType::Continue:
                     value = "continue";
                     break;
                case SyntaxTokenType::DeclType:
                     value = "decltype";
                     break;
                case SyntaxTokenType::Default:
                     value = "default";
                     break;
                case SyntaxTokenType::Delete:
                     value = "delete";
                     break;
                case SyntaxTokenType::Do:
                     value = "do";
                     break;
                case SyntaxTokenType::Double:
                     value = "double";
                     break;
                case SyntaxTokenType::DynamicCast:
                     value = "dynamic_cast";
                     break;
                case SyntaxTokenType::Else:
                     value = "else";
                     break;
                case SyntaxTokenType::Enum:
                     value = "enum";
                     break;
                case SyntaxTokenType::Explicit:
                     value = "explicit";
                     break;
                case SyntaxTokenType::Export:
                     value = "export";
                     break;
                case SyntaxTokenType::Extern:
                     value = "extern";
                     break;
                case SyntaxTokenType::False:
                     value = "false";
                     break;
                case SyntaxTokenType::Float:
                     value = "float";
                     break;
                case SyntaxTokenType::For:
                     value = "for";
                     break;
                case SyntaxTokenType::Friend:
                     value = "friend";
                     break;
                case SyntaxTokenType::GoTo:
                     value = "goto";
                     break;
                case SyntaxTokenType::If:
                     value = "if";
                     break;
                case SyntaxTokenType::Inline:
                     value = "inline";
                     break;
                case SyntaxTokenType::Int:
                     value = "int";
                     break;
                case SyntaxTokenType::Long:
                     value = "long";
                     break;
                case SyntaxTokenType::Mutable:
                     value = "mutable";
                     break;
                case SyntaxTokenType::Namespace:
                     value = "namespace";
                     break;
                case SyntaxTokenType::New:
                     value = "new";
                     break;
                case SyntaxTokenType::NoExcept:
                     value = "noexcept";
                     break;
                case SyntaxTokenType::Nullptr:
                     value = "nullptr";
                     break;
                case SyntaxTokenType::Operator:
                     value = "operator";
                     break;
                case SyntaxTokenType::Private:
                     value = "private";
                     break;
                case SyntaxTokenType::Protected:
                     value = "protected";
                     break;
                case SyntaxTokenType::Public:
                     value = "public";
                     break;
                case SyntaxTokenType::Register:
                     value = "register";
                     break;
                case SyntaxTokenType::ReinterpretCast:
                     value = "reinterpret_cast";
                     break;
                case SyntaxTokenType::Return:
                     value = "return";
                     break;
                case SyntaxTokenType::Short:
                     value = "short";
                     break;
                case SyntaxTokenType::Signed:
                     value = "signed";
                     break;
                case SyntaxTokenType::SizeOf:
                     value = "sizeof";
                     break;
                case SyntaxTokenType::Static:
                     value = "static";
                     break;
                case SyntaxTokenType::StaticAssert:
                     value = "static_assert";
                     break;
                case SyntaxTokenType::StaticCast:
                     value = "static_cast";
                     break;
                case SyntaxTokenType::Struct:
                     value = "struct";
                     break;
                case SyntaxTokenType::Switch:
                     value = "switch";
                     break;
                case SyntaxTokenType::Template:
                     value = "template";
                     break;
                case SyntaxTokenType::This:
                     value = "this";
                     break;
                case SyntaxTokenType::ThreadLocal:
                     value = "thread_loca";
                     break;
                case SyntaxTokenType::Throw:
                     value = "throw";
                     break;
                case SyntaxTokenType::True:
                     value = "true";
                     break;
                case SyntaxTokenType::Try:
                     value = "try";
                     break;
                case SyntaxTokenType::TypeDef:
                     value = "typedef";
                     break;
                case SyntaxTokenType::TypeId:
                     value = "typeid";
                     break;
                case SyntaxTokenType::TypeName:
                     value = "typename";
                     break;
                case SyntaxTokenType::Union:
                     value = "union";
                     break;
                case SyntaxTokenType::Unsigned:
                     value = "unsigned";
                     break;
                case SyntaxTokenType::Using:
                     value = "using";
                     break;
                case SyntaxTokenType::Virtual:
                     value = "virtua";
                     break;
                case SyntaxTokenType::Void:
                     value = "void";
                     break;
                case SyntaxTokenType::Volatile:
                     value = "volatile";
                     break;
                case SyntaxTokenType::WChar:
                     value = "wchar_t";
                     break;
                case SyntaxTokenType::While:
                     value = "while";
                     break;
                case SyntaxTokenType::Override:
                     value = "override";
                     break;
                case SyntaxTokenType::Final:
                     value = "fina";
                     break;
                case SyntaxTokenType::OpenBrace:
                     value = "{";
                     break;
                case SyntaxTokenType::CloseBrace:
                     value = "}";
                     break;
                case SyntaxTokenType::OpenBracket:
                     value = "[";
                     break;
                case SyntaxTokenType::CloseBracket:
                     value = "]";
                     break;
                case SyntaxTokenType::OpenParenthesis:
                     value = "(";
                     break;
                case SyntaxTokenType::CloseParenthesis:
                     value = ")";
                     break;
                case SyntaxTokenType::Semicolon:
                     value = ";";
                     break;
                case SyntaxTokenType::Colon:
                     value = ":";
                     break;
                case SyntaxTokenType::Ellipsis:
                     value = "...";
                     break;
                case SyntaxTokenType::QuestionMark:
                     value = "?";
                     break;
                case SyntaxTokenType::DoubleColon:
                     value = "::";
                     break;
                case SyntaxTokenType::Period:
                     value = ".";
                     break;
                case SyntaxTokenType::PeriodAsterisk:
                     value = ".*";
                     break;
                case SyntaxTokenType::Plus:
                     value = "+";
                     break;
                case SyntaxTokenType::Minus:
                     value = "-";
                     break;
                case SyntaxTokenType::Asterisk:
                     value = "*";
                     break;
                case SyntaxTokenType::ForwardSlash:
                     value = "/";
                     break;
                case SyntaxTokenType::Percent:
                     value = "%";
                     break;
                case SyntaxTokenType::Caret:
                     value = "^";
                     break;
                case SyntaxTokenType::Ampersand:
                     value = "&";
                     break;
                case SyntaxTokenType::VerticalBar:
                     value = "|";
                     break;
                case SyntaxTokenType::Tilde:
                     value = "~";
                     break;
                case SyntaxTokenType::ExclamationMark:
                     value = "!";
                     break;
                case SyntaxTokenType::Equal:
                     value = "=";
                     break;
                case SyntaxTokenType::LessThan:
                     value = "<";
                     break;
                case SyntaxTokenType::GreaterThan:
                     value = ">";
                     break;
                case SyntaxTokenType::PlusEqual:
                     value = "+=";
                     break;
                case SyntaxTokenType::MinusEqual:
                     value = "-=";
                     break;
                case SyntaxTokenType::AsteriskEqual:
                     value = "*=";
                     break;
                case SyntaxTokenType::ForwardSlashEqual:
                     value = "/=";
                     break;
                case SyntaxTokenType::PercentEqual:
                     value = "%=";
                     break;
                case SyntaxTokenType::CaretEqual:
                     value = "^=";
                     break;
                case SyntaxTokenType::AmpersandEqual:
                     value = "&=";
                     break;
                case SyntaxTokenType::VerticalBarEqual:
                     value = "|=";
                     break;
                case SyntaxTokenType::DoubleLessThan:
                     value = "<<";
                     break;
                case SyntaxTokenType::DoubleGreaterThan:
                     value = ">>";
                     break;
                case SyntaxTokenType::DoubleLessThanEqual:
                     value = "<<=";
                     break;
                case SyntaxTokenType::DoubleGreaterThanEqual:
                     value = ">>=";
                     break;
                case SyntaxTokenType::DoubleEqual:
                     value = "==";
                     break;
                case SyntaxTokenType::ExclamationMarkEqual:
                     value = "!=";
                     break;
                case SyntaxTokenType::LessThanEqual:
                     value = "<=";
                     break;
                case SyntaxTokenType::LessThanEqualGreaterThan:
                     value = "<=>";
                     break;
                case SyntaxTokenType::GreaterThanEqual:
                     value = ">=";
                     break;
                case SyntaxTokenType::DoubleAmpersand:
                     value = "&&";
                     break;
                case SyntaxTokenType::DoubleVerticalBar:
                     value = "||";
                     break;
                case SyntaxTokenType::DoublePlus:
                     value = "++";
                     break;
                case SyntaxTokenType::DoubleMinus:
                     value = "--";
                     break;
                case SyntaxTokenType::Comma:
                     value = ",";
                     break;
                case SyntaxTokenType::ArrowAsterisk:
                     value = "->*";
                     break;
                case SyntaxTokenType::Arrow:
                     value = "->";
                     break;
                case SyntaxTokenType::Zero:
                     value = "0";
                     break;
                case SyntaxTokenType::IntegerLiteral:
                case SyntaxTokenType::FloatingPointLiteral:
                case SyntaxTokenType::CharacterLiteral:
                case SyntaxTokenType::StringLiteral:
                case SyntaxTokenType::UserDefinedLiteral:
                     throw std::runtime_error("Literals are not a keyword token.");
                case SyntaxTokenType::Identifier:
                    throw std::runtime_error("An identifier is not a keyword token.");
                default:
                    throw std::logic_error("Unknown syntax token type.");
            }

            return std::shared_ptr<const SyntaxToken>(
                new SyntaxToken(
                    type,
                    std::move(value),
                    std::move(leadingTrivia),
                    std::move(trailingTrivia)));
        }

        /// <summary>
        /// Create a SyntaxToken
        /// </summary>
        static std::shared_ptr<const SyntaxToken> CreateKeywordToken(SyntaxTokenType type)
        {
            return CreateKeywordToken(
                    type,
                    {},
                    {});
        }

        /// <summary>
        /// Create a LiteralExpression
        /// </summary>
        static std::shared_ptr<const LiteralExpression> CreateLiteralExpression(
            LiteralType type,
            std::shared_ptr<const SyntaxToken> token)
        {
            if (token == nullptr)
                throw std::runtime_error("ArgumentNull - token");

            return std::shared_ptr<const LiteralExpression>(
                new LiteralExpression(
                    type,
                    std::move(token)));
        }

        /// <summary>
        /// Create a Parameter
        /// </summary>
        static std::shared_ptr<const Parameter> CreateParameter(
            std::shared_ptr<const SyntaxNode> declarationSpecifier,
            std::shared_ptr<const SyntaxNode> declarator)
        {
            if (declarationSpecifier == nullptr)
                throw std::runtime_error("ArgumentNull - declarationSpecifier");
            if (declarator == nullptr)
                throw std::runtime_error("ArgumentNull - declarator");

            return std::shared_ptr<const Parameter>(
                new Parameter(
                    std::move(declarationSpecifier),
                    std::move(declarator)));
        }

        /// <summary>
        /// Create a ParameterList
        /// </summary>
        static std::shared_ptr<const ParameterList> CreateParameterList(
            std::shared_ptr<const SyntaxToken> openParenthesisToken,
            std::shared_ptr<const SyntaxSeparatorList<Parameter>> parameters,
            std::shared_ptr<const SyntaxToken> closeParenthesisToken)
        {
            if (openParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - openParenthesisToken");
            if (parameters == nullptr)
                throw std::runtime_error("ArgumentNull - parameters");
            if (closeParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeParenthesisToken");

            return std::shared_ptr<const ParameterList>(
                new ParameterList(
                    std::move(openParenthesisToken),
                    std::move(parameters),
                    std::move(closeParenthesisToken)));
        }

        /// <summary>
        /// Create a PrimitiveDataTypeDeclaration
        /// </summary>
        static std::shared_ptr<const PrimitiveDataTypeDeclaration> CreatePrimitiveDataTypeDeclaration(
            PrimitiveDataType type,
            std::shared_ptr<const SyntaxToken> token)
        {
            if (token == nullptr)
                throw std::runtime_error("ArgumentNull - token");

            return std::shared_ptr<const PrimitiveDataTypeDeclaration>(
                new PrimitiveDataTypeDeclaration(
                    type,
                    std::move(token)));
        }

        /// <summary>
        /// Create a QualifiedNameExpression
        /// </summary>
        static std::shared_ptr<const QualifiedNameExpression> CreateQualifiedNameExpression(
            std::shared_ptr<const NameExpression> left,
            std::shared_ptr<const SyntaxToken> scopeResolutionToken,
            std::shared_ptr<const SimpleNameExpression> right)
        {
            // A null left identifier indicates a global scope
            if (scopeResolutionToken == nullptr)
                throw std::runtime_error("ArgumentNull - scopeResolutionToken");
            // TODO: if (right == nullptr)
            //     throw std::runtime_error("ArgumentNull - right");

            return std::shared_ptr<const QualifiedNameExpression>(
                new QualifiedNameExpression(
                    std::move(left),
                    std::move(scopeResolutionToken),
                    std::move(right)));
        }

        /// <summary>
        /// Create a ReturnStatement
        /// </summary>
        static std::shared_ptr<const ReturnStatement> CreateReturnStatement(
            std::shared_ptr<const SyntaxToken> returnToken,
            std::shared_ptr<const Expression> expression,
            std::shared_ptr<const SyntaxToken> semicolonToken)
        {
            // Note: The Expression is optional
            if (returnToken == nullptr)
                throw std::runtime_error("ArgumentNull - returnToken");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            return std::shared_ptr<const ReturnStatement>(
                new ReturnStatement(
                    std::move(returnToken),
                    std::move(expression),
                    std::move(semicolonToken)));
        }

        /// <summary>
        /// Create a SimpleDeclarationStatement
        /// </summary>
        static std::shared_ptr<const SimpleDeclarationStatement> CreateSimpleDeclarationStatement(
            std::shared_ptr<const DeclarationSpecifier> declarationSpecifier,
            std::shared_ptr<const InitializerDeclaratorList> initializerDeclaratorList,
            std::shared_ptr<const SyntaxToken> semicolonToken)
        {
            if (declarationSpecifier == nullptr)
                throw std::runtime_error("ArgumentNull - declarationSpecifier");
            if (initializerDeclaratorList == nullptr)
                throw std::runtime_error("ArgumentNull - initializerDeclaratorList");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            return std::shared_ptr<const SimpleDeclarationStatement>(
                new SimpleDeclarationStatement(
                    std::move(declarationSpecifier),
                    std::move(initializerDeclaratorList),
                    std::move(semicolonToken)));
        }

        /// <summary>
        /// Create a SimpleNameExpression
        /// </summary>
        static std::shared_ptr<const SimpleNameExpression> CreateSimpleNameExpression(
            std::shared_ptr<const SyntaxToken> identifier)
        {
            if (identifier == nullptr)
                throw std::runtime_error("ArgumentNull - identifier");

            return std::shared_ptr<const SimpleNameExpression>(
                new SimpleNameExpression(
                    std::move(identifier)));
        }

        /// <summary>
        /// Create a SubscriptExpression
        /// </summary>
        static std::shared_ptr<const SubscriptExpression> CreateSubscriptExpression(
            std::shared_ptr<const Expression> leftExpression,
            std::shared_ptr<const SyntaxToken> openBracket, 
            std::shared_ptr<const Expression> rightExpression,
            std::shared_ptr<const SyntaxToken> closeBracket)
        {
            if (leftExpression == nullptr)
                throw std::runtime_error("ArgumentNull - leftExpression");
            if (openBracket == nullptr)
                throw std::runtime_error("ArgumentNull - openBracket");
            if (rightExpression == nullptr)
                throw std::runtime_error("ArgumentNull - rightExpression");
            if (closeBracket == nullptr)
                throw std::runtime_error("ArgumentNull - closeBracket");

            return std::shared_ptr<const SubscriptExpression>(
                new SubscriptExpression(
                    std::move(leftExpression),
                    std::move(openBracket),
                    std::move(rightExpression),
                    std::move(closeBracket)));
        }

        /// <summary>
        /// Create a ThisExpression
        /// </summary>
        static std::shared_ptr<const ThisExpression> CreateThisExpression(
            std::shared_ptr<const SyntaxToken> token)
        {
            if (token == nullptr)
                throw std::runtime_error("ArgumentNull - token");

            return std::shared_ptr<const ThisExpression>(
                new ThisExpression(
                    std::move(token)));
        }

        /// <summary>
        /// Create a TryStatement
        /// </summary>
        static std::shared_ptr<const TryStatement> CreateTryStatement(
            std::shared_ptr<const SyntaxToken> tryToken,
            std::shared_ptr<const CompoundStatement> compoundStatement,
            std::vector<std::shared_ptr<const CatchClause>> catchClauses)
        {
            if (tryToken == nullptr)
                throw std::runtime_error("ArgumentNull - tryToken");
            if (compoundStatement == nullptr)
                throw std::runtime_error("ArgumentNull - compoundStatement");
            if (catchClauses.empty())
                throw std::runtime_error("CatchClauses must not be empty.");

            return std::shared_ptr<const TryStatement>(
                new TryStatement(
                    std::move(tryToken),
                    std::move(compoundStatement),
                    std::move(catchClauses)));
        }

        /// <summary>
        /// Create a SyntaxTrivia
        /// </summary>
        static SyntaxTrivia CreateTrivia(
            std::string value,
            TextSpan span)
        {
            return SyntaxTrivia(
                std::move(value),
                span);
        }

        /// <summary>
        /// Create a UnaryExpression
        /// </summary>
        static std::shared_ptr<const UnaryExpression> CreateUnaryExpression(
            UnaryOperator unaryOperator,
            std::shared_ptr<const SyntaxToken> operatorToken,
            std::shared_ptr<const Expression> operand)
        {
            if (operatorToken == nullptr)
                throw std::runtime_error("ArgumentNull - operatorToken");
            if (operand == nullptr)
                throw std::runtime_error("ArgumentNull - operand");

            return std::shared_ptr<const UnaryExpression>(
                new UnaryExpression(
                    unaryOperator,
                    std::move(operatorToken),
                    std::move(operand)));
        }

        /// <summary>
        /// Create a SyntaxToken
        /// </summary>
        static std::shared_ptr<const SyntaxToken> CreateUniqueToken(
            SyntaxTokenType type,
            std::string value,
            std::vector<SyntaxTrivia> leadingTrivia,
            std::vector<SyntaxTrivia> trailingTrivia)
        {
            switch (type)
            {
                case SyntaxTokenType::IntegerLiteral:
                case SyntaxTokenType::FloatingPointLiteral:
                case SyntaxTokenType::CharacterLiteral:
                case SyntaxTokenType::StringLiteral:
                case SyntaxTokenType::UserDefinedLiteral:
                    // Literals OK
                    break;
                case SyntaxTokenType::Identifier:
                    // Identifiers OK
                    break;
                default:
                    throw std::logic_error("Unexpected token type for user value token.");
            }

            return std::shared_ptr<const SyntaxToken>(
                new SyntaxToken(
                    type,
                    std::move(value),
                    std::move(leadingTrivia),
                    std::move(trailingTrivia)));
        }

        /// <summary>
        /// Create a SyntaxToken
        /// </summary>
        static std::shared_ptr<const SyntaxToken> CreateUniqueToken(
            SyntaxTokenType type,
            std::string value)
        {
            return CreateUniqueToken(
                    type,
                    std::move(value),
                    {},
                    {});
        }

        /// <summary>
        /// Create a ValueEqualInitializer
        /// </summary>
        static std::shared_ptr<const ValueEqualInitializer> CreateValueEqualInitializer(
            std::shared_ptr<const SyntaxToken> equalToken,
            std::shared_ptr<const Expression> expression)
        {
            if (equalToken == nullptr)
                throw std::runtime_error("ArgumentNull - equalToken");
            if (expression == nullptr)
                throw std::runtime_error("ArgumentNull - expression");

            return std::shared_ptr<const ValueEqualInitializer>(
                new ValueEqualInitializer(
                    std::move(equalToken),
                    std::move(expression)));
        }
    };
}
