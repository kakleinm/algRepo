#include <iostream>
#include <math.h>
using namespace std;

main()
{
    int i = 0;
    cout << "NUMERO " << " QUADRADO " << " CUBO" << endl;
    while (i <= 10)
    {
        cout << i << "          " << pow(i, 2) << "        " << pow(i, 3) << endl;
        i = i + 1;
    }
}
