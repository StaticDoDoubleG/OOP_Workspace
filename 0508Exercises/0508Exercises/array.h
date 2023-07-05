#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <cassert>
using namespace std;
class Array
{
private:
	double* ptr;
	int size;
public:
	Array(int size); // Constructor
	~Array(); // Destructor
	Array(const Array& other); // Copy Constructor
	double& operator[ ] (int index); // Mutator
	double operator[ ] (int index) const; // Accessor
};
#endif