/*
 * Wczytaj liczbę całkowitą dodatnią N,
 * po której następuje jeszcze N liczb całkowitych
 * (mogą być też ujemne).
 *
 * Następnie oblicz najmniejszą spośród podanych
 * N liczb.
 *
 * Np.
 * 3
 * 6
 * -2
 * 0
 *
 * Odpowiedź: -2
 */

#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int wynik;
	std::cin >> wynik;

	for (int i = 1; i < n; ++i) {
		int tmp;
		std::cin >> tmp;
		if (tmp < wynik)
			wynik = tmp;
	}

// 	std::cout << "min = " << wynik << '\n';

	return 0;
}
