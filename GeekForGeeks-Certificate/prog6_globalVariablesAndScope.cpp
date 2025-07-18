#include<iostream>

int x = 10;

extern int a; // ? extern tells the compiler that the variable is defined elsewhere in the program.

int main()
{
	int x = 15;
	int local = 0; // ? this is a local variable within a function

	std::cout << x <<"\n"; // * this prints out 15

	{
		int x = 20;
		std::cout << x << "\n"; // * this prints out 20
	}

	std::cout << ::x << "\n"; // * by using the scope resolution operator ::, this prints the global value of x

	std::cout << a << "\n"; // * this prints the extern variable a's value, 25
}
int a = 25;

/* 
1. Functions, loops, and conditional statements create a new scope
	- Each fucntion, loop, or conditional block introduces a new scope
	- Variables declared inside the block are local to that scope

2. Outer scope variables are accessible in Inner scopes
	- Variables from an outer scope can be used inside inner scopes unless overshadowed
	- However, inner scope variables are not accessible outside their block
3. Creating a new scope with curly braces
	- Curly braces { } can be used to create a new block scope anywhere in the program.
*/