#include <iostream>

class Kwadrat {
public:
	Kwadrat(double b = -1.234) { setBok(b); }

	double getBok() const { return bok; }

	double pole() const { return getBok() * getBok(); }
	double obwod() const { return 4 * getBok(); }

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

double sumaPol(Kwadrat *tab, unsigned size)
{
	double wynik = 0;
	for (unsigned i = 0; i < size; ++i)
		wynik += tab[i].pole();

	return wynik;
}

int main()
{
	Kwadrat k(2.5);
	Prostokat p(1.3, 2.75);

	Kwadrat tab[2] = {p, k};
	std::cout << "suma pól: " << sumaPol(tab, 2) << '\n';

	Kwadrat *pk = &k;
	std::cout << "pole przez pk: " << pk->pole() << '\n';

	Prostokat *pp = &p;
	std::cout << "pole przez pp: " << pp->pole() << '\n';

	pk = pp; // niejawna konwersja Prostokat * ---> Kwadrat *
	std::cout << "pole przez pk: " << pk->pole() << '\n';

	std::cout << "adres kwadratu: " << &k << '\n';
	std::cout << "adres prostokąta: " << &p << '\n';
	std::cout << "pk = " << pk << '\n';
	std::cout << "pp = " << pp << '\n';

	// pk ---> Kwadrat *
	// pk chcę Prostokąt *, ale tak się nie da
	// ale ja wiem lepiej
	// Prostokat *tmp = static_cast<Prostokat *>(pk);
	// tmp->pole();
	std::cout << "zmuszam kompilator: "
		<< static_cast<Prostokat *>(pk)->pole() << '\n';

	pk = &k;
	std::cout << "zmuszam kompilator (undefined): "
		<< static_cast<Prostokat *>(pk)->pole() << '\n';

	return 0;
}
