#include<stdio.h>
int sum_arra(int arr[]) {
    int sum = 0;
    for(int i = 0; i < 5; i++) 
    {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int n;
    int arr[5];
    printf("Enter 5 nombre :");
    for(int i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    n = sum_arra(arr);
    printf("La somme des nombres est : %d\n", n);
    return 0;
}