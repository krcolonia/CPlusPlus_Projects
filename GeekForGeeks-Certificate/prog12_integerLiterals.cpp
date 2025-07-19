#include<iostream>

/* 
Literals are the Constant values that are assigned to the constant variables.

Literals represent fixed values that cannot be modified. Literals contain memory
but they do nat have references as variables.

Generally, constants and literals are used interchangeably
 */

/* 
For example, "const int variable_name = 5;", is a constant expression and the value
5 is referred to as a constant integer literal. There are 5 types of literals in C++
	- Integer Literal
	- Float Literal
	- Character Literal
	- String Literal
	- Boolean Literal
 */

/* 
Integer literals are used to represent and store the integer values only. Integer literals
are expressed in two types

A. Prefixes: The Prefix of the integer literal indicates the base in which it is to be read.
	There are basically 4 types:
	a. Decimal-literal base (base 10): A non-zero decimal digit followed by zero or more decimal
		 digits (0, 1, 2, 3, 4, 5, 6, 7, 8, 9)
		 ? 56, 78

	b. Octal-literal (base 8): a 0 followd by zero or more octal digits (0, 1, 2, 3, 4, 5, 6, 7)
		 ? 045, 076, 06210
	
	c. Hex-literal (base 16): 0x or 0X followed by one or more hexadefimal digits
		 (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, A, b, B, c, C, d, D, e, E, f, F).
		 ? 0x23A, 0Xb4C, 0xFEA

	d. Binary-literal (base 2): 0b or 0B followed by one or more binary digits (0, 1)
		 ? 0b101, 0B111

B. Suffixes: The prefix of the integer literal indicates the type in which it is to be read.
	 unsigned int		-> u
	 long int				-> L
	 long long int	-> LL
 */

int main()
{
	int a = 20;		// ? Decimal
	int b = 0x1A;	// ? Hexadecimal
	int c = 016;	// ? Octal
	int d = 0b11;	// ? Binary

	std::cout << a << "\n"
						<< b << "\n"
						<< c << "\n"
						<< d << "\n";

	return 0;
}