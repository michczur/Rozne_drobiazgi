#include <iostream>

//Piszemy klasę Wektor, która będzie przechowywała inty
//(dla uproszczenia).

class Wektor {
public:
	Wektor(unsigned initCapacity);

	unsigned capacity() const;
	unsigned size() const;
	void push_back(int v);
	void pop_back();
	int at(unsigned idx) const;

private:
	unsigned m_capacity;
	unsigned m_size;
	int *m_data;
};

Wektor::Wektor(unsigned initCapacity)
{
	this->m_capacity = initCapacity;
	this->m_size = 0;
	this->m_data = new int[m_capacity];
}

unsigned Wektor::capacity() const
{
	return m_capacity;
}

unsigned Wektor::size() const
{
	return m_size;
}

void Wektor::push_back(int v)
{
	//sprawdź czy skończyło się miejsce
	//jeśli tak, to:
	// - zrób większą tablicę
	// - przepisz stare dane do nowego miejsca
	// - skasuj starą tablicę (bo inaczej wyciek pamięci)
	if (m_size == m_capacity) {
		m_capacity *= 2;
		int *m_newData = new int[m_capacity];
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

int Wektor::at(unsigned idx) const
{
	return m_data[idx];
}

int main()
{
	Wektor v1(12); //wektor mieszczący max 12 intów
		//teraz jest "pusty"

	std::cout << v1.capacity() << '\n'; //wypisuje 12
	std::cout << v1.size() << '\n'; //wypisuje 0

	v1.push_back(5);
	v1.push_back(-2);

	std::cout << v1.size() << '\n'; //wypisuje 2

	v1.push_back(17);
	std::cout << v1.size() << '\n'; //wypisuje 3

	v1.pop_back();
	std::cout << v1.size() << '\n'; //wypisuje 2

	v1.push_back(25);
	std::cout << v1.size() << '\n'; //wypisuje 3

	std::cout << v1.at(0) << '\n'; //wypisuje 5
	std::cout << v1.at(2) << '\n'; //wypisuje 25

	Wektor v2(3);
	for (int i = 0; i < 10000; ++i)
		v2.push_back(i * 10);

	std::cout << v2.capacity() << '\n'; // ???
	std::cout << v2.size() << '\n'; // 10000

	std::cout << v2.at(0) << '\n'; // 0
	std::cout << v2.at(9999) << '\n'; // 99990


	return 0;
}
