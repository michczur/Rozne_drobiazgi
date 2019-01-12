#include <iostream>

int main()
{
	const unsigned SIZE = 100;
	const char File = 'F';
	const char Directory = 'D';

	std::pair <std::string, char> pliki [SIZE];
	//C++11 : std::tuple <std::string, char>

	/*
	struct Para {
		std::string first;
		char second;
	};

	Para pliki[SIZE];
	*/

	//dodaj plik: fofto.txt
	//dodaj folder

	pliki[0].first = "Plik0.txt"; pliki[0].second = File;
	pliki[1].first = "Plik.txt";  pliki[1].second = File;
	pliki[2].first = "Folder";    pliki[2].second = Directory;

// 	pliki[0].first.clear();
// 	pliki[0].first = "Desktop";

	for (unsigned i=0; i<SIZE; i++)
	{
		if (pliki[i].second != File && pliki[i].second != Directory) break;
		std::cout << "--" << pliki[i].second << "   " << pliki[i].first << '\n';

	}

	return 0;

}
