#pragma once

int RunTest(std::function<void(void)> test)
{
  try
  {
    test();
    std::wcout << L"Tests PASS!" << std::endl;
    return 0;
  }
  catch (...)
  {
    std::wcout << L"Tests FAIL!" << std::endl;
    return 1;
  }
}