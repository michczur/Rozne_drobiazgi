/*
 * Wczytaj liczbę całkowitą dodatnią N,
 * po której następuje jeszcze N liczb całkowitych
 * (mogą być też ujemne).
 *
 * Następnie oblicz najmniejszy iloczyn z wybranej
 * pary liczb.
 *
 * Np.
 * 3
 * 6
 * -2
 * 0
 *
 * Odpowiedź: -12
 */

#include <iostream>

/*
 * Zadanie domowe z gwiazdką:
 * - pozbyć się tablicy (uzyskać złożoność pamięciową O(1))
 */

int main()
{
	int n;
	std::cin >> n;
	int tab[n]; //VLA Variable Length Array

	for (int i = 0; i < n; ++i)
		std::cin >> tab[i];

	int min = tab[0];
	for (int i = 1; i < n; ++i) {
		if (min > tab[i])
			min = tab[i];
	}

	int wynik = tab[0] * tab[0];

	//co tu nie działa?
	for (int i = 0; i < n; ++i) {
		const int tmp = min * tab[i];
		if (wynik > tmp)
			wynik = tmp;
	}

	std::cout << "wynik = " << wynik << '\n';


	return 0;
}
