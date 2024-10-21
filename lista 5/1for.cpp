#include <iostream>
using namespace std;

float piso (float x)
{
    float i;
    if (x >= 0)
    {
        for (i = 0; i < x; i = i + 1);
        if (i > x)
        {
            i = i - 1;
        }
    }
    else for (i = 0; i > x; i = i - 1);
    return i;
}

float teto (float x)
{
    float i;
    if (x >= 0)
    {
       for (i = 0; i < x; i = i + 1);
    }
    else
    {
        for (i = 0; i > x; i = i - 1);
        if (i > x)
        {
            i = i - 1;
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
