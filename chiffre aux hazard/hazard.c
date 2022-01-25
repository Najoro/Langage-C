#include <stdio.h>
#include <stdlib.h>
#include <time.h>


 int main(void)
{
    int nombreHazard = 0;
    int nombreMyster = 0;
    const int MAX = 5 , MIN = 1;
    int i = 0;
    int resjouer = true;

    srand(time(NULL));
    nombreMyster = (rand() % (MAX - MIN + 1)) + MIN;
     printf("nombre mister %d \n",nombreMyster);

     while(rejouer)
     {
          
     }
    do{
        do{
            printf("entre un nombre [0 ,5]? ");
           scanf("%d", &nombreHazard);
        }
        while  (nombreHazard < 0 || nombreHazard > 5);
         
// Nombre au hazard u jeux

          if(i < 3)
          {
               if (nombreMyster < nombreHazard)
               {
                      printf("...MOIN  : ");
                      i++;
               }
                else if (nombreMyster > nombreHazard)
                     {
                           printf("...PLUS : ");
                           i++;
                     }
                else {
                    printf ("....BRAVO....");
                     }
          }
          else 
          {
                printf("GAME OVER");
                return 0;
          }
              
    }
    while(nombreMyster != nombreHazard );

    return 0;
}