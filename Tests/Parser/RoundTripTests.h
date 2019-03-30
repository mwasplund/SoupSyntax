using Antlr4.Runtime;
using System.IO;
using Xunit;

namespace Soup.StaticAnalysis.UnitTests
{
    class FileTests
    {
    public:
        // [[Theory]]
        // [[InlineData("BlockComment")]]
        // [[InlineData("HelloWorld")]]
        // [[InlineData("LineComment")]]
        // [[InlineData("Namespace")]]
        // [[InlineData("NameSpace")]]
        void BlockComment(std::string name)
        {
            std::filesystem::path sourceFilePath("Parser/RoundTripInput/" + name + ".cpp")
            std::ifstream sourceFile(sourceFilePath);

            var inputSource = new AntlrInputStream(file);
            var ast = TestUtils.GenerateAST(inputSource);
            Assert.NotNull(ast);
        }
    }
}
