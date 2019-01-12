#include <algorithm>
#include <iostream>
#include <vector>

struct Ulamek {
	Ulamek(int l = 0, int m = 1) { licznik = l; mianownik = m; }

	int licznik, mianownik;

	bool operator < (const Ulamek &other) const
	{
		/*
		if (licznik * other.mianownik < mianownik * other.licznik)
			return true;
		else
			return false;
		*/

		return licznik * other.mianownik < mianownik * other.licznik;
	}
};

/*
bool cmp_Ulamek(const Ulamek &a, const Ulamek &b);
std::sort(V.begin(), V.end(), cmp_Ulamek);
*/

int main()
{
	std::vector <Ulamek> V;

	V.push_back(Ulamek(3, 4));
	V.push_back(Ulamek(2, 3));
	V.push_back(Ulamek(1, 5));
	V.push_back(Ulamek(2, 7));

	std::sort(V.begin(), V.end());

	for (const auto &u : V) {
		std::cout << u.licznik << '/' << u.mianownik << " = " << static_cast<double>(u.licznik) / u.mianownik << '\n';
	}

	return 0;
}
