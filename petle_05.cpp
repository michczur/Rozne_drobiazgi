#include <iostream>

int main()
{
	//potęgi dwójki
	int k;
	std::cin >> k;

	int wynik = 1;  //2^0
	int i = 1;

	while (i <= k) {
		//2^i = 2^(i-1) * 2
		wynik *= 2;

		++i;
	}

	std::cout << "wynik = " << wynik << '\n';

	return 0;
}
