#include <fstream>
#include <iostream>

class Przyjaciel {};

class Ulamek {
	friend std::ostream & operator << (std::ostream &os, const Ulamek &u);
	friend class Przyjaciel;

	int licznik, mianownik;

public:
	Ulamek(int l, int m);
};

Ulamek::Ulamek(int l, int m)
{
	licznik = l;
	mianownik = m;
}

std::ostream & operator << (std::ostream &os, const Ulamek &u)
{
	os << u.licznik << '/' << u.mianownik;
	return os;
}

int main()
{
	Ulamek u(3, 5), v(2, 7);
	std::cout << u << " + " << v << '\n';

	std::ofstream plik("test.txt");
	plik << "[test ułamków]\n";
	plik << u << " + " << v << '\n';

	return 0;
}
