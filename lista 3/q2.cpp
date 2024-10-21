#include <iostream>
#include <math.h>
using namespace std;

void SdF (int &nx, int &dx, int ny, int dy)
{
    int n, d;
    n = nx * dy + ny * dx;
    d = dx * dy;
    nx = n;
    dx = d;
}

void SUBdF (int &nx, int &dx, int ny, int dy)
{
    int n, d;
    n = nx * dy - ny * dx;
    d = dx * dy;
    nx = n;
    dx = d;
}

void MdF (int &nx, int &dx, int ny, int dy)
{
    int n, d;
    n = nx * ny;
    d = dx * dy;
    nx = n;
    dx = d;
}

void DdF (int &nx, int &dx, int ny, int dy)
{
    int n, d;
    n = nx * dy;
    d = dx * ny;
    nx = n;
    dx = d;
}

main()
{
  int nx, dx, ny, dy, n, d;
  cout << "FORNECA O NUMERADOR DA PRIMEIRA FRACAO: ";
  cin >> nx;
  cout << "FORNECA O DENOMINADOR DA PRIMEIRA FRACAO: ";
  cin >> dx;
  cout << "FORNECA O NUMERADOR DA SEGUNDA FRACAO: ";
  cin >> ny;
  cout << "FORNECA O DENOMINADOR DA SEGUNDA FRACAO: ";
  cin >> dy;
  n = nx;
  d = dx;
  SdF (nx, dx, ny, dy);
  cout << "Resultado da adicao das fracoes: " << nx << "/" << dx << "\n";
  nx = n;
  dx = d;
  SUBdF (nx, dx, ny, dy);
  cout << "Resultado da subtracao das fracoes: " << nx << "/" << dx << "\n";
  nx = n;
  dx = d;
  MdF (nx, dx, ny, dy);
  cout << "Resultado da multiplicacao das fracoes: " << nx << "/" << dx << "\n";
  nx = n;
  dx = d;
  DdF (nx, dx, ny, dy);
  cout << "Resultado da divisao das fracoes: " << nx << "/" << dx << "\n";
}

