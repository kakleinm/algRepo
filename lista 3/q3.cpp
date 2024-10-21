#include <iostream>
#include <math.h>
using namespace std;

int horarios (int &hora)
{
    int hr = hora/60;
    int min = hora%60;
    hora = min;
    return hr;
}

main()
{
    int h, v;
    cout << "INFORME QUANTOS MINUTOS SE PASSARAM: ";
    cin >> h;
    v = horarios(h);
    cout << "Se passaram " << v << " horas e " << h << " minutos.";
}
