
/*
 * Zaimplementuj funkcję zwracającą liczbę rozwiązań
 * równania 0 = ax + b
 * tzn. zwraca 0, 1, albo -1 (jako nieskończoność)
 */
/*
int liniowa(int a, int b)
{
	if (a == 0 && b == 0)
		return -1;
	if (a == 0 && b != 0)
		return 0;
	return 1;
}
*/

int liniowa(int a, int b)
{
	if (a != 0)
		return 1;
	if (b == 0)
		return -1;
	return 0;
}

int main()
{
	return 0;
}
