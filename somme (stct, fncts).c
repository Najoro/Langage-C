#include <stdio.h>
#include <stdlib.h>

/*---------------------------------------------------*/
//PROTOTYPE
int somme(int *nombre_1 , int *nombre_2);
/*---------------------------------------------------*/
//STRUCTURE
typedef struct nombre
{
     int nombre_1;
     int nombre_2;
}nombre;
/*---------------------------------------------------*/
//FONCTION
int main (void)
{
     nombre point;
     nombre *p_point = &point;

     printf("nombre 1 :");
     scanf("%d", &(point.nombre_1));
     printf("nombre 2 :");
     scanf("%d",&(point.nombre_2));

     printf("%d + %d = %d", p_point->nombre_1, p_point->nombre_2,somme(&(p_point->nombre_1), &(p_point->nombre_2)));

     return 0;
}
int somme(int *nombre_1 , int *nombre_2)
{
     int resulat = (*nombre_1) + (*nombre_2);
     return resulat;
}