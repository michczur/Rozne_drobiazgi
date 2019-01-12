#include <iostream>

struct Punkt {
	int x, y;
};

int main()
{
	//C++11
	const Punkt p[8] = {
		{ -2,  1 },
		{ -1,  2 },
		{  1,  2 },
		{  2,  1 },
		{  2, -1 },
		{  1, -2 },
		{ -1, -2 },
		{ -2, -1 },
	};

	return 0;
}
