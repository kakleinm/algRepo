#include <iostream>
#include <fstream>
using namespace std;

main()
{
    ifstream entrada;
    ofstream saida;
    float n1, n2, media, soma = 0;
    int alunos = 0;
    string nome, pulo;
    entrada.open("notas_i.txt");
    saida.open("medias.txt");
    while (!entrada.eof())
    {
        getline(entrada, pulo);
        getline(entrada, nome);
        entrada >> n1;
        entrada >> n2;
        getline(entrada, pulo);
        media = (n1 + n2) / 2;
        soma = soma + media;
        alunos++;
        saida << "\nMedia de " << nome << " = " << media;
    }
    soma = soma/alunos;
    saida << "\nMedia da turma = " << soma;
    saida.close();
    entrada.close();
}
