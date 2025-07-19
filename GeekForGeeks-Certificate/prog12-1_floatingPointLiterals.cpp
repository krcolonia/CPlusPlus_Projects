#include<iostream>

/* 
Floating-point Literals are used to represent and store real numbers.
A real number has an integer part, real part, fractional part, and
exponential part. These literals can be stored either in decimal form
or exponential form.
 
- In decimal form, one must include the decimal point, exponent part,
	or both, otherwise, it will lead to an error
- In exponent form, on must includee the integer part, fractional part,
	or both, otherwis, it will lead to an error.
*/

int main()
{
	std::cout << "Floating-point Literals\n";
	{
		float a = 10.5f;
		double b = 10.515;
		float c = 2.1e15f ;
		double d = 200.1e-60;
		double f = 0x1A.1p2;

		std::cout << a << "\n"
							<< b << "\n"
							<< c << "\n"
							<< d << "\n"
							<< f << "\n";
	}

	return 0;
}