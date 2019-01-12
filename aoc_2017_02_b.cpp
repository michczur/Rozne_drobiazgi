#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

int main()
{
	std::ifstream input("dane.txt");
	int checksum = 0;

	for (std::string line; std::getline(input, line); ) {

		std::istringstream ss(line);
		std::vector <int> dane;

		for (int x; ss >> x; ) {
			dane.push_back(x);
		}

		for (unsigned i = 0; i < dane.size(); ++i) {
			std::cout << "dane[" << i << "] = " << dane[i] << '\n';
		}

		std::cout << "_________________\n";

		for (std::vector <int>::const_iterator i = dane.begin(); i != dane.end(); ++i) {
			std::cout << "dane z iteratora: " << *i << '\n';
		}

		std::cout << "=============\n";

		//Do zrobienia:
		// reszta algorytmu (znajdowanie pary podzielnej)
	}

	std::cout << "suma kontrolna: " << checksum << '\n';

	return 0;
}
