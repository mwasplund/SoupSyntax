
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

        virtual void Visit(const CatchClause& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const ClassDeclaration& node) override
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

        virtual void Visit(const DeclarationSpecifier& node) override
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

        virtual void Visit(const ElseClause& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const EmptyDeclaration& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const EmptyStatement& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const EnumDeclaration& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const EnumeratorDefinition& node) override
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

        virtual void Visit(const IfStatement& node) override
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

        virtual void Visit(const Parameter& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const ParameterList& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const PrimitiveDataTypeDeclaration& node) override
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

        virtual void Visit(const SimpleDeclarationStatement& node) override
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

        virtual void Visit(const TryStatement& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const UnaryExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const ValueEqualInitializer& node) override
        {
            DefaultVisit(node);
        }

    protected:
        virtual void DefaultVisit(const SyntaxNode& node)
        {
        }
    };
}
