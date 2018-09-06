#include <stdio.h>
#include <stdlib.h>
#include "UTN_INPUT.h"


int main()
{   //Variables
    int opcion;
    float operadorUno=0;
    float operadorDos=0;
    float sumaResultado;
    float restaResultado;
    float divisionResultado;
    float multiplicacionResultado;
    float factorialUnoResultado;
    float factorialDosResultado;

    //Menu
    do
    {
        system("cls");
        printf("Bienvenido a La Calculadora \n");
        printf("1. Ingresar 1er operando (A=%.2f).\n", operadorUno);
        printf("2. Ingresar 2er operando (B=%.2f).\n", operadorDos);
        printf("3. Calcular las siguientes operaciones :\n");
        printf("   a) Calcular la suma (A+B)\n");
        printf("   b) Calcular la resta (A-B)\n");
        printf("   c) Calcular la division (A/B)\n");
        printf("   d) Calcular la multiplicacion (A*B)\n");
        printf("   e) Calcular el factorial (A!)\n");
        printf("4. Informar resultados \n");
        printf("5. Salir\n");
        printf("Elije una opcion: ");
        scanf("%d",&opcion);
        //Eleccion de opciones
        switch(opcion)
        {
        case 1://Obtencion del operando 1
            printf("1. Ingresar 1er operando: ");
            scanf("%f",&operadorUno);
            break;
        case 2://Obtencion del operando 2
            printf("2. Ingresar 2er operando: ");
            scanf("%f",&operadorDos);

            break;
        case 3://Obtencion de las funciones
            sumaResultado = operadorSuma(operadorUno,operadorDos);
            restaResultado = operadorResta(operadorUno,operadorDos);
            divisionResultado = operadorDivision(operadorUno,operadorDos);
            multiplicacionResultado = operadorMultiplicacion(operadorUno,operadorDos);
            factorialUnoResultado = operadorFactorialUno(operadorUno);
            factorialDosResultado = operadorFactorialDos(operadorDos);

            break;

        case 4://Mostrar Resultados
            printf("    a) la suma (A+B): %.2f\n",sumaResultado);
            printf("    b) la resta (A-B): %.2f\n",restaResultado);
            if(operadorDos==0)
            {
                printf("    c) No se puede dividir por cero\n");
            }
            else
            {
                printf("    c) la division (A/B): %.2f\n",divisionResultado);
            }
            printf("    d) la multiplicacion (A*B): %.2f\n",multiplicacionResultado);
            printf("    e) el factorial (A!): %.2f y el factorial (B!): %.2f\n ",factorialUnoResultado,factorialDosResultado);
            system("pause");
            break;
        case 5://Salir
            printf("Gracias por utilizar La Calculadora.\n");
            break;
        default:
            printf("Reingrese la opcion" );
            break;
            system("pause");

        }

    }
    while(opcion != 5);

    return 0;
}
