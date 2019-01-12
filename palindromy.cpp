bool czyPalindrom(const int *tab, unsigned size)
{
	for (unsigned i = 0; i < size / 2; ++i) {
		const unsigned tmp = size - i - 1;
		if (tab[i] != tab[tmp])
			return false;
	}

	return true;
}

bool czyPalindrom(const int *begin, const int *end)
{
	--end;

	while (begin < end) {
		if (*begin != *end)
			return false;

		++begin;
		--end;
	}
}

int main()
{
	return 0;
}
