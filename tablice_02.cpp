#include <iostream>

int main()
{
	int tab[10];

	for (int i = 0; i < 10; ++i)
		tab[i] = (i + 1) * 10;

	for (int i = 0; i < 10; ++i)
		std::cout << tab[i] << '\n';

	return 0;
}
