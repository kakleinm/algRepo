#include <iostream>
using namespace std;

float imc (float p, float a)
{
    float result = p/(a*a);
    if(result < 25)
    {
        return 0;
    }
    if(result >= 25 && result < 30)
    {
        return 1;
    }
    if(result >= 30 && result < 35)
    {
        return 2;
    }
    if(result >= 35 && result < 40)
    {
        return 3;
    }
    if(result >= 40)
    {
        return 4;
    }
}

main()
{
    float peso, altura;
    cout << "FORNECA SEU PESO: ";
    cin >> peso;
    cout << "FORNECA SUA ALTURA: ";
    cin >> altura;
    cout << imc(peso, altura);
}
