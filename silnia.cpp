#include <iostream>

/*
 * definicja silni (iteracyjnie)
 * n! = 1 * 2 * 3 ... * n
 *
 * rekurencyjnie:
 * n! = n * (n - 1)!
 * 0! = 1
 */

unsigned long long silnia(unsigned long long n)
{
	if (n == 0)
		return 1;
	return n * silnia(n - 1);
}

int main()
{
	unsigned long long n;
	std::cin >> n;
	std::cout << n << "! = " << silnia(n) << '\n';
	return 0;
}
