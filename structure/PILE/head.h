#ifndef __PILE__
#define __PILE__

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
     

#endif