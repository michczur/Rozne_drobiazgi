#include <iostream>

int main()
{
	std::string  pliki [100][2];


	//dodaj plik: fofto.txt
	//dodaj folder

	pliki[0][0] = "Plik0.txt"; pliki[0][1] = "F";
	pliki[1][0] = "Plik.txt"; pliki[1][1] = "F";
	pliki[2][0] = "Folder"; pliki[2][1] = "D";



	for (int i=0; i<100; i++)
	{
		std::cout << "--" << pliki[i][1] << "   " << pliki[i][0] << "\n";
		if (pliki[i][1] != "F" && pliki[i][1] != "D") break;

	}

	return 0;

}
