#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

int main()
{
	std::ifstream input("dane.txt");

	//przed C++ 11 nie można było napisać:
	//std::vector <std::vector <int>>
	// bo ten końcowy >> się mylił z operatorem >>

	std::vector <std::vector <int> > wszystkieDane;
	for (std::string line; std::getline(input, line); ) {

		std::istringstream ss(line);
		std::vector <int> liczbyWiersz;

		for (int x; ss >> x; ) {
			liczbyWiersz.push_back(x);
		}

		wszystkieDane.push_back(liczbyWiersz);
	}

	/*
	for (std::vector <std::vector <int> >::const_iterator iter = wszystkieDane.begin();
		 iter != wszystkieDane.end(); ++iter) {
		std::cout << "ile liczb w wierszu: " << iter->size() << '\n';
// 		std::cout << "ile liczb w wierszu: " << (*iter).size() << '\n';
	}

	std::cout << "==================\n";

	for (unsigned i = 0; i < wszystkieDane.size(); ++i) {
		std::cout << "ile liczb w wierszu: " << wszystkieDane[i].size() << '\n';
	}
	*/

	for (unsigned i = 0; i < wszystkieDane.size(); ++i) {

		for (unsigned j = 0; j < wszystkieDane[i].size(); ++j) {
			std::cout << wszystkieDane[i][j] << ", ";
		}

		std::cout << '\n';
	}

	std::cout << "===================\n";

	for (std::vector <std::vector <int> >::const_iterator i = wszystkieDane.begin(); i != wszystkieDane.end(); ++i) {
		for (std::vector <int>::const_iterator j = i->begin(); j != i->end(); ++j) {
			std::cout << *j << ", ";
		}

		std::cout << '\n';
	}

	std::cout << "================\n";

	for (auto i = wszystkieDane.cbegin(); i != wszystkieDane.cend(); ++i) {
		for (auto j = i->cbegin(); j != i->cend(); ++j) {
			std::cout << *j << ", ";
		}

		std::cout << '\n';
	}

	std::cout << "==============\n";

	//for-each
	for (const std::vector <int> &linia : wszystkieDane) {
		for (int x : linia) {
			std::cout << x << ", ";
		}

		std::cout << '\n';
	}

	std::cout << "==============\n";

	for (const auto &linia : wszystkieDane) {
		for (auto x : linia) {
			std::cout << x << ", ";
		}

		std::cout << '\n';
	}

	return 0;
}
