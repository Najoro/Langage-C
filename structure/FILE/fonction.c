#include <stdio.h>
#include <stdlib.h>
#include "head.h"

bool is_empty(void)
{
     if(premier == NULL && dernier ==NULL)
          return true;
     return false;
}
/*--------------------------------------------------*/
int logeur_file(void)
{
        return nb_element;
}
/*--------------------------------------------------*/
int premier_element(void)
{
     if(is_empty())
          exit(1);

     return premier->valeur;
}
/*--------------------------------------------------*/
int dernier_element(void)
{
     if(is_empty())
          exit(1);

     return dernier->valeur;
}

/*--------------------------------------------------*/
void affice_file(void)
{
     if(is_empty())
     {
         printf(" RIEN a aficher ,la file est vide");
          return;
     }
     elemenntFile *temporaire = premier;

     while (temporaire != NULL)
     {
          printf("[%d]  ", temporaire->valeur);
          temporaire = temporaire->next;
     }
     printf("\n");
}
/*--------------------------------------------------*/
void ajout_element_file(int x)
{
    elemenntFile *element = malloc(sizeof(*element));
        if(element == NULL) 
        {
            fprintf(stderr , "ERREUR D'ALLOCATION");
            exit(EXIT_FAILURE);
        }
        element->valeur = x;
        element->next = NULL;

        if(is_empty())
        {
            premier = element;
            dernier = element;
        }
        else
        {
            dernier->next = element;
            dernier = element;
        }
        nb_element++;
}
/*--------------------------------------------------*/
void supprimer_element_file(void)
{
    if(is_empty())
    {
        printf("rien a suprimer la file est vide \n");
        exit(1);
    }

    elemenntFile *temp = premier;

    if(premier == dernier)
    {
        premier = NULL;
        dernier = NULL;
    }
    else
        premier = premier->next;

        

    free(temp);
    nb_element--;
}
void clear_pile (void)
{
     while(!is_empty())
        supprimer_element_file();
}