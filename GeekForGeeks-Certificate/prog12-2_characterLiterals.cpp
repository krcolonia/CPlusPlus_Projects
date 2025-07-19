#include<iostream>

/* 
Character literals are used to store a single character within a single quote
To store multiple characters, one needs to use a character array.

Character literals are enclosed in single quotes ( ' ) and can include prefixes
for different encoding types.

Prefix	|	Encoding									|	Example	|	Description
(none)	| ASCII (default)						|	'g'			|	Default 1-byte character literal
u8			|	UTF-8											|	u8'g'		|	1-byte UTF-8 encoded literal
u				|	UTF-16										|	u'g'		|	2-byte UTF-16 encoded literal
U				|	UTF-32										|	U'g'		|	4-byte UTF-32 encoded literal
L				|	wchar_t (wide character)	|	L'g'		|	Platform-dependent wide literal
*/

int main()
{
	char a = 'G'; 	// ? ASCII Character
	char b = u8'G';	// ? UTF-8 Character
	char c = u'G';	// ? UTF-16 Character
	char d = U'G';	// ? UTF-32 Character
	char e = L'G';	// ? Wide Character

	std::cout << a << "\n"
						<< b << "\n"
						<< c << "\n"
						<< d << "\n"
						<< e << "\n";

	return 0;
}