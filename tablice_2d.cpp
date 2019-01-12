#include <iostream>

int main()
{
	//10 * 5 * 20 * 3
	//tab[0..9][0..4][0..19][0..2]
	//int tab[10][5][20][3];

	int tab[8][8];
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j)
			tab[i][j] = 2;
	}


	//=====================================
	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 7; ++j)
			std::cout << tab[i][j] << ' ';

		std::cout << tab[i][7] << '\n';
	}

	return 0;
}
