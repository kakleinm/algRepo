#include <iostream>
using namespace std;

float piso (float x)
{
    float i = 0;
    if (x >= 0)
    {
        while (i < x)
        {
            i = i + 1;
            if (i > x)
            {
                i = i - 1;
                break;
            }
        }
    }
    else {
        while (i > x)
        {
            i = i - 1;
        }
    }
    return i;
}

float teto (float x)
{
    float i = 0;
    if (x >= 0)
    {
        while (i < x)
        {
            i = i + 1;
        }
    }
    else {
        while (i > x)
        {
            i = i - 1;
            if (i < x)
            {
                i = i + 1;
                break;
            }
        }
    }
    return i;
}

main()
{
    float x;
    cout << "FORNECA UM NUMERO: ";
    cin >> x;
    cout << "Piso: " << piso(x) << "\n" << "Teto: " << teto(x);
}

