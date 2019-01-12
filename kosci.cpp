#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(0));

	int a = rand() % 6;
	int b = rand() % 6;

	if (a == b) {
		//a = a + 1;

		/*
		a += 1;
		if (a == 7)
			a = 1;
		*/
		a = (a + 1) % 6;
	}

	std::cout << "Kości: " << a + 1 << ", " << b + 1 << '\n';


	return 0;
}
