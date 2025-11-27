#include<stdio.h>
void f_tableau_multi(int n){
    prinf("multiplication table of %d :\n",n);
    for(int i = 0 ; i <= 10 ; i++){
        pritf(" %d * %d = %d", i, n, i*n);
    }
}
int main(){
    int nb;
    printf("enter a number:");
    scanf("%d", &nb);
    f_tableau_multi(nb);
    return 0;
}