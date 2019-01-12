#include <iostream>

int suma(const int *tab, unsigned size)
{
	int wynik = 0;
	for (unsigned i = 0; i < size; ++i) {
		wynik += tab[i];
		tab[i] = 0;
	}
	return wynik;
}

int main()
{
	int tab[5] = {5, 8, -2, 4, 12};

	std::cout << suma(tab, 5) << '\n';
	std::cout << suma(tab, 5) << '\n';

	return 0;
}
