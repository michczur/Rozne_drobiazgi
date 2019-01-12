#include <iostream>

int main()
{
	int i = 8;

	while (i >= 0) {
		std::cout << "i = " << --i << '\n';
	}

	std::cout << "po pętli, i = " << i << '\n';

	return 0;
}
