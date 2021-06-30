#include<stdio.h>
#include<stdlib.h>


struct node
{
    int element  ;
    struct node * next ;

};
typedef struct node node;
typedef node* t_liste;



	t_liste creat_node(int);
	t_liste add_node(int  , t_liste);
	t_liste arraytoliste(int* , int );
	void printliste(t_liste );
	t_liste removenode( int , t_liste);
	void free_node(t_list L);