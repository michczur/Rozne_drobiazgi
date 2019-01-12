#include <iostream>
#include <set>

struct Point {
	int x, y;

	bool operator < (const Point &other) const
	{
		return x * x + y * y < other.x * other.x + other.y * other.y;
	}
};

std::ostream & operator << (std::ostream &os, const Point &p)
{
	os << "[x = " << p.x << ", y = " << p.y << ']';
	return os;
}

int main()
{
	std::set <Point> vec;

	vec.insert(Point{2, 4});
	vec.insert(Point{1, 2});
	vec.insert(Point{2, 1});
	vec.insert(Point{2, 1});
	vec.insert(Point{1, 0});
	vec.insert(Point{-2, 3});

	for (const auto &p : vec)
		std::cout << p << '\n';

	return 0;
}
