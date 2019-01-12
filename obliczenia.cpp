#include <iostream>

int main()
{
	/*
	 * operacje arytmetyczne:
	 * +, -, *, /, %
	 */

	std::cout << (2 + 2) * 2 << std::endl;
	std::cout << 11.0 / 3 << std::endl;
	std::cout << 1 - 0.99 << std::endl;

	std::cout << 27 / 7 << std::endl;
	std::cout << 27 % 7 << std::endl; //reszta (modulo)

	/* operacje logiczne
	 * np. porównania:
	 * <, >, <=, >= itd.
	 * == czy równe
	 * != nierówne
	 */

	std::cout << (5 == 2 * 2 + 1) << std::endl;
}
