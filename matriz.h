#ifndef MATRIZ_H
#define MATRIZ_H

#include<stdio.h>
#include<stdlib.h>

typedef struct _matriz matriz;
struct _matriz{
    int row;
    int column;
    float **datos;
};

void rellenar_matriz(matriz *m);
void suma(matriz *m1,matriz *m2, matriz *mr);
void orden_matriz(matriz *m1);
void multi(matriz *m1,matriz *m2,matriz *mr);
void print(matriz *m1);
int probar_multi(matriz *m1,matriz *m2);
int probar_suma(matriz *m1,matriz *m2);
void crear(matriz *m1);
#endif