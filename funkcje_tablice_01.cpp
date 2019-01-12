#include <iostream>

void f(int *x)
{
	std::cout << "Wywołanie f()\n";
	*x = 15;
	x[0] = 15;
}

int suma(int *tab, int dl)
{
	int wynik = 0;

	for (int i = 0; i < dl; ++i) {
// 		wynik += *(tab + i);
		wynik += tab[i];
	}

	return wynik;
}

int main()
{
	int x = 3;
	f(&x);
	std::cout << "x = " << x << '\n';

	int t[6] = {987, 3, 9, -3, 14, 50};
	std::cout << suma(t + 3, 3) << '\n';

	return 0;
}
