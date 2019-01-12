#include <cassert>
#include <iostream>

class Figura {
public:
	virtual double pole() const;
	virtual double obwod() const = 0;
};

class Kwadrat : public Figura {
public:
	Kwadrat(double b = -1.234) { setBok(b); }

	double getBok() const { return bok; }

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

class Kolo : public Figura {
public:
	Kolo(double r) { setPromien(r); }

	double getPromien() const { return promien; }
	void setPromien(double nowyPromien) { this->promien = nowyPromien; }

	double pole() const { return 3.14 * getPromien() * getPromien(); }
	double obwod() const { return 3.14 * 2 * getPromien(); }

private:
	double promien;
};

double sumaPol(Figura **tab, unsigned size)
{
	double wynik = 0;
	for (unsigned i = 0; i < size; ++i)
		wynik += tab[i]->pole();
	return wynik;
}

int main()
{
	Kwadrat kw(2.5);
	Prostokat p(1.3, 2.75);
	Kolo k(1.333);

	Figura *tab[3] = { &kw, &p, &k };
	std::cout << sumaPol(tab, 3) << '\n';

	return 0;
}
