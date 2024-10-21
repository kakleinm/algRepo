#include <iostream>
using namespace std;

float piso (float x)
{
    float i = 0;
    if (x >= 0)
    {
        do
        {
            i = i + 1;
        }
        while (i < x);
        if (i > x)
        {
            i = i - 1;
        }
    }
    else {
        do
        {
            i = i - 1;
        }
        while (i > x);
    }
    return i;
}

float teto (float x)
{
    float i = 0;
    if (x >= 0)
    {
        do
        {
            i = i + 1;
        }
        while (i < x);
    }
    else {
        do
        {
            i = i - 1;
        }
        while (i > x);

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

