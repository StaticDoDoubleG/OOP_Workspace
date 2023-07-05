#include <iostream>
using namespace std;

int intarray[5] = { 3, 7, 2, 12, 14 };
double doublearray[5] = { 22.7, 14.2, 3.8, 12.23, 11.2 };
char chararray[6] = { 'C', 'a', 'B', 'E', 'N', 'Q' };
string stringarray[4] = { "John", "Lu", "Mary", "Su" };

template <typename T, int N>
void reverse(T(&array)[N]) {
	for (int i = 0; i < N / 2; i++) {
		swap(array[i], array[N - i - 1]);
	}
}

template <typename T>
void swap(T& first, T& second) {
	T temp = first;
	first = second;
	second = temp;
}

template <typename T, int N>
void print(T(&array)[N])
{
	for (int i = 0; i < N; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
int main() {
	cout << "Original Array" << endl;
	print(intarray);
	reverse(intarray);
	cout << "Reversed Array" << endl;
	print(intarray);
	cout << endl << endl;

	cout << "Original Array" << endl;
	print(doublearray);
	reverse(doublearray);
	cout << "Reversed Array" << endl;
	print(doublearray);
	cout << endl << endl;

	cout << "Original Array" << endl;
	print(chararray);
	reverse(chararray);
	cout << "Reversed Array" << endl;
	print(chararray);
	cout << endl << endl;

	cout << "Original Array" << endl;
	print(stringarray);
	reverse(stringarray);
	cout << "Reversed Array" << endl;
	print(stringarray);
	cout << endl << endl << endl;

	cout << "#-- Custom Test Cases --" << endl;
	
	cout << endl << "//bool type array reverse" << endl;
	bool boolarray[5] = { true, false, false, true, true };
	cout << "Original Array" << endl;
	print(boolarray);
	reverse(boolarray);
	cout << "Reversed Array" << endl;
	print(boolarray);
	cout << endl;
	
	cout << endl << "//short type array reverse" << endl;
	short shortarray[9] = { -21, -23, -32768, -1, 35, 12124, 2, 325, 32768};
	cout << "Original Array" << endl;
	print(shortarray);
	reverse(shortarray);
	cout << "Reversed Array" << endl;
	print(shortarray);
	cout << endl << endl;

	return 0;
}