#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;

void print1(string value) {
	cout << value << " ";
}

void print2(int value) {
	cout << value << " ";
}

int main() {

	std::vector<string> names;
	names.push_back("John");
	names.push_back("Mary");
	names.push_back("Lucie");
	names.push_back("Robert");
	names.push_back("Suzan");
	names.push_back("Richard");

	cout << "Unsorted Names: " << endl;
	for_each(names.begin(), names.end(), print1);
	cout << endl << endl;

	sort(names.begin(), names.end());
	cout << "Sorted Names: " << endl;
	for_each(names.begin(), names.end(), print1);
	cout << endl << endl;

	std::vector<int> integers;
	integers.push_back(17);
	integers.push_back(23);
	integers.push_back(11);
	integers.push_back(18);

	cout << "Unsorted Integers: " << endl;
	for_each(integers.begin(), integers.end(), print2);
	cout << endl << endl;

	sort(integers.begin(), integers.end());
	cout << "Sorted Integers: " << endl;
	for_each(integers.begin(), integers.end(), print2);
	cout << endl << endl;

	printf("\n Press Any Key to Terminate ...\n");
	getchar();
	return 0;
}