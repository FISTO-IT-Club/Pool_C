#include<stdio.h>
int factorial(int nb){
    if (nb>1)
    return nb*factorial(nb-1);
else
return 1;
}
int main(){
    int n,f;
    printf("saisir un nbr:");
    scanf("%d",&n);
    f=factorial(n);
    printf("le factorial de %d est :%d",n,f);
    return 0;
}