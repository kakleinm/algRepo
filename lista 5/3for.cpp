#include <iostream>
using namespace std;

bool primo (int a)
{
    int i;
    if (a > 1) {
        for (i = 2; i < a; i = i + 1) {
            if (i != a && a % i == 0)
            {
                return false;
            }
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

