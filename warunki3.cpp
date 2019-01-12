#include <iostream>

int main()
{
	int x;
	std::cin >> x;

	std::cout << "x = " << x << '\n';

	if (x < 0) {
		std::cout << "x jest ujemny\n";
	} else {
		if (x > 0) {
			std::cout << "x jest dodatni\n";
		} else {
			std::cout << "x jest równy zero\n";
		}
	}

	if (x < 0) {
		std::cout << "x jest ujemny\n";
	} else if (x > 0) {
		std::cout << "x jest dodatni\n";
	} else {
		std::cout << "x jest równy zero\n";
	}

	return 0;
}
