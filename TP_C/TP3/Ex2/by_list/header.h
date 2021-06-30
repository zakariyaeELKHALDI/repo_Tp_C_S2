#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct cellule
{
    int element;
    struct cellule * suivant;
};
typedef struct cellule cellule;
typedef struct cellule * liste;





//prototypes:
int testVide(liste );
int longueur(liste );
void affichageListe(liste);
void ajoutDebut(int ,liste * );
void ajoutFin(int ,liste * );
void liberer(liste);
void inserer(liste * , int ); 
liste concatener( liste , liste );
liste concatener2(liste , liste);
liste merge(liste,liste );
liste merge2(liste ,liste );
int  recherche(int , liste );
liste duplicat(liste );
