#include <iostream>
#include <math.h>
using namespace std;

main()
{
    int i, n, p;
    cout << "NUMERO: ";
    cin >> n;
    for (i = 1; i * i <= n; i = i + 1)
    {
        p = pow(i, 2);
    }
    cout << "Maior quadrado menor ou igual a " << n << ": " << p << " (quadrado de " << i - 1 << ")";
}

