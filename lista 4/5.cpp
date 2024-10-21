#include <iostream>
using namespace std;

bool vTri (float a, float b, float c)
{
    bool result = false;
    if (a < b + c && b < a + c && c < a + b)
    {
        result = true;
    }
    return result;
}

float Tri (float a, float b, float c)
{
    if(vTri(a, b, c) == true)
    {
        if(a == b && b == c)
        {
            return 3;
        }
        if(a == b && b != c)
        {
            return 2;
        }
        if(a != b && b != c)
        {
            return 1;
        }
    }
    else {
        return 0;
    }
}

main()
{
    float A, B, C;
    cout << "FORNECA O LADO A DO TRIANGULO: ";
    cin >> A;
    cout << "FORNECA O LADO B DO TRIANGULO: ";
    cin >> B;
    cout << "FORNECA O LADO C DO TRIANGULO: ";
    cin >> C;
    cout << Tri(A, B, C);

}
