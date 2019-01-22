#pragma once

class Assert
{
public:
  static void Fail()
  {
    throw std::exception("Test failed.");
  }

  static void IsTrue(bool value)
  {
    if (!value)
    {
      Fail();
    }
  }

  static void IsFalse(bool value)
  {
    if (value)
    {
      Fail();
    }
  }

  template<typename T>
  static void NotNull(T* value)
  {
    if (value == nullptr)
    {
      Fail();
    }
  }

  template<typename T>
  static void AreEqual(T expected, T actual)
  {
    if (expected != actual)
    {
      Fail();
    }
  }
};
