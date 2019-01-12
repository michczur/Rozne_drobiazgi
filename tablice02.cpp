#include <iostream>
bool czyPalindrom (const int *dane_begin, const int *dane_end)
{   dane_end--;
    while (dane_begin < dane_end)
    {
        if (*dane_begin!=*dane_end)
            {return false;}
        dane_begin++;
        dane_end--;
    }
    return true;
}

int main()
{
    int dane[]={1, 2, 3, 4, 3, 2, 1};
    std::cout <<"Czy ta tablica jest palindromem -" <<std::boolalpha <<
    czyPalindrom(&dane[0],&dane[7])<<'\n';

return 0;
}
