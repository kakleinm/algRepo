#include <iostream>
using namespace std;

main()
{
    const int tam = 2;
    int a[tam], b[tam], c[tam * 2];
    int i, ct;
    for (i = 0; i < tam; i = i + 1)
    {
        cout << "FORNECA O " << i + 1 << "o. VALOR DE A: ";
        cin >> a[i];
    }
    for (i = 0; i < tam; i = i + 1)
    {
        cout << "FORNECA O " << i + 1 << "o. VALOR DE B: ";
        cin >> b[i];
    }
    c[0] = a[0];
    c[1] = b[0];
    c[2] = a[1];
    c[3] = b[1];
    for (ct = 0; ct < (tam*2); ct = ct + 1)
    {
        cout << c[ct] << "\n";
    }
}

