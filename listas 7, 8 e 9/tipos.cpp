#include <iostream>
using namespace std;

typedef struct tR2
{
    int x, y;
} R2;

main()
{
    R2 p1, p2, p3;
    int i = 0;
    while (i < 2)
    {
        cout << "X do " << i + 1 << "o. ponto: ";
        if(i == 0) cin >> p1.x;
        if(i == 1) cin >> p2.x;
        cout << "Y do " << i + 1 << "o. ponto: ";
        if(i == 0) cin >> p1.y;
        if(i == 1) cin >> p2.y;
        i++;
    }
    p3.x = (p1.x + p2.x)/2;
    p3.y = (p1.y + p2.y)/2;
    cout << "Ponto medio = (" << p3.x << ", " << p3.y << ")";
}
