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

int main()
{
	int n;
	std::cin >> n;
	int tab[n];

	for (int i = 0; i < n; ++i)
		std::cin >> tab[i];

	int wynik = tab[0] * tab[0];

	for (int i = 0; i < n; ++i) {
		for (int j = i; j < n; ++j) {
			const int tmp = tab[i] * tab[j];

			if (tmp < wynik)
				wynik = tmp;
		}
	}

	std::cout << "wynik = " << wynik << '\n';


	return 0;
}
