#include <stdio.h>
void f_tableau_multi(int n) {
	int i;
	 int tab[11];
	 for  (i=0;i<11;i++)
	 tab[i]=n*i;
	 printf(" voici l affichage de tableau de multiplication de %d :\n",n);
	 for (i=0;i<11;i++)
	 printf("%d\t",tab[i]);
	 
}
