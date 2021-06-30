#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


struct tableau
{
    unsigned taille;
    int *tete;
};
typedef struct tableau tableau;

                      
tableau creer(unsigned);
void affichageTableau(tableau);
void saisieTableau(tableau);
void liberer(tableau);
tableau concatener(tableau, tableau);
void triInsertion(tableau);
tableau triBulles(tableau);
