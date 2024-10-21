#include <iostream>
using namespace std;

main()
{
    float i, a, b, c;
    i = 1;
    b = 0;
    c = 0;
    while (i <= 5)
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
        i = i + 1;
    }
}
