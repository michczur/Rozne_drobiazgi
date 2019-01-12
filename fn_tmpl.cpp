#include <cstring>
#include <iostream>
#include <string>

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}

template <typename T>
T min(T a, T b)
{
	std::cout << "min() szablonowy\n";
	if (a < b)
		return a;
	return b;
}

template <>
double min(double a, double b)
{
	std::cout << "min() szablonowy wyspecjalizowany\n";
	if (a < b)
		return a;
	return b;
}

double min(double a, double b)
{
	std::cout << "min() overload dla double\n";
	if (a < b)
		return a;
	return b;
}
/*
int strlen(const char *s)
{
	const char *p = s;

	//while (*p++);

	while (*p != '\0') {
		++p;
	}

	return p - s;
}

void strcpy(char *dst, const char *src)
{
	while (*src != '\0') {
		*dst = *src;
		++dst;
		++src;
	}
}

int strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
		++s1;
		++s2;
	}

	return *s1 - *s2;
}
*/

/*
class string {
	bool operator < (const string &other)
	{
		return strcmp(this->m_data, other.m_data) < 0;
	}
};
*/

template <>
const char * min(const char *a, const char *b)
{
	std::cout << "min() szablonowy dla const char *\n";

	/*
	std::string sa(a), sb(b);
	if (sa < sb)
		return a;
	return b;
	*/

	/*
	int a_size = strlen(a);
	char *a_tab = new char[a_size + 1];
	strcpy(a_tab, a);

	int b_size = strlen(b);
	char *b_tab = new char[b_size + 1];
	strcpy(b_tab, b);

	int cmp_result = strcmp(a_tab, b_tab);

	delete [] a_tab;
	delete [] b_tab;

	if (cmp_result < 0)
		return a;
	return b;

	*/

	int cmp_result = strcmp(a, b);
	if (cmp_result < 0)
		return a;
	return b;
}

int main()
{
	double a = 2;
	double b = 1.5;

	std::cout << min(a, b) << '\n';
	std::cout << min<unsigned>(-1, 1) << '\n';
	std::cout << max<unsigned>(-1, 1) << '\n';

// 	std::string s = "QWE";

	std::cout << min("abc", "QWE") << '\n';

	return 0;
}
