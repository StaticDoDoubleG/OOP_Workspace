#include <iostream>
#include <exception>
#include <string>
using namespace std;

int main() {
	int c;
	string str = "ABCEDFGHIJKLMNOPQRSTUVWXYZ";
	cout << "Enter the index of character to see: ";
	cin >> c;
	try {
		cout << "Character is: " << str.at(c - 1) << endl;
	}
	catch (exception& e) {
		cout << "There is no character at position " << c << " in English alphabet!" << endl;
	}
	cout << "Enter the index of character to see: ";
	cin >> c;
	try {
		cout << "Character is: " << str.at(c - 1) << endl;
	}
	catch (exception& e) {
		cout << "There is no character at position " << c << " in English alphabet!" << endl;
	}
	cout << "Enter the index of character to see: ";
	cin >> c;
	try {
		cout << "Character is: " << str.at(c - 1) << endl;
	}
	catch (exception& e) {
		cout << "There is no character at position " << c << " in English alphabet!" << endl;
	}
	cout << "Enter the index of character to see: ";
	cin >> c;
	try {
		cout << "Character is: " << str.at(c - 1) << endl;
	}
	catch (exception& e) {
		cout << "There is no character at position " << c << " in English alphabet!" << endl;
	}
	cout << "Enter the index of character to see: ";
	cin >> c;
	try {
		cout << "Character is: " << str.at(c - 1) << endl;
	}
	catch (exception& e) {
		cout << "There is no character at position " << c << " in English alphabet!" << endl;
	}
	cout << endl;
	cout << "#-- Custom Test Cases --" << endl;

	cout << "Enter the index of character to see: ";
	cin >> c;
	try {
		cout << "Character is: " << str.at(c - 1) << endl;
	}
	catch (exception& e) {
		cout << "There is no character at position " << c << " in English alphabet!" << endl;
	}
	cout << "Enter the index of character to see: ";
	cin >> c;
	try {
		cout << "Character is: " << str.at(c - 1) << endl;
	}
	catch (exception& e) {
		cout << "There is no character at position " << c << " in English alphabet!" << endl;
	}
	cout << "Enter the index of character to see: ";
	cin >> c;
	try {
		cout << "Character is: " << str.at(c - 1) << endl;
	}
	catch (exception& e) {
		cout << "There is no character at position " << c << " in English alphabet!" << endl;
	}
	return 0;
}