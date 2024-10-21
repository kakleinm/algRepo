#include <iostream>
using namespace std;

main()
{
    int i, n, p, im;
    char r;
    i = 1;
    p = 0;
    im = 0;
    for (n = 10; n >= 0; n = n - 1)
    {
        cout << n << "\n";
        if (n % 2 == 0)
        {
            p = p + i;
            cout << "Pares: " << p << "\n";
            cout << "Impares: " << im << "\n";
        }
        else {
            im = im + i;
            cout << "Pares: " << p << "\n";
            cout << "Impares: " << im << "\n";
        }
    }
}

