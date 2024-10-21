#include <iostream>
#include <math.h>
using namespace std;

main()
{
    int i;
    cout << "NUMERO " << " QUADRADO " << " CUBO" << endl;
    for (i = 0; i <= 10; i = i + 1)
    {
        cout << i << "          " << pow(i, 2) << "        " << pow(i, 3) << endl;
    }
}
