#include <stdio.h>
#include <stdlib.h>
#include "head.h"

     stack new_stack(void)
     {
          return NULL;
     }
/*---------------------------------------------------------*/
     boole is_umpty_stack(stack st)
     {
          if(st == NULL)
               return true;
          
          return false;
     }
/*---------------------------------------------------------*/
     stack push_stack (stack st ,int x)
     {
      stack_Element *element;
          
     element = malloc(sizeof(*element));
          if(element == NULL) // test si l'allocation est null
          {
               fprintf(stderr , "ERREUR DANS L'allocation. \n");
               exit(EXIT_FAILURE);    
          }

     element->valeur = x;
     element->next = st;

     return element;     
     }
 /*---------------------------------------------------------*/
   stack pop_stack (stack st)
   {
     stack_Element *element;
        
      if(is_umpty_stack(st))
          return new_stack();

      element = st->next;

      free(st);
     
     return element;

   }
 /*---------------------------------------------------------*/
     void print_stack(stack st)
      {
           if(is_umpty_stack(st))
           {
                printf("RIEN\n");
                return ;
           }
           while(!is_umpty_stack(st))
           {
                printf("[%d]\n" , st->valeur);
                 st = st->next; 
           }
      }
/*---------------------------------------------------------*/
     stack clear_stack (stack st)
     {
          stack_Element *element;
          if(is_umpty_stack(st))
               return new_stack();

          element = st->next; 

          free(st);
          return clear_stack(element);
     }
/*---------------------------------------------------------*/
     int top_stack(stack st)
     {
          if(is_umpty_stack(st))
          {
               printf("pas de Sommet");
               return -2;
          }

          return st->valeur;
     }
/*---------------------------------------------------------*/
     int lenght_stack(stack st)
     {
          int longeur = 0;

          while(!is_umpty_stack(st))
          {
               longeur++;
               st =st->next;
          }

          return longeur;

     }