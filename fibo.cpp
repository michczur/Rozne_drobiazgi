/*
 * Liczby Fibonacciego
 * - F_0 = 0
 * - F_1 = 1
 * - F_n = F_(n - 1) + F_(n - 2)
 *
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 ...
 *
 * Wczytaj n
 * Wypisz F_n
 */

#include <iostream>

int main()
{
	int n;
	int *tab;

	std::cin >> n;
	tab = new int[n + 1];

	//błąd: co jeśli n jest małe?
	tab[0] = 0;
	tab[1] = 1;

	//zadanie domowe: a właściwie to po co nam tablica? :)
	//czyli: zbij złożoność pamięciową O(n) do O(1)
	for (int i = 2; i <= n; ++i)
		tab[i] = tab[i - 1] + tab[i - 2];
	std::cout << tab[n] << '\n';

	delete [] tab;

	return 0;
}