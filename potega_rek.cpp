#include <iostream>

/*
 * x^y == 1             dla y = 0
 *   x * x^(y-1)   w p.p.
 */

/*
unsigned long long potega(unsigned long long x, unsigned long long y)
{
	if (y == 0)
		return 1;
	return x * potega(x, y - 1);
}
*/

/*
 * Zadanie domowe: napisać ten algorytm iteracyjnie
 */
unsigned long long potega(unsigned long long x, unsigned long long y)
{
	if (y == 0)
		return 1;

	unsigned long long polowa = potega(x, y / 2);
	polowa *= polowa;
	if (y % 2 == 1)
		polowa *= x;

	return polowa;
}

int main()
{
}
