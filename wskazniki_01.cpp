#include <iostream>

int main()
{
	int x = 5;
	int * px;
	px = &x;
	*px = -123;

	std::cout << "x = " << x << '\n';
	std::cout << "adres x = " << &x << '\n';
	std::cout << "px = " << px << '\n';
	std::cout << "*px = " << *px << '\n';
	std::cout << "adres px = " << &px << '\n';

	int ** ppx;
	ppx = &px;
	std::cout << "ppx = " << ppx << '\n';
	std::cout << "adres ppx = " << &ppx << '\n';


	return 0;
}
