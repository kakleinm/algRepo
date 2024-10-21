#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

float rDelta(float a, float b, float c)
{
    float result;
    result = pow(b,2) - 4*a*c;
    return result;
}

main()
{
    float a, b, c, d;
    cout << "FORNECA A: ";
    cin >> a;
    cout << "FORNECA B: ";
    cin >> b;
    cout << "FORNECA C: ";
    cin >> c;
    d = rDelta (a, b, c);
    cout << "O valor de delta e " << d << ".";
}
