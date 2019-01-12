#include <iostream>

int main()
{
	int x, y;
	int *p;

	//p = NULL;
	p = nullptr;
	std::cout << "p = " << p << '\n';
	p = &x;
	std::cout << "p = " << p << '\n';

	if (p != nullptr)
		*p = 10;

	p = &y;
	*p = 15;

	std::cout << "x = " << x << ", y = " << y << '\n';

	int &r = x;
	r = 20;

	std::cout << "x = " << x << ", y = " << y << '\n';

	return 0;
}
