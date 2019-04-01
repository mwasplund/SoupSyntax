
// A class comment
class MyClass
{
public:
    // Comment on constructor
    MyClass(int i) :
      m_value(i)
    {
    }

    // Comment on destructor
    ~MyClass()
    {
        m_value = -1;
    }

    // Get The value
    int GetValue() const
    {
        return m_value;
    }

    bool operator==(const MyClass& other)
    {
        return m_value == rhs.m_value;
    }

private:
    // Member variable
    int m_value;
};
