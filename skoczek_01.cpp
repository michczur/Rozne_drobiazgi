#include <iostream>

int main()
{
	int w, k;
	int wynik = 0;
	std::cin >> w >> k;

	if (w - 2 >= 0 && k + 1 < 8) {
		std::cout << w - 2 << ", " << k + 1 << '\n';
		++wynik;
	}

	if (w - 1 >= 0 && k + 2 < 8) {
		std::cout << w - 1 << ", " << k + 1 << '\n';
		++wynik;
	}

	if (w + 1 < 8 && k + 2 < 8) {
		std::cout << w - 2 << ", " << k + 1 << '\n';
		++wynik;
	}

	//...


	return 0;
}
