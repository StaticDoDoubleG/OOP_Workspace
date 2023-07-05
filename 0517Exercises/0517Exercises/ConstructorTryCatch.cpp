/*
C++ does not allow us to 
throw, implicitly or explicitly, an exception 
in the initializer list.
To be able to throw an exception 
if it happens in the initializer list, 
we need to use
what is called a function-try block, 
which combines a try-catch block
with an initialization list as shown in the Figure.
The function-try block allows 
the initialization to be added after the keyword 'try'
separated by the colon.

*/
#include <iostream>
using namespace std;
class SP
{
private:
	int* ptr;
public:
	SP(int* ptr);
	~SP();
	int& operator* () const;
	int* operator-> () const;
};
SP::SP(int* p)
	: ptr(p)
{
}
SP :: ~SP()
{
	delete ptr;
}
int& SP :: operator* () const
{
	return *ptr;
}
int* SP :: operator-> () const
{
	return ptr;
}

class Integer
{
private:
	SP sp;
public:
	Integer(int value);
	~Integer();
	int getValue();
};
// Constructor using function-try block
Integer::Integer(int v)
try : sp(new int)
{
	*sp = v;
}
catch (...)
{
	throw;
}
Integer :: ~Integer()
{
}
int Integer::getValue()
{
	return *sp;
}

int main()
{
	for (int i = 0; i < 1000000; i++)
	{
		try
		{
			Integer integer(i);
			cout << integer.getValue() << endl;
		}
		catch (...)
		{
			cout << "Exception is thrown" << endl;
		}
	}
	return 0;
}