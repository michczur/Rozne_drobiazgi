#include <iostream>

int main()
{
	int i = 1;

	while (i <= 100) {
		if (i % 3 == 0)
			std::cout << "Fizz";
		if (i % 5 == 0)
			std::cout << "Buzz";
		if (i % 3 != 0 && i % 5 != 0)
			std::cout << i;

		std::cout << '\n';
		++i;
	}

	return 0;
}
