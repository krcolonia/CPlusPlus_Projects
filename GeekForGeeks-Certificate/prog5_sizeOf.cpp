#include<iostream>

int main()
{
	/* 
	? sizeOf() is a unary compile-time operator used to determine the size of
	? variables, data types, and constants in bytes at compile time. It can
	? also determine the size of classes, structures, and unions.

	? 1. Compile-Time Behavior: the sizeOf() operator is evaluated during the
	?		 compilation of the program. This means that its results are known
	?		 before the program runs.

	? 2. Determines Size in Bytes: returns the number of bytes required to store
	?		 a particular data type or object in memory

	? 3. Flexible Usage: it can be used with basic data types, user-defined types,
	?		 variables, and even expressions.

	? Syntax:
	* sizeof(data type)
	* or
	* sizeof(expression)

	? type 				-> built-in or user-defined data type.
	? expression 	-> evaluates to an object or a data type.
	
	*/

	std::cout << "Size of int: " << sizeof(int) << " bytes\n";
	std::cout << "Size of char: " << sizeof(char) << " bytes\n";
	std::cout << "Size of long long: " << sizeof(long long) << " bytes\n";
	std::cout << "Size of float: " << sizeof(float) << " bytes\n\n";

	int x;
	double d = 10.2;
	std::cout << "Size of x: " << sizeof(x) << " bytes\n";
	std::cout << "Size of d: " << sizeof(d) << " bytes\n";
	std::cout << "Size of 10ll: " << sizeof(10ll) << " bytes\n";
	std::cout << "Size of 3.4: " << sizeof(3.4) << " bytes\n";
	std::cout << "Size of 3.4f: " << sizeof(3.4f) << " bytes\n";

	return 0;
}