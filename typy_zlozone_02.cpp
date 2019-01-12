#include <iostream>
#include <string>

struct Pracownik {
	std::string imie, nazwisko;
	int wiek;
	std::string stanowisko;
	double kasa;
};

void wypiszOsobe(const Pracownik &p)
{
	std::cout << p.imie << ' '
		<< p.nazwisko << ", "
		<< p.stanowisko << '\n';

	p.imie = "Henryk";
	p.nazwisko = "Sienkiewicz";
}

int main()
{
	Pracownik jakisKolo { "A", "B", 0, "C", 0.0 };

	jakisKolo.imie = "Jan";
	jakisKolo.nazwisko = "Kowalski";
	jakisKolo.wiek = 35;
	jakisKolo.stanowisko = "Główny Zsypowy";
	jakisKolo.kasa = 123.45;

	//C++11
	jakisKolo = Pracownik{ "Jan", "Kowalski", 35, "GZ", 123.45 };

	wypiszOsobe(jakisKolo);
	wypiszOsobe(jakisKolo);

	return 0;
}
