#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	//short-circuit evaluation
	if (a != 0 && -b/a > 0)
		std::cout << "OK\n";

	if (a != 0) {
		if (-b/a > 0)
			std::cout << "OK\n";
	}

	return 0;
}
