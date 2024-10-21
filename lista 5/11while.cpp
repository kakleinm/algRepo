#include <iostream>
#include <math.h>
using namespace std;

main()
{
    int i = 1, n, p;
    cout << "NUMERO: ";
    cin >> n;
    while(i * i <= n)
    {
        p = pow(i, 2);
        i = i + 1;
    }
    cout << "Maior quadrado menor ou igual a " << n << ": " << p << " (quadrado de " << i - 1 << ")";
}
