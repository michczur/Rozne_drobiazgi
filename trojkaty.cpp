#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	if (a + b <= c || a + c <= b || b + c <= a) {
		std::cout << "Nie trójkąt\n";
	} else {
		std::cout << "Trójkąt\n";
	}

	/*
	if (!(a + b <= c || a + c <= b || b + c <= a))
	if (!(a + b <= c) && !(a + c <= b) && !(b + c <= a))
	if (a + b > c && a + c > b && b + c > a)



	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		std::cout << "Trójkąt\n";
	} else {
		std::cout << "Nie trójkąt\n";
	}
	*/

	return 0;
}
