#include<stdio.h>
int sqrt_x(int nb) {
	int i;
	if (nb<0)
	return 0;
	if(nb==0)
	return 0;
		if(nb==1)
	return 1;
	for(i=1;i<=nb;i++){
		if((i*i)>nb)
		
		return i-1;
	}
}

int main()
{
    int n ;
    printf("entrer le nembre\n");
    scanf("%d",&n);
    printf("sqrt de %d" "= %d\n",n, sqrt_x(n));
    return 0;
}
