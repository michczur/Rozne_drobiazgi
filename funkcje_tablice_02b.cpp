#include <iostream>

unsigned ileParzystych(const unsigned *begin, const unsigned *end)
{
	unsigned wynik = 0;

	for (unsigned i = 0; begin + i != end; ++i) {
		if (begin[i] % 2 == 0)
			++wynik;
	}

	return wynik;
}

unsigned ileParzystych(unsigned *begin, unsigned *end)
{
	unsigned wynik = 0;

	while (begin != end) {
		if (*begin % 2 == 0)
			++wynik;

		++begin;
	}

	return wynik;
}

unsigned ileParzystych(unsigned *begin, unsigned *end)
{
	unsigned wynik = 0;
	const unsigned size = end - begin;

	for (unsigned i = 0; i < size; ++i) {
		if (begin[i] % 2 == 0)
			++wynik;
	}

	return wynik;
}

unsigned ileParzystych(unsigned *tab, unsigned size)
{
	unsigned wynik = 0;
	unsigned *end = tab + size;

	while (tab != end) {
		if (*tab % 2 == 0)
			++wynik;

		++tab;
	}

	return wynik;
}

int main()
{
	return 0;
}
