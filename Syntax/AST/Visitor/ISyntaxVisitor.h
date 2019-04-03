
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax visitor interface
    /// </summary>
    export class ISyntaxVisitor
    {
    public:
        virtual void Visit(const BinaryExpression& node) = 0;
        virtual void Visit(const CatchClause& node) = 0;
        virtual void Visit(const ClassDeclaration& node) = 0;
        virtual void Visit(const CompoundStatement& node) = 0;
        virtual void Visit(const DeclarationSpecifier& node) = 0;
        virtual void Visit(const DeclarationStatement& node) = 0;
        virtual void Visit(const DefaultFunctionBody& node) = 0;
        virtual void Visit(const DeleteFunctionBody& node) = 0;
        virtual void Visit(const DestructorIdentifierExpression& node) = 0;
        virtual void Visit(const ElseClause& node) = 0;
        virtual void Visit(const EmptyDeclaration& node) = 0;
        virtual void Visit(const EmptyStatement& node) = 0;
        virtual void Visit(const EnumDeclaration& node) = 0;
        virtual void Visit(const EnumeratorDefinition& node) = 0;
        virtual void Visit(const ExpressionStatement& node) = 0;
        virtual void Visit(const FunctionDeclaration& node) = 0;
        virtual void Visit(const FunctionDefinition& node) = 0;
        virtual void Visit(const IfStatement& node) = 0;
        virtual void Visit(const InitializerDeclarator& node) = 0;
        virtual void Visit(const InitializerDeclaratorList& node) = 0;
        virtual void Visit(const LiteralExpression& node) = 0;
        virtual void Visit(const NamespaceDefinition& node) = 0;
        virtual void Visit(const Parameter& node) = 0;
        virtual void Visit(const ParameterList& node) = 0;
        virtual void Visit(const PrimitiveDataTypeDeclaration& node) = 0;
        virtual void Visit(const QualifiedIdentifierExpression& node) = 0;
        virtual void Visit(const RegularFunctionBody& node) = 0;
        virtual void Visit(const ReturnStatement& node) = 0;
        virtual void Visit(const SimpleDeclaration& node) = 0;
        virtual void Visit(const SimpleIdentifierExpression& node) = 0;
        virtual void Visit(const SimpleTemplateIdentifierExpression& node) = 0;
        virtual void Visit(const SubscriptExpression& node) = 0;
        virtual void Visit(const ThisExpression& node) = 0;
        virtual void Visit(const TranslationUnit& node) = 0;
        virtual void Visit(const TryFunctionBody& node) = 0;
        virtual void Visit(const TryStatement& node) = 0;
        virtual void Visit(const UnaryExpression& node) = 0;
        virtual void Visit(const ValueEqualInitializer& node) = 0;
    };
}
