#include <iostream>
#include <fstream>
using namespace std;

main()
{
    ofstream saida;
    int n1, n2;
    string nome;
    saida.open("notas_i.txt", ios::app);
    cout << "Nome do aluno: ";
    getline(cin, nome);
    cout << "Primeira nota: ";
    cin >> n1;
    cout << "Segunda nota: ";
    cin >> n2;
    saida << "\n" << nome << "\n" << n1 << "\n" << n2;
    saida.close();
}
