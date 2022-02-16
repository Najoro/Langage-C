#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
     FILE *fic = fopen("sauvegarde.text" , "r"); // lecture seul
 

 /*----------------------------*/ 
   //  char text[256];

  //   if(fic == NULL)
  //        exit (1);

  //  while (fgets(text, 255 , fic))
  //        printf("%s",text);

   //  fclose(fic);
/*----------------------------*/
    FILE *creer = fopen("creer.text" , "w");
    int position_curseur = 0;
  
     rename("name.c","nom.c"); // renome le fichier
     remove("nom.c"); // supprimer le fichier
  
       if (creer == NULL)
          exit(1);

     for (int i ='A'; i < 'Z'; i++)
          fputc(i , creer);

     printf("Position : %d \n", ftell(creer));
     
     fseek(creer , 4, SEEK_SET);
      printf("Position : %d \n", ftell(creer));

     fseek(creer ,0, SEEK_SET);
     printf("Position : %d \n", ftell(creer));


     fclose(creer);
     return 0;
}