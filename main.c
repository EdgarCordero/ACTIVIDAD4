#include <stdlib.h>
#include <stdio.h>

void arr(){
    int a[5];
    int i;
    int suma=0;
    float prom;
    printf("INTRODUZCA 5 NUMEROS\n");
    for(int i=0; i<5; i++){
        printf("INTRODUCA NUMERO %i\t",i+1);
        scanf("%i",&a[i]);
        suma=suma+a[i];
    }
    prom=(float)suma/5;
    printf("LA SUMA DE LOS NUMEROS INTRODUCIDOS ES: %i\nEL PROMEDIO ES: %f\n",suma,(float)prom);
}
void mostrar(int n,char cadena[]){
    int p;
    printf("EL ARREGLO SE ESTA MOSTRANDO %i VECES\n\n",n);
    for (p=0;p<n;p++){
    printf("%s\n",cadena);
    }
}

int main(){
    int s=0;
    int m;
    do{
        system("cls");
        printf("INTRODUZCA LA OPCION DE SU ELECCION\nOPCION 1 (SUMAR 5 NUMEROS INTRODUCIDOS EN UN ARREGLO Y SACAR SU PROMEDIO)\nOPCION 2(INCLUIR LA FUNCION VOID MOSTRAR())\nOPCION 3 (CREAR LA ESTRUCTURA PERSONAJE)\nOPCION 4 SALIR\nOPCION INTRODUCIDA\t");
        scanf("%i",&m);
        if(m>0&&m<5){
            switch(m){
            case 1:
                system("cls");
                arr();
                system("pause");
                break;
            case 2:

                break;
            case 3:
                break;

            case 4:
                s=1;
                break;
            }
        }
        else{
            system("cls");
            printf("OPCION INVALIDA\n");
        system("pause");
        }
    }
    while(s==0);
    system("cls");
}

