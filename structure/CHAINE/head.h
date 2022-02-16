#ifndef __LISTE_CHAINE__
#define __LISTE_CHAINE__

// boolean 
typedef enum
{
     true,
     false
}boole;
//structure liste
typedef listElement
{
     int value;
     struct listElement *next;
     
}listElement , *list;

//Prototype
 void newList ; //nouvelle liste
 boole is_empty(list li); // liste vide
 int longueurList (list li);
#endif 