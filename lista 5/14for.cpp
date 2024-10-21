#include <iostream>
using namespace std;

main()
{
    int i, n, p, im;
    char r;
    p = 0;
    im = 0;
    for (i = 1; i == 1; i = i - 1)
    {
        cout << "\n" << "FORNECA UM NUMERO: ";
        cin >> n;
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
        cout << "\n" << "Deseja fornecer um novo numero? (Digite qualquer tecla para SIM, N para NAO) ";
        cin >> r;
        if (r == 'n' || r == 'N');
    }
}
