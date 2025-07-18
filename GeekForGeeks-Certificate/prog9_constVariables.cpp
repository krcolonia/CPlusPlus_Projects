#include<iostream>

/* 
A const variable is a variable whose value cannot be changed after initialization. It must be
initialized at the time of declaration, and any attempt to modify it will result in a compiler error.
*/

#define y 5

int main()
{
	const int x = 10;

	std::cout << x << std::endl;
	std::cout << y << std::endl;

	return 0;
}

/* 
Constants are particularly useful in real-world applications where certain values must remain
unchhanged.
*/

/* 
Before the introduction of the const, the #define preprocessor directive was commonly used to define constants

Since Macros are handled by the preprocessor (the pre-processor does text replacement in our source fule, replacing
all occurences of 'var' with the literal 5), not by the compiler.

Hence it wouldn't be recommended because Macros don't carry type-checking information and are also prone to error.
*/

/* 
Constant vs Macros

Feature				|	const									|	#define
Type Safety		|	Provides type safety	|	No type checking
Scope					|	Obeys scoping rules		|	Global scope, no scoping
Debugging			|	Easier to debug				|	Harder to trace
*/

/* 
- const variables cannot be left un-initialized at the time of assignment
- cannot be assigned value anywhere in the program
- explicit value needed to be provided to the constant variable at the time of declaration
	of the constant variable.
*/