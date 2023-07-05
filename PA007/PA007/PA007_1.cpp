#include "time.h"
#include <iostream>
#include <exception>
using namespace std;

class HExcept : public exception {
public:
	HExcept();
	string message();
};

HExcept::HExcept()
	:exception()
{
}

string HExcept::message() {
	return "Hours cannot be negative.";
}

class MExcept : public out_of_range {
public:
	MExcept();
	string message();
};

MExcept::MExcept()
	:out_of_range("")
{
}

string MExcept::message() {
	return "Minutes need to be between 0 to 59.";
}

class SExcept : public bad_alloc {
public:
	SExcept();
	string message();
};

SExcept::SExcept()
	:bad_alloc()
{
}

string SExcept::message() {
	return "Seconds need to be between 0 to 59.";
}

class TimeError : HExcept, MExcept, SExcept {
private:
	int errorType;
public:
	TimeError(int errorType);
	string message();
};

TimeError::TimeError(int err)
	: errorType(err)
{
}

string TimeError::message() {
	if (errorType == 1) {
		HExcept HExcept;
		return HExcept.message();
	}
	else if (errorType == 2) {
		MExcept MExcept;
		return MExcept.message();
	}
	else {
		SExcept SExcept;
		return SExcept.message();
	}
}

class Time{
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time(int h, int m, int s);
	~Time();
	int InSeconds();
	void print() const;
	void normalize();
};

Time::Time(int h, int m, int s)
try : hours(h), minutes(m), seconds(s)
{
	if (hours < 0) {
		throw TimeError(1);
	}
	else if (minutes < 0 || minutes > 59) {
		throw TimeError(2);
	}
	else if(seconds < 0 || seconds > 59){
		throw TimeError(3);
	}
}
catch (...) {
	throw;
}

Time::~Time()
{
}

int Time::InSeconds() {
	return seconds + minutes * 60 + hours * 3600;
}

int main() {
	int h, m, s;
	//Set1
	cout << "Enter data for set 1 (hour minutes seconds): ";
	cin >> h;
	cin >> m;
	cin >> s;
	try {
		Time Time1(h, m, s);
		cout << "Result for set 1: " << Time1.InSeconds() << " seconds." << endl;
	}
	catch (TimeError &e) {
		cout << "Exception for set 1: " << e.message() << endl;
	}
	//Set2
	cout << "Enter data for set 2 (hour minutes seconds): ";
	cin >> h;
	cin >> m;
	cin >> s;
	try {
		Time Time2(h, m, s);
		cout << "Result for set 2: " << Time2.InSeconds() << " seconds." << endl;
	}
	catch (TimeError &e) {
		cout << "Exception for set 2: " << e.message() << endl;
	}
	//Set 3
	cout << "Enter data for set 3 (hour minutes seconds): ";
	cin >> h;
	cin >> m;
	cin >> s;
	try {
		Time Time3(h, m, s);
		cout << "Result for set 3: " << Time3.InSeconds() << " seconds." << endl;
	}
	catch (TimeError &e) {
		cout << "Exception for set 3: " << e.message() << endl;
	}
	//Set 4
	cout << "Enter data for set 4 (hour minutes seconds): ";
	cin >> h;
	cin >> m;
	cin >> s;
	try {
		Time Time4(h, m, s);
		cout << "Result for set 4: " << Time4.InSeconds() << " seconds." << endl;
	}
	catch (TimeError &e) {
		cout << "Exception for set 4: " << e.message() << endl;
	}
	//Set 5
	cout << "Enter data for set 5 (hour minutes seconds): ";
	cin >> h;
	cin >> m;
	cin >> s;
	try {
		Time Time5(h, m, s);
		cout << "Result for set 5: " << Time5.InSeconds() << " seconds." << endl;
	}
	catch (TimeError& e) {
		cout << "Exception for set 5: " << e.message() << endl;
	}

	cout << endl;
	cout << "#-- Custom Test Cases --" << endl;
	//Test Case 1
	cout << "Enter data for Test Case 1 (hour minutes seconds): ";
	cin >> h;
	cin >> m;
	cin >> s;
	try {
		Time TestTime1(h, m, s);
		cout << "Result for Test Case 1: " << TestTime1.InSeconds() << " seconds." << endl;
	}
	catch (TimeError& e) {
		cout << "Exception for Test Case 1: " << e.message() << endl;
	}
	//Test Case 2
	cout << "Enter data for Test Case 2 (hour minutes seconds): ";
	cin >> h;
	cin >> m;
	cin >> s;
	try {
		Time TestTime2(h, m, s);
		cout << "Result for Test Case 2: " << TestTime2.InSeconds() << " seconds." << endl;
	}
	catch (TimeError& e) {
		cout << "Exception for Test Case 2: " << e.message() << endl;
	}
	//Test Case 3
	cout << "Enter data for Test Case 3 (hour minutes seconds): ";
	cin >> h;
	cin >> m;
	cin >> s;
	try {
		Time TestTime3(h, m, s);
		cout << "Result for Test Case 3: " << TestTime3.InSeconds() << " seconds." << endl;
	}
	catch (TimeError& e) {
		cout << "Exception for Test Case 3: " << e.message() << endl;
	}

	cout << endl;
	return 0;
}