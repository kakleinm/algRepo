#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

float CtoF(float c)
{
    float result;
    result = 1.8 * c + 32;
    return result;
}

main()
{
    float c, f;
    cout << "FORNECA CELSO: ";
    cin >> c;
    f = CtoF(c);
    cout << "Temperatura em Farenheit: " << f;
}
