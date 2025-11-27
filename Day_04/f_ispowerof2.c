#include<stdio.h>
int f_ispowerof2(int x){
    if (x>0){
        if((x & (x-1)) == 0){
            printf("%d is a power of 2.",x);
        }else printf("%d is not a power of 2.",x);
    }else printf("%d is not a power of 2.",x);
}
int main (){
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    f_ispowerof2(n);
    return 0;
}