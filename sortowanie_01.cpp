#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

void wypiszWektor(const std::vector <int> &vec)
{
	//if (vec.size() == 0)
	if (!vec.empty())
		std::cout << vec[0];

	for (unsigned i = 1; i < vec.size(); ++i)
		std::cout << ", " << vec[i];

	std::cout << '\n';
}

int main()
{
	srand(time(nullptr));

	std::vector <int> V;
	for (unsigned i = 0; i < 10; ++i)
		V.push_back(rand());

	for (unsigned i = 0; i < 10; ++i)
		std::cout << "V[" << i << "] = " << V[i] << '\n';

	std::cout << "=================\n";

	std::sort(V.begin(), V.end());
// 	wypiszWektor(V);

// 	for (unsigned i = 0; i < 10; ++i)
// 	for (unsigned i = V.size(); i > 0; --i) {
// 		std::cout << "V[" << i - 1 << "] = " << V[i - 1] << '\n';
// 	}

	for (std::vector <int>::const_reverse_iterator iter = V.crbegin(); iter != V.crend(); ++iter)
		std::cout << *iter << '\n';

	return 0;
}
