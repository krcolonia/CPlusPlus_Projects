#include<iostream>

/* 
Static variables are allocated memory only once during the lifetime of a program
Its value is retained across multiple function calls and persists until the program terminates

Key Characteristics of Static Variables:
1. Lifetime:
	- Static variables exists for the entire lifetime of the program

2. Scope:
	- A static variable devlared inside a function has local scope but retains
		its value across multiple calls to the function.
	- A static global variable has file scope (internal linkage) and it not
		accessible outside the file in which it is defined.

3. Initialization:
	- Static variables are initialized only once, and if not explicitly
		intiialized, they are automatically initialized to zero.

4. Memory Allocation:
	- Memory for static variables is allocated in the data segment, not the stack.
*/

int main()
{
	int x;

	std::cout << x << std::endl;

	return 0;
}