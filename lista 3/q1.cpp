#include <iostream>
using namespace std;

void ptmedio (float &xi, float &xf, float yi, float yf)
{
    float xm, ym;
    xm = (xi + xf) / 2;
    ym = (yi + yf) / 2;
    xi = xm;
    xf = ym;
}

main()
{
    float x1, y1, x2, y2;
    cout << "X INICIAL -> ";
    cin >> x1;
    cout << "Y INICIAL -> ";
    cin >> y1;
    cout << "X FINAL -> ";
    cin >> x2;
    cout << "Y FINAL -> ";
    cin >> y2;
    ptmedio(x1, x2, y1, y2);
    cout << "O ponto medio vale (" << x1 << ", " << y1 << ")";
    getchar();
}
