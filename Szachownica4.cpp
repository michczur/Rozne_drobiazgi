#include <iostream>

int main()
{
    int szachownica [8][8];
    for (int i=0; i<8; ++i)         //uzupełnianie tablicy
    {
        for (int j=1; j<8; j=j+2)
        {
             szachownica[i][j]=1;
        }
        for (int j=0; j<8; j=j+2)
        {
             szachownica[i][j]=0;
        }
    }
    for (int i=0; i<8; ++i)         // wypisywanie tablicy
    {
        for (int j=0;j<7; ++j)
        {
            std::cout << szachownica[i][j] << ' ';
        }
        std::cout << szachownica[i][7] << '\n';
    }
 return 0;
}
