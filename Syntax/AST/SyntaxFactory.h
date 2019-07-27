
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
        /// Create a Attribute
        /// Overload without optional argument clause
        /// </summary>
        static std::shared_ptr<const InnerTree::Attribute> CreateAttribute(
            std::shared_ptr<const InnerTree::SyntaxToken> identifierToken)
        {
            return CreateAttribute(
                std::move(identifierToken),
                nullptr);
        }

        /// <summary>
        /// Create a Attribute
        /// </summary>
        static std::shared_ptr<const InnerTree::Attribute> CreateAttribute(
            std::shared_ptr<const InnerTree::SyntaxToken> identifierToken,
            std::shared_ptr<const InnerTree::AttributeArgumentClause> argumentClause)
        {
            // Note:: The argument clause is optional
            if (identifierToken == nullptr)
                throw std::runtime_error("ArgumentNull - identifierToken");

            auto result = std::shared_ptr<const InnerTree::Attribute>(
                new InnerTree::Attribute(
                    std::move(identifierToken),
                    std::move(argumentClause)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a AttributeArgumentClause
        /// </summary>
        static std::shared_ptr<const InnerTree::AttributeArgumentClause> CreateAttributeArgumentClause(
            std::shared_ptr<const InnerTree::SyntaxToken> openParenthesisToken,
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::SyntaxToken>> tokens,
            std::shared_ptr<const InnerTree::SyntaxToken> closeParenthesisToken)
        {
            if (openParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - openParenthesisToken");
            if (tokens == nullptr)
                throw std::runtime_error("ArgumentNull - tokens");
            if (closeParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeParenthesisToken");

            auto result = std::shared_ptr<const InnerTree::AttributeArgumentClause>(
                new InnerTree::AttributeArgumentClause(
                    std::move(openParenthesisToken),
                    std::move(tokens),
                    std::move(closeParenthesisToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a AttributeSpecifier
        /// </summary>
        static std::shared_ptr<const InnerTree::AttributeSpecifier> CreateAttributeSpecifier(
            std::shared_ptr<const InnerTree::SyntaxToken> outerOpenBracketToken,
            std::shared_ptr<const InnerTree::SyntaxToken> innerOpenBracketToken,
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::Attribute>> attributes,
            std::shared_ptr<const InnerTree::SyntaxToken> innerCloseBracketToken,
            std::shared_ptr<const InnerTree::SyntaxToken> outerCloseBracketToken)
        {
            if (outerOpenBracketToken == nullptr)
                throw std::runtime_error("ArgumentNull - outerOpenBracketToken");
            if (innerOpenBracketToken == nullptr)
                throw std::runtime_error("ArgumentNull - innerOpenBracketToken");
            if (attributes == nullptr)
                throw std::runtime_error("ArgumentNull - attributes");
            if (innerCloseBracketToken == nullptr)
                throw std::runtime_error("ArgumentNull - innerCloseBracketToken");
            if (outerCloseBracketToken == nullptr)
                throw std::runtime_error("ArgumentNull - outerCloseBracketToken");

            auto result = std::shared_ptr<const InnerTree::AttributeSpecifier>(
                new InnerTree::AttributeSpecifier(
                    std::move(outerOpenBracketToken),
                    std::move(innerOpenBracketToken),
                    std::move(attributes),
                    std::move(innerCloseBracketToken),
                    std::move(outerCloseBracketToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a AccessorSpecifier
        /// </summary>
        static std::shared_ptr<const InnerTree::AccessorSpecifier> CreateAccessorSpecifier(
            std::shared_ptr<const InnerTree::SyntaxToken> accessorToken,
            std::shared_ptr<const InnerTree::SyntaxToken> colonToken)
        {
            if (accessorToken == nullptr)
                throw std::runtime_error("ArgumentNull - accessorToken");
            if (colonToken == nullptr)
                throw std::runtime_error("ArgumentNull - colonToken");

            auto result = std::shared_ptr<const InnerTree::AccessorSpecifier>(
                new InnerTree::AccessorSpecifier(
                    std::move(accessorToken),
                    std::move(colonToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a BinaryExpression
        /// </summary>
        static std::shared_ptr<const InnerTree::BinaryExpression> CreateBinaryExpression(
            BinaryOperator binaryOperator,
            std::shared_ptr<const InnerTree::Expression> leftOperand,
            std::shared_ptr<const InnerTree::SyntaxToken> operatorToken,
            std::shared_ptr<const InnerTree::Expression> rightOperand)
        {
            if (leftOperand == nullptr)
                throw std::runtime_error("ArgumentNull - leftOperand");
            if (operatorToken == nullptr)
                throw std::runtime_error("ArgumentNull - operatorToken");
            if (rightOperand == nullptr)
                throw std::runtime_error("ArgumentNull - rightOperand");

            auto result = std::shared_ptr<const InnerTree::BinaryExpression>(
                new InnerTree::BinaryExpression(
                    binaryOperator,
                    std::move(leftOperand),
                    std::move(operatorToken),
                    std::move(rightOperand)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a ClassSpecifier
        /// </summary>
        static std::shared_ptr<const InnerTree::ClassSpecifier> CreateClassSpecifier(
            std::shared_ptr<const InnerTree::SyntaxToken> classToken,
            std::shared_ptr<const InnerTree::SyntaxToken> identifierToken,
            std::shared_ptr<const InnerTree::SyntaxToken> openBraceToken,
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::Declaration>> memberDeclarations,
            std::shared_ptr<const InnerTree::SyntaxToken> closeBraceToken)
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

            auto result = std::shared_ptr<const InnerTree::ClassSpecifier>(
                new InnerTree::ClassSpecifier(
                    std::move(classToken),
                    std::move(identifierToken),
                    std::move(openBraceToken),
                    std::move(memberDeclarations),
                    std::move(closeBraceToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a CompoundStatement
        /// </summary>
        static std::shared_ptr<const InnerTree::CompoundStatement> CreateCompoundStatement(
            std::shared_ptr<const InnerTree::SyntaxToken> openBraceToken,
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::Statement>> statements,
            std::shared_ptr<const InnerTree::SyntaxToken> closeBraceToken)
        {
            if (openBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - openBraceToken");
            if (statements == nullptr)
                throw std::runtime_error("ArgumentNull - statements");
            if (closeBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeBraceToken");

            auto result = std::shared_ptr<const InnerTree::CompoundStatement>(
                new InnerTree::CompoundStatement(
                    std::move(openBraceToken),
                    std::move(statements),
                    std::move(closeBraceToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a ConstructorDefinition
        /// </summary>
        static std::shared_ptr<const InnerTree::ConstructorDefinition> CreateConstructorDefinition(
            std::shared_ptr<const InnerTree::IdentifierExpression> identifier,
            std::shared_ptr<const InnerTree::ParameterList> parameterList,
            std::shared_ptr<const InnerTree::ConstructorInitializer> constructorInitializer,
            std::shared_ptr<const InnerTree::SyntaxNode> body)
        {
            // Note: The constructor initializer is optional
            if (identifier == nullptr)
                throw std::runtime_error("ArgumentNull - identifier");
            if (parameterList == nullptr)
                throw std::runtime_error("ArgumentNull - parameterList");
            if (body == nullptr)
                throw std::runtime_error("ArgumentNull - body");

            auto result = std::shared_ptr<const InnerTree::ConstructorDefinition>(
                new InnerTree::ConstructorDefinition(
                    std::move(identifier),
                    std::move(parameterList),
                    std::move(constructorInitializer),
                    std::move(body)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a ConstructorInitializer
        /// </summary>
        static std::shared_ptr<const InnerTree::ConstructorInitializer> CreateConstructorInitializer(
            std::shared_ptr<const InnerTree::SyntaxToken> colonToken,
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::MemberInitializer>> initializers)
        {
            if (colonToken == nullptr)
                throw std::runtime_error("ArgumentNull - colonToken");
            if (initializers == nullptr)
                throw std::runtime_error("ArgumentNull - initializers");

            auto result = std::shared_ptr<const InnerTree::ConstructorInitializer>(
                new InnerTree::ConstructorInitializer(
                    std::move(colonToken),
                    std::move(initializers)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a DeclarationSpecifierSequence
        /// Overload that excludes optional leading and trailing modifiers
        /// </summary>
        static std::shared_ptr<const InnerTree::DeclarationSpecifierSequence> CreateDeclarationSpecifierSequence(
            std::shared_ptr<const InnerTree::TypeSpecifier> typeSpecifier)
        {
            return CreateDeclarationSpecifierSequence(
                CreateSyntaxList<InnerTree::SyntaxToken>({}),
                std::move(typeSpecifier),
                CreateSyntaxList<InnerTree::SyntaxToken>({}));
        }

        /// <summary>
        /// Create a DeclarationSpecifierSequence
        /// </summary>
        static std::shared_ptr<const InnerTree::DeclarationSpecifierSequence> CreateDeclarationSpecifierSequence(
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::SyntaxToken>> leadingModifiers,
            std::shared_ptr<const InnerTree::TypeSpecifier> typeSpecifier,
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::SyntaxToken>> trailingModifiers)
        {
            if (leadingModifiers == nullptr)
                throw std::runtime_error("ArgumentNull - leadingModifiers");
            if (typeSpecifier == nullptr)
                throw std::runtime_error("ArgumentNull - typeSpecifier");
            if (trailingModifiers == nullptr)
                throw std::runtime_error("ArgumentNull - trailingModifiers");

            auto result = std::shared_ptr<const InnerTree::DeclarationSpecifierSequence>(
                new InnerTree::DeclarationSpecifierSequence(
                    std::move(leadingModifiers),
                    std::move(typeSpecifier),
                    std::move(trailingModifiers)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a DeclarationStatement
        /// </summary>
        static std::shared_ptr<const InnerTree::DeclarationStatement> CreateDeclarationStatement(
            std::shared_ptr<const InnerTree::Declaration> declaration)
        {
            if (declaration == nullptr)
                throw std::runtime_error("ArgumentNull - declaration");

            auto result = std::shared_ptr<const InnerTree::DeclarationStatement>(
                new InnerTree::DeclarationStatement(
                    std::move(declaration)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a DefaultFunctionBody
        /// </summary>
        static std::shared_ptr<const InnerTree::DefaultFunctionBody> CreateDefaultFunctionBody(
            std::shared_ptr<const InnerTree::SyntaxToken> equalToken,
            std::shared_ptr<const InnerTree::SyntaxToken> defaultToken,
            std::shared_ptr<const InnerTree::SyntaxToken> semicolonToken)
        {
            if (equalToken == nullptr)
                throw std::runtime_error("ArgumentNull - equalToken");
            if (defaultToken == nullptr)
                throw std::runtime_error("ArgumentNull - defaultToken");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            auto result = std::shared_ptr<const InnerTree::DefaultFunctionBody>(
                new InnerTree::DefaultFunctionBody(
                    std::move(equalToken),
                    std::move(defaultToken),
                    std::move(semicolonToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a DeleteFunctionBody
        /// </summary>
        static std::shared_ptr<const InnerTree::DeleteFunctionBody> CreateDeleteFunctionBody(
            std::shared_ptr<const InnerTree::SyntaxToken> equalToken,
            std::shared_ptr<const InnerTree::SyntaxToken> deleteToken,
            std::shared_ptr<const InnerTree::SyntaxToken> semicolonToken)
        {
            if (equalToken == nullptr)
                throw std::runtime_error("ArgumentNull - equalToken");
            if (deleteToken == nullptr)
                throw std::runtime_error("ArgumentNull - deleteToken");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            auto result = std::shared_ptr<const InnerTree::DeleteFunctionBody>(
                new InnerTree::DeleteFunctionBody(
                    std::move(equalToken),
                    std::move(deleteToken),
                    std::move(semicolonToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a DestructorIdentifier
        /// </summary>
        static std::shared_ptr<const InnerTree::DestructorIdentifier> CreateDestructorIdentifier(
            std::shared_ptr<const InnerTree::SyntaxToken> tildeToken,
            std::shared_ptr<const InnerTree::SyntaxToken> identifierToken)
        {
            if (tildeToken == nullptr)
                throw std::runtime_error("ArgumentNull - tildeToken");
            if (identifierToken == nullptr)
                throw std::runtime_error("ArgumentNull - identifierToken");

            auto result = std::shared_ptr<const InnerTree::DestructorIdentifier>(
                new InnerTree::DestructorIdentifier(
                    std::move(tildeToken),
                    std::move(identifierToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a ElseClause
        /// </summary>
        static std::shared_ptr<const InnerTree::ElseClause> CreateElseClause(
            std::shared_ptr<const InnerTree::SyntaxToken> elseToken,
            std::shared_ptr<const InnerTree::Statement> statement)
        {
            if (elseToken == nullptr)
                throw std::runtime_error("ArgumentNull - elseToken");
            if (statement == nullptr)
                throw std::runtime_error("ArgumentNull - statement");

            auto result = std::shared_ptr<const InnerTree::ElseClause>(
                new InnerTree::ElseClause(
                    std::move(elseToken),
                    std::move(statement)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a EmptyDeclaration
        /// </summary>
        static std::shared_ptr<const InnerTree::EmptyDeclaration> CreateEmptyDeclaration(
            std::shared_ptr<const InnerTree::SyntaxToken> semicolonToken)
        {
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            auto result = std::shared_ptr<const InnerTree::EmptyDeclaration>(
                new InnerTree::EmptyDeclaration(
                    std::move(semicolonToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a EmptyStatement
        /// </summary>
        static std::shared_ptr<const InnerTree::EmptyStatement> CreateEmptyStatement(
            std::shared_ptr<const InnerTree::SyntaxToken> semicolonToken)
        {
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            auto result = std::shared_ptr<const InnerTree::EmptyStatement>(
                new InnerTree::EmptyStatement(
                    std::move(semicolonToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a EnumSpecifier
        /// </summary>
        static std::shared_ptr<const InnerTree::EnumSpecifier> CreateEnumSpecifier(
            std::shared_ptr<const InnerTree::SyntaxToken> enumToken,
            std::shared_ptr<const InnerTree::SyntaxToken> classToken,
            std::shared_ptr<const InnerTree::SyntaxToken> identifierToken,
            std::shared_ptr<const InnerTree::SyntaxToken> openBraceToken,
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::EnumeratorDefinition>> enumeratorList,
            std::shared_ptr<const InnerTree::SyntaxToken> closeBraceToken)
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

            auto result = std::shared_ptr<const InnerTree::EnumSpecifier>(
                new InnerTree::EnumSpecifier(
                    std::move(enumToken),
                    std::move(classToken),
                    std::move(identifierToken),
                    std::move(openBraceToken),
                    std::move(enumeratorList),
                    std::move(closeBraceToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a EnumeratorDefinition
        /// </summary>
        static std::shared_ptr<const InnerTree::EnumeratorDefinition> CreateEnumeratorDefinition(
            std::shared_ptr<const InnerTree::SyntaxToken> identifierToken)
        {
            if (identifierToken == nullptr)
                throw std::runtime_error("ArgumentNull - identifierToken");

            auto result = std::shared_ptr<const InnerTree::EnumeratorDefinition>(
                new InnerTree::EnumeratorDefinition(
                    std::move(identifierToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a ExpressionStatement
        /// </summary>
        static std::shared_ptr<const InnerTree::ExpressionStatement> CreateExpressionStatement(
            std::shared_ptr<const InnerTree::Expression> expression,
            std::shared_ptr<const InnerTree::SyntaxToken> semicolonToken)
        {
            if (expression == nullptr)
                throw std::runtime_error("ArgumentNull - expression");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            auto result = std::shared_ptr<const InnerTree::ExpressionStatement>(
                new InnerTree::ExpressionStatement(
                    std::move(expression),
                    std::move(semicolonToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a FunctionDefinition
        /// </summary>
        static std::shared_ptr<const InnerTree::FunctionDefinition> CreateFunctionDefinition(
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::AttributeSpecifier>> attributeSpecifierSequence,
            std::shared_ptr<const InnerTree::DeclarationSpecifierSequence> returnType,
            std::shared_ptr<const InnerTree::IdentifierExpression> identifier,
            std::shared_ptr<const InnerTree::ParameterList> parameterList,
            std::shared_ptr<const InnerTree::SyntaxNode> body)
        {
            if (attributeSpecifierSequence == nullptr)
                throw std::runtime_error("ArgumentNull - attributeSpecifierSequence");
            if (returnType == nullptr)
                throw std::runtime_error("ArgumentNull - returnType");
            if (identifier == nullptr)
                throw std::runtime_error("ArgumentNull - identifier");
            if (parameterList == nullptr)
                throw std::runtime_error("ArgumentNull - parameterList");
            if (body == nullptr)
                throw std::runtime_error("ArgumentNull - body");

            auto result = std::shared_ptr<const InnerTree::FunctionDefinition>(
                new InnerTree::FunctionDefinition(
                    std::move(attributeSpecifierSequence),
                    std::move(returnType),
                    std::move(identifier),
                    std::move(parameterList),
                    std::move(body)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a FunctionDefinition
        /// Overload that adds an empty attribute specifier sequence
        /// </summary>
        static std::shared_ptr<const InnerTree::FunctionDefinition> CreateFunctionDefinition(
            std::shared_ptr<const InnerTree::DeclarationSpecifierSequence> returnType,
            std::shared_ptr<const InnerTree::IdentifierExpression> identifier,
            std::shared_ptr<const InnerTree::ParameterList> parameterList,
            std::shared_ptr<const InnerTree::SyntaxNode> body)
        {
            return CreateFunctionDefinition(
                CreateSyntaxList<InnerTree::AttributeSpecifier>({}),
                std::move(returnType),
                std::move(identifier),
                std::move(parameterList),
                std::move(body));
        }

        /// <summary>
        /// Create a IdentifierExpression
        /// </summary>
        static std::shared_ptr<const InnerTree::IdentifierExpression> CreateIdentifierExpression(
            std::shared_ptr<const InnerTree::NestedNameSpecifier> qualifier,
            std::shared_ptr<const InnerTree::UnqualifiedIdentifier> unqualifiedIdentifier)
        {
            // The qualifier is optional
            if (unqualifiedIdentifier == nullptr)
                throw std::runtime_error("ArgumentNull - unqualifiedIdentifier");

            auto result = std::shared_ptr<const InnerTree::IdentifierExpression>(
                new InnerTree::IdentifierExpression(
                    std::move(qualifier),
                    std::move(unqualifiedIdentifier)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a IdentifierExpression
        /// Overload that removes optional qualifier
        /// </summary>
        static std::shared_ptr<const InnerTree::IdentifierExpression> CreateIdentifierExpression(
            std::shared_ptr<const InnerTree::UnqualifiedIdentifier> unqualifiedIdentifier)
        {
            return CreateIdentifierExpression(
                nullptr,
                std::move(unqualifiedIdentifier));
        }

        /// <summary>
        /// Create a IdentifierType
        /// </summary>
        static std::shared_ptr<const InnerTree::IdentifierType> CreateIdentifierType(
            std::shared_ptr<const InnerTree::NestedNameSpecifier> qualifier,
            std::shared_ptr<const InnerTree::UnqualifiedIdentifier> unqualifiedIdentifier)
        {
            // The qualifier is optional
            if (unqualifiedIdentifier == nullptr)
                throw std::runtime_error("ArgumentNull - unqualifiedIdentifier");

            auto result = std::shared_ptr<const InnerTree::IdentifierType>(
                new InnerTree::IdentifierType(
                    std::move(qualifier),
                    std::move(unqualifiedIdentifier)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a IdentifierType
        /// Overload that removes optional qualifier
        /// </summary>
        static std::shared_ptr<const InnerTree::IdentifierType> CreateIdentifierType(
            std::shared_ptr<const InnerTree::UnqualifiedIdentifier> unqualifiedIdentifier)
        {
            return CreateIdentifierType(
                nullptr,
                std::move(unqualifiedIdentifier));
        }

        /// <summary>
        /// Create a IfStatement
        /// </summary>
        static std::shared_ptr<const InnerTree::IfStatement> CreateIfStatement(
            std::shared_ptr<const InnerTree::SyntaxToken> ifToken,
            std::shared_ptr<const InnerTree::SyntaxToken> openParenthesisToken,
            std::shared_ptr<const InnerTree::Expression> conditionExpression,
            std::shared_ptr<const InnerTree::SyntaxToken> closeParenthesisToken,
            std::shared_ptr<const InnerTree::Statement> statement,
            std::shared_ptr<const InnerTree::ElseClause> elseClause)
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

            auto result = std::shared_ptr<const InnerTree::IfStatement>(
                new InnerTree::IfStatement(
                    std::move(ifToken),
                    std::move(openParenthesisToken),
                    std::move(conditionExpression),
                    std::move(closeParenthesisToken),
                    std::move(statement),
                    std::move(elseClause)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a InitializerDeclarator
        /// </summary>
        static std::shared_ptr<const InnerTree::InitializerDeclarator> CreateInitializerDeclarator(
            std::shared_ptr<const InnerTree::SyntaxNode> declarator,
            std::shared_ptr<const InnerTree::SyntaxNode> initializer)
        {
            // Note: the initializer is optional
            if (declarator == nullptr)
                throw std::runtime_error("ArgumentNull - declarator");

            auto result = std::shared_ptr<const InnerTree::InitializerDeclarator>(
                new InnerTree::InitializerDeclarator(
                    std::move(declarator),
                    std::move(initializer)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a InitializerDeclaratorList
        /// </summary>
        static std::shared_ptr<const InnerTree::InitializerDeclaratorList> CreateInitializerDeclaratorList(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::InitializerDeclarator>> items)
        {
            if (items == nullptr)
                throw std::runtime_error("ArgumentNull - items");

            auto result = std::shared_ptr<const InnerTree::InitializerDeclaratorList>(
                new InnerTree::InitializerDeclaratorList(
                    std::move(items)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a InitializerList
        /// </summary>
        static std::shared_ptr<const InnerTree::InitializerList> CreateInitializerList(
            std::shared_ptr<const InnerTree::SyntaxToken> openToken,
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::SyntaxNode>> values,
            std::shared_ptr<const InnerTree::SyntaxToken> closeToken)
        {
            if (openToken == nullptr)
                throw std::runtime_error("ArgumentNull - openToken");
            if (values == nullptr)
                throw std::runtime_error("ArgumentNull - values");
            if (closeToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeToken");

            auto result = std::shared_ptr<const InnerTree::InitializerList>(
                new InnerTree::InitializerList(
                    std::move(openToken),
                    std::move(values),
                    std::move(closeToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a InvocationExpression
        /// </summary>
        static std::shared_ptr<const InnerTree::InvocationExpression> CreateInvocationExpression(
            std::shared_ptr<const InnerTree::Expression> leftExpression,
            std::shared_ptr<const InnerTree::SyntaxToken> openParenthesisToken,
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::SyntaxNode>> parameters,
            std::shared_ptr<const InnerTree::SyntaxToken> closeParenthesisToken)
        {
            if (leftExpression == nullptr)
                throw std::runtime_error("ArgumentNull - leftExpression");
            if (openParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - openParenthesisToken");
            if (parameters == nullptr)
                throw std::runtime_error("ArgumentNull - parameters");
            if (closeParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeParenthesisToken");

            auto result = std::shared_ptr<const InnerTree::InvocationExpression>(
                new InnerTree::InvocationExpression(
                    std::move(leftExpression),
                    std::move(openParenthesisToken),
                    std::move(parameters),
                    std::move(closeParenthesisToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a InnerTree::SyntaxToken
        /// </summary>
        static std::shared_ptr<const InnerTree::SyntaxToken> CreateKeywordToken(
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
                     value = "bool";
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
                case SyntaxTokenType::Char8:
                     value = "char8_t";
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
                case SyntaxTokenType::EndOfFile:
                     value = "\0";
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

            auto result = std::shared_ptr<const InnerTree::SyntaxToken>(
                new InnerTree::SyntaxToken(
                    type,
                    std::move(value),
                    std::move(leadingTrivia),
                    std::move(trailingTrivia)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a InnerTree::SyntaxToken
        /// </summary>
        static std::shared_ptr<const InnerTree::SyntaxToken> CreateKeywordToken(SyntaxTokenType type)
        {
            return CreateKeywordToken(type, {}, {});
        }

        /// <summary>
        /// Create a LambdaCaptureClause
        /// </summary>
        static std::shared_ptr<const InnerTree::LambdaCaptureClause> CreateLambdaCaptureClause(
            std::shared_ptr<const InnerTree::SyntaxToken> ampersandToken,
            std::shared_ptr<const InnerTree::SyntaxToken> identifierToken)
        {
            // Note: the ampersand token is optional
            if (identifierToken == nullptr)
                throw std::runtime_error("ArgumentNull - identifierToken");

            auto result = std::shared_ptr<const InnerTree::LambdaCaptureClause>(
                new InnerTree::LambdaCaptureClause(
                    std::move(ampersandToken),
                    std::move(identifierToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a LambdaExpression
        /// </summary>
        static std::shared_ptr<const InnerTree::LambdaExpression> CreateLambdaExpression(
            std::shared_ptr<const InnerTree::SyntaxToken> openBracketToken,
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::LambdaCaptureClause>> captureList,
            std::shared_ptr<const InnerTree::SyntaxToken> closeBracketToken,
            std::shared_ptr<const InnerTree::ParameterList> parameterList,
            std::shared_ptr<const InnerTree::CompoundStatement> body)
        {
            // Note: the parameter list is optional
            if (openBracketToken == nullptr)
                throw std::runtime_error("ArgumentNull - openBracketToken");
            if (captureList == nullptr)
                throw std::runtime_error("ArgumentNull - captureList");
            if (closeBracketToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeBracketToken");
            if (body == nullptr)
                throw std::runtime_error("ArgumentNull - body");

            auto result = std::shared_ptr<const InnerTree::LambdaExpression>(
                new InnerTree::LambdaExpression(
                    std::move(openBracketToken),
                    std::move(captureList),
                    std::move(closeBracketToken),
                    std::move(parameterList),
                    std::move(body)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a LambdaExpression
        /// Overload with an empty capture list
        /// </summary>
        static std::shared_ptr<const InnerTree::LambdaExpression> CreateLambdaExpression(
            std::shared_ptr<const InnerTree::SyntaxToken> openBracketToken,
            std::shared_ptr<const InnerTree::SyntaxToken> closeBracketToken,
            std::shared_ptr<const InnerTree::ParameterList> parameterList,
            std::shared_ptr<const InnerTree::CompoundStatement> body)
        {
            return CreateLambdaExpression(
                std::move(openBracketToken),
                CreateSyntaxSeparatorList<InnerTree::LambdaCaptureClause>({}, {}),
                std::move(closeBracketToken),
                std::move(parameterList),
                std::move(body));
        }

        /// <summary>
        /// Create a LiteralExpression
        /// </summary>
        static std::shared_ptr<const InnerTree::LiteralExpression> CreateLiteralExpression(
            LiteralType type,
            std::shared_ptr<const InnerTree::SyntaxToken> token)
        {
            if (token == nullptr)
                throw std::runtime_error("ArgumentNull - token");

            auto result = std::shared_ptr<const InnerTree::LiteralExpression>(
                new InnerTree::LiteralExpression(
                    type,
                    std::move(token)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a MemberDeclaration
        /// </summary>
        static std::shared_ptr<const InnerTree::MemberDeclaration> CreateMemberDeclaration(
            std::shared_ptr<const InnerTree::DeclarationSpecifierSequence> DeclarationSpecifierSequence,
            std::shared_ptr<const InnerTree::MemberDeclaratorList> memberDeclaratorList,
            std::shared_ptr<const InnerTree::SyntaxToken> semicolonToken)
        {
            if (DeclarationSpecifierSequence == nullptr)
                throw std::runtime_error("ArgumentNull - DeclarationSpecifierSequence");
            if (memberDeclaratorList == nullptr)
                throw std::runtime_error("ArgumentNull - memberDeclaratorList");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            auto result = std::shared_ptr<const InnerTree::MemberDeclaration>(
                new InnerTree::MemberDeclaration(
                    std::move(DeclarationSpecifierSequence),
                    std::move(memberDeclaratorList),
                    std::move(semicolonToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a MemberDeclarator
        /// </summary>
        static std::shared_ptr<const InnerTree::MemberDeclarator> CreateMemberDeclarator(
            std::shared_ptr<const InnerTree::SyntaxNode> declarator,
            std::shared_ptr<const InnerTree::SyntaxNode> initializer)
        {
            // Note: the initializer is optional
            if (declarator == nullptr)
                throw std::runtime_error("ArgumentNull - declarator");

            auto result = std::shared_ptr<const InnerTree::MemberDeclarator>(
                new InnerTree::MemberDeclarator(
                    std::move(declarator),
                    std::move(initializer)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a MemberDeclaratorList
        /// </summary>
        static std::shared_ptr<const InnerTree::MemberDeclaratorList> CreateMemberDeclaratorList(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::MemberDeclarator>> items)
        {
            if (items == nullptr)
                throw std::runtime_error("ArgumentNull - items");

            auto result = std::shared_ptr<const InnerTree::MemberDeclaratorList>(
                new InnerTree::MemberDeclaratorList(
                    std::move(items)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a MemberInitializer
        /// </summary>
        static std::shared_ptr<const InnerTree::MemberInitializer> CreateMemberInitializer(
            std::shared_ptr<const InnerTree::SyntaxToken> identifierToken,
            std::shared_ptr<const InnerTree::InitializerList> initializer)
        {
            if (identifierToken == nullptr)
                throw std::runtime_error("ArgumentNull - identifierToken");
            if (initializer == nullptr)
                throw std::runtime_error("ArgumentNull - initializer");

            auto result = std::shared_ptr<const InnerTree::MemberInitializer>(
                new InnerTree::MemberInitializer(
                    std::move(identifierToken),
                    std::move(initializer)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a NamespaceDefinition
        /// </summary>
        static std::shared_ptr<const InnerTree::NamespaceDefinition> CreateNamespaceDefinition(
            std::shared_ptr<const InnerTree::SyntaxToken> namespaceToken,
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::SyntaxToken>> identifierNameList,
            std::shared_ptr<const InnerTree::SyntaxToken> openBraceToken,
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::Declaration>> memberDeclarations,
            std::shared_ptr<const InnerTree::SyntaxToken> closeBraceToken)
        {
            if (namespaceToken == nullptr)
                throw std::runtime_error("ArgumentNull - namespaceToken");
            if (identifierNameList == nullptr)
                throw std::runtime_error("ArgumentNull - identifierNameList");
            if (openBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - openBraceToken");
            if (memberDeclarations == nullptr)
                throw std::runtime_error("ArgumentNull - memberDeclarations");
            if (closeBraceToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeBraceToken");

            auto result = std::shared_ptr<const InnerTree::NamespaceDefinition>(
                new InnerTree::NamespaceDefinition(
                    std::move(namespaceToken),
                    std::move(identifierNameList),
                    std::move(openBraceToken),
                    std::move(memberDeclarations),
                    std::move(closeBraceToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a NestedNameSpecifier
        /// </summary>
        static std::shared_ptr<const InnerTree::NestedNameSpecifier> CreateNestedNameSpecifier(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::SyntaxNode>> specifierSequence)
        {
            if (specifierSequence == nullptr)
                throw std::runtime_error("ArgumentNull - specifierSequence");

            auto result = std::shared_ptr<const InnerTree::NestedNameSpecifier>(
                new InnerTree::NestedNameSpecifier(
                    std::move(specifierSequence)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a Parameter
        /// </summary>
        static std::shared_ptr<const InnerTree::Parameter> CreateParameter(
            std::shared_ptr<const InnerTree::SyntaxNode> DeclarationSpecifierSequence,
            std::shared_ptr<const InnerTree::SyntaxNode> declarator)
        {
            if (DeclarationSpecifierSequence == nullptr)
                throw std::runtime_error("ArgumentNull - DeclarationSpecifierSequence");
            if (declarator == nullptr)
                throw std::runtime_error("ArgumentNull - declarator");

            auto result = std::shared_ptr<const InnerTree::Parameter>(
                new InnerTree::Parameter(
                    std::move(DeclarationSpecifierSequence),
                    std::move(declarator)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a ParameterList
        /// </summary>
        static std::shared_ptr<const InnerTree::ParameterList> CreateParameterList(
            std::shared_ptr<const InnerTree::SyntaxToken> openParenthesisToken,
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::Parameter>> parameters,
            std::shared_ptr<const InnerTree::SyntaxToken> closeParenthesisToken)
        {
            if (openParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - openParenthesisToken");
            if (parameters == nullptr)
                throw std::runtime_error("ArgumentNull - parameters");
            if (closeParenthesisToken == nullptr)
                throw std::runtime_error("ArgumentNull - closeParenthesisToken");

            auto result = std::shared_ptr<const InnerTree::ParameterList>(
                new InnerTree::ParameterList(
                    std::move(openParenthesisToken),
                    std::move(parameters),
                    std::move(closeParenthesisToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a PointerDeclarator
        /// </summary>
        static std::shared_ptr<const InnerTree::PointerDeclarator> CreatePointerDeclarator(
            std::shared_ptr<const InnerTree::PointerOperator> pointerOperator,
            std::shared_ptr<const InnerTree::SyntaxNode> declarator)
        {
            if (pointerOperator == nullptr)
                throw std::runtime_error("ArgumentNull - pointerOperator");
            if (declarator == nullptr)
                throw std::runtime_error("ArgumentNull - declarator");

            auto result = std::shared_ptr<const InnerTree::PointerDeclarator>(
                new InnerTree::PointerDeclarator(
                    std::move(pointerOperator),
                    std::move(declarator)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a PointerOperator
        /// </summary>
        static std::shared_ptr<const InnerTree::PointerOperator> CreatePointerOperator(
            std::shared_ptr<const InnerTree::SyntaxToken> operatorToken)
        {
            if (operatorToken == nullptr)
                throw std::runtime_error("ArgumentNull - operatorToken");

            auto result = std::shared_ptr<const InnerTree::PointerOperator>(
                new InnerTree::PointerOperator(
                    std::move(operatorToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a PrimitiveDataTypeSpecifier
        /// </summary>
        static std::shared_ptr<const InnerTree::PrimitiveDataTypeSpecifier> CreatePrimitiveDataTypeSpecifier(
            PrimitiveDataType type,
            std::shared_ptr<const InnerTree::SyntaxToken> token)
        {
            if (token == nullptr)
                throw std::runtime_error("ArgumentNull - token");

            auto result = std::shared_ptr<const InnerTree::PrimitiveDataTypeSpecifier>(
                new InnerTree::PrimitiveDataTypeSpecifier(
                    type,
                    std::move(token)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a RegularFunctionBody
        /// </summary>
        static std::shared_ptr<const InnerTree::RegularFunctionBody> CreateRegularFunctionBody(
            std::shared_ptr<const InnerTree::CompoundStatement> statements
        )
        {
            if (statements == nullptr)
                throw std::runtime_error("ArgumentNull - statements");

            auto result = std::shared_ptr<const InnerTree::RegularFunctionBody>(
                new InnerTree::RegularFunctionBody(
                    std::move(statements)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a ReturnStatement
        /// </summary>
        static std::shared_ptr<const InnerTree::ReturnStatement> CreateReturnStatement(
            std::shared_ptr<const InnerTree::SyntaxToken> returnToken,
            std::shared_ptr<const InnerTree::Expression> expression,
            std::shared_ptr<const InnerTree::SyntaxToken> semicolonToken)
        {
            // Note: The Expression is optional
            if (returnToken == nullptr)
                throw std::runtime_error("ArgumentNull - returnToken");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            auto result = std::shared_ptr<const InnerTree::ReturnStatement>(
                new InnerTree::ReturnStatement(
                    std::move(returnToken),
                    std::move(expression),
                    std::move(semicolonToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a SimpleDeclaration
        /// </summary>
        static std::shared_ptr<const InnerTree::SimpleDeclaration> CreateSimpleDeclaration(
            std::shared_ptr<const InnerTree::DeclarationSpecifierSequence> DeclarationSpecifierSequence,
            std::shared_ptr<const InnerTree::InitializerDeclaratorList> initializerDeclaratorList,
            std::shared_ptr<const InnerTree::SyntaxToken> semicolonToken)
        {
            if (DeclarationSpecifierSequence == nullptr)
                throw std::runtime_error("ArgumentNull - DeclarationSpecifierSequence");
            if (initializerDeclaratorList == nullptr)
                throw std::runtime_error("ArgumentNull - initializerDeclaratorList");
            if (semicolonToken == nullptr)
                throw std::runtime_error("ArgumentNull - semicolonToken");

            auto result = std::shared_ptr<const InnerTree::SimpleDeclaration>(
                new InnerTree::SimpleDeclaration(
                    std::move(DeclarationSpecifierSequence),
                    std::move(initializerDeclaratorList),
                    std::move(semicolonToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a SimpleIdentifier
        /// </summary>
        static std::shared_ptr<const InnerTree::SimpleIdentifier> CreateSimpleIdentifier(
            std::shared_ptr<const InnerTree::SyntaxToken> identifierToken)
        {
            if (identifierToken == nullptr)
                throw std::runtime_error("ArgumentNull - identifierToken");

            auto result = std::shared_ptr<const InnerTree::SimpleIdentifier>(
                new InnerTree::SimpleIdentifier(
                    std::move(identifierToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a SimpleTemplateIdentifier
        /// </summary>
        static std::shared_ptr<const InnerTree::SimpleTemplateIdentifier> CreateSimpleTemplateIdentifier(
            std::shared_ptr<const InnerTree::SyntaxToken> identifierToken,
            std::shared_ptr<const InnerTree::SyntaxToken> lessThanToken,
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::SyntaxNode>> templateArgumentList,
            std::shared_ptr<const InnerTree::SyntaxToken> greaterThanToken)
        {
            if (identifierToken == nullptr)
                throw std::runtime_error("ArgumentNull - identifierToken");
            if (lessThanToken == nullptr)
                throw std::runtime_error("ArgumentNull - lessThanToken");
            if (templateArgumentList == nullptr)
                throw std::runtime_error("ArgumentNull - templateArgumentList");
            if (greaterThanToken == nullptr)
                throw std::runtime_error("ArgumentNull - greaterThanToken");

            auto result = std::shared_ptr<const InnerTree::SimpleTemplateIdentifier>(
                new InnerTree::SimpleTemplateIdentifier(
                    std::move(identifierToken),
                    std::move(lessThanToken),
                    std::move(templateArgumentList),
                    std::move(greaterThanToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a SubscriptExpression
        /// </summary>
        static std::shared_ptr<const InnerTree::SubscriptExpression> CreateSubscriptExpression(
            std::shared_ptr<const InnerTree::Expression> leftExpression,
            std::shared_ptr<const InnerTree::SyntaxToken> openBracket, 
            std::shared_ptr<const InnerTree::Expression> rightExpression,
            std::shared_ptr<const InnerTree::SyntaxToken> closeBracket)
        {
            if (leftExpression == nullptr)
                throw std::runtime_error("ArgumentNull - leftExpression");
            if (openBracket == nullptr)
                throw std::runtime_error("ArgumentNull - openBracket");
            if (rightExpression == nullptr)
                throw std::runtime_error("ArgumentNull - rightExpression");
            if (closeBracket == nullptr)
                throw std::runtime_error("ArgumentNull - closeBracket");

            auto result = std::shared_ptr<const InnerTree::SubscriptExpression>(
                new InnerTree::SubscriptExpression(
                    std::move(leftExpression),
                    std::move(openBracket),
                    std::move(rightExpression),
                    std::move(closeBracket)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a InnerTree::SyntaxList
        /// </summary>
        template<typename T>
        static std::shared_ptr<const InnerTree::SyntaxList<T>> CreateSyntaxList(
            std::vector<std::shared_ptr<const T>> items)
        {
            auto result = std::shared_ptr<const InnerTree::SyntaxList<T>>(
                new InnerTree::SyntaxList<T>(
                    std::move(items)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a SyntaxSeparatorList
        /// </summary>
        template<typename T>
        static std::shared_ptr<const InnerTree::SyntaxSeparatorList<T>> CreateSyntaxSeparatorList(
            std::vector<std::shared_ptr<const T>> items,
            std::vector<std::shared_ptr<const InnerTree::SyntaxToken>> separators)
        {
            auto result = std::shared_ptr<const InnerTree::SyntaxSeparatorList<T>>(
                new  InnerTree::SyntaxSeparatorList<T>(
                    std::move(items),
                    std::move(separators)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a ThisExpression
        /// </summary>
        static std::shared_ptr<const InnerTree::ThisExpression> CreateThisExpression(
            std::shared_ptr<const InnerTree::SyntaxToken> token)
        {
            if (token == nullptr)
                throw std::runtime_error("ArgumentNull - token");

            auto result = std::shared_ptr<const InnerTree::ThisExpression>(
                new InnerTree::ThisExpression(
                    std::move(token)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a TranslationUnit
        /// </summary>
        static std::shared_ptr<const InnerTree::TranslationUnit> CreateTranslationUnit(
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::Declaration>> declarations,
            std::shared_ptr<const InnerTree::SyntaxToken> endOfFileToken)
        {
            if (declarations == nullptr)
                throw std::runtime_error("ArgumentNull - declarations");
            if (endOfFileToken == nullptr)
                throw std::runtime_error("ArgumentNull - endOfFileToken");

            auto result = std::shared_ptr<const InnerTree::TranslationUnit>(
                new InnerTree::TranslationUnit(
                    std::move(declarations),
                    std::move(endOfFileToken)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a TryStatement
        /// </summary>
        static std::shared_ptr<const InnerTree::TryStatement> CreateTryStatement(
            std::shared_ptr<const InnerTree::SyntaxToken> tryToken,
            std::shared_ptr<const InnerTree::CompoundStatement> compoundStatement,
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::CatchClause>> catchClauses)
        {
            if (tryToken == nullptr)
                throw std::runtime_error("ArgumentNull - tryToken");
            if (compoundStatement == nullptr)
                throw std::runtime_error("ArgumentNull - compoundStatement");
            if (catchClauses == nullptr)
                throw std::runtime_error("ArgumentNull - catchClauses");
            if (catchClauses->GetItems().empty())
                throw std::runtime_error("CatchClauses must not be empty.");

            auto result = std::shared_ptr<const InnerTree::TryStatement>(
                new InnerTree::TryStatement(
                    std::move(tryToken),
                    std::move(compoundStatement),
                    std::move(catchClauses)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a SyntaxTrivia
        /// </summary>
        static SyntaxTrivia CreateTrivia(std::string value)
        {
            return SyntaxTrivia(std::move(value));
        }


        /// <summary>
        /// Create a TypeSpecifierSequence
        /// Overload that excludes optional leading and trailing modifiers
        /// </summary>
        static std::shared_ptr<const InnerTree::TypeSpecifierSequence> CreateTypeSpecifierSequence(
            std::shared_ptr<const InnerTree::TypeSpecifier> typeSpecifier)
        {
            return CreateTypeSpecifierSequence(
                CreateSyntaxList<InnerTree::SyntaxToken>({}),
                std::move(typeSpecifier),
                CreateSyntaxList<InnerTree::SyntaxToken>({}));
        }

        /// <summary>
        /// Create a TypeSpecifierSequence
        /// </summary>
        static std::shared_ptr<const InnerTree::TypeSpecifierSequence> CreateTypeSpecifierSequence(
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::SyntaxToken>> leadingModifiers,
            std::shared_ptr<const InnerTree::TypeSpecifier> typeSpecifier,
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::SyntaxToken>> trailingModifiers)
        {
            if (leadingModifiers == nullptr)
                throw std::runtime_error("ArgumentNull - leadingModifiers");
            if (typeSpecifier == nullptr)
                throw std::runtime_error("ArgumentNull - typeSpecifier");
            if (trailingModifiers == nullptr)
                throw std::runtime_error("ArgumentNull - trailingModifiers");

            auto result = std::shared_ptr<const InnerTree::TypeSpecifierSequence>(
                new InnerTree::TypeSpecifierSequence(
                    std::move(leadingModifiers),
                    std::move(typeSpecifier),
                    std::move(trailingModifiers)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a UnaryExpression
        /// </summary>
        static std::shared_ptr<const InnerTree::UnaryExpression> CreateUnaryExpression(
            UnaryOperator unaryOperator,
            std::shared_ptr<const InnerTree::SyntaxToken> operatorToken,
            std::shared_ptr<const InnerTree::Expression> operand)
        {
            if (operatorToken == nullptr)
                throw std::runtime_error("ArgumentNull - operatorToken");
            if (operand == nullptr)
                throw std::runtime_error("ArgumentNull - operand");

            auto result = std::shared_ptr<const InnerTree::UnaryExpression>(
                new InnerTree::UnaryExpression(
                    unaryOperator,
                    std::move(operatorToken),
                    std::move(operand)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a InnerTree::SyntaxToken
        /// </summary>
        static std::shared_ptr<const InnerTree::SyntaxToken> CreateUniqueToken(
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

            auto result = std::shared_ptr<const InnerTree::SyntaxToken>(
                new InnerTree::SyntaxToken(
                    type,
                    std::move(value),
                    std::move(leadingTrivia),
                    std::move(trailingTrivia)));
            result->SetSelf(result);
            return result;
        }

        /// <summary>
        /// Create a InnerTree::SyntaxToken
        /// </summary>
        static std::shared_ptr<const InnerTree::SyntaxToken> CreateUniqueToken(
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
        static std::shared_ptr<const InnerTree::ValueEqualInitializer> CreateValueEqualInitializer(
            std::shared_ptr<const InnerTree::SyntaxToken> equalToken,
            std::shared_ptr<const InnerTree::SyntaxNode> expression)
        {
            if (equalToken == nullptr)
                throw std::runtime_error("ArgumentNull - equalToken");
            if (expression == nullptr)
                throw std::runtime_error("ArgumentNull - expression");

            auto result = std::shared_ptr<const InnerTree::ValueEqualInitializer>(
                new InnerTree::ValueEqualInitializer(
                    std::move(equalToken),
                    std::move(expression)));
            result->SetSelf(result);
            return result;
        }
    };
}
