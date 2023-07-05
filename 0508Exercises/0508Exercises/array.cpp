#include "array.h"
// Constructor (allocating memory in the heap)
Array::Array(int s)
	:size(s)
{
	ptr = new double[size];
}
// Destructor (freeing memory in the heap)
Array :: ~Array()
{
	delete[] ptr;
}
// Copy Constructor
Array::Array(const Array& other)
{
	size = other.size;
	ptr = new double[size];
	for (int i = 0; i < size; i++)
		ptr[i] = other.ptr[i];
}
// Mutator subscript (read + write)
double& Array :: operator[ ] (int index)
{
	if (index < 0 || index >= size)
	{
		cout << "Index is out of range. Program terminates.";
		assert(false);
	}
	return ptr[index];
}
// Accessor subscript (read-only)
double Array :: operator[ ] (int index) const
{
	if (index < 0 || index >= size)
	{
		cout << "Index is out of range. Program terminates.";
		assert(false);
	}
	return ptr[index];
}