#include <iostream>
using namespace std;

int posicao (char c)
{
    switch(c) {
        case 'a':
        case 'A': return 1;
        case 'b':
        case 'B': return 2;
        case 'c':
        case 'C': return 3;
        case 'd':
        case 'D': return 4;
        case 'e':
        case 'E': return 5;
        case 'f':
        case 'F': return 6;
        case 'g':
        case 'G': return 7;
        case 'h':
        case 'H': return 8;
        case 'i':
        case 'I': return 9;
        case 'j':
        case 'J': return 10;
        case 'k':
        case 'K': return 11;
        case 'l':
        case 'L': return 12;
        case 'm':
        case 'M': return 13;
        case 'n':
        case 'N': return 14;
        case 'o':
        case 'O': return 15;
        case 'p':
        case 'P': return 16;
        case 'q':
        case 'Q': return 17;
        case 'r':
        case 'R': return 18;
        case 's':
        case 'S': return 19;
        case 't':
        case 'T': return 20;
        case 'u':
        case 'U': return 21;
        case 'v':
        case 'V': return 22;
        case 'w':
        case 'W': return 23;
        case 'x':
        case 'X': return 24;
        case 'y':
        case 'Y': return 25;
        case 'z':
        case 'Z': return 26;
        default : return 0;
    }
}
main()
{
    char ca;
    cout << "FORNECA UMA LETRA: ";
    cin >> ca;
    cout << "A letra esta na posicao " << posicao(ca) << " do alfabeto.";
}
