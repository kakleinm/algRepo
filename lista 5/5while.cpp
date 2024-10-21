#include <iostream>
using namespace std;

int fibonacci (int n)
{
    int i, x = 0, y = 1, r;
    if (n >= 0)
    {
        if (n <= 1)
        {
            return n;
        }
        else {
            i = 2;
            while (n >= i)
            {
                r = x + y;
                x = y;
                y = r;
                i = i + 1;
            }
        }
    }
    else {
        r = -1;
    }
    return r;
}

main()
{
    int a;
    cout << "POSICAO NA SEQUENCIA DE FIBONACCI: ";
    cin >> a;
    if (fibonacci(a) == -1)
    {
        cout << "Nao foi possivel encontrar um resultado para essa posicao.";
    }
    else {
        cout << "Valor = " << fibonacci(a);
    }
}
