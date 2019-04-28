
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax visitor interface
    /// </summary>
    export class ISyntaxVisitor
    {
    public:
        virtual void Visit(const OuterTree::Attribute& node) = 0;
        virtual void Visit(const OuterTree::AttributeArgumentClause& node) = 0;
        virtual void Visit(const OuterTree::AttributeSpecifier& node) = 0;
        virtual void Visit(const OuterTree::AccessorSpecifier& node) = 0;
        virtual void Visit(const OuterTree::BinaryExpression& node) = 0;
        virtual void Visit(const OuterTree::CatchClause& node) = 0;
        virtual void Visit(const OuterTree::ClassSpecifier& node) = 0;
        virtual void Visit(const OuterTree::ConstructorDefinition& node) = 0;
        virtual void Visit(const OuterTree::ConstructorInitializer& node) = 0;
        virtual void Visit(const OuterTree::CompoundStatement& node) = 0;
        virtual void Visit(const OuterTree::DeclarationSpecifierSequence& node) = 0;
        virtual void Visit(const OuterTree::DeclarationStatement& node) = 0;
        virtual void Visit(const OuterTree::DefaultFunctionBody& node) = 0;
        virtual void Visit(const OuterTree::DeleteFunctionBody& node) = 0;
        virtual void Visit(const OuterTree::DestructorIdentifier& node) = 0;
        virtual void Visit(const OuterTree::ElseClause& node) = 0;
        virtual void Visit(const OuterTree::EmptyDeclaration& node) = 0;
        virtual void Visit(const OuterTree::EmptyStatement& node) = 0;
        virtual void Visit(const OuterTree::EnumSpecifier& node) = 0;
        virtual void Visit(const OuterTree::EnumeratorDefinition& node) = 0;
        virtual void Visit(const OuterTree::ExpressionStatement& node) = 0;
        virtual void Visit(const OuterTree::FunctionDefinition& node) = 0;
        virtual void Visit(const OuterTree::IdentifierExpression& node) = 0;
        virtual void Visit(const OuterTree::IdentifierType& node) = 0;
        virtual void Visit(const OuterTree::IfStatement& node) = 0;
        virtual void Visit(const OuterTree::InitializerDeclarator& node) = 0;
        virtual void Visit(const OuterTree::InitializerDeclaratorList& node) = 0;
        virtual void Visit(const OuterTree::InitializerList& node) = 0;
        virtual void Visit(const OuterTree::InvocationExpression& node) = 0;
        virtual void Visit(const OuterTree::LambdaExpression& node) = 0;
        virtual void Visit(const OuterTree::LiteralExpression& node) = 0;
        virtual void Visit(const OuterTree::MemberDeclaration& node) = 0;
        virtual void Visit(const OuterTree::MemberDeclarator& node) = 0;
        virtual void Visit(const OuterTree::MemberDeclaratorList& node) = 0;
        virtual void Visit(const OuterTree::MemberInitializer& node) = 0;
        virtual void Visit(const OuterTree::NamespaceDefinition& node) = 0;
        virtual void Visit(const OuterTree::NestedNameSpecifier& node) = 0;
        virtual void Visit(const OuterTree::Parameter& node) = 0;
        virtual void Visit(const OuterTree::ParameterList& node) = 0;
        virtual void Visit(const OuterTree::PointerDeclarator& node) = 0;
        virtual void Visit(const OuterTree::PointerOperator& node) = 0;
        virtual void Visit(const OuterTree::PrimitiveDataTypeSpecifier& node) = 0;
        virtual void Visit(const OuterTree::RegularFunctionBody& node) = 0;
        virtual void Visit(const OuterTree::ReturnStatement& node) = 0;
        virtual void Visit(const OuterTree::SimpleDeclaration& node) = 0;
        virtual void Visit(const OuterTree::SimpleIdentifier& node) = 0;
        virtual void Visit(const OuterTree::SimpleTemplateIdentifier& node) = 0;
        virtual void Visit(const OuterTree::SubscriptExpression& node) = 0;
        virtual void Visit(const OuterTree::ThisExpression& node) = 0;
        virtual void Visit(const OuterTree::TranslationUnit& node) = 0;
        virtual void Visit(const OuterTree::TryFunctionBody& node) = 0;
        virtual void Visit(const OuterTree::TryStatement& node) = 0;
        virtual void Visit(const OuterTree::TypeSpecifierSequence& node) = 0;
        virtual void Visit(const OuterTree::UnaryExpression& node) = 0;
        virtual void Visit(const OuterTree::ValueEqualInitializer& node) = 0;
    };
}
