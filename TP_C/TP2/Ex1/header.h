#include<stdio.h>
#include<stdlib.h>

struct t_point
{
        int L;
        int l;
};
typedef struct t_point t_point;

	void saisie(t_point *);
	void affichage(t_point );
	char ** tab(t_point ); 
	void vider(t_point ,char** ); 
	char **  tab_saisie(t_point ,char ** );
	t_point get_point();
	void flood_fill(char**  , t_point  , t_point  , char  , char  );

