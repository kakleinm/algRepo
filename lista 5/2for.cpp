#include <iostream>
using namespace std;

float pot (float x, float y)
{
    float z = x, i;
    if (y >= 0)
    {
        if(y > 0)
        {
            for (i = 1; i < y; i = i + 1)
            {
                x = x * z;
            }
        }
        else {
            x = 1;
        }
    }
    else
    {
        for (i = -1; i > y; i = i - 1)
        {
            x = x * z;
        }
        x = 1 / x;
    }
    return x;
}

main()
{
    float a, b;
    cout << "FORNECA A BASE: ";
    cin >> a;
    cout << "FORNECA O EXPOENTE: ";
    cin >> b;
    cout << "Resultado = " << pot(a, b);
}

