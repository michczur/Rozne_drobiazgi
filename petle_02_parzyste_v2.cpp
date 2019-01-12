#include <iostream>

int main()
{
	/*
	 * Wypisz wszystkie liczby parzyste (podzielne przez 2)
	 * z przedziału [a, b]
	 *
	 * Zadanie z gwiazdką:
	 * wczytaj trzecią liczbę c, wypisz wszystkie liczby
	 * z przedziału [a, b] podzielne przez c (spróbuj
	 * nie używać ifów)
	 */
	int a, b;

	std::cin >> a >> b;

	int i = a;
	/*
	if (i % 2 == 1)
		i += 1;
	*/

	i += i % 2;

	while (i <= b) {
		std::cout << "i = " << i << '\n';

		i += 2;
	}

	return 0;
}
