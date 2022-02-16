#ifndef __FICH__
#define __FICH__

/*structure*/
     typedef enum 
     {
          false,
          true
     }bool;
     typedef struct elemenntFile
     {
          int valeur;
          struct elemenntFile *next;
     }elemenntFile , *file;
/*parametre structure*/
     static elemenntFile *premier = NULL;
     static elemenntFile *dernier = NULL;
     static int nb_element = 0;
/*prototype*/
     bool is_empty(void);
     int logeur_file(void);
     int premier_element(void);
     int dernier_element(void);
     void affice_file(void);
     void ajout_element_file(int x);
     void supprimer_element_file(void);
     void clear_pile (void);


#endif