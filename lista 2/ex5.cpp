#include <iostream>
#include <math.h>
using namespace std;

float rAdT (float a, float b, float O)
{
    return ((a*b*sin(O))/2);
}

main()
{
    float a, b, O, A;
    cout << "FORNECA A: ";
    cin >> a;
    cout << "FORNECA B: ";
    cin >> b;
    cout << "FORNECA O ANGULO: ";
    cin >> O;
    A = rAdT(a, b, O);
    cout << "A area do triangulo eh igual a " << A << ".";
}
