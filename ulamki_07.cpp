#include <cassert> // <assert.h>
#include <iostream>

struct Ulamek {
private:
	int licznik, mianownik;

public:
	/*
	Ulamek() //konstruktor
	{
		std::cout << "konstruktor bezparametrowy\n";
		licznik = 0;
		mianownik = 1;
	}

	Ulamek(int l)
	{
		std::cout << "konstruktor jednoargumentowy\n";
		licznik = l;
		mianownik = 1;
	}
	*/

	Ulamek(int l = 0, int m = 1)
	{
		std::cout << "konstruktor dwuargumentowy\n";
		setLicznik(l);
		setMianownik(m);
	}

	void wypisz() const
	{
		std::cout << licznik << '/' << mianownik << '\n';
	}

	int getLicznik() const
	{
		return licznik;
	}

	void setLicznik(int nowyLicznik)
	{
		licznik = nowyLicznik;
	}

	int getMianownik() const
	{
		return mianownik;
	}

	void setMianownik(int nowyMianownik)
	{
		assert(nowyMianownik != 0);
		if (nowyMianownik == 0)
			abort();

		mianownik = nowyMianownik;
	}

	Ulamek operator * (const Ulamek &u) const
	{
		return Ulamek(licznik * u.licznik, mianownik * u.mianownik);
		/*
		Ulamek wynik;
		wynik.licznik = licznik * u.licznik;
		wynik.mianownik = mianownik * u.mianownik;
		return wynik;
		*/
	}

	Ulamek operator + (const Ulamek &u) const
	{
		return Ulamek(licznik * u.mianownik + mianownik * u.licznik,
					mianownik * u.mianownik);
	}

	Ulamek operator / (const Ulamek &u) const
	{
		return Ulamek(licznik * u.mianownik, mianownik * u.licznik);
		/*
		Ulamek wynik;
		wynik.licznik = licznik * u.mianownik;
		wynik.mianownik = mianownik * u.licznik;
		return wynik;
		*/
	}
};

int main()
{
	Ulamek a(-7, 2);
	a.wypisz();

	Ulamek b;
	b.setLicznik(3);
	b.setMianownik(13);
	b.wypisz();

	Ulamek c = a * b;
	c.wypisz();
	Ulamek d = a + b * c;
	d.wypisz();
	b.setLicznik(0);
	c = a / b;

	c.wypisz();

	return 0;
}
