#include <iostream>
bool jestWTablicy(const int *dane_begin, const int *dane_end, int x)
{   while (dane_begin<dane_end)
    {
        dane_begin++;
        if (*dane_begin==x){
            return true;}
    }
    return false;
}

int main ()
{
    int dane[]={987, 3, 9, -3, 14, 50};
    int x;
    std::cin >> x;
    std::cout <<"czy x jest w tablicy "<<std::boolalpha<<jestWTablicy(&dane[0], &dane[6], x)<<'\n';
return 0;
}
