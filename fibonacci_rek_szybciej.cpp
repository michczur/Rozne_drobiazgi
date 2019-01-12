#include <iostream>

/*
 * unsigned long long fibo(unsigned long long n);
 *
 * fibo(0) = 0
 * fibo(1) = 1
 * fibo(n) = fibo(n - 1) + fibo(n - 2)
 */

unsigned long long fibo_rek(unsigned long long n, unsigned long long i, unsigned long long f1, unsigned long long f2)
{
	if (i == n)
		return f1 + f2;
	return fibo_rek(n, i + 1, f1 + f2, f1);
}

unsigned long long fibo(unsigned long long n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	return fibo_rek(n, 2, 1, 0);
}

/*
 * Zadanie domowe:
 * - weź zadanie na policzenie liczby cyfr we wczytanej wartości, zrób je bez pętli
 * - gwiazdka: tak samo zadanie na policzenie liczby RÓŻNYCH cyfr
 */

int main()
{
	unsigned long long n;
	std::cin >> n;
	std::cout << "fibo(" << n << ") = " << fibo(n) << '\n';
	return 0;
}
