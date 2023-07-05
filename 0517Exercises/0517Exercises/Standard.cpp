/*
//STANDARD EXCEPTION CLASSES
They are in the <exception> class

exception() throw() //constructor
exception(const exception&) throw() //copy constructor
exception& operator =(const exception&) throw() // Assignment operator
virtual ~exception() throw() //destructor
virtual const char* what() const throw() //member function

//Logical Errors
explicit logic_error(const string& whatArg) //constructor
virtual const char* what() const throw() //member function

 class             |  constructor
-domain_error      |  explicit domain_error(const string& whatArg) 
-length_error      |  explicit length_error(const string& whatArg)
-out_of_range      |  explicit out_of_range(const string& whatArg)
-invalid_argument  |  explicit invalid_argument(const string& whatArg)

[The domain_error Class]
The domain_error exception is thrown when the given data is out of domain.
For example, if a function requires an argument between 0.0 and 4.0 then this
exception is thrown if we pass a value that is not in this domain.

[The length_error Class]
The length_error exception is thrown if the length of an object is greater or smaller
than the predefined length.
For example, the string class throws an exception if the size of a string exceeds the
value returned by the max_size member function.

[The out_of_range Class]
The out_of_range exception is thrown if an index goes out of range for a library
class. 
For example, the string class has a function named at(...) that returns a value at the
index defined as its parameter. 
If an integer is passed that is beyond the index of the current string object, an
exception of this type is thrown. 
We can use this class to throw an exception if an the index of an array is out of
range.

[The invalid_argument Class]
The invalid_argument exception normally occurs when there is a logical error, but
the nature of an exception does not match any of the previously-defined three
classes. 
An example is when we have a bit set in which each bit should have a value of either
0 or 1.

//Runtime Errors
explicit runtime_error(const string& whatArg) // constructor
virtual const char* what() const throw() // member function

class              |  constructor
underflow_error    |  explicit underflow_error(const string& whatArg)
overflow_error     |  explicit overflow_error(const string& whatArg)
range_error        |  explicit range_error(const string& whatArg)

[The underflow_error Class]
The underflow_error condition occurs in
arithmetic calculations.
However, this type of error is not normally
defined for any arithmetic operator. It can be
used to throw an exception in a user-defined
function.

[The overflow_error Class]
The overflow_error condition also occurs in arithmetic calculations.
However, this type of error is not normally defined for any arithmetic operator.
It can be used to throw an exception in a user-defined function.

[The range_error]
It can be used to throw an exception in situations where a result of a computation
cannot be represented by the destination type.


//Five Other Classes
explicit failure(const string& mesg) // constructor
virtual ~failure() // destructor
virtual const char* what() const throw() // member function

[The bad_exception Class]
A bad_exception class object is thrown from a
function with an exception specification that defines
the function will not throw exceptions, but
something happens in the function and it throws
one.

[The bad_alloc Class]
The <new> header defines types and functions related to dynamic memory allocation.
The operator new throws an object of type bad_alloc class if the requested memory
cannot be allocated.

[The bad_typeid Class]
The bad_typeid exception is thrown when we define a type which cannot be fulfilled.
For example, if we try to dereference a pointer (*P) which is null, an exception of this
type will be thrown.

[The bad_cast Class]
The bad_cast class is used to throws an exception when a dynamic cast operation fails.

[The failure Class]
The <ios> header defines a class that can be used as the base class for exceptions thrown
in all input/output classes.
Note that the name of the class is failure but its scope is ios_base.

ex/
#include <stdexcept>
#include <iostream>
using namespace std;
int quotient (int first, int second)
{
if (second == 0)
{
throw invalid_argument ("Error! Divide by zero!");
}
return first / second;
}
int main ()
{
int num1, num2, result;
for (int i = 0; i < 3; i++)
{
cout << "Enter an integer: ";
cin >> num1;
cout << "Enter another integer: ";
cin >> num2;
// Try-Catch block
try
{
cout << "Result of division: " << quotient (num1, num2);
cout << endl;
}
catch (invalid_argument ex)
{
cout << ex.what () << endl;
}
}
return 0;
}

*/



//Inheriting from Standard Exception Classes
/*
class MemoryException : public bad_alloc
{
public:
	MemoryException();
	const char* what() const throw();
};

MemoryException::MemoryException()
	: bad_alloc()
{
}
const char* MemoryException::what() const throw()
{
	return "A memory failure has occurred.";
}

MemoryException MemoryExcept;
・
try
{
	・
		throw MemoryExcept;
	・
}
catch (bad_alloc& excp)
{
	cout << excp.what() << endl;
}

class ArrayIndexException : public out_of_range
{
public:
	ArrayIndexException(const string& message);
};

ArrayIndexException::ArrayIndexException(const string& message)
	: out_of_range(message)
{
}

ArrayIndexException ArrayIndexExcept("Array index out of range");
・
try
{
	・
		throw ArrayIndexExcept;
	・
}
catch (out_of_range& excp)
{
	cout << excp.what() << endl;
}

*/