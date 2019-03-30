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
        // std::cout << "Test PASS!" << std::endl;
        return TestState{ 0, 1 };
    }
    catch (std::exception& ex)
    {
        std::cout << "Test FAIL!" << std::endl;
        std::cout << typeid(ex).name() << std::endl;

        if (!std::string(ex.what()).empty())
        {
            std::cout << ex.what() << std::endl;
        }
    }
    catch (...)
    {
        std::cout << "Test FAIL!" << std::endl;
        std::cout << "Unknown error..." << std::endl;
    }

    return TestState{ 1, 0 };
}