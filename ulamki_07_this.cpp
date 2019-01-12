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
		this->setLicznik(l);
		this->setMianownik(m);
	}

	void wypisz() const
	{
		std::cout << this->licznik << '/' << this->mianownik << '\n';
	}

	int getLicznik() const
	{
		return this->licznik;
	}

	void setLicznik(int nowyLicznik)
	{
		this->licznik = nowyLicznik;
	}

	int getMianownik() const
	{
		return this->mianownik;
	}

	void setMianownik(int nowyMianownik)
	{
		assert(nowyMianownik != 0);
		if (nowyMianownik == 0)
			abort();

		this->mianownik = nowyMianownik;
	}

	Ulamek operator * (const Ulamek &u) const
	{
		return Ulamek(this->licznik * u.licznik, this->mianownik * u.mianownik);
		/*
		Ulamek wynik;
		wynik.licznik = licznik * u.licznik;
		wynik.mianownik = mianownik * u.mianownik;
		return wynik;
		*/
	}

	Ulamek operator + (const Ulamek &u) const
	{
		return Ulamek(this->licznik * u.mianownik + this->mianownik * u.licznik,
					mianownik * u.mianownik);
	}

	Ulamek operator / (const Ulamek &u) const
	{
		return Ulamek(this->licznik * u.mianownik, this->mianownik * u.licznik);
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
