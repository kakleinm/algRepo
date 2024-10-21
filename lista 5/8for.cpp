#include <iostream>
using namespace std;

main()
{
    float i, a, b, c;
    b = 0;
    c = 0;
    for (i = 1; i <= 5; i = i + 1)
    {
        cout << "FORNECA O " << i << "o. NUMERO: ";
        cin >> a;
        b = a + b;
        if (a < 0)
        {
            c = c + 1;
        }
        cout << "Soma dos positivos: " << b << "\n";
        cout << "Quantidade de negativos: " << c << "\n" << "\n";
    }
}

