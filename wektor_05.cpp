/*
 * Zadanie:
 * int main()
 * {
 * 	Wektor w;
 *  std::cout << w << '\n'; // []
 *  w.push_back(123);
 *  std::cout << w << '\n'; // [123]
 *  w.pop_back();
 *
 * 	for (int i = 0; i < 10; ++i)
 * 		w.push_back(i * 10 + i);
 * 	std::cout << w << '\n'; // [0, 11, 22, 33, 44, 55, 66, 77, 88, 99]
 * 	return 0;
 * }
 */


#include <iostream>

class Wektor {
	friend std::ostream & operator << (std::ostream &os, const Wektor &w);
public:
	Wektor(unsigned initCapacity = 4);
	Wektor(const Wektor &other);
	~Wektor();

	unsigned capacity() const;
	unsigned size() const;
	void push_back(double v);
	void pop_back();
	double at(unsigned idx) const;
	Wektor & operator = (const Wektor &other);

private:
	unsigned m_capacity;
	unsigned m_size;
	double *m_data;
};

Wektor::Wektor(unsigned initCapacity)
{
	std::cout << "Standardowy konstruktor, initCapacity = " << initCapacity << '\n';
	this->m_capacity = initCapacity;
	this->m_size = 0;
	this->m_data = new double[m_capacity];
}

Wektor::~Wektor()
{
	std::cout << "DESTRUKTOR\n";
	delete [] m_data;
}

unsigned Wektor::capacity() const
{
	return m_capacity;
}

unsigned Wektor::size() const
{
	return m_size;
}

void Wektor::push_back(double v)
{
	//sprawdź czy skończyło się miejsce
	//jeśli tak, to:
	// - zrób większą tablicę
	// - przepisz stare dane do nowego miejsca
	// - skasuj starą tablicę (bo inaczej wyciek pamięci)
	if (m_size == m_capacity) {
		m_capacity *= 2;
		double *m_newData = new double[m_capacity];
		for (unsigned i = 0; i < this->m_size; ++i)
			m_newData[i] = m_data[i];

		delete [] m_data;
		m_data = m_newData;
	}

	m_data[m_size++] = v;
}

void Wektor::pop_back()
{
	--m_size;
}

double Wektor::at(unsigned idx) const
{
	return m_data[idx];
}

std::ostream & operator << (std::ostream &os, const Wektor &w)
{
	os << '[';

	if (w.m_size > 0)
		os << w.m_data[0];

	for (unsigned i = 1; i < w.m_size; ++i)
		os << ", " << w.m_data[i];

	os << ']';

	return os;
}

Wektor & Wektor::operator = (const Wektor &other)
{
	std::cout << "=================PRZYPISANIE!" << std::endl;
	if (this == &other)
		return *this;

	delete [] this->m_data;
	this->m_data = new double[other.m_size];
	for (unsigned i = 0; i < other.m_size; ++i)
		this->m_data[i] = other.m_data[i];

	this->m_capacity = this->m_size = other.m_size;

	return *this;
}

/*
Wektor::Wektor(const Wektor &other)
	this->m_data(other.m_data);
	this->m_capacity(other.m_capacity);
	this->m_size(other.m_size);
*/

/*

operator = (const Wektor &other)
	this->m_data = other.m_data;
	this->m_capacity = other.m_capacity;
	this->m_size = other.m_size;

 */

Wektor::Wektor(const Wektor &other)
{
	std::cout << "=================KONSTRUKTOR KOPIUJĄCY!" << std::endl;

	this->m_data = new double[other.m_size];
	for (unsigned i = 0; i < other.m_size; ++i)
		this->m_data[i] = other.m_data[i];

	this->m_capacity = this->m_size = other.m_size;
}

/*
Wektor Wektor::clone() const
{
	int *newData = new int[this->m_size];
	for (unsigned i = 0; i < this->m_size; ++i)
		newData[i] = this->m_data[i];

	Wektor result;
	delete [] result.m_data;
	result.m_data = newData;
	result.m_size = result.m_capacity = this->m_size;

	return result;
}
*/

void f(int x)
{
	std::cout << "Funckja f, x = " << x << '\n';
	Wektor w(x);
	for (int i = 0; i < x; ++i)
		w.push_back(i * 11);

	if (x % 5 == 0) {
		std::cout << "Wczesne wyjście\n";
		return;
	}

	std::cout << "Normalne wyjście\n";
}

int main()
{
	Wektor w;
	std::cout << "w: " << w << '\n';
	w.push_back(6.123);
	std::cout << "w: " << w << '\n';
	w.push_back(12.987);
	std::cout << "w: " << w << '\n';

	f(8);
	f(10);

	Wektor w2 = w; //copy-ctor
	w2.push_back(18);
	std::cout << "w2: " << w2 << '\n';

	w.push_back(-6);
	std::cout << "w2: " << w2 << '\n';
	w2.push_back(3);
	std::cout << "w: " << w << '\n';
	std::cout << "w2: " << w2 << '\n';
	w.push_back(7);
	std::cout << "w: " << w << '\n';
	std::cout << "w2: " << w2 << '\n';

	w.push_back(-500);
	std::cout << "w: " << w << '\n';
	std::cout << "w2: " << w2 << '\n';
	w2.push_back(666);
	std::cout << "w: " << w << '\n';
	std::cout << "w2: " << w2 << '\n';


	return 0;
}
