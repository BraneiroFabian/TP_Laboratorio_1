#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "calculadora 3.h"






int main()
{

    int numero1;
    int numero2;
    char seguir='s';
    int flag=0;
    int flag2=0;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    float resultadoDivision;
    int resultadoFactorialA=0;
    int resultadoFactorialB=0;
    int flagOperacion=0;



    do{
            switch(menu(numero1, numero2, flag, flag2)){

            case 1:
                system("cls");
                printf("Ingrese el primer operando: ");
                scanf("%d", &numero1);
                flag=1;
                break;


            case 2:
                system("cls");
                printf("Ingrese el segundo operando: ");
                scanf("%d", &numero2);
                flag2=1;
                break;

            case 3:
                if (flag && flag2){
                system("cls");

                resultadoSuma=suma(numero1,numero2);
                resultadoResta=resta(numero1,numero2);
                resultadoMultiplicacion=multiplicacion(numero1,numero2);
                resultadoDivision=division(numero1,numero2);
                resultadoFactorialA=factorial(numero1);
                resultadoFactorialB=factorial(numero2);
                flagOperacion=1;
                printf("Los calculos se han realizado con exito.\n\n");



                }else
                {
                     system("cls");

                    printf("Debe ingresar primero los dos operandos\n\n");


                }
                system("pause");
                break;

            case 4:
                system("cls");
                if(flagOperacion){

                printf("El resultado de %d + %d es: %d\n ",numero1,numero2,resultadoSuma);
                printf("El resultado de %d -%d es: %d\n ",numero1,numero2,resultadoResta);
                printf("El resultado de %d * %d es: %d\n ",numero1,numero2,resultadoMultiplicacion);
                if(numero2==0){

                    printf("No se puede dividir por 0.");


                }else{
                    printf("El resultado de %d / %d es: %.2f\n ",numero1,numero2,resultadoDivision);

                }

                printf("El factorial de %d es: %d\n",numero1, resultadoFactorialA);
                printf("El factorial de %d es: %d\n\n",numero2, resultadoFactorialB);
                reset(&numero1);
                reset(&numero2);
                reset(&flag);
                reset(&flag2);
                reset(&flagOperacion);


                }else
                {
                    printf("Primero debes seleccionar la opcion 3.\n");
                }
                system("pause");
                break;


            case 5:
                seguir='n';
                break;

            default:
                system("cls");
                printf("Opcion no valida. Por favor, ingrese una opcion valida.\n");


                system("pause");
            }


















    fflush(stdin);
    }while(seguir=='s');



    return 0;
}










