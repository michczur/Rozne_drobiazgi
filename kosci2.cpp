#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));

	int a = rand() % 6;
	int b = rand() % 6;

	if (a == b) {
		a = rand() % 6;
		b = rand() % 6;

		if (a == b) {
			a = rand() % 6;
			b = rand() % 6;
		}
	}

	while (a == b) {
		a = rand() % 6;
		b = rand() % 6;
	}

	std::cout << "Kości: " << a + 1 << ", " << b + 1 << '\n';

	return 0;
}
