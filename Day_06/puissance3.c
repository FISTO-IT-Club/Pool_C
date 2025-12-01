#include<stdio.h>
#include<stdbool.h>
int main()
{
int n;
printf ("entrer un nbre n:");
scanf("%d",&n);
if (n % 3==0) 
    printf("est vrai cest une puissance de 3:",n);
else (n % 3 !=0)
    printf("est faux ce nest pas une puissance de 3:",n);
}
