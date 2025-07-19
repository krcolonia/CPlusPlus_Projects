#include<iostream>

/* 
String literals are similar to character literals, except that they can store
multiple characters and uses a double quote to store the same. It can also
accomodate the special characters and escap sequences mentioned in the character
literals.

We can break a long line into multiple lines using string literal and can separate
them with the help of white spaces.

String literals are enclosed in double quotes ( ' ) and may also have prefixes for
encoding

Prefix	|	Encoding									| Example		| Description
(none)	|	ASCII (default)						| "hello"		| Default String Literal
u8			| UTF-8											| u8"hello"	|	UTF-8 Encoded String Literal
u				|	UTF-16										| u"hello"	|	UTF-16 Encoded String Literal
U				| UTF-32										| U"hello"	|	UTF-32 Encoded String Literal
L				| wchar_t (wide character)	|	L"hello"	| Wide String Literal
*/

int main()
{
	char a = 'h'; // ? Character
	char *b = "hello";
	std::string c = "Hello, World!"; // ? String Literal set to variable 'c'

	std::cout << a << "\n"
						<< b << "\n"
						<< c;

	return 0;
}