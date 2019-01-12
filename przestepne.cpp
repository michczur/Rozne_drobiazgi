#include <iostream>

int main()
{
	int x;
	std::cin >> x;

	if (x % 4 == 0) {
		if (x % 100 == 0) {
			if (x % 400 == 0) {
				std::cout << "TAK\n";
			} else {
				std::cout << "NIE\n";
			}
		} else {
			std::cout << "TAK\n";
		}
	} else {
		std::cout << "NIE\n";
	}

	if (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0)) {
		std::cout << "TAK\n";
	} else {
		std::cout << "NIE\n";
	}

	return 0;
}
