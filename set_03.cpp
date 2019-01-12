#include <iostream>
#include <set>
#include <string>

struct Osoba {
	std::string imie, nazwisko;

	bool operator < (const Osoba &other) const
	{
		if (nazwisko != other.nazwisko)
			return nazwisko < other.nazwisko;

		return imie < other.imie;
	}
};

std::ostream & operator << (std::ostream &os, const Osoba &o)
{
	os << o.imie << " " << o.nazwisko;
	return os;
}

int main()
{
	std::set <Osoba> vec;

	vec.insert(Osoba{"Jan", "Kowalski"});
	vec.insert(Osoba{"Henryk", "Sienkiewicz"});
	vec.insert(Osoba{"Janusz", "Kowalski"});
	vec.insert(Osoba{"Adam", "Miauczyński"});

	for (const auto &p : vec)
		std::cout << p << '\n';

	return 0;
}
