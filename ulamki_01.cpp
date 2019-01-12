#include <iostream>

struct Ulamek {
	int licznik, mianownik;
};

Ulamek mnoz(const Ulamek &a, const Ulamek &b)
{
	Ulamek wynik;

	wynik.licznik = a.licznik * b.licznik;
	wynik.mianownik = a.mianownik * b.mianownik;

	return wynik;
}

//Do zrobienia:
// dzielenie, dodawanie, odejmowanie

void wypiszUlamek(const Ulamek &u)
{
	std::cout << u.licznik << '/' << u.mianownik << '\n';
}

int main()
{
	Ulamek a{2, 3}, b{5, 7};
	Ulamek c = mnoz(a, b);

//	std::cout << c;
	wypiszUlamek(a);
	wypiszUlamek(b);
 	wypiszUlamek(c); //powinno wypisac: 10/21

	return 0;
}
