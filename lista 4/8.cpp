#include <iostream>
using namespace std;

bool operador (char O)
{
    bool result = false;
    if (O == '+' || O == '-' || O == '*' || O == 'x' || O == 'X' || O == '/' || O == ':')
    {
        result = true;
    }
    return result;
}

main()
{
    float v1, v2, result;
    char o;
    cout << "FORNECA O PRIMEIRO VALOR: ";
    cin >> v1;
    cout << "FORNECA O SEGUNDO VALOR: ";
    cin >> v2;
    cout << "FORNECA O OPERADOR: ";
    cin >> o;
    if(operador(o) == true){
        if(o == '+')
        {
            cout << v1 + v2;
        }
        if(o == '-')
        {
            cout << v1 - v2;
        }
        if(o == '*' || o == 'x' || o == 'X')
        {
            cout << v1 * v2;
        }
        if(o == '/' || o == ':')
        {
            cout << v1 / v2;
        }
    }
    else {
        cout << "Nao eh possivel realizar uma operacao.";
    }
}
