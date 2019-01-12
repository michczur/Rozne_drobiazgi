#include <iostream>

int main()
{
	for (int i = 2; i <= 10; i += 2)
		std::cout << "i = " << i << '\n';

	int n;
	std::cin >> n;
	int silnia = 1;

	for (int i = 2; i <= n; ++i)
		silnia *= i;

	std::cout << n << "! = " << silnia << '\n';

	int cyfry = 0;
	for ( ; silnia != 0; silnia /= 10, ++cyfry);
	std::cout << "cyfry = " << cyfry << '\n';

	return 0;
}
