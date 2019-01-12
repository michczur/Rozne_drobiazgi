#include <iostream>

int main()
{
	int i;
	int x = 0;
	int tab[6];
	int y = 0;

	std::cout << "x = " << x << ", y = " << y << '\n';
	for (i = 0; i <= 9; ++i)
		tab[i] = (i + 1) * 10;

	std::cout << "==========================\n";

	for (i = 0; i <= 9; ++i)
		std::cout << "tab[" << i << "] = " << tab[i] << '\n';
	std::cout << "x = " << x << ", y = " << y << '\n';

	if (y != 0)
		std::cout << "OMG HAXORED\n";

	int tab[5];
	std::cout << "Podaj max 5 liczb, 0 kończy sekwencję (jeśli mniej)\n";
	int ile = 0;
	int liczba;

	do {
		std::cin >> liczba;
		if (liczba != 0) {
			tab[ile] = liczba;
			++ile;
		}
	} while (liczba != 0);

	return 0;
}
