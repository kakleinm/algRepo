#include <iostream>
using namespace std;

main()
{
    const int l = 4, c = 4;
    int mat[l][c], i, j, k, soma = 0;
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
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    for (k = 0; k < l; k++)
    {
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (i > k && j == k)
                {
                    soma = mat[i][j] + soma;
                }
            }
        }
    }
    cout << soma;
}
