#include<iostream>

// ? the lesson this file covers is 'Variables and Data Types'

int main()
{
	/* 
	? Declaring a single variable
	* type variable_name;

	? Declaring multiple variables
	* type variable1_name, variable2_name, variable3_name;

	? datatype - type of data that can be stored in this variable.
	? variable_name - name given to the variable.
	? value - it is the initial vallue stored in the variable.
	* int age = 15;
	*/

	int x = 5;
	std::cout << x << " ";
	x = 8;
	std::cout << x << " ";

	int y = 10;
	std::cout << y;

	/* 
	? 1. Declaration: int x = 5; creates an integer variable x with an initial value of 5
	? 2. Update: x = 8; changes the value of x to 8;
	? 3. New Variable: int y = 10; declares a second variable y with value 10
	? 4. Output: the program prints 5 8 10

	? Other Variable Declaration Examples
	* Declaring float variable
	float simpleInterest;

	* Declaring integer variable
	int time, speed;

	* Declaring character variable
	char var;

	* Declaring string variable
	std::string name;
	*/

	return 0;
}