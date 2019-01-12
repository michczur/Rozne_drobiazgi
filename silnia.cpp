#include <iostream>

int main()
{
	//potęgi dwójki
	unsigned int k;
	std::cin >> k;

	unsigned long long int wynik = 1;
	unsigned long long int i = 1;

	while (i <= k) {
		wynik *= i;

		++i;
	}

	std::cout << "wynik = " << wynik << '\n';

	return 0;
}
