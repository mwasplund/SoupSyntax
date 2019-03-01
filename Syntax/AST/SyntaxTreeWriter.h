
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax Visitor used to write text representation of tree
    /// </summary>
    export class SyntaxWriter : public SyntaxWalker
    {
    public:
        SyntaxWriter(std::wostream& stream) : 
            m_stream(stream)
        {
        }

    protected:
        virtual void DefaultVisit(const SyntaxNode& node) override
        {
            for (auto i = 0u; i < GetDepth(); i++)
            {
                m_stream << L"  ";
            }

            m_stream << ToString(node.GetType());
            // if (node is IdentifierNameSyntax name)
            // {
            //     builder.Builder.Append(" ");
            //     builder.Builder.Append(name.ToString());
            // }

            m_stream << L"\n";

            SyntaxWalker::DefaultVisit(node);
        }

        virtual void VisitToken(const SyntaxToken& token) override
        {
            // Write the leading trivia
            for (auto& trivia : token.GetLeadingTrivia())
            {
                VisitTrivia(trivia, L"Leading");
            }

            // Write the token
            for (auto i = 0u; i < GetDepth(); i++)
            {
                m_stream << L"  ";
            }

            m_stream << L"Token: [";
            m_stream << token.GetValue();
            m_stream << L"]\n";

            // Write the trailing trivia
            for (auto& trivia : token.GetTrailingTrivia())
            {
                VisitTrivia(trivia, L"Trailing");
            }

            SyntaxWalker::VisitToken(token);
        }

        void VisitTrivia(const SyntaxTrivia& trivia, const wchar_t* location)
        {
            for (auto i = 0u; i < GetDepth(); i++)
            {
                m_stream << L"  ";
            }

            m_stream << location << L"Trivia: [";
            m_stream << trivia.GetValue();
            m_stream << L"]\n";
        }

        const wchar_t* ToString(SyntaxNodeType type)
        {
            switch (type)
            {
                case SyntaxNodeType::BinaryExpression:
                    return L"BinaryExpression";
                case SyntaxNodeType::CompoundStatement:
                    return L"CompoundStatement";
                case SyntaxNodeType::DeclarationSequence:
                    return L"DeclarationSequence";
                case SyntaxNodeType::DeclarationSpecifierSequence:
                    return L"DeclarationSpecifierSequence";
                case SyntaxNodeType::DefaultFunctionBody:
                    return L"DefaultFunctionBody";
                case SyntaxNodeType::DeleteFunctionBody:
                    return L"DeleteFunctionBody";
                case SyntaxNodeType::FunctionDefinition:
                    return L"FunctionDefinition";
                case SyntaxNodeType::InitializerDeclarator:
                    return L"InitializerDeclarator";
                case SyntaxNodeType::InitializerDeclaratorList:
                    return L"InitializerDeclaratorList";
                case SyntaxNodeType::LiteralExpression:
                    return L"LiteralExpression";
                case SyntaxNodeType::ParameterList:
                    return L"ParameterList";
                case SyntaxNodeType::PrimitiveDataTypeNode:
                    return L"PrimitiveDataTypeNode";
                case SyntaxNodeType::QualifiedNameExpression:
                    return L"QualifiedNameExpression";
                case SyntaxNodeType::RegularFunctionBody:
                    return L"RegularFunctionBody";
                case SyntaxNodeType::ReturnStatement:
                    return L"ReturnStatement";
                case SyntaxNodeType::SimpleDefinition:
                    return L"SimpleDefinition";
                case SyntaxNodeType::SimpleNameExpression:
                    return L"SimpleNameExpression";
                case SyntaxNodeType::SubscriptExpression:
                    return L"SubscriptExpression";
                case SyntaxNodeType::ThisExpression:
                    return L"ThisExpression";
                case SyntaxNodeType::TranslationUnit:
                    return L"TranslationUnit";
                case SyntaxNodeType::TryFunctionBody:
                    return L"TryFunctionBody";
                case SyntaxNodeType::UnaryExpression:
                    return L"UnaryExpression";
                default:
                    throw std::logic_error("Unknown node type.s");
            }
        }

    private:
        std::wostream& m_stream;
    };
}
