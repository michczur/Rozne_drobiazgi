#include <iostream>

class Kwadrat {
public:
	Kwadrat(double b)
	{
		bok = b;
	}

	double pole() const
	{
		/*
		double wynik = bok * bok;
		return wynik;
		*/

		return bok * bok;
	}

	double obwod() const
	{
		return 4 * bok;
	}

private:
	double bok;
};

class Prostokat {
public:
	Prostokat(double b, double b2) { bok = b; bok2 = b2; }
	double pole() const { return bok * bok2; }
	double obwod() const { return 2 * (bok + bok2); }
private:
	double bok, bok2;
};

void wypiszFigure(const Kwadrat &k)
{
	std::cout << k.pole() << ' ' << k.obwod() << '\n';
}

void wypiszFigure(const Prostokat &p)
{
	std::cout << p.pole() << ' ' << p.obwod() << '\n';
}

//Klient mówi: dopiszcie/zmodyfikujcie wypiszFigure(), żeby
//działało też dla prostokąta

double sumujPola(Kwadrat *tab, unsigned size)
{
	double wynik = 0;
	for (unsigned i = 0; i < size; ++i)
		wynik += tab[i].pole();
	return wynik;
}

double sumujPola(Prostokat *tab, unsigned size)
{
	double wynik = 0;
	for (unsigned i = 0; i < size; ++i)
		wynik += tab[i].pole();
	return wynik;
}

int main()
{
	Kwadrat k(2.5);
	wypiszFigure(k);

	Kwadrat tab_k[2] { Kwadrat(2.5), Kwadrat(3.7) };
	std::cout << "suma pól kwadratów: " << sumujPola(tab_k, 2) << '\n';

	Prostokat p(1.3, 2.7);
	wypiszFigure(p);

	return 0;
}
