#include <iostream>
using namespace std;

int fatorial (int a)
{
    int i = 1, y = a;
    if (a >= 0)
    {
        if (a > 0)
        {
            while (y > i)
            {
                a = a * (y - i);
                i = i + 1;
            }
        }
        else {
            a = 1;
        }
    }
    else {
        a = 0;
    }
    return a;
}

main()
{
    int x;
    cout << "FORNECA UM NUMERO: ";
    cin >> x;
    if (fatorial(x) == 0)
    {
        cout << "Nao foi possivel calcular o fatorial de " << x;
    }
    else {
        cout << "Resultado = " << fatorial(x);
    }
}
