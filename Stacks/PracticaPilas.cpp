#include <stdio.h>
#include <stdlib.h>
#include "Primitivas.h"



void main()
{
    pila *p= NULL;
    int o=-1,n=0,l=0;
    while (o!=0)
    {
        printf("\t\t Menu de Pila \n\n");
        printf("\t1. Llenar la Pila. \n\n");
        printf("\t2. Eliminar de la Pila. \n\n");
        printf("\t3. Invertir la Pila. \n\n");
        printf("\t4. Mostrar la Pila. \n\n");
        printf("\t5. Eliminar desde el fondo en posicion multiplo de L\n\n");
        printf("\t0. Salir. \n\n");
        scanf_s("%d",&o);
        system("cls");
        switch(o)
        {
            case 1: printf("Valor a Insertar: ");
                    scanf_s("%d",&n);
                    apilar(&p, n);
                    system("cls");

            break;

            case 2: printf("Recuerde que se elimina desde el tope.");
                    system("pause");
                    if(!(vacio(p)))
                    {
                        desapilar(&p);
                    }
                    else
                    {
                        printf("La pila esta vacia.");
                        system("pause");
                       
                    }
                    system("cls");

            break;

            case 3: printf("Invirtiendo la pila. . .");
                    system("pause");
                    voltear(&p);
                    system("cls");

            break;

            case 4: 
                    if(!(vacio(p)))
                    {
                        mostrar(p,n);
                        system("pause");
                    }
                    else
                    {
                        printf("La pila esta vacia.");
                    }
                    system("cls");
            break;

            case 5: 
                    printf("Numero L: ");
                    scanf_s("%d",&l);
                    multiplo(&p, n, l);
                    system("cls");

            break;

            case 0: exit(0);

            break;
        }
    }
}
