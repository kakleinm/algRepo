#include <iostream>
using namespace std;

main()
{
    const int tam = 1;
    int v[tam], V[tam], ok[tam * 2];
    cout << "primeiro valor: ";
    cin >> v[0];
    cout << "segundo valor: ";
    cin >> V[0];
    ok[0] = v[0];
    ok[1] = V[0];
    cout << ok[0] << " " << ok[1];
}
