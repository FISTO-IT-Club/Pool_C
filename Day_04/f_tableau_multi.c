#include<stdio.h>

void f_tableau_multi(int n) {
     for (int i=0;i<=10;i++){
       printf("%d x %d = %d\n",i,n,i*n);
     }
}

int main() {
    int n;
    printf("Entrez un number : ");
    scanf("%d",&n);
    f_tableau_multi(n);
    return 0;
}