#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int **szachownica= new int*[n];

    for (int i=0; i<n; ++i){
        szachownica[i]= new int [n];
        for (int j=0; j<=(n-1); ++j){
        szachownica[i][j]=j;}
    }

    for (int i=0; i<n; ++i)         // wypisywanie tablicy
    {
        for (int j=0; j<(n-1); ++j)
        {
            std::cout << szachownica[i][j] << ' ';
        }
        std::cout << szachownica[i][n-1] << '\n';
    }

    for(int i=0; i < n; ++i )
        delete[] szachownica[i];
    delete []szachownica;

    return 0;
}
