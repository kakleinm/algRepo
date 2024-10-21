#include <iostream>
using namespace std;

bool divisao (int a, int b)
{
    bool result = false;
    if (a % b == 0)
    {
        result = true;
    }
    return result;
}

main ()
{
    int A, B;
    cout << "DIGITE UM NUMERO INTEIRO: ";
    cin >> A;
    cout << "DIGITE OUTRO NUMERO INTEIRO: ";
    cin >> B;
    if (A % 2 == 0)
    {
        cout << A << " eh par." << "\n";
    }
    else {
        cout << A << " eh impar." << "\n";
    }
    if (B % 2 == 0)
    {
        cout << B << " eh par." << "\n";
    }
    else {
        cout << B << " eh impar." << "\n";
    }
    if (divisao(A, B) == true)
    {
        cout << A << " eh divisivel por " << B << "\n";
    }
    else {
        cout << A << " nao eh divisivel por " << B;
    }
}
