#include <iostream>
using namespace std;

main()
{
    const int tam = 13;
    int G[tam], R[tam], i = 0, acertos = 0;
    cout << "APOSTAS ESPORTIVAS!" << "\n" << "Aposte 1 para o TIME DA CASA!" << "\n" << "Aposte 2 para o TIME DE FORA!" << "\n" << "Aposte 3 para EMPATE!" << "\n\n";
    G[0] = 1;
    G[1] = 1;
    G[2] = 2;
    G[3] = 2;
    G[4] = 3;
    G[5] = 2;
    G[6] = 2;
    G[7] = 2;
    G[8] = 2;
    G[9] = 2;
    G[10] = 1;
    G[11] = 1;
    G[12] = 3;
    while (i < tam)
    {
        cout << "Faca a aposta no jogo " << i + 1 << ": ";
        cin >> R[i];
        if (R[i] == 1 || R[i] == 2 || R[i] == 3)
        {
            if (G[i] == R[i])
            {
                acertos = acertos + 1;
            }
        }
        else {
            cout << "Valor invalido." << "\n";
            break;
        }
        i = i + 1;
    }
    cout << "\n";
    cout << "ACERTOS: " << acertos << "\n";
    if (acertos == 13)
    {
        cout << "Voce eh o ganhador, parabens!" << "\n";
    }
    else {
        cout << "Nao foi dessa vez..." << "\n";
    }
}
