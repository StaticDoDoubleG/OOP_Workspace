#include <iostream>
#include <string>
#include <exception>
using namespace std;

template <typename T>
class Array {
private:
	T* Arr;
	int size, count = 0;
public:
	Array(int n);
	~Array();
	void add(T data);
	void print();
};

template <typename charT>
class basic_string {

};

class Except : public out_of_range {
public:
	Except(const string& message);
};

Except::Except(const string& message)
	:out_of_range(message)
{
}

template<typename T>
Array<T>::Array(int n)
	:size(n)
{
	Arr = new T[size];
}

template<typename T>
Array<T>::~Array()
{
	delete[] Arr;
	Arr = 0;
}

template<typename T>
void Array<T>::add(T data)
{
	Arr[count] = data;
	count++;
	if (count == size) {
		Except exception("Array is full.\n");
		throw exception;
	}
}

template<typename T>
void Array<T>::print()
{
	for (int i = 0; i < count; i++) {
		cout << Arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	cout << "Instantiation of an array of integers." << endl;
	Array <int> array1(5); // set the size of the array using ¡®new¡¯
	try
	{
		array1.add(-5);
		array1.add(7);
		array1.add(8);
		array1.add(10);
		array1.add(14);
		array1.add(20);
		array1.add(-14);
	}
	catch (out_of_range& ex)
	{
		cout << ex.what();
	}
	array1.print();
	cout << "Instantiation of an array of doubles." << endl;
	Array <double> array2(5); // set the size of the array
	try
	{
		array2.add(5.3);
		array2.add(7.6);
		array2.add(8.1);
		array2.add(-1);
	}
	catch (out_of_range& ex)
	{
		cout << ex.what();
	}
	array2.print();
	
	cout << "Instantiation of an array of strings." << endl;
	Array <string> array3(4); // set the size of the array
	try
	{
		array3.add("John");
		array3.add("Lu");
		array3.add("Mary");
		array3.add("Leo");
		array3.add("Robert");
	}
	catch (out_of_range& ex)
	{
		cout << ex.what();
	}
	array3.print();
	


	cout << "\n#-- Custom Test Cases -- \n\n";
	cout << "Instantiation of an array of characters." << endl;
	Array <char> array4(9); // set the size of the array
	try
	{
		array4.add('a');
		array4.add('G');
		array4.add('D');
		array4.add('e');
		array4.add('K');
	}
	catch (out_of_range& ex)
	{
		cout << ex.what();
	}
	array4.print();
	cout << endl;
	cout << "Instantiation of an array of booleans." << endl;
	Array <bool> array5(7); // set the size of the array
	try
	{
		array5.add(true);
		array5.add(false);
		array5.add(false);
		array5.add(true);
		array5.add(true);
		array5.add(false);
		array5.add(true);
		array5.add(false);
	}
	catch (out_of_range& ex)
	{
		cout << ex.what();
	}
	array5.print();


	array1.~Array();
	array2.~Array();
	array3.~Array();
	array4.~Array();
	array5.~Array();

	return 0;
}
