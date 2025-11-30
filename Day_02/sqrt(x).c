#include <stdio.h>
int sqrt_x(int nb){
    int i;

    for ( i = 0 ; i*i <= nb ; i++){
        if(i*i==nb)
            return i;
    }
    return i - 1;
}
int main(){
    int x;
    printf("entrer un nombre :");
    scanf("%d",&x);
    printf("la racine carre de %d est : %d", x , sqrt_x(x));
}