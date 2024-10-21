#include <iostream>
using namespace std;

main()
{
    int i = 1, idade, mIdade = 0, F = 0, olhoVecabeloL = 0;
    char sexo, olho, cabelo;
    while(1)
    {
        cout << "IDADE ";
        cin >> idade;
        if (idade == -1)
        {
            break;
        }
        cout << "SEXO (M OU F) ";
        cin >> sexo;
        cout << "COR DOS OLHOS (azuis (A), verdes (V) ou castanhos (C)) ";
        cin >> olho;
        cout << "COR DOS CABELOS (louros (L), pretos (P) ou castanhos (C)) ";
        cin >> cabelo;
        if (i == 1)
        {
            mIdade = idade;
        }
        if (idade >= mIdade)
        {
            mIdade = idade;
        }
        if (sexo == 'F' && idade >= 18 && idade <= 65)
        {
            F = F + 1;
        }
        if (cabelo == 'L' && olho == 'V')
        {
            olhoVecabeloL = olhoVecabeloL + 1;
        }
        i = i + 1;
    }
    cout << "Maior idade: " << mIdade << endl;
    cout << "Individuos do sexo feminino cuja idade esta entre 18 e 65 anos: " << F << endl;
    cout << "Individuos que tem olhos verdes e cabelos louros: " << olhoVecabeloL;
}
