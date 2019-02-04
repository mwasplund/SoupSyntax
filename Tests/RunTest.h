#pragma once

int RunTest(std::function<void(void)> test)
{
  try
  {
    test();
    std::wcout << L"Test PASS!" << std::endl;
    return 0;
  }
  catch (std::exception& ex)
  {
    std::wcout << L"Test FAIL!" << std::endl;
    if (std::string(ex.what()).empty())
    {
      std::wcout << typeid(ex).name() << std::endl;
    }
    else
    {
      std::wcout << ex.what() << std::endl;
    }
  }
  catch (...)
  {
    std::wcout << L"Test FAIL!" << std::endl;
    std::wcout << L"Unknown error..." << std::endl;
  }

  return 1;
}