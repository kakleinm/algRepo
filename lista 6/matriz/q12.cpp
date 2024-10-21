#include <iostream>
using namespace std;

main()
{
    const int c = 3, l = 2;
    int m[l][c], n[c][l], i, j, soma = 0, reduz = 0;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
    cout << "\n";
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            n[j][i] = m[i][j];
        }
    }
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < l; j++)
        {
            cout << n[j][i] << "\t";
        }
        cout << "\n";
    }
}
