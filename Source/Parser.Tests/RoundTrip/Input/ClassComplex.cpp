
// A class comment
class MyClass
{
	// Member variable
	int m_value;

	// bool operator==(const MyClass& other)
	// {
	//	 return m_value == rhs.m_value;
	// }

private:

	// Get The value
	[[AwesomeMethod]]
	int GetValue()
	{
		return m_value;
	}

	// Comment on destructor
	~MyClass()
	{
		m_value = -1;
	}
	// Comment on constructor
	MyClass(int i) :
	  m_value(i)
	{
	}
public:
};
