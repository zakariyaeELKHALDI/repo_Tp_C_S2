#include "header.h"


t_liste creat_node(int element  )
{
    t_liste node1 = (t_liste)malloc(sizeof(node));
    node1 ->element = element;
    node1 ->next = NULL ;
    return node1 ;
}


t_liste add_node(int x , t_liste l)
{
    t_liste c = creat_node( x );
    if(l == NULL)
        l = c;
    else
    {
        t_liste temp = l;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = c ;
    }
    return l ;
}

t_liste arraytoliste(int*  tab , int n)
{
    t_liste c = creat_node(tab[0]);
    for(int i=1 ; i<n ; i++)
    {
        c = add_node(tab[i] , c );
    }
    return c;
}


void printliste(t_liste t)
{
    if(t = NULL)
    printf("[]");
    else
    {
        printf("[");
        t_liste temp = t;
        while (temp->next != NULL)
        {
            printf(" %d ," ,temp->element);
            temp = temp->next;
        }
        printf(" %d ]" ,temp->element);
    }
    return;
}


t_liste removenode( int n , t_liste L )
{
    
    t_liste t,s;
    s=L;
    t=L;
    if(L->next == NULL)
    	return L;    	
    int i = 0;
    while( s->next != NULL )
    {
	
	s = s->next;
	i++;
    }
    int j;
    j=i;
    i = 0 ;
    s=L;
    if(n<0 || n> j )
	printf(" :-(" );
    if(n>0 || n< j)
    {
	while(i<n)
	{	
		t = s;
		s = s->next;
		i++;
	}
	t->next = s->next;
	free(t);
	return L;
    }			  
    if(n == 0)
    {
    t_liste temp=L;
    L=L->next;
    free(temp);
    }

}


void free_node(t_list L){
    while(L!=NULL){
        t_list p=L;
        L=L->next;
        free(p);
    }
    return ;
}

