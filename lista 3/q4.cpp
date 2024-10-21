#include <iostream>
#include <math.h>
using namespace std;

void eqSg (int &a, int &b, int c)
{
    int D, X1, X2;
    D = pow(b,2) - 4*a*c;
    X1 = (-b - sqrt(D))/2*a;
    X1 = (-b + sqrt(D))/2*a;
    a = X1;
    b = X2;
}

main ()
{
    int B, A, C;
    cout << "FORNECA A: ";
    cin >> A;
    cout << "FORNECA B: ";
    cin >> B;
    cout << "FORNECA C: ";
    cin >> C;
    eqSg(A, B, C);
    cout << "Os resultados sao: x1 = " << A << " e x2 = " << B;
}
