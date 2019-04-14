
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Base syntax visitor that has a default visitor for all nodes
    /// </summary>
    export class DefaultSyntaxVisitor : public ISyntaxVisitor
    {
    public:
        virtual void Visit(const OuterTree::Attribute& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::AttributeSpecifier& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::AccessorSpecifier& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::BinaryExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::CatchClause& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::ClassDeclaration& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::CompoundStatement& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::ConstructorDefinition& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::ConstructorInitializer& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::DeclarationSpecifier& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::DeclarationStatement& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::DefaultFunctionBody& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::DeleteFunctionBody& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::DestructorIdentifierExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::ElseClause& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::EmptyDeclaration& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::EmptyStatement& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::EnumDeclaration& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::EnumeratorDefinition& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::ExpressionStatement& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::FunctionDefinition& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::IfStatement& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::InitializerDeclarator& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::InitializerDeclaratorList& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::InitializerList& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::InvocationExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::LiteralExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::MemberDeclaration& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::MemberDeclarator& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::MemberDeclaratorList& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::MemberInitializer& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::NamespaceDefinition& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::Parameter& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::ParameterList& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::PrimitiveDataTypeDeclaration& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::QualifiedIdentifierExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::RegularFunctionBody& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::ReturnStatement& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::SimpleDeclaration& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::SimpleIdentifierExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::SimpleTemplateIdentifierExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::SubscriptExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::ThisExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::TranslationUnit& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::TryFunctionBody& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::TryStatement& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::UnaryExpression& node) override
        {
            DefaultVisit(node);
        }

        virtual void Visit(const OuterTree::ValueEqualInitializer& node) override
        {
            DefaultVisit(node);
        }

    protected:
        virtual void DefaultVisit(const OuterTree::SyntaxNode& node)
        {
        }
    };
}
