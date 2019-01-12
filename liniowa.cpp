#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a != 0) {
		std::cout << "1\n";
	} else if (b == 0) {
		std::cout << "INF\n";
	} else {
		std::cout << "0\n";
	}

	/*
	 * && AND
	 * || OR
	 */

	if (a == 0 && b == 0) {
		std::cout << "INF\n";
	} else if (a == 0 && b != 0) {
		std::cout << "0\n";
	} else {
		std::cout << "1\n";
	}



	return 0;
}
