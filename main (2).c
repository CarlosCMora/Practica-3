#include "matriz.h"

int main(){
    matriz *m;
    int i,j,x;
    m=(matriz*)malloc(sizeof(matriz)*3);
    while(1){
        printf("1)Sumar\n2)Multiplicar\n");
        scanf("%d",&x);
        switch(x){
            case 1:
                for(i=0;i<2;i++){
                    printf("Matriz %d",i);
                    orden_matriz((m+i));
                }
                if(probar_suma(m,(m+1))==5){
                    (m+2)->row=m->row;
                    (m+2)->column=m->column;
                    for(i=0;i<3;i++){
                        crear(m+i);
                        
                    }
                    for(i=0;i<2;i++){
                        rellenar_matriz(m+i);
                    }
                    suma((m),(m+1),(m+2));
                    for(i=0;i<3;i++){
                        print(m+i);
                        printf("\n");
                    }
                }
                else{
                    printf("No se puede sumar, el orden  no es correcto.\n");
                }
                break;
            case 2:
                for(i=0;i<2;i++){
                    printf("Matriz %d",i);
                    orden_matriz((m+i));
                }
                if(probar_multi(m,(m+1))){
                    (m+2)->row=(m+1)->row;
                    (m+2)->column=m->column;
                    for(i=0;i<3;i++){
                        crear(m+i);
                        

                    }
                    for(i=0;i<2;i++){
                        rellenar_matriz(m+i);
                    }
                    multi(m,(m+1),(m+2));
                    for(i=0;i<3;i++){
                        print((m+i));
                        printf("\n");
                    }
                }
                else{
                    printf("No se puede sumar, el orden  no es correcto.\n");
                }
                break;
            case 3:
                return 0;
        }
    }
    return 0;
}