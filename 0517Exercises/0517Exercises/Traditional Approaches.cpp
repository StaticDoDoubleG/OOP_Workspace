/*
1. Let Run-Time Environment Abort the Program

#include <iostream>
using namespace std;
int main ()
{
	int num1, num2, result;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter an integer: ";
		cin >> num1;
		cout << "Enter another integer: ";
		cin >> num2;
		result = num1 / num2; // The statement that may create exception
		cout << "The result of division is: " << result << endl;
	}
	return 0;
}

The first approach is the worst. 
We let the program abort without any warning.
시스템이 아무 경고 없이 멈추게 함.

2. Ask Run-Time Environment to Abort the Program

#include <iostream>
#include <cassert>
using namespace std;
int main ()
{
	int num1, num2, result;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter an integer: ";
		cin >> num1;
		cout << "Enter another integer: ";
		cin >> num2;
		if (num2 == 0)
		{
			cout << "No division by zero!. Program is aborted." << endl;
			assert (false);
		}
		result = num1 / num2;
		cout << "The result of division is: " << result << endl;
	}
	return 0;
}

The second approach is better, the program will still abort, 
but the user will be notified.
아직도 멈추나, 사용자가 알 수 있음.

3. Use Error Checking

#include <iostream>
using namespace std;
int main ( )
{
	int num1, num2, result;
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter an integer: ";
		cin >> num1;
		cout << "Enter another integer: ";
		cin >> num2;
		if (num2 == 0)
		{
			cout << "Division cannot be done in this case." << endl;
		}
		else
		{
			result = num1 / num2;
			cout << "The result of division is: " << result << endl;
		}
	}
	return 0;
}

The third approach is better than the first two 
because the pair that would cause the program to abort is ignored, 
and the program continues with the rest of the data. 
The problem with this approach is that the code for handling an error 
is mingled with the productive code of the program.
예외가 무시될 수 있으나, 실효코드와 뒤섞여 가독성이 떨어짐.

4. Using Function Return Value for Error Checking

#include <iostream>
using namespace std;
int quotient (int first, int second)
{
	if (second == 0)
	{
		return −1;
	}
	return (first / second);
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
		result = quotient (num1, num2);
		if (result == −1)
		{
			cout << "Error, division by zero." << endl;
		}
		else
		{
			cout << "Result of division is: " << result << endl;
		}
	}
	return 0;
}

The fourth approach is the best, 
but it cannot be applied in all cases. 
In addition, the principle of modular programming dictates 
that the return value of a function 
should be used only for one purpose, not two.
가장 이상적이지만, 함수의 리턴값은 반드시 하나일 수 밖에 없기 때문에
모든 케이스에 적용할 수가 없다.
*/