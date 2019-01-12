#include <iostream>

class Kwadrat {
public:
	Kwadrat(double b = -1.234) { bok = b; }
	double getBok() const { return bok; }
	double pole() const { return bok * bok; }
	double obwod() const { return 4 * bok; }
// private:
	double bok;
};

class Prostokat : public Kwadrat {
public:
	Prostokat(double b, double b2) { bok = b; bok2 = b2; }

	double getBok2() const { return bok2; }
	double pole() const { return bok * bok2; }
	double obwod() const { return 2 * (bok + bok2); }
// private:
	double bok2;
};

void wypiszFigure(const Kwadrat &k)
{
	std::cout << k.pole() << ' ' << k.obwod() << '\n';
}

int main()
{
	Kwadrat k(2.5);
	Prostokat p(-1.3, 2.7);

	std::cout << "getBok() przed przypisaniem: " << k.getBok() << '\n';
	k = p;
	std::cout << "getBok() po przypisaniu: " << k.getBok() << '\n';

	std::cout << "getBok() na prostokącie: " << p.getBok() << '\n';

	std::cout << k.pole() << '\n';
	std::cout << p.pole() << '\n';

	return 0;
}
