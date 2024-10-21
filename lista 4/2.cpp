#include <iostream>
using namespace std;

float fabs(float x)
{
    float result;
    if (x < 0)
    {
        result = x * -1;
    }
    else {
        result = x;
    }
    return result;
}

main()
{
    float a;
    cout << "FORNECA O NUMERO: ";
    cin >> a;
    cout << fabs(a);
}
