
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax Visitor used to write text representation of tree
    /// </summary>
    export class SyntaxTreeWriter : public SyntaxWalker
    {
    public:
        SyntaxTreeWriter(std::ostream& stream) : 
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

            m_stream << "Token: \"";
            m_stream << EscapeText(token.GetValue());
            m_stream << "\" [";
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
            m_stream << EscapeText(trivia.GetValue());
            m_stream << "\" [";
            m_stream << trivia.GetSpan().GetStart() << ", ";
            m_stream << trivia.GetSpan().GetEnd() << ")\n";
        }

    private:
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
                case SyntaxNodeType::ConstructorDefinition:
                    return "ConstructorDefinition";
                case SyntaxNodeType::ConstructorInitializer:
                    return "ConstructorInitializer";
                case SyntaxNodeType::DeclarationSpecifier:
                    return "DeclarationSpecifier";
                case SyntaxNodeType::DefaultFunctionBody:
                    return "DefaultFunctionBody";
                case SyntaxNodeType::DeleteFunctionBody:
                    return "DeleteFunctionBody";
                case SyntaxNodeType::DestructorIdentifierExpression:
                    return "DestructorIdentifierExpression";
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
                case SyntaxNodeType::ExpressionStatement:
                    return "ExpressionStatement";
                case SyntaxNodeType::FunctionDefinition:
                    return "FunctionDefinition";
                case SyntaxNodeType::IfStatement:
                    return "IfStatement";
                case SyntaxNodeType::InitializerDeclarator:
                    return "InitializerDeclarator";
                case SyntaxNodeType::InitializerDeclaratorList:
                    return "InitializerDeclaratorList";
                case SyntaxNodeType::InitializerList:
                    return "InitializerList";
                case SyntaxNodeType::LiteralExpression:
                    return "LiteralExpression";
                case SyntaxNodeType::MemberInitializer:
                    return "MemberInitializer";
                case SyntaxNodeType::NamespaceDefinition:
                    return "NamespaceDefinition";
                case SyntaxNodeType::Parameter:
                    return "Parameter";
                case SyntaxNodeType::ParameterList:
                    return "ParameterList";
                case SyntaxNodeType::PrimitiveDataTypeDeclaration:
                    return "PrimitiveDataTypeDeclaration";
                case SyntaxNodeType::QualifiedIdentifierExpression:
                    return "QualifiedIdentifierExpression";
                case SyntaxNodeType::RegularFunctionBody:
                    return "RegularFunctionBody";
                case SyntaxNodeType::ReturnStatement:
                    return "ReturnStatement";
                case SyntaxNodeType::SimpleDeclaration:
                    return "SimpleDeclaration";
                case SyntaxNodeType::SimpleIdentifierExpression:
                    return "SimpleIdentifierExpression";
                case SyntaxNodeType::SimpleTemplateIdentifierExpression:
                    return "SimpleTemplateIdentifierExpression";
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

        const std::string& EscapeText(const std::string& value)
        {
            // TODO: Generic solution find and replace
            if (value == "\0")
            {
                static const std::string escapeValue = "\\0";
                return escapeValue;
            }
            else if (value == "\n")
            {
                static const std::string escapeValue = "\\n";
                return escapeValue;
            }
            else if (value == "\r\n")
            {
                static const std::string escapeValue = "\\r\\n";
                return escapeValue;
            }
            else
            {
                return value;
            }
        }

    private:
        std::ostream& m_stream;
    };
}
