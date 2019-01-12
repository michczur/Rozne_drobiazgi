#include <iostream>

/*
 * unsigned long long fibo(unsigned long long n);
 *
 * fibo(0) = 0
 * fibo(1) = 1
 * fibo(n) = fibo(n - 1) + fibo(n - 2)
 */

unsigned long long fibo(unsigned long long n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	unsigned long long n;
	std::cin >> n;
	std::cout << "fibo(" << n << ") = " << fibo(n) << '\n';
	return 0;
}
