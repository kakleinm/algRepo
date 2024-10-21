#include <iostream>
using namespace std;

void colecao (int v[], int c)
{
    int i;
    for (i = 0; i < c; i = i + 1) v[i] = v[i] * i;
}

main()
{
    const int tam = 5;
    int a[tam];
    int i;
    for (i = 0; i < tam; i = i + 1)
    {
        cout << "FORNECA O " << i + 1 << "o. VALOR: ";
        cin >> a[i];
    }
    colecao(a, tam);
    for (i = 0; i < tam; i = i + 1)
    {
        cout << a[i] << "\n";
    }
}

