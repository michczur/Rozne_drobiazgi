#include <iostream>

int main()
{
	int a, b;
	std::cout << "Podaj dwie liczby (boki prostokąta):\n";
	std::cin >> a >> b;

	std::cout << "Pole prostokąta: " << a * b << '\n';
	std::cout << "Obwód prostokąta: " << 2 * (a + b) << '\n';

	int r;
	std::cout << "Podaj liczbę (promień koła):\n";
	std::cin >> r;

	const double pi = 3.141592;
	const double pole = r * r * pi;

	std::cout << "Pole koła: " << pole << '\n';
	std::cout << "Obwód koła: " << 2 * r * pi << '\n';

	return 0;
}
