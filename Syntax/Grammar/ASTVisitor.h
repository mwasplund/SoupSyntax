

namespace Soup::StaticAnalysis
{
    /// <summary>
    /// Abstract syntax tree visitor
    /// </summary>
    class ASTVisitor : CppParserBaseVisitor<Node>
    {
    public:
        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.typedefName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTypedefName(CppParser.TypedefNameContext context) override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.namespaceName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        ode VisitNamespaceName(CppParser.NamespaceNameContext context) override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.namespaceAlias()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNamespaceAlias(CppParser.NamespaceAliasContext context) override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.className()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitClassName(CppParser.ClassNameContext context) override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.enumName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEnumName(CppParser.EnumNameContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.templateName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTemplateName(CppParser.TemplateNameContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.translationUnit()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTranslationUnit(CppParser.TranslationUnitContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.primaryExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitPrimaryExpression(CppParser.PrimaryExpressionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.unqualifiedIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitUnqualifiedIdentifier(CppParser.UnqualifiedIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.qualifiedIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitQualifiedIdentifier(CppParser.QualifiedIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.nestedNameSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNestedNameSpecifier(CppParser.NestedNameSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.lambdaExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitLambdaExpression(CppParser.LambdaExpressionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.lambdaIntroducer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitLambdaIntroducer(CppParser.LambdaIntroducerContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.lambdaDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitLambdaDeclarator(CppParser.LambdaDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.lambdaCapture()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitLambdaCapture(CppParser.LambdaCaptureContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.captureDefault()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitCaptureDefault(CppParser.CaptureDefaultContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.captureList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitCaptureList(CppParser.CaptureListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.capture()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitCapture(CppParser.CaptureContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.simpleCapture()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitSimpleCapture(CppParser.SimpleCaptureContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.initializerCapture()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitInitializerCapture(CppParser.InitializerCaptureContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.foldExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitFoldExpression(CppParser.FoldExpressionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.foldOperator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitFoldOperator(CppParser.FoldOperatorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.postfixExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitPostfixExpression(CppParser.PostfixExpressionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.expressionList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitExpressionList(CppParser.ExpressionListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.pseudoDestructorName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitPseudoDestructorName(CppParser.PseudoDestructorNameContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.unaryExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitUnaryExpression(CppParser.UnaryExpressionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.unaryOperator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitUnaryOperator(CppParser.UnaryOperatorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.newExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNewExpression(CppParser.NewExpressionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.newPlacement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNewPlacement(CppParser.NewPlacementContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.newTypeIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNewTypeIdentifier(CppParser.NewTypeIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.newDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNewDeclarator(CppParser.NewDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.noPointerNewDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNoPointerNewDeclarator(CppParser.NoPointerNewDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.newInitializer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNewInitializer(CppParser.NewInitializerContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.deleteExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitDeleteExpression(CppParser.DeleteExpressionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.noExceptionExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNoExceptionExpression(CppParser.NoExceptionExpressionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.castExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitCastExpression(CppParser.CastExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.pointerManipulationExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitPointerManipulationExpression(CppParser.PointerManipulationExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.multiplicativeExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitMultiplicativeExpression(CppParser.MultiplicativeExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.additiveExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAdditiveExpression(CppParser.AdditiveExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.shiftExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitShiftExpression(CppParser.ShiftExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.relationalExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitRelationalExpression(CppParser.RelationalExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.equalityExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEqualityExpression(CppParser.EqualityExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.andExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAndExpression(CppParser.AndExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.exclusiveOrExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitExclusiveOrExpression(CppParser.ExclusiveOrExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.inclusiveOrExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitInclusiveOrExpression(CppParser.InclusiveOrExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.logicalAndExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitLogicalAndExpression(CppParser.LogicalAndExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.logicalOrExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitLogicalOrExpression(CppParser.LogicalOrExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.conditionalExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitConditionalExpression(CppParser.ConditionalExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.throwExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitThrowExpression(CppParser.ThrowExpressionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.assignmentExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAssignmentExpression(CppParser.AssignmentExpressionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.assignmentOperator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAssignmentOperator(CppParser.AssignmentOperatorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.expression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitExpression(CppParser.ExpressionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.constantExpression()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitConstantExpression(CppParser.ConstantExpressionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.initializerStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitInitializerStatement(CppParser.InitializerStatementContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.condition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitCondition(CppParser.ConditionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.labeledStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitLabeledStatement(CppParser.LabeledStatementContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.expressionStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitExpressionStatement(CppParser.ExpressionStatementContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.compoundStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitCompoundStatement(CppParser.CompoundStatementContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.statementSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitStatementSequence(CppParser.StatementSequenceContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.selectionStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitSelectionStatement(CppParser.SelectionStatementContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.iterationStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitIterationStatement(CppParser.IterationStatementContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.forInitializerStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitForInitializerStatement(CppParser.ForInitializerStatementContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.forRangeDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitForRangeDeclaration(CppParser.ForRangeDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.forRangeInitializer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitForRangeInitializer(CppParser.ForRangeInitializerContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.jumpStatement()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitJumpStatement(CppParser.JumpStatementContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.declarationStatement()"/>.
        /// </summary>
        Node VisitDeclarationStatement(CppParser.DeclarationStatementContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.declarationSequence()"/>.
        /// </summary>
        Node VisitDeclarationSequence(CppParser.DeclarationSequenceContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.noDeclarationSpecifierFunctionDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNoDeclarationSpecifierFunctionDeclaration(CppParser.NoDeclarationSpecifierFunctionDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.aliasDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAliasDeclaration(CppParser.AliasDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.simpleDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitSimpleDeclaration(CppParser.SimpleDeclarationContext context)  override;
        {
            return new SimpleDefinition()
            {
                DeclarationSpecifierSequence = (DeclarationSpecifierSequence)Visit(context.declarationSpecifierSequence()),
                InitializerDeclaratorList = (InitializerDeclaratorList)Visit(context.initializerDeclaratorList()),
            };
        }

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.staticAssertDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitStaticAssertDeclaration(CppParser.StaticAssertDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.emptyDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEmptyDeclaration(CppParser.EmptyDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.attributeDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAttributeDeclaration(CppParser.AttributeDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.declarationSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitDeclarationSpecifier(CppParser.DeclarationSpecifierContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.declarationSpecifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitDeclarationSpecifierSequence(CppParser.DeclarationSpecifierSequenceContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.storageClassSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitStorageClassSpecifier(CppParser.StorageClassSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.functionSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitFunctionSpecifier(CppParser.FunctionSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.typeSpecifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTypeSpecifierSequence(CppParser.TypeSpecifierSequenceContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.definingTypeSpecifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitDefiningTypeSpecifierSequence(CppParser.DefiningTypeSpecifierSequenceContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.simpleTypeSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitSimpleTypeSpecifier(CppParser.SimpleTypeSpecifierContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.typeName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTypeName(CppParser.TypeNameContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.declarationTypeSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitDeclarationTypeSpecifier(CppParser.DeclarationTypeSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.elaboratedTypeSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitElaboratedTypeSpecifier(CppParser.ElaboratedTypeSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.enumSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEnumSpecifier(CppParser.EnumSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.enumHead()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEnumHead(CppParser.EnumHeadContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.enumHeadName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEnumHeadName(CppParser.EnumHeadNameContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.opaqueEnumDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitOpaqueEnumDeclaration(CppParser.OpaqueEnumDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.enumKey()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEnumKey(CppParser.EnumKeyContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.enumBase()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEnumBase(CppParser.EnumBaseContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.enumeratorList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEnumeratorList(CppParser.EnumeratorListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.enumeratorDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEnumeratorDefinition(CppParser.EnumeratorDefinitionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.enumerator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEnumerator(CppParser.EnumeratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.namespaceDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNamespaceDefinition(CppParser.NamespaceDefinitionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.namedNamespaceDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNamedNamespaceDefinition(CppParser.NamedNamespaceDefinitionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.unnamedNamespaceDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitUnnamedNamespaceDefinition(CppParser.UnnamedNamespaceDefinitionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.nestedNamespaceDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNestedNamespaceDefinition(CppParser.NestedNamespaceDefinitionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.enclosingNamespaceSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitEnclosingNamespaceSpecifier(CppParser.EnclosingNamespaceSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.namespaceBody()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNamespaceBody(CppParser.NamespaceBodyContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.namespaceAliasDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNamespaceAliasDefinition(CppParser.NamespaceAliasDefinitionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.qualifiedNamespaceSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitQualifiedNamespaceSpecifier(CppParser.QualifiedNamespaceSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.usingDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitUsingDeclaration(CppParser.UsingDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.usingDeclaratorList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitUsingDeclaratorList(CppParser.UsingDeclaratorListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.usingDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitUsingDeclarator(CppParser.UsingDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.usingDirective()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitUsingDirective(CppParser.UsingDirectiveContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.asmDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAsmDefinition(CppParser.AsmDefinitionContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.linkageSpecification()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitLinkageSpecification(CppParser.LinkageSpecificationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.attributeSpecifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAttributeSpecifierSequence(CppParser.AttributeSpecifierSequenceContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.attributeSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAttributeSpecifier(CppParser.AttributeSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.alignmentSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAlignmentSpecifier(CppParser.AlignmentSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.attributeUsingPrefix()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAttributeUsingPrefix(CppParser.AttributeUsingPrefixContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.attributeList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAttributeList(CppParser.AttributeListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.attribute()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAttribute(CppParser.AttributeContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.attributeToken()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAttributeToken(CppParser.AttributeTokenContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.attributeScopedToken()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAttributeScopedToken(CppParser.AttributeScopedTokenContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.attributeNamespace()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAttributeNamespace(CppParser.AttributeNamespaceContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.attributeArgumentClause()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAttributeArgumentClause(CppParser.AttributeArgumentClauseContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.balancedTokenSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitBalancedTokenSequence(CppParser.BalancedTokenSequenceContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.balancedToken()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitBalancedToken(CppParser.BalancedTokenContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.initializerDeclaratorList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitInitializerDeclaratorList(CppParser.InitializerDeclaratorListContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.initializerDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitInitializerDeclarator(CppParser.InitializerDeclaratorContext context)  override;
        {
            // Check for optional initializer
            Node initializer = null;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.pointerDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitPointerDeclarator(CppParser.PointerDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.noPointerDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNoPointerDeclarator(CppParser.NoPointerDeclaratorContext context)  override;
        {
            // Check if it was an identifier declarator
            var identifierExpression = context.identifierExpression();
            if (identifierExpression != null)
            {
                return Visit(identifierExpression);
            }

            throw new InvalidOperationException("Unknown sub type.");
        }

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.parametersAndQualifiers()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitParametersAndQualifiers(CppParser.ParametersAndQualifiersContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.trailingReturnType()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTrailingReturnType(CppParser.TrailingReturnTypeContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.pointerOperator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitPointerOperator(CppParser.PointerOperatorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.constVolatileQualifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitConstVolatileQualifierSequence(CppParser.ConstVolatileQualifierSequenceContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.constVolatileQualifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitConstVolatileQualifier(CppParser.ConstVolatileQualifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.referenceQualifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitReferenceQualifier(CppParser.ReferenceQualifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.typeIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTypeIdentifier(CppParser.TypeIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.definingTypeIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitDefiningTypeIdentifier(CppParser.DefiningTypeIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.abstractDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAbstractDeclarator(CppParser.AbstractDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.pointerAbstractDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitPointerAbstractDeclarator(CppParser.PointerAbstractDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.noPointerAbstractDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNoPointerAbstractDeclarator(CppParser.NoPointerAbstractDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.abstractPackDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAbstractPackDeclarator(CppParser.AbstractPackDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.noPointerAbstractPackDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNoPointerAbstractPackDeclarator(CppParser.NoPointerAbstractPackDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.parameterDeclarationClause()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitParameterDeclarationClause(CppParser.ParameterDeclarationClauseContext context)  override;
        {
            // TODO Items
            return new ParameterList();
        }

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.parameterDeclarationList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitParameterDeclarationList(CppParser.ParameterDeclarationListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.parameterDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitParameterDeclaration(CppParser.ParameterDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.functionDefinition()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitFunctionDefinition(CppParser.FunctionDefinitionContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.regularFunctionBody()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitRegularFunctionBody(CppParser.RegularFunctionBodyContext context)  override;
        {
            return new RegularFunctionBody()
            {
                Statements = (CompoundStatement)Visit(context.compoundStatement()),
            };
        }


        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.explicitlyDefaultedFunction()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitExplicitlyDefaultedFunction(CppParser.ExplicitlyDefaultedFunctionContext context)  override;
        {
            return new DefaultFunctionBody();
        }

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.deletedFunction()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitDeletedFunction(CppParser.DeletedFunctionContext context)  override;
        {
            return new DeleteFunctionBody();
        }

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.braceOrEqualInitializer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitBraceOrEqualInitializer(CppParser.BraceOrEqualInitializerContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.initializerList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitInitializerList(CppParser.InitializerListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.bracedInitializerList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitBracedInitializerList(CppParser.BracedInitializerListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.expressionOrBracedInitializerList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitExpressionOrBracedInitializerList(CppParser.ExpressionOrBracedInitializerListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.classSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitClassSpecifier(CppParser.ClassSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.classHead()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitClassHead(CppParser.ClassHeadContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.classHeadName()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitClassHeadName(CppParser.ClassHeadNameContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.classVirtualSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitClassVirtualSpecifier(CppParser.ClassVirtualSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.classKey()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitClassKey(CppParser.ClassKeyContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.memberSpecification()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitMemberSpecification(CppParser.MemberSpecificationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.memberDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitMemberDeclaration(CppParser.MemberDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.memberDeclaratorList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitMemberDeclaratorList(CppParser.MemberDeclaratorListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.memberDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitMemberDeclarator(CppParser.MemberDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.virtualSpecifierSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitVirtualSpecifierSequence(CppParser.VirtualSpecifierSequenceContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.virtualSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitVirtualSpecifier(CppParser.VirtualSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.pureSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitPureSpecifier(CppParser.PureSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.baseClause()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitBaseClause(CppParser.BaseClauseContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.baseSpecifierList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitBaseSpecifierList(CppParser.BaseSpecifierListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.baseSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitBaseSpecifier(CppParser.BaseSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.classOrDecltype()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitClassOrDecltype(CppParser.ClassOrDecltypeContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.accessSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAccessSpecifier(CppParser.AccessSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.conversionFunctionIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitConversionFunctionIdentifier(CppParser.ConversionFunctionIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.conversionTypeIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitConversionTypeIdentifier(CppParser.ConversionTypeIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.conversionDeclarator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitConversionDeclarator(CppParser.ConversionDeclaratorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.constructorInitializer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitConstructorInitializer(CppParser.ConstructorInitializerContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.memberInitializerList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitMemberInitializerList(CppParser.MemberInitializerListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.memberInitializer()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitMemberInitializer(CppParser.MemberInitializerContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.memberInitializerIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitMemberInitializerIdentifier(CppParser.MemberInitializerIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.operatorFunctionIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitOperatorFunctionIdentifier(CppParser.OperatorFunctionIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.anyOperator()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitAnyOperator(CppParser.AnyOperatorContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.literalOperatorIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitLiteralOperatorIdentifier(CppParser.LiteralOperatorIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.templateDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTemplateDeclaration(CppParser.TemplateDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.templateParameterList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTemplateParameterList(CppParser.TemplateParameterListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.templateParameter()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTemplateParameter(CppParser.TemplateParameterContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.typeParameter()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTypeParameter(CppParser.TypeParameterContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.typeParameterKey()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTypeParameterKey(CppParser.TypeParameterKeyContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.simpleTemplateIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitSimpleTemplateIdentifier(CppParser.SimpleTemplateIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.templateIdentifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTemplateIdentifier(CppParser.TemplateIdentifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.templateArgumentList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTemplateArgumentList(CppParser.TemplateArgumentListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.templateArgument()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTemplateArgument(CppParser.TemplateArgumentContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.typenameSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTypenameSpecifier(CppParser.TypenameSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.explicitInstantiation()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitExplicitInstantiation(CppParser.ExplicitInstantiationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.explicitSpecialization()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitExplicitSpecialization(CppParser.ExplicitSpecializationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.deductionGuide()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitDeductionGuide(CppParser.DeductionGuideContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.tryBlock()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitTryBlock(CppParser.TryBlockContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.functionTryBlock()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitFunctionTryBlock(CppParser.FunctionTryBlockContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.handlerSequence()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitHandlerSequence(CppParser.HandlerSequenceContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.handler()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitHandler(CppParser.HandlerContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.exceptionDeclaration()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitExceptionDeclaration(CppParser.ExceptionDeclarationContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.noExceptionSpecifier()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitNoExceptionSpecifier(CppParser.NoExceptionSpecifierContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.identifierList()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitIdentifierList(CppParser.IdentifierListContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.literal()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitLiteral(CppParser.LiteralContext context)  override;
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

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.integerLiteral()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitIntegerLiteral(CppParser.IntegerLiteralContext context)  override;
        {
            // Parse the integer value
            int value = int.Parse(context.GetText());

            return new IntegerLiteral(value);
        }

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.booleanLiteral()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitBooleanLiteral(CppParser.BooleanLiteralContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.pointerLiteral()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitPointerLiteral(CppParser.PointerLiteralContext context)  override;

        /// <summary>
        /// Visit a parse tree produced by <see cref="CppParser.userDefinedLiteral()"/>.
        /// </summary>
        /// <param name="context">The parse tree.</param>
        /// <return>The visitor result.</return>
        Node VisitUserDefinedLiteral(CppParser.UserDefinedLiteralContext context)  override;
    }
}
