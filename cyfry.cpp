#include <iostream>

int main()
{
	int x;
	int wynik = 0;

	std::cin >> x;

	do {
		x /= 10;
		++wynik;
	} while (x != 0);

	std::cout << wynik << '\n';

	return 0;
}
