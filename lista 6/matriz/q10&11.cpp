#include <iostream>
using namespace std;

main()
{
    const int c = 3, l = 2;
    int mat[l][c], i, j, k = 0, soma = 0, media;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
    cout << "\n";
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            soma = mat[i][j] + soma;
            k++;
        }
    }
    media = soma / k;
    cout << "Soma: " << soma << "\n";
    cout << "Media: " << media;
}
