#include <iostream>

unsigned ileParzystych(unsigned *tab, unsigned size)
{
	unsigned wynik = 0;

	for (unsigned i = 0; i < size; ++i) {
		if (tab[i] % 2 == 0)
			++wynik;
	}

	return wynik;
}

bool czyPierwsza(unsigned int p)
{
	//było wczoraj
	return true;
}

unsigned ilePierwszych(unsigned *tab, unsigned size)
{
	unsigned wynik = 0;

	for (unsigned i = 0; i < size; ++i) {
// 		if (czyPierwsza(tab[i]) == true)
		if (czyPierwsza(tab[i]))
			++wynik;
	}

	return wynik;
}

int main()
{
	return 0;
}
