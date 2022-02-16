#include <stdio.h>
#include <stdlib.h>

/* structure */
typedef struct Element Element; // creation liste 
typedef struct Liste Liste; //controle la liste

/*prototipe fonction */
Liste *initialisation();
void insere(Liste *liste ,int new_nombre);

/*-----------------------------------------*/
int main (void)
{
     return 0;
}
/*-----------------------------------------*/
struct Element
{
     int nombre ;
     Element *suivant;
};
/*-----------------------------------------*/
struct Liste
{
     Liste *premier;
};
/*-----------------------------------------*/
Liste *initialisation()
{
     Liste *liste = malloc(sizeof(*liste));
     Element *element = malloc(sizeof(*element));

     if(element == NULL || liste == NULL)
     {
          fprintf(stderr , "ERREUR ALLOCATION initalisation");
          exit(EXIT_FAILURE);
     }

     element->nombre = 0;
     element->suivant = NULL;
     liste->premier = element;

     return liste;
}
void insere(Liste *liste ,int new_nombre)
{
     Element *nouveaux = malloc(sizeof(*nouveaux));
          if(nouveaux == NULL || liste == NULL)
          {    
               fprintf(stderr , "ERREUR ALLOCATION NOUVEAUX");
               exit(EXIT_FAILURE);
          }
     
     nouveaux->nombre = new_nombre;

     nouveaux->suivant =  liste->premier;
     liste->premier = nouveaux ;

}