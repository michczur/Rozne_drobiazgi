#include <iostream>

template <typename T>
class Wektor;

template <typename T>
std::ostream & operator << (std::ostream &os, const Wektor <T> &w);

template <typename T>
class Wektor {
	friend std::ostream & operator << <> (std::ostream &os, const Wektor &w);
public:
	Wektor(unsigned initCapacity = 4);
	Wektor(const Wektor &other);
	~Wektor();

	void clear() { m_size = 0; }

	unsigned capacity() const;
	unsigned size() const;
	void push_back(const T &v);
	void pop_back();
	T at(unsigned idx) const;
	Wektor & operator = (const Wektor &other);

private:
	unsigned m_capacity;
	unsigned m_size;
	T *m_data;
};

template <typename T>
Wektor <T>::Wektor(unsigned initCapacity)
{
	std::cout << "Standardowy konstruktor, initCapacity = " << initCapacity << '\n';
	this->m_capacity = initCapacity;
	this->m_size = 0;
	this->m_data = new T[m_capacity];
}

template <typename T>
Wektor <T>::~Wektor()
{
	std::cout << "DESTRUKTOR\n";
	delete [] m_data;
}

template <typename T>
unsigned Wektor <T>::capacity() const
{
	return m_capacity;
}

template <typename T>
unsigned Wektor <T>::size() const
{
	return m_size;
}

template <typename T>
void Wektor <T>::push_back(const T &v)
{
	if (m_size == m_capacity) {
		m_capacity *= 2;
		T *m_newData = new T[m_capacity];
		for (unsigned i = 0; i < this->m_size; ++i)
			m_newData[i] = m_data[i];

		delete [] m_data;
		m_data = m_newData;
	}

	m_data[m_size++] = v;
}

template <typename T>
void Wektor <T>::pop_back()
{
	--m_size;
}

template <typename T>
T Wektor <T>::at(unsigned idx) const
{
	return m_data[idx];
}

template <typename T>
std::ostream & operator << (std::ostream &os, const Wektor <T> &w)
{
	os << '[';

	if (w.m_size > 0)
		os << w.m_data[0];

	for (unsigned i = 1; i < w.m_size; ++i)
		os << ", " << w.m_data[i];

	os << ']';

	return os;
}

template <>
std::ostream & operator << (std::ostream &os, const Wektor <std::string> &w)
{
	const char Delimiter = '"';

	os << '[';

	if (w.m_size > 0)
		os << Delimiter << w.m_data[0] << Delimiter;

	for (unsigned i = 1; i < w.m_size; ++i)
		os << ", " << Delimiter << w.m_data[i] << Delimiter;

	os << ']';

	return os;
}

template <typename T>
Wektor <T> & Wektor <T>::operator = (const Wektor &other)
{
	std::cout << "=================PRZYPISANIE!" << std::endl;
	if (this == &other)
		return *this;

	delete [] this->m_data;
	this->m_data = new T[other.m_size];
	for (unsigned i = 0; i < other.m_size; ++i)
		this->m_data[i] = other.m_data[i];

	this->m_capacity = this->m_size = other.m_size;

	return *this;
}

template <typename T>
Wektor <T>::Wektor(const Wektor &other)
{
	std::cout << "=================KONSTRUKTOR KOPIUJĄCY!" << std::endl;

	this->m_data = new T[other.m_size];
	for (unsigned i = 0; i < other.m_size; ++i)
		this->m_data[i] = other.m_data[i];

	this->m_capacity = this->m_size = other.m_size;
}

int main()
{
	Wektor <double> w;
	std::cout << "w: " << w << '\n';

	Wektor <std::string> napisy;
	napisy.push_back("ala");
	napisy.push_back("ma");
	napisy.push_back("kota");

	std::cout << "napisy: " << napisy << '\n';

	w.push_back(6.123);
	std::cout << "w: " << w << '\n';
	w.push_back(12.987);
	std::cout << "w: " << w << '\n';

	Wektor <double> w2 = w; //copy-ctor
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

	Wektor <Wektor <std::string> > duzoTekstu;
	duzoTekstu.push_back(napisy);

	napisy.clear();
	napisy.push_back("lubię");
	napisy.push_back("placky");
	duzoTekstu.push_back(napisy);

	std::cout << duzoTekstu << '\n';
	// operator << (std::ostream &os, const Wektor <Wektor <std::string> > w);
	// os << duzoTekstu.m_data[0] //Wektor <std::string>
	// os << duzoTekstu.m_data[1]

	return 0;
}
