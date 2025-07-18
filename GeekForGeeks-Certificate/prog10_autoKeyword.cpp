#include<iostream>

/* 
The auto keyword simplifies variable declaration introduced in C++11

By using auto, the compiler automatically deduces the type of a variable
based on the type of the initializer.

This feature not only enhances code readability but also reduces the chance
of type mismatch errors.

The auto keyword allows the compiler to infer the type of a variable at
compile time based on its initializer. The programmer doesn't need to
explicitly specify the type, making the code cleaner and easier to write.
*/

int main()
{
	auto a = 5;
	auto b = 20.5;

	std::cout << a << " " << b << "\n";
	std::cout << typeid(a).name() << " " << typeid(b).name();

	/* 
	typeid() is an operator which is used where the dynamic type of an object
	needs to be known.
	*/

	return 0;
}

/* 
! Advantages:
1. No Conversion happens when auto is used
*		float x = 3.4 // ? double literal converted to floar
*		auto y = 3.4	// ? type of y is double

2. If a function returns auto, its return type can be changed without
	 worrying about prototype change.

3. Can be very helpful for lengthy types, espcially STL iterators
*		vector<int>L::iterator i; can be replaced with auto i;

4. It can also be used in Lambda Expressions.

! Disadvantages:
By using auto, you don't necessarily know the type of object being created.
There are also occasions where the programmer might expect the compiler to
deduce one type, but the compiler adamantly deduces another. It takes more
processing time.
*/