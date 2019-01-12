#include <iostream>

int main()
{
	int x;
	std::cin >> x;

	// wersja krótsza
// 	if (x % 2) {

	if (x % 2 == 1) {
		std::cout << "NIE\n";
	} else {
		std::cout << "TAK\n";
	}

	return 0;
}
