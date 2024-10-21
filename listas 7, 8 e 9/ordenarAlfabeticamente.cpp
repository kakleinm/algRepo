#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

void troca (string &s1, string &s2)
{
    string save;
    save = s1;
    s1 = s2;
    s2 = save;
}

void bubbleSort (string v[], int tam)
{
    int i, j;
    for (i = 0; i < tam - 1; i++)
    {
        for(j = 0; j < tam - i - 1; j++)
        {
            if (v[j] > v[j + 1]) troca(v[j], v[j + 1]);
        }
    }
}

int qtdNomes (ifstream &entrada)
{
    int qtd = 0;
    string s, pulo;
    getline(entrada, pulo);
    while(!entrada.eof())
    {
        getline(entrada, s);
        qtd++;
    }
    return qtd;
}

main()
{
    ifstream entrada;
    ofstream saida;
    int i;
    entrada.open("nomes.txt");
    saida.open("ordemAlfabetica.txt");
    const int tam = qtdNomes(entrada);
    entrada.seekg(0);
    string v[tam], linha;
    getline(entrada, linha);
    for (i = 0; i < tam; i++)
    {
        getline(entrada, linha);
        v[i] = linha;
    }
    bubbleSort(v, tam);
    saida << "\n";
    for (i = 0; i < tam; i++)
    {
        saida << v[i] << "\n";
    }
    saida.close();
    entrada.close();
    for (i = 0; i < tam; i++)
    {
        cout << v[i] << "\n";
    }
}
