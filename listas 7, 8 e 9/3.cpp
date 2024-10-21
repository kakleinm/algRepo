#include <iostream>
#include <fstream>
using namespace std;

main()
{
    ifstream entrada;
    ofstream saida;
    string s;
    entrada.open("redacaoDoEnem.txt");
    saida.open("saida.txt");
    while(!entrada.eof())
    {
        getline(entrada, s);
        saida << s << "\n";
    }
    saida.close();
    entrada.close();
}
