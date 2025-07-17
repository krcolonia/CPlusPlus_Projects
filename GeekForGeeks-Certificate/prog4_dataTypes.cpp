#include<iostream>

int main()
{
	/* 
	? Data types in C++

	? Integer Types
	* short			==>		16bits [ -32,768 --> 32,767 ]
	* int				==>		32bits [ −2.1 Billion --> 2.1 Billion ]
	* long			==>		32-64 bits [ Platform Dependent ]
	* long long	==>		~64bits [ ±9.2e18 ]
	? Unsigned Integer
	* unsigned short			==>		0 --> 4.2 Billion
	* unsigned int				==>		0 --> 65,535
	* unsigned long				==>		0 --> Platform Dependent
	* unsigned long long	==>		0 -> 18.4 Quintillion

	? Character Types
	* char
	* unsigned char
	? Specialized Char Types
	* wchar_t (wide character)
	* char16_t
	* char32_t (for Unicode)

	? Floating-Point Types
	* float
	* double
	* long double

	? Other Types
	* bool	==>	Used to storee true or false
	* void	==>	Reprsents the absence of value

	? Non-Primitive Types
	* Array								==> collection of elements of the same type
	* Pointers						==> variables that stor the address of another variable
	* User-Defined Types	==> created by the programmer using classes, structs, or enums

	*/

	int age = 22;
	std::string name = "Kurt";
	char gender = 'M';
	bool isLearning = true;
	float weight = 70.5;

	std::cout << name 			<< "\n" // ? prints name [string]
						<< age				<< "\n" // ? prints age [int]
						<< gender			<< "\n" // ? prints gender [char]
						<< isLearning	<< "\n" // ? prints isLearning [bool]
						<< weight; // ? prints weight [float]

	return 0;
}