#include <stdio.h>

void f_tableau_multi(int n){
    for (int  i = 0; i < 11; i++)
    {
        printf("%d*%d=%d \n",i,n,i*n);
    }
    
}
int main(){
    int n ;
    printf("print n :");
    scanf("%d",&n);
    printf("multiplication table\n");
    f_tableau_multi(n);
    return 0;

}