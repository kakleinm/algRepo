#include <iostream>
using namespace std;

bool minu (char c)
{
    bool result = false;
    if (c >= 'a' && c <= 'z')
    {
        result = true;
    }
    return result;
}

bool maiu (char c)
{
    bool result = false;
    if (c >= 'A' && c <= 'Z')
    {
        result = true;
    }
    return result;
}

bool letra (char c)
{
    bool result = false;
    if (minu(c) == true || maiu(c) == true)
    {
        result = true;
    }
    return result;
}

bool vogal (char c)
{
    bool result = false;
    if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
    {
        result = true;
    }
    return result;
}

bool cons (char c)
{
    bool result = false;
    if (letra(c) == true && vogal(c) == false)
    {
        result = true;
    }
    return result;
}

bool alg (char c)
{
    bool result = false;
    if (c >= '0' && c <= '9')
    {
        result = true;
    }
    return result;
}

bool impar (char c)
{
    bool result = false;
    if (c == '1' || c == '3' || c == '5' || c == '7' || c == '9')
    {
        result = true;
    }
    return result;
}

bool par (char c)
{
    bool result = false;
    if (c == '0' || c == '2' || c == '4' || c == '6' || c == '8')
    {
        result = true;
    }
    return result;
}

main()
{
    char ca;
    cout << "IDENTIFICACAO DE CARACTERE" << "\n";
    cout << "Digite um caractere: ";
    cin >> ca;
    if (letra(ca) == true)
    {
        cout << "Seu caractere eh uma letra." << "\n";
        if (minu(ca) == true)
        {
            cout << "Seu caractere eh minusculo." << "\n";
        }
        else
        {
            cout << "Seu caractere nao eh minusculo." << "\n";
        }
        if (maiu(ca) == true)
        {
            cout << "Seu caractere eh maiusculo." << "\n";
        }
        else
        {
            cout << "Seu caractere nao eh maiusculo." << "\n";
        }
        if (vogal(ca)== true)
        {
            cout << "Seu caractere eh uma vogal." << "\n";
        }
        else
        {
            cout << "Seu caractere nao eh uma vogal." << "\n";
        }
        if (cons(ca)== true)
        {
            cout << "Seu caractere eh uma consoante." << "\n";
        }
        else
        {
            cout << "Seu caractere nao eh uma consoante." << "\n";
        }
    }
    else
    {
        cout << "Seu caractere nao eh uma letra." << "\n";
    }
    if (alg(ca) == true)
    {
        cout << "Seu caractere eh um algarismo." << "\n";
        if (impar(ca) == true)
        {
            cout << "Seu caractere eh impar." << "\n";
        }
        else
        {
            cout << "Seu caractere nao eh impar." << "\n";
        }
        if (par(ca) == true)
        {
            cout << "Seu caractere eh par." << "\n";
        }
        else
        {
            cout << "Seu caractere nao eh par." << "\n";
        }
    }
    else
    {
        cout << "Seu caractere nao eh um algarismo." << "\n";
    }
}
