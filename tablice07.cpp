#include <iostream>

bool monotoniczne(const int *dane_begin, const int *dane_end)
{
    int mono_minus=0,mono_plus=0;
    for (int i=1; i<7; ++i)
    {
        std::cout<<*dane_begin+(i-1)<<'\n';
        std::cout<<*dane_begin+i<<'\n';
        if (*dane_begin+(i-1)<=*dane_begin+i){
            mono_plus++;}
        std::cout<<*dane_end<<'\n';
        std::cout<<*dane_end<<'\n';
        if (*dane_end-(i+1)>=*dane_end-i){
            mono_minus++;}
    }

    if (mono_plus==6 || mono_minus==6)
        return true;
    else
        return false;
}

int main ()
{
    int dane[]={1, 2, 1, 4, 0, 6, 1};

    std::cout <<"czy funkcja jest monotoniczna- "<<std::boolalpha <<monotoniczne(&dane[0],&dane[7])<< '\n';

    return 0;
}
