#include <iostream>
using namespace std;

main()
{
    int p, i, na = 0, nh = 0;
    float idade, altura;
    cout << "QUANTOS ALUNOS? ";
    cin >> p;
    i = 1;
    float h = 0.0;
    float a = 0.0;
    float mediaH, mediaA;
    while (i <= p)
    {
        cout << "FORNECA A ALTURA DO " << i << "o. USUARIO: ";
        cin >> altura;
        cout << "FORNECA A IDADE DO " << i << "o. USUARIO: ";
        cin >> idade;
        if (altura <= 1.70)
        {
            a = a + idade;
            na = na + 1;
        }
        if (idade >= 20)
        {
            h = h + altura;
            nh = nh + 1;
        }
        i = i + 1;
    }
    mediaA = a / na;
    mediaH = h / nh;
    cout << "IDADE MEDIA DOS ALUNOS COM MENOS DE 1.70: " << mediaA << endl;
    cout << "ALTURA MEDIA DOS ALUNOS COM MAIS DE 20 ANOS: " << mediaH;
}
