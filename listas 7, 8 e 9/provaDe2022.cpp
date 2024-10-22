#include <iostream>
#include <fstream>
using namespace std;

typedef struct tAluno {
    string nome;
    float n1, n2, media, freq;
    typedef enum tSituacao{aprovado, reprovado, recup} situacao;
} aluno;

main()
{
    ifstream entrada;
    ofstream rep, ap, rec;
    aluno a;
    string pulo;
    entrada.open("alunos.txt");
    rec.open("recuperacao.txt");
    rep.open("reprovados.txt");
    ap.open("aprovados.txt");
    getline(entrada, pulo);
    getline(entrada, pulo);
    while(!entrada.eof())
    {
        getline(entrada, pulo);
        getline(entrada, a.nome);
        entrada >> a.n1;
        entrada >> a.n2;
        entrada >> a.freq;
        getline(entrada, pulo);
        a.media = (a.n1 + a.n2)/2;
        if (a.freq >= 75 && a.media >= 7)
        {
            ap << "\nNOME: \t" << a.nome << "\nNOTA 1: \t" << a.n1 << "\nNOTA 2: \t" << a.n2 << "\nMEDIA: \t" << a.media << "\nFREQUENCIA: \t" << a.freq << "\n";
        }
        if (a.freq >= 75 && (a.media < 7 && a.media >= 3))
        {
            rec << "\nNOME: \t" << a.nome << "\nNOTA 1: \t" << a.n1 << "\nNOTA 2: \t" << a.n2 << "\nMEDIA: \t" << a.media << "\nFREQUENCIA: \t" << a.freq << "\n";
        }
        if (a.freq < 75 || a.media < 3)
        {
            rep << "\nNOME: \t" << a.nome << "\nNOTA 1: \t" << a.n1 << "\nNOTA 2: \t" << a.n2 << "\nMEDIA: \t" << a.media << "\nFREQUENCIA: \t" << a.freq << "\n";
        }
    }
    rec.close();
    rep.close();
    ap.close();
    entrada.close();
}