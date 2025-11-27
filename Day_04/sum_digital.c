#include <stdio.h>
int sum_digits(int n) {
	char str[25];
	sprintf(str,"%d",n);
	int i,sum;
    for (i=0,sum=0;str[i]!='\0';i++)
	sum=sum+(str[i] -'0'); 
	return sum;
	
	
}
