#include <iostream>
using namespace std;

main()
{
    const int tam = 2;
    int a[tam], b[tam], c[tam * 2];
    int i = 0, ct = 0;
    while (i < tam)
    {
        cout << "FORNECA O " << i + 1 << "o. VALOR DE A: ";
        cin >> a[i];
        i = i + 1;
    }
    i = 0;
    while (i < tam)
    {
        cout << "FORNECA O " << i + 1 << "o. VALOR DE B: ";
        cin >> b[i];
        i = i + 1;
    }
    c[0] = a[0];
    c[1] = b[0];
    c[2] = a[1];
    c[3] = b[1];
    while (ct < (tam*2))
    {
        cout << c[ct] << "\n";
        ct = ct + 1;
    }
}
