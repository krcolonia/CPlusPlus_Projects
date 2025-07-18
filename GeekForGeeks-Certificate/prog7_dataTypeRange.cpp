#include<iostream>

int main()
{
	std::cout << "This program file is about Data Type Ranges" << "\n";
	std::cout << "This has no code in it, only comments within.";

	return 0;
}

/* 
Datatype								| Size in bytes	| Range
short int								| 2							| -32,768 to 32,767
unsigned short int			| 2							| 0 to 65,535
unsigned int						| 4							| 0 to 4,294,967,295
int											| 2 or 4				| -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
long int								| 4							| -2,147,483,648 to 2,147,483,647
unsigned long int				| 4							| 0 to 4,294,967,295
long long int						| 8							| -(2^63) to (2^63)-1
unsigned long long int	| 8							| 0 to 18,446,744,073,709,551,615
signed char							| 1							| -128 to 127
unsigned char						| 1							| 0 to 255
float										| 4							| -3.4×10^38 to 3.4×10^38 
double									| 8							| -1.7×10^308 to1.7×10^308 
long double							| 12						| -1.1×10^4932 to1.1×10^4932 
wchar_t									| 2 or 4				| 1 wide character
*/