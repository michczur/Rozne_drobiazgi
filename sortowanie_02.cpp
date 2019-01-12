#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <iostream>
#include <vector>

//komparator:
// bool cmp(const T &a, const T &b)
// return true jeśli a ma być przed b w kolejności sortowania

bool std_sort(const int &a, const int &b)
{
	return a % 10 > b % 10;
}

void bubble_sort(std::vector <int> &vec)
{
	for (unsigned i = 1; i < vec.size(); ++i) {
		for (unsigned j = 1; j < vec.size(); ++j) {
			if (vec[j] < vec[j - 1]) {
				std::swap(vec[j], vec[j - 1]);
			}
		}
	}
}



void bubble_sort(std::vector <int> &vec, std::function <bool (const int &, const int &)> cmp)
{
	for (unsigned i = 1; i < vec.size(); ++i) {
		for (unsigned j = 1; j < vec.size(); ++j) {
			if (cmp(vec[j], vec[j - 1])) {
				std::swap(vec[j], vec[j - 1]);
			}
		}
	}
}

int main()
{
	srand(time(nullptr));

	std::vector <int> V;
	for (unsigned i = 0; i < 10; ++i)
		V.push_back(rand());

// 	std::sort(V.begin(), V.end(), std_sort); // a < b
	bubble_sort(V, std_sort);

	for (unsigned i = 0; i < V.size(); ++i)
		std::cout << "V[" << i << "] = " << V[i] << '\n';

	return 0;
}
