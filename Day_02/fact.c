#include<stdio.h>
int factorial(int nb) {
    if(nb==0 || nb==1){
        return 1;
    }
        else{
            return factorial(nb-1)*nb;
        }

    
}
int main(){
    int n;
    printf("entrer n");
    scanf("%d",&n);
    printf("le factoriel de %d est %d ",n,factorial(n));
}