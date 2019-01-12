#include <cmath>
#include <iostream>

/*
 * Napisz funkcję
 * int kwadratowa(double a, double b, double c);
 *
 * która zwraca liczbę rozwiązań równania
 * ax^2 + bx + c = 0
 *
 * Znajdź rozwiązania tego równania (o ile są)
 * i wypisz je (wewnątrz tej funkcji).
 */

int kwadratowa(int a, int b, int c, double *p1, double *p2)
{
	const int delta = b * b - 4 * a * c;
	if (delta < 0)
		return 0;

	if (delta == 0) {
// 		const double x0 = -b / (2.0 * a);
// 		std::cout << "x0 = " << x0 << '\n';
// 		*p1 = x0;

		*p1 = -b / (2.0 * a);
		return 1;
	}

	const double x1 = (-b - sqrt(delta)) / (2 * a);
	const double x2 = (-b + sqrt(delta)) / (2 * a);
// 	std::cout << "x1 = " << x1 << '\n';
// 	std::cout << "x2 = " << x2 << '\n';

	*p1 = x1;
	*p2 = x2;

	return 2;
}

int main()
{
	int a, b, c;
	double x[2];
	std::cin >> a >> b >> c;

	const int ileRozw = kwadratowa(a, b, c, &x[0], &x[1]);
	if (ileRozw == 2) {
		std::cout << "x[0] = " << x[0] << '\n';
		std::cout << "x[1] = " << x[1] << '\n';
	} else if (ileRozw == 1) {
		std::cout << "x[0] = " << x[0] << '\n';
	}

	return 0;
}
