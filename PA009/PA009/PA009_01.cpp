#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

bool SearchFromFile(string str, int v);

// Implement SearchFromFile function
int main()
{
	vector<int> nums = { 17, 72, 73 };
	for (auto i = 0; i < nums.size(); i++)
	{
		int value = nums[i];
		cout << "Search the integer to look for: " << value << endl;
		// Printing the result
		if (SearchFromFile("File1.txt", value))
		{
			cout << value << " is in the file. " << endl;
		}
		else
		{
			cout << value << " is not in the file!" << endl;
		}
	}
	printf("\n Press Any Key to Terminate ...\n");
	getchar();
	return 0;
}

bool SearchFromFile(string str, int v) {
	int data;
	ifstream instream;
	instream.open(str);
	if (!instream.is_open()) {
		cout << "File cannot be opened." << endl;
		assert(false);
	}
	for (int i = 1; i < 10; i++) {
		instream >> data;
		if (data == v) {
			return true;
		}
	}
	instream.close();
	return false;
}