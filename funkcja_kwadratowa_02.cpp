#include <cmath>
#include <iostream>

int kwadratowa(int a, int b, int c, double *p1, double *p2);

int kwadratowa(int a, int b, int c)
{
	return kwadratowa(a, b, c, nullptr, nullptr);
}

int kwadratowa(int a, int b, int c, double *p1, double *p2)
{
	const int delta = b * b - 4 * a * c;
	if (delta < 0)
		return 0;

	if (delta == 0) {
		if (p1 != nullptr)
			*p1 = -b / (2.0 * a);
		return 1;
	}

	if (p1 != nullptr)
		*p1 = (-b - sqrt(delta)) / (2 * a);
	if (p2 != nullptr)
		*p2 = (-b + sqrt(delta)) / (2 * a);

	return 2;
}

int main()
{
	int a, b, c;
	double x[2];
	std::cin >> a >> b >> c;

	const int ileRozw = kwadratowa(a, b, c, nullptr, &x[1]);
	if (ileRozw == 2) {
		std::cout << "x[0] = " << x[0] << '\n';
		std::cout << "x[1] = " << x[1] << '\n';
	} else if (ileRozw == 1) {
		std::cout << "x[0] = " << x[0] << '\n';
	}

	return 0;
}
