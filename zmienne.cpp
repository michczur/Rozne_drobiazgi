#include <iostream>

int main()
{
	int x = 5;

	int y;
	y = x * x;
	x = 2;
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;

	std::cout << "Podaj dwie liczby:\n";
	std::cin >> x >> y;

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;

	return 0;
}
