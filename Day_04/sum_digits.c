#include <stdio.h>
int sum_digits(int n ){
    int sum=0 ;
    for (int  i = 0; i < n+1; i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n ;
    printf("print n ");
    scanf("%d",&n);
    printf("sum digits from 0 to %d is %d",n,sum_digits(n));
    return 0;
}