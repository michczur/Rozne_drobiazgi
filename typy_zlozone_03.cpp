#include <cmath>
#include <iostream>

struct Point {
	int x, y;
};

double distance(const Point &a, const Point &b)
{
	const int dx = a.x - b.x;
	const int dy = a.y - b.y;

	return sqrt(dx * dx + dy * dy);
	//return sqrt(pow(dx, 2) + pow(dy, 2));
}

int main()
{
	Point a{1, 1}, b{2, 2};
	std::cout << distance(a, b) << '\n';
	return 0;
}
