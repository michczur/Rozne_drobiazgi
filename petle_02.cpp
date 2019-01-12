#include <iostream>

int main()
{
	int a, b;

	std::cin >> a >> b;

	int i = a;

	while (i <= b) {
		std::cout << "i = " << i << '\n';
		i += 1;
	}

	return 0;
}
