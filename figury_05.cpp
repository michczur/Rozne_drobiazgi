#include <iostream>

class Kwadrat {
public:
	Kwadrat(double b = -1.234) { setBok(b); }

	double getBok() const { return bok; }
	void getBok2() const {}

	virtual double pole() const { return getBok() * getBok(); }
	virtual double obwod() const { return 4 * getBok(); }

protected:
	void setBok(double nowyBok) { this->bok = nowyBok; }

private:
	double bok;
};

class Prostokat : public Kwadrat {
public:
	Prostokat(double b, double b2) { setBok(b); setBok2(b2); }

	double getBok2() const { return bok2; }
	double pole() const { return getBok() * getBok2(); }
	double obwod() const { return 2 * (getBok() + getBok2()); }

protected:
	void setBok2(double nowyBok) { this->bok2 = nowyBok; }

private:
	double bok2;
};

void wypiszFigure(const Kwadrat &k)
{
	std::cout << k.pole() << ' ' << k.obwod() << '\n';
}

double sumaPol(Kwadrat **tab, unsigned size)
{
	double wynik = 0;
	for (unsigned i = 0; i < size; ++i)
		//tab ---> Kwadrat **
		//tab[i] ---> Kwadrat *
		wynik += tab[i]->pole();
		//wynik += (*tab[i]).pole();
		//wynik += (*(*(tab + i))).pole(); <-- nie sprawdzam czy działa!

	return wynik;
}

int main()
{
	Kwadrat k(2.5);
	Prostokat p(1.3, 2.75);

	Kwadrat *pk;

	pk = &p;
	std::cout << pk->pole() << '\n';

	wypiszFigure(k);
	wypiszFigure(p);

	Kwadrat *tab[2] = { &k, &p };
	std::cout << sumaPol(tab, 2) << '\n';

	return 0;
}
