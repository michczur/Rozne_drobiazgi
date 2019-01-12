#include <iostream>

struct Ulamek {
	int licznik, mianownik;
};

Ulamek operator * (const Ulamek &a, const Ulamek &b)
{
	return Ulamek{a.licznik * b.licznik, a.mianownik * b.mianownik};
}

Ulamek operator / (const Ulamek &a, const Ulamek &b)
{
	return a * Ulamek{b.mianownik, b.licznik};
}


Ulamek operator + (const Ulamek &a, const Ulamek &b)
{
	return Ulamek{a.licznik * b.mianownik + a.mianownik * b.licznik,
		a.mianownik * b.mianownik};
}

Ulamek operator - (const Ulamek &a, const Ulamek &b)
{
	return a + Ulamek{-b.licznik, b.mianownik};
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
	Ulamek c = a * b;

	wypiszUlamek(a);
	wypiszUlamek(b);
 	wypiszUlamek(c); //powinno wypisac: 10/21

// 	wypiszUlamek(dziel(a, b));
// 	wypiszUlamek(dodaj(a, b));
// 	wypiszUlamek(odejmij(a, b));

	//d = a + b * c
// 	Ulamek d = dodaj(a, mnoz(b, c)); // a.dodaj(b.mnoz(c));
	Ulamek d = a + b * c; // d = a + (b * c)
	wypiszUlamek(d);

	d = (a + b) * c;
	wypiszUlamek(d);
	d = operator * (operator + (a, b), c );
	wypiszUlamek(d);
// 	Ulamek d = mnoz(dodaj(a, b), c);

	return 0;
}
