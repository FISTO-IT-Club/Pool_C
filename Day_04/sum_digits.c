#include <stdio.h>
int somme(int n){
    int somme=0 ;
    for(int i=0;i<n;i++) somme+=i;
    return somme;
}
int main(){
    int n;
    printf("Saisir un entier n:\n");
    scanf("%d",&n);
    printf("La somme des entier de 0 a %d = %d",n,somme(n));
    return 0;
}