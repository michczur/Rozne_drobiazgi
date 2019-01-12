#include <iostream>
#include <cstdlib> //rand(), srand()
#include <ctime> //time()

int main()
{
	srand(time(0));

	int tab[2000];
	for (int i = 0; i < 2000; ++i)
		tab[i] = 0;

	for (int i = 0; i < 1000 * 1000 * 1000; ++i) {
		const int x = rand();

		if (x < 2 * 1000 * 1000 * 1000) {
			//x == 295678450
			// 295
			++tab[x / 1000000];
		}
	}

// 	std::cout << "parzyste = " << parzyste << '\n';
// 	std::cout << "nieparzyste = " << nieparzyste << '\n';

	for (int i = 0; i < 2000; ++i)
		std::cout << "tab[" << i << "] = " << tab[i] << '\n';

	return 0;
}
