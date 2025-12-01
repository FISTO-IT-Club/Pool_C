#include <stdio.h>
int somme(int n){
    int i, sum=0 ;
    for (i=0;i<=n;i++){
        sum=sum+i ;
    }
    return sum;
}
int main () {
    int n;
    printf ("saisir un entier:");
    scanf("%d",&n);
    printf ("la somme de 0 a %d est : %d")
}
