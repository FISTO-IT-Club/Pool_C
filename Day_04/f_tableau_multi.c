#include <stdio.h>

void f_tableau_multi(int n) {
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d \n",n,i,n*i);
    }
}
int main(){
    int n;
    printf("fill in a number: ");
    scanf("%d",&n);

    f_tableau_multi(n);
    return 0;
}