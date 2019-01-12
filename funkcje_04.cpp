#include <iostream>
/*
 * Napisz funkcję
 *
 * unsigned long long potega(unsigned long long podstawa, unsigned long long wykladnik);
 */

unsigned long long potega(unsigned long long podstawa, unsigned long long wykladnik)
{
	unsigned long long wynik = 1;

	for (unsigned int i = 1; i <= wykladnik; ++i)
		wynik *= podstawa;

	return wynik;
}

int main()
{
	unsigned long long a, b;
	std::cin >> a >> b;

	std::cout << a << '^' << b << " = " << potega(a, b) << '\n';
	return 0;
}
