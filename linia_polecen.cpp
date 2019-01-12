#include <cstring>
#include <iostream>
#include <string>

bool porownaj(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0') {

		if (*s1 != *s2)
			return false;
		++s1;
		++s2;
	}

	return *s1 == *s2;
}

//int main(int argc, char *argv[])
int main(int argc, char **argv)
{
	for (int i = 1; i < argc; ++i) {
// 		if (std::string(argv[i]) == "ABRAKADABRA") {
		if (strcmp(argv[i], "ABRAKADABRA") == 0) {
			std::cout << "HokusPokus\n";
			break;
		}
	}

	return 0;
}

/*
 * Sprawdź czy w podanych parametrach występuje słowo ABRAKADABRA,
 *  - jeśli tak, to wypisz HokusPokus (ale tylko jeden raz)
 *
 * Wersja z gwiazdką: łap także wystąpienia "ABRAKADABRA" o różnych
 * wielkościach znaków, np. "AbraKaDaBra" też jest OK.
 */