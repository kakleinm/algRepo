#include <iostream>
using namespace std;

main()
{
    int i, n, p, im;
    char r;
    i = 1;
    p = 0;
    im = 0;
    n = 10;
    while (n >= 0)
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
        n = n - 1;
    }

}
