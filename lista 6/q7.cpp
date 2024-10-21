#include <iostream>
using namespace std;

void colecao (int v[], int c)
{
    int i = 0;
    while (i < c)
    {
        v[i] = v[i] * i;
        i = i + 1;
    }
}

main()
{
    const int tam = 5;
    int a[tam];
    int i = 0;
    while (i < tam)
    {
        cout << "FORNECA O " << i + 1 << "o. VALOR: ";
        cin >> a[i];
        i = i + 1;
    }
    colecao(a, tam);
    i = 0;
    while (i < tam)
    {
        cout << a[i] << "\n";
        i = i + 1;
    }
}
