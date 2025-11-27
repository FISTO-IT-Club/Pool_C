#include<stdio.h>
int sum_digits(int n){
    int sum = 0;
    for(int i = 0 ; i <= n ; i++){
        sum += i;
    }
    return sum;
}
int main () {
    int nb;
    printf("enter a number :");
    scanf("%d", &nb);
    printf("the sum from 0 to %d is %d", nb , sum_digits(nb));
    return 0;
}