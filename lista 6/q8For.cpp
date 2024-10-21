#include <iostream>
using namespace std;

int maior (int v[], int c)
{
    int i, M;
    for (i = 0; i < c; i = i + 1)
    {
        if (i == 0)
        {
            M = v[i];
        }
        else {
            if (M < v[i])
            {
                M = v[i];
            }
        }
    }
    return M;
}

main()
{
    const int tam = 5;
    int a[tam];
    int i = 0;
    while (i < tam)
    {
        cout << i + 1 << "o. valor: ";
        cin >> a[i];
        i = i + 1;
    }
    cout << maior(a, tam);
}

