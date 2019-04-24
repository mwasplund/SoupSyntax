module SoupSyntax;
using namespace Soup::Syntax;
using namespace Soup::Syntax::OuterTree;

/*static*/ std::shared_ptr<const Attribute> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::Attribute> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const Attribute>(
        new Attribute(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const AttributeSpecifier> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::AttributeSpecifier> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const AttributeSpecifier>(
        new AttributeSpecifier(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const AccessorSpecifier> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::AccessorSpecifier> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const AccessorSpecifier>(
        new AccessorSpecifier(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const BinaryExpression> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::BinaryExpression> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const BinaryExpression>(
        new BinaryExpression(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const CatchClause> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::CatchClause> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const CatchClause>(
        new CatchClause(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const ClassSpecifier> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::ClassSpecifier> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const ClassSpecifier>(
        new ClassSpecifier(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const CompoundStatement> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::CompoundStatement> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const CompoundStatement>(
        new CompoundStatement(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const ConstructorDefinition> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::ConstructorDefinition> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const ConstructorDefinition>(
        new ConstructorDefinition(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const ConstructorInitializer> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::ConstructorInitializer> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const ConstructorInitializer>(
        new ConstructorInitializer(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const DeclarationStatement> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::DeclarationStatement> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const DeclarationStatement>(
        new DeclarationStatement(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const DeclarationSpecifierSequence> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::DeclarationSpecifierSequence> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const DeclarationSpecifierSequence>(
        new DeclarationSpecifierSequence(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const DefaultFunctionBody> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::DefaultFunctionBody> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const DefaultFunctionBody>(
        new DefaultFunctionBody(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const DeleteFunctionBody> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::DeleteFunctionBody> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const DeleteFunctionBody>(
        new DeleteFunctionBody(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const DestructorIdentifier> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::DestructorIdentifier> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const DestructorIdentifier>(
        new DestructorIdentifier(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const ElseClause> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::ElseClause> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const ElseClause>(
        new ElseClause(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const EmptyDeclaration> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::EmptyDeclaration> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const EmptyDeclaration>(
        new EmptyDeclaration(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const EmptyStatement> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::EmptyStatement> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const EmptyStatement>(
        new EmptyStatement(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const EnumSpecifier> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::EnumSpecifier> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const EnumSpecifier>(
        new EnumSpecifier(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const EnumeratorDefinition> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::EnumeratorDefinition> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const EnumeratorDefinition>(
        new EnumeratorDefinition(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const ExpressionStatement> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::ExpressionStatement> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const ExpressionStatement>(
        new ExpressionStatement(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const FunctionDefinition> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::FunctionDefinition> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const FunctionDefinition>(
        new FunctionDefinition(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const IdentifierExpression> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::IdentifierExpression> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const IdentifierExpression>(
        new IdentifierExpression(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const IdentifierType> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::IdentifierType> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const IdentifierType>(
        new IdentifierType(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const IfStatement> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::IfStatement> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const IfStatement>(
        new IfStatement(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const InitializerDeclarator> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::InitializerDeclarator> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const InitializerDeclarator>(
        new InitializerDeclarator(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const InitializerDeclaratorList> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::InitializerDeclaratorList> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const InitializerDeclaratorList>(
        new InitializerDeclaratorList(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const InitializerList> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::InitializerList> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const InitializerList>(
        new InitializerList(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const InvocationExpression> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::InvocationExpression> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const InvocationExpression>(
        new InvocationExpression(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const LiteralExpression> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::LiteralExpression> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const LiteralExpression>(
        new LiteralExpression(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const MemberDeclaration> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::MemberDeclaration> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const MemberDeclaration>(
        new MemberDeclaration(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const MemberDeclarator> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::MemberDeclarator> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const MemberDeclarator>(
        new MemberDeclarator(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const MemberDeclaratorList> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::MemberDeclaratorList> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const MemberDeclaratorList>(
        new MemberDeclaratorList(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const MemberInitializer> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::MemberInitializer> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const MemberInitializer>(
        new MemberInitializer(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const NamespaceDefinition> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::NamespaceDefinition> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const NamespaceDefinition>(
        new NamespaceDefinition(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const NestedNameSpecifier> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::NestedNameSpecifier> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const NestedNameSpecifier>(
        new NestedNameSpecifier(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const Parameter> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::Parameter> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const Parameter>(
        new Parameter(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const ParameterList> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::ParameterList> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const ParameterList>(
        new ParameterList(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const PointerDeclarator> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::PointerDeclarator> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const PointerDeclarator>(
        new PointerDeclarator(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const PointerOperator> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::PointerOperator> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const PointerOperator>(
        new PointerOperator(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const PrimitiveDataTypeSpecifier> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::PrimitiveDataTypeSpecifier> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const PrimitiveDataTypeSpecifier>(
        new PrimitiveDataTypeSpecifier(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const RegularFunctionBody> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::RegularFunctionBody> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const RegularFunctionBody>(
        new RegularFunctionBody(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const ReturnStatement> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::ReturnStatement> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const ReturnStatement>(
        new ReturnStatement(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const SimpleDeclaration> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SimpleDeclaration> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SimpleDeclaration>(
        new SimpleDeclaration(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const SimpleIdentifier> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SimpleIdentifier> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SimpleIdentifier>(
        new SimpleIdentifier(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const SimpleTemplateIdentifier> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SimpleTemplateIdentifier> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SimpleTemplateIdentifier>(
        new SimpleTemplateIdentifier(std::move(innerNode), parentNode));
}

template<typename TOuter, typename TInner>
std::vector<std::shared_ptr<const TOuter>> CreateOuterList(
    std::vector<std::shared_ptr<const TInner>> innerItems,
    const SyntaxNode* parentNode)
{
    std::vector<std::shared_ptr<const TOuter>> items;
    for (auto& item : innerItems)
    {
        // TODO: Debug only
        if (item == nullptr)
            throw std::runtime_error("Inner item was null.");

        items.push_back(
            std::dynamic_pointer_cast<const TOuter>(
                item->CreateOuterAny(parentNode)));
    }

    return items;
}

template<>
std::vector<std::shared_ptr<const SyntaxToken>> CreateOuterList(
    std::vector<std::shared_ptr<const InnerTree::SyntaxToken>> innerItems,
    const SyntaxNode* parentNode)
{
    std::vector<std::shared_ptr<const SyntaxToken>> items;
    for (auto& item : innerItems)
    {
        // TODO: Debug only
        if (item == nullptr)
            throw std::runtime_error("Inner item was null.");

        items.push_back(item->CreateOuter(parentNode));
    }

    return items;
}

/*static*/ std::shared_ptr<const SyntaxList<AttributeSpecifier>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxList<InnerTree::AttributeSpecifier>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxList<AttributeSpecifier>>(
        new SyntaxList<AttributeSpecifier>(
            CreateOuterList<AttributeSpecifier>(innerNode->GetItems(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxList<CatchClause>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxList<InnerTree::CatchClause>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxList<CatchClause>>(
        new SyntaxList<CatchClause>(
            CreateOuterList<CatchClause>(innerNode->GetItems(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxList<Declaration>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxList<InnerTree::Declaration>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxList<Declaration>>(
        new SyntaxList<Declaration>(
            CreateOuterList<Declaration>(innerNode->GetItems(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxList<Statement>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxList<InnerTree::Statement>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxList<Statement>>(
        new SyntaxList<Statement>(
            CreateOuterList<Statement>(innerNode->GetItems(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxList<SyntaxToken>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxList<InnerTree::SyntaxToken>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxList<SyntaxToken>>(
        new SyntaxList<SyntaxToken>(
            CreateOuterList<SyntaxToken>(innerNode->GetItems(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxSeparatorList<Attribute>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::Attribute>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxSeparatorList<Attribute>>(
        new SyntaxSeparatorList<Attribute>(
            CreateOuterList<Attribute>(innerNode->GetItems(), parentNode),
            CreateOuterList<SyntaxToken>(innerNode->GetSeparators(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxSeparatorList<EnumeratorDefinition>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::EnumeratorDefinition>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxSeparatorList<EnumeratorDefinition>>(
        new SyntaxSeparatorList<EnumeratorDefinition>(
            CreateOuterList<EnumeratorDefinition>(innerNode->GetItems(), parentNode),
            CreateOuterList<SyntaxToken>(innerNode->GetSeparators(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxSeparatorList<Expression>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::Expression>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxSeparatorList<Expression>>(
        new SyntaxSeparatorList<Expression>(
            CreateOuterList<Expression>(innerNode->GetItems(), parentNode),
            CreateOuterList<SyntaxToken>(innerNode->GetSeparators(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxSeparatorList<InitializerDeclarator>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::InitializerDeclarator>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxSeparatorList<InitializerDeclarator>>(
        new SyntaxSeparatorList<InitializerDeclarator>(
            CreateOuterList<InitializerDeclarator>(innerNode->GetItems(), parentNode),
            CreateOuterList<SyntaxToken>(innerNode->GetSeparators(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxSeparatorList<MemberDeclarator>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::MemberDeclarator>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxSeparatorList<MemberDeclarator>>(
        new SyntaxSeparatorList<MemberDeclarator>(
            CreateOuterList<MemberDeclarator>(innerNode->GetItems(), parentNode),
            CreateOuterList<SyntaxToken>(innerNode->GetSeparators(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxSeparatorList<MemberInitializer>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::MemberInitializer>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxSeparatorList<MemberInitializer>>(
        new SyntaxSeparatorList<MemberInitializer>(
            CreateOuterList<MemberInitializer>(innerNode->GetItems(), parentNode),
            CreateOuterList<SyntaxToken>(innerNode->GetSeparators(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxSeparatorList<Parameter>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::Parameter>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxSeparatorList<Parameter>>(
        new SyntaxSeparatorList<Parameter>(
            CreateOuterList<Parameter>(innerNode->GetItems(), parentNode),
            CreateOuterList<SyntaxToken>(innerNode->GetSeparators(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::SyntaxNode>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxSeparatorList<SyntaxNode>>(
        new SyntaxSeparatorList<SyntaxNode>(
            CreateOuterList<SyntaxNode>(innerNode->GetItems(), parentNode),
            CreateOuterList<SyntaxToken>(innerNode->GetSeparators(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxSeparatorList<InnerTree::SyntaxToken>> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxSeparatorList<SyntaxToken>>(
        new SyntaxSeparatorList<SyntaxToken>(
            CreateOuterList<SyntaxToken>(innerNode->GetItems(), parentNode),
            CreateOuterList<SyntaxToken>(innerNode->GetSeparators(), parentNode)));
}

/*static*/ std::shared_ptr<const SyntaxToken> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SyntaxToken> innerToken,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SyntaxToken>(
        new SyntaxToken(std::move(innerToken), parentNode));
}

/*static*/ std::shared_ptr<const SubscriptExpression> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::SubscriptExpression> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const SubscriptExpression>(
        new SubscriptExpression(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const ThisExpression> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::ThisExpression> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const ThisExpression>(
        new ThisExpression(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const TranslationUnit> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::TranslationUnit> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const TranslationUnit>(
        new TranslationUnit(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const TryFunctionBody> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::TryFunctionBody> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const TryFunctionBody>(
        new TryFunctionBody(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const TryStatement> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::TryStatement> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const TryStatement>(
        new TryStatement(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const TypeSpecifierSequence> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::TypeSpecifierSequence> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const TypeSpecifierSequence>(
        new TypeSpecifierSequence(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const UnaryExpression> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::UnaryExpression> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const UnaryExpression>(
        new UnaryExpression(std::move(innerNode), parentNode));
}

/*static*/ std::shared_ptr<const ValueEqualInitializer> SyntaxWrapper::CreateOuter(
    std::shared_ptr<const InnerTree::ValueEqualInitializer> innerNode,
    const SyntaxNode* parentNode)
{
    return std::shared_ptr<const ValueEqualInitializer>(
        new ValueEqualInitializer(std::move(innerNode), parentNode));
}
