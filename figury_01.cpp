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

void wypiszFigure(const Kwadrat &k)
{
	std::cout << k.pole() << ' ' << k.obwod() << '\n';
}

int main()
{
	Kwadrat k(2.5);
	wypiszFigure(k);
	return 0;
}
