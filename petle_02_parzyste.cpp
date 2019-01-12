#include <iostream>

int main()
{
	int a, b;

	std::cin >> a >> b;

	int i = a;

	while (i <= b) {
		if (i % 2 == 0)
			std::cout << "i = " << i << '\n';

		i += 1;
	}

	return 0;
}
