
#pragma once

namespace Soup::Syntax::OuterTree
{
    /// <summary>
    /// The outer tree Syntax wrapper that is exclusively used by
    /// inner tree nodes to wrap themselves in their outer counterpart
    /// Note: To resolve circular references the implementation is hidden away
    /// </summary>
    class SyntaxWrapper
    {
    public:
        /// <summary>
        /// Create a Attribute
        /// </summary>
        static std::shared_ptr<const Attribute> CreateOuter(
            std::shared_ptr<const InnerTree::Attribute> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a AttributeArgumentClause
        /// </summary>
        static std::shared_ptr<const AttributeArgumentClause> CreateOuter(
            std::shared_ptr<const InnerTree::AttributeArgumentClause> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a AttributeSpecifier
        /// </summary>
        static std::shared_ptr<const AttributeSpecifier> CreateOuter(
            std::shared_ptr<const InnerTree::AttributeSpecifier> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a AccessorSpecifier
        /// </summary>
        static std::shared_ptr<const AccessorSpecifier> CreateOuter(
            std::shared_ptr<const InnerTree::AccessorSpecifier> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a BinaryExpression
        /// </summary>
        static std::shared_ptr<const BinaryExpression> CreateOuter(
            std::shared_ptr<const InnerTree::BinaryExpression> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a CatchClause
        /// </summary>
        static std::shared_ptr<const CatchClause> CreateOuter(
            std::shared_ptr<const InnerTree::CatchClause> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a ClassSpecifier
        /// </summary>
        static std::shared_ptr<const ClassSpecifier> CreateOuter(
            std::shared_ptr<const InnerTree::ClassSpecifier> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a CompoundStatement
        /// </summary>
        static std::shared_ptr<const CompoundStatement> CreateOuter(
            std::shared_ptr<const InnerTree::CompoundStatement> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a ConstructorDefinition
        /// </summary>
        static std::shared_ptr<const ConstructorDefinition> CreateOuter(
            std::shared_ptr<const InnerTree::ConstructorDefinition> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a ConstructorInitializer
        /// </summary>
        static std::shared_ptr<const ConstructorInitializer> CreateOuter(
            std::shared_ptr<const InnerTree::ConstructorInitializer> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a DeclarationStatement
        /// </summary>
        static std::shared_ptr<const DeclarationStatement> CreateOuter(
            std::shared_ptr<const InnerTree::DeclarationStatement> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a DeclarationSpecifierSequence
        /// </summary>
        static std::shared_ptr<const DeclarationSpecifierSequence> CreateOuter(
            std::shared_ptr<const InnerTree::DeclarationSpecifierSequence> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a DefaultFunctionBody
        /// </summary>
        static std::shared_ptr<const DefaultFunctionBody> CreateOuter(
            std::shared_ptr<const InnerTree::DefaultFunctionBody> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a DeleteFunctionBody
        /// </summary>
        static std::shared_ptr<const DeleteFunctionBody> CreateOuter(
            std::shared_ptr<const InnerTree::DeleteFunctionBody> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a DestructorIdentifier
        /// </summary>
        static std::shared_ptr<const DestructorIdentifier> CreateOuter(
            std::shared_ptr<const InnerTree::DestructorIdentifier> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a ElseClause
        /// </summary>
        static std::shared_ptr<const ElseClause> CreateOuter(
            std::shared_ptr<const InnerTree::ElseClause> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a EmptyDeclaration
        /// </summary>
        static std::shared_ptr<const EmptyDeclaration> CreateOuter(
            std::shared_ptr<const InnerTree::EmptyDeclaration> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a EmptyStatement
        /// </summary>
        static std::shared_ptr<const EmptyStatement> CreateOuter(
            std::shared_ptr<const InnerTree::EmptyStatement> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a EnumSpecifier
        /// </summary>
        static std::shared_ptr<const EnumSpecifier> CreateOuter(
            std::shared_ptr<const InnerTree::EnumSpecifier> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a EnumeratorDefinition
        /// </summary>
        static std::shared_ptr<const EnumeratorDefinition> CreateOuter(
            std::shared_ptr<const InnerTree::EnumeratorDefinition> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a ExpressionStatement
        /// </summary>
        static std::shared_ptr<const ExpressionStatement> CreateOuter(
            std::shared_ptr<const InnerTree::ExpressionStatement> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a FunctionDefinition
        /// </summary>
        static std::shared_ptr<const FunctionDefinition> CreateOuter(
            std::shared_ptr<const InnerTree::FunctionDefinition> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a IdentifierExpression
        /// </summary>
        static std::shared_ptr<const IdentifierExpression> CreateOuter(
            std::shared_ptr<const InnerTree::IdentifierExpression> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a IdentifierType
        /// </summary>
        static std::shared_ptr<const IdentifierType> CreateOuter(
            std::shared_ptr<const InnerTree::IdentifierType> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a IfStatement
        /// </summary>
        static std::shared_ptr<const IfStatement> CreateOuter(
            std::shared_ptr<const InnerTree::IfStatement> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a InitializerDeclarator
        /// </summary>
        static std::shared_ptr<const InitializerDeclarator> CreateOuter(
            std::shared_ptr<const InnerTree::InitializerDeclarator> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a InitializerDeclaratorList
        /// </summary>
        static std::shared_ptr<const InitializerDeclaratorList> CreateOuter(
            std::shared_ptr<const InnerTree::InitializerDeclaratorList> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a InitializerList
        /// </summary>
        static std::shared_ptr<const InitializerList> CreateOuter(
            std::shared_ptr<const InnerTree::InitializerList> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a InvocationExpression
        /// </summary>
        static std::shared_ptr<const InvocationExpression> CreateOuter(
            std::shared_ptr<const InnerTree::InvocationExpression> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a LiteralExpression
        /// </summary>
        static std::shared_ptr<const LiteralExpression> CreateOuter(
            std::shared_ptr<const InnerTree::LiteralExpression> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a MemberDeclaration
        /// </summary>
        static std::shared_ptr<const MemberDeclaration> CreateOuter(
            std::shared_ptr<const InnerTree::MemberDeclaration> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a MemberDeclarator
        /// </summary>
        static std::shared_ptr<const MemberDeclarator> CreateOuter(
            std::shared_ptr<const InnerTree::MemberDeclarator> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a MemberDeclaratorList
        /// </summary>
        static std::shared_ptr<const MemberDeclaratorList> CreateOuter(
            std::shared_ptr<const InnerTree::MemberDeclaratorList> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a MemberInitializer
        /// </summary>
        static std::shared_ptr<const MemberInitializer> CreateOuter(
            std::shared_ptr<const InnerTree::MemberInitializer> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a NamespaceDefinition
        /// </summary>
        static std::shared_ptr<const NamespaceDefinition> CreateOuter(
            std::shared_ptr<const InnerTree::NamespaceDefinition> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a NestedNameSpecifier
        /// </summary>
        static std::shared_ptr<const NestedNameSpecifier> CreateOuter(
            std::shared_ptr<const InnerTree::NestedNameSpecifier> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a Parameter
        /// </summary>
        static std::shared_ptr<const Parameter> CreateOuter(
            std::shared_ptr<const InnerTree::Parameter> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a ParameterList
        /// </summary>
        static std::shared_ptr<const ParameterList> CreateOuter(
            std::shared_ptr<const InnerTree::ParameterList> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a PointerDeclarator
        /// </summary>
        static std::shared_ptr<const PointerDeclarator> CreateOuter(
            std::shared_ptr<const InnerTree::PointerDeclarator> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a PointerOperator
        /// </summary>
        static std::shared_ptr<const PointerOperator> CreateOuter(
            std::shared_ptr<const InnerTree::PointerOperator> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a PrimitiveDataTypeSpecifier
        /// </summary>
        static std::shared_ptr<const PrimitiveDataTypeSpecifier> CreateOuter(
            std::shared_ptr<const InnerTree::PrimitiveDataTypeSpecifier> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a RegularFunctionBody
        /// </summary>
        static std::shared_ptr<const RegularFunctionBody> CreateOuter(
            std::shared_ptr<const InnerTree::RegularFunctionBody> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a ReturnStatement
        /// </summary>
        static std::shared_ptr<const ReturnStatement> CreateOuter(
            std::shared_ptr<const InnerTree::ReturnStatement> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a SimpleDeclaration
        /// </summary>
        static std::shared_ptr<const SimpleDeclaration> CreateOuter(
            std::shared_ptr<const InnerTree::SimpleDeclaration> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a SimpleIdentifier
        /// </summary>
        static std::shared_ptr<const SimpleIdentifier> CreateOuter(
            std::shared_ptr<const InnerTree::SimpleIdentifier> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a SimpleTemplateIdentifier
        /// </summary>
        static std::shared_ptr<const SimpleTemplateIdentifier> CreateOuter(
            std::shared_ptr<const InnerTree::SimpleTemplateIdentifier> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a SyntaxList
        /// </summary>
        static std::shared_ptr<const SyntaxList<AttributeSpecifier>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::AttributeSpecifier>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxList<CatchClause>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::CatchClause>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxList<Declaration>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::Declaration>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxList<Statement>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::Statement>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxList<SyntaxToken>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxList<InnerTree::SyntaxToken>> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a SyntaxSeparatorList
        /// </summary>
        static std::shared_ptr<const SyntaxSeparatorList<Attribute>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::Attribute>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxSeparatorList<EnumeratorDefinition>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::EnumeratorDefinition>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxSeparatorList<Expression>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::Expression>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxSeparatorList<InitializerDeclarator>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::InitializerDeclarator>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxSeparatorList<MemberDeclarator>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::MemberDeclarator>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxSeparatorList<MemberInitializer>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::MemberInitializer>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxSeparatorList<Parameter>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::Parameter>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::SyntaxNode>> innerNode,
            const SyntaxNode* parentNode);
        static std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::SyntaxToken>> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a SyntaxToken
        /// </summary>
        static std::shared_ptr<const SyntaxToken> CreateOuter(
            std::shared_ptr<const InnerTree::SyntaxToken> innerToken,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a SubscriptExpression
        /// </summary>
        static std::shared_ptr<const SubscriptExpression> CreateOuter(
            std::shared_ptr<const InnerTree::SubscriptExpression> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a ThisExpression
        /// </summary>
        static std::shared_ptr<const ThisExpression> CreateOuter(
            std::shared_ptr<const InnerTree::ThisExpression> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a TranslationUnit
        /// </summary>
        static std::shared_ptr<const TranslationUnit> CreateOuter(
            std::shared_ptr<const InnerTree::TranslationUnit> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a TryFunctionBody
        /// </summary>
        static std::shared_ptr<const TryFunctionBody> CreateOuter(
            std::shared_ptr<const InnerTree::TryFunctionBody> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a TryStatement
        /// </summary>
        static std::shared_ptr<const TryStatement> CreateOuter(
            std::shared_ptr<const InnerTree::TryStatement> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a TypeSpecifierSequence
        /// </summary>
        static std::shared_ptr<const TypeSpecifierSequence> CreateOuter(
            std::shared_ptr<const InnerTree::TypeSpecifierSequence> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a UnaryExpression
        /// </summary>
        static std::shared_ptr<const UnaryExpression> CreateOuter(
            std::shared_ptr<const InnerTree::UnaryExpression> innerNode,
            const SyntaxNode* parentNode);

        /// <summary>
        /// Create a ValueEqualInitializer
        /// </summary>
        static std::shared_ptr<const ValueEqualInitializer> CreateOuter(
            std::shared_ptr<const InnerTree::ValueEqualInitializer> innerNode,
            const SyntaxNode* parentNode);
    };
}
