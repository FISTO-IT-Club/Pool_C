#include <stdio.h>

int sum_digits(int n) {
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n=10;
    int sum = sum_digits(n);
    printf("sum of numbers from 0 to %d is %d",n,sum);
}