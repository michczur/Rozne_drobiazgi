#include <iostream>

struct Ulamek {
	int licznik, mianownik;

	void wypisz() const
	{
		std::cout << licznik << '/' << mianownik << '\n';
	}
};

void wypisz_ulamki(const Ulamek *t, unsigned size)
{
	for (unsigned i = 0; i < size; ++i) {
		t[i].wypisz();
		//std::cout << t[i].licznik << '/' << t[i].mianownik << '\n';
	}
}

int main()
{
	Ulamek a{1, 3}, b{2, 5};
	Ulamek c{1, 10};

	Ulamek tab[3] = {a, b, c};
	wypisz_ulamki(tab, 3);
	wypisz_ulamki(tab, 3);

	return 0;
}
