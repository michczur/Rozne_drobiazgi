#include <iostream>

struct Punkt {
	int x, y;
};

int main()
{
	Punkt p;
	std::cin >> p.x >> p.y;

	std::cout << "Wczytany punkt: [" << p.x << ", " << p.y << "]\n";

	return 0;
}
