#include <iostream>

int main()
{
    int szachownica [8][8];

    for (int i=0; i<8; ++i)         //uzupełnianie tablicy
    {
        for (int j=0; j<8; ++j)
        {
             szachownica[i][j]=j+(i*8);
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
