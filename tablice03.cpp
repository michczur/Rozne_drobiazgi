#include <iostream>
int sumaPosrednia (const int *dane, const int *idx_begin, const int *idx_end)
{
    int wynik=0;
    while (idx_begin<idx_end)
    {
        wynik+=dane[*idx_begin];
        idx_begin++;
    }
    return wynik;
}
int main()
{
    int dane[]={1, 2, 3, 4, 3, 2, 1};
    int idx[]={0,4,1,4};
    std::cout <<sumaPosrednia(dane,&idx[0],&idx[4])<<'\n';

    return 0;
}
