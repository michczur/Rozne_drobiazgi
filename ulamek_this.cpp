#include <iostream>

class Ulamek;

void wypiszUlamek(const Ulamek &u);

class Ulamek {
public:
	Ulamek(int licznik = 0, int mianownik = 1)
	{
		std::cout << "Ulamek ctor\n";
		this->licznik = licznik;
		this->mianownik = mianownik;
	}

	void wypisz() const
	{
		wypiszUlamek(*this);
	}

// private:
	int licznik;
	int mianownik;
};

void wypiszUlamek(const Ulamek &u)
{
	std::cout << u.licznik << '/' << u.mianownik << '\n';
}

int main()
{
	Ulamek a{3, 5}, b{1, 7};

	a.wypisz();
	b.wypisz();

	return 0;
}
