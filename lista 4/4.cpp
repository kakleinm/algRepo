#include <iostream>
using namespace std;

float m2 (float x, float y)
{
    if (x > y)
    {
        return x;
    }
    else {
        return y;
    }
}

float m3 (float x, float y, float z)
{
    if (z > m2(x, y))
    {
        return z;
    }
    else {
        return m2(x, y);
    }
}

main()
{
    float a, b, c;
    cout << "PRIMEIRO NUMERO: ";
    cin >> a;
    cout << "SEGUNDO NUMERO: ";
    cin >> b;
    cout << "TERCEIRO NUMERO: ";
    cin >> c;
    cout << "Maior: " << m3 (a, b, c);
}
