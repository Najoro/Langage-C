#include <stdio.h>
#include "head.h"

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