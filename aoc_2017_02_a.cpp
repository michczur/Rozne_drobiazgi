#include <fstream>
#include <iostream>
#include <sstream>

int main()
{
	std::ifstream input("dane.txt");
	int checksum = 0;

	for (std::string line; std::getline(input, line); ) {

		std::istringstream ss(line);

		int min, max;
		ss >> min;
		max = min;

		for (int x; ss >> x; ) {
			if (min > x)
				min = x;
			if (max < x)
				max = x;
		}

		checksum += max - min;
	}

	std::cout << "suma kontrolna: " << checksum << '\n';

	return 0;
}
