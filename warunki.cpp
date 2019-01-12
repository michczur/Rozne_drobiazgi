#include <iostream>

int main()
{
	int x;
	std::cin >> x;

	std::cout << "x = " << x << '\n';

	/*
	 * if (warunek)
	 * {
	 *		blok;
	 * }
	 *
	 * if (warunek)
	 * {
	 * 		B1;
	 * }
	 * else
	 * {
	 * 		B2;
	 * }
	 *
	 * if (warunek) { B1; }
	 *
	 * if (!warunek) { B2; }
	 *
	 */

	if (x < 0)
	{
		std::cout << "x jest ujemny\n";
	}

	if (x > 0)
	{
		std::cout << "x jest dodatni\n";
	}

	if (x == 0)
	{
		std::cout << "x jest równy zero\n";
	}

	return 0;
}
