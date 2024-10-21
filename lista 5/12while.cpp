#include <iostream>
using namespace std;

main()
{
    int i = 1;
    float sM = 0.0, sm = 0.0, salario = 0.0, soma = 0.0, media;
    string nome, N, n;
    while (1)
    {
        cout << "Nome do " << i << "o. funcionario: ";
        cin >> nome;
        if (nome == "fim")
        {
            break;
        }
        cout << "Salario do " << i << "o. funcionario: ";
        cin >> salario;
        soma = soma + salario;
        if (i == 1)
        {
            sM = salario;
            sm = salario;
        }
        if (salario >= sM)
        {
            sM = salario;
            N = nome;
        }
        if (salario <= sm)
        {
            sm = salario;
            n = nome;
        }
        i = i + 1;
    }
    i = i - 1;
    media = soma / i;
    cout << "A media salarial entre os funcionarios cadastrados eh: " << media << endl;
    cout << "O maior salario (" << sM << ") eh do funcionario " << N << endl;
    cout << "O menor salario (" << sm << ") eh do funcionario " << n << endl;
}
