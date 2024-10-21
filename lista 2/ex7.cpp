#include <iostream>
using namespace std;

bool vogal (char carac)
{
    return carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u' || carac == 'A' || carac == 'E' || carac == 'I' || carac == 'O' || carac == 'U';
}

bool alg (char carac)
{
    return carac >=0 && carac<=9;
}

bool minu (char carac)
{
    return carac >='a' && carac<='z';
}

bool maiu (char carac)
{
    return carac >='A' && carac<='Z';
}

bool letra (char carac)
{
    return minu(carac) || maiu(carac);
}

bool cons (char carac)
{
    return letra(carac) && !vogal(carac);
}

bool par (char carac)
{
    return carac == '0' || carac == '2' || carac == '4' || carac == '6' || carac == '8';
}

main()
{
    char carac;
    cout << "DIGITE UM CARACTERE: ";
    cin >> carac;
    cout << "VOGAL: " << vogal(carac);
    cout << "\nALGARISMO: " << alg(carac);
    cout << "\nMINUSCULA: " << minu(carac);
    cout << "\nMAIUSCULA: " << maiu(carac);
    cout << "\nLETRA: " << letra(carac);
    cout << "\nCONSOANTE: " << cons(carac);
    cout << "\nPAR: " << par(carac);
}

