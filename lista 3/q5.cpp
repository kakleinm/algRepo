#include <iostream>
#include <math.h>
using namespace std;

void piscina (float &c, float &l, float p)
{
    float V, A;
    V = p * c * l;
    A = c * l;
    c = V;
    l = A;
}

main()
{
    float co, la, pr;
    cout << "Comprimento: ";
    cin >> co;
    cout << "Largura: ";
    cin >> la;
    cout << "Profundidade: ";
    cin >> pr;
    piscina(co, la, pr);
    cout << "Volume = " << co << "m3" << endl;
    cout << "Area = " << la << "m2" << endl;
}
