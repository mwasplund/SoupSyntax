using Antlr4.Runtime;
using System.IO;
using Xunit;

namespace Soup.StaticAnalysis.UnitTests
{
    class FileTests
    {
    public:
        // [[Theory]]
        // [[InlineData(L"BlockComment")]]
        // [[InlineData(L"HelloWorld")]]
        // [[InlineData(L"LineComment")]]
        // [[InlineData(L"Namespace")]]
        // [[InlineData(L"NameSpace")]]
        void BlockComment(std::wstring name)
        {
            std::filesystem::path sourceFilePath("Parser/RoundTripInput/" + name + L".cpp")
            std::ifstream sourceFile(sourceFilePath);

            var inputSource = new AntlrInputStream(file);
            var ast = TestUtils.GenerateAST(inputSource);
            Assert.NotNull(ast);
        }
    }
}
