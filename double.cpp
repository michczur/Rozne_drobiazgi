#include <iomanip>
#include <iostream>

int main()
{
	double d = 0.375;
	std::cout << std::fixed << std::setprecision(20) << d << '\n';
	return 0;
}
