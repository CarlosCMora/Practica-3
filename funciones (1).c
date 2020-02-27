#include "matriz.h"

void orden_matriz(matriz *m1){
    printf("Ingrese el numero de filas de la matriz: \n");
    scanf("%d",&m1->row);
    printf("Ingrese el numero de columnas de la matriz: \n");
    scanf("%d",&m1->column);
}
int probar_suma(matriz *m1,matriz *m2){
    if((m1->row==m2->row) && (m1->column==m2->column)){
        return 5;
    }
    return 2;
}
int probar_multi(matriz *m1,matriz *m2){
    if(m1->column==m2->row){
        return 5;
    }
    return 2;
}
void crear(matriz *m1){
    int i;
    m1->datos=(float**)malloc(sizeof(float*)*m1->row);
    for(i=0;i<m1->row;i++){
        m1->datos[i]=(float*)malloc(sizeof(float)*m1->column);
    }
}
void rellenar_matriz(matriz *m){
    int i,j;
    for(i=0;i<m->row;i++){
        for(j=0;j<m->column;j++){
            printf("Ingrese el valor para el lugar [%d][%d]\n",i,j);
            scanf("%f",&m->datos[i][j]);
        }
    }
}
void suma(matriz *m1,matriz *m2, matriz *mr){
    int i,j;
    for(i=0;i<m1->row;i++){
        for(j=0;j<m2->column;j++){
            mr->datos[i][j]=m1->datos[i][j]+m2->datos[i][j];
        }
    }
}
void multi(matriz *m1,matriz *m2,matriz *mr){
    int i,j,k;
    for(i=0;i<m1->row;i++){
        for(j=0;j<m1->column;j++){
            for(k=0;k<m2->row;k++){
                mr->datos[i][j]=mr->datos[i][j]+(m1->datos[i][k]*m2->datos[k][j]);
            }
        }

    }
}
void print(matriz *m1){
    int i,j,k;
    for(i=0;i<m1->row;i++){
        printf("\n");
        for(j=0;j<m1->column;j++){
            printf("%f\t",m1->datos[i][j]);
        }
    }
}