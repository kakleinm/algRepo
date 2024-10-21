#include <iostream>
#include <time.h>
#include <fstream>
#include <math.h>
using namespace std;

typedef struct tR2 {
    float x, y;
} R2;

main()
{
    ifstream entrada;
    ofstream saida;
    int i, qtd;
    float A, B, c;
    string pulo, espaco;
    R2 ponto;
    srand(time(NULL));
    saida.open("pontos.txt");
    for(i = 0; i < 20000; i++)
    {
        ponto.x = 1.0 * rand() / RAND_MAX;
        ponto.y = 1.0 * rand() / RAND_MAX;
        saida << "\n" << ponto.x << " " << ponto.y;
    }
    saida.close();
    cout << "Pontos gerados.\n\n";
    entrada.open("pontos.txt");
    while(!entrada.eof())
    {
        getline(entrada, pulo);
        entrada >> ponto.x >> espaco >> ponto.y;
        A = pow(ponto.x, 2);
        B = pow(ponto.y, 2);
        c = sqrt(A + B);
        if (c <= 1) qtd++;
    }
    entrada.close();
    cout << "Quantidade de pontos dentro de um quarto de circulo de raio 1 = " << qtd << "\n";
}
