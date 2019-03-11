#pragma once

struct TestState
{
    int FailCount;
    int PassCount;

    TestState& operator+=(const TestState& rhs)
    {
        FailCount += rhs.FailCount;
        PassCount += rhs.PassCount;
        return *this;
    }
};

TestState RunTest(std::function<void(void)> test)
{
    try
    {
        test();
        // std::wcout << L"Test PASS!" << std::endl;
        return TestState{ 0, 1 };
    }
    catch (std::exception& ex)
    {
        std::wcout << L"Test FAIL!" << std::endl;
        std::wcout << typeid(ex).name() << std::endl;

        if (!std::string(ex.what()).empty())
        {
            std::wcout << ex.what() << std::endl;
        }
    }
    catch (...)
    {
        std::wcout << L"Test FAIL!" << std::endl;
        std::wcout << L"Unknown error..." << std::endl;
    }

    return TestState{ 1, 0 };
}