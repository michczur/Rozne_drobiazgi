#include <iostream>
#include <string>
#include <vector>

template <typename T>
unsigned getSize(const T &obj) //duck typing
{
	return obj.size();
}

unsigned sumSizes(const std::vector <std::string> &v)
{
	unsigned wynik = 0;

	for (unsigned i = 0; i < getSize(v); ++i)
		wynik += getSize(v[i]);

	return wynik;
}

struct Ulamek {
	int licznik, mianownik;

	unsigned cnt() const { return licznik + mianownik; }
};

int main()
{
	//std::vector <std::vector <char> >
	std::vector <std::string> vi {
		"Siała baba mak",
		"Nie wiedziała jak",
	};

	std::cout << sumSizes(vi) << '\n';
	std::cout << vi[0] << '\n';

	Ulamek u{2, 9};
	std::cout << getSize(u) << '\n';

	return 0;
}
