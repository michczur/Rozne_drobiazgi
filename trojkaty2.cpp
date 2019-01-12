#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	if (a <= 0 || b <= 0 || c <= 0) {
		std::cout << "Niepoprawne dane\n";
		return 0;
	}

	if (a + b <= c || a + c <= b || b + c <= a ) {
		std::cout << "Nie trójkąt\n";
		return 0;
	}

	std::cout << "Trójkąt\n";

	if (a == b && a == c && b == c)
		std::cout << "Równoboczny\n";
	else if (a == b || a == c || b == c)
		std::cout << "Równoramienny\n";
	else
		std::cout << "Różnoboczny\n";

	return 0;
}
