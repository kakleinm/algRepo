#include <iostream>
using namespace std;

void crescente (int v[], int col)
{
    int menor, i, menorm, j, maior, w[col], save;
    for (i = 0; i < col; i++)
    {
        if (i == 0) menor = v[i];
        else if (v[i] < menor) menor = v[i];
    }
    menorm = menor - 1;
    for (i = col - 1; i >= 0; i--)
    {
        for (j = 0; j < col; j++)
        {
            if (j == 0)
            {
                maior = v[j];
                save = j;
            }
            else if (v[j] > maior) {
                maior = v[j];
                save = j;
            }
        }
        w[i] = maior;
        v[save] = menorm;
    }
    for (i = 0; i < col; i++)
    {
        v[i] = w[i];
    }
}

main()
{
    const int tam = 5;
    int v[tam], i;
    v[0] = 7;
    v[1] = 3;
    v[2] = 5;
    v[3] = 3;
    v[4] = 6;
    crescente(v, tam);
    for (i = 0; i < tam; i++)
    {
        cout << v[i] << " ";
    }
}
