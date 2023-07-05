/*

TYPE 1 | try 구문에서 던져
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

TYPE 2 | 함수에서 던져
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

TYPE 3 | 함수의 try 구문 내에서 던져
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

첫번째 Throw가 되면, 첫번째 Catch가 되고, 두번째 Catch는 스킵.
두번째 Throw가 되면, 첫번째 Catch는 스킵, 두번째 Catch가 됨.

//Generic Catch Clause
try
{
	…
}
catch(int x) // Specific type catch
{
	…
}
catch(…) // Ellipsis means any exception type
{
	…
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