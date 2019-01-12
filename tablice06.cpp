#include <iostream>
#include <limits>

int ekstrema (const int *dane_begin, const int *dane_end){
    int ext_max=std::numeric_limits<int>::min();
    int ext_min=std::numeric_limits<int>::max();
    int wynik=0;
    int dane[(*dane_end-1)-*dane_begin];
    if (((*dane_end-1)-*dane_begin)==1){
        return wynik=1;}
    else
    {
    for (int i=0; i<*dane_end; ++i){
        if (ext_max < dane[i]){
            ext_max = dane[i];
        }
    }
    for (int i=0; i<*dane_end; ++i){
         if (ext_min > dane[i]){
            ext_min = dane[i];}
        }
    std::cout << "jakie mam eksterma= " << ext_max<< " oraz " << ext_min <<'\n';
    // dla małych wartosci cos sie psuje

    for (int i=0; i<*dane_end; ++i){
        if (dane[i]==ext_max){
            wynik++;}
        if (dane[i]==ext_min){
            wynik++;}
        }
    return wynik;
    }
}



int main ()
{
    int a,b;
    std::cout <<"rozmiar tablicy (od a  do (b-1))\n";
    std::cin >> a >> b;
    std::cout<< "dla podanej tablicy sa " << ekstrema(&a,&b)<<" ekstrema." <<'\n';



    return 0;
}
