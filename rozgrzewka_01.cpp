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

#include <cstdint> // C-style
#include <limits> // C++-style

int main()
{
	//szukam mina
	int wynik = 2147483647; //a co jeśli int jest 16-bitowy?
	wynik = INT_MAX; //C-style
	wynik = std::numeric_limits<int>::max(); //C++-style

	for (int i = 0; i < 5; ++i) {
		int tmp;
		std::cin >> tmp;
		if (tmp < wynik)
			wynik = tmp;
	}

// 	std::cout << "min = " << wynik << '\n';

	return 0;
}
