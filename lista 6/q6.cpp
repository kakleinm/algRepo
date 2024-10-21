#include <iostream>
using namespace std;

void inverter (int v[], int c)
{
    int v2[c], i = 0;
    while (i < 4)
    {
        v2[i] = v[i];
        i = i + 1;
    }
    i = 0;
    while (i < 4)
    {
        v[i] = v2[c - 1];
        c = c - 1;
        i = i + 1;
    }
}
main()
{
    const int tam = 4;
    int v[tam], i = 0;
    while (i < tam)
    {
        cout << i + 1 << "o. valor: ";
        cin >> v[i];
        i = i + 1;
    }
    inverter(v, tam);
    i = 0;
    while (i < tam)
    {
        cout << v[i] << "\n";
        i = i + 1;
    }
}
