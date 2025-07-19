#include<iostream>

/*
This literal is provided only in C++ and not in C. They are used to
represent the boolean datatypes. These can carry two values:

- true:		To represent True value. This must not be considered equal to int 1;
- false:	To represent False value. This must not be considered equal to int 0;
*/

int main()
{
	const bool isTrue = true;
	const bool isFalse = false;
	std::cout << "isTrue? " << isTrue << "\n"
						<< "isFalse? " << isFalse;

	return 0;
}