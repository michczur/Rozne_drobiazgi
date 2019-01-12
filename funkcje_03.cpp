#include <iostream>
/*
 * Napisz funkcję:
 * bool czy_pierwsza(int x)
 *
 * która przyjmuje jedną liczbę >= 1
 * i zwraca true/false czy to jest liczba pierwsza
 */

/*
bool czy_pierwsza(int x)
{
	if (x == 1)
		return false;
	if (x == 2)
		return true;
	if (x % 2 == 0)
		return false;

	for (int i = 3; i <= x/2; i += 2) {
		if (x % i == 0)
			return false;
	}

	return true;
}
*/

bool czy_pierwsza(int x)
{
	if (x == 1)
		return false;
	if (x == 2)
		return true;
	if (x % 2 == 0)
		return false;

	for (int i = 3; i * i <= x; i += 2) {
		if (x % i == 0)
			return false;
	}

	return true;
}

int main()
{
	int p;
	std::cin >> p;
	std::cout << std::boolalpha;
	std::cout << czy_pierwsza(p) << '\n';
	return 0;
}
