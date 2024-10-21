#include <iostream>
using namespace std;

bool primo (int a)
{
    int i = 2;
    if (a > 1) {
        while (i < a) {
            if (i != a && a % i == 0)
            {
                return false;
            }
            i = i + 1;
        }
    }
    else return false;
    return true;
}

main()
{
    int x;
    cout << "FORNECA O NUMERO: ";
    cin >> x;
    if (primo(x) == true)
    {
        cout << x << " eh um numero primo.";
    }
    else cout << x << " nao eh um numero primo.";
}
