#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "calculadora 3.h"




int menu (int a, int b, int flag, int flag2){

    int opcion;

    system("cls");

        printf("- - - - - MENU - - - - -\n");
        if(flag&&flag2)
        {
            printf("Los operandos ingresados actualmente son: A= %d B= %d\n\n",a,b);
        }
        else
            if(flag2==0 && flag)
        {
            printf("Los numeros cargados actualmente son: A= %d B= y\n\n",a);
        }
        else
            if(flag2 && flag==0)
        {
            printf("Los numeros cargados actualmente son: A= x B= %d\n\n",b);
        }
        else
        {
            printf("Los numeros cargados actualmente son: A= x B= y\n\n");
        }


        printf("1- Ingrese primer operando\n");
        printf("2- Ingrese segundo operando\n");
        printf("3- Realizar los calculos (Suma, resta, multiplicacion, division, factorial)\n");
        printf("4- Mostrar resultados\n");
        printf("5- Salir\n\n");
        printf("Ingrese una opcion: ");

        scanf("%d", &opcion);







    return opcion;

}

int suma (int a, int b){


    return a+b;
}

int resta (int a, int b){

    return a-b;

}

int multiplicacion(int a, int b){

    return a*b;


}

float division(int a, int b){

    return (float)a/b;


}

int factorial(int a){
    int fact=0;

    if(a>=0)
    {
        if(a==1||a==0)
        {
            fact=1;
        }
        else
        {
            fact=a*factorial(a-1);
        }

    }


    return fact;



}
void reset(int*p){

    *p=0;


}
