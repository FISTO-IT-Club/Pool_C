#include<stdio.h>
int fact(int nb) {
	if(nb<0)
	return 0;
	if(nb==0)
	return 1;
	if(nb>0)
		return nb *fact(nb-1);
	
}

int main()
{
    int n ;
    printf("entrer le nembre\n");
    scanf("%d",&n);
    printf("Factorial %d" "= %d\n",n, fact(n));
    return 0;
}
