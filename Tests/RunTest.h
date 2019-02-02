#pragma once

int RunTest(std::function<void(void)> test)
{
  try
  {
    test();
    std::wcout << L"Tests PASS!" << std::endl;
    return 0;
  }
  catch (std::exception& ex)
  {
    std::wcout << L"Tests FAIL!" << std::endl;
    std::wcout << ex.what() << std::endl;
  }
  catch (...)
  {
    std::wcout << L"Tests FAIL!" << std::endl;
    std::wcout << L"Unknown error..." << std::endl;
  }

  return 1;
}