#include<iostream>

int main()
{
	int a = 10, b = 20;
	
	std::cout << a << " " << b << std::endl;

	int temp  = a ;
	a = b;
	b = temp;

	std::cout << a << " " << b;

	return 0;
}