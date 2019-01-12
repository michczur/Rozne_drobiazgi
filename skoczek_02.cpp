#include <iostream>

int main()
{
	int w, k;
	int wynik = 0;
	std::cin >> w >> k;

	const unsigned int ILE_RUCHOW = 8;
	const int ruchy[ILE_RUCHOW][2] = {
		{ -2,  1 },
		{ -1,  2 },
		{  1,  2 },
		{  2,  1 },
		{  2, -1 },
		{  1, -2 },
		{ -1, -2 },
		{ -2, -1 },
	};

	for (unsigned int ruch = 0; ruch < ILE_RUCHOW; ++ruch) {
		int dst_w = w + ruchy[ruch][0];
		int dst_k = k + ruchy[ruch][1];

		if (dst_w >= 0 && dst_w < 8 && dst_k >= 0 && dst_k < 8)
			++wynik;
	}


	return 0;
}
