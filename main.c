#include <stdlib.h>
#include <stdio.h>
struct Personajes{
    char nombre[20];
    char tipo[20];
    int fuerza;
    int salud;
}personaje[5];

void P(){
    int f,j,mm;
    f=1;
    int indice=0;
    do{
        system("cls");
        printf("QUE DESEA HACER?\n1.-INGRESAR UN NUEVO PERSONAJE\n2.-MOSTRAR PERSONAJES\n3.-salir\n");
        scanf("%i",&mm);
        if(mm==1){
        do{
        system("cls");
        printf("INTRDUZCA EL NOMBRE DEL PERSONAJE %i\n",indice+1);
        scanf("%s",&personaje[indice].nombre);
        printf("INTRDUZCA EL TIPO DEL PERSONAJE %i\n",indice+1);
        scanf("%s",&personaje[indice].tipo);
        printf("INTRDUZCA LA FUERZA DEL PERSONAJE %i\n",indice+1);
        scanf("%i",&personaje[indice].fuerza);
        printf("INTRDUZCA LA SALUD DEL PERSONAJE %i\n",indice+1);
        scanf("%i",&personaje[indice].salud);
        printf("\nLOS DATOS DEL PERSONAJE %i SON:\n",indice+1);
        printf("NOMBRE: %s\n",personaje[indice].nombre);
        printf("TIPO: %s\n",personaje[indice].tipo);
        printf("FUERZA: %i\n",personaje[indice].fuerza);
        printf("SALUD: %i \n",personaje[indice].salud);
        system("pause");
        system("cls");
        printf("DESEA INGRESAR OTRO PERSONAJE?(maximo 5 pesonajes)\n1.-SI\n2.-NO\n");
        scanf("%i",&f);
        if(f==2){
            system("cls");
            printf("EXCELENTE, CONTINUE\n");
            system("pause");
        }
        indice++;
        }while(f!=2&&indice<5);
        }
        if(mm==2){
            for(j=0;j<indice;j++){
                printf("\nLOS DATOS DEL PERSONAJE %i SON:\n",j+1);
                printf("NOMBRE: %s\n",personaje[j].nombre);
                printf("TIPO: %s\n",personaje[j].tipo);
                printf("FUERZA: %i\n",personaje[j].fuerza);
                printf("SALUD: %i \n",personaje[j].salud);
                }
            system("pause");
        }
}while(mm!=3);

}
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
    char cadena[20];
    int n;
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
                system("cls");
                printf("ESCRIBE UNA CADENA DE CARACTERES DE MAX 20\n");
                fflush(stdin);
                fgets(cadena, sizeof(cadena),stdin);
                printf("CUANTAS VECES SE IMPRIMIRA EL ARREGLO?\n");
                scanf("%i",&n);
                printf("\n");
                mostrar(n,cadena);
                system("pause");
                break;
            case 3:
                system("cls");
                P();
                system("pause");
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

