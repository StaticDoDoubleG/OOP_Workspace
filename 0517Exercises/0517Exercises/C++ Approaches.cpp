/*

TYPE 1 | try �������� ����
int main() {
	try{
		...
		throw value;
		...
	}catch(type var){
		...
	}
	...
	return();
}

TYPE 2 | �Լ����� ����
int main() {
	try{
		...
		aFunction(...);
		...
	}catch(type var){
		...
	}
	...
	return();
}

type aFuction(...){
	...
	throw exception_value;
	...
	return type_value;
}

TYPE 3 | �Լ��� try ���� ������ ����
int main() {
	try{
		...
		aFunction(...);
		...
	}catch(type var){
		...
	}
	...
	return();
}

type aFuction(...){
	...
	try{
		...
		throw value;
		...
	}catch(type var){
		...
	}
	...
	return type_value;
}

//Try-Catch Block with Multiple Catch Clauses 
try{
	throw value1;
	...
	throw value2;
	...
}catch(type1 obj1){
	Handle exception
}catch(type2 obj2){
	Handle exception
}

ù��° Throw�� �Ǹ�, ù��° Catch�� �ǰ�, �ι�° Catch�� ��ŵ.
�ι�° Throw�� �Ǹ�, ù��° Catch�� ��ŵ, �ι�° Catch�� ��.

//Generic Catch Clause
try
{
	��
}
catch(int x) // Specific type catch
{
	��
}
catch(��) // Ellipsis means any exception type
{
	��
}

Any Exception
-type functionName(parameters); // Prototype with no specification
-int quotient(int first, int second); // Function declaration
Pre-defined Exceptions
-type functionName(parameters) throw(type1, type2, ..., typen);
-int quotient(int first, int second) throw(int); // declaration
No Exception
-type functionName(parameters) throw();
-int print(int first, int second) throw(); // Function declaration
*/