#include <iostream>
using namespace std;

main()
{
    const int c = 3, l = 2, m = 2;
    int M[l][c], N[l][c], i, j, k;
    for (k = 0; k < m; k++)
    {
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (k == 0)
                {
                    cout << k + 1 << "a. matriz, [" << i << "][" << j << "]: ";
                    cin >> M[i][j];
                }
                if (k == 1)
                {
                    cout << k + 1 << "a. matriz, [" << i << "][" << j << "]: ";
                    cin >> N[i][j];
                }
            }
        }
    }
    cout << "\n";
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << M[i][j] + N[i][j] << "\t";
        }
        cout << "\n";
    }
}
