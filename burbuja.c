#include <stdio.h>
int num[5];
int x,y,burbuja;
void main(){
    printf("Programa 1 - Metodo de la Burbuja\n");
    printf("Este programa solicita 5 numeros y los ordena de Mayor a Menor.\n");
    
    for(x=0; x<5; x++){
        printf("De el numero %d: ",x+1);
        scanf("%d",&num[x]);
    }

    //Mostrar valores
    printf("Listar valores originales\n");
    for(x=0; x<5; x++){
        printf("Posicion %d: %d\n",x+1, num[x]);
    }

    //Ordenar los valores
    for(x=0; x<4; x++){
        for(y=x+1; y<5; y++){
            if(num[x]<num[y]){
                burbuja = num[x];
                num[x] = num[y];
                num[y] = burbuja;
            }
        }
    }

    //Mostrar valores
    printf("Listar valores ordenados\n");
    for(x=0; x<5; x++){
        printf("Posicion %d: %d\n",x+1, num[x]);
    }
   
}