#include <iostream>
using namespace std;

main()
{
    float i, massa, ts;
    cout << "FORNECA A MASSA EM GRAMAS: ";
    cin >> massa;
    if (massa >= 0.05)
    {
        for (i = 1; massa >= i; i = i + 1)
        {
            massa / 2;
        }
        ts = i*50;
        cout << "Serao necessarios " << ts << " segundos para que o material se torne menor que 0.05 gramas.";
    }
    else {
        cout << "A massa ja eh menor que 0.05 gramas.";
    }
}

