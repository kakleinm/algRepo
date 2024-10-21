#include <iostream>
#include <time.h>
using namespace std;

main()
{
    int tam, i, j, soma = 0, d;
    cout << "tamanho da matriz: ";
    cin >> tam;
    int mat[tam][tam];
    d = tam * tam;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            mat[i][j] = rand() % 10;
            cout << "[" << i << "][" << j << "] = " << mat[i][j] << "  ";
        }
        cout << "\n";
    }
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (i == j || i + j == tam - 1) soma = soma;
            else soma = soma + mat[i][j];
        }
    }
    soma = soma / d;
    cout << "media: " << soma;
}
