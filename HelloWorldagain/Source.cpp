/*Given two bit strings of length n, find the bitwise AND,
bitwise OR, and bitwise XOR of these strings.*/

#include <iostream>
int main() {
	std::cout << "Hello, World!" << std::endl;
	int string1 = 0b1010;
	//std::cin >> string1;
	std::cout << std::endl;
	int string2 = 0b1111;
	//std::cin >> string2;
	//AND
	int AND = 0;
	AND = string1 & string2;
	std::cout << AND << std::endl;
	//OR
	int OR = string1 | string2;
	std::cout << OR << std::endl;
	//XOR
	int XOR = string1 ^ string2;
	std::cout << XOR << std::endl;
}