#include <iostream>
#include <set>
#include <string>

struct Ulamek {
	int licznik, mianownik;
};

int main()
{
	std::set <std::string> S;
	S.insert("Kowalski");
	S.insert("Sienkiewicz");
	S.insert("Mickiewicz");
	S.insert("Makłowicz");

	std::set <Ulamek> Su;
	Su.insert(Ulamek{5, 10});

	for (auto iter = S.cbegin(); iter != S.cend(); ++iter)
		std::cout << *iter << '\n';

	std::cout << "=============\n";

	for (const auto &s : S)
		std::cout << s << '\n';


	return 0;
}
