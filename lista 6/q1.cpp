#include <iostream>
using namespace std;

main()
{
    const int tam = 1;
    int a[tam], b[tam];
    a[0] = 102;
    b[0] = a[0];
    cout << b[0];
}
