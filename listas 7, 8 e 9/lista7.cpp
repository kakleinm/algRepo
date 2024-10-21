#include <iostream>
using namespace std;

int len (char a[])
{
    int i = 0;
    bool j = false;
    while (j == false)
    {
        if (a[i] == '\0') j = true;
        else i++;
    }
    return i;
}

 int cmp (char a[], char b[])
 {
     int i = 0;
     int cA, cB, maior;
     int lA = len(a), lB = len(b);
     if (lA > lB) maior = lA;
     else maior = lB;
     while (i < maior)
     {
         int cA = a[i];
         int cB = b[i];
         if (cA > cB) return 1;
         if (cB > cA) return -1;
         i++;
     }
     return 0;
 }

 void toU (char a[])
 {
     int i = 0, carac;
     int lA = len(a);
     while (i < lA)
     {
         carac = a[i];
         if (a[i] >= 'a' && a[i] <= 'z') carac = carac - 32;
         a[i] = carac;
         i++;
     }
 }

 void toL (char a[])
 {
     int i = 0, carac;
     int lA = len(a);
     while (i < lA)
     {
         carac = a[i];
         if (a[i] >= 'A' && a[i] <= 'Z') carac = carac + 32;
         a[i] = carac;
         i++;
     }
 }

 main()
 {
    const int tam = 20;
    char x[tam], y[tam], carac;
    int i = 0;
    x[0] = 'E';
    x[1] = 'x';
    x[2] = 't';
    x[3] = 'r';
    x[4] = 'a';
    y[0] = 'E';
    y[1] = 'x';
    y[2] = 't';
    y[3] = 'r';
    y[4] = 'a';
    y[5] = 'a';
    cout << "Comprimento: " << len(x) << " / " << len(y) << "\n";
    cout << "Comparacao: " << cmp(x, y)<< "\n";
    toU(x);
    toU(y);
    cout << "Maiuscula: " << x << " / " << y << "\n";
    toL(x);
    toL(y);
    cout << "Minuscula: " << x << " / " << y << "\n" << "\n";
    cout << "TABELA ASCII" << "\n";
    while (i < 256)
    {
        carac = i;
        cout << carac << " / " << i << "\n";
        i++;
    }
 }
