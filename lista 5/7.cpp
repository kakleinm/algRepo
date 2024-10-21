#include <iostream>
using namespace std;

main()
{
    float i = 0;
    float aC = 1.50, aZ = 1.10, sC = 0.02, sZ = 0.03;
    while (aZ <= aC)
    {
        aC + sC;
        aZ + sZ;
        i = i + 1;
    }
    cout << i << " ano(s).";
}

main()
{
    float i = 0;
    float aC = 1.50, aZ = 1.10, sC = 0.02, sZ = 0.03;
    do {
        aC + sC;
        aZ + sZ;
        i = i + 1;
    }
    while (aZ <= aC)
    cout << i << " ano(s).";
}

main()
{
    float i;
    float aC = 1.50, aZ = 1.10, sC = 0.02, sZ = 0.03;
    for (i = 0; aZ <= aC; i = i + 1){
        aC + sC;
        aZ + sZ;
    }
    cout << i << " ano(s).";
}
