#include <stdio.h>
#include<stdlib.h>


struct noeud
{
    int cle;
    struct noeud * gauche;
    struct noeud * droit;
};
typedef struct noeud noeud;
typedef struct noeud * arbre;




// Prototypes
int estVideArbre(arbre); 
int racine(arbre);
arbre gauche(arbre);
arbre droit(arbre);
arbre faireArbre(int, arbre,arbre);
void libererArbre(arbre *);
int hauteur(arbre);



void equilibrer_Avl(int ,arbre * );



#define N 200

struct pile_arbre
{
    arbre tete[N];
    unsigned longueur;
};
typedef struct pile_arbre pile_arbre;

// Prototypes
int estVidePile(pile_arbre);
void empiler(arbre,pile_arbre *);
arbre depiler(pile_arbre *);

