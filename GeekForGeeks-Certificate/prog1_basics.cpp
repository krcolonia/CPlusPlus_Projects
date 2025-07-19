#include<iostream>

// using namespace std;
// ? although this is convenient, it's better practice to use std:: explicitly before standard lib objs

int main()
{
	std::cout << "Hello World!" << "\n"
						<< __cplusplus << std::endl;
	return 0;

	// single line comment
	/* multi-line comment */

	/* 
	? Command to compile and run the program
	
	g++ [filename].cpp -o [exe_filename]
	./[exe_filename]

	*/
}