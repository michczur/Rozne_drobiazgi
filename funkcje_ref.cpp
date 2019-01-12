#include <iostream>

void f(int &x)
{
	x = -7;
}

int main()
{
	int x = 3;
	f(x);
	std::cout << "x = " << x << '\n';
	return 0;
}
