#include <iostream>
using namespace std;

float pot (float x, float y)
{
    float z = x, i = 1;
    if (y >= 0)
    {
        if(y > 0)
        {
            while (i < y)
            {
                x = x * z;
                i = i + 1;
            }
        }
        else {
            x = 1;
        }
    }
    else
    {
        i = -1;
        while (i > y)
        {
            x = x * z;
            i = i - 1;
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
