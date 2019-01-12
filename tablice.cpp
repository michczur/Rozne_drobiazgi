#include <iostream>
#include <cstdlib> //rand(), srand()
#include <ctime> //time()

int main()
{
	srand(time(0));

	//Zadanie:
	//wylosuj 100 liczb
	//wypisz ile z nich jest parzystych,
	//a ile nieparzystych

	int tab[2] = {0, 0};
// 	tab[0] = tab[1] = 0;

// 	int nieparzyste = 0, parzyste = 0;

	for (int i = 0; i < 100; ++i) {
		const int x = rand();

		/*
		if (x % 2 == 0)
			++parzyste;
		else
			++nieparzyste;
		*/

		/*
		if (x % 2 == 0)
			++tab[0];
		else
			++tab[1];
		*/

		++tab[x % 2];
	}

// 	std::cout << "parzyste = " << parzyste << '\n';
// 	std::cout << "nieparzyste = " << nieparzyste << '\n';

	std::cout << "Wersja tablicowa:\n";
	std::cout << "parzyste = " << tab[0] << '\n';
	std::cout << "nieparzyste = " << tab[1] << '\n';

	return 0;
}
