#include <iostream>

struct Ulamek {
	int licznik, mianownik;

	void wypisz() const
	{
		std::cout << licznik << '/' << mianownik << '\n';
	}

	Ulamek operator * (const Ulamek &u) const
	{
		Ulamek wynik;
		wynik.licznik = licznik * u.licznik;
		wynik.mianownik = mianownik * u.mianownik;
		return wynik;
	}

	Ulamek operator * (int x) const
	{
		return Ulamek{licznik, mianownik} * Ulamek{x, 1};
		//return Ulamek{x * licznik, mianownik};
	}

	void operator *= (const Ulamek &u)
	{
		licznik *= u.licznik;
		mianownik *= u.mianownik;
	}
};

Ulamek operator * (int a, const Ulamek &b)
{
	return b * a;
}

int main()
{
	Ulamek a{1, 3}, b{2, 5};

	a *= b;
	a.wypisz();

	a = a * a;
	a.wypisz();
	a = a * 5;
	a.wypisz();
	a = 5 * a;

	return 0;
}
