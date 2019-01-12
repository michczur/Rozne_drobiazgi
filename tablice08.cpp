#include <iostream>

bool bitoniczne(const int *dane_begin, const int *dane_end)
{
    int zmiana_kier=0;

    for (int i=1; i<7; ++i)
    {
        if (*dane_begin+(i-1)<=*dane_begin+i)
        if (*dane_end-(i+1)>=*dane_end-i)
    }
    if (if zmiana_kier< 3)
        return true;
    else
        return false;
}


}

int main ()
{
    int dane[]={1, 2, 3, 4, 5, 6, 7};

    std::cout <<"czy funkcja jest bitoniczna- "<<std::boolalpha <<bitoniczne(&dane[0],&dane[7])<< '\n';

    return 0;
}
