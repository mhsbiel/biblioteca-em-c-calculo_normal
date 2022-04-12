#include "../calculos_normal.h"
#include <math.h>

#define _PI 3.14159

// nivel 1
int soma(int x,int y)
{
    return x + y;
}

int subtracao(int x, int y)
{
    return x - y;
}

// nivel 2
int produto(int x, int y)
{
    return x * y;
}

float razao(int x, int y)
{
    return x / y;
}

// nivel 3
float rz_quad(float x)
{
    return sqrt(x);
}

float potencia(double x)
{
    return x * x;
}

//geometria plana

int quad(int x)
{
    return x * x;
}

int rect(int x, int y)
{
    return x * y;
}

int trig(int x, int y)
{
    return ((x * y) / 2);
}

int paral(int x, int y)
{
    return x * y;
}

int trap(int x, int y, int h)
{
    return (x + y) / 2 * h;
}

int cir(int x)
{
    return 3.14159 * (x * x);
}

int L(int x, int y)
{
    return x * y / 2;
}

int D(int x)
{
    return (2 / 360) * 3.14159 * (x * x);
}

int B(int x, int y)
{
    return (x / 2) * (y * y);
}

