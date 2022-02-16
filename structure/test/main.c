#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date
{
  char UserName[15];
  int pv;
  int pm;

}date;
/*--------------------------------------------------------*/
 void create( date *p)
{
  strcpy(p->UserName , "Najoro");
  p->pv = 40;
  p->pm = 20;
}
/*--------------------------------------------------------*/
int main(void)
{
    date name;
    create(&name);

  printf(" nom : %s \n pv : %d \n pm : %d \n",name.UserName,name.pv,name.pm);

  printf("%p", sizeof(date));

    return 0;  
}