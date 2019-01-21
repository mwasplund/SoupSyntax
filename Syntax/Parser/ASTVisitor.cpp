module SoupSyntax;
using namespace Soup::Syntax;

Node ASTVisitor::VisitTypedefName(CppParser.TypedefNameContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNamespaceName(CppParser.NamespaceNameContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNamespaceAlias(CppParser.NamespaceAliasContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitClassName(CppParser.ClassNameContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitEnumName(CppParser.EnumNameContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTemplateName(CppParser.TemplateNameContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTranslationUnit(CppParser.TranslationUnitContext context)
{
    var result = new TranslationUnit();

    // Check for the optional declaration sequences
    var declarationSequence = context.declarationSequence();
    if (declarationSequence != null)
    {
        result.Declarations = (DeclarationSequence)Visit(declarationSequence);
    }

    return result;
}

Node ASTVisitor::VisitPrimaryExpression(CppParser.PrimaryExpressionContext context)
{
    if (context.literal () != null)
    {
        return Visit(context.literal());
    }
    else
    {
        throw new NotImplementedException();
    }
}

Node ASTVisitor::VisitUnqualifiedIdentifier(CppParser.UnqualifiedIdentifierContext context)
{
    var identifier = context.Identifier();
    return new Identifier(identifier.GetText());
}

Node ASTVisitor::VisitQualifiedIdentifier(CppParser.QualifiedIdentifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNestedNameSpecifier(CppParser.NestedNameSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitLambdaExpression(CppParser.LambdaExpressionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitLambdaIntroducer(CppParser.LambdaIntroducerContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitLambdaDeclarator(CppParser.LambdaDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitLambdaCapture(CppParser.LambdaCaptureContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitCaptureDefault(CppParser.CaptureDefaultContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitCaptureList(CppParser.CaptureListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitCapture(CppParser.CaptureContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitSimpleCapture(CppParser.SimpleCaptureContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitInitializerCapture(CppParser.InitializerCaptureContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitFoldExpression(CppParser.FoldExpressionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitFoldOperator(CppParser.FoldOperatorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitPostfixExpression(CppParser.PostfixExpressionContext context)
{
    if (context.primaryExpression() != null)
    {
        return Visit(context.primaryExpression());
    }
    else
    {
        throw new NotImplementedException();
    }
}

Node ASTVisitor::VisitExpressionList(CppParser.ExpressionListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitPseudoDestructorName(CppParser.PseudoDestructorNameContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitUnaryExpression(CppParser.UnaryExpressionContext context)
{
    if (context.postfixExpression() != null)
    {
        return Visit(context.postfixExpression());
    }
    else
    {
        throw new NotImplementedException();
    }
}

Node ASTVisitor::VisitUnaryOperator(CppParser.UnaryOperatorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNewExpression(CppParser.NewExpressionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNewPlacement(CppParser.NewPlacementContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNewTypeIdentifier(CppParser.NewTypeIdentifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNewDeclarator(CppParser.NewDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNoPointerNewDeclarator(CppParser.NoPointerNewDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNewInitializer(CppParser.NewInitializerContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitDeleteExpression(CppParser.DeleteExpressionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNoExceptionExpression(CppParser.NoExceptionExpressionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitCastExpression(CppParser.CastExpressionContext context)
{
    if (context.LeftParenthesis() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.unaryExpression());
    }
}

Node ASTVisitor::VisitPointerManipulationExpression(CppParser.PointerManipulationExpressionContext context)
{
    if (context.PeriodAsterisk() != null)
    {
        throw new NotImplementedException();
    }
    else if (context.ArrowAsterisk() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.castExpression());
    }
}

Node ASTVisitor::VisitMultiplicativeExpression(CppParser.MultiplicativeExpressionContext context)
{
    if (context.Asterisk() != null)
    {
        throw new NotImplementedException();
    }
    else if (context.ForwardSlash() != null)
    {
        throw new NotImplementedException();
    }
    else if (context.Percent() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.pointerManipulationExpression());
    }
}

Node ASTVisitor::VisitAdditiveExpression(CppParser.AdditiveExpressionContext context)
{
    if (context.Plus() != null)
    {
        throw new NotImplementedException();
    }
    else if (context.Minus() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.multiplicativeExpression());
    }
}

Node ASTVisitor::VisitShiftExpression(CppParser.ShiftExpressionContext context)
{
    if (context.DoubleLessThan() != null)
    {
        throw new NotImplementedException();
    }
    else if (context.DoubleGreaterThan() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.additiveExpression());
    }
}

Node ASTVisitor::VisitRelationalExpression(CppParser.RelationalExpressionContext context)
{
    if (context.LessThan() != null)
    {
        throw new NotImplementedException();
    }
    else if (context.GreaterThan() != null)
    {
        throw new NotImplementedException();
    }
    else if (context.LessThanEqual() != null)
    {
        throw new NotImplementedException();
    }
    else if (context.GreaterThanEqual() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.shiftExpression());
    }
}

Node ASTVisitor::VisitEqualityExpression(CppParser.EqualityExpressionContext context)
{
    if (context.DoubleEqual() != null)
    {
        throw new NotImplementedException();
    }
    else if (context.ExclamationMarkEqual() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.relationalExpression());
    }
}

Node ASTVisitor::VisitAndExpression(CppParser.AndExpressionContext context)
{
    if (context.Ampersand() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.equalityExpression());
    }
}

Node ASTVisitor::VisitExclusiveOrExpression(CppParser.ExclusiveOrExpressionContext context)
{
    if (context.Caret() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.andExpression());
    }
}

Node ASTVisitor::VisitInclusiveOrExpression(CppParser.InclusiveOrExpressionContext context)
{
    if (context.VerticalBar() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.exclusiveOrExpression());
    }
}

Node ASTVisitor::VisitLogicalAndExpression(CppParser.LogicalAndExpressionContext context)
{
    if (context.DoubleAmpersand() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.inclusiveOrExpression());
    }
}

Node ASTVisitor::VisitLogicalOrExpression(CppParser.LogicalOrExpressionContext context)
{
    if (context.DoubleVerticalBar() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.logicalAndExpression());
    }
}

Node ASTVisitor::VisitConditionalExpression(CppParser.ConditionalExpressionContext context)
{
    if (context.QuestionMark() != null)
    {
        throw new NotImplementedException();
    }
    else
    {
        return Visit(context.logicalOrExpression());
    }
}

Node ASTVisitor::VisitThrowExpression(CppParser.ThrowExpressionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAssignmentExpression(CppParser.AssignmentExpressionContext context)
{
    if (context.conditionalExpression() != null)
    {
        return Visit(context.conditionalExpression());
    }
    else
    {
        throw new NotImplementedException();
    }
}

Node ASTVisitor::VisitAssignmentOperator(CppParser.AssignmentOperatorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitExpression(CppParser.ExpressionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitConstantExpression(CppParser.ConstantExpressionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitInitializerStatement(CppParser.InitializerStatementContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitCondition(CppParser.ConditionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitLabeledStatement(CppParser.LabeledStatementContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitExpressionStatement(CppParser.ExpressionStatementContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitCompoundStatement(CppParser.CompoundStatementContext context)
{
    // Check for optional sequence
    CompoundStatement result = null;
    var sequence = context.statementSequence();
    if (sequence != null)
    {
        result = (CompoundStatement)Visit(sequence);
    }
    else
    {
        result = new CompoundStatement();
    }

    // TODO: Reference the source braces
    return result;
}

Node ASTVisitor::VisitStatementSequence(CppParser.StatementSequenceContext context)
{
    // Handle the recursive rule
    CompoundStatement sequence;
    var childSequence = context.statementSequence();
    if (childSequence != null)
    {
        sequence = (CompoundStatement)Visit(childSequence);
    }
    else
    {
        sequence = new CompoundStatement();
    }

    // Handle the new item
    var statement = (Statement)Visit(context.statement());
    sequence.Statements.Add(statement);

    return sequence;
}

Node ASTVisitor::VisitSelectionStatement(CppParser.SelectionStatementContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitIterationStatement(CppParser.IterationStatementContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitForInitializerStatement(CppParser.ForInitializerStatementContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitForRangeDeclaration(CppParser.ForRangeDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitForRangeInitializer(CppParser.ForRangeInitializerContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitJumpStatement(CppParser.JumpStatementContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitDeclarationStatement(CppParser.DeclarationStatementContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitDeclarationSequence(CppParser.DeclarationSequenceContext context)
{
    // Handle the recursive rule
    DeclarationSequence sequence;
    var childSequence = context.declarationSequence();
    if (childSequence != null)
    {
        sequence = (DeclarationSequence)Visit(childSequence);
    }
    else
    {
        sequence = new DeclarationSequence();
    }

    // Handle the new item
    var declaration = context.declaration();
    sequence.Declarations.Add((Declaration)Visit(declaration));

    return sequence;
}

Node ASTVisitor::VisitNoDeclarationSpecifierFunctionDeclaration(CppParser.NoDeclarationSpecifierFunctionDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAliasDeclaration(CppParser.AliasDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitSimpleDeclaration(CppParser.SimpleDeclarationContext context)
{
    return new SimpleDefinition()
    {
        DeclarationSpecifierSequence = (DeclarationSpecifierSequence)Visit(context.declarationSpecifierSequence()),
        InitializerDeclaratorList = (InitializerDeclaratorList)Visit(context.initializerDeclaratorList()),
    };
}

Node ASTVisitor::VisitStaticAssertDeclaration(CppParser.StaticAssertDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitEmptyDeclaration(CppParser.EmptyDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAttributeDeclaration(CppParser.AttributeDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitDeclarationSpecifier(CppParser.DeclarationSpecifierContext context)
{
    if (context.definingTypeSpecifier() != null)
    {
        return Visit(context.definingTypeSpecifier());
    }
    else
    {
        throw new InvalidOperationException("Unexpected declaration specifier");
    }
}

Node ASTVisitor::VisitDeclarationSpecifierSequence(CppParser.DeclarationSpecifierSequenceContext context)
{
    // Handle the recursive rule
    DeclarationSpecifierSequence sequence;
    var childSequence = context.declarationSpecifierSequence();
    if (childSequence != null)
    {
        sequence = (DeclarationSpecifierSequence)Visit(childSequence);
    }
    else
    {
        sequence = new DeclarationSpecifierSequence();
    }

    // Handle the new item
    var specifier = context.declarationSpecifier();
    sequence.Specifiers.Add(Visit(specifier));

    return sequence;
}

Node ASTVisitor::VisitStorageClassSpecifier(CppParser.StorageClassSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitFunctionSpecifier(CppParser.FunctionSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTypeSpecifierSequence(CppParser.TypeSpecifierSequenceContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitDefiningTypeSpecifierSequence(CppParser.DefiningTypeSpecifierSequenceContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitSimpleTypeSpecifier(CppParser.SimpleTypeSpecifierContext context)
{
    if (context.Char() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Char);
    else if (context.Char16() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Char16);
    else if (context.Char32() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Char32);
    else if (context.WChar() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.WChar);
    else if (context.Bool() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Bool);
    else if (context.Short() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Short);
    else if (context.Int() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Int);
    else if (context.Long() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Long);
    else if (context.Signed() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Signed);
    else if (context.Unsigned() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Unsigned);
    else if (context.Float() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Float);
    else if (context.Double() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Double);
    else if (context.Void() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Void);
    else if (context.Auto() != null)
        return new PrimitiveDataTypeNode(PrimitiveDataType.Auto);

    throw new InvalidOperationException("Unexpected simple type.");
}

Node ASTVisitor::VisitTypeName(CppParser.TypeNameContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitDeclarationTypeSpecifier(CppParser.DeclarationTypeSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitElaboratedTypeSpecifier(CppParser.ElaboratedTypeSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitEnumSpecifier(CppParser.EnumSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitEnumHead(CppParser.EnumHeadContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitEnumHeadName(CppParser.EnumHeadNameContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitOpaqueEnumDeclaration(CppParser.OpaqueEnumDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitEnumKey(CppParser.EnumKeyContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitEnumBase(CppParser.EnumBaseContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitEnumeratorList(CppParser.EnumeratorListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitEnumeratorDefinition(CppParser.EnumeratorDefinitionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitEnumerator(CppParser.EnumeratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNamespaceDefinition(CppParser.NamespaceDefinitionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNamedNamespaceDefinition(CppParser.NamedNamespaceDefinitionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitUnnamedNamespaceDefinition(CppParser.UnnamedNamespaceDefinitionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNestedNamespaceDefinition(CppParser.NestedNamespaceDefinitionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitEnclosingNamespaceSpecifier(CppParser.EnclosingNamespaceSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNamespaceBody(CppParser.NamespaceBodyContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNamespaceAliasDefinition(CppParser.NamespaceAliasDefinitionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitQualifiedNamespaceSpecifier(CppParser.QualifiedNamespaceSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitUsingDeclaration(CppParser.UsingDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitUsingDeclaratorList(CppParser.UsingDeclaratorListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitUsingDeclarator(CppParser.UsingDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitUsingDirective(CppParser.UsingDirectiveContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAsmDefinition(CppParser.AsmDefinitionContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitLinkageSpecification(CppParser.LinkageSpecificationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAttributeSpecifierSequence(CppParser.AttributeSpecifierSequenceContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAttributeSpecifier(CppParser.AttributeSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAlignmentSpecifier(CppParser.AlignmentSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAttributeUsingPrefix(CppParser.AttributeUsingPrefixContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAttributeList(CppParser.AttributeListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAttribute(CppParser.AttributeContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAttributeToken(CppParser.AttributeTokenContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAttributeScopedToken(CppParser.AttributeScopedTokenContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAttributeNamespace(CppParser.AttributeNamespaceContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAttributeArgumentClause(CppParser.AttributeArgumentClauseContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitBalancedTokenSequence(CppParser.BalancedTokenSequenceContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitBalancedToken(CppParser.BalancedTokenContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitInitializerDeclaratorList(CppParser.InitializerDeclaratorListContext context)
{
    // Handle the recursive rule
    InitializerDeclaratorList list;
    var childList = context.initializerDeclaratorList();
    if (childList != null)
    {
        list = (InitializerDeclaratorList)Visit(childList);
    }
    else
    {
        list = new InitializerDeclaratorList();
    }

    // Handle the new item
    var item = (InitializerDeclarator)Visit(context.initializerDeclarator());
    list.Items.Add(item);

    return list;
}

Node ASTVisitor::VisitInitializerDeclarator(CppParser.InitializerDeclaratorContext context)
{
    // Check for optional initializer
    Node ASTVisitor::initializer = null;
    if (context.initializer() != null)
    {
        initializer = Visit(context.initializer());
    }

    return new InitializerDeclarator()
    {
        Declarator = Visit(context.declarator()),
        Initializer = initializer,
    };
}

Node ASTVisitor::VisitPointerDeclarator(CppParser.PointerDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNoPointerDeclarator(CppParser.NoPointerDeclaratorContext context)
{
    // Check if it was an identifier declarator
    var identifierExpression = context.identifierExpression();
    if (identifierExpression != null)
    {
        return Visit(identifierExpression);
    }

    throw new InvalidOperationException("Unknown sub type.");
}

Node ASTVisitor::VisitParametersAndQualifiers(CppParser.ParametersAndQualifiersContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTrailingReturnType(CppParser.TrailingReturnTypeContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitPointerOperator(CppParser.PointerOperatorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitConstVolatileQualifierSequence(CppParser.ConstVolatileQualifierSequenceContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitConstVolatileQualifier(CppParser.ConstVolatileQualifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitReferenceQualifier(CppParser.ReferenceQualifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTypeIdentifier(CppParser.TypeIdentifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitDefiningTypeIdentifier(CppParser.DefiningTypeIdentifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAbstractDeclarator(CppParser.AbstractDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitPointerAbstractDeclarator(CppParser.PointerAbstractDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNoPointerAbstractDeclarator(CppParser.NoPointerAbstractDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAbstractPackDeclarator(CppParser.AbstractPackDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNoPointerAbstractPackDeclarator(CppParser.NoPointerAbstractPackDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitParameterDeclarationClause(CppParser.ParameterDeclarationClauseContext context)
{
    // TODO Items
    return new ParameterList();
}

Node ASTVisitor::VisitParameterDeclarationList(CppParser.ParameterDeclarationListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitParameterDeclaration(CppParser.ParameterDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitFunctionDefinition(CppParser.FunctionDefinitionContext context)
{
    // Check for optional return type
    DeclarationSpecifierSequence returnType = null;
    if (context.declarationSpecifierSequence() != null)
    {
        returnType = (DeclarationSpecifierSequence)Visit(context.declarationSpecifierSequence());
    }

    // Analyze the declarator
    var declaratorContext = context.functionDeclarator();
    var identifier = (Identifier)Visit(declaratorContext.identifierExpression());
    var parameterList = (ParameterList)Visit(declaratorContext.functionParameters());
    // TODO Qualifiers
    // TODO Trailiing return type

    var body = Visit(context.functionBody());

    return new FunctionDefinition()
    {
        ReturnType = returnType,
        Identifier = identifier,
        ParameterList = parameterList,
        Body = body,
    };
}

Node ASTVisitor::VisitRegularFunctionBody(CppParser.RegularFunctionBodyContext context)
{
    return new RegularFunctionBody()
    {
        Statements = (CompoundStatement)Visit(context.compoundStatement()),
    };
}


Node ASTVisitor::VisitExplicitlyDefaultedFunction(CppParser.ExplicitlyDefaultedFunctionContext context)
{
    return new DefaultFunctionBody();
}

Node ASTVisitor::VisitDeletedFunction(CppParser.DeletedFunctionContext context)
{
    return new DeleteFunctionBody();
}

Node ASTVisitor::VisitBraceOrEqualInitializer(CppParser.BraceOrEqualInitializerContext context)
{
    if (context.Equal() != null)
    {
        return Visit(context.initializerClause());
    }
    else
    {
        return Visit(context.bracedInitializerList());
    }
}

Node ASTVisitor::VisitInitializerList(CppParser.InitializerListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitBracedInitializerList(CppParser.BracedInitializerListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitExpressionOrBracedInitializerList(CppParser.ExpressionOrBracedInitializerListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitClassSpecifier(CppParser.ClassSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitClassHead(CppParser.ClassHeadContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitClassHeadName(CppParser.ClassHeadNameContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitClassVirtualSpecifier(CppParser.ClassVirtualSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitClassKey(CppParser.ClassKeyContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitMemberSpecification(CppParser.MemberSpecificationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitMemberDeclaration(CppParser.MemberDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitMemberDeclaratorList(CppParser.MemberDeclaratorListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitMemberDeclarator(CppParser.MemberDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitVirtualSpecifierSequence(CppParser.VirtualSpecifierSequenceContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitVirtualSpecifier(CppParser.VirtualSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitPureSpecifier(CppParser.PureSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitBaseClause(CppParser.BaseClauseContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitBaseSpecifierList(CppParser.BaseSpecifierListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitBaseSpecifier(CppParser.BaseSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitClassOrDecltype(CppParser.ClassOrDecltypeContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAccessSpecifier(CppParser.AccessSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitConversionFunctionIdentifier(CppParser.ConversionFunctionIdentifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitConversionTypeIdentifier(CppParser.ConversionTypeIdentifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitConversionDeclarator(CppParser.ConversionDeclaratorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitConstructorInitializer(CppParser.ConstructorInitializerContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitMemberInitializerList(CppParser.MemberInitializerListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitMemberInitializer(CppParser.MemberInitializerContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitMemberInitializerIdentifier(CppParser.MemberInitializerIdentifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitOperatorFunctionIdentifier(CppParser.OperatorFunctionIdentifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitAnyOperator(CppParser.AnyOperatorContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitLiteralOperatorIdentifier(CppParser.LiteralOperatorIdentifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTemplateDeclaration(CppParser.TemplateDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTemplateParameterList(CppParser.TemplateParameterListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTemplateParameter(CppParser.TemplateParameterContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTypeParameter(CppParser.TypeParameterContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTypeParameterKey(CppParser.TypeParameterKeyContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitSimpleTemplateIdentifier(CppParser.SimpleTemplateIdentifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTemplateIdentifier(CppParser.TemplateIdentifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTemplateArgumentList(CppParser.TemplateArgumentListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTemplateArgument(CppParser.TemplateArgumentContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTypenameSpecifier(CppParser.TypenameSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitExplicitInstantiation(CppParser.ExplicitInstantiationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitExplicitSpecialization(CppParser.ExplicitSpecializationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitDeductionGuide(CppParser.DeductionGuideContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitTryBlock(CppParser.TryBlockContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitFunctionTryBlock(CppParser.FunctionTryBlockContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitHandlerSequence(CppParser.HandlerSequenceContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitHandler(CppParser.HandlerContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitExceptionDeclaration(CppParser.ExceptionDeclarationContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitNoExceptionSpecifier(CppParser.NoExceptionSpecifierContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitIdentifierList(CppParser.IdentifierListContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitLiteral(CppParser.LiteralContext context)
{
    if (context.FloatingPointLiteral() != null)
        throw new NotImplementedException();
    else if (context.CharacterLiteral() != null)
        throw new NotImplementedException();
    else if (context.StringLiteral() != null)
        throw new NotImplementedException();
    else
        return VisitChildren(context);
}

Node ASTVisitor::VisitIntegerLiteral(CppParser.IntegerLiteralContext context)
{
    // Parse the integer value
    int value = int.Parse(context.GetText());

    return new IntegerLiteral(value);
}

Node ASTVisitor::VisitBooleanLiteral(CppParser.BooleanLiteralContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitPointerLiteral(CppParser.PointerLiteralContext context)
{
    throw new NotImplementedException();
}

Node ASTVisitor::VisitUserDefinedLiteral(CppParser.UserDefinedLiteralContext context)
{
    throw new NotImplementedException();
}
