#include <stdio.h>
#include "head.h"

int main(void)
{
     int i;
     printf("la taille %d \n" ,logeur_file());
     affice_file();

     ajout_element_file(12);
     ajout_element_file(13);
     ajout_element_file(14);
     ajout_element_file(15);
     ajout_element_file(16);
     ajout_element_file(17);

      printf("la taille %d \n\n" ,logeur_file());
     affice_file();
     printf("\nLe premier Element = [%d]",premier_element());
     printf("\nLe premier Element = [%d]",dernier_element());

     supprimer_element_file();

      printf("la taille %d \n\n" ,logeur_file());
     affice_file();
     printf("\nLe premier Element = [%d]",premier_element());
     printf("\nLe premier Element = [%d]",dernier_element());

     printf("\nclear all\n");
     clear_pile();
      printf("la taille %d \n" ,logeur_file());
     affice_file();
     
     return 0;
}
