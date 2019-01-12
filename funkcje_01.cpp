#include <iostream>
#include <cmath>

int min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}

//overloading
double min(double a, double b)
{
	if (a < b)
		return a;
	return b;
}

//zadanie:
/*
int min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return a;
	if (b <= a && b <= c)
		return b;

// 	if (c < a && c < b)
	return c;
}
*/

int min(int a, int b, int c)
{
	return min(a, min(b, c));
}

int min(int a, int b, int c, int d)
{
	return min(a, min(b, c, d));
}

int main()
{
	int x, y, z;
	std::cin >> x >> y >> z;

	std::cout << min(x, y, z) << '\n';

	std::cout << sqrt(2) << '\n';

	return 0;
}
