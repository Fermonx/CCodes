#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"


int vacio(pila *p)
{
    return(p==NULL);
}

int tope(pila *p)
{
    if(!(vacio(p)))
    {
        return(p->valor);
    }
    return (0);
}

void apilar(pila **p, int x)
{
    pila *t = new pila;
    t->valor=x;
    t->prox=*p;
    *p=t;
}

void desapilar(pila **p)
{
    pila *temp = *p;
    *p=(*p)->prox;
    delete temp;
}

void voltear(pila **p)
{
    int x;
    if(!(vacio(*p)))
    {
        x=tope(*p);
        desapilar(p);
        voltear(p);
    }
}

void mostrar(pila *p, int x)
{
    while(p!=NULL)
     {
       printf("\n");
       printf("| %d |",p->valor);
       printf("\n");
       p=p->prox;
     }
}

void multiplo(pila **p, int x, int l)
{
    int y;
    if(!(vacio(*p)))
    {
        y=tope(*p);
        desapilar(p);
        multiplo(p,l,x);
        if(!((x)==l))
        {
            apilar(p,y);
            x++;
        }
        else (x)=1;
    }
}