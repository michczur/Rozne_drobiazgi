#include <iostream>

int main()
{
	int x = 5, y;

	x = x + 1;
	x += 1;
	++x; // preinkrementacja
	x++; // postinkrementacja

	//x == 9
	y = ++x; // x = x + 1; y = x;
	//x == 10, y == 10
	y = x++; // y = x; x = x + 1;
	//x == 11, y == 10

	x = 0;
	x = x++ + ++x;
	std::cout << "x = " << x << '\n';

	y = (a + b) * (c + d);

	return 0;
}
