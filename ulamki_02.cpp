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

Ulamek dziel(const Ulamek &a, const Ulamek &b)
{
	Ulamek wynik;

	wynik.licznik = a.licznik * b.mianownik;
	wynik.mianownik = a.mianownik * b.licznik;

	return wynik;
}

Ulamek dodaj(const Ulamek &a, const Ulamek &b)
{
	Ulamek wynik;

	wynik.licznik = a.licznik * b.mianownik + a.mianownik * b.licznik;
	wynik.mianownik = a.mianownik * b.mianownik;

	return wynik;
}

Ulamek odejmij(const Ulamek &a, const Ulamek &b)
{
	Ulamek wynik;

	wynik.licznik = a.licznik * b.mianownik - a.mianownik * b.licznik;
	wynik.mianownik = a.mianownik * b.mianownik;

	return wynik;
}

void wypiszUlamek(const Ulamek &u)
{
	std::cout << u.licznik << '/' << u.mianownik << '\n';
}

/*
 * Zadanie z gwiazdką: dopilnuj, żeby wynikiem
 * każdej operacji arytmetycznej był ułamek nieskracalny.
 */

int main()
{
	Ulamek a{2, 3}, b{5, 7};
	Ulamek c = mnoz(a, b);

//	std::cout << c;
	wypiszUlamek(a);
	wypiszUlamek(b);
 	wypiszUlamek(c); //powinno wypisac: 10/21

	wypiszUlamek(dziel(a, b));
	wypiszUlamek(dodaj(a, b));
	wypiszUlamek(odejmij(a, b));

	return 0;
}
