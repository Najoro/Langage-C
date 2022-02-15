#include <stdio.h>
#include <stdlib.h>

int somme(int *nombre_1 , int *nombre_2);
void saisie(int nombre1 , int nombre2);
/*---------------------------------------------------*/
typedef struct nombre
{
     int nombre_1;
     int nombre_2;
}nombre;
/*---------------------------------------------------*/
int main (void)
{
     nombre point = {0,0};
     nombre *p_point = &point;

     sainsie(point.nombre_1 , point.nombre_2);

     printf("nombre 1 : %d \nnombre 2 : %d \n", p_point->nombre_1, p_point->nombre_2);
     printf("Somme : %d",somme(&(p_point->nombre_1), &(p_point->nombre_2)));

     return 0;
}

void saisie(int nombre_1 , int nombre_2)
{
     printf("nombre : ");
     scanf("%d", &nombre_1);
     printf("nombre : ");
     scanf("%d", &nombre_2);
}

int somme(int *nombre_1 , int *nombre_2)
{
     int resulat = (*nombre_1) + (*nombre_2);
     return resulat;
}