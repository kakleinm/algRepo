#include <iostream>
using namespace std;

main()
{
    int x;
    cout << "Digite o numero correspondente ao mes: ";
    cin >> x;
    if (x >= 1 && x <= 12)
    {
        if(x == 1)
        {
            cout << "Janeiro.";
        }
        if(x == 2)
        {
            cout << "Fevereiro.";
        }
        if(x == 3)
        {
            cout << "Marco.";
        }
        if(x == 4)
        {
            cout << "Abril.";
        }
        if(x == 5)
        {
            cout << "Maio.";
        }
        if(x == 6)
        {
            cout << "Junho.";
        }
        if(x == 7)
        {
            cout << "Julho.";
        }
        if(x == 8)
        {
            cout << "Agosto.";
        }
        if(x == 9)
        {
            cout << "Setembro.";
        }
        if(x == 10)
        {
            cout << "Outubro.";
        }
        if(x == 11)
        {
            cout << "Novembro.";
        }
        if(x == 12)
        {
            cout << "Dezembro.";
        }
    }
    else {
        cout << "Nao corresponde a nenhum mes do ano.";
    }
}
