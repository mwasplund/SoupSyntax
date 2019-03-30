
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax Visitor used to write text representation of tree
    /// </summary>
    export class SyntaxWriter : public SyntaxWalker
    {
    public:
        SyntaxWriter(std::ostream& stream) : 
            m_stream(stream)
        {
        }

    protected:
        virtual void DefaultVisit(const SyntaxNode& node) override
        {
            for (auto i = 0u; i < GetDepth(); i++)
            {
                m_stream << "  ";
            }

            m_stream << ToString(node.GetType());
            // if (node is IdentifierNameSyntax name)
            // {
            //     builder.Builder.Append(" ");
            //     builder.Builder.Append(name.ToString());
            // }

            m_stream << "\n";

            SyntaxWalker::DefaultVisit(node);
        }

        virtual void VisitToken(const SyntaxToken& token) override
        {
            // Write the leading trivia
            for (auto& trivia : token.GetLeadingTrivia())
            {
                VisitTrivia(trivia, "Leading");
            }

            // Write the token
            for (auto i = 0u; i < GetDepth(); i++)
            {
                m_stream << "  ";
            }

            m_stream << "Token: ";
            m_stream << token.GetValue();
            m_stream << " [";
            m_stream << token.GetSpan().GetStart() << ", ";
            m_stream << token.GetSpan().GetEnd() << ")\n";

            // Write the trailing trivia
            for (auto& trivia : token.GetTrailingTrivia())
            {
                VisitTrivia(trivia, "Trailing");
            }

            SyntaxWalker::VisitToken(token);
        }

        void VisitTrivia(const SyntaxTrivia& trivia, const char* location)
        {
            for (auto i = 0u; i < GetDepth(); i++)
            {
                m_stream << "  ";
            }

            m_stream << location << "Trivia: \"";
            m_stream << trivia.GetValue();
            m_stream << "\" [";
            m_stream << trivia.GetSpan().GetStart() << ", ";
            m_stream << trivia.GetSpan().GetEnd() << ")\n";
        }

        const char* ToString(SyntaxNodeType type)
        {
            switch (type)
            {
                case SyntaxNodeType::BinaryExpression:
                    return "BinaryExpression";
                case SyntaxNodeType::CatchClause:
                    return "CatchClause";
                case SyntaxNodeType::ClassDeclaration:
                    return "ClassDeclaration";
                case SyntaxNodeType::CompoundStatement:
                    return "CompoundStatement";
                case SyntaxNodeType::DeclarationSequence:
                    return "DeclarationSequence";
                case SyntaxNodeType::DeclarationSpecifier:
                    return "DeclarationSpecifier";
                case SyntaxNodeType::DefaultFunctionBody:
                    return "DefaultFunctionBody";
                case SyntaxNodeType::DeleteFunctionBody:
                    return "DeleteFunctionBody";
                case SyntaxNodeType::ElseClause:
                    return "ElseClause";
                case SyntaxNodeType::EmptyDeclaration:
                    return "EmptyDeclaration";
                case SyntaxNodeType::EmptyStatement:
                    return "EmptyStatement";
                case SyntaxNodeType::EnumDeclaration:
                    return "EnumDeclaration";
                case SyntaxNodeType::EnumeratorDefinition:
                    return "EnumeratorDefinition";
                case SyntaxNodeType::FunctionDefinition:
                    return "FunctionDefinition";
                case SyntaxNodeType::IfStatement:
                    return "IfStatement";
                case SyntaxNodeType::InitializerDeclarator:
                    return "InitializerDeclarator";
                case SyntaxNodeType::InitializerDeclaratorList:
                    return "InitializerDeclaratorList";
                case SyntaxNodeType::LiteralExpression:
                    return "LiteralExpression";
                case SyntaxNodeType::Parameter:
                    return "Parameter";
                case SyntaxNodeType::ParameterList:
                    return "ParameterList";
                case SyntaxNodeType::PrimitiveDataTypeDeclaration:
                    return "PrimitiveDataTypeDeclaration";
                case SyntaxNodeType::QualifiedNameExpression:
                    return "QualifiedNameExpression";
                case SyntaxNodeType::RegularFunctionBody:
                    return "RegularFunctionBody";
                case SyntaxNodeType::ReturnStatement:
                    return "ReturnStatement";
                case SyntaxNodeType::SimpleDeclarationStatement:
                    return "SimpleDeclarationStatement";
                case SyntaxNodeType::SimpleNameExpression:
                    return "SimpleNameExpression";
                case SyntaxNodeType::SubscriptExpression:
                    return "SubscriptExpression";
                case SyntaxNodeType::ThisExpression:
                    return "ThisExpression";
                case SyntaxNodeType::TranslationUnit:
                    return "TranslationUnit";
                case SyntaxNodeType::TryFunctionBody:
                    return "TryFunctionBody";
                case SyntaxNodeType::UnaryExpression:
                    return "UnaryExpression";
                case SyntaxNodeType::ValueEqualInitializer:
                    return "ValueEqualInitializer";
                default:
                    throw std::logic_error(std::string("Unknown node: ") + std::to_string((int)type));
            }
        }

    private:
        std::ostream& m_stream;
    };
}
