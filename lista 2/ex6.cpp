#include <iostream>
#include <math.h>
using namespace std;

float rDp (float ax, float bx, float ay, float by)
{
    float result;
    result = sqrt(pow((ax-bx), 2)+pow((ay-by), 2));
    return result;
}

main()
{
    float ax, ay, bx, by, d;
    cout << "FORNECA X DO PONTO A: ";
    cin >> ax;
    cout << "FORNECA Y DO PONTO A: ";
    cin >> ay;
    cout << "FORNECA X DO PONTO B: ";
    cin >> bx;
    cout << "FORNECA Y DO PONTO B: ";
    cin >> by;
    d = rDp (ax, ay, bx, by);
    cout << "O resultado eh igual a " << d;
}
