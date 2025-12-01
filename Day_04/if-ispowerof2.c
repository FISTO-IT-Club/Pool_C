#include <stdio.h>

int f_ispowerof2(int x) {
    if (x <= 0)
        return 0;

    while (x % 2 == 0) {
        x /= 2;
    }

    return (x == 1);
}
int main(){
    int n ,x;
    printf("print n :");
    scanf("%d",&n);
    x=f_ispowerof2(n);
    if (x==1)
    {
        printf("%d is power of 2 :",n);
    }else{
        printf("%d is not power of 2:");
    }
    
}