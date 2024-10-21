#include <iostream>
#include <math.h>
using namespace std;

float teste (float g)
{
    const float pi = 3.141592;
    return(pi*g/180);
}

main()
{
    float r, g;
    cout << "FORNECA G: ";
    cin >> g;
    r = teste(g);
    cout << "A medida do angulo em radiano e " << r << ".";
}
