/* EJERCICIO: Dados dos listas elimine los elementos repetidos*/

#include<stdio.h>
#include<stdlib.h>

struct listaA
{
	int valorA;
	lista *proxA;
};

struct listaB
{
	int valorB;
	lista *proxB;
};

void agregarA(lista **p, int x)
{
	lista *t= new lista;
	t->valorA=x;
	t->proxA=*p;
	*p=t;
}

void agregarB(lista **p, int x)
{
	lista *t= new lista;
	t->valorB=x;
	t->proxB=*p;
	*p=t;
}

void eliminar()
{
}

void mostrar(lista *p)
{
	lista *t = p;
	lista *l = p;
	printf("\n\n\n\t\t");
	while (t)
	{
		printf("[%d]->",t->valorA);
		t = t->proxA;
	}
	while (l)
	{
		printf("[%d]->",l->valorB);
		l = l->proxB;
	}
}


void main ()
{

	lista * p=NULL;
	int x = 0; 
	int op;
	op=-1;
	
	while (op!=0)
	{
		printf (" \n\n\t\tMENU PRINCIPAL DE LISTAS\n\n ");
		printf ("\t1. Agregar Datos a Lista A\n");
		printf ("\t2. Agregar Datos a Lista B\n");
		printf ("\t3. Eliminar Datos Comunes\n");
		printf ("\t4. Muestre las dos listas\n");

		scanf_s ("%d", &op);
		system("cls");
		printf("\n Opcion %i\n\n",op);

	switch (op)
	{
		case 1: printf("Indique numero a insertar en la lista A = ");
		scanf_s("%d",&x);
		agregarA(&p,x);
		
		break;
		
		case 4: mostrar(p);

		break;
		
		case 2: printf("Indique numero a insertar en la lista B = ");
		scanf_s("%d",&x);
		agregarB(&p,x);
		
		break;
		
		case 3: printf("Inserte el numero a eliminar = ");
		scanf_s("%d",&x);
		eliminar(&p,x);
		
		break;
	};
	
	printf("\n\n");
	if (op) system("pause");
	system("cls");

	};

}