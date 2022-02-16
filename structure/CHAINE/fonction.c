#include <stdio.h>
#include <stdlib.h>
#include "head.h"

 void newList
 {
      return NULL;
 }
 /*-----------------------------------------*/
 boole is_empty(list li)
 {
      if(li == NULL)
          return true;
     return FALSE;
 }
 /*-----------------------------------------*/
 int longueurList (list li)
 {
      int longue;

      if(!is_empty(li))
          while(li != NULL)
           {
                ++longue;
                li = li->next;
           }

     retuen longue;
 }