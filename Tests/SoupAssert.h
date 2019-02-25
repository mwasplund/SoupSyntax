#pragma once

class Assert
{
public:
  static void Fail(const std::wstring& message)
  {
    auto errorMessage = L"Test failed: " + message;

    // Convert the token text to wide characters
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::string text = converter.to_bytes(errorMessage);

    throw std::logic_error(text.c_str());
  }

  static void IsTrue(bool value, const std::wstring& message)
  {
    if (!value)
    {
      Fail(message);
    }
  }

  static void IsFalse(bool value, const std::wstring& message)
  {
    if (value)
    {
      Fail(message);
    }
  }

  template<typename T> struct is_shared_ptr : std::false_type {};
  template<typename T> struct is_shared_ptr<std::shared_ptr<T>> : std::true_type {};

  template<typename T>
  static typename std::enable_if<std::is_pointer<T>::value || is_shared_ptr<T>::value>::type NotNull(T value, const std::wstring& message)
  {
    if (value == nullptr)
    {
      Fail(message);
    }
  }

  template<typename T>
  static typename std::enable_if<std::is_pointer<T>::value || is_shared_ptr<T>::value>::type AreEqual(
    T expected,
    T actual,
    const std::wstring& message)
  {
    if (expected == nullptr)
    {
      Fail(L"Expected was null, use IsNull instead.");
    }
    else if (actual == nullptr)
    {
      Fail(L"Actual was null, use IsNull if this is expected.");
    }
    else if (*expected != *actual)
    {
      Fail(message);
    }
  }

  template<typename T>
  static typename std::enable_if<!std::is_pointer<T>::value && !is_shared_ptr<T>::value>::type AreEqual(
    const T& expected,
    const T& actual,
    const std::wstring& message)
  {
    if (expected != actual)
    {
      Fail(message);
    }
  }

    template<typename T>
  static typename std::enable_if<std::is_pointer<T>::value || is_shared_ptr<T>::value>::type AreNotEqual(
    T expected,
    T actual,
    const std::wstring& message)
  {
    if (expected == nullptr)
    {
      Fail(L"Expected was null, use IsNull instead.");
    }
    else if (actual == nullptr)
    {
      Fail(L"Actual was null, use IsNull if this is expected.");
    }
    else if (*expected == *actual)
    {
      Fail(message);
    }
  }

  template<typename T>
  static typename std::enable_if<!std::is_pointer<T>::value && !is_shared_ptr<T>::value>::type AreNotEqual(
    const T& expected,
    const T& actual,
    const std::wstring& message)
  {
    if (expected == actual)
    {
      Fail(message);
    }
  }
};
