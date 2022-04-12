#ifndef CALCULOS_NORMAL_H_INCLUDED
#define CALCULOS_NORMAL_H_INCLUDED

// nivel 1
int soma(int x,int y);
int subtracao(int x,int y);

//nivel 2
int produto(int x, int y);
float razao(int x, int y);

//nivel 3
float rz_quad(float x);
float potencia(double x);

//geometria pradao
int quad(int x);
int rect(int x, int y);
int trin(int x, int y);
int paral(int x, int y);
int trap(int x, int y, int h);
int cir(int x);

//setor circolar
int L(int x, int y);
int D(int x);
int B(int x, int y);


#endif // CALCULOS_NORMAL_H_INCLUDED
