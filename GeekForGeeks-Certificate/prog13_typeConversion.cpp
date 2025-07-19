#include<iostream>

void implicitConv();
void explicitConv();

int main()
{
	implicitConv();
	explicitConv();
	return 0;
}

void implicitConv()
{
	/*
	1. Implicit Type Conversion, also known as 'automatic type conversion'
		- Done by the compiler on its own, without any external trigger from the user.
		- Generally takes place whn in an expression more than one data type is present.
			In such condition type conversion (type promotion) takes place to avoid loss of
			data.
		- All the data types of the variables are upgraded to the data type of the variable
			with largest data type.

		bool -> char -> short int -> int -> unsigned int -> long 
		-> unsigned -> long long -> float -> double -> long double

	It is possible for implicit conversions to lose information, signs can be lost (when signed)
	is implicitly converted to unsigned, and overflow can occur (when long long is implicitly
	converted to float)
	*/
	int x = 10;
	char y = 'A';
	std::cout << (x + y) << '\n';

	float z = 5.5;
	std::cout << (x + z) << '\n';

	bool b  = z;
	std::cout << b << '\n';
}

void explicitConv()
{
	/* 
	2. Explicit Type Conversion, also called type casting and it is user-defined. Here the user
		 can typecast the result to make it of a particular data type.

	C++ provides several ways to perform explicity type conversion:
	1. C-Style Casting
	2. C++ Style Casting:
		- static_cast
		- dynamic_cast
		- const_cast
		- reinterpret_cast
	
	1. C-Style Casting: The traditional way of type casting, inherited from the C programming language
		- (target_type) variable
	
	2. C++ Style Casting: C++ introduces safer and more specialized casting operators to replace the
		 generic C-style cast. These include:
		- Static Cast
		- Dynamic Cast
		- Const Cast
		- Reinterpret Cast
	*/

	// ? C-style Casting
	int x=15, y=2;
	double z = double(x)/y;
	std::cout << z << "\n";

	// ? C++ Style Casting
	float f = 3.5;
	int b = static_cast<int>(f);
	std::cout << b << "\n";
}