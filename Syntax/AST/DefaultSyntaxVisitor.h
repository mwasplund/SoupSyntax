
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Base syntax visitor that has a default visitor for all nodes
    /// </summary>
    export class DefaultSyntaxVisitor : public ISyntaxVisitor
    {
    public:
        virtual void Visit(const BinaryExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const CompoundStatement& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const DeclarationSequence& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const DeclarationSpecifierSequence& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const DefaultFunctionBody& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const DeleteFunctionBody& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const FunctionDeclaration& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const FunctionDefinition& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const InitializerDeclarator& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const InitializerDeclaratorList& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const LiteralExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const ParameterList& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const PrimitiveDataTypeNode& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const QualifiedNameExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const RegularFunctionBody& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const ReturnStatement& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const SimpleDefinition& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const SimpleNameExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const SubscriptExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const ThisExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const TranslationUnit& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const TryFunctionBody& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const UnaryExpression& node) override
        {
            DefaultVisit(node);
        }

    protected:
        virtual void DefaultVisit(const SyntaxNode& node)
        {
        }
    };
}
