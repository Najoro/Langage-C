#include <stdio.h>

//-----------PROTOTYPE ET STRUCTURE-----------------------------------------------------------

     typedef enum boole
     {
          false,// 0
          true // 1
     }boole;
/*definir une pile */
     typedef struct stack_Element
     {
          int valeur;
          struct stack_Element *next;

     }stack_Element , *stack;
/*prototype */
     stack new_stack (void); //creer une pile vide
     boole is_umpty_stack(stack st); // verifier si une pile est vide
     stack push_stack (stack st ,int x); // ajouter nouvelle element d'une pile
     stack pop_stack (stack st); // supprimer le dernier element d'une pile 
     stack clear_stack (stack st); // supprimer les element de la pile si on a une erreur ou la pile et vide
     int top_stack(stack st); // le SOMMET du pile
     int lenght_stack(stack st); //la LONGEUR du pile
     void print_stack(stack st); // afficher une pile
     
//-----------PROTOTYPE ET STRUCTURE-----------------------------------------------------------

int main(void)
{
     stack pile = new_stack(); // nouvelle pile
      print_stack(pile);
      
  printf("la sommet : %d \n", top_stack(pile));
  printf("la longuer du pile : %d \n",lenght_stack(pile));

     /*   if(is_umpty_stack(pile)) // teste si la pile est vide ou non
               printf("la pile est vide \n");
          else
               printf("la pile a des elements \n");
     */ 
printf("\n----------------------------\n\n");
//ajout elemente dans une pile 
     pile = push_stack(pile , 12);
     pile = push_stack(pile , 13);
     pile = push_stack(pile , 14);
     pile = push_stack(pile , 15);
     pile = push_stack(pile , 16);
     pile = push_stack(pile , 17);  
     print_stack(pile);

  printf("la sommet : %d \n", top_stack(pile));
  printf("la longuer du pile : %d \n",lenght_stack(pile));

printf("\n----------------------------\n\n");
//supprimer le dernier element du pile
     pile = pop_stack(pile);
     print_stack(pile);
  printf("la sommet : %d \n", top_stack(pile));
  printf("la longuer du pile : %d \n",lenght_stack(pile));

printf("\n----------------------------\n\n");
//restaurer une pile
     pile = clear_stack(pile);
      print_stack(pile);
      
  printf("la sommet : %d \n", top_stack(pile));
  printf("la longuer du pile : %d \n",lenght_stack(pile));

     return 0;
}

//-----------FONCTION-----------------------------------------------------------

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