#include <iostream>
using namespace std;

main()
{
    float i, massa, ts;
    cout << "FORNECA A MASSA EM GRAMAS: ";
    cin >> massa;
    if (massa >= 0.05)
    {
        i = 1;
        while (massa >= i)
        {
            massa / 2;
            i = i + 1;
        }
        ts = i*50;
        cout << "Serao necessarios " << ts << " segundos para que o material se torne menor que 0.05 gramas.";
    }
    else {
        cout << "A massa ja eh menor que 0.05 gramas.";
    }
}
