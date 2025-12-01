#include<stdio.h>
int ouissance(int x){
    int i,pow=0;
    while(x%2==0){
        x=x/2;
        pow ++;
        if(x==1) break ;
    }
    if(pow==1)printf ("c'est pas un carre de 2");
    else printf ("c'est un carre de 2");
}
int main() {
    int x;
    printf ("saisir un entier:");
    scanf("%d",&x);
    puissance(x);
}