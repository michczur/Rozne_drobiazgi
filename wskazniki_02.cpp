#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int *tab = new int[n];
	for (int i = 0; i < n; ++i) {
// 		std::cin >> *(tab + i);
		std::cin >> tab[i];
	}

	return 0;
}
