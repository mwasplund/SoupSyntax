
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
        virtual void Visit(const CompoundStatement& node) = 0;
        virtual void Visit(const DeclarationSequence& node) = 0;
        virtual void Visit(const DeclarationSpecifierSequence& node) = 0;
        virtual void Visit(const DefaultFunctionBody& node) = 0;
        virtual void Visit(const DeleteFunctionBody& node) = 0;
        virtual void Visit(const FunctionDeclaration& node) = 0;
        virtual void Visit(const FunctionDefinition& node) = 0;
        virtual void Visit(const InitializerDeclarator& node) = 0;
        virtual void Visit(const InitializerDeclaratorList& node) = 0;
        virtual void Visit(const LiteralExpression& node) = 0;
        virtual void Visit(const Parameter& node) = 0;
        virtual void Visit(const ParameterList& node) = 0;
        virtual void Visit(const PrimitiveDataTypeNode& node) = 0;
        virtual void Visit(const QualifiedNameExpression& node) = 0;
        virtual void Visit(const RegularFunctionBody& node) = 0;
        virtual void Visit(const ReturnStatement& node) = 0;
        virtual void Visit(const SimpleDefinition& node) = 0;
        virtual void Visit(const SimpleNameExpression& node) = 0;
        virtual void Visit(const SubscriptExpression& node) = 0;
        virtual void Visit(const ThisExpression& node) = 0;
        virtual void Visit(const TranslationUnit& node) = 0;
        virtual void Visit(const TryFunctionBody& node) = 0;
        virtual void Visit(const UnaryExpression& node) = 0;
    };
}
