#include <iostream>
#include <math.h>
using namespace std;

float esfera(float r)
{
    const float pi = 3.141592;
    return 4/3 * pi * pow(r,3);
}

main()
{
    float r, v;
    cout << "FORNECA O RAIO DA ESFERA: ";
    cin >> r;
    v = esfera(r);
    cout << "O volume da esfera e " << v << ".";
}
