#include <iostream>
using namespace std;

main()
{
    const int tam = 5;
    int mat[tam][tam], sEl = 0, sL4 = 0, sC2 = 0, sDP = 0, sDS = 0, i, j;
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            cout << "[" << i << "][" << j << "] -> ";
            cin >> mat[i][j];
            sEl = mat[i][j] + sEl;
            if (i == 4) sL4 = mat[i][j] + sL4;
            if (j == 2) sC2 = mat[i][j] + sC2;
            if (i == j) sDP = mat[i][j] + sDP;
            if (i + j == 4) sDS = mat[i][j] + sDS;
        }
    }
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "Soma da 4a. linha: " << sL4 << "\n";
    cout << "Soma da 2a. coluna: " << sC2 << "\n";
    cout << "Soma da diagonal principal: " << sDP << "\n";
    cout << "Soma dos elementos da matriz: " << sEl << "\n";
}
