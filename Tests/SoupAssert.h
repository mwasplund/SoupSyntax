#pragma once

class Assert
{
public:
  static void Fail(std::string message)
  {
    auto errorMessage = "Test failed: " + message;
    throw std::logic_error(errorMessage.c_str());
  }

  static void IsTrue(bool value, std::string message)
  {
    if (!value)
    {
      Fail(message);
    }
  }

  static void IsFalse(bool value, std::string message)
  {
    if (value)
    {
      Fail(message);
    }
  }

  template<typename T>
  static void NotNull(T* value, std::string message)
  {
    if (value == nullptr)
    {
      Fail(message);
    }
  }

  template<typename T>
  static void AreEqual(T expected, T actual, std::string message)
  {
    if (expected != actual)
    {
      Fail(message);
    }
  }
};
