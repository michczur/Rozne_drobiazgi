#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	int i = a;
	int suma = 0;

	while (i <= b) {
		suma += i;

		++i;
	}

	std::cout << "suma = " << suma << '\n';

	return 0;
}
