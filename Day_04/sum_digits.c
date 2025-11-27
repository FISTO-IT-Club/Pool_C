#include <stdio.h>

int sum_digits(int n)
{
    int i;
    int sum = 0;

    for (i = 0; i <= n; i++) {
        sum += i;
}   
int main()
   int n ;
   printf("entrer un nombre :") 
   scanf("%d", &n);
    printf("la somme des nombres de 0 a %d = %d", n,sum_digits(n));
    return 0;
}