#include <iostream>

struct Ulamek {
	int licznik, mianownik;

	Ulamek(int l, int m)
	{
		licznik = l;
		mianownik = m;
	}

	void wypisz() const
	{
		std::cout << licznik << '/' << mianownik << '\n';
	}

	const Ulamek operator * (const Ulamek &u) const
	{
		return Ulamek(licznik * u.licznik, mianownik * u.mianownik);
	}

	Ulamek & operator *= (const Ulamek &u)
	{
		std::cout << "operator *=\n";
		licznik *= u.licznik;
		mianownik *= u.mianownik;

		return *this;
	}
};

int main()
{
	Ulamek a(1, 2), b(2, 3);
	Ulamek c(-1, 7);

	a.wypisz();
	b.wypisz();
	c.wypisz();

	std::cout << "====================\n";
	c *= a *= b;
	a.wypisz();
	b.wypisz();
	c.wypisz();

	(a * b) = c;

	return 0;

	int x = 2;
	int y = 3, z = 4;

	//x = y = z; // (x = (y = z))

	//x == 9, y == 7, z == 4
	x += y += z;
	std::cout << "x = " << x << ", y = " << y << ", z = " << z << '\n';

	//x == 20, y == 7, z == 4
	(x += y) += z;
	std::cout << "x = " << x << ", y = " << y << ", z = " << z << '\n';

	x = 2;
	y = 3;
	z = 4;

	x = (y + z);
	std::cout << "x = " << x << ", y = " << y << ", z = " << z << '\n';
// 	(x + y) = z;

	return 0;
}
